<?php
namespace NativePlaywright;

/**
 * Playwright Locator: lazy, strict, auto-waiting.
 * Selector strings use Playwright's syntax (css, text=, xpath=, role=, internal:*, >> chaining).
 */
final class Locator
{
    public const ENTER_FRAME = ' >> internal:control=enter-frame >> ';
    private const DELAYS = [0, 20, 50, 100, 100, 500];

    public static string $testIdAttribute = 'data-testid';

    public function __construct(private Frame $frame, private string $selector)
    {
    }

    public function selector(): string
    {
        return $this->selector;
    }

    public function page(): Page
    {
        return $this->frame->page();
    }

    public function __toString(): string
    {
        return 'Locator@' . $this->selector;
    }

    // ------------------------------------------------------------ building

    public static function escapeText(string $text, bool $exact): string
    {
        if (Util::isRegex($text)) {
            return self::jsRegex($text);
        }
        return json_encode($text, JSON_UNESCAPED_UNICODE | JSON_UNESCAPED_SLASHES) . ($exact ? 's' : 'i');
    }

    /** PHP PCRE string ("/x/i", "#x#") -> JS regex literal */
    public static function jsRegex(string $re): string
    {
        $d = $re[0];
        $end = (int)strrpos($re, $d);
        $body = substr($re, 1, $end - 1);
        $flags = preg_replace('/[^imsu]/', '', substr($re, $end + 1));
        if ($d !== '/') {
            $body = str_replace('/', '\/', $body);
        }
        return '/' . $body . '/' . $flags;
    }

    public static function byText(string $text, bool $exact = false): string
    {
        return 'internal:text=' . self::escapeText($text, $exact);
    }

    public static function byLabel(string $text, bool $exact = false): string
    {
        return 'internal:label=' . self::escapeText($text, $exact);
    }

    public static function byAttr(string $attr, string $text, bool $exact = false): string
    {
        return 'internal:attr=[' . $attr . '=' . self::escapeText($text, $exact) . ']';
    }

    public static function byTestId(string $id): string
    {
        if (Util::isRegex($id)) {
            return 'internal:testid=[' . self::$testIdAttribute . '=' . self::jsRegex($id) . ']';
        }
        return 'internal:testid=[' . self::$testIdAttribute . '=' . json_encode($id, JSON_UNESCAPED_UNICODE | JSON_UNESCAPED_SLASHES) . 's]';
    }

    /** options: name, exact, checked, disabled, expanded, includeHidden, level, pressed, selected */
    public static function byRole(string $role, array $options = []): string
    {
        $s = 'internal:role=' . $role;
        foreach (['checked', 'disabled', 'selected', 'expanded', 'pressed'] as $k) {
            if (array_key_exists($k, $options) && $options[$k] !== null) {
                $v = $options[$k];
                $s .= '[' . $k . '=' . (is_string($v) ? $v : ($v ? 'true' : 'false')) . ']';
            }
        }
        if (isset($options['level'])) {
            $s .= '[level=' . (int)$options['level'] . ']';
        }
        if (!empty($options['includeHidden'])) {
            $s .= '[include-hidden=true]';
        }
        if (isset($options['name'])) {
            $s .= '[name=' . self::escapeText((string)$options['name'], (bool)($options['exact'] ?? false)) . ']';
        }
        return $s;
    }

    private function chain(string $sel): Locator
    {
        return new Locator($this->frame, $this->selector . ' >> ' . $sel);
    }

    /** options: hasText, hasNotText, has (Locator), hasNot (Locator) */
    public function locator(string|Locator $selector, array $options = []): Locator
    {
        $sel = $selector instanceof Locator ? $selector->selector : $selector;
        return $this->chain($sel)->filter($options);
    }

    /** options: hasText, hasNotText, has, hasNot, visible */
    public function filter(array $options = []): Locator
    {
        $s = $this->selector;
        if (isset($options['hasText'])) {
            $s .= ' >> internal:has-text=' . self::escapeText((string)$options['hasText'], false);
        }
        if (isset($options['hasNotText'])) {
            $s .= ' >> internal:has-not-text=' . self::escapeText((string)$options['hasNotText'], false);
        }
        if (isset($options['has']) && $options['has'] instanceof Locator) {
            $s .= ' >> internal:has=' . json_encode($options['has']->selector, JSON_UNESCAPED_UNICODE | JSON_UNESCAPED_SLASHES);
        }
        if (isset($options['hasNot']) && $options['hasNot'] instanceof Locator) {
            $s .= ' >> internal:has-not=' . json_encode($options['hasNot']->selector, JSON_UNESCAPED_UNICODE | JSON_UNESCAPED_SLASHES);
        }
        if (isset($options['visible'])) {
            $s .= ' >> visible=' . ($options['visible'] ? 'true' : 'false');
        }
        return new Locator($this->frame, $s);
    }

