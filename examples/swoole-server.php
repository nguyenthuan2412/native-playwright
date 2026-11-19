<?php
// Screenshot service: one Chrome per worker, one isolated context per request.
//   php -d extension=native_playwright.so examples/swoole-server.php
//   curl 'http://127.0.0.1:9501/?url=https://example.com' -o shot.png
use NativePlaywright\Browser;
use NativePlaywright\Playwright;
use Swoole\Http\Server;

$server = new Server('0.0.0.0', 9501);
$server->set(['worker_num' => 2, 'enable_coroutine' => true, 'hook_flags' => SWOOLE_HOOK_ALL]);

/** @var Browser|null $browser */
$browser = null;

$server->on('workerStart', function () use (&$browser) {
    // launch inside the worker (never before fork), inside a coroutine -> SwooleTransport
    $browser = Playwright::chromium()->launch();
});

$server->on('request', function ($req, $res) use (&$browser) {
    $url = $req->get['url'] ?? 'https://example.com';
    $ctx = $browser->newContext(['viewport' => ['width' => 1280, 'height' => 800]]);
    try {
        $page = $ctx->newPage();
        $page->goto($url, ['waitUntil' => 'load', 'timeout' => 15000]);
        $res->header('Content-Type', 'image/png');
        $res->end($page->screenshot());
    } catch (Throwable $e) {
        $res->status(500);
        $res->end($e->getMessage());
    } finally {
        $ctx->close();
    }
});

$server->on('workerStop', function () use (&$browser) {
    $browser?->close();
});

$server->start();
