#!/bin/sh
# Sum PSS (shared pages split fairly) of a process and all descendants. Linux only.
all=""; pids="$1"
while [ -n "$pids" ]; do
  next=""
  for p in $pids; do all="$all $p"; next="$next $(pgrep -P "$p" 2>/dev/null)"; done
  pids=$(echo $next)
done
t=0; n=0
for p in $all; do
  v=$(awk '/^Pss:/{print $2}' /proc/$p/smaps_rollup 2>/dev/null); t=$((t + ${v:-0})); n=$((n+1))
done
echo "$t $n"
