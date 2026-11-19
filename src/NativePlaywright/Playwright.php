<?php
namespace NativePlaywright;

/** Entry point mirroring Playwright: Playwright::chromium()->launch(). */
final class Playwright
{
    public static function chromium(): BrowserType
    {
        return new BrowserType();
    }

    public static function setTestIdAttribute(string $name): void
    {
        Locator::$testIdAttribute = $name;
    }

    /** A few common device descriptors (pass to newContext / newPage). */
    public static function devices(string $name): array
    {
        $iphone = 'Mozilla/5.0 (iPhone; CPU iPhone OS 17_0 like Mac OS X) AppleWebKit/605.1.15 (KHTML, like Gecko) Version/17.0 Mobile/15E148 Safari/604.1';
        $android = 'Mozilla/5.0 (Linux; Android 14; Pixel 7) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/130.0.0.0 Mobile Safari/537.36';
        $d = match ($name) {
            'iPhone 15' => ['userAgent' => $iphone, 'viewport' => ['width' => 393, 'height' => 659], 'screen' => ['width' => 393, 'height' => 852], 'deviceScaleFactor' => 3, 'isMobile' => true, 'hasTouch' => true],
            'iPhone 13' => ['userAgent' => $iphone, 'viewport' => ['width' => 390, 'height' => 664], 'screen' => ['width' => 390, 'height' => 844], 'deviceScaleFactor' => 3, 'isMobile' => true, 'hasTouch' => true],
            'iPhone SE' => ['userAgent' => $iphone, 'viewport' => ['width' => 320, 'height' => 568], 'screen' => ['width' => 320, 'height' => 568], 'deviceScaleFactor' => 2, 'isMobile' => true, 'hasTouch' => true],
            'iPad Pro 11' => ['userAgent' => str_replace('iPhone', 'iPad', $iphone), 'viewport' => ['width' => 834, 'height' => 1194], 'deviceScaleFactor' => 2, 'isMobile' => true, 'hasTouch' => true],
            'Pixel 7' => ['userAgent' => $android, 'viewport' => ['width' => 412, 'height' => 839], 'screen' => ['width' => 412, 'height' => 915], 'deviceScaleFactor' => 2.625, 'isMobile' => true, 'hasTouch' => true],
            'Galaxy S9+' => ['userAgent' => $android, 'viewport' => ['width' => 320, 'height' => 658], 'deviceScaleFactor' => 4.5, 'isMobile' => true, 'hasTouch' => true],
            'Desktop Chrome' => ['viewport' => ['width' => 1280, 'height' => 720], 'deviceScaleFactor' => 1, 'isMobile' => false, 'hasTouch' => false],
            'Desktop Chrome HiDPI' => ['viewport' => ['width' => 1280, 'height' => 720], 'deviceScaleFactor' => 2, 'isMobile' => false, 'hasTouch' => false],
            default => throw new Exception("Unknown device: $name"),
        };
        return $d;
    }
}
