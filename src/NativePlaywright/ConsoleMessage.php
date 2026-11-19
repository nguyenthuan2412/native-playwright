<?php
namespace NativePlaywright;

final class ConsoleMessage
{
    public function __construct(private ?Page $page, private string $type, private string $text, private array $args, private array $location)
    {
    }

    /** log | debug | info | error | warning | dir | table | trace | clear | assert | ... */
    public function type(): string
    {
        return $this->type;
    }

    public function text(): string
    {
        return $this->text;
    }

    /** Argument values (JSON-serializable ones by value, others by description). */
    public function args(): array
    {
        return $this->args;
    }

    /** ['url' => ..., 'lineNumber' => ..., 'columnNumber' => ...] */
    public function location(): array
    {
        return $this->location;
    }

    public function page(): ?Page
    {
        return $this->page;
    }

    public function __toString(): string
    {
        return $this->text;
    }
}
