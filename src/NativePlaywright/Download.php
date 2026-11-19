<?php
namespace NativePlaywright;

final class Download
{
    /** inProgress | completed | canceled */
    public string $state = 'inProgress';
    public int $receivedBytes = 0;
    public int $totalBytes = 0;

    public function __construct(
        private Page $page,
        private BrowserContext $context,
        private string $guid,
        private string $url,
        private string $suggestedFilename,
        private string $dir,
    ) {
    }

    public function guid(): string
    {
        return $this->guid;
    }

    public function url(): string
    {
        return $this->url;
    }

    public function suggestedFilename(): string
    {
        return $this->suggestedFilename;
    }

    public function page(): Page
    {
        return $this->page;
    }

    private function waitDone(): void
    {
        $self = $this;
        $this->page->waitForCondition(static fn(): bool => $self->state !== 'inProgress', 0.0, 'download');
    }

    /** Path of the downloaded file (waits for completion); null if it failed. */
    public function path(): ?string
    {
        $this->waitDone();
        return $this->state === 'completed' ? $this->dir . '/' . $this->guid : null;
    }

    public function failure(): ?string
    {
        $this->waitDone();
        return $this->state === 'completed' ? null : $this->state;
    }

    public function saveAs(string $path): void
    {
        $src = $this->path();
        if ($src === null) {
            throw new Exception('Download failed: ' . $this->state);
        }
        $dir = dirname($path);
        if (!is_dir($dir)) {
            mkdir($dir, 0777, true);
        }
        if (!copy($src, $path)) {
            throw new Exception("Cannot save download to $path");
        }
    }

    public function createReadStream(): mixed
    {
        $p = $this->path();
        return $p === null ? null : fopen($p, 'rb');
    }

    public function cancel(): void
    {
        if ($this->state !== 'inProgress') {
            return;
        }
        $this->context->browser()->send('Browser.cancelDownload', ['guid' => $this->guid, 'browserContextId' => $this->context->id()]);
    }

    public function delete(): void
    {
        $p = $this->path();
        if ($p !== null && is_file($p)) {
            unlink($p);
        }
    }
}
