<?php
namespace NativePlaywright;

final class Page
{
    use EventEmitter;

    public readonly Keyboard $keyboard;
    public readonly Mouse $mouse;
    public readonly Touchscreen $touchscreen;

    /** @var array<string, Frame> */
    private array $frames = [];
    private string $mainFrameId = '';
    /** @var array<string, Request> in-flight requests */
    private array $requests = [];
    /** @var array<string, Request> recent navigation requests by loaderId */
    private array $navRequests = [];
    /** @var list<RouteHandler> */
    private array $routes = [];
    /** @var array<string, \Closure> */
    private array $bindings = [];
    /** @var list<Waiter> woken on any state change */
    private array $pokes = [];
    private bool $closed = false;
    private bool $fetchEnabled = false;
    private bool $fileChooserIntercepted = false;
    private ?float $defaultTimeout = null;
    private ?float $defaultNavigationTimeout = null;
    private ?array $viewport = null;
    private array $extraHeaders = [];
    private array $media = [];
    private int $listenerId = 0;
    private ?Page $opener = null;

    public function __construct(
        private Browser $browser,
        private BrowserContext $context,
        private Transport $t,
        public readonly string $sessionId,
        public readonly string $targetId,
    ) {
        $this->keyboard = new Keyboard($this);
        $this->mouse = new Mouse($this, $this->keyboard);
        $this->touchscreen = new Touchscreen($this, $this->keyboard);
        $self = $this;
        $this->listenerId = $t->on($sessionId, static function (string $method, array $params) use ($self): void {
            $self->onProtocolEvent($method, $params);
        });
    }

    protected function transport(): Transport
    {
        return $this->t;
    }

    protected function defaultTimeout(): float
    {
        return $this->timeoutSeconds([]);
    }

    // ------------------------------------------------------------ plumbing

    public function send(string $method, array $params = [], ?float $timeout = null): array
    {
        return $this->t->call($method, $params, $this->sessionId, $timeout ?? $this->timeoutSeconds([]));
    }

    /** @param list<array{0:string,1?:array}> $calls */
    public function sendMany(array $calls): array
    {
        return $this->t->callMany($calls, $this->sessionId);
    }

    public function releaseObject(string $objectId): void
    {
        try {
            $this->send('Runtime.releaseObject', ['objectId' => $objectId]);
        } catch (Exception $e) {
        }
    }

    public function callOn(string $objectId, string $fn): mixed
    {
        return $this->callFunction($fn, [], $objectId);
    }

    /** Runtime.callFunctionOn with returnByValue; target is $objectId or execution context $contextId. */
    public function callFunction(string $fn, array $args, string $objectId = '', int $contextId = 0): mixed
    {
        $wrapped = 'async function (...a) { return (' . Util::SERIALIZER . ')(await (' . $fn . ').apply(this, a)); }';
        $p = ['functionDeclaration' => $wrapped, 'arguments' => $args, 'returnByValue' => true, 'awaitPromise' => true];
        if ($objectId !== '') {
            $p['objectId'] = $objectId;
        } else {
            $p['executionContextId'] = $contextId;
        }
        $r = $this->send('Runtime.callFunctionOn', $p);
        if (isset($r['exceptionDetails'])) {
            $d = (array)$r['exceptionDetails'];
            throw new Exception('evaluate: ' . (string)($d['exception']['description'] ?? $d['text'] ?? 'error'));
        }
        return Util::remoteValue((array)$r['result']);
    }

    /** Seconds; options['timeout'] in ms (0 = no timeout). */
    public function timeoutSeconds(array $options = []): float
    {
        if (isset($options['timeout'])) {
            return (float)$options['timeout'] / 1000;
        }
        return ($this->defaultTimeout ?? $this->context->defaultTimeoutMs()) / 1000;
    }

    public function navigationTimeoutSeconds(array $options = []): float
    {
        if (isset($options['timeout'])) {
            return (float)$options['timeout'] / 1000;
        }
        return ($this->defaultNavigationTimeout ?? $this->defaultTimeout ?? $this->context->defaultNavigationTimeoutMs()) / 1000;
    }

    public function setDefaultTimeout(float $ms): void
    {
        $this->defaultTimeout = $ms;
    }

    public function setDefaultNavigationTimeout(float $ms): void
    {
        $this->defaultNavigationTimeout = $ms;
    }

    /** Wait until $cond() is true, re-checking on every page event. $timeout in seconds (0 = none). */
    public function waitForCondition(\Closure $cond, float $timeout, string $what): void
    {
        $deadline = $timeout > 0 ? microtime(true) + $timeout : 0.0;
        while (!$cond()) {
            if ($this->closed) {
                throw new Exception("$what: Target page, context or browser has been closed");
            }
            $left = 0.0;
            if ($deadline > 0) {
                $left = $deadline - microtime(true);
                if ($left <= 0) {
                    throw new TimeoutError(sprintf('%s: Timeout %dms exceeded.', $what, (int)round($timeout * 1000)));
                }
            }
            $w = $this->t->newWaiter();
            $this->pokes[] = $w;
            try {
                $this->t->await($w, $left, $what);
            } catch (TimeoutError $e) {
                if (!$cond()) {
                    throw new TimeoutError(sprintf('%s: Timeout %dms exceeded.', $what, (int)round($timeout * 1000)));
                }
            }
        }
    }

    public function poke(): void
    {
        if ($this->pokes === []) {
            return;
        }
        $ws = $this->pokes;
        $this->pokes = [];
        foreach ($ws as $w) {
            $w->resolve(true);
        }
    }

    /** Hook after input actions (slowMo). */
    public function afterAction(): void
    {
        $slow = $this->browser->slowMo();
        if ($slow > 0) {
            $this->waitForTimeout($slow);
        }
    }

    // ------------------------------------------------------------ initialization

