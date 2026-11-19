<?php
namespace NativePlaywright;

final class Frame
{
    public string $url = '';
    public string $name = '';
    public string $loaderId = '';
    /** loader whose lifecycle events are tracked in $lifecycle */
    public string $lifecycleLoader = '';
    /** @var array<string, bool> init, DOMContentLoaded, load, networkAlmostIdle, networkIdle */
    public array $lifecycle = [];
    public int $sameDocumentNavigations = 0;
    public bool $detached = false;
    public int $mainContext = 0;
    public int $utilContext = 0;
    private int $injectedContext = 0;

    public function __construct(private Page $page, public readonly string $id, public string $parentId = '')
    {
    }

    public function page(): Page
    {
        return $this->page;
    }

    public function url(): string
    {
        return $this->url;
    }

    public function name(): string
    {
        return $this->name;
    }

    public function isDetached(): bool
    {
        return $this->detached;
    }

    public function parentFrame(): ?Frame
    {
        return $this->parentId === '' ? null : $this->page->frameById($this->parentId);
    }

    /** @return list<Frame> */
    public function childFrames(): array
    {
        $out = [];
        foreach ($this->page->frames() as $f) {
            if ($f->parentId === $this->id) {
                $out[] = $f;
            }
        }
        return $out;
    }

    public function resetContexts(): void
    {
        $this->mainContext = 0;
        $this->utilContext = 0;
        $this->injectedContext = 0;
    }

    public function contextDestroyed(int $id): void
    {
        if ($this->mainContext === $id) {
            $this->mainContext = 0;
        }
        if ($this->utilContext === $id) {
            $this->utilContext = 0;
            $this->injectedContext = 0;
        }
    }

    public static function isContextLost(string $msg): bool
    {
        return str_contains($msg, 'Cannot find context')
            || str_contains($msg, 'Execution context was destroyed')
            || str_contains($msg, 'Inspected target navigated or closed')
            || str_contains($msg, 'Cannot find default execution context')
            || str_contains($msg, 'No frame for given id')
            || str_contains($msg, 'Frame with the given id was not found')
            || str_contains($msg, '__pwlite is not defined');
    }

    // ------------------------------------------------------------ evaluation internals

    private function ensureUtil(): int
    {
        if ($this->utilContext !== 0 && $this->injectedContext === $this->utilContext) {
            return $this->utilContext;
        }
        if ($this->utilContext === 0) {
            $r = $this->page->send('Page.createIsolatedWorld', [
                'frameId' => $this->id, 'worldName' => Injected::WORLD, 'grantUniveralAccess' => true,
            ]);
            $this->utilContext = (int)$r['executionContextId'];
        }
        $ctx = $this->utilContext;
        $r = $this->page->send('Runtime.evaluate', ['expression' => Injected::SOURCE, 'contextId' => $ctx, 'returnByValue' => true]);
        if (isset($r['exceptionDetails'])) {
            throw new Exception('Failed to inject: ' . (string)($r['exceptionDetails']['exception']['description'] ?? $r['exceptionDetails']['text'] ?? ''));
        }
        $this->injectedContext = $ctx;
        return $ctx;
    }

    /** Evaluate in the utility world; returns the CDP RemoteObject. Retries across navigations. */
    public function utilCall(string $expression, bool $byValue = true): array
    {
        for ($attempt = 0; ; $attempt++) {
            try {
                $ctx = $this->ensureUtil();
                $r = $this->page->send('Runtime.evaluate', [
                    'expression' => $expression, 'contextId' => $ctx, 'returnByValue' => $byValue, 'awaitPromise' => true,
                ]);
            } catch (Exception $e) {
                if ($attempt < 3 && self::isContextLost($e->getMessage())) {
                    $this->utilContext = 0;
                    $this->injectedContext = 0;
                    continue;
                }
                throw $e;
            }
            if (isset($r['exceptionDetails'])) {
                $d = (array)$r['exceptionDetails'];
                $msg = (string)($d['exception']['description'] ?? $d['text'] ?? 'error');
                if ($attempt < 3 && self::isContextLost($msg)) {
                    $this->utilContext = 0;
                    $this->injectedContext = 0;
                    continue;
                }
                $msg = preg_replace('/^Error: /', '', explode("\n    at ", $msg)[0]);
                throw new Exception((string)$msg);
            }
            return (array)$r['result'];
        }
    }

