<?php
namespace NativePlaywright;

/** Raw CDP access for things the high-level API does not cover. */
final class CDPSession
{
    /** @var array<int, int> */
    private array $subs = [];

    public function __construct(private Transport $t, private string $sessionId, private float $timeout)
    {
    }

    public function send(string $method, array $params = []): array
    {
        return $this->t->call($method, $params, $this->sessionId, $this->timeout);
    }

    /** $handler(array $params) for every event named $method on this session. */
    public function on(string $method, \Closure $handler): void
    {
        $t = $this->t;
        $this->subs[] = $this->t->on($this->sessionId, static function (string $m, array $p) use ($method, $handler, $t): void {
            if ($m === $method) {
                $t->async(static function () use ($handler, $p): void {
                    $handler($p);
                });
            }
        });
    }

    public function detach(): void
    {
        foreach ($this->subs as $id) {
            $this->t->off($this->sessionId, $id);
        }
        $this->subs = [];
    }
}