    /** Called while the target is paused (waitForDebuggerOnStart). */
    public function initialize(?array $frameTree = null): void
    {
        $ctx = $this->context;
        $o = $ctx->options();
        $calls = [
            ['Page.enable'],
            ['Page.getFrameTree'],
            ['Page.setLifecycleEventsEnabled', ['enabled' => true]],
            ['Runtime.enable'],
            ['Network.enable', [
                'maxTotalBufferSize' => (int)($o['networkBufferSize'] ?? 16 * 1024 * 1024),
                'maxResourceBufferSize' => (int)($o['networkResourceBufferSize'] ?? 8 * 1024 * 1024),
            ]],
        ];
        foreach ($this->emulationCalls() as $c) {
            $calls[] = $c;
        }
        foreach ($ctx->initScripts() as $src) {
            $calls[] = ['Page.addScriptToEvaluateOnNewDocument', ['source' => $src]];
        }
        foreach ($ctx->bindingNames() as $name) {
            $calls[] = ['Runtime.addBinding', ['name' => '__pwlite_b_' . $name]];
            $calls[] = ['Page.addScriptToEvaluateOnNewDocument', ['source' => self::bindingScript($name)]];
        }
        if ($this->needsInterception()) {
            $calls[] = ['Fetch.enable', $this->fetchParams()];
            $this->fetchEnabled = true;
        }
        $calls[] = ['Runtime.runIfWaitingForDebugger'];
        $res = $this->t->callMany($calls, $this->sessionId, true);
        $this->loadFrameTree((array)($res[1]['frameTree'] ?? []));
    }

    private function emulationCalls(): array
    {
        $o = $this->context->options();
        $calls = [];
        $vp = array_key_exists('viewport', $o) ? $o['viewport'] : ['width' => 1280, 'height' => 720];
        $this->viewport = is_array($vp) ? ['width' => (int)$vp['width'], 'height' => (int)$vp['height']] : null;
        if ($this->viewport !== null) {
            $calls[] = ['Emulation.setDeviceMetricsOverride', $this->metrics($this->viewport)];
        }
        if (!empty($o['hasTouch']) || !empty($o['isMobile'])) {
            $calls[] = ['Emulation.setTouchEmulationEnabled', ['enabled' => !empty($o['hasTouch']), 'maxTouchPoints' => 1]];
        }
        $ua = (string)($o['userAgent'] ?? $this->browser->defaultUserAgent());
        $ua_p = ['userAgent' => $ua];
        if (isset($o['locale'])) {
            $ua_p['acceptLanguage'] = (string)$o['locale'];
        }
        $calls[] = ['Network.setUserAgentOverride', $ua_p];
        if (isset($o['locale'])) {
            $calls[] = ['Emulation.setLocaleOverride', ['locale' => (string)$o['locale']]];
        }
        if (isset($o['timezoneId'])) {
            $calls[] = ['Emulation.setTimezoneOverride', ['timezoneId' => (string)$o['timezoneId']]];
        }
        $geo = $this->context->geolocation();
        if ($geo !== null) {
            $calls[] = ['Emulation.setGeolocationOverride', ['latitude' => (float)$geo['latitude'], 'longitude' => (float)$geo['longitude'], 'accuracy' => (float)($geo['accuracy'] ?? 0)]];
        }
        $this->media = [
            'colorScheme' => $o['colorScheme'] ?? 'light',
            'reducedMotion' => $o['reducedMotion'] ?? null,
            'forcedColors' => $o['forcedColors'] ?? null,
            'media' => null,
        ];
        $calls[] = ['Emulation.setEmulatedMedia', $this->mediaParams()];
        if (array_key_exists('javaScriptEnabled', $o) && $o['javaScriptEnabled'] === false) {
            $calls[] = ['Emulation.setScriptExecutionDisabled', ['value' => true]];
        }
        if (!empty($o['bypassCSP'])) {
            $calls[] = ['Page.setBypassCSP', ['enabled' => true]];
        }
        if (!empty($o['ignoreHTTPSErrors'])) {
            $calls[] = ['Security.setIgnoreCertificateErrors', ['ignore' => true]];
        }
        $headers = $this->context->extraHTTPHeaders();
        if ($headers !== []) {
            $calls[] = ['Network.setExtraHTTPHeaders', ['headers' => (object)$headers]];
        }
        if ($this->context->isOffline()) {
            $calls[] = ['Network.emulateNetworkConditions', ['offline' => true, 'latency' => 0, 'downloadThroughput' => -1, 'uploadThroughput' => -1]];
        }
        return $calls;
    }

    private function metrics(array $vp): array
    {
        $o = $this->context->options();
        $p = [
            'width' => (int)$vp['width'],
            'height' => (int)$vp['height'],
            'deviceScaleFactor' => (float)($o['deviceScaleFactor'] ?? 1),
            'mobile' => !empty($o['isMobile']),
        ];
        if (isset($o['screen'])) {
            $p['screenWidth'] = (int)$o['screen']['width'];
            $p['screenHeight'] = (int)$o['screen']['height'];
        }
        return $p;
    }

    private function mediaParams(): array
    {
        $features = [];
        foreach (['colorScheme' => 'prefers-color-scheme', 'reducedMotion' => 'prefers-reduced-motion', 'forcedColors' => 'forced-colors'] as $k => $name) {
            $v = $this->media[$k] ?? null;
            if ($v !== null) {
                $features[] = ['name' => $name, 'value' => (string)$v];
            }
        }
        return ['media' => (string)($this->media['media'] ?? ''), 'features' => $features];
    }

    private function loadFrameTree(array $tree, string $parent = ''): void
    {
        if (!isset($tree['frame'])) {
            return;
        }
        $f = (array)$tree['frame'];
        $id = (string)$f['id'];
        $frame = $this->frames[$id] ?? new Frame($this, $id, $parent);
        $frame->parentId = $parent;
        $frame->url = (string)($f['url'] ?? '') . (string)($f['urlFragment'] ?? '');
        $frame->name = (string)($f['name'] ?? '');
        if ($frame->loaderId === '') {
            $frame->loaderId = (string)($f['loaderId'] ?? '');
        }
        $this->frames[$id] = $frame;
        if ($parent === '') {
            $this->mainFrameId = $id;
        }
        foreach ((array)($tree['childFrames'] ?? []) as $child) {
            $this->loadFrameTree((array)$child, $id);
        }
    }

    // ------------------------------------------------------------ protocol events