    public function utilValue(string $expression): mixed
    {
        return Util::remoteValue($this->utilCall($expression, true));
    }

    public function mainContextId(): int
    {
        if ($this->mainContext === 0) {
            $self = $this;
            $this->page->waitForCondition(static fn(): bool => $self->mainContext !== 0 || $self->detached, $this->page->timeoutSeconds([]), 'waiting for execution context');
        }
        return $this->mainContext;
    }

    /** Move an element from the utility world into the main world; returns the new objectId. */
    public function adoptToMain(string $objectId): string
    {
        $node = (array)($this->page->send('DOM.describeNode', ['objectId' => $objectId])['node'] ?? []);
        $this->page->releaseObject($objectId);
        $r = $this->page->send('DOM.resolveNode', ['backendNodeId' => $node['backendNodeId'], 'executionContextId' => $this->mainContextId()]);
        return (string)$r['object']['objectId'];
    }

    /** [x, y] of this frame's viewport inside the main frame's viewport. */
    public function offset(): array
    {
        if ($this->parentId === '') {
            return [0.0, 0.0];
        }
        $parent = $this->parentFrame();
        if ($parent === null) {
            return [0.0, 0.0];
        }
        $owner = $this->page->send('DOM.getFrameOwner', ['frameId' => $this->id]);
        $box = $this->page->send('DOM.getBoxModel', ['backendNodeId' => $owner['backendNodeId']]);
        $q = (array)$box['model']['content'];
        return [(float)$q[0], (float)$q[1]];
    }

    // ------------------------------------------------------------ navigation

    private static function lifecycleName(string $waitUntil): string
    {
        return match ($waitUntil) {
            'load' => 'load',
            'domcontentloaded' => 'DOMContentLoaded',
            'networkidle' => 'networkIdle',
            'commit' => 'commit',
            default => throw new Exception("Unsupported waitUntil option: $waitUntil (use load|domcontentloaded|networkidle|commit)"),
        };
    }

    public function lifecycleReached(string $loaderId, string $event): bool
    {
        if ($this->loaderId !== $loaderId) {
            return false;
        }
        if ($event === 'commit') {
            return true;
        }
        return $this->lifecycleLoader === $loaderId && isset($this->lifecycle[$event]);
    }

    /** options: waitUntil (load|domcontentloaded|networkidle|commit), timeout (ms), referer */
    public function goto(string $url, array $options = []): ?Response
    {
        $timeout = $this->page->navigationTimeoutSeconds($options);
        $event = self::lifecycleName((string)($options['waitUntil'] ?? 'load'));
        $url = Util::resolveUrl($this->page->context()->baseURL(), $url);
        $p = ['url' => $url, 'frameId' => $this->id];
        if (isset($options['referer'])) {
            $p['referrer'] = (string)$options['referer'];
        }
        $deadline = $timeout > 0 ? microtime(true) + $timeout : 0.0;
        $r = $this->page->send('Page.navigate', $p, $timeout);
        if (isset($r['errorText']) && $r['errorText'] !== '') {
            throw new Exception("page.goto: {$r['errorText']} at $url");
        }
        $loaderId = (string)($r['loaderId'] ?? '');
        if ($loaderId === '') {
            return null; // same-document navigation
        }
        $this->waitForLoader($loaderId, $event, $deadline, $timeout, 'page.goto');
        return $this->page->navigationResponse($loaderId);
    }

    private function waitForLoader(string $loaderId, string $event, float $deadline, float $timeout, string $api): void
    {
        $self = $this;
        $left = $deadline > 0 ? max(0.001, $deadline - microtime(true)) : 0.0;
        try {
            $this->page->waitForCondition(static function () use ($self, $loaderId, $event): bool {
                if ($self->detached) {
                    throw new Exception('Navigating frame was detached!');
                }
                return $self->lifecycleReached($loaderId, $event);
            }, $left, $api);
        } catch (TimeoutError $e) {
            throw new TimeoutError(sprintf('%s: Timeout %dms exceeded.', $api, (int)round($timeout * 1000)));
        }
    }

