<?php
namespace NativePlaywright;

final class Keyboard
{
    /** Alt=1, Control=2, Meta=4, Shift=8 */
    private int $modifiers = 0;
    /** @var array<string, bool> */
    private array $pressed = [];
    /** @var array<string, array> */
    private static array $layout = [];

    public function __construct(private Page $page)
    {
    }

    public function modifiers(): int
    {
        return $this->modifiers;
    }

    private static function layout(): array
    {
        if (self::$layout !== []) {
            return self::$layout;
        }
        // key => [keyCode, code, text, shiftKey, location]
        $l = [
            'Backspace' => [8, 'Backspace', '', '', 0], 'Tab' => [9, 'Tab', '', '', 0], 'Enter' => [13, 'Enter', "\r", '', 0],
            'Shift' => [16, 'ShiftLeft', '', '', 1], 'Control' => [17, 'ControlLeft', '', '', 1], 'Alt' => [18, 'AltLeft', '', '', 1],
            'Pause' => [19, 'Pause', '', '', 0], 'CapsLock' => [20, 'CapsLock', '', '', 0], 'Escape' => [27, 'Escape', '', '', 0],
            ' ' => [32, 'Space', ' ', '', 0], 'PageUp' => [33, 'PageUp', '', '', 0], 'PageDown' => [34, 'PageDown', '', '', 0],
            'End' => [35, 'End', '', '', 0], 'Home' => [36, 'Home', '', '', 0], 'ArrowLeft' => [37, 'ArrowLeft', '', '', 0],
            'ArrowUp' => [38, 'ArrowUp', '', '', 0], 'ArrowRight' => [39, 'ArrowRight', '', '', 0], 'ArrowDown' => [40, 'ArrowDown', '', '', 0],
            'Insert' => [45, 'Insert', '', '', 0], 'Delete' => [46, 'Delete', '', '', 0], 'Meta' => [91, 'MetaLeft', '', '', 1],
            'ContextMenu' => [93, 'ContextMenu', '', '', 0], 'NumLock' => [144, 'NumLock', '', '', 0], 'ScrollLock' => [145, 'ScrollLock', '', '', 0],
            ';' => [186, 'Semicolon', ';', ':', 0], '=' => [187, 'Equal', '=', '+', 0], ',' => [188, 'Comma', ',', '<', 0],
            '-' => [189, 'Minus', '-', '_', 0], '.' => [190, 'Period', '.', '>', 0], '/' => [191, 'Slash', '/', '?', 0],
            '`' => [192, 'Backquote', '`', '~', 0], '[' => [219, 'BracketLeft', '[', '{', 0], '\\' => [220, 'Backslash', '\\', '|', 0],
            ']' => [221, 'BracketRight', ']', '}', 0], "'" => [222, 'Quote', "'", '"', 0],
        ];
        for ($i = 1; $i <= 12; $i++) {
            $l["F$i"] = [111 + $i, "F$i", '', '', 0];
        }
        $shiftDigits = ')!@#$%^&*(';
        for ($d = 0; $d <= 9; $d++) {
            $l[(string)$d] = [48 + $d, "Digit$d", (string)$d, $shiftDigits[$d], 0];
        }
        for ($c = ord('a'); $c <= ord('z'); $c++) {
            $ch = chr($c);
            $l[$ch] = [$c - 32, 'Key' . strtoupper($ch), $ch, strtoupper($ch), 0];
        }
        // shifted characters and code aliases
        foreach ($l as $key => $def) {
            if ($def[3] !== '' && !isset($l[$def[3]])) {
                $l[$def[3]] = [$def[0], $def[1], $def[3], '', 0, true];
            }
        }
        foreach ($l as $key => $def) {
            if (!isset($l[$def[1]]) && strlen((string)$key) === 1) {
                $l[$def[1]] = $def;
            }
        }
        $l['Space'] = $l[' '];
        foreach (['Shift', 'Control', 'Alt', 'Meta'] as $m) {
            $l[$m . 'Left'] = $l[$m];
            $right = $l[$m];
            $right[1] = $m . 'Right';
            $right[4] = 2;
            $l[$m . 'Right'] = $right;
        }
        self::$layout = $l;
        return $l;
    }

    private static function bit(string $key): int
    {
        return match ($key) {
            'Alt' => 1,
            'Control' => 2,
            'Meta' => 4,
            'Shift' => 8,
            default => 0,
        };
    }

    private static function resolveKey(string $key): string
    {
        if ($key === 'ControlOrMeta') {
            return PHP_OS_FAMILY === 'Darwin' ? 'Meta' : 'Control';
        }
        return $key;
    }