    public function and(Locator $other): Locator
    {
        return $this->chain('internal:and=' . json_encode($other->selector, JSON_UNESCAPED_UNICODE | JSON_UNESCAPED_SLASHES));
    }

    public function or(Locator $other): Locator
    {
        return $this->chain('internal:or=' . json_encode($other->selector, JSON_UNESCAPED_UNICODE | JSON_UNESCAPED_SLASHES));
    }

    public function nth(int $index): Locator
    {
        return $this->chain('nth=' . $index);
    }

    public function first(): Locator
    {
        return $this->nth(0);
    }

    public function last(): Locator
    {
        return $this->nth(-1);
    }

    public function getByText(string $text, array $options = []): Locator
    {
        return $this->chain(self::byText($text, (bool)($options['exact'] ?? false)));
    }

    public function getByRole(string $role, array $options = []): Locator
    {
        return $this->chain(self::byRole($role, $options));
    }

    public function getByLabel(string $text, array $options = []): Locator
    {
        return $this->chain(self::byLabel($text, (bool)($options['exact'] ?? false)));
    }

    public function getByPlaceholder(string $text, array $options = []): Locator
    {
        return $this->chain(self::byAttr('placeholder', $text, (bool)($options['exact'] ?? false)));
    }

    public function getByAltText(string $text, array $options = []): Locator
    {
        return $this->chain(self::byAttr('alt', $text, (bool)($options['exact'] ?? false)));
    }

    public function getByTitle(string $text, array $options = []): Locator
    {
        return $this->chain(self::byAttr('title', $text, (bool)($options['exact'] ?? false)));
    }

    public function getByTestId(string $testId): Locator
    {
        return $this->chain(self::byTestId($testId));
    }

    public function frameLocator(string $selector): FrameLocator
    {
        return new FrameLocator($this->frame, $this->selector . ' >> ' . $selector);
    }

    public function contentFrame(): FrameLocator
    {
        return new FrameLocator($this->frame, $this->selector);
    }

    public function describe(string $description): Locator
    {
        return $this;
    }

    /** @return list<Locator> */
    public function all(): array
    {
        $out = [];
        $n = $this->count();
        for ($i = 0; $i < $n; $i++) {
            $out[] = $this->nth($i);
        }
        return $out;
    }

    // ------------------------------------------------------------ resolution

    /** @return array{0:Frame,1:string}|null null = frame not available yet */
    private function resolve(): ?array
    {
        $parts = explode(self::ENTER_FRAME, $this->selector);
        $last = (string)array_pop($parts);
        $frame = $this->frame;
        foreach ($parts as $p) {
            $obj = $frame->utilCall('__pwlite.one(' . self::js($p) . ', true)', false);
            if (!isset($obj['objectId'])) {
                return null;
            }
            $page = $frame->page();
            $node = (array)($page->send('DOM.describeNode', ['objectId' => $obj['objectId']])['node'] ?? []);
            $page->releaseObject((string)$obj['objectId']);
            $fid = (string)($node['frameId'] ?? '');
            if ($fid === '') {
                throw new Exception("Selector \"$p\" does not resolve to an <iframe>");
            }
            $child = $page->frameById($fid);
            if ($child === null) {
                return null;
            }
            $frame = $child;
        }
        return [$frame, $last];
    }

    public static function js(mixed $v): string
    {
        return (string)json_encode($v, JSON_UNESCAPED_UNICODE | JSON_UNESCAPED_SLASHES | JSON_PRESERVE_ZERO_FRACTION);
    }

    private function timeout(array $options): float
    {
        return $this->frame->page()->timeoutSeconds($options);
    }

