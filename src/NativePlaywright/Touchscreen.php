<?php
namespace NativePlaywright;

final class Touchscreen
{
    public function __construct(private Page $page, private Keyboard $keyboard)
    {
    }

    public function tap(float $x, float $y): void
    {
        $m = $this->keyboard->modifiers();
        $this->page->sendMany([
            ['Input.dispatchTouchEvent', ['type' => 'touchStart', 'touchPoints' => [['x' => $x, 'y' => $y]], 'modifiers' => $m]],
            ['Input.dispatchTouchEvent', ['type' => 'touchEnd', 'touchPoints' => [], 'modifiers' => $m]],
        ]);
    }
}
