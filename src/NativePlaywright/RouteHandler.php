<?php
namespace NativePlaywright;

final class RouteHandler
{
    public int $count = 0;

    public function __construct(public readonly string|\Closure $url, public readonly \Closure $handler, public readonly int $times = 0)
    {
    }

    public function matches(string $url, string $baseURL): bool
    {
        return Util::urlMatches($this->url, $url, $baseURL);
    }

    public function expired(): bool
    {
        return $this->times > 0 && $this->count >= $this->times;
    }
}
