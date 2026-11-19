PHP   ?= 8.5
IMAGE  = native-playwright-dev:php$(PHP)
OUT    = build/php$(PHP)
RUN    = docker run --rm -t -v "$(CURDIR)":/work -w /work $(IMAGE)

.PHONY: image build test bench memory shell all dist dist-test

image:            ## toolchain image (make image PHP=8.4)
	docker build --build-arg PHP_VERSION=$(PHP) -t $(IMAGE) .

build:            ## TypePHP: src/ -> build/php$(PHP)/native_playwright.so
	$(RUN) sh -c 'tpc project.yml --no-progress -O2 -j8 && mkdir -p $(OUT) && mv native_playwright.so $(OUT)/native_playwright.so'

test: build       ## e2e suite, blocking + Swoole
	$(RUN) sh -c 'EXT=/work/$(OUT)/native_playwright.so tests/run.sh'

bench: build      ## native_playwright vs Playwright (Node), same Chromium
	$(RUN) sh -c 'php -d extension=/work/$(OUT)/native_playwright.so bench/bench.php 2000 && ln -sfn /opt/nodebench/node_modules bench/node_modules && node bench/bench.mjs 2000'

memory: build     ## PSS of driver + Chrome, native_playwright vs Playwright
	$(RUN) sh -c 'php -d extension=/work/$(OUT)/native_playwright.so bench/memory.php && ln -sfn /opt/nodebench/node_modules bench/node_modules && node bench/memory.mjs'

all:              ## build + test on PHP 8.4 and 8.5
	$(MAKE) image test PHP=8.4
	$(MAKE) image test PHP=8.5

shell:
	docker run --rm -it -v "$(CURDIR)":/work -w /work $(IMAGE) bash

dist:             ## regenerate ext/ (phpize source tree for PECL/PIE)
	$(RUN) tools/make-dist.sh

dist-test:        ## build ext/ with plain phpize/configure/make, then run e2e
	$(RUN) sh -c 'set -e; rm -rf /tmp/b && cp -R ext /tmp/b && cd /tmp/b && phpize >/dev/null && ./configure --enable-native-playwright >/dev/null && make -j8 >/dev/null && cd /work && EXT=/tmp/b/modules/native_playwright.so tests/run.sh'