    private function description(string $key): array
    {
        $l = self::layout();
        $def = $l[$key] ?? null;
        if ($def === null) {
            if (mb_strlen($key) === 1) {
                return ['key' => $key, 'code' => '', 'keyCode' => 0, 'text' => $key, 'location' => 0];
            }
            throw new Exception("Unknown key: \"$key\"");
        }
        $text = (string)$def[2];
        $name = $key;
        if (strlen($key) > 1 && $text !== '' && $key !== 'Enter') {
            $name = $text; // code alias: KeyA -> "a", Space -> " "
        }
        if (($this->modifiers & 8) !== 0 && $def[3] !== '') {
            $text = (string)$def[3];
            $name = $text;
        }
        if (($this->modifiers & 7) !== 0) {
            $text = ''; // Control/Alt/Meta combos do not produce text
        }
        return ['key' => $name, 'code' => (string)$def[1], 'keyCode' => (int)$def[0], 'text' => $text, 'location' => (int)$def[4]];
    }

    public function down(string $key): void
    {
        $key = self::resolveKey($key);
        $d = $this->description($key);
        $auto = isset($this->pressed[$d['code']]);
        $this->pressed[$d['code']] = true;
        $this->modifiers |= self::bit($d['key']);
        $p = [
            'type' => $d['text'] !== '' ? 'keyDown' : 'rawKeyDown',
            'modifiers' => $this->modifiers,
            'windowsVirtualKeyCode' => $d['keyCode'],
            'code' => $d['code'],
            'key' => $d['key'],
            'text' => $d['text'],
            'unmodifiedText' => $d['text'],
            'autoRepeat' => $auto,
            'location' => $d['location'],
            'isKeypad' => $d['location'] === 3,
        ];
        $cmd = $this->editingCommand($d['code']);
        if ($cmd !== '') {
            $p['commands'] = [$cmd];
        }
        $this->page->send('Input.dispatchKeyEvent', $p);
    }

    private function editingCommand(string $code): string
    {
        // Chromium does not run editing shortcuts for synthetic events on macOS.
        $meta = PHP_OS_FAMILY === 'Darwin' ? 4 : 2;
        if (($this->modifiers & $meta) === 0) {
            return '';
        }
        return match ($code) {
            'KeyA' => 'selectAll',
            'KeyC' => 'copy',
            'KeyX' => 'cut',
            'KeyV' => 'paste',
            'KeyZ' => ($this->modifiers & 8) ? 'redo' : 'undo',
            default => '',
        };
    }

    public function up(string $key): void
    {
        $key = self::resolveKey($key);
        $d = $this->description($key);
        $this->modifiers &= ~self::bit($d['key']);
        unset($this->pressed[$d['code']]);
        $this->page->send('Input.dispatchKeyEvent', [
            'type' => 'keyUp',
            'modifiers' => $this->modifiers,
            'key' => $d['key'],
            'windowsVirtualKeyCode' => $d['keyCode'],
            'code' => $d['code'],
            'location' => $d['location'],
        ]);
    }

    /** "Enter", "Shift+Tab", "ControlOrMeta+A" ... options: delay (ms) */
    public function press(string $keys, array $options = []): void
    {
        $parts = $keys === '+' ? ['+'] : explode('+', $keys);
        if (str_ends_with($keys, '++')) {
            $parts = array_merge(explode('+', substr($keys, 0, -2)), ['+']);
        }
        $parts = array_values(array_filter($parts, static fn(string $p): bool => $p !== ''));
        foreach ($parts as $k) {
            $this->down($k);
        }
        $delay = (float)($options['delay'] ?? 0);
        if ($delay > 0) {
            $this->page->waitForTimeout($delay);
        }
        for ($i = count($parts) - 1; $i >= 0; $i--) {
            $this->up($parts[$i]);
        }
    }

    /** Type text key by key (keydown/keypress/keyup per char). options: delay (ms) */
    public function type(string $text, array $options = []): void
    {
        $delay = (float)($options['delay'] ?? 0);
        $l = self::layout();
        foreach (mb_str_split($text) as $ch) {
            if (isset($l[$ch])) {
                $this->press($ch);
            } elseif ($ch === "\n") {
                $this->press('Enter');
            } else {
                $this->insertText($ch);
            }
            if ($delay > 0) {
                $this->page->waitForTimeout($delay);
            }
        }
    }

    public function insertText(string $text): void
    {
        $this->page->send('Input.insertText', ['text' => $text]);
    }
}
