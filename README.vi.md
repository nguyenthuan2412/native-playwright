# Native Playwright

[English](README.md) | **Tiếng Việt**

**Tự động hoá trình duyệt cho PHP với API của Playwright: không cần Node.js, chạy được trong Swoole coroutine.**

Native Playwright là một PHP extension native. Mã nguồn viết bằng PHP và được [TypePHP](https://github.com/swoole/typephp) compile thành C++17. Extension điều khiển Chromium trực tiếp qua Chrome DevTools Protocol (CDP), không cần process trung gian nào.

- **API quen thuộc**: `Locator`, `getByRole`, auto-wait, `route`, `expectPopup`… giống Playwright, nên dễ chuyển code sang.
- **Không Node.js**: không có process driver, chỉ còn PHP và Chromium.
- **Nhẹ**: driver chiếm khoảng 19 MB, so với ~145 MB của Playwright Node. Tổng RAM ít hơn khoảng 34%.
- **Hỗ trợ Swoole**: tự nhận biết coroutine, cho phép nhiều page chạy song song trên một worker mà không chặn event loop.
- **Yêu cầu**: PHP 8.4 / 8.5 (NTS), Linux hoặc macOS.

---

## Mục lục

1. [Cài đặt](#1-cài-đặt)
2. [Bắt đầu nhanh](#2-bắt-đầu-nhanh)
3. [Khái niệm cơ bản](#3-khái-niệm-cơ-bản)
4. [Hướng dẫn sử dụng](#4-hướng-dẫn-sử-dụng)
   - [Khởi chạy trình duyệt](#41-khởi-chạy-trình-duyệt)
   - [Context và tuỳ chọn giả lập](#42-context-và-tuỳ-chọn-giả-lập)
   - [Điều hướng](#43-điều-hướng)
   - [Tìm phần tử với Locator](#44-tìm-phần-tử-với-locator)
   - [Thao tác](#45-thao-tác)
   - [Đọc dữ liệu và chờ](#46-đọc-dữ-liệu-và-chờ)
   - [Chạy JavaScript](#47-chạy-javascript)
   - [Bàn phím, chuột, cảm ứng](#48-bàn-phím-chuột-cảm-ứng)
   - [Iframe](#49-iframe)
   - [Network: theo dõi và chặn request](#410-network-theo-dõi-và-chặn-request)
   - [Sự kiện](#411-sự-kiện)
   - [Dialog, popup, download, upload](#412-dialog-popup-download-upload)
   - [Ảnh chụp màn hình và PDF](#413-ảnh-chụp-màn-hình-và-pdf)
   - [Cookie và storage state](#414-cookie-và-storage-state)
   - [Gọi PHP từ trang web](#415-gọi-php-từ-trang-web)
   - [Timeout và xử lý lỗi](#416-timeout-và-xử-lý-lỗi)
   - [Gọi CDP trực tiếp](#417-gọi-cdp-trực-tiếp)
5. [Dùng với Swoole](#5-dùng-với-swoole)
6. [Chuyển code từ Playwright (JS)](#6-chuyển-code-từ-playwright-js)
7. [Hiệu năng](#7-hiệu-năng)
8. [Kiến trúc](#8-kiến-trúc)
9. [Giới hạn hiện tại](#9-giới-hạn-hiện-tại)
10. [Xử lý sự cố](#10-xử-lý-sự-cố)
11. [Phát triển](#11-phát-triển)

---

## 1. Cài đặt

### Yêu cầu

| Thành phần | Phiên bản |
|---|---|
| PHP | 8.4 hoặc 8.5, bản NTS |
| Chromium | `chrome-headless-shell` (khuyến nghị) hoặc Chromium / Google Chrome |
| Swoole | 6.x (không bắt buộc, chỉ cần khi dùng coroutine) |
| Công cụ build | Compiler C/C++ (C++17), `phpize`, `libgmp-dev`, `libmpfr-dev` |

### Cài bằng PIE (khuyến nghị)

[PIE](https://github.com/php/pie) là công cụ cài extension chính thức của PHP. Nó build extension đúng với phiên bản PHP đang dùng và tự bật trong `php.ini`:

```bash
# thư viện cần để build (Debian/Ubuntu; RHEL dùng gmp-devel mpfr-devel, macOS dùng "brew install gmp mpfr")
sudo apt-get install -y build-essential libgmp-dev libmpfr-dev

pie install nguyenthuan2412/native-playwright
```

### Cài bằng PECL

Mỗi [GitHub release](https://github.com/nguyenthuan2412/native-playwright/releases) đều kèm một gói PECL:

```bash
sudo apt-get install -y build-essential libgmp-dev libmpfr-dev
pecl install https://github.com/nguyenthuan2412/native-playwright/releases/download/v0.1.0/native_playwright-0.1.0.tgz
echo "extension=native_playwright" > "$(php-config --ini-dir)/native_playwright.ini"
```

### Build từ source

Thư mục `ext/` là một cây source phpize chuẩn. Build từ đây không cần TypePHP:

```bash
cd ext
phpize
./configure            # thêm --with-gmp-dir=PREFIX nếu GMP/MPFR nằm ở prefix khác chuẩn
make -j"$(nproc)"
sudo make install
```

Kiểm tra:

```bash
php --ri native_playwright
```

Extension đã nhúng tĩnh runtime PHPX. Khi chạy chỉ cần `libgmp` và `libmpfr` của hệ thống.

### Cài Chromium

Native Playwright tìm trình duyệt theo thứ tự sau:

1. Biến môi trường `NATIVE_PLAYWRIGHT_CHROME`
2. Tuỳ chọn `executablePath` khi launch
3. Các đường dẫn chuẩn, ưu tiên `chrome-headless-shell`

```bash
# Debian / Ubuntu
apt-get install chromium-headless-shell
export NATIVE_PLAYWRIGHT_CHROME=/usr/lib/chromium/chromium-headless-shell
```

Nên dùng `chrome-headless-shell`. Chromium bản đầy đủ chạy headless vẫn dựng thêm phần UI cho mỗi page, nên tốn RAM gấp khoảng 3 lần (xem [Hiệu năng](#7-hiệu-năng)).

---

## 2. Bắt đầu nhanh

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

## 3. Khái niệm cơ bản

| Đối tượng | Vai trò |
|---|---|
| `Playwright` | Điểm vào: `Playwright::chromium()` trả về một `BrowserType` |
| `Browser` | Một process Chromium |
| `BrowserContext` | Một phiên cách ly (cookie, storage, cache riêng). Tạo rất rẻ vì dùng chung process trình duyệt |
| `Page` | Một tab |
| `Frame` | Main frame hoặc iframe trong page |
| `Locator` | Cách tìm phần tử. Lazy, strict, tự chờ phần tử sẵn sàng |

Quy ước chung:

- **Tuỳ chọn** truyền dưới dạng mảng kết hợp, tên khoá giống Playwright: `['timeout' => 5000, 'waitUntil' => 'networkidle']`.
- **Thời gian** tính bằng mili giây. `timeout => 0` nghĩa là không giới hạn.
- **Pattern URL** có ba dạng: glob (`'**/api/*'`), regex PHP viết thành chuỗi (`'/\.png$/'`), hoặc `Closure(string $url): bool`.

---

## 4. Hướng dẫn sử dụng

### 4.1 Khởi chạy trình duyệt

```php
$browser = Playwright::chromium()->launch([
    'executablePath' => '/usr/lib/chromium/chromium-headless-shell',
    'args'           => ['--lang=vi-VN'],   // thêm cờ cho Chromium
    'timeout'        => 30000,
    'slowMo'         => 0,                  // ms nghỉ sau mỗi thao tác (để debug)
    'downloadsPath'  => '/tmp/downloads',
    'proxy'          => ['server' => 'http://proxy:3128', 'bypass' => 'localhost'],
]);

echo $browser->version();          // "156.0.8078.79"
$browser->close();
```

| Tuỳ chọn | Mặc định | Mô tả |
|---|---|---|
| `executablePath` | tự tìm | Đường dẫn tới Chromium |
| `args` | `[]` | Cờ bổ sung cho Chromium |
| `ignoreDefaultArgs` | `false` | `true` để bỏ toàn bộ cờ mặc định, hoặc mảng các cờ cần bỏ |
| `headless` | `true` | `false` chỉ có tác dụng với Chromium bản đầy đủ |
| `chromiumSandbox` | `false` | Bật sandbox của Chromium |
| `siteIsolation` | `false` | Bật site isolation (xem [Giới hạn](#9-giới-hạn-hiện-tại)) |
| `swoole` | tự nhận biết | Ép dùng (hoặc không dùng) transport Swoole |

Profile lưu lâu dài (giữ đăng nhập giữa các lần chạy):

```php
$context = Playwright::chromium()->launchPersistentContext('/data/profile', ['locale' => 'vi-VN']);
$page = $context->newPage();
// ...
$context->close();   // đóng cả trình duyệt
```

### 4.2 Context và tuỳ chọn giả lập

```php
$context = $browser->newContext([
    'baseURL'          => 'https://shop.example.com',
    'viewport'         => ['width' => 1366, 'height' => 768],   // null = không ép kích thước
    'deviceScaleFactor'=> 2,
    'userAgent'        => 'MyBot/1.0',
    'locale'           => 'vi-VN',
    'timezoneId'       => 'Asia/Ho_Chi_Minh',
    'geolocation'      => ['latitude' => 10.77, 'longitude' => 106.70],
    'permissions'      => ['geolocation', 'notifications'],
    'colorScheme'      => 'dark',
    'extraHTTPHeaders' => ['X-Request-Source' => 'Native Playwright'],
    'httpCredentials'  => ['username' => 'admin', 'password' => 'secret'],
    'ignoreHTTPSErrors'=> true,
    'javaScriptEnabled'=> true,
    'offline'          => false,
    'storageState'     => 'auth.json',   // nạp cookie + localStorage đã lưu
]);

$page = $context->newPage();
$page->goto('/cart');   // tương đương https://shop.example.com/cart
```

Giả lập thiết bị:

```php
$page = $browser->newPage(Playwright::devices('iPhone 13'));
```

Các thiết bị có sẵn: `iPhone 15`, `iPhone 13`, `iPhone SE`, `iPad Pro 11`, `Pixel 7`, `Galaxy S9+`, `Desktop Chrome`, `Desktop Chrome HiDPI`.

`$browser->newPage($options)` tạo một context riêng cho page đó. Đóng page thì context cũng đóng theo.

Thay đổi khi context đang chạy:

```php
$context->setGeolocation(['latitude' => 21.03, 'longitude' => 105.85]);
$context->setOffline(true);
$context->setExtraHTTPHeaders(['Authorization' => 'Bearer ...']);
$context->grantPermissions(['clipboard-read'], ['origin' => 'https://app.example.com']);
$context->clearPermissions();

$page->setViewportSize(['width' => 800, 'height' => 600]);
$page->emulateMedia(['media' => 'print', 'colorScheme' => 'light']);
```

### 4.3 Điều hướng

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

// Chờ điều hướng do một thao tác gây ra
$page->expectNavigation(fn() => $page->getByText('Đăng nhập')->click());

$page->url();
$page->title();
$page->content();                 // HTML hiện tại
$page->setContent('<h1>Hello</h1>');
```

`goto()` ném `NativePlaywright\Exception` nếu điều hướng thất bại (ví dụ `net::ERR_NAME_NOT_RESOLVED`). Nó trả về `null` khi chỉ điều hướng trong cùng tài liệu (đổi hash).

### 4.4 Tìm phần tử với Locator

Nên ưu tiên các locator bám theo cách người dùng nhìn thấy trang:

```php
$page->getByRole('button', ['name' => 'Gửi']);
$page->getByRole('heading', ['level' => 1]);
$page->getByRole('checkbox', ['checked' => true]);
$page->getByText('Xin chào');                    // chứa chuỗi, không phân biệt hoa thường
$page->getByText('Xin chào', ['exact' => true]); // khớp chính xác
$page->getByText('/^Tổng: \d+/');               // regex
$page->getByLabel('Email');
$page->getByPlaceholder('Tìm kiếm');
$page->getByAltText('Logo');
$page->getByTitle('Đóng');
$page->getByTestId('submit-btn');                // data-testid; đổi tên bằng Playwright::setTestIdAttribute()
```

Selector CSS / XPath và cú pháp mở rộng của Playwright:

```php
$page->locator('#cart .item');                  // CSS, xuyên được shadow DOM
$page->locator('xpath=//table/tr[2]');
$page->locator('//button');                     // tự nhận là XPath
$page->locator('text=Đăng xuất');
$page->locator('li:has-text("Táo")');
$page->locator('button:visible');
$page->locator('.list >> li >> nth=2');         // nối chuỗi
```

Lọc, nối và chọn theo vị trí:

```php
$rows = $page->locator('tr');

$rows->filter(['hasText' => 'Đã thanh toán']);
$rows->filter(['hasNotText' => 'Huỷ']);
$rows->filter(['has' => $page->getByRole('button', ['name' => 'Sửa'])]);
$rows->filter(['visible' => true]);

$rows->first();
$rows->last();
$rows->nth(3);
$rows->count();
foreach ($rows->all() as $row) { /* ... */ }

$page->locator('.card')->getByRole('link');     // tìm bên trong
$page->getByRole('button')->and($page->getByTitle('Lưu'));
$page->getByText('Đăng nhập')->or($page->getByText('Login'));
```

**Strict mode:** mọi thao tác trên một locator khớp nhiều hơn một phần tử sẽ báo lỗi `strict mode violation`, kèm danh sách các phần tử khớp. Dùng `first()`, `nth()` hoặc `filter()` để thu hẹp lại.

### 4.5 Thao tác

Trước mỗi thao tác, Native Playwright tự chờ phần tử **xuất hiện, hiển thị, đứng yên (không còn animation), được bật, không bị phần tử khác che**. Phần tử nằm ngoài màn hình sẽ được tự cuộn tới. Không cần tự viết `sleep`.

```php
$page->getByRole('button', ['name' => 'Mua']) ->click();
$page->getByText('Ảnh')                      ->dblclick();
$page->getByLabel('Họ tên')                  ->fill('Nguyễn Văn A');
$page->getByLabel('Họ tên')                  ->clear();
$page->getByLabel('Mã OTP')                  ->pressSequentially('123456', ['delay' => 50]);
$page->getByLabel('Tìm kiếm')                ->press('Enter');
$page->getByLabel('Đồng ý')                  ->check();
$page->getByLabel('Nhận tin')                ->setChecked(false);
$page->getByLabel('Tỉnh')                    ->selectOption('Hà Nội');          // theo value hoặc label
$page->locator('select[multiple]')           ->selectOption(['a', 'b']);
$page->locator('select')                     ->selectOption(['index' => 2]);
$page->locator('.menu')                      ->hover();
$page->locator('#item')                      ->dragTo($page->locator('#trash'));
$page->locator('input')                      ->focus();
$page->locator('.box')                       ->dispatchEvent('click');
$page->locator('button')                     ->tap();                            // cần hasTouch
```

Tuỳ chọn cho các thao tác chuột:

```php
$locator->click([
    'button'     => 'right',              // left | right | middle
    'clickCount' => 2,
    'delay'      => 100,                   // ms giữa nhấn và thả
    'position'   => ['x' => 5, 'y' => 5],  // so với góc trên trái của phần tử
    'modifiers'  => ['Shift', 'ControlOrMeta'],
    'force'      => true,                  // bỏ qua kiểm tra actionability
    'trial'      => true,                  // chỉ kiểm tra, không click thật
    'timeout'    => 5000,
]);
```

Page cũng có các hàm tắt nhận selector, tương tự Playwright: `$page->click('#ok')`, `$page->fill('#q', 'x')`, `$page->check(...)`…

### 4.6 Đọc dữ liệu và chờ

```php
$el = $page->locator('#total');

$el->textContent();       // ?string
$el->innerText();
$el->innerHTML();
$el->getAttribute('href');
$el->inputValue();        // input / textarea / select
$el->boundingBox();       // ['x','y','width','height'] hoặc null

$el->isVisible();         // không chờ
$el->isHidden();
$el->isEnabled();
$el->isChecked();
$el->isEditable();

$page->locator('li')->allTextContents();   // string[]
$page->locator('li')->allInnerTexts();

$page->locator('main')->ariaSnapshot();    // cây accessibility dạng YAML
```

Chờ một trạng thái cụ thể:

```php
$page->locator('.spinner')->waitFor(['state' => 'hidden']);    // attached | detached | visible | hidden
$page->locator('.result')->waitFor(['timeout' => 10000]);
$page->waitForSelector('#toast', ['state' => 'visible']);
$page->waitForFunction('() => window.appReady === true');
$page->waitForTimeout(500);     // chỉ nên dùng khi debug
```

### 4.7 Chạy JavaScript

```php
$page->evaluate('document.title');                                    // biểu thức
$page->evaluate('(a) => a.x + a.y', ['x' => 1, 'y' => 2]);           // hàm kèm tham số
$page->evaluate('async () => (await fetch("/api/me")).json()');      // Promise được tự await

$page->locator('#price')->evaluate('el => el.dataset.value');
$page->locator('li')->evaluateAll('(els, sep) => els.map(e => e.textContent).join(sep)', ', ');

$page->addInitScript('Object.defineProperty(navigator, "webdriver", { get: () => false })');
$page->addScriptTag(['url' => 'https://cdn.example.com/lib.js']);
$page->addStyleTag(['content' => '* { animation: none !important }']);
```

Giá trị trả về được chuyển thành kiểu PHP: object thành mảng kết hợp, `Date` thành chuỗi ISO, `NaN`/`Infinity` thành float. Những giá trị không serialize được (DOM node, `window`, hàm) trở thành `null`.

### 4.8 Bàn phím, chuột, cảm ứng

```php
$page->keyboard->type('Xin chào', ['delay' => 30]);
$page->keyboard->press('ControlOrMeta+A');     // Control trên Linux/Windows, Meta trên macOS
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

### 4.9 Iframe

```php
$frame = $page->frameLocator('iframe#payment');
$frame->getByLabel('Số thẻ')->fill('4111 1111 1111 1111');
$frame->getByRole('button', ['name' => 'Thanh toán'])->click();

// Iframe lồng nhau
$page->frameLocator('#outer')->frameLocator('#inner')->locator('button')->click();

// Truy cập trực tiếp đối tượng Frame
$page->frame('payment');                         // theo thuộc tính name
$page->frame(['url' => '**/checkout/*']);
$page->frames();
$page->mainFrame()->childFrames();
```

Iframe cùng origin và khác origin đều được hỗ trợ ở cấu hình mặc định.

### 4.10 Network: theo dõi và chặn request

Theo dõi:

```php
$page->on('request',  fn(NativePlaywright\Request $r)  => print("> {$r->method()} {$r->url()}\n"));
$page->on('response', fn(NativePlaywright\Response $r) => print("< {$r->status()} {$r->url()}\n"));
$page->on('requestfailed', fn($r) => print("x {$r->url()} {$r->failure()['errorText']}\n"));

$response = $page->expectResponse('**/api/orders*', fn() => $page->getByText('Tải đơn')->click());
$data = $response->json();
$response->request()->postDataJSON();
```

Chặn và sửa request (route):

```php
use NativePlaywright\Route;
use NativePlaywright\Request;

// Trả về dữ liệu giả
$page->route('**/api/user', fn(Route $route) => $route->fulfill([
    'status' => 200,
    'json'   => ['id' => 1, 'name' => 'Test'],
]));

// Chặn tài nguyên nặng
$page->route('/\.(png|jpe?g|gif|webp|woff2?)$/', fn(Route $route) => $route->abort());

// Sửa request trước khi gửi
$page->route('**/api/**', fn(Route $route, Request $req) => $route->continue([
    'headers' => array_merge($req->headers(), ['authorization' => 'Bearer xyz']),
]));

// Nhường cho handler đăng ký trước đó
$page->route('**/*', fn(Route $route) => $route->fallback());

// Chỉ áp dụng N lần
$page->route('**/flaky', fn(Route $r) => $r->abort('timedout'), ['times' => 1]);

// Áp dụng cho mọi page trong context
$context->route('**/analytics/**', fn(Route $r) => $r->abort());

$page->unroute('**/api/user');
$page->unrouteAll();
```

Handler đăng ký sau được ưu tiên. Handler của page chạy trước handler của context. Handler không xử lý request thì request đi tiếp ra mạng.

### 4.11 Sự kiện

```php
$page->on('console',   fn(NativePlaywright\ConsoleMessage $m) => print("[{$m->type()}] {$m->text()}\n"));
$page->on('pageerror', fn(NativePlaywright\JSError $e) => print("JS error: {$e->message()}\n"));
$page->on('close',     fn() => print("page closed\n"));
$page->once('load',    fn() => print("loaded\n"));
$page->off('console');
```

Chờ một sự kiện do một thao tác gây ra. Listener được đăng ký **trước** khi thao tác chạy, nên không bao giờ bị lỡ sự kiện:

```php
$msg = $page->expectConsoleMessage(fn() => $page->getByText('Log')->click());
$req = $page->expectRequest('**/track', fn() => $page->getByText('Mua')->click());
$err = $page->expectEvent('pageerror', fn() => $page->getByText('Lỗi')->click());

// Chờ sự kiện kèm điều kiện
$page->waitForEvent('console', fn($m) => str_contains($m->text(), 'ready'), 10000);
```

| Đối tượng | Sự kiện |
|---|---|
| Page | `console`, `pageerror`, `dialog`, `popup`, `download`, `filechooser`, `request`, `response`, `requestfinished`, `requestfailed`, `load`, `domcontentloaded`, `frameattached`, `framenavigated`, `framedetached`, `close`, `crash` |
| BrowserContext | `page`, `close`, `request`, `response`, `requestfinished`, `requestfailed`, `console`, `dialog`, `weberror` |
| Browser | `disconnected` |

### 4.12 Dialog, popup, download, upload

**Dialog** (`alert` / `confirm` / `prompt` / `beforeunload`): nếu không có handler, dialog tự bị dismiss, giống Playwright.

```php
$page->on('dialog', fn(NativePlaywright\Dialog $d) => $d->accept('giá trị cho prompt'));
$dialog = $page->expectDialog(fn() => $page->getByText('Xoá')->click());   // tự xử lý dialog
```

**Popup và tab mới:**

```php
$popup = $page->expectPopup(fn() => $page->getByText('Mở tab mới')->click());
$popup->waitForLoadState();
echo $popup->title();

$newPage = $context->expectPage(fn() => $page->evaluate('() => window.open("/help")'));
```

**Download:**

```php
$download = $page->expectDownload(fn() => $page->getByText('Xuất CSV')->click());
$download->suggestedFilename();      // "report.csv"
$download->saveAs('/data/report.csv');
$download->path();                   // file tạm, chờ tải xong
```

**Upload:**

```php
$page->getByLabel('Ảnh đại diện')->setInputFiles('/path/avatar.png');
$page->locator('input[type=file]')->setInputFiles(['/a.pdf', '/b.pdf']);
$page->locator('input[type=file]')->setInputFiles([
    'name' => 'data.csv', 'mimeType' => 'text/csv', 'buffer' => "a,b\n1,2",
]);

// Qua hộp thoại chọn file
$chooser = $page->expectFileChooser(fn() => $page->getByText('Tải lên')->click());
$chooser->setFiles('/path/file.txt');
```

### 4.13 Ảnh chụp màn hình và PDF

```php
$png = $page->screenshot();                                   // trả về bytes
$page->screenshot(['path' => 'full.png', 'fullPage' => true]);
$page->screenshot(['path' => 'shot.jpg', 'type' => 'jpeg', 'quality' => 80]);
$page->screenshot(['clip' => ['x' => 0, 'y' => 0, 'width' => 400, 'height' => 300]]);
$page->screenshot(['omitBackground' => true]);                // nền trong suốt
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

### 4.14 Cookie và storage state

```php
$context->cookies();                                      // tất cả
$context->cookies('https://example.com');                 // theo URL
$context->addCookies([
    ['name' => 'session', 'value' => 'abc', 'url' => 'https://example.com'],
    ['name' => 'lang', 'value' => 'vi', 'domain' => '.example.com', 'path' => '/', 'httpOnly' => true],
]);
$context->clearCookies(['name' => 'session']);
$context->clearCookies();
```

Đăng nhập một lần, dùng lại cho các lần sau:

```php
// Lần 1: đăng nhập rồi lưu trạng thái
$page->goto('/login');
$page->getByLabel('Email')->fill('me@example.com');
$page->getByLabel('Mật khẩu')->fill('...');
$page->getByRole('button', ['name' => 'Đăng nhập'])->click();
$page->waitForURL('**/dashboard');
$context->storageState(['path' => 'auth.json']);

// Các lần sau
$context = $browser->newContext(['storageState' => 'auth.json']);
```

### 4.15 Gọi PHP từ trang web

```php
$page->exposeFunction('sha256', fn(string $s) => hash('sha256', $s));
$page->evaluate('async () => await window.sha256("hello")');

$context->exposeBinding('whoAmI', fn(array $source) => $source['page']->url());
```

Hàm được đăng ký trước khi trang chạy, và vẫn còn sau mỗi lần điều hướng.

### 4.16 Timeout và xử lý lỗi

```php
$context->setDefaultTimeout(10000);              // cho mọi thao tác trong context
$context->setDefaultNavigationTimeout(20000);
$page->setDefaultTimeout(5000);                  // ghi đè ở mức page
$locator->click(['timeout' => 2000]);            // ghi đè cho một lệnh
```

```php
use NativePlaywright\Exception;
use NativePlaywright\TimeoutError;

try {
    $page->getByText('Không tồn tại')->click(['timeout' => 1000]);
} catch (TimeoutError $e) {
    // "locator.click: Timeout 1000ms exceeded.
    //  Call log:
    //    - waiting for internal:text="Không tồn tại"i"
} catch (Exception $e) {
    // Lỗi điều hướng, strict mode violation, page đã đóng, ...
}
```

`TimeoutError` kế thừa `NativePlaywright\Exception`, và `NativePlaywright\Exception` kế thừa `\RuntimeException`.

### 4.17 Gọi CDP trực tiếp

Dùng khi cần tính năng của Chrome mà API chưa bao phủ:

```php
$cdp = $page->newCDPSession();
$cdp->send('Performance.enable');
$metrics = $cdp->send('Performance.getMetrics');
$cdp->on('Network.webSocketFrameReceived', fn(array $p) => print($p['response']['payloadData']));

$browserCdp = $browser->newBrowserCDPSession();
```

---

## 5. Dùng với Swoole

Native Playwright tự nhận biết khi `launch()` được gọi trong coroutine. Lúc đó transport dùng chính reactor của Swoole:

- Mỗi lệnh chỉ dừng coroutine đang gọi, **không chặn worker**.
- Nhiều coroutine dùng chung một trình duyệt, chạy song song trên các page/context khác nhau.
- Handler sự kiện (`route`, `dialog`, `console`…) chạy trong coroutine riêng.

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
                $page = $browser->newPage();          // context riêng cho mỗi tác vụ
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

### Trong Swoole HTTP Server

Xem ví dụ đầy đủ ở [examples/swoole-server.php](examples/swoole-server.php).

```php
$server->on('workerStart', function () use (&$browser) {
    $browser = Playwright::chromium()->launch();      // một trình duyệt cho mỗi worker
});

$server->on('request', function ($req, $res) use (&$browser) {
    $context = $browser->newContext();                // cách ly cho mỗi request
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

**Nguyên tắc:**

1. **Launch trong `workerStart`**, không launch trước khi fork. Mỗi process phải có trình duyệt riêng.
2. **Mỗi request dùng một context riêng**, rồi đóng nó trong `finally`. Context rẻ hơn rất nhiều so với một trình duyệt mới.
3. Không chia sẻ `Browser` giữa các process.
4. Muốn ép chế độ transport, dùng `launch(['swoole' => true|false])`.

---

## 6. Chuyển code từ Playwright (JS)

| Playwright (JS) | Native Playwright (PHP) |
|---|---|
| `const browser = await chromium.launch()` | `$browser = Playwright::chromium()->launch()` |
| `await page.goto(url, { waitUntil: 'networkidle' })` | `$page->goto($url, ['waitUntil' => 'networkidle'])` |
| `page.getByRole('button', { name: 'OK' })` | `$page->getByRole('button', ['name' => 'OK'])` |
| `await locator.click()` | `$locator->click()` |
| `page.keyboard.press('Enter')` | `$page->keyboard->press('Enter')` |
| `page.on('console', m => ...)` | `$page->on('console', fn($m) => ...)` |
| `const [popup] = await Promise.all([page.waitForEvent('popup'), click()])` | `$popup = $page->expectPopup(fn() => ...)` |
| `const resp = await page.waitForResponse('**/api')` (kèm thao tác) | `$resp = $page->expectResponse('**/api', fn() => ...)` |
| `await route.fulfill({ json })` | `$route->fulfill(['json' => ...])` |
| `await page.$eval(sel, fn)` | `$page->evalOnSelector($sel, $fn)` |
| `await page.$$eval(sel, fn)` | `$page->evalOnSelectorAll($sel, $fn)` |
| `devices['iPhone 13']` | `Playwright::devices('iPhone 13')` |
| Regex `/abc/i` | Chuỗi `'/abc/i'` |

Mọi lời gọi đều đồng bộ, không có `await`. Trong Swoole, việc "chờ" chỉ dừng coroutine hiện tại.

---

## 7. Hiệu năng

Đo bằng `make bench` và `make memory` trong Docker (linux/arm64, Chromium 156, `chrome-headless-shell`). Hai bên dùng cùng một binary Chromium.

| Chỉ số | Native Playwright | Playwright (Node) |
|---|---|---|
| Process driver | không có | 1 process Node |
| PSS của driver | **~19 MB** (toàn bộ process PHP) | ~145 MB |
| PSS của Chromium, 5 page / 5 context | ~261 MB | ~280 MB |
| **Tổng RAM** | **~280 MB** | ~425 MB |
| `evaluate('1+1')` mỗi lệnh | **~0.6 ms** | ~1.6–2.2 ms |
| `goto` (trang nhỏ) | 11–17 ms | 12–20 ms |
| Gửi request 1 MB | ~18–23 ms | ~31–52 ms |

Số đo trong Docker trên macOS có dao động; nên đọc theo tương quan. Thời gian render và chạy JS vẫn do Chromium quyết định.

**Vì sao nhẹ hơn:**

- Không có process Node trung gian, dữ liệu chỉ serialize một lần.
- Dùng pipe thay cho WebSocket: không mở port, không handshake, không mask frame.
- Ưu tiên `chrome-headless-shell`. Chromium bản đầy đủ tốn ~856 MB cho 5 page, headless-shell chỉ ~257 MB.
- Cờ mặc định tiết kiệm RAM: `--in-process-gpu`, `--no-startup-window`, tắt site isolation, tắt các dịch vụ chạy nền.
- Khởi tạo page bằng pipeline (khoảng 10 lệnh, 1 round trip). Một cú click cũng chỉ 1 round trip.
- Event không ai nghe bị bỏ ngay, request đã xong được giải phóng.

---

## 8. Kiến trúc

```
┌───────────── process PHP ─────────────┐          ┌──────── Chromium ────────┐
│  code của bạn                         │          │                          │
│     │                                 │  pipe    │  browser ── renderer(s)  │
│  native_playwright.so                            │  fd 3/4  │                          │
│   ├─ API Playwright (PHP → TypePHP)   │◄────────►│  CDP                     │
│   ├─ Transport (blocking | Swoole)    │  JSON\0  │                          │
│   └─ pipe.cc (spawn, poll, cắt frame) │          │  isolated world:         │
└───────────────────────────────────────┘          │  selector engine         │
                                                   └──────────────────────────┘
```

| Thành phần | Vai trò |
|---|---|
| [src/native/pipe.cc](src/native/pipe.cc) | Khoảng 200 dòng C++: `posix_spawn` Chromium, pipe fd 3/4 non-blocking, `poll`, cắt frame theo `\0` |
| [src/NativePlaywright/Transport.php](src/NativePlaywright/Transport.php) | Ghép request với response, phát event. Reentrant: handler có thể gọi lệnh mới trong lúc một lệnh khác đang chờ |
| [src/NativePlaywright/BlockingTransport.php](src/NativePlaywright/BlockingTransport.php) | CLI/FPM: chờ bằng `poll()` ở tầng C++ |
| [src/NativePlaywright/SwooleTransport.php](src/NativePlaywright/SwooleTransport.php) | Một coroutine đọc park trên fd (`System::waitEvent`); coroutine gọi lệnh park trên `Channel` |
| [src/NativePlaywright/Injected.php](src/NativePlaywright/Injected.php) | Selector engine (CSS, text, XPath, ARIA role, label…) và kiểm tra actionability. Chạy trong isolated world nên trang web không nhìn thấy |
| Browser / Page / Locator… | API công khai |

- **Auto-attach** với `waitForDebuggerOnStart`: emulation, init script, route và binding được áp dụng trước khi trang chạy dòng JS đầu tiên.
- Toàn bộ phần PHP được TypePHP biên dịch sang C++. Mã nguồn PHP không cần đi kèm khi triển khai.

---

## 9. Giới hạn hiện tại

| Chưa hỗ trợ | Cách thay thế |
|---|---|
| Firefox, WebKit | Chỉ hỗ trợ Chromium |
| `tracing`, quay video, HAR (`recordHar`, `routeFromHAR`) | Dùng `on('request'/'response')` hoặc `CDPSession` |
| `APIRequestContext` (`request.get/post`) | Dùng HTTP client của PHP (Guzzle, Swoole HTTP client), có thể lấy cookie từ `$context->cookies()` |
| `route.fetch()` | `route->continue()` kết hợp `expectResponse()` |
| `ElementHandle` / `JSHandle` | Dùng `Locator` |
| `clock`, sự kiện worker / service worker / WebSocket | Dùng `CDPSession` |
| `connectOverCDP` (nối vào trình duyệt có sẵn) | Không hỗ trợ (Native Playwright tự launch qua pipe) |
| Assertion `expect()` của Playwright Test | Dùng `waitFor()` hoặc assertion của PHPUnit / Pest |
| Iframe khác origin khi `siteIsolation => true` | Giữ mặc định `siteIsolation => false` |

Lưu ý: mặc định Native Playwright **tắt site isolation** để tiết kiệm RAM. Nếu dùng Native Playwright để duyệt nội dung không tin cậy, hãy cân nhắc bật lại.

---

## 10. Xử lý sự cố

| Triệu chứng | Nguyên nhân và cách xử lý |
|---|---|
| `Chromium not found` | Đặt `NATIVE_PLAYWRIGHT_CHROME`, hoặc truyền `executablePath` khi launch |
| `configure: error: gmp.h not found` | Cài `libgmp-dev libmpfr-dev` (hoặc truyền `--with-gmp-dir=PREFIX`) |
| Nạp extension báo sai phiên bản API | Cài lại bằng PIE/PECL cho đúng binary PHP đang chạy (`pie install` dùng `php` trong PATH) |
| Chromium thoát ngay khi chạy bằng root | Giữ `chromiumSandbox => false` (mặc định) |
| `strict mode violation` | Locator khớp nhiều phần tử; thu hẹp bằng `first()`, `nth()` hoặc `filter()` |
| `Timeout ... exceeded` kèm `element is not visible / not enabled / intercepts pointer events` | Dòng cuối của call log cho biết điều kiện nào chưa đạt |
| RAM cao | Dùng `chrome-headless-shell`, đóng context sau khi xong, tránh mở trình duyệt mới cho mỗi tác vụ |
| Segmentation fault lúc thoát khi dùng Swoole | Đang nạp Xdebug. Swoole không tương thích với Xdebug (crash ngay cả khi không có Native Playwright); tắt hẳn Xdebug cho process Swoole (`xdebug.mode=off` là **không** đủ), hoặc chạy `php -n -d extension=swoole -d extension=native_playwright` |
| Treo trong Swoole server | Không launch trước khi fork; luôn launch trong `workerStart` |

---

## 11. Phát triển

```bash
make image PHP=8.5     # toolchain image (TypePHP + PHPX + Swoole + chrome-headless-shell)
make dist              # sinh lại ext/ (cây phpize cho PECL/PIE) từ src/
make dist-test         # build ext/ bằng phpize rồi chạy e2e
make build PHP=8.5     # build/php8.5/native_playwright.so
make test  PHP=8.5     # e2e: chế độ blocking + Swoole
make all               # build + test cho PHP 8.4 và 8.5
make bench             # so sánh latency với Playwright (Node)
make memory            # so sánh RAM với Playwright (Node)
make shell             # vào shell trong image
```

Cấu trúc thư mục:

```
src/native/        mã C++ cho syscall + stub khai báo cho TypePHP
ext/               cây source phpize được sinh ra (build-path cho PECL/PIE); chạy `make dist`, không sửa tay
tools/             make-dist.sh, template config.m4, script sinh package.xml
src/NativePlaywright/        toàn bộ API (PHP, được TypePHP compile)
tests/e2e.php      bộ test end-to-end (35 kịch bản, 2 origin local)
tests/www/         trang HTML/PHP dùng cho test
bench/             benchmark latency và RAM so với Playwright (Node)
examples/          ví dụ cơ bản và Swoole HTTP server
project.yml        cấu hình TypePHP (mode: ext)
Dockerfile         toolchain (ARG PHP_VERSION=8.4|8.5)
```

Quy ước khi đóng góp:

- Mọi logic mới viết bằng PHP trong `src/NativePlaywright/`. Chỉ thêm C++ khi cần syscall.
- Không dùng hằng số của extension khác trong code sẽ được compile; dùng giá trị số kèm comment.
- Tính năng mới cần có kịch bản trong `tests/e2e.php`, và phải pass ở cả hai chế độ (blocking và Swoole).
- Chạy `make dist` và commit `ext/` cùng với thay đổi trong `src/`.

### Phát hành

1. Tăng `version` trong `project.yml`, rồi chạy `make dist` (lệnh này cập nhật `ext/package.xml`).
2. Commit rồi gắn tag: `git tag v0.1.0 && git push --tags`.
3. Workflow release sẽ build `native_playwright-<version>.tgz` (gói PECL) và đính kèm vào GitHub release. Packagist nhận tag mới để phục vụ PIE.
