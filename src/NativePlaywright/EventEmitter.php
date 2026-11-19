<?php
namespace NativePlaywright;

/** on/once/off/emit + waitForEvent/expectEvent, Playwright style. */
trait EventEmitter
{
    /** @var array<string, array<int, array{0:\Closure,1:bool}>> */
    private array $handlers = [];
    private int $handlerSeq = 0;

    abstract protected function transport(): Transport;

    abstract protected function defaultTimeout(): float;

    public function on(string $event, \Closure $handler): void
    {
        $this->handlers[$event][++$this->handlerSeq] = [$handler, false];
        $this->onListenerAdded($event);
    }

    public function once(string $event, \Closure $handler): void
    {
        $this->handlers[$event][++$this->handlerSeq] = [$handler, true];
        $this->onListenerAdded($event);
    }

    public function off(string $event, ?\Closure $handler = null): void
    {
        if ($handler === null) {
            unset($this->handlers[$event]);
            return;
        }
        foreach ($this->handlers[$event] ?? [] as $k => $h) {
            if ($h[0] === $handler) {
                unset($this->handlers[$event][$k]);
            }
        }
    }

    public function removeAllListeners(string $event = ''): void
    {
        if ($event === '') {
            $this->handlers = [];
        } else {
            unset($this->handlers[$event]);
        }
    }

    public function listenerCount(string $event): int
    {
        return count($this->handlers[$event] ?? []);
    }

    protected function onListenerAdded(string $event): void
    {
    }

    protected function emit(string $event, mixed $arg): void
    {
        $hs = $this->handlers[$event] ?? [];
        if ($hs === []) {
            return;
        }
        $t = $this->transport();
        foreach ($hs as $k => $h) {
            if ($h[1]) {
                unset($this->handlers[$event][$k]);
            }
            $fn = $h[0];
            $t->async(static function () use ($fn, $arg): void {
                $fn($arg);
            });
        }
    }

    /** Wait for the next $event (optionally matching $predicate). $timeout in ms; null = default. */
    public function waitForEvent(string $event, ?\Closure $predicate = null, ?float $timeout = null): mixed
    {
        return $this->expectEvent($event, null, $predicate, $timeout);
    }

    /**
     * Start listening, run $action, then wait: no race between trigger and event.
     *   $popup = $page->expectEvent('popup', fn() => $page->click('a[target=_blank]'));
     */
    public function expectEvent(string $event, ?\Closure $action = null, ?\Closure $predicate = null, ?float $timeout = null): mixed
    {
        $t = $this->transport();
        $w = $t->newWaiter();
        $id = ++$this->handlerSeq;
        $this->handlers[$event][$id] = [static function (mixed $arg) use ($w, $predicate): void {
            if ($predicate === null || $predicate($arg)) {
                $w->resolve($arg);
            }
        }, false];
        $this->onListenerAdded($event);
        try {
            if ($action !== null) {
                $action();
            }
            $secs = $timeout === null ? $this->defaultTimeout() : $timeout / 1000;
            return $t->await($w, $secs, "waiting for event \"$event\"");
        } finally {
            unset($this->handlers[$event][$id]);
        }
    }
}
