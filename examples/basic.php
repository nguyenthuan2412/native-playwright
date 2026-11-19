<?php
// php -d extension=native_playwright.so examples/basic.php
use NativePlaywright\Playwright;

$browser = Playwright::chromium()->launch();
$page = $browser->newPage();

$page->goto('https://example.com');
echo $page->title(), "\n";
echo $page->getByRole('heading')->textContent(), "\n";

$page->route('**/*.{png,jpg,jpeg,gif,webp}', fn($route) => $route->abort());   // block images
$page->on('console', fn($msg) => print("console: {$msg->text()}\n"));

$page->setContent('<label>Name <input id=n></label><button onclick="document.title=n.value">Save</button>');
$page->getByLabel('Name')->fill('pwlite');
$page->getByRole('button', ['name' => 'Save'])->click();
echo $page->title(), "\n";

$page->screenshot(['path' => '/tmp/example.png', 'fullPage' => true]);
$browser->close();
