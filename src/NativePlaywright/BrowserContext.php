<?php
namespace NativePlaywright;

final class BrowserContext
{
    use EventEmitter;

    /** @var array<string, Page> targetId => Page */
    private array $pages = [];
    /** @var list<RouteHandler> */
    private array $routes = [];
    /** @var array<string, \Closure> */
    private array $bindings = [];
    /** @var list<string> */
    private array $initScripts = [];
    private bool $closed = false;
    private ?Page $owner = null;
    private float $defaultTimeoutMs = 30000;
    private ?float $defaultNavigationTimeoutMs = null;
    private ?array $geolocation = null;
    private array $extraHeaders = [];
    private bool $offline = false;
    private string $downloadDir = '';
    private bool $ownsDownloadDir = false;

    /**
     * options: viewport (['width','height'] | null), screen, deviceScaleFactor, isMobile, hasTouch, userAgent,
     *   locale, timezoneId, geolocation, permissions, extraHTTPHeaders, offline, httpCredentials (['username','password']),
     *   colorScheme, reducedMotion, forcedColors, javaScriptEnabled, bypassCSP, ignoreHTTPSErrors, baseURL,
     *   storageState (array|path), acceptDownloads, proxy (['server','bypass']), networkBufferSize
     */
    public function __construct(private Browser $browser, private Transport $t, private string $id, private array $options, private bool $isDefault = false)
    {
        $this->geolocation = isset($options['geolocation']) ? (array)$options['geolocation'] : null;
        $this->extraHeaders = (array)($options['extraHTTPHeaders'] ?? []);
        $this->offline = (bool)($options['offline'] ?? false);
    }

    public function initialize(): void
    {
        $o = $this->options;
        $accept = (bool)($o['acceptDownloads'] ?? true);
        $dir = (string)($this->browser->launchOption('downloadsPath') ?? '');
        if ($dir === '') {
            $dir = sys_get_temp_dir() . '/pwlite-dl-' . bin2hex(random_bytes(6));
            $this->ownsDownloadDir = true;
        }
        if (!is_dir($dir)) {
            mkdir($dir, 0777, true);
        }
        $this->downloadDir = (string)realpath($dir);
        $p = ['behavior' => $accept ? 'allowAndName' : 'deny', 'downloadPath' => $this->downloadDir, 'eventsEnabled' => true];
        if ($this->id !== '') {
            $p['browserContextId'] = $this->id;
        }
        $calls = [['Browser.setDownloadBehavior', $p]];
        if (!empty($o['permissions'])) {
            $calls[] = ['Browser.grantPermissions', $this->permissionParams((array)$o['permissions'], '')];
        }
        $this->t->callMany($calls, '', true);
        if (isset($o['storageState'])) {
            $state = is_string($o['storageState']) ? json_decode((string)file_get_contents($o['storageState']), true) : (array)$o['storageState'];
            if (!empty($state['cookies'])) {
                $this->addCookies((array)$state['cookies']);
            }
            foreach ((array)($state['origins'] ?? []) as $origin) {
                $items = [];
                foreach ((array)($origin['localStorage'] ?? []) as $kv) {
                    $items[(string)$kv['name']] = (string)$kv['value'];
                }
                $this->initScripts[] = '(() => { if (location.origin !== ' . Locator::js((string)$origin['origin']) . ') return; '
                    . 'try { if (sessionStorage.getItem("__pwlite_ss")) return; sessionStorage.setItem("__pwlite_ss", "1"); '
                    . 'const items = ' . Locator::js((object)$items) . '; for (const k in items) localStorage.setItem(k, items[k]); } catch (e) {} })()';
            }
        }
    }

    protected function transport(): Transport
    {
        return $this->t;
    }

    protected function defaultTimeout(): float
    {
        return $this->defaultTimeoutMs / 1000;
    }

    public function id(): string
    {
        return $this->id;
    }

    public function options(): array
    {
        return $this->options;
    }

    public function browser(): Browser
    {
        return $this->browser;
    }

    public function baseURL(): string
    {
        return (string)($this->options['baseURL'] ?? '');
    }

    public function defaultTimeoutMs(): float
    {
        return $this->defaultTimeoutMs;
    }

    public function defaultNavigationTimeoutMs(): float
    {
        return $this->defaultNavigationTimeoutMs ?? $this->defaultTimeoutMs;
    }

