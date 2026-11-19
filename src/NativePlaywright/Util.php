<?php
namespace NativePlaywright;

final class Util
{
    /** JS: make any value JSON-safe (cycles, DOM nodes, Window, functions -> undefined), like Playwright's serializer. */
    public const SERIALIZER = 'function (v) { const seen = new WeakSet(); const ser = (x, d) => { if (x === undefined) return undefined; if (x === null) return null; '
        . 'const t = typeof x; if (t === "number" || t === "string" || t === "boolean") return x; if (t === "bigint") return x.toString(); '
        . 'if (t === "function" || t === "symbol") return undefined; if (x instanceof Date) return x.toISOString(); if (x instanceof RegExp) return String(x); '
        . 'if (x instanceof Error) return { name: x.name, message: x.message, stack: x.stack }; '
        . 'if ((typeof Node !== "undefined" && x instanceof Node) || x === globalThis || (typeof Window !== "undefined" && x instanceof Window)) return undefined; '
        . 'if (seen.has(x) || d > 100) return undefined; seen.add(x); let out; '
        . 'if (Array.isArray(x) || ArrayBuffer.isView(x)) out = Array.from(x, e => { const r = ser(e, d + 1); return r === undefined ? null : r; }); '
        . 'else if (x instanceof Map) { out = {}; for (const [k, e] of x) { const r = ser(e, d + 1); if (r !== undefined) out[String(k)] = r; } } '
        . 'else if (x instanceof Set) out = [...x].map(e => { const r = ser(e, d + 1); return r === undefined ? null : r; }); '
        . 'else { out = {}; for (const k of Object.keys(x)) { const r = ser(x[k], d + 1); if (r !== undefined) out[k] = r; } } '
        . 'seen.delete(x); return out; }; return ser(v, 0); }';

    /** Playwright URL matcher: glob string, "/regex/flags" string, or Closure(string $url): bool */
    public static function urlMatches(string|\Closure $pattern, string $url, string $baseURL = ''): bool
    {
        if ($pattern instanceof \Closure) {
            return (bool)$pattern($url);
        }
        if ($pattern === '' || $pattern === '**' || $pattern === '**/*') {
            return true;
        }
        if (self::isRegex($pattern)) {
            return preg_match($pattern, $url) === 1;
        }
        if ($baseURL !== '' && !str_contains($pattern, '://') && !str_starts_with($pattern, '*')) {
            $pattern = self::resolveUrl($baseURL, $pattern);
        }
        return preg_match(self::globToRegex($pattern), $url) === 1;
    }

    public static function isRegex(string $s): bool
    {
        if (strlen($s) < 3) {
            return false;
        }
        $d = $s[0];
        if ($d !== '/' && $d !== '#' && $d !== '~') {
            return false;
        }
        $end = strrpos($s, $d);
        if ($end === false || $end === 0) {
            return false;
        }
        $flags = substr($s, $end + 1);
        return preg_match('/^[imsxuUXJ]*$/', $flags) === 1 && @preg_match($s, '') !== false;
    }

    public static function globToRegex(string $glob): string
    {
        $re = '';
        $inGroup = false;
        $n = strlen($glob);
        for ($i = 0; $i < $n; $i++) {
            $c = $glob[$i];
            if ($c === '\\' && $i + 1 < $n) {
                $re .= preg_quote($glob[++$i], '#');
            } elseif ($c === '*') {
                if ($i + 1 < $n && $glob[$i + 1] === '*') {
                    $i++;
                    if ($i + 1 < $n && $glob[$i + 1] === '/') {
                        $i++;
                        $re .= '(?:.*/)?';
                    } else {
                        $re .= '.*';
                    }
                } else {
                    $re .= '[^/]*';
                }
            } elseif ($c === '?') {
                $re .= '\?';
            } elseif ($c === '{') {
                $inGroup = true;
                $re .= '(?:';
            } elseif ($c === '}' && $inGroup) {
                $inGroup = false;
                $re .= ')';
            } elseif ($c === ',' && $inGroup) {
                $re .= '|';
            } else {
                $re .= preg_quote($c, '#');
            }
        }
        return '#^' . $re . '$#';
    }

    public static function resolveUrl(string $base, string $url): string
    {
        if ($base === '' || preg_match('#^[a-z][a-z0-9+.-]*:#i', $url)) {
            return $url;
        }
        $p = parse_url($base);
        if (!is_array($p) || !isset($p['scheme'], $p['host'])) {
            return $url;
        }
        $origin = $p['scheme'] . '://' . $p['host'] . (isset($p['port']) ? ':' . $p['port'] : '');
        if (str_starts_with($url, '//')) {
            return $p['scheme'] . ':' . $url;
        }
        if (str_starts_with($url, '/')) {
            return $origin . $url;
        }
        $path = (string)($p['path'] ?? '/');
        $dir = substr($path, 0, (int)strrpos($path, '/') + 1);
        return $origin . $dir . $url;
    }

    /** CDP RemoteObject (returnByValue) -> PHP value */
    public static function remoteValue(array $ro): mixed
    {
        if (isset($ro['unserializableValue'])) {
            return match ((string)$ro['unserializableValue']) {
                'NaN' => NAN,
                'Infinity' => INF,
                '-Infinity' => -INF,
                '-0' => -0.0,
                default => (string)$ro['unserializableValue'],
            };
        }
        return $ro['value'] ?? null;
    }

    public static function isFunction(string $js): bool
    {
        $s = ltrim($js);
        if (preg_match('/^(async\s+)?function\b/', $s) === 1) {
            return true;
        }
        if (preg_match('/^(async\s*)?(\([^)]*\)|[A-Za-z_$][\w$]*)\s*=>/', $s) === 1) {
            return true;
        }
        return false;
    }

    /** ['a' => 'b'] -> [['name' => 'a', 'value' => 'b']] */
    public static function headersArray(array $headers): array
    {
        $out = [];
        foreach ($headers as $k => $v) {
            $out[] = ['name' => (string)$k, 'value' => (string)$v];
        }
        return $out;
    }

    public static function lowerHeaders(array $h): array
    {
        $out = [];
        foreach ($h as $k => $v) {
            $out[strtolower((string)$k)] = (string)$v;
        }
        return $out;
    }

    /** CSS length ("1cm", "20px", 10) -> inches */
    public static function toInches(mixed $v): float
    {
        if (is_int($v) || is_float($v)) {
            return (float)$v / 96;
        }
        $s = trim((string)$v);
        if (preg_match('/^([\d.]+)\s*(px|in|cm|mm)?$/', $s, $m) !== 1) {
            throw new Exception("Invalid length: $s");
        }
        $n = (float)$m[1];
        return match ($m[2] ?? 'px') {
            'in' => $n,
            'cm' => $n / 2.54,
            'mm' => $n / 25.4,
            default => $n / 96,
        };
    }

    public static function mimeType(string $path): string
    {
        $ext = strtolower(pathinfo($path, PATHINFO_EXTENSION));
        return match ($ext) {
            'html', 'htm' => 'text/html',
            'js', 'mjs' => 'application/javascript',
            'css' => 'text/css',
            'json' => 'application/json',
            'png' => 'image/png',
            'jpg', 'jpeg' => 'image/jpeg',
            'gif' => 'image/gif',
            'svg' => 'image/svg+xml',
            'webp' => 'image/webp',
            'txt' => 'text/plain',
            'pdf' => 'application/pdf',
            'wasm' => 'application/wasm',
            'xml' => 'application/xml',
            default => 'application/octet-stream',
        };
    }
}
