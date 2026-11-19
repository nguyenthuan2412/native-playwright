# Native Playwright

**English** | [Tiếng Việt](README.vi.md)

**Playwright-style browser automation for PHP: no Node.js, works in Swoole coroutines.**

Native Playwright is a native PHP extension. It is written in PHP and compiled to C++17 with [TypePHP](https://github.com/swoole/typephp). It drives Chromium directly over the Chrome DevTools Protocol (CDP), with no intermediate process.

- **Familiar API**: `Locator`, `getByRole`, auto-waiting, `route`, `expectPopup`… mirror Playwright, so existing code ports easily.
- **No Node.js**: no driver process, just PHP and Chromium.
- **Lightweight**: the driver uses about 19 MB, compared with about 145 MB for Playwright on Node. Total RAM is about 34% lower.
- **Swoole support**: coroutines are detected automatically, so many pages can run concurrently on one worker without blocking the event loop.
- **Requirements**: PHP 8.4 / 8.5 (NTS), Linux or macOS.

---

## Table of contents

1. [Installation](#1-installation)
2. [Quick start](#2-quick-start)
3. [Core concepts](#3-core-concepts)
4. [Usage guide](#4-usage-guide)
   - [Launching the browser](#41-launching-the-browser)
   - [Contexts and emulation](#42-contexts-and-emulation)
   - [Navigation](#43-navigation)
   - [Finding elements with locators](#44-finding-elements-with-locators)
   - [Actions](#45-actions)
   - [Reading data and waiting](#46-reading-data-and-waiting)
   - [Running JavaScript](#47-running-javascript)
   - [Keyboard, mouse, touch](#48-keyboard-mouse-touch)
   - [Iframes](#49-iframes)
   - [Network: monitoring and interception](#410-network-monitoring-and-interception)
   - [Events](#411-events)
   - [Dialogs, popups, downloads, uploads](#412-dialogs-popups-downloads-uploads)
   - [Screenshots and PDF](#413-screenshots-and-pdf)
   - [Cookies and storage state](#414-cookies-and-storage-state)
   - [Calling PHP from the page](#415-calling-php-from-the-page)
   - [Timeouts and errors](#416-timeouts-and-errors)
   - [Raw CDP access](#417-raw-cdp-access)
5. [Using with Swoole](#5-using-with-swoole)
6. [Migrating from Playwright (JS)](#6-migrating-from-playwright-js)
7. [Performance](#7-performance)
8. [Architecture](#8-architecture)
9. [Current limitations](#9-current-limitations)
10. [Troubleshooting](#10-troubleshooting)
11. [Development](#11-development)

---

## 1. Installation

### Requirements

| Component | Version |
|---|---|
| PHP | 8.4 or 8.5, NTS build |
| Chromium | `chrome-headless-shell` (recommended), Chromium or Google Chrome |
| Swoole | 6.x (optional, only needed for coroutines) |
| Build tools | C/C++ compiler (C++17), `phpize`, `libgmp-dev`, `libmpfr-dev` |

### Install with PIE (recommended)

[PIE](https://github.com/php/pie) is the official PHP extension installer. It builds the extension for your exact PHP version and enables it in `php.ini`:

```bash
# build dependencies (Debian/Ubuntu; use gmp-devel mpfr-devel on RHEL, "brew install gmp mpfr" on macOS)
sudo apt-get install -y build-essential libgmp-dev libmpfr-dev

pie install nguyenthuan2412/native-playwright
```

### Install with PECL

Each [GitHub release](https://github.com/nguyenthuan2412/native-playwright/releases) ships a PECL package:

```bash
sudo apt-get install -y build-essential libgmp-dev libmpfr-dev
pecl install https://github.com/nguyenthuan2412/native-playwright/releases/download/v0.1.0/native_playwright-0.1.0.tgz
echo "extension=native_playwright" > "$(php-config --ini-dir)/native_playwright.ini"
```

### Build from source

The `ext/` directory is a standard phpize source tree. Building it does not require TypePHP:

```bash
cd ext
phpize
./configure            # --with-gmp-dir=PREFIX if GMP/MPFR live in a non-standard prefix
make -j"$(nproc)"
sudo make install
```

Verify:

```bash
php --ri native_playwright
```

The extension statically embeds the PHPX runtime. At runtime it only needs the system `libgmp` and `libmpfr`.

### Installing Chromium

Native Playwright looks for a browser in this order:

1. The `NATIVE_PLAYWRIGHT_CHROME` environment variable
2. The `executablePath` launch option
3. Standard install locations, preferring `chrome-headless-shell`

```bash
# Debian / Ubuntu
apt-get install chromium-headless-shell
export NATIVE_PLAYWRIGHT_CHROME=/usr/lib/chromium/chromium-headless-shell
```

Use `chrome-headless-shell` where possible. Full Chromium in headless mode still builds browser UI for every page and uses about 3× more RAM (see [Performance](#7-performance)).

---

## 2. Quick start

```php
<?php
use NativePlaywright\Playwright;

$browser = Playwright::chromium()->launch();
$page = $browser->newPage();

$page->goto('https://example.com');
echo $page->title(), PHP_EOL;

$page->getByRole('link', ['name' => 'More information'])->click();
$page->waitForLoadState();

$page->screenshot(['path' => 'example.png', 'fullPage' => true]);
$browser->close();
```

```bash
php -d extension=build/php8.5/native_playwright.so quickstart.php
```

---

## 3. Core concepts

| Object | Role |
|---|---|
| `Playwright` | Entry point: `Playwright::chromium()` returns a `BrowserType` |
| `Browser` | One Chromium process |
| `BrowserContext` | An isolated session (own cookies, storage, cache). Cheap to create because it shares the browser process |
| `Page` | A tab |
| `Frame` | The main frame or an iframe inside a page |
| `Locator` | A way to find elements. Lazy, strict, and auto-waiting |

General conventions:

- **Options** are passed as associative arrays, with the same keys as Playwright: `['timeout' => 5000, 'waitUntil' => 'networkidle']`.
- **Times** are in milliseconds. `timeout => 0` means no limit.
- **URL patterns** come in three forms: a glob (`'**/api/*'`), a PHP regex written as a string (`'/\.png$/'`), or a `Closure(string $url): bool`.

---

## 4. Usage guide

### 4.1 Launching the browser

```php
$browser = Playwright::chromium()->launch([
    'executablePath' => '/usr/lib/chromium/chromium-headless-shell',
    'args'           => ['--lang=en-US'],   // extra Chromium flags
    'timeout'        => 30000,
    'slowMo'         => 0,                  // ms pause after each action (debugging)
    'downloadsPath'  => '/tmp/downloads',
    'proxy'          => ['server' => 'http://proxy:3128', 'bypass' => 'localhost'],
]);

echo $browser->version();          // "156.0.8078.79"
$browser->close();
```

| Option | Default | Description |
|---|---|---|
| `executablePath` | auto-detected | Path to Chromium |
| `args` | `[]` | Extra Chromium flags |
| `ignoreDefaultArgs` | `false` | `true` drops all default flags; or pass an array of flags to drop |
| `headless` | `true` | `false` only has an effect with full Chromium |
| `chromiumSandbox` | `false` | Enable Chromium's sandbox |
| `siteIsolation` | `false` | Enable site isolation (see [Limitations](#9-current-limitations)) |
| `swoole` | auto-detected | Force (or disable) the Swoole transport |

A persistent profile (keeps logins between runs):

```php
$context = Playwright::chromium()->launchPersistentContext('/data/profile', ['locale' => 'en-US']);
$page = $context->newPage();
// ...
$context->close();   // also closes the browser
```

### 4.2 Contexts and emulation

```php
$context = $browser->newContext([
    'baseURL'          => 'https://shop.example.com',
    'viewport'         => ['width' => 1366, 'height' => 768],   // null = don't force a size
    'deviceScaleFactor'=> 2,
    'userAgent'        => 'MyBot/1.0',
    'locale'           => 'en-GB',
    'timezoneId'       => 'Europe/London',
    'geolocation'      => ['latitude' => 51.50, 'longitude' => -0.12],
    'permissions'      => ['geolocation', 'notifications'],
    'colorScheme'      => 'dark',
    'extraHTTPHeaders' => ['X-Request-Source' => 'Native Playwright'],
    'httpCredentials'  => ['username' => 'admin', 'password' => 'secret'],
    'ignoreHTTPSErrors'=> true,
    'javaScriptEnabled'=> true,
    'offline'          => false,
    'storageState'     => 'auth.json',   // load saved cookies + localStorage
]);

$page = $context->newPage();
$page->goto('/cart');   // same as https://shop.example.com/cart
```

Device emulation:

```php
$page = $browser->newPage(Playwright::devices('iPhone 13'));
```

Available devices: `iPhone 15`, `iPhone 13`, `iPhone SE`, `iPad Pro 11`, `Pixel 7`, `Galaxy S9+`, `Desktop Chrome`, `Desktop Chrome HiDPI`.

`$browser->newPage($options)` creates a dedicated context for that page. Closing the page also closes the context.

Changing settings while a context is running:

```php
$context->setGeolocation(['latitude' => 48.85, 'longitude' => 2.35]);
$context->setOffline(true);
$context->setExtraHTTPHeaders(['Authorization' => 'Bearer ...']);
$context->grantPermissions(['clipboard-read'], ['origin' => 'https://app.example.com']);
$context->clearPermissions();

$page->setViewportSize(['width' => 800, 'height' => 600]);
$page->emulateMedia(['media' => 'print', 'colorScheme' => 'light']);
```

### 4.3 Navigation

```php
$response = $page->goto('https://example.com', [
    'waitUntil' => 'load',        // load | domcontentloaded | networkidle | commit
    'timeout'   => 15000,
    'referer'   => 'https://google.com',
]);
$response?->status();             // 200

$page->reload();
$page->goBack();
$page->goForward();

$page->waitForLoadState('networkidle');
$page->waitForURL('**/checkout/success');

// Wait for a navigation triggered by an action
$page->expectNavigation(fn() => $page->getByText('Sign in')->click());

$page->url();
$page->title();
$page->content();                 // current HTML
$page->setContent('<h1>Hello</h1>');
```

`goto()` throws `NativePlaywright\Exception` when navigation fails (for example `net::ERR_NAME_NOT_RESOLVED`). It returns `null` for same-document navigations (hash changes).

### 4.4 Finding elements with locators

Prefer locators that reflect how users see the page:

```php
$page->getByRole('button', ['name' => 'Submit']);
$page->getByRole('heading', ['level' => 1]);
$page->getByRole('checkbox', ['checked' => true]);
$page->getByText('Welcome');                    // substring, case-insensitive
$page->getByText('Welcome', ['exact' => true]); // exact match
$page->getByText('/^Total: \d+/');              // regex
$page->getByLabel('Email');
$page->getByPlaceholder('Search');
$page->getByAltText('Logo');
$page->getByTitle('Close');
$page->getByTestId('submit-btn');               // data-testid; rename with Playwright::setTestIdAttribute()
```

CSS / XPath and Playwright's extended syntax:

```php
$page->locator('#cart .item');                  // CSS, pierces shadow DOM
$page->locator('xpath=//table/tr[2]');
$page->locator('//button');                     // detected as XPath
$page->locator('text=Sign out');
$page->locator('li:has-text("Apple")');
$page->locator('button:visible');
$page->locator('.list >> li >> nth=2');         // chaining
```

Filtering, combining and picking by position:

```php
$rows = $page->locator('tr');

$rows->filter(['hasText' => 'Paid']);
$rows->filter(['hasNotText' => 'Cancelled']);
$rows->filter(['has' => $page->getByRole('button', ['name' => 'Edit'])]);
$rows->filter(['visible' => true]);

$rows->first();
$rows->last();
$rows->nth(3);
$rows->count();
foreach ($rows->all() as $row) { /* ... */ }

$page->locator('.card')->getByRole('link');     // search inside
$page->getByRole('button')->and($page->getByTitle('Save'));
$page->getByText('Sign in')->or($page->getByText('Log in'));
```

**Strict mode:** any action on a locator that matches more than one element fails with `strict mode violation`, and the error lists the matches. Narrow it down with `first()`, `nth()` or `filter()`.

### 4.5 Actions

Before every action, Native Playwright waits until the element is **attached, visible, stable (not animating), enabled, and not covered by another element**. Off-screen elements are scrolled into view. You don't need `sleep` calls.

```php
$page->getByRole('button', ['name' => 'Buy']) ->click();
$page->getByText('Photo')                     ->dblclick();
$page->getByLabel('Full name')                ->fill('Jane Doe');
$page->getByLabel('Full name')                ->clear();
$page->getByLabel('OTP code')                 ->pressSequentially('123456', ['delay' => 50]);
$page->getByLabel('Search')                   ->press('Enter');
$page->getByLabel('I agree')                  ->check();
$page->getByLabel('Newsletter')               ->setChecked(false);
$page->getByLabel('Country')                  ->selectOption('Germany');          // by value or label
$page->locator('select[multiple]')            ->selectOption(['a', 'b']);
$page->locator('select')                      ->selectOption(['index' => 2]);
$page->locator('.menu')                       ->hover();
$page->locator('#item')                       ->dragTo($page->locator('#trash'));
$page->locator('input')                       ->focus();
$page->locator('.box')                        ->dispatchEvent('click');
$page->locator('button')                      ->tap();                             // requires hasTouch
```

Options for mouse actions:

```php
$locator->click([
    'button'     => 'right',              // left | right | middle
    'clickCount' => 2,
    'delay'      => 100,                   // ms between press and release
    'position'   => ['x' => 5, 'y' => 5],  // relative to the element's top-left corner
    'modifiers'  => ['Shift', 'ControlOrMeta'],
    'force'      => true,                  // skip actionability checks
    'trial'      => true,                  // run the checks only, don't click
    'timeout'    => 5000,
]);
```

Like Playwright, `Page` also has selector shortcuts: `$page->click('#ok')`, `$page->fill('#q', 'x')`, `$page->check(...)`…

### 4.6 Reading data and waiting

```php
$el = $page->locator('#total');

$el->textContent();       // ?string
$el->innerText();
$el->innerHTML();
$el->getAttribute('href');
$el->inputValue();        // input / textarea / select
$el->boundingBox();       // ['x','y','width','height'] or null

$el->isVisible();         // does not wait
$el->isHidden();
$el->isEnabled();
$el->isChecked();
$el->isEditable();

$page->locator('li')->allTextContents();   // string[]
$page->locator('li')->allInnerTexts();

$page->locator('main')->ariaSnapshot();    // accessibility tree as YAML
```

Waiting for a specific state:

```php
$page->locator('.spinner')->waitFor(['state' => 'hidden']);    // attached | detached | visible | hidden
$page->locator('.result')->waitFor(['timeout' => 10000]);
$page->waitForSelector('#toast', ['state' => 'visible']);
$page->waitForFunction('() => window.appReady === true');
$page->waitForTimeout(500);     // for debugging only
```

### 4.7 Running JavaScript

```php
$page->evaluate('document.title');                                    // expression
$page->evaluate('(a) => a.x + a.y', ['x' => 1, 'y' => 2]);           // function with an argument
$page->evaluate('async () => (await fetch("/api/me")).json()');      // promises are awaited

$page->locator('#price')->evaluate('el => el.dataset.value');
$page->locator('li')->evaluateAll('(els, sep) => els.map(e => e.textContent).join(sep)', ', ');

$page->addInitScript('Object.defineProperty(navigator, "webdriver", { get: () => false })');
$page->addScriptTag(['url' => 'https://cdn.example.com/lib.js']);
$page->addStyleTag(['content' => '* { animation: none !important }']);
```

Return values are converted to PHP types: objects become associative arrays, `Date` becomes an ISO string, and `NaN`/`Infinity` become floats. Values that can't be serialized (DOM nodes, `window`, functions) become `null`.

### 4.8 Keyboard, mouse, touch

```php
$page->keyboard->type('Hello world', ['delay' => 30]);
$page->keyboard->press('ControlOrMeta+A');     // Control on Linux/Windows, Meta on macOS
$page->keyboard->press('Shift+Tab');
$page->keyboard->down('Shift');
$page->keyboard->up('Shift');
$page->keyboard->insertText('😀');

$page->mouse->move(100, 200, ['steps' => 10]);
$page->mouse->down();
$page->mouse->up();
$page->mouse->click(300, 400, ['button' => 'right']);
$page->mouse->wheel(0, 500);

$page->touchscreen->tap(50, 50);
```

### 4.9 Iframes

```php
$frame = $page->frameLocator('iframe#payment');
$frame->getByLabel('Card number')->fill('4111 1111 1111 1111');
$frame->getByRole('button', ['name' => 'Pay'])->click();

// Nested iframes
$page->frameLocator('#outer')->frameLocator('#inner')->locator('button')->click();

// Direct access to Frame objects
$page->frame('payment');                         // by name attribute
$page->frame(['url' => '**/checkout/*']);
$page->frames();
$page->mainFrame()->childFrames();
```

Same-origin and cross-origin iframes are both supported with the default configuration.

### 4.10 Network: monitoring and interception

Monitoring:

```php
$page->on('request',  fn(NativePlaywright\Request $r)  => print("> {$r->method()} {$r->url()}\n"));
$page->on('response', fn(NativePlaywright\Response $r) => print("< {$r->status()} {$r->url()}\n"));
$page->on('requestfailed', fn($r) => print("x {$r->url()} {$r->failure()['errorText']}\n"));

$response = $page->expectResponse('**/api/orders*', fn() => $page->getByText('Load orders')->click());
$data = $response->json();
$response->request()->postDataJSON();
```

Intercepting and modifying requests (routes):

```php
use NativePlaywright\Route;
use NativePlaywright\Request;

// Mock a response
$page->route('**/api/user', fn(Route $route) => $route->fulfill([
    'status' => 200,
    'json'   => ['id' => 1, 'name' => 'Test'],
]));

// Block heavy resources
$page->route('/\.(png|jpe?g|gif|webp|woff2?)$/', fn(Route $route) => $route->abort());

// Modify a request before it is sent
$page->route('**/api/**', fn(Route $route, Request $req) => $route->continue([
    'headers' => array_merge($req->headers(), ['authorization' => 'Bearer xyz']),
]));

// Hand over to a handler registered earlier
$page->route('**/*', fn(Route $route) => $route->fallback());

// Apply only N times
$page->route('**/flaky', fn(Route $r) => $r->abort('timedout'), ['times' => 1]);

// Apply to every page in a context
$context->route('**/analytics/**', fn(Route $r) => $r->abort());

$page->unroute('**/api/user');
$page->unrouteAll();
```

Handlers registered later take precedence. Page handlers run before context handlers. If no handler resolves a request, it continues to the network.

### 4.11 Events

```php
$page->on('console',   fn(NativePlaywright\ConsoleMessage $m) => print("[{$m->type()}] {$m->text()}\n"));
$page->on('pageerror', fn(NativePlaywright\JSError $e) => print("JS error: {$e->message()}\n"));
$page->on('close',     fn() => print("page closed\n"));
$page->once('load',    fn() => print("loaded\n"));
$page->off('console');
```

Waiting for an event caused by an action. The listener is registered **before** the action runs, so the event is never missed:

```php
$msg = $page->expectConsoleMessage(fn() => $page->getByText('Log')->click());
$req = $page->expectRequest('**/track', fn() => $page->getByText('Buy')->click());
$err = $page->expectEvent('pageerror', fn() => $page->getByText('Break')->click());

// Wait for an event that matches a predicate
$page->waitForEvent('console', fn($m) => str_contains($m->text(), 'ready'), 10000);
```

| Object | Events |
|---|---|
| Page | `console`, `pageerror`, `dialog`, `popup`, `download`, `filechooser`, `request`, `response`, `requestfinished`, `requestfailed`, `load`, `domcontentloaded`, `frameattached`, `framenavigated`, `framedetached`, `close`, `crash` |
| BrowserContext | `page`, `close`, `request`, `response`, `requestfinished`, `requestfailed`, `console`, `dialog`, `weberror` |
| Browser | `disconnected` |

### 4.12 Dialogs, popups, downloads, uploads

**Dialogs** (`alert` / `confirm` / `prompt` / `beforeunload`): if there is no handler, the dialog is dismissed automatically, as in Playwright.

```php
$page->on('dialog', fn(NativePlaywright\Dialog $d) => $d->accept('prompt value'));
$dialog = $page->expectDialog(fn() => $page->getByText('Delete')->click());   // handle the dialog yourself
```

**Popups and new tabs:**

```php
$popup = $page->expectPopup(fn() => $page->getByText('Open in new tab')->click());
$popup->waitForLoadState();
echo $popup->title();

$newPage = $context->expectPage(fn() => $page->evaluate('() => window.open("/help")'));
```

**Downloads:**

```php
$download = $page->expectDownload(fn() => $page->getByText('Export CSV')->click());
$download->suggestedFilename();      // "report.csv"
$download->saveAs('/data/report.csv');
$download->path();                   // temporary file; waits for completion
```

**Uploads:**

```php
$page->getByLabel('Avatar')->setInputFiles('/path/avatar.png');
$page->locator('input[type=file]')->setInputFiles(['/a.pdf', '/b.pdf']);
$page->locator('input[type=file]')->setInputFiles([
    'name' => 'data.csv', 'mimeType' => 'text/csv', 'buffer' => "a,b\n1,2",
]);

// Through the native file chooser
$chooser = $page->expectFileChooser(fn() => $page->getByText('Upload')->click());
$chooser->setFiles('/path/file.txt');
```

### 4.13 Screenshots and PDF

```php
$png = $page->screenshot();                                   // returns bytes
$page->screenshot(['path' => 'full.png', 'fullPage' => true]);
$page->screenshot(['path' => 'shot.jpg', 'type' => 'jpeg', 'quality' => 80]);
$page->screenshot(['clip' => ['x' => 0, 'y' => 0, 'width' => 400, 'height' => 300]]);
$page->screenshot(['omitBackground' => true]);                // transparent background
$page->locator('.chart')->screenshot(['path' => 'chart.png']);

$page->pdf([
    'path'            => 'invoice.pdf',
    'format'          => 'A4',          // Letter, Legal, A0–A6, ...
    'landscape'       => false,
    'printBackground' => true,
    'margin'          => ['top' => '1cm', 'bottom' => '1cm', 'left' => '15mm', 'right' => '15mm'],
    'displayHeaderFooter' => true,
    'footerTemplate'  => '<div style="font-size:8px;width:100%;text-align:center"><span class="pageNumber"></span></div>',
]);
```

### 4.14 Cookies and storage state

```php
$context->cookies();                                      // all cookies
$context->cookies('https://example.com');                 // cookies for a URL
$context->addCookies([
    ['name' => 'session', 'value' => 'abc', 'url' => 'https://example.com'],
    ['name' => 'lang', 'value' => 'en', 'domain' => '.example.com', 'path' => '/', 'httpOnly' => true],
]);
$context->clearCookies(['name' => 'session']);
$context->clearCookies();
```

Log in once and reuse the session:

```php
// First run: log in and save the state
$page->goto('/login');
$page->getByLabel('Email')->fill('me@example.com');
$page->getByLabel('Password')->fill('...');
$page->getByRole('button', ['name' => 'Sign in'])->click();
$page->waitForURL('**/dashboard');
$context->storageState(['path' => 'auth.json']);

// Later runs
$context = $browser->newContext(['storageState' => 'auth.json']);
```

### 4.15 Calling PHP from the page

```php
$page->exposeFunction('sha256', fn(string $s) => hash('sha256', $s));
$page->evaluate('async () => await window.sha256("hello")');

$context->exposeBinding('whoAmI', fn(array $source) => $source['page']->url());
```

Functions are installed before the page's own scripts run, and they survive navigations.

### 4.16 Timeouts and errors

```php
$context->setDefaultTimeout(10000);              // every action in the context
$context->setDefaultNavigationTimeout(20000);
$page->setDefaultTimeout(5000);                  // override at page level
$locator->click(['timeout' => 2000]);            // override for one call
```

```php
use NativePlaywright\Exception;
use NativePlaywright\TimeoutError;

try {
    $page->getByText('Does not exist')->click(['timeout' => 1000]);
} catch (TimeoutError $e) {
    // "locator.click: Timeout 1000ms exceeded.
    //  Call log:
    //    - waiting for internal:text="Does not exist"i"
} catch (Exception $e) {
    // navigation errors, strict mode violations, closed pages, ...
}
```

`TimeoutError` extends `NativePlaywright\Exception`, which extends `\RuntimeException`.

### 4.17 Raw CDP access

Use this for Chrome features the API doesn't cover:

```php
$cdp = $page->newCDPSession();
$cdp->send('Performance.enable');
$metrics = $cdp->send('Performance.getMetrics');
$cdp->on('Network.webSocketFrameReceived', fn(array $p) => print($p['response']['payloadData']));

$browserCdp = $browser->newBrowserCDPSession();
```

---

## 5. Using with Swoole

Native Playwright detects when `launch()` is called inside a coroutine. In that case the transport uses Swoole's own reactor:

- Each call suspends only the calling coroutine and **never blocks the worker**.
- Many coroutines share one browser and run concurrently on different pages or contexts.
- Event handlers (`route`, `dialog`, `console`…) run in their own coroutines.

```php
use NativePlaywright\Playwright;
use function Swoole\Coroutine\run;

run(function () {
    $browser = Playwright::chromium()->launch();
    $wg = new Swoole\Coroutine\WaitGroup();

    foreach (['https://a.com', 'https://b.com', 'https://c.com'] as $url) {
        $wg->add();
        go(function () use ($browser, $url, $wg) {
            try {
                $page = $browser->newPage();          // a dedicated context per task
                $page->goto($url);
                echo $url, ': ', $page->title(), PHP_EOL;
                $page->close();
            } finally {
                $wg->done();
            }
        });
    }

    $wg->wait();
    $browser->close();
});
```

### In a Swoole HTTP server

See the full example in [examples/swoole-server.php](examples/swoole-server.php).

```php
$server->on('workerStart', function () use (&$browser) {
    $browser = Playwright::chromium()->launch();      // one browser per worker
});

$server->on('request', function ($req, $res) use (&$browser) {
    $context = $browser->newContext();                // isolation per request
    try {
        $page = $context->newPage();
        $page->goto($req->get['url']);
        $res->header('Content-Type', 'image/png');
        $res->end($page->screenshot());
    } finally {
        $context->close();
    }
});
```

**Rules:**

1. **Launch in `workerStart`**, never before the fork. Each process needs its own browser.
2. **Use one context per request** and close it in `finally`. A context is far cheaper than a new browser.
3. Don't share a `Browser` between processes.
4. To force a transport, use `launch(['swoole' => true|false])`.

---

## 6. Migrating from Playwright (JS)

| Playwright (JS) | Native Playwright (PHP) |
|---|---|
| `const browser = await chromium.launch()` | `$browser = Playwright::chromium()->launch()` |
| `await page.goto(url, { waitUntil: 'networkidle' })` | `$page->goto($url, ['waitUntil' => 'networkidle'])` |
| `page.getByRole('button', { name: 'OK' })` | `$page->getByRole('button', ['name' => 'OK'])` |
| `await locator.click()` | `$locator->click()` |
| `page.keyboard.press('Enter')` | `$page->keyboard->press('Enter')` |
| `page.on('console', m => ...)` | `$page->on('console', fn($m) => ...)` |
| `const [popup] = await Promise.all([page.waitForEvent('popup'), click()])` | `$popup = $page->expectPopup(fn() => ...)` |
| `const resp = await page.waitForResponse('**/api')` (with an action) | `$resp = $page->expectResponse('**/api', fn() => ...)` |
| `await route.fulfill({ json })` | `$route->fulfill(['json' => ...])` |
| `await page.$eval(sel, fn)` | `$page->evalOnSelector($sel, $fn)` |
| `await page.$$eval(sel, fn)` | `$page->evalOnSelectorAll($sel, $fn)` |
| `devices['iPhone 13']` | `Playwright::devices('iPhone 13')` |
| Regex `/abc/i` | String `'/abc/i'` |

Every call is synchronous; there is no `await`. Under Swoole, waiting only suspends the current coroutine.

---

## 7. Performance

Measured with `make bench` and `make memory` in Docker (linux/arm64, Chromium 156, `chrome-headless-shell`). Both sides use the same Chromium binary.

| Metric | Native Playwright | Playwright (Node) |
|---|---|---|
| Driver process | none | 1 Node process |
| Driver PSS | **~19 MB** (whole PHP process) | ~145 MB |
| Chromium PSS, 5 pages / 5 contexts | ~261 MB | ~280 MB |
| **Total RAM** | **~280 MB** | ~425 MB |
| `evaluate('1+1')` per call | **~0.6 ms** | ~1.6–2.2 ms |
| `goto` (small page) | 11–17 ms | 12–20 ms |
| 1 MB request payload | ~18–23 ms | ~31–52 ms |

Measurements inside Docker on macOS are noisy; read them as relative. Rendering and JavaScript execution time are still determined by Chromium.

**Why it is lighter:**

- No intermediate Node process; data is serialized once.
- A pipe instead of a WebSocket: no port, no handshake, no frame masking.
- `chrome-headless-shell` is preferred. Full Chromium used ~856 MB for 5 pages; headless-shell used ~257 MB.
- Memory-saving default flags: `--in-process-gpu`, `--no-startup-window`, site isolation off, background services disabled.
- Page setup is pipelined (about 10 commands in one round trip). A click is also a single round trip.
- Events with no listener are dropped immediately, and finished requests are released.

---

## 8. Architecture

```
┌──────────────── PHP process ────────────────┐          ┌──────── Chromium ────────┐
│  your code                                  │          │                          │
│     │                                       │  pipe    │  browser ── renderer(s)  │
│  native_playwright.so                                  │  fd 3/4  │                          │
│   ├─ Playwright API (PHP → TypePHP)         │◄────────►│  CDP                     │
│   ├─ Transport (blocking | Swoole)          │  JSON\0  │                          │
│   └─ pipe.cc (spawn, poll, frame splitting) │          │  isolated world:         │
└─────────────────────────────────────────────┘          │  selector engine         │
                                                         └──────────────────────────┘
```

| Component | Role |
|---|---|
| [src/native/pipe.cc](src/native/pipe.cc) | About 200 lines of C++: `posix_spawn` Chromium, non-blocking pipe fds 3/4, `poll`, split frames on `\0` |
| [src/NativePlaywright/Transport.php](src/NativePlaywright/Transport.php) | Matches responses to requests and dispatches events. Reentrant: a handler can issue new commands while another command is waiting |
| [src/NativePlaywright/BlockingTransport.php](src/NativePlaywright/BlockingTransport.php) | CLI/FPM: waits with `poll()` in the C++ layer |
| [src/NativePlaywright/SwooleTransport.php](src/NativePlaywright/SwooleTransport.php) | One reader coroutine parks on the fd (`System::waitEvent`); calling coroutines park on a `Channel` |
| [src/NativePlaywright/Injected.php](src/NativePlaywright/Injected.php) | Selector engine (CSS, text, XPath, ARIA role, label…) and actionability checks. Runs in an isolated world, invisible to the page |
| Browser / Page / Locator… | Public API |

- **Auto-attach** with `waitForDebuggerOnStart`: emulation, init scripts, routes and bindings are applied before the page runs its first line of JavaScript.
- All PHP code is compiled to C++ by TypePHP. The PHP sources don't need to be deployed.

---

## 9. Current limitations

| Not supported yet | Workaround |
|---|---|
| Firefox, WebKit | Chromium only |
| `tracing`, video recording, HAR (`recordHar`, `routeFromHAR`) | Use `on('request'/'response')` or a `CDPSession` |
| `APIRequestContext` (`request.get/post`) | Use a PHP HTTP client (Guzzle, Swoole HTTP client); cookies are available from `$context->cookies()` |
| `route.fetch()` | Combine `route->continue()` with `expectResponse()` |
| `ElementHandle` / `JSHandle` | Use `Locator` |
| `clock`, worker / service worker / WebSocket events | Use a `CDPSession` |
| `connectOverCDP` (attach to a running browser) | Not supported (Native Playwright launches its own browser over a pipe) |
| Playwright Test `expect()` assertions | Use `waitFor()` or PHPUnit / Pest assertions |
| Cross-origin iframes with `siteIsolation => true` | Keep the default `siteIsolation => false` |

Note: Native Playwright **disables site isolation by default** to save RAM. If you use Native Playwright to browse untrusted content, consider turning it back on.

---

## 10. Troubleshooting

| Symptom | Cause and fix |
|---|---|
| `Chromium not found` | Set `NATIVE_PLAYWRIGHT_CHROME`, or pass `executablePath` to `launch()` |
| `configure: error: gmp.h not found` | Install `libgmp-dev libmpfr-dev` (or pass `--with-gmp-dir=PREFIX`) |
| The extension fails to load with an API version mismatch | Reinstall with PIE/PECL for the PHP binary you run (`pie install` uses the `php` on your PATH) |
| Chromium exits immediately when running as root | Keep `chromiumSandbox => false` (the default) |
| `strict mode violation` | The locator matches several elements; narrow it with `first()`, `nth()` or `filter()` |
| `Timeout ... exceeded` with `element is not visible / not enabled / intercepts pointer events` | The last line of the call log shows which condition wasn't met |
| High RAM usage | Use `chrome-headless-shell`, close contexts when done, and don't launch a new browser per task |
| Hangs in a Swoole server | Don't launch before the fork; always launch in `workerStart` |
| Segmentation fault at exit when using Swoole | Xdebug is loaded. Swoole is incompatible with Xdebug (it crashes even without Native Playwright); disable Xdebug for Swoole processes, e.g. `php -d xdebug.mode=off` does **not** help, remove the extension or run with `php -n -d extension=swoole -d extension=native_playwright` |

---

## 11. Development

```bash
make image PHP=8.5     # toolchain image (TypePHP + PHPX + Swoole + chrome-headless-shell)
make dist              # regenerate ext/ (phpize tree for PECL/PIE) from src/
make dist-test         # build ext/ with phpize and run the e2e suite
make build PHP=8.5     # build/php8.5/native_playwright.so
make test  PHP=8.5     # e2e tests: blocking + Swoole modes
make all               # build + test on PHP 8.4 and 8.5
make bench             # latency comparison with Playwright (Node)
make memory            # RAM comparison with Playwright (Node)
make shell             # shell inside the image
```

Layout:

```
src/native/        C++ for syscalls + stub declarations for TypePHP
ext/               generated phpize source tree (PECL/PIE build-path) - run `make dist`, do not edit
tools/             make-dist.sh, config.m4 template, package.xml generator
src/NativePlaywright/        the whole API (PHP, compiled by TypePHP)
tests/e2e.php      end-to-end suite (35 scenarios, 2 local origins)
tests/www/         HTML/PHP fixtures used by the tests
bench/             latency and RAM benchmarks against Playwright (Node)
examples/          basic example and a Swoole HTTP server
project.yml        TypePHP configuration (mode: ext)
Dockerfile         toolchain (ARG PHP_VERSION=8.4|8.5)
```

Contribution guidelines:

- Write new logic in PHP under `src/NativePlaywright/`. Only add C++ when a syscall is needed.
- Don't use another extension's constants in compiled code; use the numeric value with a comment.
- Every new feature needs a scenario in `tests/e2e.php` that passes in both modes (blocking and Swoole).
- Run `make dist` and commit `ext/` together with changes to `src/`.

### Releasing

1. Bump `version` in `project.yml`, then run `make dist` (this updates `ext/package.xml`).
2. Commit, then tag: `git tag v0.1.0 && git push --tags`.
3. The release workflow builds `native_playwright-<version>.tgz` (PECL) and attaches it to the GitHub release. Packagist picks up the tag for PIE.