    public function onProtocolEvent(string $method, array $p): void
    {
        switch ($method) {
            case 'Page.frameAttached':
                $id = (string)$p['frameId'];
                if (!isset($this->frames[$id])) {
                    $this->frames[$id] = new Frame($this, $id, (string)($p['parentFrameId'] ?? ''));
                    $this->emit('frameattached', $this->frames[$id]);
                }
                break;
            case 'Page.frameNavigated':
                $f = (array)$p['frame'];
                $id = (string)$f['id'];
                $parent = (string)($f['parentId'] ?? '');
                $frame = $this->frames[$id] ?? null;
                if ($frame === null) {
                    $frame = new Frame($this, $id, $parent);
                    $this->frames[$id] = $frame;
                }
                if ($parent === '') {
                    $this->mainFrameId = $id;
                }
                $frame->url = (string)($f['url'] ?? '') . (string)($f['urlFragment'] ?? '');
                $frame->name = (string)($f['name'] ?? '');
                $frame->loaderId = (string)($f['loaderId'] ?? '');
                // child frames of the old document are gone
                foreach ($this->frames as $cid => $child) {
                    if ($child->parentId === $id) {
                        $this->detachFrame($cid);
                    }
                }
                $this->emit('framenavigated', $frame);
                $this->poke();
                break;
            case 'Page.navigatedWithinDocument':
                $frame = $this->frames[(string)$p['frameId']] ?? null;
                if ($frame !== null) {
                    $frame->url = (string)$p['url'];
                    $frame->sameDocumentNavigations++;
                    $this->emit('framenavigated', $frame);
                    $this->poke();
                }
                break;
            case 'Page.frameDetached':
                if (($p['reason'] ?? '') !== 'swap') {
                    $this->detachFrame((string)$p['frameId']);
                    $this->poke();
                }
                break;
            case 'Page.lifecycleEvent':
                $frame = $this->frames[(string)$p['frameId']] ?? null;
                if ($frame === null) {
                    break;
                }
                $name = (string)$p['name'];
                $loader = (string)$p['loaderId'];
                if ($name === 'init') {
                    $frame->lifecycleLoader = $loader;
                    $frame->lifecycle = [];
                }
                if ($frame->lifecycleLoader === $loader || $frame->lifecycleLoader === '') {
                    $frame->lifecycleLoader = $loader;
                    $frame->lifecycle[$name] = true;
                }
                if ($frame->id === $this->mainFrameId) {
                    if ($name === 'load') {
                        $this->emit('load', $this);
                    } elseif ($name === 'DOMContentLoaded') {
                        $this->emit('domcontentloaded', $this);
                    }
                }
                $this->poke();
                break;
            case 'Runtime.executionContextCreated':
                $c = (array)$p['context'];
                $aux = (array)($c['auxData'] ?? []);
                $fid = (string)($aux['frameId'] ?? '');
                $frame = $this->frames[$fid] ?? null;
                if ($frame === null && $fid !== '') {
                    // can arrive before Page.getFrameTree's result during initialize()
                    $frame = new Frame($this, $fid, '');
                    $this->frames[$fid] = $frame;
                }
                if ($frame !== null) {
                    if (!empty($aux['isDefault'])) {
                        $frame->mainContext = (int)$c['id'];
                    } elseif (($c['name'] ?? '') === Injected::WORLD && $frame->utilContext === 0) {
                        $frame->utilContext = (int)$c['id'];
                    }
                    $this->poke();
                }
                break;
            case 'Runtime.executionContextDestroyed':
                $cid = (int)$p['executionContextId'];
                foreach ($this->frames as $frame) {
                    $frame->contextDestroyed($cid);
                }
                break;
            case 'Runtime.executionContextsCleared':
                foreach ($this->frames as $frame) {
                    $frame->resetContexts();
                }
                break;
            case 'Runtime.consoleAPICalled':
                $this->onConsole($p);
                break;
            case 'Runtime.exceptionThrown':
                $d = (array)$p['exceptionDetails'];
                $ex = (array)($d['exception'] ?? []);
                $desc = (string)($ex['description'] ?? $d['text'] ?? '');
                $first = (string)preg_replace('/^Uncaught /', '', explode("\n", $desc)[0]);
                $name = (string)($ex['className'] ?? 'Error');
                $msg = $first;
                if (preg_match('/^([A-Za-z_$][\w$]*): (.*)$/s', $first, $mm) === 1) {
                    $name = $mm[1];
                    $msg = $mm[2];
                }
                $err = new JSError($name, $msg, $desc);
                $this->emit('pageerror', $err);
                $this->context->emitFromPage('weberror', $err);
                break;
            case 'Runtime.bindingCalled':
                $this->onBindingCalled($p);
                break;
            case 'Page.javascriptDialogOpening':
                $this->onDialog($p);
                break;
            case 'Page.fileChooserOpened':
                $this->emit('filechooser', new FileChooser($this, (int)($p['backendNodeId'] ?? 0), ($p['mode'] ?? '') === 'selectMultiple'));
                break;
            case 'Network.requestWillBeSent':
                $this->onRequest($p);
                break;
            case 'Network.responseReceived':
                $this->onResponse($p);
                break;
            case 'Network.loadingFinished':
                $req = $this->requests[(string)$p['requestId']] ?? null;
                if ($req !== null) {
                    unset($this->requests[(string)$p['requestId']]);
                    if ($req->response !== null) {
                        $req->response->encodedLength = (int)($p['encodedDataLength'] ?? 0);
                    }
                    $req->finished = true;
                    $req->endTime = microtime(true);
                    $this->emitBoth('requestfinished', $req);
                    $this->poke();
                }
                break;
            case 'Network.loadingFailed':
                $req = $this->requests[(string)$p['requestId']] ?? null;
                if ($req !== null) {
                    unset($this->requests[(string)$p['requestId']]);
                    $req->failure = (string)($p['errorText'] ?? 'failed');
                    $req->finished = true;
                    $req->endTime = microtime(true);
                    $this->emitBoth('requestfailed', $req);
                    $this->poke();
                }
                break;
            case 'Fetch.requestPaused':
                $self = $this;
                $this->t->async(static function () use ($self, $p): void {
                    $self->onRequestPaused($p);
                });
                break;
            case 'Fetch.authRequired':
                $self = $this;
                $cred = $this->context->httpCredentials();
                $this->t->async(static function () use ($self, $p, $cred): void {
                    $resp = $cred === null ? ['response' => 'CancelAuth'] : ['response' => 'ProvideCredentials', 'username' => (string)$cred['username'], 'password' => (string)$cred['password']];
                    $self->send('Fetch.continueWithAuth', ['requestId' => $p['requestId'], 'authChallengeResponse' => $resp]);
                });
                break;
            case 'Inspector.targetCrashed':
                $this->emit('crash', $this);
                break;
        }
    }

    private function detachFrame(string $id): void
    {
        $f = $this->frames[$id] ?? null;
        if ($f === null) {
            return;
        }
        foreach ($this->frames as $cid => $child) {
            if ($child->parentId === $id) {
                $this->detachFrame($cid);
            }
        }
        $f->detached = true;
        unset($this->frames[$id]);
        $this->emit('framedetached', $f);
    }

