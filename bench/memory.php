<?php
// PSS of driver + Chrome tree: native_playwright (low-mem flags) vs native_playwright (Playwright's default flags).
use NativePlaywright\Playwright;

function pss(int $pid): array { return array_map('intval', explode(' ', trim(shell_exec(__DIR__ . "/pss.sh $pid")))); }

$playwrightDefaults = ['--headless', '--disable-field-trial-config', '--disable-background-networking',
    '--disable-background-timer-throttling', '--disable-backgrounding-occluded-windows', '--disable-back-forward-cache',
    '--disable-breakpad', '--disable-client-side-phishing-detection', '--disable-component-extensions-with-background-pages',
    '--disable-component-update', '--no-default-browser-check', '--disable-default-apps', '--disable-dev-shm-usage',
    '--disable-extensions', '--disable-hang-monitor', '--disable-ipc-flooding-protection', '--disable-popup-blocking',
    '--disable-prompt-on-repost', '--disable-renderer-backgrounding', '--force-color-profile=srgb', '--metrics-recording-only',
    '--no-first-run', '--password-store=basic', '--use-mock-keychain', '--no-service-autorun', '--export-tagged-pdf',
    '--disable-search-engine-choice-screen', '--hide-scrollbars', '--mute-audio', '--no-sandbox', 'about:blank'];

foreach (['low-mem flags' => null, 'playwright flags' => $playwrightDefaults] as $label => $args) {
    $b = Playwright::chromium()->launch($args === null ? [] : ['args' => $args, 'ignoreDefaultArgs' => true]);
    $pages = [];
    for ($i = 0; $i < 5; $i++) {
        $p = $b->newContext()->newPage();
        $p->goto('data:text/html,<h1>page ' . $i . '</h1><script>for(let i=0;i<1e5;i++)window["k"+i%100]=i</script>');
        $pages[] = $p;
    }
    usleep(800000);
    [$chrome, $n] = pss($b->pid());
    $php = (int)trim(shell_exec("awk '/^Pss:/{print \$2}' /proc/" . getmypid() . "/smaps_rollup"));
    printf("%-17s 5 pages | Chrome PSS %6.1f MB (%d procs) | PHP driver PSS %5.1f MB\n", $label, $chrome / 1024, $n, $php / 1024);
    $b->close();
}
