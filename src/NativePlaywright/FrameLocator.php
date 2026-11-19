<?php
namespace NativePlaywright;

final class FrameLocator
{
    public function __construct(private Frame $frame, private string $frameSelector)
    {
    }

    private function inside(string $sel): Locator
    {
        return new Locator($this->frame, $this->frameSelector . Locator::ENTER_FRAME . $sel);
    }

    public function locator(string|Locator $selector, array $options = []): Locator
    {
        $sel = $selector instanceof Locator ? $selector->selector() : $selector;
        return $this->inside($sel)->filter($options);
    }

    public function getByText(string $text, array $options = []): Locator
    {
        return $this->inside(Locator::byText($text, (bool)($options['exact'] ?? false)));
    }

    public function getByRole(string $role, array $options = []): Locator
    {
        return $this->inside(Locator::byRole($role, $options));
    }

    public function getByLabel(string $text, array $options = []): Locator
    {
        return $this->inside(Locator::byLabel($text, (bool)($options['exact'] ?? false)));
    }

    public function getByPlaceholder(string $text, array $options = []): Locator
    {
        return $this->inside(Locator::byAttr('placeholder', $text, (bool)($options['exact'] ?? false)));
    }

    public function getByAltText(string $text, array $options = []): Locator
    {
        return $this->inside(Locator::byAttr('alt', $text, (bool)($options['exact'] ?? false)));
    }

    public function getByTitle(string $text, array $options = []): Locator
    {
        return $this->inside(Locator::byAttr('title', $text, (bool)($options['exact'] ?? false)));
    }

    public function getByTestId(string $testId): Locator
    {
        return $this->inside(Locator::byTestId($testId));
    }

    public function frameLocator(string $selector): FrameLocator
    {
        return new FrameLocator($this->frame, $this->frameSelector . Locator::ENTER_FRAME . $selector);
    }

    public function first(): FrameLocator
    {
        return new FrameLocator($this->frame, $this->frameSelector . ' >> nth=0');
    }

    public function last(): FrameLocator
    {
        return new FrameLocator($this->frame, $this->frameSelector . ' >> nth=-1');
    }

    public function nth(int $index): FrameLocator
    {
        return new FrameLocator($this->frame, $this->frameSelector . ' >> nth=' . $index);
    }

    public function owner(): Locator
    {
        return new Locator($this->frame, $this->frameSelector);
    }
}