    private function emitBoth(string $event, mixed $arg): void
    {
        $this->emit($event, $arg);
        $this->context->emitFromPage($event, $arg);
    }

    private function onConsole(array $p): void
    {
        if ($this->listenerCount('console') === 0 && !$this->context->hasListeners('console')) {
            return;
        }
        $cid = (int)($p['executionContextId'] ?? 0);
        foreach ($this->frames as $f) {
            if ($f->utilContext === $cid && $cid !== 0) {
                return;
            }
        }
        $texts = [];
        $values = [];
        foreach ((array)($p['args'] ?? []) as $a) {
            $a = (array)$a;
            if (array_key_exists('value', $a)) {
                $v = $a['value'];
                $values[] = $v;
                $texts[] = is_bool($v) ? ($v ? 'true' : 'false') : (is_null($v) ? 'null' : (is_scalar($v) ? (string)$v : (string)json_encode($v)));
            } elseif (isset($a['unserializableValue'])) {
                $values[] = Util::remoteValue($a);
                $texts[] = (string)$a['unserializableValue'];
            } else {
                $d = (string)($a['description'] ?? $a['type'] ?? '');
                $values[] = $d;
                $texts[] = ($a['type'] ?? '') === 'undefined' ? 'undefined' : $d;
            }
        }
        $frame0 = (array)($p['stackTrace']['callFrames'][0] ?? []);
        $loc = ['url' => (string)($frame0['url'] ?? ''), 'lineNumber' => (int)($frame0['lineNumber'] ?? 0), 'columnNumber' => (int)($frame0['columnNumber'] ?? 0)];
        $type = (string)$p['type'];
        $msg = new ConsoleMessage($this, $type === 'warning' ? 'warning' : $type, implode(' ', $texts), $values, $loc);
        $this->emitBoth('console', $msg);
    }

    private function onDialog(array $p): void
    {
        $d = new Dialog($this, (string)$p['type'], (string)$p['message'], (string)($p['defaultPrompt'] ?? ''));
        if ($this->listenerCount('dialog') > 0 || $this->context->hasListeners('dialog')) {
            $this->emitBoth('dialog', $d);
            return;
        }
        // Playwright default: auto-dismiss (beforeunload is accepted)
        $this->t->async(static function () use ($d): void {
            try {
                $d->type() === 'beforeunload' ? $d->accept() : $d->dismiss();
            } catch (Exception $e) {
            }
        });
    }

    private function onRequest(array $p): void
    {
        $id = (string)$p['requestId'];
        $r = (array)$p['request'];
        $redirectedFrom = null;
        if (isset($p['redirectResponse'])) {
            $prev = $this->requests[$id] ?? null;
            if ($prev !== null) {
                $prev->response = $this->makeResponse($prev, (array)$p['redirectResponse']);
                $prev->finished = true;
                $prev->endTime = microtime(true);
                $this->emitBoth('response', $prev->response);
                $this->emitBoth('requestfinished', $prev);
                $redirectedFrom = $prev;
            }
        }
        $type = strtolower((string)($p['type'] ?? 'other'));
        $loader = (string)($p['loaderId'] ?? '');
        $isNav = $id === $loader && $type === 'document';
        $req = new Request(
            $this,
            $id,
            (string)$r['url'] . (string)($r['urlFragment'] ?? ''),
            (string)$r['method'],
            (array)($r['headers'] ?? []),
            isset($r['postData']) ? (string)$r['postData'] : null,
            $type,
            (string)($p['frameId'] ?? ''),
            $isNav,
            $redirectedFrom,
        );
        $this->requests[$id] = $req;
        if ($isNav) {
            $this->navRequests[$loader] = $req;
            if (count($this->navRequests) > 8) {
                array_shift($this->navRequests);
            }
        }
        $this->emitBoth('request', $req);
    }

    private function makeResponse(Request $req, array $r): Response
    {
        return new Response(
            $this,
            $req,
            (string)$r['url'],
            (int)$r['status'],
            (string)($r['statusText'] ?? ''),
            (array)($r['headers'] ?? []),
            (string)($r['remoteIPAddress'] ?? ''),
            (int)($r['remotePort'] ?? 0),
            (array)($r['securityDetails'] ?? []),
            (bool)($r['fromServiceWorker'] ?? false),
        );
    }

    private function onResponse(array $p): void
    {
        $req = $this->requests[(string)$p['requestId']] ?? null;
        if ($req === null) {
            return;
        }
        $req->response = $this->makeResponse($req, (array)$p['response']);
        $this->emitBoth('response', $req->response);
        $this->poke();
    }

    public function navigationResponse(string $loaderId): ?Response
    {
        $req = $this->navRequests[$loaderId] ?? null;
        while ($req !== null && $req->redirectedTo !== null) {
            $req = $req->redirectedTo;
        }
        return $req?->response;
    }

    // ------------------------------------------------------------ routing

    private function needsInterception(): bool
    {
        return $this->routes !== [] || $this->context->hasRoutes() || $this->context->httpCredentials() !== null;
    }

    private function fetchParams(): array
    {
        return ['patterns' => [['urlPattern' => '*', 'requestStage' => 'Request']], 'handleAuthRequests' => $this->context->httpCredentials() !== null];
    }

    public function syncInterception(): void
    {
        $need = $this->needsInterception();
        if ($need === $this->fetchEnabled || $this->closed) {
            return;
        }
        $this->fetchEnabled = $need;
        $this->send($need ? 'Fetch.enable' : 'Fetch.disable', $need ? $this->fetchParams() : []);
    }

