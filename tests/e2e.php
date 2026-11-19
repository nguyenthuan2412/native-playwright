<?php
// End-to-end feature tests.
//   php -d extension=./native_playwright.so tests/e2e.php           (blocking)
//   php -d extension=./native_playwright.so tests/e2e.php swoole    (inside Swoole coroutines)
use NativePlaywright\Browser;
use NativePlaywright\Playwright;
use NativePlaywright\Route;
use NativePlaywright\Request;
use NativePlaywright\Dialog;
use NativePlaywright\ConsoleMessage;
use NativePlaywright\TimeoutError;

const BASE = 'http://127.0.0.1:8001';

$pass = 0;
$fail = 0;
$failures = [];
function check(string $name, Closure $fn): void
{
    global $pass, $fail, $failures;
    $t = microtime(true);
    try {
        $fn();
        $pass++;
        printf("  \033[32mPASS\033[0m %-45s %6.1f ms\n", $name, (microtime(true) - $t) * 1000);
    } catch (Throwable $e) {
        $fail++;
        $failures[] = $name;
        printf("  \033[31mFAIL\033[0m %-45s %s\n", $name, str_replace("\n", "\n         ", $e->getMessage()));
    }
}
function eq(mixed $a, mixed $b, string $msg = ''): void
{
    if ($a !== $b) {
        throw new RuntimeException(($msg ? "$msg: " : '') . 'expected ' . var_export($b, true) . ', got ' . var_export($a, true));
    }
}
function ok(mixed $v, string $msg = 'expected truthy'): void
{
    if (!$v) {
        throw new RuntimeException($msg);
    }
}

