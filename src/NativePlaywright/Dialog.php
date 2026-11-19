<?php
namespace NativePlaywright;

final class Dialog
{
    private bool $handled = false;

    public function __construct(private Page $page, private string $type, private string $message, private string $defaultValue)
    {
    }

    /** alert | beforeunload | confirm | prompt */
    public function type(): string
    {
        return $this->type;
    }

    public function message(): string
    {
        return $this->message;
    }

    public function defaultValue(): string
    {
        return $this->defaultValue;
    }

    public function page(): Page
    {
        return $this->page;
    }

    public function isHandled(): bool
    {
        return $this->handled;
    }

    public function accept(string $promptText = ''): void
    {
        $this->handle(true, $promptText);
    }

    public function dismiss(): void
    {
        $this->handle(false, '');
    }

    private function handle(bool $accept, string $text): void
    {
        if ($this->handled) {
            throw new Exception('Cannot accept/dismiss dialog which is already handled!');
        }
        $this->handled = true;
        $p = ['accept' => $accept];
        if ($accept && $this->type === 'prompt') {
            $p['promptText'] = $text;
        }
        $this->page->send('Page.handleJavaScriptDialog', $p);
    }
}
