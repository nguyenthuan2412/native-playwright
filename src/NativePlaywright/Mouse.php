<?php
namespace NativePlaywright;

final class Mouse
{
    private float $x = 0.0;
    private float $y = 0.0;
    private string $button = 'none';
    private int $buttons = 0;

    public function __construct(private Page $page, private Keyboard $keyboard)
    {
    }

    private static function bit(string $b): int
    {
        return match ($b) {
            'left' => 1,
            'right' => 2,
            'middle' => 4,
            default => 0,
        };
    }

    /** options: steps */
    public function move(float $x, float $y, array $options = []): void
    {
        $steps = max(1, (int)($options['steps'] ?? 1));
        $fx = $this->x;
        $fy = $this->y;
        for ($i = 1; $i <= $steps; $i++) {
            $this->x = $fx + ($x - $fx) * ($i / $steps);
            $this->y = $fy + ($y - $fy) * ($i / $steps);
            $this->page->send('Input.dispatchMouseEvent', [
                'type' => 'mouseMoved', 'x' => $this->x, 'y' => $this->y, 'button' => $this->button,
                'buttons' => $this->buttons, 'modifiers' => $this->keyboard->modifiers(),
            ]);
        }
    }

    /** options: button (left|right|middle), clickCount */
    public function down(array $options = []): void
    {
        $b = (string)($options['button'] ?? 'left');
        $this->button = $b;
        $this->buttons |= self::bit($b);
        $this->page->send('Input.dispatchMouseEvent', [
            'type' => 'mousePressed', 'x' => $this->x, 'y' => $this->y, 'button' => $b, 'buttons' => $this->buttons,
            'clickCount' => (int)($options['clickCount'] ?? 1), 'modifiers' => $this->keyboard->modifiers(),
        ]);
    }

    public function up(array $options = []): void
    {
        $b = (string)($options['button'] ?? 'left');
        $this->button = 'none';
        $this->buttons &= ~self::bit($b);
        $this->page->send('Input.dispatchMouseEvent', [
            'type' => 'mouseReleased', 'x' => $this->x, 'y' => $this->y, 'button' => $b, 'buttons' => $this->buttons,
            'clickCount' => (int)($options['clickCount'] ?? 1), 'modifiers' => $this->keyboard->modifiers(),
        ]);
    }

    /** options: button, clickCount, delay (ms) */
    public function click(float $x, float $y, array $options = []): void
    {
        $count = (int)($options['clickCount'] ?? 1);
        $delay = (float)($options['delay'] ?? 0);
        $b = (string)($options['button'] ?? 'left');
        $this->move($x, $y);
        if ($delay <= 0) {
            // pipeline press/release pairs: one round trip for the whole click
            $calls = [];
            for ($i = 1; $i <= $count; $i++) {
                foreach (['mousePressed', 'mouseReleased'] as $type) {
                    $calls[] = ['Input.dispatchMouseEvent', [
                        'type' => $type, 'x' => $x, 'y' => $y, 'button' => $b,
                        'buttons' => $type === 'mousePressed' ? self::bit($b) : 0,
                        'clickCount' => $i, 'modifiers' => $this->keyboard->modifiers(),
                    ]];
                }
            }
            $this->page->sendMany($calls);
            return;
        }
        for ($i = 1; $i <= $count; $i++) {
            $this->down(['button' => $b, 'clickCount' => $i]);
            $this->page->waitForTimeout($delay);
            $this->up(['button' => $b, 'clickCount' => $i]);
        }
    }

    public function dblclick(float $x, float $y, array $options = []): void
    {
        $options['clickCount'] = 2;
        $this->click($x, $y, $options);
    }

    public function wheel(float $deltaX, float $deltaY): void
    {
        $this->page->send('Input.dispatchMouseEvent', [
            'type' => 'mouseWheel', 'x' => $this->x, 'y' => $this->y, 'deltaX' => $deltaX, 'deltaY' => $deltaY,
            'modifiers' => $this->keyboard->modifiers(),
        ]);
    }
}
