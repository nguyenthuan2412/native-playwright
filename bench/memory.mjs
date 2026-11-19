import { chromium } from 'playwright-core';
import { execSync } from 'node:child_process';
const b = await chromium.launch({ executablePath: process.env.NATIVE_PLAYWRIGHT_CHROME, args: ['--no-zygote'] });
for (let i = 0; i < 5; i++) {
  const p = await (await b.newContext()).newPage();
  await p.goto(`data:text/html,<h1>page ${i}</h1><script>for(let i=0;i<1e5;i++)window["k"+i%100]=i</script>`);
}
await new Promise(r => setTimeout(r, 800));
const pss = pid => execSync(`/work/bench/pss.sh ${pid}`).toString().trim().split(' ').map(Number);
const [tree, n] = pss(process.pid);
const [self] = execSync(`awk '/^Pss:/{print $2}' /proc/${process.pid}/smaps_rollup`).toString().trim().split(' ').map(Number);
console.log(`node playwright   5 pages | Chrome PSS ${((tree - self) / 1024).toFixed(1)} MB (${n - 1} procs) | Node driver PSS ${(self / 1024).toFixed(1)} MB`);
await b.close();
