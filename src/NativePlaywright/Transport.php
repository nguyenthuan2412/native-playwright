<?php
namespace NativePlaywright;

/**
 * Request/response correlation + event fan-out, shared by both runtimes.
 * Subclasses only decide HOW to wait (poll() in-process vs Swoole reactor).
 *
 * Listener rule: listeners run on the reading path. Anything that needs to
 * make CDP calls must go through async() (a new coroutine under Swoole,
 * a direct nested call in blocking mode - the transport is reentrant).
 */
abstract class Transport
{
    /** @var array<int, Waiter> */
    protected array $waiters = [];
    /** @var array<string, array<int, \Closure>> sessionId ('' = browser) => listeners(method, params) */
    protected array $listeners = [];
    protected int $seq = 0;
    protected bool $closed = false;
    /** @var array<int, \Closure> */
    protected array $closeListeners = [];

    public function __construct(protected Connection $conn)
    {
    }

    abstract public function newWaiter(): Waiter;

    /** Wait until $w resolves; returns its value or throws. $timeout in seconds, <= 0 = no limit. */
    abstract public function await(Waiter $w, float $timeout, string $what = 'operation'): mixed;

    abstract public function sleep(float $seconds): void;

    /** Run $fn "in the background": coroutine under Swoole, immediately otherwise. */
    abstract public function async(\Closure $fn): void;

    abstract public function close(): void;

    public function connection(): Connection
    {
        return $this->conn;
    }

    public function isClosed(): bool
    {
        return $this->closed;
    }

    public function sendAsync(string $method, array $params = [], string $sessionId = ''): Waiter
    {
        $w = $this->newWaiter();
        $w->id = $this->conn->send($method, $params, $sessionId);
        $this->waiters[$w->id] = $w;
        return $w;
    }

    public function call(string $method, array $params = [], string $sessionId = '', float $timeout = 0.0): array
    {
        $w = $this->sendAsync($method, $params, $sessionId);
        try {
            $m = $this->await($w, $timeout, $method);
        } finally {
            unset($this->waiters[$w->id]);
        }
        return self::unwrap($method, (array)$m);
    }

    /**
     * Pipeline several calls on one session: send all, then collect.
     * @param list<array{0:string,1?:array}> $calls
     * @return list<array>
     */
    public function callMany(array $calls, string $sessionId = '', bool $ignoreErrors = false): array
    {
        $ws = [];
        foreach ($calls as $c) {
            $ws[] = [$c[0], $this->sendAsync($c[0], $c[1] ?? [], $sessionId)];
        }
        $out = [];
        foreach ($ws as $pair) {
            [$method, $w] = $pair;
            try {
                $m = $this->await($w, 0.0, $method);
                $out[] = self::unwrap($method, (array)$m);
            } catch (Exception $e) {
                if (!$ignoreErrors) {
                    throw $e;
                }
                $out[] = [];
            } finally {
                unset($this->waiters[$w->id]);
            }
        }
        return $out;
    }

    public static function unwrap(string $method, array $m): array
    {
        if (isset($m['error'])) {
            $msg = (string)($m['error']['message'] ?? 'protocol error');
            if (isset($m['error']['data'])) {
                $msg .= ' ' . (string)$m['error']['data'];
            }
            throw new Exception("$method: $msg", (int)($m['error']['code'] ?? 0));
        }
        return (array)($m['result'] ?? []);
    }

    public function on(string $sessionId, \Closure $fn): int
    {
        $id = ++$this->seq;
        $this->listeners[$sessionId][$id] = $fn;
        return $id;
    }

    public function off(string $sessionId, int $id): void
    {
        unset($this->listeners[$sessionId][$id]);
        if (isset($this->listeners[$sessionId]) && $this->listeners[$sessionId] === []) {
            unset($this->listeners[$sessionId]);
        }
    }

    public function offSession(string $sessionId): void
    {
        unset($this->listeners[$sessionId]);
    }

    public function onClose(\Closure $fn): void
    {
        $this->closeListeners[] = $fn;
    }

    protected function handleMessage(array $m): void
    {
        if (isset($m['id'])) {
            $id = (int)$m['id'];
            $w = $this->waiters[$id] ?? null;
            if ($w !== null) {
                unset($this->waiters[$id]);
                $w->resolve($m);
            }
            return;
        }
        $sid = (string)($m['sessionId'] ?? '');
        $ls = $this->listeners[$sid] ?? null;
        if ($ls === null) {
            return;
        }
        $method = (string)($m['method'] ?? '');
        $params = (array)($m['params'] ?? []);
        foreach ($ls as $fn) {
            try {
                $fn($method, $params);
            } catch (\Throwable $e) {
                trigger_error('native_playwright listener error: ' . $e->getMessage(), E_USER_WARNING);
            }
        }
    }

    protected function handleClosed(): void
    {
        if ($this->closed) {
            return;
        }
        $this->closed = true;
        $err = new Exception('Target page, context or browser has been closed');
        foreach ($this->waiters as $w) {
            $w->reject($err);
        }
        $this->waiters = [];
        $fns = $this->closeListeners;
        $this->closeListeners = [];
        foreach ($fns as $fn) {
            try {
                $fn();
            } catch (\Throwable $e) {
            }
        }
        // break transport <-> listener closure cycles so nothing (e.g. Swoole Channels)
        // survives until engine shutdown
        $this->listeners = [];
    }
}
