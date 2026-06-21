#!/usr/bin/env bash
# Generic "run command" test: passes on exit code 0, fails on non-zero.
# Swap in any command you like. This one just checks the repo has a README.
if [ -f README.md ]; then
  echo "command check passed"
  exit 0
fi
echo "command check failed: README.md missing" >&2
exit 1
