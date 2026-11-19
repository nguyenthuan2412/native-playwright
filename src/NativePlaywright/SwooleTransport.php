<?php
namespace NativePlaywright;

use Swoole\Coroutine;
use Swoole\Coroutine\Channel;
use Swoole\Coroutine\System;

/**
 * Swoole coroutines: one reader coroutine parks on the pipe fd inside Swoole's
 * reactor; callers park on Channels. Handlers run in their own coroutines.
 */
final class SwooleTransport extends Transport
{
    private const EVENT_READ = 512;   // SWOOLE_EVENT_READ

    private Channel $done;
    private bool $closing = false;

    public function __construct(Connection $conn)
    {
        parent::__construct($conn);
        $this->done = new Channel(1);
        Coroutine::create(function (): void {
            $this->readLoop();
        });
    }

    private function readLoop(): void
    {
        $fd = $this->conn->fd();
        while (true) {
            System::waitEvent($fd, self::EVENT_READ);
            $msgs = $this->conn->read(0.0);
            if ($msgs === null) {
                break;
            }
            foreach ($msgs as $m) {
                $this->handleMessage($m);
            }
        }
        $this->handleClosed();
        $this->done->push(true);
    }

    public function newWaiter(): Waiter
    {
        $w = new Waiter();
        $w->channel = new Channel(1);
        return $w;
    }

    public function await(Waiter $w, float $timeout, string $what = 'operation'): mixed
    {
        if (!$w->done) {
            $w->channel->pop($timeout > 0 ? $timeout : -1);
        }
        if (!$w->done) {
            throw new TimeoutError(sprintf('%s: Timeout %dms exceeded.', $what, (int)round($timeout * 1000)));
        }
        if ($w->error !== null) {
            throw $w->error;
        }
        return $w->value;
    }

    public function sleep(float $seconds): void
    {
        if ($seconds > 0) {
            Coroutine::sleep($seconds);
        }
    }

    public function async(\Closure $fn): void
    {
        Coroutine::create(static function () use ($fn): void {
            try {
                $fn();
            } catch (\Throwable $e) {
                trigger_error('native_playwright handler error: ' . $e->getMessage(), E_USER_WARNING);
            }
        });
    }

    public function close(): void
    {
        if ($this->closing) {
            return;
        }
        $this->closing = true;
        if (!$this->closed) {
            try {
                $this->conn->send('Browser.close');
            } catch (Exception $e) {
            }
            // Let the reader see EOF first: never close an fd the reactor still watches.
            $this->done->pop(5.0);
        }
        $this->conn->close(false);
        $this->handleClosed();
    }
}
