#!/usr/bin/env bash
# Compile every .cpp in labs/ and projects/ with g++ (C++17) into ./bin
set -u
cd "$(dirname "$0")"
mkdir -p bin
ok=0; fail=0
while IFS= read -r -d '' f; do
  out="bin/$(echo "${f%.cpp}" | tr '/' '_').exe"
  if g++ -std=c++17 -Wall -O0 -o "$out" "$f" 2>"$out.log"; then
    ok=$((ok+1)); rm -f "$out.log"
  else
    fail=$((fail+1)); echo "FAILED: $f (see $out.log)"
  fi
done < <(find labs projects -name '*.cpp' -print0 | sort -z)
echo "compiled: $ok, failed: $fail"
