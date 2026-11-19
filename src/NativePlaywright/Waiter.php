<?php
namespace NativePlaywright;

/** A pending result: CDP response, event, page creation, ... */
final class Waiter
{
    public bool $done = false;
    public mixed $value = null;
    public ?\Throwable $error = null;
    /** Swoole\Coroutine\Channel in coroutine mode, null in blocking mode. */
    public mixed $channel = null;
    public int $id = 0;

    public function resolve(mixed $value): void
    {
        if ($this->done) {
            return;
        }
        $this->done = true;
        $this->value = $value;
        if ($this->channel !== null) {
            $this->channel->push(true);
        }
    }

    public function reject(\Throwable $e): void
    {
        if ($this->done) {
            return;
        }
        $this->done = true;
        $this->error = $e;
        if ($this->channel !== null) {
            $this->channel->push(true);
        }
    }
}
