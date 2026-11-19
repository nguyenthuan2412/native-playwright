<?php
// Signatures of the C++ functions in pipe.cc (bodies live in C++).

/** @return mixed ChromePipe resource, or string error */
function pwlite_spawn(string $exe, array $args, string $userDataDir): mixed
{
}

function pwlite_write(mixed $pipe, string $json): bool
{
}

/** @return mixed list<string> frames, or null on EOF */
function pwlite_read(mixed $pipe, float $timeout): mixed
{
}

function pwlite_fd(mixed $pipe): int
{
}

function pwlite_pid(mixed $pipe): int
{
}

function pwlite_close(mixed $pipe, bool $graceful): void
{
}
