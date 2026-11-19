<?php
namespace NativePlaywright;

final class Route
{
    private bool $handled = false;
    /** set by fallback(): overrides for the next handler */
    public array $fallbackOverrides = [];
    public bool $fellBack = false;

    public function __construct(private Page $page, private string $interceptId, private Request $request)
    {
    }

    public function request(): Request
    {
        return $this->request;
    }

    public function isHandled(): bool
    {
        return $this->handled;
    }

    private function claim(string $op): void
    {
        if ($this->handled) {
            throw new Exception("Route is already handled! ($op)");
        }
        $this->handled = true;
    }

    /** errorCode: aborted|accessdenied|addressunreachable|blockedbyclient|blockedbyresponse|connectionaborted|connectionclosed|connectionfailed|connectionrefused|connectionreset|internetdisconnected|namenotresolved|timedout|failed */
    public function abort(string $errorCode = 'failed'): void
    {
        $this->claim('abort');
        $map = [
            'aborted' => 'Aborted', 'accessdenied' => 'AccessDenied', 'addressunreachable' => 'AddressUnreachable',
            'blockedbyclient' => 'BlockedByClient', 'blockedbyresponse' => 'BlockedByResponse',
            'connectionaborted' => 'ConnectionAborted', 'connectionclosed' => 'ConnectionClosed',
            'connectionfailed' => 'ConnectionFailed', 'connectionrefused' => 'ConnectionRefused',
            'connectionreset' => 'ConnectionReset', 'internetdisconnected' => 'InternetDisconnected',
            'namenotresolved' => 'NameNotResolved', 'timedout' => 'TimedOut', 'failed' => 'Failed',
        ];
        $this->page->send('Fetch.failRequest', ['requestId' => $this->interceptId, 'errorReason' => $map[strtolower($errorCode)] ?? 'Failed']);
    }

    /** overrides: url, method, headers (assoc), postData */
    public function continue(array $overrides = []): void
    {
        $this->claim('continue');
        $overrides = array_merge($this->fallbackOverrides, $overrides);
        $p = ['requestId' => $this->interceptId];
        if (isset($overrides['url'])) {
            $p['url'] = (string)$overrides['url'];
        }
        if (isset($overrides['method'])) {
            $p['method'] = (string)$overrides['method'];
        }
        if (isset($overrides['headers'])) {
            $p['headers'] = Util::headersArray((array)$overrides['headers']);
        }
        if (isset($overrides['postData'])) {
            $p['postData'] = base64_encode((string)$overrides['postData']);
        }
        $this->page->send('Fetch.continueRequest', $p);
    }

    /** Let the next matching route handler (or the network) take it. */
    public function fallback(array $overrides = []): void
    {
        if ($this->handled) {
            throw new Exception('Route is already handled! (fallback)');
        }
        $this->fellBack = true;
        $this->fallbackOverrides = array_merge($this->fallbackOverrides, $overrides);
    }

    /** options: status, headers, contentType, body (string), json (mixed), path */
    public function fulfill(array $options = []): void
    {
        $this->claim('fulfill');
        $headers = (array)($options['headers'] ?? []);
        $body = '';
        if (array_key_exists('json', $options)) {
            $body = (string)json_encode($options['json'], JSON_UNESCAPED_SLASHES | JSON_UNESCAPED_UNICODE);
            $headers['content-type'] = $options['contentType'] ?? 'application/json';
        } elseif (isset($options['path'])) {
            $path = (string)$options['path'];
            $body = (string)file_get_contents($path);
            $headers['content-type'] = $options['contentType'] ?? Util::mimeType($path);
        } else {
            $body = (string)($options['body'] ?? '');
            if (isset($options['contentType'])) {
                $headers['content-type'] = (string)$options['contentType'];
            }
        }
        $lower = Util::lowerHeaders($headers);
        if (!isset($lower['content-length'])) {
            $headers['content-length'] = (string)strlen($body);
        }
        $status = (int)($options['status'] ?? 200);
        $this->page->send('Fetch.fulfillRequest', [
            'requestId' => $this->interceptId,
            'responseCode' => $status,
            'responseHeaders' => Util::headersArray($headers),
            'body' => base64_encode($body),
        ]);
    }
}
