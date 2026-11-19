#!/bin/sh
# Runs the e2e suite in both modes against two local origins.
cd "$(dirname "$0")/.."
php -S 127.0.0.1:8001 -t tests/www >/dev/null 2>&1 &
S1=$!
php -S 127.0.0.1:8002 -t tests/www >/dev/null 2>&1 &
S2=$!
sleep 0.5
rc=0
php -d extension=${EXT:-$PWD/native_playwright.so} tests/e2e.php || rc=1
php -d extension=${EXT:-$PWD/native_playwright.so} tests/e2e.php swoole || rc=1
kill $S1 $S2
exit $rc
