# Toolchain image: PHP (8.4 / 8.5, NTS) + Swoole + PHPX + TypePHP + chrome-headless-shell.
# Builds the native_playwright extension with TypePHP (php -> C++17 -> native_playwright.so).
#   docker build --build-arg PHP_VERSION=8.4 -t native-playwright-dev:php8.4 .
ARG PHP_VERSION=8.5
FROM php:${PHP_VERSION}-cli

ENV DEBIAN_FRONTEND=noninteractive \
    PHPX_HOME=/opt/phpx \
    TYPEPHP_HOME=/opt/typephp \
    LD_LIBRARY_PATH=/opt/phpx/lib \
    NATIVE_PLAYWRIGHT_CHROME=/usr/lib/chromium/chromium-headless-shell \
    COMPOSER_ALLOW_SUPERUSER=1

RUN apt-get update && apt-get install -y --no-install-recommends \
        build-essential cmake pkg-config git unzip ca-certificates patch procps \
        libgmp-dev libmpfr-dev libssl-dev libbrotli-dev libzip-dev \
        chromium chromium-headless-shell fonts-liberation \
    && rm -rf /var/lib/apt/lists/*

# Swoole (coroutine runtime) + extensions TypePHP's compiler likes to have.
RUN docker-php-ext-install -j"$(nproc)" gmp pcntl \
    && pecl install -D 'enable-sockets="no" enable-openssl="yes" enable-mysqlnd="no" enable-swoole-curl="no" enable-cares="no" enable-brotli="yes" enable-zstd="no"' swoole \
    && docker-php-ext-enable swoole \
    && rm -rf /tmp/pear \
    && printf 'memory_limit=4G\nprecision=17\n' > /usr/local/etc/php/conf.d/zz-typephp.ini

# Temporary php_hash.h C++ fix (php/php-src#22935), same as TypePHP CI.
COPY docker/php-hash-cxx.patch /tmp/php-hash-cxx.patch
RUN inc="$(php-config --include-dir)"; \
    if grep -Fq 'char *base = ecalloc(' "$inc/ext/hash/php_hash.h"; then \
        patch --directory="$inc" --strip=1 < /tmp/php-hash-cxx.patch; fi; \
    rm /tmp/php-hash-cxx.patch

COPY --from=composer:2 /usr/bin/composer /usr/bin/composer

# PHPX: C++ runtime the generated code links against.
RUN git clone --depth 1 https://github.com/swoole/phpx "$PHPX_HOME" \
    && cmake -S "$PHPX_HOME" -B "$PHPX_HOME/build" \
        -D CMAKE_BUILD_TYPE=Release -D BUILD_TESTS=OFF -D BUILD_EXT=OFF \
        -D php_dir="$(php-config --prefix)" \
    && cmake --build "$PHPX_HOME/build" --target phpx --parallel "$(nproc)" \
    && test -f "$PHPX_HOME/lib/libphpx.so"

# TypePHP compiler (run interpreted via bin/tpc.php; no embed libphp needed for ext mode).
RUN git clone --depth 1 https://github.com/swoole/typephp "$TYPEPHP_HOME" \
    && cd "$TYPEPHP_HOME" && composer install --prefer-dist --no-progress --no-interaction \
    && ln -s "$TYPEPHP_HOME/bin/tpc.php" /usr/local/bin/tpc

WORKDIR /work
CMD ["bash"]

# Benchmark-only: Node + playwright-core to compare against (native_playwright itself never uses Node).
RUN apt-get update && apt-get install -y --no-install-recommends nodejs npm \
    && rm -rf /var/lib/apt/lists/* \
    && mkdir -p /opt/nodebench && cd /opt/nodebench && npm init -y >/dev/null && npm i playwright-core >/dev/null
ENV NODE_PATH=/opt/nodebench/node_modules