    /**
     * Retry $attempt until it returns ['ok' => value]; ['retry' => reason] means try again.
     * $attempt receives (Frame $frame, string $selector).
     */
    private function retrying(string $api, array $options, \Closure $attempt): mixed
    {
        $timeout = $this->timeout($options);
        $deadline = $timeout > 0 ? microtime(true) + $timeout : 0.0;
        $page = $this->frame->page();
        $last = 'waiting for ' . $this->selector;
        $i = 0;
        while (true) {
            try {
                $r = $this->resolve();
                if ($r === null) {
                    $last = 'waiting for frame';
                } else {
                    $res = $attempt($r[0], $r[1]);
                    if (array_key_exists('ok', $res)) {
                        return $res['ok'];
                    }
                    $last = (string)$res['retry'];
                }
            } catch (TimeoutError $e) {
                throw $e;
            } catch (Exception $e) {
                $msg = $e->getMessage();
                if (!Frame::isContextLost($msg)) {
                    throw new Exception("$api: " . preg_replace('/^Runtime\.\w+: /', '', $msg), 0, $e);
                }
                $last = 'waiting for navigation to finish';
            }
            if ($page->isClosed()) {
                throw new Exception("$api: Target page, context or browser has been closed");
            }
            $delay = self::DELAYS[min($i, 5)] / 1000;
            $i++;
            if ($deadline > 0) {
                $left = $deadline - microtime(true);
                if ($left <= 0) {
                    throw new TimeoutError(sprintf("%s: Timeout %dms exceeded.\nCall log:\n  - %s", $api, (int)round($timeout * 1000), $last));
                }
                $delay = min($delay, $left);
            }
            if ($delay > 0) {
                $page->waitForTimeout($delay * 1000);
            }
        }
    }

    /** Wait for an actionable element and return its click point (main-frame viewport coords). */
    private function prepare(string $api, string $action, array $options): array
    {
        $opts = [
            'force' => (bool)($options['force'] ?? false),
            'position' => $options['position'] ?? null,
        ];
        return (array)$this->retrying($api, $options, static function (Frame $f, string $sel) use ($action, $opts): array {
            $r = $f->utilValue('__pwlite.prepare(' . self::js($sel) . ', true, ' . self::js($action) . ', ' . self::js($opts) . ')');
            if (!is_array($r) || ($r['status'] ?? '') !== 'ok') {
                return ['retry' => (string)(is_array($r) ? ($r['reason'] ?? 'retrying') : 'retrying')];
            }
            [$ox, $oy] = $f->offset();
            $r['x'] = (float)$r['x'] + $ox;
            $r['y'] = (float)$r['y'] + $oy;
            $r['box']['x'] = (float)$r['box']['x'] + $ox;
            $r['box']['y'] = (float)$r['box']['y'] + $oy;
            return ['ok' => $r];
        });
    }

    /** Read something from the (single, strict) element, waiting for it to exist. */
    private function read(string $api, string $op, mixed $arg, array $options, bool $wait = true): mixed
    {
        return $this->retrying($api, $options, static function (Frame $f, string $sel) use ($op, $arg, $wait): array {
            $v = $f->utilValue('__pwlite.read(' . self::js($sel) . ', true, ' . self::js($op) . ', ' . self::js($arg) . ')');
            if (is_array($v) && isset($v['missing'])) {
                if (!$wait) {
                    return ['ok' => null];
                }
                return ['retry' => 'waiting for ' . $sel];
            }
            return ['ok' => $v];
        });
    }

    private function withModifiers(array $options, \Closure $fn): void
    {
        $kb = $this->page()->keyboard;
        $mods = (array)($options['modifiers'] ?? []);
        foreach ($mods as $m) {
            $kb->down((string)$m);
        }
        try {
            $fn();
        } finally {
            for ($i = count($mods) - 1; $i >= 0; $i--) {
                $kb->up((string)$mods[$i]);
            }
        }
    }

    // ------------------------------------------------------------ actions

    /** options: button, clickCount, delay, force, modifiers, position, timeout, trial */
    public function click(array $options = []): void
    {
        $p = $this->prepare('locator.click', 'click', $options);
        if (!empty($options['trial'])) {
            return;
        }
        $page = $this->page();
        $this->withModifiers($options, static function () use ($page, $p, $options): void {
            $page->mouse->click((float)$p['x'], (float)$p['y'], $options);
        });
        $page->afterAction();
    }

    public function dblclick(array $options = []): void
    {
        $options['clickCount'] = 2;
        $p = $this->prepare('locator.dblclick', 'dblclick', $options);
        if (!empty($options['trial'])) {
            return;
        }
        $page = $this->page();
        $this->withModifiers($options, static function () use ($page, $p, $options): void {
            $page->mouse->click((float)$p['x'], (float)$p['y'], $options);
        });
        $page->afterAction();
    }

