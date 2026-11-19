<?php
namespace NativePlaywright;

/** An uncaught exception in the page ('pageerror' event). */
final class JSError
{
    public function __construct(private string $name, private string $message, private string $stack)
    {
    }

    public function name(): string
    {
        return $this->name;
    }

    public function message(): string
    {
        return $this->message;
    }

    public function stack(): string
    {
        return $this->stack;
    }

    public function __toString(): string
    {
        return $this->stack !== '' ? $this->stack : $this->name . ': ' . $this->message;
    }
}
