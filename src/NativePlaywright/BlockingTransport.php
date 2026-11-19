<?php
namespace NativePlaywright;

/** Plain PHP (CLI / FPM): waits with poll() inside the C++ layer. Reentrant. */
final class BlockingTransport extends Transport
{
    /** @var list<array> messages read but not yet handled (keeps ordering under reentrancy) */
    private array $queue = [];
    private int $head = 0;

    public function newWaiter(): Waiter
    {
        return new Waiter();
    }

    public function await(Waiter $w, float $timeout, string $what = 'operation'): mixed
    {
        $deadline = $timeout > 0 ? microtime(true) + $timeout : 0.0;
        while (!$w->done) {
            $left = 3600.0;
            if ($deadline > 0) {
                $left = $deadline - microtime(true);
                if ($left <= 0) {
                    throw new TimeoutError(sprintf('%s: Timeout %dms exceeded.', $what, (int)round($timeout * 1000)));
                }
            }
            $this->pump($left);
        }
        if ($w->error !== null) {
            throw $w->error;
        }
        return $w->value;
    }

    /** Handle queued messages, or read new ones waiting up to $timeout. */
    private function pump(float $timeout): void
    {
        if ($this->head >= count($this->queue)) {
            $this->queue = [];
            $this->head = 0;
            if ($this->closed) {
                throw new Exception('Target page, context or browser has been closed');
            }
            $msgs = $this->conn->read($timeout);
            if ($msgs === null) {
                $this->handleClosed();
                return;
            }
            $this->queue = $msgs;
        }
        while ($this->head < count($this->queue)) {
            $m = $this->queue[$this->head];
            $this->head++;
            $this->handleMessage($m);
        }
    }

    public function sleep(float $seconds): void
    {
        $deadline = microtime(true) + $seconds;
        while (($left = $deadline - microtime(true)) > 0) {
            if ($this->closed) {
                usleep((int)($left * 1e6));
                return;
            }
            $this->pump($left);
        }
    }

    public function async(\Closure $fn): void
    {
        $fn();
    }

    public function close(): void
    {
        if ($this->closed) {
            return;
        }
        $this->conn->close(true);
        $this->handleClosed();
    }
}
