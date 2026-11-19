<?php
namespace NativePlaywright;

final class Response
{
    public int $encodedLength = 0;
    private ?string $body = null;

    public function __construct(
        private ?Page $page,
        private Request $request,
        private string $url,
        private int $status,
        private string $statusText,
        private array $headers,
        private string $remoteIp = '',
        private int $remotePort = 0,
        private array $securityDetails = [],
        private bool $fromServiceWorker = false,
    ) {
    }

    public function url(): string
    {
        return $this->url;
    }

    public function status(): int
    {
        return $this->status;
    }

    public function statusText(): string
    {
        return $this->statusText;
    }

    public function ok(): bool
    {
        return $this->status === 0 || ($this->status >= 200 && $this->status <= 299);
    }

    public function headers(): array
    {
        return Util::lowerHeaders($this->headers);
    }

    public function allHeaders(): array
    {
        return $this->headers();
    }

    public function headerValue(string $name): ?string
    {
        return $this->headers()[strtolower($name)] ?? null;
    }

    public function headerValues(string $name): array
    {
        $v = $this->headerValue($name);
        return $v === null ? [] : explode("\n", $v);
    }

    public function request(): Request
    {
        return $this->request;
    }

    public function frame(): ?Frame
    {
        return $this->request->frame();
    }

    public function fromServiceWorker(): bool
    {
        return $this->fromServiceWorker;
    }

    public function serverAddr(): ?array
    {
        return $this->remoteIp === '' ? null : ['ipAddress' => $this->remoteIp, 'port' => $this->remotePort];
    }

    public function securityDetails(): ?array
    {
        return $this->securityDetails === [] ? null : $this->securityDetails;
    }

    /** Waits until the body is fully received. */
    public function finished(): ?string
    {
        $page = $this->page;
        if ($page === null) {
            return null;
        }
        $req = $this->request;
        $page->waitForCondition(static fn(): bool => $req->finished, $page->timeoutSeconds(), 'response.finished');
        return $req->failure;
    }

    public function body(): string
    {
        if ($this->body !== null) {
            return $this->body;
        }
        if ($this->page === null) {
            return '';
        }
        $this->finished();
        $r = $this->page->send('Network.getResponseBody', ['requestId' => $this->request->id]);
        $b = (string)($r['body'] ?? '');
        $this->body = !empty($r['base64Encoded']) ? (string)base64_decode($b) : $b;
        return $this->body;
    }

    public function text(): string
    {
        return $this->body();
    }

    public function json(): mixed
    {
        return json_decode($this->body(), true, 512, JSON_THROW_ON_ERROR);
    }
}