    /** Run $action and wait for the navigation it triggers. options: waitUntil, timeout, url */
    public function expectNavigation(\Closure $action, array $options = []): ?Response
    {
        $timeout = $this->page->navigationTimeoutSeconds($options);
        $event = self::lifecycleName((string)($options['waitUntil'] ?? 'load'));
        $oldLoader = $this->loaderId;
        $oldSame = $this->sameDocumentNavigations;
        $pattern = $options['url'] ?? null;
        $base = $this->page->context()->baseURL();
        $action();
        $self = $this;
        $this->page->waitForCondition(static function () use ($self, $oldLoader, $oldSame, $event, $pattern, $base): bool {
            if ($self->detached) {
                throw new Exception('Navigating frame was detached!');
            }
            $navigated = ($self->loaderId !== $oldLoader && $self->lifecycleReached($self->loaderId, $event))
                || $self->sameDocumentNavigations !== $oldSame;
            if (!$navigated) {
                return false;
            }
            return $pattern === null || Util::urlMatches($pattern, $self->url, $base);
        }, $timeout, 'page.waitForNavigation');
        return $this->loaderId !== $oldLoader ? $this->page->navigationResponse($this->loaderId) : null;
    }

    /** state: load | domcontentloaded | networkidle */
    public function waitForLoadState(string $state = 'load', array $options = []): void
    {
        $event = self::lifecycleName($state);
        $self = $this;
        $this->page->waitForCondition(
            static fn(): bool => $self->lifecycleReached($self->loaderId, $event),
            $this->page->navigationTimeoutSeconds($options),
            'page.waitForLoadState'
        );
    }

    /** $url: glob, "/regex/", or Closure(string $url): bool. options: waitUntil, timeout */
    public function waitForURL(string|\Closure $url, array $options = []): void
    {
        $event = self::lifecycleName((string)($options['waitUntil'] ?? 'load'));
        $self = $this;
        $base = $this->page->context()->baseURL();
        $this->page->waitForCondition(
            static fn(): bool => Util::urlMatches($url, $self->url, $base) && $self->lifecycleReached($self->loaderId, $event),
            $this->page->navigationTimeoutSeconds($options),
            'page.waitForURL'
        );
    }

    // ------------------------------------------------------------ content

    public function title(): string
    {
        return (string)$this->utilValue('document.title');
    }

    public function content(): string
    {
        return (string)$this->utilValue(
            '(() => { let s = ""; if (document.doctype) s = new XMLSerializer().serializeToString(document.doctype); '
            . 'if (document.documentElement) s += document.documentElement.outerHTML; return s; })()'
        );
    }

    /** options: waitUntil (load|domcontentloaded), timeout */
    public function setContent(string $html, array $options = []): void
    {
        $this->utilValue('(() => { document.open(); document.write(' . Locator::js($html) . '); document.close(); return true; })()');
        $until = (string)($options['waitUntil'] ?? 'load');
        $want = $until === 'domcontentloaded' ? '"interactive","complete"' : '"complete"';
        $deadline = microtime(true) + $this->page->navigationTimeoutSeconds($options);
        while (true) {
            $ok = $this->utilValue('[' . $want . '].includes(document.readyState)');
            if ($ok === true) {
                break;
            }
            if (microtime(true) > $deadline) {
                throw new TimeoutError('page.setContent: Timeout exceeded.');
            }
            $this->page->waitForTimeout(10);
        }
    }

    /** Expression or function source. Functions receive $arg. Runs in the page's main world. */
    public function evaluate(string $js, mixed $arg = null): mixed
    {
        for ($attempt = 0; ; $attempt++) {
            try {
                if (Util::isFunction($js)) {
                    return $this->page->callFunction($js, [['value' => $arg]], '', $this->mainContextId());
                }
                // by reference first: primitives come back inline (1 round trip), objects get serialized safely
                $p = ['expression' => $js, 'returnByValue' => false, 'awaitPromise' => true];
                if ($this->parentId !== '' || $this->mainContext !== 0) {
                    $p['contextId'] = $this->mainContextId();
                }
                $r = $this->page->send('Runtime.evaluate', $p);
                if (isset($r['exceptionDetails'])) {
                    $d = (array)$r['exceptionDetails'];
                    throw new Exception('page.evaluate: ' . (string)($d['exception']['description'] ?? $d['text'] ?? 'error'));
                }
                $res = (array)$r['result'];
                if (!isset($res['objectId'])) {
                    return Util::remoteValue($res);
                }
                $oid = (string)$res['objectId'];
                try {
                    return $this->page->callFunction('function () { return this; }', [], $oid);
                } finally {
                    $this->page->releaseObject($oid);
                }
            } catch (Exception $e) {
                if ($attempt < 3 && self::isContextLost($e->getMessage())) {
                    $this->mainContext = 0;
                    continue;
                }
                throw $e;
            }
        }
    }

