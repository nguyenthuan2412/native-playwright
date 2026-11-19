<?php
namespace NativePlaywright;

final class Request
{
    public ?Response $response = null;
    public ?string $failure = null;
    public ?Request $redirectedTo = null;
    public float $startTime = 0.0;
    public float $endTime = -1.0;
    /** set when the request finished, failed, or got a response */
    public bool $finished = false;

    public function __construct(
        private ?Page $page,
        public readonly string $id,
        private string $url,
        private string $method,
        private array $headers,
        private ?string $postData,
        private string $resourceType,
        private string $frameId,
        private bool $isNavigation,
        private ?Request $redirectedFrom = null,
    ) {
        $this->startTime = microtime(true);
        if ($redirectedFrom !== null) {
            $redirectedFrom->redirectedTo = $this;
        }
    }

    public function url(): string
    {
        return $this->url;
    }

    public function method(): string
    {
        return $this->method;
    }

    /** lower-cased header names */
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

    public function postData(): ?string
    {
        if ($this->postData === null && $this->page !== null && $this->method !== 'GET') {
            try {
                $this->postData = (string)($this->page->send('Network.getRequestPostData', ['requestId' => $this->id])['postData'] ?? '');
            } catch (Exception $e) {
            }
        }
        return $this->postData;
    }

    public function postDataJSON(): mixed
    {
        $d = $this->postData();
        if ($d === null) {
            return null;
        }
        $ct = $this->headers()['content-type'] ?? '';
        if (str_contains($ct, 'application/x-www-form-urlencoded')) {
            $out = [];
            parse_str($d, $out);
            return $out;
        }
        return json_decode($d, true);
    }

    public function resourceType(): string
    {
        return $this->resourceType;
    }

    public function isNavigationRequest(): bool
    {
        return $this->isNavigation;
    }

    public function frameId(): string
    {
        return $this->frameId;
    }

    public function frame(): ?Frame
    {
        return $this->page?->frameById($this->frameId);
    }

    public function page(): ?Page
    {
        return $this->page;
    }

    public function redirectedFrom(): ?Request
    {
        return $this->redirectedFrom;
    }

    public function redirectedTo(): ?Request
    {
        return $this->redirectedTo;
    }

    /** null if not yet received / failed. Does not wait (use page->expectResponse for that). */
    public function response(): ?Response
    {
        return $this->response;
    }

    /** ['errorText' => ...] or null */
    public function failure(): ?array
    {
        return $this->failure === null ? null : ['errorText' => $this->failure];
    }

    public function timing(): array
    {
        return ['startTime' => $this->startTime * 1000, 'responseEnd' => $this->endTime < 0 ? -1 : ($this->endTime - $this->startTime) * 1000];
    }

    public function sizes(): array
    {
        return ['requestBodySize' => strlen((string)$this->postData), 'responseBodySize' => $this->response?->encodedLength ?? 0];
    }
}
