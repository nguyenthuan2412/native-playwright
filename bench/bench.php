<?php
// php -d extension=./native_playwright.so bench/bench.php [N]
use NativePlaywright\Playwright;

$n = (int)($argv[1] ?? 2000);
$t = microtime(true);
$b = Playwright::chromium()->launch();
$launch = microtime(true) - $t;
$p = $b->newPage();
$p->goto('data:text/html,<title>x</title>');

for ($i = 0; $i < 50; $i++) $p->evaluate('1+1');           // warmup
$t = microtime(true);
for ($i = 0; $i < $n; $i++) $p->evaluate('1+1');
$eval = (microtime(true) - $t) / $n * 1e6;

$t = microtime(true);
for ($i = 0; $i < 50; $i++) $p->goto("data:text/html,<p>$i</p>");
$goto = (microtime(true) - $t) / 50 * 1e3;

$big = str_repeat('x', 1_000_000);
$t = microtime(true);
for ($i = 0; $i < 20; $i++) $p->evaluate("'$big'.length");   // 1 MB request payload
$bigReq = (microtime(true) - $t) / 20 * 1e3;
$t = microtime(true);
for ($i = 0; $i < 20; $i++) $p->evaluate("'x'.repeat(1000000)"); // 1 MB response payload
$bigResp = (microtime(true) - $t) / 20 * 1e3;

$rss = (int)trim((string)shell_exec('ps -o rss= -p ' . getmypid())) / 1024;
printf("pwlite   launch %.0f ms | evaluate %.1f µs/op | goto %.2f ms | 1MB req %.2f ms | 1MB resp %.2f ms | driver RSS %.1f MB (PHP process)\n",
    $launch * 1e3, $eval, $goto, $bigReq, $bigResp, $rss);
$b->close();