    public function onRequestPaused(array $p): void
    {
        $nid = (string)($p['networkId'] ?? $p['requestId']);
        $req = $this->requests[$nid] ?? null;
        if ($req === null) {
            $r = (array)$p['request'];
            $req = new Request($this, $nid, (string)$r['url'] . (string)($r['urlFragment'] ?? ''), (string)$r['method'], (array)($r['headers'] ?? []),
                isset($r['postData']) ? (string)$r['postData'] : null, strtolower((string)($p['resourceType'] ?? 'other')), (string)($p['frameId'] ?? ''), false);
        }
        $route = new Route($this, (string)$p['requestId'], $req);
        $base = $this->context->baseURL();
        $handlers = array_merge(array_reverse($this->routes), array_reverse($this->context->routeHandlers()));
        try {
            foreach ($handlers as $h) {
                if (!$h->matches($req->url(), $base)) {
                    continue;
                }
                if ($h->expired()) {
                    continue;
                }
                $h->count++;
                ($h->handler)($route, $req);
                if ($route->isHandled()) {
                    return;
                }
                if ($route->fellBack) {
                    $route->fellBack = false;
                    continue;
                }
                break;
            }
            if (!$route->isHandled()) {
                $route->continue();
            }
        } catch (\Throwable $e) {
            if (!$route->isHandled()) {
                try {
                    $route->continue();
                } catch (\Throwable $e2) {
                }
            }
            if (!($e instanceof Exception) || !str_contains($e->getMessage(), 'closed')) {
                trigger_error('native_playwright route handler error: ' . $e->getMessage(), E_USER_WARNING);
            }
        }
    }

    /**
     * $url: glob ("**\/api/*"), "/regex/i", or Closure(string $url): bool
     * $handler: function(Route $route, Request $request)
     * options: times
     */
    public function route(string|\Closure $url, \Closure $handler, array $options = []): void
    {
        $this->routes[] = new RouteHandler($url, $handler, (int)($options['times'] ?? 0));
        $this->syncInterception();
    }

    public function unroute(string|\Closure $url, ?\Closure $handler = null): void
    {
        $this->routes = array_values(array_filter($this->routes, static fn(RouteHandler $h): bool => !($h->url === $url && ($handler === null || $h->handler === $handler))));
        $this->syncInterception();
    }

    public function unrouteAll(): void
    {
        $this->routes = [];
        $this->syncInterception();
    }

    // ------------------------------------------------------------ bindings / init scripts

    public static function bindingScript(string $name): string
    {
        $n = Locator::js($name);
        return '(() => { const n = ' . $n . '; const b = globalThis["__pwlite_b_" + n]; if (!b || globalThis[n]) return; '
            . 'const cbs = new Map(); let seq = 0; const d = globalThis.__pwliteDeliver || (globalThis.__pwliteDeliver = {}); '
            . 'd[n] = (id, ok, v) => { const c = cbs.get(id); if (!c) return; cbs.delete(id); ok ? c[0](v) : c[1](new Error(v)); }; '
            . 'Object.defineProperty(globalThis, n, { configurable: true, value: (...args) => new Promise((res, rej) => { const id = ++seq; cbs.set(id, [res, rej]); b(JSON.stringify({ id, args })); }) }); })()';
    }

    /** $fn(array $source, ...$args) where $source = ['page' => Page, 'frame' => Frame, 'context' => BrowserContext] */
    public function exposeBinding(string $name, \Closure $fn): void
    {
        $this->bindings[$name] = $fn;
        $this->installBinding($name);
    }

    public function exposeFunction(string $name, \Closure $fn): void
    {
        $this->exposeBinding($name, static fn(array $source, mixed ...$args): mixed => $fn(...$args));
    }

    public function installBinding(string $name): void
    {
        $src = self::bindingScript($name);
        $this->sendMany([
            ['Runtime.addBinding', ['name' => '__pwlite_b_' . $name]],
            ['Page.addScriptToEvaluateOnNewDocument', ['source' => $src]],
        ]);
        foreach ($this->frames as $f) {
            try {
                $f->evaluate($src);
            } catch (Exception $e) {
            }
        }
    }

    private function onBindingCalled(array $p): void
    {
        $name = (string)$p['name'];
        if (!str_starts_with($name, '__pwlite_b_')) {
            return;
        }
        $name = substr($name, 11);
        $fn = $this->bindings[$name] ?? $this->context->binding($name);
        if ($fn === null) {
            return;
        }
        $payload = json_decode((string)$p['payload'], true);
        $cid = (int)$p['executionContextId'];
        $frame = null;
        foreach ($this->frames as $f) {
            if ($f->mainContext === $cid) {
                $frame = $f;
            }
        }
        $self = $this;
        $source = ['page' => $this, 'frame' => $frame ?? $this->mainFrame(), 'context' => $this->context];
        $this->t->async(static function () use ($self, $fn, $payload, $cid, $name, $source): void {
            $ok = true;
            try {
                $result = $fn($source, ...(array)($payload['args'] ?? []));
            } catch (\Throwable $e) {
                $ok = false;
                $result = $e->getMessage();
            }
            $expr = 'globalThis.__pwliteDeliver[' . Locator::js($name) . '](' . (int)($payload['id'] ?? 0) . ', ' . ($ok ? 'true' : 'false') . ', ' . Locator::js($result) . ')';
            try {
                $self->send('Runtime.evaluate', ['expression' => $expr, 'contextId' => $cid]);
            } catch (Exception $e) {
            }
        });
    }

    /** $script: JS source, or ['path' => file] / ['content' => js] */
    public function addInitScript(string|array $script, mixed $arg = null): void
    {
        $this->send('Page.addScriptToEvaluateOnNewDocument', ['source' => BrowserContext::scriptSource($script, $arg)]);
    }

    // ------------------------------------------------------------ lifecycle

    public function didClose(): void
    {
        if ($this->closed) {
            return;
        }
        $this->closed = true;
        $this->t->off($this->sessionId, $this->listenerId);
        foreach ($this->frames as $f) {
            $f->detached = true;
        }
        $this->requests = [];
        $this->navRequests = [];
        $this->routes = [];
        $this->bindings = [];
        $this->poke();
        $this->emit('close', $this);
        $this->context->pageClosed($this);
        $this->removeAllListeners();
    }

    public function isClosed(): bool
    {
        return $this->closed;
    }

    /** options: runBeforeUnload */
    public function close(array $options = []): void
    {
        if ($this->closed) {
            return;
        }
        try {
            if (!empty($options['runBeforeUnload'])) {
                $this->send('Page.close');
                return;
            }
            $this->browser->send('Target.closeTarget', ['targetId' => $this->targetId]);
            $self = $this;
            $this->waitForCondition(static fn(): bool => $self->isClosed(), 5.0, 'page.close');
        } catch (Exception $e) {
            $this->didClose();
        }
        if ($this->context->ownedBy($this)) {
            $this->context->close();
        }
    }

    public function setOpener(?Page $opener): void
    {
        $this->opener = $opener;
    }

    public function opener(): ?Page
    {
        return $this->opener;
    }

    public function context(): BrowserContext
    {
        return $this->context;
    }

    public function emitDownload(Download $d): void
    {
        $this->emit('download', $d);
    }