function suite(): void
{
    $browser = Playwright::chromium()->launch();
    echo 'Browser ', $browser->version(), "\n";

    $ctx = $browser->newContext(['baseURL' => BASE]);
    $page = $ctx->newPage();

    check('goto + response + title', function () use ($page) {
        $r = $page->goto('/index.html');
        eq($r?->status(), 200);
        ok($r->ok());
        eq($page->title(), 'Fixture');
        eq($page->url(), BASE . '/index.html');
    });

    check('getByRole / getByText / getByLabel', function () use ($page) {
        eq($page->getByRole('heading', ['name' => 'Welcome'])->textContent(), 'Welcome');
        eq($page->getByRole('link', ['name' => 'Second page'])->getAttribute('href'), '/second.html');
        eq($page->getByText('Banana')->innerText(), 'Banana split');
        eq($page->getByLabel('Full name')->getAttribute('id'), 'name');
        eq($page->getByLabel('Email')->getAttribute('name'), 'email');
        eq($page->getByPlaceholder('Your name')->count(), 1);
        eq($page->getByTestId('submit')->textContent(), 'Send');
        eq($page->getByRole('button', ['name' => 'Disabled'])->isDisabled(), true);
    });

    check('css / xpath / chaining / nth / filter', function () use ($page) {
        eq($page->locator('li')->count(), 3);
        eq($page->locator('li')->nth(1)->locator('b')->textContent(), 'split');
        eq($page->locator('li')->last()->textContent(), 'Cherry');
        eq($page->locator('xpath=//li[1]')->textContent(), 'Apple');
        eq($page->locator('li')->filter(['hasText' => 'cherry'])->count(), 1);
        eq($page->locator('li')->filter(['has' => $page->locator('b')])->count(), 1);
        eq($page->locator('li:has-text("Apple")')->count(), 1);
        eq($page->locator('li')->allTextContents(), ['Apple', 'Banana split', 'Cherry']);
        eq($page->locator('#hidden')->isVisible(), false);
        eq($page->locator('#hidden')->isHidden(), true);
    });

    check('strict mode violation', function () use ($page) {
        try {
            $page->locator('li')->textContent(['timeout' => 1000]);
            throw new RuntimeException('no error');
        } catch (NativePlaywright\Exception $e) {
            ok(str_contains($e->getMessage(), 'strict mode violation'), $e->getMessage());
        }
    });

    check('auto-wait for late element', function () use ($page) {
        eq($page->locator('.late')->textContent(), 'Loaded later');
    });

    check('fill / check / selectOption / submit', function () use ($page) {
        $page->getByLabel('Full name')->fill('Nguyen Van A');
        $page->locator('input[name=email]')->fill('a@example.com');
        $page->getByLabel('I agree')->check();
        eq($page->getByLabel('I agree')->isChecked(), true);
        eq($page->locator('select')->selectOption('Blue'), ['b']);
        $page->locator('textarea')->pressSequentially('hi there');
        $page->getByRole('button', ['name' => 'Send'])->click();
        $out = json_decode($page->locator('#out')->textContent(), true);
        eq($out['name'], 'Nguyen Van A');
        eq($out['email'], 'a@example.com');
        eq($out['agree'], 'on');
        eq($out['color'], 'b');
        eq($out['bio'], 'hi there');
        eq($page->getByLabel('Full name')->inputValue(), 'Nguyen Van A');
        $page->getByLabel('Full name')->clear();
        eq($page->getByLabel('Full name')->inputValue(), '');
    });

    check('keyboard shortcuts', function () use ($page) {
        $in = $page->getByLabel('Full name');
        $in->fill('hello world');
        $in->press('ControlOrMeta+A');
        $in->press('Backspace');
        eq($in->inputValue(), '');
        $in->pressSequentially('abc');
        $in->press('ArrowLeft');
        $in->press('Shift+ArrowLeft');
        $page->keyboard->type('X');
        eq($in->inputValue(), 'aXc');
    });

    check('click scrolls far element into view', function () use ($page) {
        $page->locator('#far')->click();
        eq($page->locator('#far')->textContent(), 'far-clicked');
    });

    check('click timeout on disabled', function () use ($page) {
        try {
            $page->getByRole('button', ['name' => 'Disabled'])->click(['timeout' => 300]);
            throw new RuntimeException('no timeout');
        } catch (TimeoutError $e) {
            ok(str_contains($e->getMessage(), 'not enabled'), $e->getMessage());
        }
    });

    check('evaluate (expr, fn+arg, locator, all)', function () use ($page) {
        eq($page->evaluate('1 + 2'), 3);
        eq($page->evaluate('(a) => a.x * 2', ['x' => 21]), 42);
        eq($page->evaluate('async () => { await new Promise(r => setTimeout(r, 10)); return "async"; }'), 'async');
        eq($page->locator('h1')->evaluate('el => el.tagName'), 'H1');
        eq($page->locator('li')->evaluateAll('(els, sep) => els.map(e => e.textContent).join(sep)', '|'), 'Apple|Banana split|Cherry');
        eq($page->evaluate('() => window.apiData'), ['items' => [1, 2, 3]]);
        eq($page->evaluate('Infinity'), INF);
    });

    check('waitForFunction / waitForSelector', function () use ($page) {
        $page->evaluate('() => setTimeout(() => window.flag = 7, 100)');
        eq($page->waitForFunction('() => window.flag'), 7);
        $page->evaluate('() => setTimeout(() => { const d = document.createElement("p"); d.id = "dyn"; d.textContent = "dyn"; document.body.prepend(d); }, 100)');
        ok($page->waitForSelector('#dyn') !== null);
        $page->locator('#dyn')->waitFor(['state' => 'attached']);
        $page->evaluate('() => document.getElementById("dyn").remove()');
        $page->locator('#dyn')->waitFor(['state' => 'detached']);
    });

    check('frames: same-origin + cross-origin', function () use ($page) {
        $fl = $page->frameLocator('iframe[name=inner]');
        $fl->getByRole('button')->click();
        eq($fl->getByRole('button')->textContent(), 'frame clicked');
        $x = $page->frameLocator('#xo');
        $x->getByPlaceholder('in frame')->fill('cross');
        eq($x->getByPlaceholder('in frame')->inputValue(), 'cross');
        $x->getByText('Frame button')->click();
        eq($x->getByRole('button')->textContent(), 'frame clicked');
        ok(count($page->frames()) >= 3, 'frames()');
        eq($page->frame('inner')?->title(), 'Frame');
    });

    check('dialogs: handler + auto-dismiss', function () use ($page) {
        $page->locator('#alert')->click();
        eq($page->evaluate('window.r'), false);
        $page->once('dialog', function (Dialog $d) {
            eq($d->message(), 'Sure?');
            $d->accept();
        });
        $page->locator('#alert')->click();
        eq($page->evaluate('window.r'), true);
    });

    check('console events', function () use ($page) {
        $msg = $page->expectConsoleMessage(fn() => $page->evaluate('() => console.warn("warned", 1, {a: 1})'));
        eq($msg->type(), 'warning');
        ok(str_starts_with($msg->text(), 'warned 1'), $msg->text());
    });

    check('pageerror event', function () use ($page) {
        $err = $page->expectEvent('pageerror', fn() => $page->evaluate('() => setTimeout(() => { throw new TypeError("boom") }, 0)'));
        eq($err->message(), 'boom');
        eq($err->name(), 'TypeError');
    });

    check('request/response events + body', function () use ($page) {
        $resp = $page->expectResponse('**/api/data.json?*', fn() => $page->evaluate('() => fetch("/api/data.json?x=1")'));
        eq($resp->status(), 200);
        eq($resp->json(), ['items' => [1, 2, 3]]);
        eq($resp->request()->method(), 'GET');
        ok(str_contains($resp->url(), 'x=1'));
    });

    check('route: fulfill / abort / continue+headers / fallback', function () use ($page, $ctx) {
        $page->route('**/api/mock', fn(Route $r) => $r->fulfill(['json' => ['mocked' => true]]));
        eq($page->evaluate('async () => (await fetch("/api/mock")).json()'), ['mocked' => true]);
        $page->route('**/blocked.png', fn(Route $r) => $r->abort());
        eq($page->evaluate('async () => { try { await fetch("/blocked.png"); return "ok"; } catch (e) { return "failed"; } }'), 'failed');
        $page->route('**/echo.php', fn(Route $r) => $r->fallback(['headers' => array_merge($r->request()->headers(), ['x-test' => 'from-fallback'])]));
        $page->route('**/echo.php', fn(Route $r) => $r->fallback());
        $j = $page->evaluate('async () => (await fetch("/echo.php")).json()');
        eq($j['x'], 'from-fallback');
        $ctx->route('/\/ctx-route$/', fn(Route $r) => $r->fulfill(['body' => 'ctx', 'contentType' => 'text/plain']));
        eq($page->evaluate('async () => (await fetch("/ctx-route")).text()'), 'ctx');
        $page->unrouteAll();
        $ctx->unrouteAll();
        eq($page->evaluate('async () => (await fetch("/echo.php")).json()')['x'], '');
    });

    check('exposeFunction / exposeBinding', function () use ($page) {
        $page->exposeFunction('phpSum', fn(int ...$n) => array_sum($n));
        eq($page->evaluate('() => phpSum(1, 2, 3)'), 6);
        $page->exposeBinding('whoami', fn(array $src) => $src['page']->title());
        eq($page->evaluate('() => whoami()'), 'Fixture');
    });

    check('navigation: link click, back, forward, reload', function () use ($page) {
        $page->expectNavigation(fn() => $page->getByRole('link', ['name' => 'Second page'])->click());
        eq($page->title(), 'Second');
        $page->goBack();
        eq($page->title(), 'Fixture');
        $page->goForward();
        eq($page->title(), 'Second');
        $r = $page->reload();
        eq($r?->status(), 200);
        $page->locator('#back')->click();
        $page->waitForURL('**/index.html#anchor');
        $page->waitForLoadState('domcontentloaded');
    });

    check('popup', function () use ($page) {
        $popup = $page->expectPopup(fn() => $page->locator('#pop')->click());
        $popup->waitForLoadState();
        eq($popup->title(), 'Second');
        ok($popup->opener() === $page);
        $popup->close();
        ok($popup->isClosed());
    });

    check('download', function () use ($page) {
        $d = $page->expectDownload(fn() => $page->locator('#dl')->click());
        eq($d->suggestedFilename(), 'report.txt');
        $path = sys_get_temp_dir() . '/pwlite-report.txt';
        $d->saveAs($path);
        eq(file_get_contents($path), 'report-body');
    });

    check('setInputFiles + filechooser', function () use ($page) {
        $page->goto('/index.html');
        $page->locator('#file')->setInputFiles(['name' => 'a.txt', 'mimeType' => 'text/plain', 'buffer' => 'abc']);
        eq($page->locator('#file')->evaluate('el => el.files[0].name + ":" + el.files[0].size'), 'a.txt:3');
        $fc = $page->expectFileChooser(fn() => $page->locator('#file')->click());
        $fc->setFiles(['name' => 'b.txt', 'buffer' => 'hello']);
        eq($page->locator('#file')->evaluate('el => el.files[0].name'), 'b.txt');
    });

    check('screenshot / element screenshot / pdf', function () use ($page) {
        $png = $page->screenshot();
        eq(substr($png, 1, 3), 'PNG');
        $full = $page->screenshot(['fullPage' => true, 'type' => 'jpeg', 'quality' => 50]);
        eq(substr($full, 0, 2), "\xFF\xD8");
        $el = $page->locator('h1')->screenshot();
        $info = getimagesizefromstring($el);
        ok($info !== false && $info[0] > 50 && $info[1] < 100, 'element size ' . json_encode($info));
        eq(substr($page->pdf(['format' => 'A4']), 0, 4), '%PDF');
    });

    check('setContent / content / addScriptTag / addInitScript', function () use ($page) {
        $page->addInitScript('window.__init = "yes"');
        $page->setContent('<div id=x>set</div>');
        eq($page->locator('#x')->textContent(), 'set');
        ok(str_contains($page->content(), '<div id="x">set</div>'));
        $page->addScriptTag(['content' => 'window.tag = 5']);
        eq($page->evaluate('window.tag'), 5);
        $page->goto('/second.html');
        eq($page->evaluate('window.__init'), 'yes');
    });

    check('mouse / hover / dblclick / drag', function () use ($page) {
        $page->setContent('<div id=a style="width:100px;height:100px;background:red" draggable=true></div>'
            . '<div id=b style="width:100px;height:100px;background:blue"></div>'
            . '<script>let log=[]; a.onmouseenter=()=>log.push("enter"); a.ondblclick=()=>log.push("dbl");'
            . 'b.addEventListener("dragover", e => e.preventDefault()); b.ondrop=()=>log.push("drop");</script>');
        $page->locator('#a')->hover();
        $page->locator('#a')->dblclick();
        $page->locator('#a')->dragTo($page->locator('#b'));
        $log = $page->evaluate('log');
        ok(in_array('enter', $log, true) && in_array('dbl', $log, true), json_encode($log));
        $page->mouse->wheel(0, 100);
    });

    check('cookies + storageState', function () use ($page, $ctx) {
        $page->goto('/cookie.php');
        $c = $ctx->cookies(BASE);
        eq($c[0]['name'] ?? null, 'session');
        $ctx->addCookies([['name' => 'k', 'value' => 'v', 'url' => BASE]]);
        eq(count($ctx->cookies()), 2);
        $page->evaluate('() => localStorage.setItem("ls", "1")');
        $state = $ctx->storageState();
        eq(count($state['cookies']), 2);
        eq($state['origins'][0]['localStorage'][0]['name'] ?? null, 'ls');
        $ctx->clearCookies(['name' => 'k']);
        eq(count($ctx->cookies()), 1);
        $ctx->clearCookies();
        eq($ctx->cookies(), []);
    });

    check('context options: UA, locale, headers, viewport, media, tz', function () use ($browser) {
        $c = $browser->newContext([
            'baseURL' => BASE, 'userAgent' => 'pwlite-test', 'locale' => 'vi-VN', 'timezoneId' => 'Asia/Ho_Chi_Minh',
            'extraHTTPHeaders' => ['X-Test' => 'hdr'], 'viewport' => ['width' => 800, 'height' => 600], 'colorScheme' => 'dark',
        ]);
        $p = $c->newPage();
        $p->goto('/echo.php');
        $j = json_decode($p->locator('body')->textContent(), true);
        eq($j['ua'], 'pwlite-test');
        eq($j['x'], 'hdr');
        ok(str_starts_with($j['lang'], 'vi-VN'), $j['lang']);
        eq($p->evaluate('innerWidth'), 800);
        eq($p->evaluate('matchMedia("(prefers-color-scheme: dark)").matches'), true);
        ok(in_array($p->evaluate('Intl.DateTimeFormat().resolvedOptions().timeZone'), ['Asia/Ho_Chi_Minh', 'Asia/Saigon'], true));
        eq($p->evaluate('navigator.language'), 'vi-VN');
        $p->setViewportSize(['width' => 500, 'height' => 400]);
        eq($p->evaluate('innerWidth'), 500);
        $p->emulateMedia(['media' => 'print']);
        eq($p->evaluate('matchMedia("print").matches'), true);
        $c->close();
    });

    check('device emulation + touch tap', function () use ($browser) {
        $p = $browser->newPage(Playwright::devices('iPhone 13') + ['baseURL' => BASE]);
        $p->setContent('<meta name="viewport" content="width=device-width"><button ontouchstart="this.textContent=\'touched\'">t</button>');
        $p->locator('button')->tap();
        eq($p->locator('button')->textContent(), 'touched');
        eq($p->evaluate('innerWidth'), 390);
        $p->close();
    });

    check('httpCredentials', function () use ($browser) {
        $c = $browser->newContext(['httpCredentials' => ['username' => 'u', 'password' => 'p']]);
        $p = $c->newPage();
        $p->goto(BASE . '/auth.php');
        eq($p->locator('body')->textContent(), 'authed');
        $c->close();
    });

    check('offline + geolocation + permissions', function () use ($browser) {
        $c = $browser->newContext(['baseURL' => BASE, 'geolocation' => ['latitude' => 10.8, 'longitude' => 106.6], 'permissions' => ['geolocation']]);
        $p = $c->newPage();
        $p->goto('/second.html');
        $pos = $p->evaluate('() => new Promise(r => navigator.geolocation.getCurrentPosition(p => r([p.coords.latitude, p.coords.longitude])))');
        eq($pos, [10.8, 106.6]);
        $c->setOffline(true);
        eq($p->evaluate('async () => { try { await fetch("/echo.php"); return "online"; } catch (e) { return "offline"; } }'), 'offline');
        $c->close();
    });

    check('context isolation + events', function () use ($browser) {
        $a = $browser->newContext(['baseURL' => BASE]);
        $b = $browser->newContext(['baseURL' => BASE]);
        $pa = $a->newPage();
        $pb = $b->newPage();
        $pa->goto('/cookie.php');
        $pb->goto('/second.html');
        eq(count($a->cookies()), 1);
        eq(count($b->cookies()), 0);
        $newPage = $a->expectPage(fn() => $pa->evaluate('() => window.open("/second.html")'));
        $newPage->waitForLoadState();
        eq($newPage->title(), 'Second');
        eq(count($a->pages()), 2);
        $a->close();
        $b->close();
        ok($pa->isClosed());
    });

    check('page.close + isClosed + errors after close', function () use ($ctx) {
        $p = $ctx->newPage();
        $p->close();
        ok($p->isClosed());
        try {
            $p->goto('/index.html');
            throw new RuntimeException('no error');
        } catch (NativePlaywright\Exception $e) {
            ok(true);
        }
    });

    check('goto error', function () use ($page) {
        try {
            $page->goto('http://127.0.0.1:65530/');
            throw new RuntimeException('no error');
        } catch (NativePlaywright\Exception $e) {
            ok(str_contains($e->getMessage(), 'ERR_CONNECTION_REFUSED'), $e->getMessage());
        }
    });

    check('CDP session', function () use ($page) {
        $s = $page->newCDPSession();
        $r = $s->send('Runtime.evaluate', ['expression' => '6*7', 'returnByValue' => true]);
        eq($r['result']['value'], 42);
    });

    if (extension_loaded('swoole') && Swoole\Coroutine::getCid() > 0) {
        check('swoole: 10 pages concurrently', function () use ($browser) {
            $wg = new Swoole\Coroutine\WaitGroup();
            $titles = [];
            $t0 = microtime(true);
            for ($i = 0; $i < 10; $i++) {
                $wg->add();
                go(function () use ($browser, $i, $wg, &$titles) {
                    try {
                        $p = $browser->newPage(['baseURL' => BASE]);
                        $p->setContent("<title>p$i</title><button onclick=\"setTimeout(()=>document.title='done$i',300)\">b</button>");
                        $p->locator('button')->click();
                        $p->waitForFunction("() => document.title === 'done$i'");
                        $titles[$i] = $p->title();
                        $p->close();
                    } finally {
                        $wg->done();
                    }
                });
            }
            $wg->wait(30);
            ksort($titles);
            eq(count($titles), 10);
            eq($titles[9], 'done9');
            $elapsed = microtime(true) - $t0;
            ok($elapsed < 3.0, "too slow for concurrent: {$elapsed}s");
        });
    }

    $browser->close();
    ok(!$browser->isConnected());
}

$swoole = ($argv[1] ?? '') === 'swoole';
echo $swoole ? "== Swoole coroutine mode ==\n" : "== Blocking mode ==\n";
$t0 = microtime(true);
if ($swoole) {
    Swoole\Coroutine\run(function () {
        suite();
    });
} else {
    suite();
}
printf("\n%d passed, %d failed in %.2fs\n", $pass, $fail, microtime(true) - $t0);
if ($failures) {
    echo 'Failed: ', implode(', ', $failures), "\n";
}
exit($fail ? 1 : 0);