    /** options: timeout (ms), polling ('raf' | ms). Returns the truthy value. */
    public function waitForFunction(string $js, mixed $arg = null, array $options = []): mixed
    {
        $fn = Util::isFunction($js) ? $js : '() => (' . $js . ')';
        $polling = $options['polling'] ?? 'raf';
        $wait = $polling === 'raf' ? 'new Promise(r => requestAnimationFrame(() => r()))' : 'new Promise(r => setTimeout(r, ' . (int)$polling . '))';
        $timeout = $this->page->timeoutSeconds($options);
        $deadline = $timeout > 0 ? microtime(true) + $timeout : 0.0;
        while (true) {
            $slice = 1000;
            if ($deadline > 0) {
                $slice = (int)max(1, min(1000, ($deadline - microtime(true)) * 1000));
            }
            $wrapper = 'async (arg) => { const fn = (' . $fn . '); const end = Date.now() + ' . $slice . '; '
                . 'for (;;) { const v = await fn(arg); if (v) return { ok: true, v }; if (Date.now() >= end) return { ok: false }; await ' . $wait . '; } }';
            try {
                $r = $this->page->callFunction($wrapper, [['value' => $arg]], '', $this->mainContextId());
                if (is_array($r) && !empty($r['ok'])) {
                    return $r['v'] ?? true;
                }
            } catch (Exception $e) {
                if (!self::isContextLost($e->getMessage())) {
                    throw $e;
                }
                $this->mainContext = 0;
            }
            if ($deadline > 0 && microtime(true) >= $deadline) {
                throw new TimeoutError(sprintf('page.waitForFunction: Timeout %dms exceeded.', (int)round($timeout * 1000)));
            }
        }
    }

    /** options: url, path, content, type */
    public function addScriptTag(array $options): void
    {
        $content = isset($options['path']) ? (string)file_get_contents((string)$options['path']) . "\n//# sourceURL=" . $options['path'] : (string)($options['content'] ?? '');
        $this->evaluate('async (o) => { const s = document.createElement("script"); if (o.type) s.type = o.type; '
            . 'if (o.url) { s.src = o.url; const p = new Promise((res, rej) => { s.onload = res; s.onerror = () => rej(new Error("Failed to load script " + o.url)); }); document.head.appendChild(s); await p; } '
            . 'else { s.text = o.content; document.head.appendChild(s); } }', ['url' => $options['url'] ?? null, 'type' => $options['type'] ?? null, 'content' => $content]);
    }

    /** options: url, path, content */
    public function addStyleTag(array $options): void
    {
        $content = isset($options['path']) ? (string)file_get_contents((string)$options['path']) : (string)($options['content'] ?? '');
        $this->evaluate('async (o) => { let el; if (o.url) { el = document.createElement("link"); el.rel = "stylesheet"; el.href = o.url; '
            . 'const p = new Promise((res, rej) => { el.onload = res; el.onerror = () => rej(new Error("Failed to load stylesheet " + o.url)); }); document.head.appendChild(el); await p; } '
            . 'else { el = document.createElement("style"); el.textContent = o.content; document.head.appendChild(el); } }', ['url' => $options['url'] ?? null, 'content' => $content]);
    }

    // ------------------------------------------------------------ locators

    public function locator(string $selector, array $options = []): Locator
    {
        return (new Locator($this, $selector))->filter($options);
    }

    public function getByText(string $text, array $options = []): Locator
    {
        return new Locator($this, Locator::byText($text, (bool)($options['exact'] ?? false)));
    }

    public function getByRole(string $role, array $options = []): Locator
    {
        return new Locator($this, Locator::byRole($role, $options));
    }

    public function getByLabel(string $text, array $options = []): Locator
    {
        return new Locator($this, Locator::byLabel($text, (bool)($options['exact'] ?? false)));
    }

    public function getByPlaceholder(string $text, array $options = []): Locator
    {
        return new Locator($this, Locator::byAttr('placeholder', $text, (bool)($options['exact'] ?? false)));
    }

    public function getByAltText(string $text, array $options = []): Locator
    {
        return new Locator($this, Locator::byAttr('alt', $text, (bool)($options['exact'] ?? false)));
    }

    public function getByTitle(string $text, array $options = []): Locator
    {
        return new Locator($this, Locator::byAttr('title', $text, (bool)($options['exact'] ?? false)));
    }