    public function emitPopup(Page $p): void
    {
        $this->emit('popup', $p);
    }

    protected function onListenerAdded(string $event): void
    {
        if ($event === 'filechooser' && !$this->fileChooserIntercepted) {
            $this->fileChooserIntercepted = true;
            $self = $this;
            $this->t->async(static function () use ($self): void {
                $self->send('Page.setInterceptFileChooserDialog', ['enabled' => true]);
            });
        }
    }

    // ------------------------------------------------------------ frames

    public function mainFrame(): Frame
    {
        $f = $this->frames[$this->mainFrameId] ?? null;
        if ($f === null) {
            throw new Exception('Page has no main frame (closed?)');
        }
        return $f;
    }

    /** @return list<Frame> */
    public function frames(): array
    {
        return array_values($this->frames);
    }

    public function frameById(string $id): ?Frame
    {
        return $this->frames[$id] ?? null;
    }

    /** $selector: frame name, or ['name' => ..., 'url' => glob|regex|Closure] */
    public function frame(string|array $selector): ?Frame
    {
        $name = is_string($selector) ? $selector : ($selector['name'] ?? null);
        $url = is_array($selector) ? ($selector['url'] ?? null) : null;
        foreach ($this->frames as $f) {
            if ($name !== null && $f->name !== $name) {
                continue;
            }
            if ($url !== null && !Util::urlMatches($url, $f->url)) {
                continue;
            }
            return $f;
        }
        return null;
    }

    // ------------------------------------------------------------ navigation

    public function url(): string
    {
        return $this->mainFrame()->url;
    }

    public function goto(string $url, array $options = []): ?Response
    {
        return $this->mainFrame()->goto($url, $options);
    }

    private function historyNavigate(\Closure $trigger, array $options): ?Response
    {
        $main = $this->mainFrame();
        $old = $main->loaderId;
        $oldSame = $main->sameDocumentNavigations;
        $event = match ((string)($options['waitUntil'] ?? 'load')) {
            'domcontentloaded' => 'DOMContentLoaded',
            'networkidle' => 'networkIdle',
            'commit' => 'commit',
            default => 'load',
        };
        if (!$trigger()) {
            return null;
        }
        $this->waitForCondition(
            static fn(): bool => ($main->loaderId !== $old && $main->lifecycleReached($main->loaderId, $event)) || $main->sameDocumentNavigations !== $oldSame,
            $this->navigationTimeoutSeconds($options),
            'page.navigation'
        );
        return $main->loaderId !== $old ? $this->navigationResponse($main->loaderId) : null;
    }

    public function reload(array $options = []): ?Response
    {
        $self = $this;
        return $this->historyNavigate(static function () use ($self): bool {
            $self->send('Page.reload');
            return true;
        }, $options);
    }

    private function goHistory(int $delta, array $options): ?Response
    {
        $self = $this;
        return $this->historyNavigate(static function () use ($self, $delta): bool {
            $h = $self->send('Page.getNavigationHistory');
            $i = (int)$h['currentIndex'] + $delta;
            $entries = (array)$h['entries'];
            if ($i < 0 || $i >= count($entries)) {
                return false;
            }
            $self->send('Page.navigateToHistoryEntry', ['entryId' => $entries[$i]['id']]);
            return true;
        }, $options);
    }

    public function goBack(array $options = []): ?Response
    {
        return $this->goHistory(-1, $options);
    }

    public function goForward(array $options = []): ?Response
    {
        return $this->goHistory(1, $options);
    }

    public function waitForLoadState(string $state = 'load', array $options = []): void
    {
        $this->mainFrame()->waitForLoadState($state, $options);
    }

    public function waitForURL(string|\Closure $url, array $options = []): void
    {
        $this->mainFrame()->waitForURL($url, $options);
    }

    public function expectNavigation(\Closure $action, array $options = []): ?Response
    {
        return $this->mainFrame()->expectNavigation($action, $options);
    }

    public function waitForTimeout(float $ms): void
    {
        $this->t->sleep($ms / 1000);
    }

    /** Wait for a request matching glob/regex/Closure(Request). options: timeout */
    public function expectRequest(string|\Closure $urlOrPredicate, \Closure $action, array $options = []): Request
    {
        $base = $this->context->baseURL();
        $pred = $urlOrPredicate instanceof \Closure
            ? $urlOrPredicate
            : static fn(Request $r): bool => Util::urlMatches($urlOrPredicate, $r->url(), $base);
        return $this->expectEvent('request', $action, $pred, isset($options['timeout']) ? (float)$options['timeout'] : null);
    }

    public function expectResponse(string|\Closure $urlOrPredicate, \Closure $action, array $options = []): Response
    {
        $base = $this->context->baseURL();
        $pred = $urlOrPredicate instanceof \Closure
            ? $urlOrPredicate
            : static fn(Response $r): bool => Util::urlMatches($urlOrPredicate, $r->url(), $base);
        return $this->expectEvent('response', $action, $pred, isset($options['timeout']) ? (float)$options['timeout'] : null);
    }

    public function waitForRequest(string|\Closure $urlOrPredicate, array $options = []): Request
    {
        return $this->expectRequest($urlOrPredicate, static function (): void {
        }, $options);
    }

    public function waitForResponse(string|\Closure $urlOrPredicate, array $options = []): Response
    {
        return $this->expectResponse($urlOrPredicate, static function (): void {
        }, $options);
    }

    public function expectPopup(\Closure $action, array $options = []): Page
    {
        return $this->expectEvent('popup', $action, $options['predicate'] ?? null, isset($options['timeout']) ? (float)$options['timeout'] : null);
    }

    public function expectDownload(\Closure $action, array $options = []): Download
    {
        return $this->expectEvent('download', $action, $options['predicate'] ?? null, isset($options['timeout']) ? (float)$options['timeout'] : null);
    }

    public function expectConsoleMessage(\Closure $action, array $options = []): ConsoleMessage
    {
        return $this->expectEvent('console', $action, $options['predicate'] ?? null, isset($options['timeout']) ? (float)$options['timeout'] : null);
    }

    public function expectFileChooser(\Closure $action, array $options = []): FileChooser
    {
        return $this->expectEvent('filechooser', $action, $options['predicate'] ?? null, isset($options['timeout']) ? (float)$options['timeout'] : null);
    }

    public function expectDialog(\Closure $action, array $options = []): Dialog
    {
        return $this->expectEvent('dialog', $action, $options['predicate'] ?? null, isset($options['timeout']) ? (float)$options['timeout'] : null);
    }