    public function tap(array $options = []): void
    {
        $p = $this->prepare('locator.tap', 'tap', $options);
        if (!empty($options['trial'])) {
            return;
        }
        $page = $this->page();
        $this->withModifiers($options, static function () use ($page, $p): void {
            $page->touchscreen->tap((float)$p['x'], (float)$p['y']);
        });
        $page->afterAction();
    }

    public function hover(array $options = []): void
    {
        $p = $this->prepare('locator.hover', 'hover', $options);
        if (!empty($options['trial'])) {
            return;
        }
        $page = $this->page();
        $this->withModifiers($options, static function () use ($page, $p): void {
            $page->mouse->move((float)$p['x'], (float)$p['y']);
        });
    }

    /** options: force, timeout */
    public function fill(string $value, array $options = []): void
    {
        $force = (bool)($options['force'] ?? false);
        $mode = (string)$this->retrying('locator.fill', $options, static function (Frame $f, string $sel) use ($value, $force): array {
            $r = $f->utilValue('__pwlite.fill(' . self::js($sel) . ', true, ' . self::js($value) . ', ' . self::js($force) . ')');
            return $r === 'retry' ? ['retry' => 'waiting for element to be visible, enabled and editable'] : ['ok' => (string)$r];
        });
        $page = $this->page();
        if ($mode === 'type') {
            if ($value === '') {
                $page->keyboard->press('Delete');
            } else {
                $page->keyboard->insertText($value);
            }
        }
        $page->afterAction();
    }

    public function clear(array $options = []): void
    {
        $this->fill('', $options);
    }

    /** Type character by character. options: delay (ms), timeout */
    public function pressSequentially(string $text, array $options = []): void
    {
        $this->focus($options);
        $this->page()->keyboard->type($text, $options);
    }

    /** @deprecated use fill() or pressSequentially() */
    public function type(string $text, array $options = []): void
    {
        $this->pressSequentially($text, $options);
    }

    /** options: delay, timeout */
    public function press(string $key, array $options = []): void
    {
        $this->focus($options);
        $this->page()->keyboard->press($key, $options);
        $this->page()->afterAction();
    }

    public function focus(array $options = []): void
    {
        $this->read('locator.focus', 'focus', null, $options);
    }

    public function blur(array $options = []): void
    {
        $this->read('locator.blur', 'blur', null, $options);
    }

    public function check(array $options = []): void
    {
        $this->setChecked(true, $options);
    }

    public function uncheck(array $options = []): void
    {
        $this->setChecked(false, $options);
    }

    public function setChecked(bool $checked, array $options = []): void
    {
        $api = $checked ? 'locator.check' : 'locator.uncheck';
        $state = $this->read($api, 'isChecked', null, $options);
        if ((bool)$state === $checked) {
            return;
        }
        $this->click($options);
        if (!empty($options['trial'])) {
            return;
        }
        $now = $this->read($api, 'isChecked', null, $options);
        if ((bool)$now !== $checked) {
            throw new Exception("$api: Clicking the checkbox did not change its state");
        }
    }

    /**
     * $values: "v" | ["v1","v2"] | ['value'=>..] | ['label'=>..] | ['index'=>..] | list of those
     * @return list<string> selected values
     */
    public function selectOption(string|array $values, array $options = []): array
    {
        $list = is_string($values) ? [$values] : (array_is_list($values) ? $values : [$values]);
        $opts = [];
        foreach ($list as $v) {
            $opts[] = is_array($v) ? $v : ['any' => (string)$v];
        }
        $force = (bool)($options['force'] ?? false);
        $r = (array)$this->retrying('locator.selectOption', $options, static function (Frame $f, string $sel) use ($opts, $force): array {
            $v = $f->utilValue('__pwlite.selectOption(' . self::js($sel) . ', true, ' . self::js($opts) . ', ' . self::js($force) . ')');
            return $v === null ? ['retry' => 'waiting for element and option(s) to be available'] : ['ok' => $v];
        });
        $this->page()->afterAction();
        return $r;
    }

    public function selectText(array $options = []): void
    {
        $this->read('locator.selectText', 'selectText', null, $options);
    }

