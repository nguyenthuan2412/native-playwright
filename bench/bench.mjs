// node bench/bench.mjs [N]   (playwright-core, same Chromium binary & flags)
import { chromium } from 'playwright-core';
import { execSync } from 'node:child_process';

const n = Number(process.argv[2] ?? 2000);
let t = performance.now();
const b = await chromium.launch({ executablePath: process.env.NATIVE_PLAYWRIGHT_CHROME, args: ['--no-zygote', '--no-sandbox'] }); b.version();
const launch = performance.now() - t;
const p = await b.newPage();
await p.goto('data:text/html,<title>x</title>');

for (let i = 0; i < 50; i++) await p.evaluate('1+1');
t = performance.now();
for (let i = 0; i < n; i++) await p.evaluate('1+1');
const ev = (performance.now() - t) / n * 1000;

t = performance.now();
for (let i = 0; i < 50; i++) await p.goto(`data:text/html,<p>${i}</p>`);
const go = (performance.now() - t) / 50;

const big = 'x'.repeat(1_000_000);
t = performance.now();
for (let i = 0; i < 20; i++) await p.evaluate(`'${big}'.length`);
const bigReq = (performance.now() - t) / 20;
t = performance.now();
for (let i = 0; i < 20; i++) await p.evaluate(`'x'.repeat(1000000)`);
const bigResp = (performance.now() - t) / 20;

const rss = Number(execSync(`ps -o rss= -p ${process.pid}`).toString().trim()) / 1024;
console.log(`node-pw  launch ${launch.toFixed(0)} ms | evaluate ${ev.toFixed(1)} µs/op | goto ${go.toFixed(2)} ms | 1MB req ${bigReq.toFixed(2)} ms | 1MB resp ${bigResp.toFixed(2)} ms | driver RSS ${rss.toFixed(1)} MB (node process)`);
await b.close();