    // ------------------------------------------------------------ content & evaluation (main frame)

    public function title(): string
    {
        return $this->mainFrame()->title();
    }

    public function content(): string
    {
        return $this->mainFrame()->content();
    }

    public function setContent(string $html, array $options = []): void
    {
        $this->mainFrame()->setContent($html, $options);
    }

    public function evaluate(string $js, mixed $arg = null): mixed
    {
        return $this->mainFrame()->evaluate($js, $arg);
    }

    public function waitForFunction(string $js, mixed $arg = null, array $options = []): mixed
    {
        return $this->mainFrame()->waitForFunction($js, $arg, $options);
    }

    public function addScriptTag(array $options): void
    {
        $this->mainFrame()->addScriptTag($options);
    }

    public function addStyleTag(array $options): void
    {
        $this->mainFrame()->addStyleTag($options);
    }

    // ------------------------------------------------------------ locators & selector shortcuts

    public function locator(string $selector, array $options = []): Locator
    {
        return $this->mainFrame()->locator($selector, $options);
    }

    public function getByText(string $text, array $options = []): Locator
    {
        return $this->mainFrame()->getByText($text, $options);
    }

    public function getByRole(string $role, array $options = []): Locator
    {
        return $this->mainFrame()->getByRole($role, $options);
    }

    public function getByLabel(string $text, array $options = []): Locator
    {
        return $this->mainFrame()->getByLabel($text, $options);
    }

    public function getByPlaceholder(string $text, array $options = []): Locator
    {
        return $this->mainFrame()->getByPlaceholder($text, $options);
    }

    public function getByAltText(string $text, array $options = []): Locator
    {
        return $this->mainFrame()->getByAltText($text, $options);
    }

    public function getByTitle(string $text, array $options = []): Locator
    {
        return $this->mainFrame()->getByTitle($text, $options);
    }

    public function getByTestId(string $testId): Locator
    {
        return $this->mainFrame()->getByTestId($testId);
    }

    public function frameLocator(string $selector): FrameLocator
    {
        return $this->mainFrame()->frameLocator($selector);
    }

    public function click(string $selector, array $options = []): void
    {
        $this->mainFrame()->click($selector, $options);
    }

    public function dblclick(string $selector, array $options = []): void
    {
        $this->mainFrame()->dblclick($selector, $options);
    }

    public function tap(string $selector, array $options = []): void
    {
        $this->mainFrame()->tap($selector, $options);
    }

    public function fill(string $selector, string $value, array $options = []): void
    {
        $this->mainFrame()->fill($selector, $value, $options);
    }

    public function type(string $selector, string $text, array $options = []): void
    {
        $this->mainFrame()->type($selector, $text, $options);
    }

    public function press(string $selector, string $key, array $options = []): void
    {
        $this->mainFrame()->press($selector, $key, $options);
    }

    public function hover(string $selector, array $options = []): void
    {
        $this->mainFrame()->hover($selector, $options);
    }

    public function focus(string $selector, array $options = []): void
    {
        $this->mainFrame()->focus($selector, $options);
    }

    public function check(string $selector, array $options = []): void
    {
        $this->mainFrame()->check($selector, $options);
    }

    public function uncheck(string $selector, array $options = []): void
    {
        $this->mainFrame()->uncheck($selector, $options);
    }

    public function setChecked(string $selector, bool $checked, array $options = []): void
    {
        $this->mainFrame()->setChecked($selector, $checked, $options);
    }

    public function selectOption(string $selector, string|array $values, array $options = []): array
    {
        return $this->mainFrame()->selectOption($selector, $values, $options);
    }

    public function setInputFiles(string $selector, string|array $files, array $options = []): void
    {
        $this->mainFrame()->setInputFiles($selector, $files, $options);
    }

    public function dragAndDrop(string $source, string $target, array $options = []): void
    {
        $this->mainFrame()->dragAndDrop($source, $target, $options);
    }

    public function dispatchEvent(string $selector, string $type, array $eventInit = [], array $options = []): void
    {
        $this->mainFrame()->dispatchEvent($selector, $type, $eventInit, $options);
    }

    public function textContent(string $selector, array $options = []): ?string
    {
        return $this->mainFrame()->textContent($selector, $options);
    }

    public function innerText(string $selector, array $options = []): string
    {
        return $this->mainFrame()->innerText($selector, $options);
    }

    public function innerHTML(string $selector, array $options = []): string
    {
        return $this->mainFrame()->innerHTML($selector, $options);
    }

    public function getAttribute(string $selector, string $name, array $options = []): ?string
    {
        return $this->mainFrame()->getAttribute($selector, $name, $options);
    }

    public function inputValue(string $selector, array $options = []): string
    {
        return $this->mainFrame()->inputValue($selector, $options);
    }

    public function isVisible(string $selector): bool
    {
        return $this->mainFrame()->isVisible($selector);
    }

    public function isHidden(string $selector): bool
    {
        return $this->mainFrame()->isHidden($selector);
    }

    public function isEnabled(string $selector, array $options = []): bool
    {
        return $this->mainFrame()->isEnabled($selector, $options);
    }

    public function isDisabled(string $selector, array $options = []): bool
    {
        return $this->mainFrame()->isDisabled($selector, $options);
    }

    public function isEditable(string $selector, array $options = []): bool
    {
        return $this->mainFrame()->isEditable($selector, $options);
    }

    public function isChecked(string $selector, array $options = []): bool
    {
        return $this->mainFrame()->isChecked($selector, $options);
    }

    public function waitForSelector(string $selector, array $options = []): ?Locator
    {
        return $this->mainFrame()->waitForSelector($selector, $options);
    }

    public function evalOnSelector(string $selector, string $js, mixed $arg = null): mixed
    {
        return $this->mainFrame()->evalOnSelector($selector, $js, $arg);
    }

    public function evalOnSelectorAll(string $selector, string $js, mixed $arg = null): mixed
    {
        return $this->mainFrame()->evalOnSelectorAll($selector, $js, $arg);
    }

    // ------------------------------------------------------------ emulation

    public function setViewportSize(array $size): void
    {
        $this->viewport = ['width' => (int)$size['width'], 'height' => (int)$size['height']];
        $this->send('Emulation.setDeviceMetricsOverride', $this->metrics($this->viewport));
    }

    public function viewportSize(): ?array
    {
        return $this->viewport;
    }

