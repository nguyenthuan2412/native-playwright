<?php
namespace NativePlaywright;

final class Browser
{
    use EventEmitter;

    /** @var array<string, BrowserContext> */
    private array $contexts = [];
    /** @var array<string, Page> targetId => Page (initialized) */
    private array $pages = [];
    /** @var array<string, Page> sessionId => Page */
    private array $sessions = [];
    /** @var array<string, Waiter> targetId => waiter for newPage() */
    private array $pageWaiters = [];
    /** @var array<string, Download> */
    private array $downloads = [];
    private bool $closed = false;
    private string $userAgent = '';
    private string $version = '';
    private ?BrowserContext $defaultContext = null;

    public function __construct(private Transport $t, private Connection $conn, private array $launchOptions)
    {
        $self = $this;
        $t->on('', static function (string $method, array $params) use ($self): void {
            $self->onProtocolEvent($method, $params);
        });
        $t->onClose(static function () use ($self): void {
            $self->didDisconnect();
        });
    }

    /** Same as Playwright::chromium()->launch($options). */
    public static function launch(array $options = []): Browser
    {
        return (new BrowserType())->launch($options);
    }

    public function initialize(float $timeout): void
    {
        $r = $this->t->callMany([
            ['Browser.getVersion'],
            ['Target.setAutoAttach', ['autoAttach' => true, 'waitForDebuggerOnStart' => true, 'flatten' => true]],
        ]);
        $this->version = (string)$r[0]['product'];
        $this->userAgent = str_replace('HeadlessChrome', 'Chrome', (string)$r[0]['userAgent']);
    }

    protected function transport(): Transport
    {
        return $this->t;
    }

    protected function defaultTimeout(): float
    {
        return 30.0;
    }

    public function launchOption(string $name): mixed
    {
        return $this->launchOptions[$name] ?? null;
    }

    public function slowMo(): float
    {
        return (float)($this->launchOptions['slowMo'] ?? 0);
    }

    public function defaultUserAgent(): string
    {
        return $this->userAgent;
    }

    /** Raw CDP call on the browser session. */
    public function send(string $method, array $params = []): array
    {
        return $this->t->call($method, $params, '', 30.0);
    }

    public function connection(): Connection
    {
        return $this->conn;
    }

    public function pid(): int
    {
        return $this->conn->pid();
    }

    public function version(): string
    {
        $p = strpos($this->version, '/');
        return $p === false ? $this->version : substr($this->version, $p + 1);
    }

    public function browserType(): BrowserType
    {
        return new BrowserType();
    }

    public function isConnected(): bool
    {
        return !$this->closed && !$this->t->isClosed();
    }

    /** @return list<BrowserContext> */
    public function contexts(): array
    {
        $out = array_values($this->contexts);
        if ($this->defaultContext !== null) {
            array_unshift($out, $this->defaultContext);
        }
        return $out;
    }

    public function newContext(array $options = []): BrowserContext
    {
        $p = ['disposeOnDetach' => true];
        if (isset($options['proxy']['server'])) {
            $p['proxyServer'] = (string)$options['proxy']['server'];
            if (isset($options['proxy']['bypass'])) {
                $p['proxyBypassList'] = (string)$options['proxy']['bypass'];
            }
        }
        $r = $this->send('Target.createBrowserContext', $p);
        $ctx = new BrowserContext($this, $this->t, (string)$r['browserContextId'], $options);
        $this->contexts[$ctx->id()] = $ctx;
        $ctx->initialize();
        return $ctx;
    }

    /** New page in its own new context (closed together with the page). */
    public function newPage(array $options = []): Page
    {
        $ctx = $this->newContext($options);
        $page = $ctx->newPage();
        $ctx->setOwner($page);
        return $page;
    }

    public function useDefaultContext(array $options): BrowserContext
    {
        $this->defaultContext = new BrowserContext($this, $this->t, '', $options, true);
        $this->defaultContext->initialize();
        return $this->defaultContext;
    }

    public function createPage(BrowserContext $ctx): Page
    {
        $p = ['url' => 'about:blank'];
        if ($ctx->id() !== '') {
            $p['browserContextId'] = $ctx->id();
        }
        $r = $this->send('Target.createTarget', $p);
        $tid = (string)$r['targetId'];
        if (isset($this->pages[$tid])) {
            return $this->pages[$tid];
        }
        $w = $this->t->newWaiter();
        $this->pageWaiters[$tid] = $w;
        try {
            return $this->t->await($w, $ctx->defaultTimeoutMs() / 1000, 'browserContext.newPage');
        } finally {
            unset($this->pageWaiters[$tid]);
        }
    }

