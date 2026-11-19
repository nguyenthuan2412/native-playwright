#!/bin/sh
# Produce ext/: a self-contained phpize source tree (no TypePHP needed to build it).
#   PHP code  --TypePHP--> C++  +  vendored PHPX runtime (static)  +  config.m4
# Used by PECL (package.xml) and PIE (composer.json "build-path": "ext").
# Run inside the toolchain image:  make dist
set -eu
ROOT=$(cd "$(dirname "$0")/.." && pwd)
OUT="$ROOT/ext"
GEN=$(mktemp -d)
PHPX=${PHPX_HOME:-/opt/phpx}
MODULE=native_playwright

cd "$ROOT"
tpc project.yml --no-progress --dry --build-dir "$GEN" >/dev/null

rm -rf "$OUT/generated" "$OUT/phpx" "$OUT/native"
mkdir -p "$OUT/generated/include" "$OUT/generated/src" "$OUT/phpx/src" "$OUT/phpx/thirdparty" "$OUT/native"

# 1. generated C++ (module entry renamed: typephp_native_playwright -> native_playwright)
cp "$GEN"/include/*.h "$OUT/generated/include/"
for f in "$GEN"/work/src/NativePlaywright/*.cc "$GEN"/init/*.cc; do cp "$f" "$OUT/generated/src/"; done
sed "s/^    \"typephp_${MODULE}\",$/    \"${MODULE}\",/" "$GEN/extension-${MODULE}.cc" > "$OUT/generated/src/extension.cc"
grep -q "^    \"${MODULE}\",$" "$OUT/generated/src/extension.cc"
sed -i "s/\"typephp_${MODULE} support\"/\"${MODULE} support\"/" "$OUT/generated/src/extension.cc"
cp "$ROOT/src/native/pipe.cc" "$OUT/native/pipe.cc"

# 2. PHPX runtime sources (Apache-2.0), compiled statically into the extension
cp -R "$PHPX/include" "$OUT/phpx/include"
for d in core std typephp; do
  mkdir -p "$OUT/phpx/src/$d"
  for f in "$PHPX/src/$d"/*; do
    case "$f" in *_nano.cc) continue ;; esac
    cp "$f" "$OUT/phpx/src/$d/"
  done
done
mkdir -p "$OUT/phpx/src/misc" && cp "$PHPX"/src/misc/*.h "$OUT/phpx/src/misc/"
mkdir -p "$OUT/phpx/thirdparty/mpdecimal/libmpdec" "$OUT/phpx/thirdparty/mpdecimal/libmpdec++" "$OUT/phpx/thirdparty/wren-gc"
for f in "$PHPX"/thirdparty/mpdecimal/libmpdec/*.c "$PHPX"/thirdparty/mpdecimal/libmpdec/*.h; do
  case "$f" in *bench*) continue ;; esac
  cp "$f" "$OUT/phpx/thirdparty/mpdecimal/libmpdec/"
done
cp "$PHPX"/thirdparty/mpdecimal/libmpdec++/decimal.cc "$PHPX"/thirdparty/mpdecimal/libmpdec++/*.hh "$OUT/phpx/thirdparty/mpdecimal/libmpdec++/"
cp -R "$PHPX"/thirdparty/wren-gc/src "$PHPX"/thirdparty/wren-gc/include "$OUT/phpx/thirdparty/wren-gc/"
cp "$PHPX/LICENSE" "$OUT/phpx/LICENSE"
cp "$PHPX/thirdparty/mpdecimal/COPYRIGHT.txt" "$OUT/phpx/thirdparty/mpdecimal/" 2>/dev/null || true

# 3. precompiled-header equivalent, forced into every C++ unit
cat > "$OUT/typephp_pch.hpp" <<'H'
#pragma once
#include <cstring>
#include <phpx.h>
#include <phpx_helper.h>
#include <phpx_big_int.h>
#include <phpx_big_float.h>
#include <phpx_decimal.h>
#include <phpx_python.h>
#include <typephp_helper.h>
#include <typephp_fiber_generator.h>
#include <phpx_std.h>
H

# 4. config.m4 with the explicit source list
cd "$OUT"
CXX_SRCS=$( (ls generated/src/*.cc native/*.cc phpx/src/core/*.cc phpx/src/std/*.cc phpx/src/typephp/*.cc phpx/thirdparty/mpdecimal/libmpdec++/*.cc) | tr '\n' ' ')
C_SRCS=$( (ls phpx/thirdparty/mpdecimal/libmpdec/*.c phpx/thirdparty/wren-gc/src/*.c) | tr '\n' ' ')
sed -e "s|@CXX_SOURCES@|$CXX_SRCS|" -e "s|@C_SOURCES@|$C_SRCS|" "$ROOT/tools/config.m4.in" > config.m4
VERSION=$(sed -n 's/^version: *//p' "$ROOT/project.yml")
cp "$ROOT/LICENSE" "$OUT/LICENSE"
php "$ROOT/tools/package-xml.php" "$OUT" "$VERSION"
rm -rf "$GEN"
echo "ext/ ready: $(ls generated/src | wc -l) generated units, $(echo $CXX_SRCS | wc -w) C++ + $(echo $C_SRCS | wc -w) C sources"
