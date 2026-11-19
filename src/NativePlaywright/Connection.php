<?php
namespace NativePlaywright;

/** One Chrome process + its CDP pipe. Raw frames come from C++ (src/native/pipe.cc). */
final class Connection
{
    private const JSON_FLAGS = JSON_UNESCAPED_SLASHES | JSON_UNESCAPED_UNICODE | JSON_PRESERVE_ZERO_FRACTION;

    private mixed $pipe;
    private int $nextId = 1;
    private bool $closed = false;

    public function __construct(string $executable, array $args = [], string $userDataDir = '')
    {
        $p = \pwlite_spawn($executable, $args, $userDataDir);
        if (is_string($p)) {
            throw new Exception($p);
        }
        $this->pipe = $p;
    }

    public function send(string $method, array $params = [], string $sessionId = ''): int
    {
        if ($this->closed) {
            throw new Exception("$method: Target page, context or browser has been closed");
        }
        $id = $this->nextId++;
        $json = '{"id":' . $id
            . ',"method":' . json_encode($method)
            . ',"params":' . ($params === [] ? '{}' : json_encode($params, self::JSON_FLAGS))
            . ($sessionId === '' ? '' : ',"sessionId":' . json_encode($sessionId))
            . '}';
        if (!\pwlite_write($this->pipe, $json)) {
            throw new Exception("$method: Target page, context or browser has been closed");
        }
        return $id;
    }

    /**
     * Decoded messages available now, waiting up to $timeout seconds.
     * Returns null when the browser closed the pipe.
     */
    public function read(float $timeout = 0.0): ?array
    {
        if ($this->closed) {
            return null;
        }
        $frames = \pwlite_read($this->pipe, $timeout);
        if ($frames === null) {
            return null;
        }
        $out = [];
        foreach ($frames as $f) {
            $m = json_decode($f, true, 512);
            if (is_array($m)) {
                $out[] = $m;
            }
        }
        return $out;
    }

    public function fd(): int
    {
        return \pwlite_fd($this->pipe);
    }

    public function pid(): int
    {
        return \pwlite_pid($this->pipe);
    }

    public function isClosed(): bool
    {
        return $this->closed;
    }

    public function close(bool $graceful = true): void
    {
        if ($this->closed) {
            return;
        }
        $this->closed = true;
        \pwlite_close($this->pipe, $graceful);
    }
}