    /** options: media (screen|print|null), colorScheme, reducedMotion, forcedColors */
    public function emulateMedia(array $options = []): void
    {
        foreach (['media', 'colorScheme', 'reducedMotion', 'forcedColors'] as $k) {
            if (array_key_exists($k, $options)) {
                $this->media[$k] = $options[$k];
            }
        }
        $this->send('Emulation.setEmulatedMedia', $this->mediaParams());
    }

    public function setExtraHTTPHeaders(array $headers): void
    {
        $this->extraHeaders = $headers;
        $this->applyExtraHeaders();
    }

    public function applyExtraHeaders(): void
    {
        $h = array_merge($this->context->extraHTTPHeaders(), $this->extraHeaders);
        $this->send('Network.setExtraHTTPHeaders', ['headers' => (object)$h]);
    }

    public function bringToFront(): void
    {
        $this->send('Page.bringToFront');
    }

    public function requestGC(): void
    {
        $this->send('HeapProfiler.collectGarbage');
    }

    public function newCDPSession(): CDPSession
    {
        return new CDPSession($this->t, $this->sessionId, $this->timeoutSeconds([]));
    }

    // ------------------------------------------------------------ capture

    /**
     * options: path, type (png|jpeg|webp), quality, fullPage, clip (x,y,width,height), omitBackground, scale (css|device), timeout
     * Returns image bytes.
     */
    public function screenshot(array $options = []): string
    {
        $type = (string)($options['type'] ?? (isset($options['path']) && preg_match('/\.jpe?g$/i', (string)$options['path']) ? 'jpeg' : 'png'));
        $p = ['format' => $type, 'fromSurface' => true, 'captureBeyondViewport' => !empty($options['fullPage'])];
        if (isset($options['quality']) && $type !== 'png') {
            $p['quality'] = (int)$options['quality'];
        }
        $scale = ($options['scale'] ?? 'device') === 'css' ? 1 / (float)($this->context->options()['deviceScaleFactor'] ?? 1) : 1.0;
        if (!empty($options['fullPage'])) {
            $m = $this->send('Page.getLayoutMetrics');
            $size = (array)($m['cssContentSize'] ?? $m['contentSize']);
            $p['clip'] = ['x' => 0, 'y' => 0, 'width' => (float)$size['width'], 'height' => (float)$size['height'], 'scale' => $scale];
        } elseif (isset($options['clip'])) {
            $m = $this->send('Page.getLayoutMetrics');
            $vp = (array)($m['cssLayoutViewport'] ?? $m['layoutViewport']);
            $c = (array)$options['clip'];
            $p['clip'] = ['x' => (float)$c['x'] + (float)$vp['pageX'], 'y' => (float)$c['y'] + (float)$vp['pageY'], 'width' => (float)$c['width'], 'height' => (float)$c['height'], 'scale' => $scale];
        } elseif ($scale !== 1.0 && $this->viewport !== null) {
            $p['clip'] = ['x' => 0, 'y' => 0, 'width' => $this->viewport['width'], 'height' => $this->viewport['height'], 'scale' => $scale];
        }
        $transparent = !empty($options['omitBackground']);
        if ($transparent) {
            $this->send('Emulation.setDefaultBackgroundColorOverride', ['color' => ['r' => 0, 'g' => 0, 'b' => 0, 'a' => 0]]);
        }
        try {
            $r = $this->send('Page.captureScreenshot', $p, $this->timeoutSeconds($options));
        } finally {
            if ($transparent) {
                $this->send('Emulation.setDefaultBackgroundColorOverride');
            }
        }
        $data = (string)base64_decode((string)$r['data']);
        if (isset($options['path'])) {
            $dir = dirname((string)$options['path']);
            if (!is_dir($dir)) {
                mkdir($dir, 0777, true);
            }
            file_put_contents((string)$options['path'], $data);
        }
        return $data;
    }

    /**
     * options: path, scale, displayHeaderFooter, headerTemplate, footerTemplate, printBackground, landscape,
     *          pageRanges, format (A4, Letter, ...), width, height, margin (top,right,bottom,left), preferCSSPageSize, tagged, outline
     */
    public function pdf(array $options = []): string
    {
        $formats = [
            'letter' => [8.5, 11], 'legal' => [8.5, 14], 'tabloid' => [11, 17], 'ledger' => [17, 11],
            'a0' => [33.1, 46.8], 'a1' => [23.4, 33.1], 'a2' => [16.54, 23.4], 'a3' => [11.7, 16.54],
            'a4' => [8.27, 11.7], 'a5' => [5.83, 8.27], 'a6' => [4.13, 5.83],
        ];
        $w = 8.5;
        $h = 11.0;
        if (isset($options['format'])) {
            $f = $formats[strtolower((string)$options['format'])] ?? null;
            if ($f === null) {
                throw new Exception('Unknown paper format: ' . $options['format']);
            }
            [$w, $h] = $f;
        } else {
            if (isset($options['width'])) {
                $w = Util::toInches($options['width']);
            }
            if (isset($options['height'])) {
                $h = Util::toInches($options['height']);
            }
        }
        $m = (array)($options['margin'] ?? []);
        $p = [
            'landscape' => !empty($options['landscape']),
            'displayHeaderFooter' => !empty($options['displayHeaderFooter']),
            'headerTemplate' => (string)($options['headerTemplate'] ?? ''),
            'footerTemplate' => (string)($options['footerTemplate'] ?? ''),
            'printBackground' => !empty($options['printBackground']),
            'scale' => (float)($options['scale'] ?? 1),
            'paperWidth' => (float)$w,
            'paperHeight' => (float)$h,
            'marginTop' => Util::toInches($m['top'] ?? 0),
            'marginBottom' => Util::toInches($m['bottom'] ?? 0),
            'marginLeft' => Util::toInches($m['left'] ?? 0),
            'marginRight' => Util::toInches($m['right'] ?? 0),
            'pageRanges' => (string)($options['pageRanges'] ?? ''),
            'preferCSSPageSize' => !empty($options['preferCSSPageSize']),
            'generateTaggedPDF' => !empty($options['tagged']),
            'generateDocumentOutline' => !empty($options['outline']),
        ];
        $r = $this->send('Page.printToPDF', $p, $this->timeoutSeconds($options));
        $data = (string)base64_decode((string)$r['data']);
        if (isset($options['path'])) {
            file_put_contents((string)$options['path'], $data);
        }
        return $data;
    }
}