    public function setDefaultTimeout(float $ms): void
    {
        $this->defaultTimeoutMs = $ms;
    }

    public function setDefaultNavigationTimeout(float $ms): void
    {
        $this->defaultNavigationTimeoutMs = $ms;
    }

    public function hasListeners(string $event): bool
    {
        return $this->listenerCount($event) > 0;
    }

    public function emitFromPage(string $event, mixed $arg): void
    {
        $this->emit($event, $arg);
    }

    // ------------------------------------------------------------ pages

    public function newPage(): Page
    {
        if ($this->closed) {
            throw new Exception('browserContext.newPage: Target page, context or browser has been closed');
        }
        return $this->browser->createPage($this);
    }

    /** @return list<Page> */
    public function pages(): array
    {
        return array_values($this->pages);
    }

    public function didCreatePage(Page $page): void
    {
        $this->pages[$page->targetId] = $page;
        $this->emit('page', $page);
    }

    public function pageClosed(Page $page): void
    {
        unset($this->pages[$page->targetId]);
    }

    public function setOwner(Page $page): void
    {
        $this->owner = $page;
    }

    public function ownedBy(Page $page): bool
    {
        return $this->owner === $page;
    }

    public function expectPage(\Closure $action, array $options = []): Page
    {
        return $this->expectEvent('page', $action, $options['predicate'] ?? null, isset($options['timeout']) ? (float)$options['timeout'] : null);
    }

    // ------------------------------------------------------------ cookies & storage

    private static function cookieOut(array $c): array
    {
        return [
            'name' => (string)$c['name'],
            'value' => (string)$c['value'],
            'domain' => (string)$c['domain'],
            'path' => (string)$c['path'],
            'expires' => !empty($c['session']) ? -1 : (float)($c['expires'] ?? -1),
            'httpOnly' => (bool)($c['httpOnly'] ?? false),
            'secure' => (bool)($c['secure'] ?? false),
            'sameSite' => (string)($c['sameSite'] ?? 'Lax'),
        ];
    }

    private function ctxParam(): array
    {
        return $this->id === '' ? [] : ['browserContextId' => $this->id];
    }

    /** @param string|list<string> $urls */
    public function cookies(string|array $urls = []): array
    {
        $r = $this->browser->send('Storage.getCookies', $this->ctxParam());
        $out = [];
        $urls = is_string($urls) ? [$urls] : $urls;
        foreach ((array)($r['cookies'] ?? []) as $c) {
            $c = self::cookieOut((array)$c);
            if ($urls !== [] && !self::cookieMatchesAny($c, $urls)) {
                continue;
            }
            $out[] = $c;
        }
        return $out;
    }

    private static function cookieMatchesAny(array $c, array $urls): bool
    {
        foreach ($urls as $u) {
            $p = parse_url((string)$u);
            if (!is_array($p) || !isset($p['host'])) {
                continue;
            }
            $host = strtolower((string)$p['host']);
            $domain = strtolower(ltrim($c['domain'], '.'));
            if ($host !== $domain && !str_ends_with($host, '.' . $domain)) {
                continue;
            }
            $path = (string)($p['path'] ?? '/');
            if (!str_starts_with($path, $c['path'])) {
                continue;
            }
            if ($c['secure'] && ($p['scheme'] ?? '') !== 'https' && $host !== 'localhost') {
                continue;
            }
            return true;
        }
        return false;
    }

    /** cookies: [['name','value','url'] or ['name','value','domain','path'], + expires, httpOnly, secure, sameSite] */
    public function addCookies(array $cookies): void
    {
        $list = [];
        foreach ($cookies as $c) {
            $c = (array)$c;
            $x = ['name' => (string)$c['name'], 'value' => (string)$c['value']];
            if (isset($c['url'])) {
                $x['url'] = (string)$c['url'];
            } else {
                if (!isset($c['domain'])) {
                    throw new Exception('Cookie should have a url or a domain/path pair');
                }
                $x['domain'] = (string)$c['domain'];
                $x['path'] = (string)($c['path'] ?? '/');
            }
            if (isset($c['expires']) && (float)$c['expires'] >= 0) {
                $x['expires'] = (float)$c['expires'];
            }
            foreach (['httpOnly', 'secure'] as $k) {
                if (isset($c[$k])) {
                    $x[$k] = (bool)$c[$k];
                }
            }
            if (isset($c['sameSite'])) {
                $x['sameSite'] = (string)$c['sameSite'];
            }
            $list[] = $x;
        }
        $this->browser->send('Storage.setCookies', ['cookies' => $list] + $this->ctxParam());
    }

