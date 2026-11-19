<?php
namespace NativePlaywright;

final class BrowserType
{
    /** Low RAM / CPU defaults (Playwright's set + memory savers). */
    public const DEFAULT_ARGS = [
        '--headless',
        '--no-startup-window',
        '--no-first-run',
        '--no-default-browser-check',
        '--disable-gpu',
        '--in-process-gpu',
        '--disable-extensions',
        '--disable-component-extensions-with-background-pages',
        '--disable-component-update',
        '--disable-background-networking',
        '--disable-background-timer-throttling',
        '--disable-backgrounding-occluded-windows',
        '--disable-renderer-backgrounding',
        '--disable-breakpad',
        '--disable-crash-reporter',
        '--disable-client-side-phishing-detection',
        '--disable-sync',
        '--disable-default-apps',
        '--disable-dev-shm-usage',
        '--disable-hang-monitor',
        '--disable-ipc-flooding-protection',
        '--disable-popup-blocking',
        '--disable-prompt-on-repost',
        '--disable-field-trial-config',
        '--disable-search-engine-choice-screen',
        '--metrics-recording-only',
        '--mute-audio',
        '--password-store=basic',
        '--use-mock-keychain',
        '--hide-scrollbars',
        '--force-color-profile=srgb',
        '--no-service-autorun',
        '--export-tagged-pdf',
        '--allow-pre-commit-input',
    ];

    public const DISABLED_FEATURES = [
        'Translate', 'OptimizationHints', 'MediaRouter', 'DialMediaRouteProvider', 'InterestFeedContentSuggestions',
        'AutofillServerCommunication', 'BackForwardCache', 'PaintHolding', 'LensOverlay', 'HttpsUpgrades',
        'AcceptCHFrame', 'CertificateTransparencyComponentUpdater', 'ThirdPartyStoragePartitioning',
        'SpareRendererForSitePerProcess',
    ];

    public function name(): string
    {
        return 'chromium';
    }

    public function executablePath(): string
    {
        $env = getenv('NATIVE_PLAYWRIGHT_CHROME');
        if (is_string($env) && $env !== '') {
            return $env;
        }
        $candidates = [
            // chrome-headless-shell first: no browser UI processes, ~3x less RAM than full Chrome headless
            '/usr/lib/chromium/chromium-headless-shell',
            '/usr/bin/chromium-headless-shell',
            '/usr/bin/chrome-headless-shell',
            '/opt/google/chrome-headless-shell/chrome-headless-shell',
            '/usr/lib/chromium/chromium',
            '/usr/bin/chromium',
            '/usr/bin/chromium-browser',
            '/usr/bin/google-chrome',
            '/opt/google/chrome/chrome',
            '/Applications/Google Chrome.app/Contents/MacOS/Google Chrome',
            '/Applications/Chromium.app/Contents/MacOS/Chromium',
        ];
        foreach ($candidates as $p) {
            if (is_file($p) && is_executable($p)) {
                return $p;
            }
        }
        throw new Exception('Chromium not found; set NATIVE_PLAYWRIGHT_CHROME or pass executablePath');
    }

    private function buildArgs(array $options): array
    {
        $ignore = $options['ignoreDefaultArgs'] ?? false;
        $args = [];
        if ($ignore !== true) {
            $skip = is_array($ignore) ? $ignore : [];
            foreach (self::DEFAULT_ARGS as $a) {
                if (!in_array($a, $skip, true)) {
                    $args[] = $a;
                }
            }
            if (($options['headless'] ?? true) === false) {
                $args = array_values(array_filter($args, static fn(string $a): bool => $a !== '--headless'));
            }
            $features = self::DISABLED_FEATURES;
            if (!($options['siteIsolation'] ?? false)) {
                // keep cross-origin iframes in-process: fewer processes, simpler frame handling
                $args[] = '--disable-site-isolation-trials';
                $features[] = 'IsolateOrigins';
                $features[] = 'site-per-process';
            }
            $args[] = '--disable-features=' . implode(',', $features);
            if (PHP_OS_FAMILY === 'Linux') {
                $args[] = '--no-zygote';
            }
        }
        if (!($options['chromiumSandbox'] ?? false)) {
            $args[] = '--no-sandbox';
        }
        if (isset($options['proxy']['server'])) {
            $args[] = '--proxy-server=' . $options['proxy']['server'];
            if (isset($options['proxy']['bypass'])) {
                $args[] = '--proxy-bypass-list=' . $options['proxy']['bypass'];
            }
        }
        foreach ((array)($options['args'] ?? []) as $a) {
            $args[] = (string)$a;
        }
        return $args;
    }

    /**
     * options: executablePath, args, ignoreDefaultArgs (bool|list), headless, timeout (ms), downloadsPath,
     *          proxy (['server','bypass']), chromiumSandbox, slowMo (ms), siteIsolation, swoole (bool, default auto)
     */
    public function launch(array $options = []): Browser
    {
        return $this->start($options, '');
    }

    private function start(array $options, string $userDataDir): Browser
    {
        $exe = (string)($options['executablePath'] ?? $this->executablePath());
        $conn = new Connection($exe, $this->buildArgs($options), $userDataDir);
        $swoole = $options['swoole'] ?? (extension_loaded('swoole') && \Swoole\Coroutine::getCid() > 0);
        $t = $swoole ? new SwooleTransport($conn) : new BlockingTransport($conn);
        $browser = new Browser($t, $conn, $options);
        try {
            $browser->initialize((float)($options['timeout'] ?? 30000) / 1000);
        } catch (\Throwable $e) {
            $t->close();
            throw new Exception('browserType.launch: ' . $e->getMessage(), 0, $e);
        }
        return $browser;
    }

    /** Launch with a persistent profile; returns its (default) context. Options = launch + context options. */
    public function launchPersistentContext(string $userDataDir, array $options = []): BrowserContext
    {
        if (!is_dir($userDataDir)) {
            mkdir($userDataDir, 0777, true);
        }
        $browser = $this->start($options, (string)realpath($userDataDir));
        return $browser->useDefaultContext($options);
    }
}