    public function getByTestId(string $testId): Locator
    {
        return new Locator($this, Locator::byTestId($testId));
    }

    public function frameLocator(string $selector): FrameLocator
    {
        return new FrameLocator($this, $selector);
    }

    // ------------------------------------------------------------ selector shortcuts (Playwright's page.click(selector) etc.)

    public function click(string $selector, array $options = []): void
    {
        $this->locator($selector)->click($options);
    }

    public function dblclick(string $selector, array $options = []): void
    {
        $this->locator($selector)->dblclick($options);
    }

    public function tap(string $selector, array $options = []): void
    {
        $this->locator($selector)->tap($options);
    }

    public function fill(string $selector, string $value, array $options = []): void
    {
        $this->locator($selector)->fill($value, $options);
    }

    public function type(string $selector, string $text, array $options = []): void
    {
        $this->locator($selector)->pressSequentially($text, $options);
    }

    public function press(string $selector, string $key, array $options = []): void
    {
        $this->locator($selector)->press($key, $options);
    }

    public function hover(string $selector, array $options = []): void
    {
        $this->locator($selector)->hover($options);
    }

    public function focus(string $selector, array $options = []): void
    {
        $this->locator($selector)->focus($options);
    }

    public function check(string $selector, array $options = []): void
    {
        $this->locator($selector)->check($options);
    }

    public function uncheck(string $selector, array $options = []): void
    {
        $this->locator($selector)->uncheck($options);
    }

    public function setChecked(string $selector, bool $checked, array $options = []): void
    {
        $this->locator($selector)->setChecked($checked, $options);
    }

    public function selectOption(string $selector, string|array $values, array $options = []): array
    {
        return $this->locator($selector)->selectOption($values, $options);
    }

    public function setInputFiles(string $selector, string|array $files, array $options = []): void
    {
        $this->locator($selector)->setInputFiles($files, $options);
    }

    public function dragAndDrop(string $source, string $target, array $options = []): void
    {
        $this->locator($source)->dragTo($this->locator($target), $options);
    }

    public function dispatchEvent(string $selector, string $type, array $eventInit = [], array $options = []): void
    {
        $this->locator($selector)->dispatchEvent($type, $eventInit, $options);
    }

    public function textContent(string $selector, array $options = []): ?string
    {
        return $this->locator($selector)->textContent($options);
    }

    public function innerText(string $selector, array $options = []): string
    {
        return $this->locator($selector)->innerText($options);
    }

    public function innerHTML(string $selector, array $options = []): string
    {
        return $this->locator($selector)->innerHTML($options);
    }

    public function getAttribute(string $selector, string $name, array $options = []): ?string
    {
        return $this->locator($selector)->getAttribute($name, $options);
    }

    public function inputValue(string $selector, array $options = []): string
    {
        return $this->locator($selector)->inputValue($options);
    }

    public function isVisible(string $selector): bool
    {
        return $this->locator($selector)->isVisible();
    }

    public function isHidden(string $selector): bool
    {
        return $this->locator($selector)->isHidden();
    }

    public function isEnabled(string $selector, array $options = []): bool
    {
        return $this->locator($selector)->isEnabled($options);
    }

    public function isDisabled(string $selector, array $options = []): bool
    {
        return $this->locator($selector)->isDisabled($options);
    }

    public function isEditable(string $selector, array $options = []): bool
    {
        return $this->locator($selector)->isEditable($options);
    }

    public function isChecked(string $selector, array $options = []): bool
    {
        return $this->locator($selector)->isChecked($options);
    }

    /** options: state (attached|detached|visible|hidden), timeout. Returns a Locator for the element (or null for detached/hidden). */
    public function waitForSelector(string $selector, array $options = []): ?Locator
    {
        $loc = $this->locator($selector);
        $loc->waitFor($options);
        $state = (string)($options['state'] ?? 'visible');
        return ($state === 'detached' || $state === 'hidden') ? null : $loc;
    }

    /** Run $js(element, $arg) on the first match (no waiting). */
    public function evalOnSelector(string $selector, string $js, mixed $arg = null): mixed
    {
        return $this->locator($selector)->evaluate($js, $arg, ['timeout' => 0]);
    }

    /** Run $js(elements, $arg) on all matches. */
    public function evalOnSelectorAll(string $selector, string $js, mixed $arg = null): mixed
    {
        return $this->locator($selector)->evaluateAll($js, $arg);
    }
}