    /** @param string|array $files path(s) or ['name'=>, 'mimeType'=>, 'buffer'=>] payload(s) */
    public function setInputFiles(string|array $files, array $options = []): void
    {
        $paths = self::materializeFiles($files);
        $this->retrying('locator.setInputFiles', $options, static function (Frame $f, string $sel) use ($paths): array {
            $obj = $f->utilCall('__pwlite.one(' . self::js($sel) . ', true)', false);
            if (!isset($obj['objectId'])) {
                return ['retry' => 'waiting for ' . $sel];
            }
            $page = $f->page();
            $ok = $f->page()->callOn((string)$obj['objectId'], 'function(){return this.nodeName==="INPUT"&&this.type==="file"}');
            if ($ok !== true) {
                $page->releaseObject((string)$obj['objectId']);
                throw new Exception('Node is not an HTMLInputElement[type=file]');
            }
            $page->send('DOM.setFileInputFiles', ['files' => $paths, 'objectId' => $obj['objectId']]);
            $page->releaseObject((string)$obj['objectId']);
            return ['ok' => null];
        });
    }

    /** @return list<string> absolute paths */
    public static function materializeFiles(string|array $files): array
    {
        $list = is_string($files) ? [$files] : (isset($files['name']) || isset($files['buffer']) ? [$files] : $files);
        $out = [];
        foreach ($list as $f) {
            if (is_array($f)) {
                $dir = sys_get_temp_dir() . '/pwlite-upload-' . bin2hex(random_bytes(6));
                mkdir($dir, 0700, true);
                $path = $dir . '/' . basename((string)($f['name'] ?? 'file'));
                file_put_contents($path, (string)($f['buffer'] ?? ''));
                $out[] = $path;
            } else {
                $real = realpath((string)$f);
                if ($real === false) {
                    throw new Exception("File not found: $f");
                }
                $out[] = $real;
            }
        }
        return $out;
    }

    /** options: sourcePosition, targetPosition, force, timeout, steps */
    public function dragTo(Locator $target, array $options = []): void
    {
        $src = $this->prepare('locator.dragTo', 'hover', ['position' => $options['sourcePosition'] ?? null] + $options);
        $mouse = $this->page()->mouse;
        $mouse->move((float)$src['x'], (float)$src['y']);
        $mouse->down();
        $dst = $target->prepare('locator.dragTo', 'hover', ['position' => $options['targetPosition'] ?? null, 'force' => true] + $options);
        $mouse->move((float)$dst['x'], (float)$dst['y'], ['steps' => (int)($options['steps'] ?? 5)]);
        $mouse->up();
        $this->page()->afterAction();
    }

    public function scrollIntoViewIfNeeded(array $options = []): void
    {
        $this->read('locator.scrollIntoViewIfNeeded', 'scrollIntoView', null, $options);
    }

    public function dispatchEvent(string $type, array $eventInit = [], array $options = []): void
    {
        $this->read('locator.dispatchEvent', 'dispatchEvent', ['type' => $type, 'init' => (object)$eventInit], $options);
    }

    /** Same options as Page::screenshot (except fullPage/clip). Returns image bytes. */
    public function screenshot(array $options = []): string
    {
        $p = $this->prepare('locator.screenshot', 'screenshot', $options);
        $options['clip'] = $p['box'];
        unset($options['fullPage']);
        return $this->page()->screenshot($options);
    }

    public function highlight(): void
    {
    }

    // ------------------------------------------------------------ queries

    public function count(): int
    {
        return (int)$this->read('locator.count', 'count', null, ['timeout' => 0], false);
    }

    public function textContent(array $options = []): ?string
    {
        $v = $this->read('locator.textContent', 'textContent', null, $options);
        return $v === null ? null : (string)$v;
    }

    public function innerText(array $options = []): string
    {
        return (string)$this->read('locator.innerText', 'innerText', null, $options);
    }

    public function innerHTML(array $options = []): string
    {
        return (string)$this->read('locator.innerHTML', 'innerHTML', null, $options);
    }

    public function getAttribute(string $name, array $options = []): ?string
    {
        $v = $this->read('locator.getAttribute', 'getAttribute', $name, $options);
        return $v === null ? null : (string)$v;
    }

    public function inputValue(array $options = []): string
    {
        return (string)$this->read('locator.inputValue', 'inputValue', null, $options);
    }

    /** @return list<string> */
    public function allTextContents(): array
    {
        return (array)$this->read('locator.allTextContents', 'allTextContents', null, ['timeout' => 0], false);
    }

    /** @return list<string> */
    public function allInnerTexts(): array
    {
        return (array)$this->read('locator.allInnerTexts', 'allInnerTexts', null, ['timeout' => 0], false);
    }

    public function isVisible(): bool
    {
        return (bool)$this->read('locator.isVisible', 'isVisible', null, ['timeout' => 0], false);
    }

    public function isHidden(): bool
    {
        return (bool)$this->read('locator.isHidden', 'isHidden', null, ['timeout' => 0], false);
    }