    /** options: name, domain, path (exact strings or "/regex/") */
    public function clearCookies(array $options = []): void
    {
        $keep = [];
        if ($options !== []) {
            foreach ($this->cookies() as $c) {
                $match = true;
                foreach (['name', 'domain', 'path'] as $k) {
                    if (!isset($options[$k])) {
                        continue;
                    }
                    $want = (string)$options[$k];
                    $ok = Util::isRegex($want) ? preg_match($want, $c[$k]) === 1 : $c[$k] === $want;
                    $match = $match && $ok;
                }
                if (!$match) {
                    $keep[] = $c;
                }
            }
        }
        $this->browser->send('Storage.clearCookies', $this->ctxParam());
        if ($keep !== []) {
            $this->addCookies($keep);
        }
    }

    /** options: path (write JSON there). Returns ['cookies' => [...], 'origins' => [...]] */
    public function storageState(array $options = []): array
    {
        $origins = [];
        foreach ($this->pages as $page) {
            foreach ($page->frames() as $f) {
                try {
                    $r = $f->evaluate('() => { try { const o = location.origin; if (!o || o === "null") return null; '
                        . 'return { origin: o, localStorage: Object.keys(localStorage).map(k => ({ name: k, value: localStorage.getItem(k) })) }; } catch (e) { return null; } }');
                    if (is_array($r) && !isset($origins[$r['origin']]) && $r['localStorage'] !== []) {
                        $origins[$r['origin']] = $r;
                    }
                } catch (Exception $e) {
                }
            }
        }
        $state = ['cookies' => $this->cookies(), 'origins' => array_values($origins)];
        if (isset($options['path'])) {
            file_put_contents((string)$options['path'], json_encode($state, JSON_PRETTY_PRINT | JSON_UNESCAPED_SLASHES));
        }
        return $state;
    }

    // ------------------------------------------------------------ permissions & emulation

    private function permissionParams(array $permissions, string $origin): array
    {
        $map = [
            'geolocation' => 'geolocation', 'midi' => 'midi', 'midi-sysex' => 'midiSysex', 'notifications' => 'notifications',
            'camera' => 'videoCapture', 'microphone' => 'audioCapture', 'background-sync' => 'backgroundSync',
            'ambient-light-sensor' => 'sensors', 'accelerometer' => 'sensors', 'gyroscope' => 'sensors', 'magnetometer' => 'sensors',
            'clipboard-read' => 'clipboardReadWrite', 'clipboard-write' => 'clipboardSanitizedWrite',
            'payment-handler' => 'paymentHandler', 'storage-access' => 'storageAccess', 'local-fonts' => 'localFonts',
            'local-network-access' => 'localNetworkAccess', 'idle-detection' => 'idleDetection', 'screen-wake-lock' => 'wakeLockScreen',
        ];
        $out = [];
        foreach ($permissions as $p) {
            $v = $map[(string)$p] ?? null;
            if ($v === null) {
                throw new Exception("Unknown permission: $p");
            }
            $out[$v] = true;
        }
        $params = ['permissions' => array_keys($out)] + $this->ctxParam();
        if ($origin !== '') {
            $params['origin'] = $origin;
        }
        return $params;
    }

    /** options: origin */
    public function grantPermissions(array $permissions, array $options = []): void
    {
        $this->browser->send('Browser.grantPermissions', $this->permissionParams($permissions, (string)($options['origin'] ?? '')));
    }

    public function clearPermissions(): void
    {
        $this->browser->send('Browser.resetPermissions', $this->ctxParam());
    }

    public function geolocation(): ?array
    {
        return $this->geolocation;
    }

    /** ['latitude' =>, 'longitude' =>, 'accuracy' =>] or null */
    public function setGeolocation(?array $geo): void
    {
        $this->geolocation = $geo;
        foreach ($this->pages as $p) {
            $p->send('Emulation.setGeolocationOverride', $geo === null ? [] : ['latitude' => (float)$geo['latitude'], 'longitude' => (float)$geo['longitude'], 'accuracy' => (float)($geo['accuracy'] ?? 0)]);
        }
    }