    public function contextClosed(BrowserContext $ctx): void
    {
        unset($this->contexts[$ctx->id()]);
    }

    // ------------------------------------------------------------ protocol events

    public function onProtocolEvent(string $method, array $p): void
    {
        switch ($method) {
            case 'Target.attachedToTarget':
                $info = (array)$p['targetInfo'];
                $sid = (string)$p['sessionId'];
                $self = $this;
                if (($info['type'] ?? '') === 'page') {
                    $this->t->async(static function () use ($self, $sid, $info): void {
                        $self->attachPage($sid, $info);
                    });
                } else {
                    // iframes (OOPIF), workers...: let them run
                    $t = $this->t;
                    $this->t->async(static function () use ($t, $sid): void {
                        try {
                            $t->call('Runtime.runIfWaitingForDebugger', [], $sid, 10.0);
                        } catch (Exception $e) {
                        }
                    });
                }
                break;
            case 'Target.detachedFromTarget':
                $sid = (string)$p['sessionId'];
                $page = $this->sessions[$sid] ?? null;
                if ($page !== null) {
                    unset($this->sessions[$sid], $this->pages[$page->targetId]);
                    $page->didClose();
                }
                $this->t->offSession($sid);
                break;
            case 'Browser.downloadWillBegin':
                $page = $this->pageForFrame((string)$p['frameId']);
                if ($page !== null) {
                    $d = new Download($page, $page->context(), (string)$p['guid'], (string)$p['url'], (string)$p['suggestedFilename'], $page->context()->downloadDir());
                    $this->downloads[(string)$p['guid']] = $d;
                    $page->emitDownload($d);
                }
                break;
            case 'Browser.downloadProgress':
                $d = $this->downloads[(string)$p['guid']] ?? null;
                if ($d !== null) {
                    $d->state = (string)$p['state'];
                    $d->receivedBytes = (int)($p['receivedBytes'] ?? 0);
                    $d->totalBytes = (int)($p['totalBytes'] ?? 0);
                    if ($d->state !== 'inProgress') {
                        unset($this->downloads[(string)$p['guid']]);
                        $d->page()->poke();
                    }
                }
                break;
        }
    }

    private function pageForFrame(string $frameId): ?Page
    {
        foreach ($this->pages as $page) {
            if ($page->frameById($frameId) !== null) {
                return $page;
            }
        }
        return null;
    }

    public function attachPage(string $sid, array $info): void
    {
        $cid = (string)($info['browserContextId'] ?? '');
        $ctx = $this->contexts[$cid] ?? $this->defaultContext;
        $tid = (string)$info['targetId'];
        if ($ctx === null) {
            try {
                $this->t->call('Runtime.runIfWaitingForDebugger', [], $sid, 10.0);
            } catch (Exception $e) {
            }
            return;
        }
        $page = new Page($this, $ctx, $this->t, $sid, $tid);
        $this->sessions[$sid] = $page;
        try {
            $page->initialize();
        } catch (Exception $e) {
            unset($this->sessions[$sid]);
            $w = $this->pageWaiters[$tid] ?? null;
            if ($w !== null) {
                $w->reject($e);
            }
            return;
        }
        $this->pages[$tid] = $page;
        $opener = $this->pages[(string)($info['openerId'] ?? '')] ?? null;
        $page->setOpener($opener);
        $ctx->didCreatePage($page);
        if ($opener !== null) {
            $opener->emitPopup($page);
        }
        $w = $this->pageWaiters[$tid] ?? null;
        if ($w !== null) {
            $w->resolve($page);
        }
    }

    // ------------------------------------------------------------ close

    public function didDisconnect(): void
    {
        if ($this->closed) {
            return;
        }
        $this->closed = true;
        foreach ($this->pages as $p) {
            $p->didClose();
        }
        $this->pages = [];
        $this->sessions = [];
        $this->emit('disconnected', $this);
    }

    public function close(): void
    {
        if ($this->closed && $this->t->isClosed()) {
            return;
        }
        foreach ($this->contexts as $ctx) {
            if (!$ctx->isClosed()) {
                try {
                    $ctx->close();
                } catch (Exception $e) {
                }
            }
        }
        $this->t->close();
        $this->didDisconnect();
    }

    public function newBrowserCDPSession(): CDPSession
    {
        return new CDPSession($this->t, '', 30.0);
    }
}