    public function isEnabled(array $options = []): bool
    {
        return (bool)$this->read('locator.isEnabled', 'isEnabled', null, $options);
    }

    public function isDisabled(array $options = []): bool
    {
        return (bool)$this->read('locator.isDisabled', 'isDisabled', null, $options);
    }

    public function isEditable(array $options = []): bool
    {
        return (bool)$this->read('locator.isEditable', 'isEditable', null, $options);
    }

    public function isChecked(array $options = []): bool
    {
        return (bool)$this->read('locator.isChecked', 'isChecked', null, $options);
    }

    /** ['x','y','width','height'] in main-frame viewport coordinates, or null if not visible. */
    public function boundingBox(array $options = []): ?array
    {
        $f = null;
        $box = $this->retrying('locator.boundingBox', $options, function (Frame $frame, string $sel) use (&$f): array {
            $v = $frame->utilValue('__pwlite.read(' . self::js($sel) . ', true, "boundingBox", null)');
            if (is_array($v) && isset($v['missing'])) {
                return ['retry' => 'waiting for ' . $sel];
            }
            $f = $frame;
            return ['ok' => $v];
        });
        if (!is_array($box) || $f === null) {
            return null;
        }
        [$ox, $oy] = $f->offset();
        return ['x' => (float)$box['x'] + $ox, 'y' => (float)$box['y'] + $oy, 'width' => (float)$box['width'], 'height' => (float)$box['height']];
    }

    public function ariaSnapshot(array $options = []): string
    {
        return (string)$this->read('locator.ariaSnapshot', 'ariaSnapshot', null, $options);
    }

    /** options: state (attached|detached|visible|hidden, default visible), timeout */
    public function waitFor(array $options = []): void
    {
        $state = (string)($options['state'] ?? 'visible');
        $timeout = $this->timeout($options);
        $deadline = $timeout > 0 ? microtime(true) + $timeout : 0.0;
        $this->retrying('locator.waitFor', $options, static function (Frame $f, string $sel) use ($state, $deadline): array {
            $slice = 1000;
            if ($deadline > 0) {
                $slice = (int)max(1, min(1000, ($deadline - microtime(true)) * 1000));
            }
            $ok = $f->utilValue('__pwlite.waitState(' . self::js($sel) . ', true, ' . self::js($state) . ', ' . $slice . ')');
            return $ok === true ? ['ok' => null] : ['retry' => "waiting for {$sel} to be {$state}"];
        });
    }

    /** Run $js (a function receiving the element) in the page's main world. */
    public function evaluate(string $js, mixed $arg = null, array $options = []): mixed
    {
        return $this->retrying('locator.evaluate', $options, static function (Frame $f, string $sel) use ($js, $arg): array {
            $obj = $f->utilCall('__pwlite.one(' . self::js($sel) . ', true)', false);
            if (!isset($obj['objectId'])) {
                return ['retry' => 'waiting for ' . $sel];
            }
            $main = $f->adoptToMain((string)$obj['objectId']);
            $fn = Util::isFunction($js) ? $js : '(el) => (' . $js . ')';
            $v = $f->page()->callFunction($fn, [['objectId' => $main], ['value' => $arg]], $main);
            $f->page()->releaseObject($main);
            return ['ok' => $v];
        });
    }

    /** Run $js with the array of all matching elements. */
    public function evaluateAll(string $js, mixed $arg = null): mixed
    {
        $r = $this->resolve();
        if ($r === null) {
            throw new Exception('locator.evaluateAll: frame is not available');
        }
        [$f, $sel] = $r;
        $page = $f->page();
        $arr = $f->utilCall('__pwlite.query(' . self::js($sel) . ')', false);
        $props = (array)($page->send('Runtime.getProperties', ['objectId' => $arr['objectId'], 'ownProperties' => true])['result'] ?? []);
        $args = [['value' => $arg]];
        $ids = [];
        foreach ($props as $p) {
            if (is_numeric($p['name'] ?? '') && isset($p['value']['objectId'])) {
                $id = $f->adoptToMain((string)$p['value']['objectId']);
                $args[] = ['objectId' => $id];
                $ids[] = $id;
            }
        }
        $page->releaseObject((string)$arr['objectId']);
        $fn = 'function(arg, ...els) { return (' . $js . ')(els, arg); }';
        $v = $page->callFunction($fn, $args, '', $f->mainContextId());
        foreach ($ids as $id) {
            $page->releaseObject($id);
        }
        return $v;
    }
}