    public function extraHTTPHeaders(): array
    {
        return $this->extraHeaders;
    }

    public function setExtraHTTPHeaders(array $headers): void
    {
        $this->extraHeaders = $headers;
        foreach ($this->pages as $p) {
            $p->applyExtraHeaders();
        }
    }

    public function isOffline(): bool
    {
        return $this->offline;
    }

    public function setOffline(bool $offline): void
    {
        $this->offline = $offline;
        foreach ($this->pages as $p) {
            $p->send('Network.emulateNetworkConditions', ['offline' => $offline, 'latency' => 0, 'downloadThroughput' => -1, 'uploadThroughput' => -1]);
        }
    }

    public function httpCredentials(): ?array
    {
        return isset($this->options['httpCredentials']) ? (array)$this->options['httpCredentials'] : null;
    }

    // ------------------------------------------------------------ scripts, bindings, routes

    public static function scriptSource(string|array $script, mixed $arg = null): string
    {
        if (is_array($script)) {
            if (isset($script['path'])) {
                return (string)file_get_contents((string)$script['path']) . "\n//# sourceURL=" . $script['path'];
            }
            return (string)($script['content'] ?? '');
        }
        if ($arg !== null || Util::isFunction($script)) {
            return '(' . $script . ')(' . Locator::js($arg) . ')';
        }
        return $script;
    }

    /** @return list<string> */
    public function initScripts(): array
    {
        return $this->initScripts;
    }

    public function addInitScript(string|array $script, mixed $arg = null): void
    {
        $src = self::scriptSource($script, $arg);
        $this->initScripts[] = $src;
        foreach ($this->pages as $p) {
            $p->send('Page.addScriptToEvaluateOnNewDocument', ['source' => $src]);
        }
    }

    /** @return list<string> */
    public function bindingNames(): array
    {
        return array_keys($this->bindings);
    }

    public function binding(string $name): ?\Closure
    {
        return $this->bindings[$name] ?? null;
    }

    public function exposeBinding(string $name, \Closure $fn): void
    {
        $this->bindings[$name] = $fn;
        foreach ($this->pages as $p) {
            $p->installBinding($name);
        }
    }

    public function exposeFunction(string $name, \Closure $fn): void
    {
        $this->exposeBinding($name, static fn(array $source, mixed ...$args): mixed => $fn(...$args));
    }

    public function hasRoutes(): bool
    {
        return $this->routes !== [];
    }

    /** @return list<RouteHandler> */
    public function routeHandlers(): array
    {
        return $this->routes;
    }

    public function route(string|\Closure $url, \Closure $handler, array $options = []): void
    {
        $this->routes[] = new RouteHandler($url, $handler, (int)($options['times'] ?? 0));
        foreach ($this->pages as $p) {
            $p->syncInterception();
        }
    }

    public function unroute(string|\Closure $url, ?\Closure $handler = null): void
    {
        $this->routes = array_values(array_filter($this->routes, static fn(RouteHandler $h): bool => !($h->url === $url && ($handler === null || $h->handler === $handler))));
        foreach ($this->pages as $p) {
            $p->syncInterception();
        }
    }

    public function unrouteAll(): void
    {
        $this->routes = [];
        foreach ($this->pages as $p) {
            $p->syncInterception();
        }
    }

    public function newCDPSession(Page $page): CDPSession
    {
        return $page->newCDPSession();
    }

    public function downloadDir(): string
    {
        return $this->downloadDir;
    }

    // ------------------------------------------------------------ close

    public function isClosed(): bool
    {
        return $this->closed;
    }

    public function close(): void
    {
        if ($this->closed) {
            return;
        }
        $this->closed = true;
        if ($this->isDefault) {
            $this->browser->close();
        } else {
            try {
                $this->browser->send('Target.disposeBrowserContext', ['browserContextId' => $this->id]);
            } catch (Exception $e) {
            }
        }
        foreach ($this->pages as $p) {
            $p->didClose();
        }
        $this->pages = [];
        if ($this->ownsDownloadDir && $this->downloadDir !== '' && is_dir($this->downloadDir)) {
            foreach ((array)glob($this->downloadDir . '/*') as $f) {
                @unlink((string)$f);
            }
            @rmdir($this->downloadDir);
        }
        $this->browser->contextClosed($this);
        $this->emit('close', $this);
    }
}
