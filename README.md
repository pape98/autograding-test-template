# Autograding test template

A minimal, dependency-free template for exercising Classmoji autograding test
types. Everything uses Node's built-in test runner, so `npm install` is a no-op.

## What's here

| File | Method to test | Try it |
| --- | --- | --- |
| `add.js` + `add.test.js` | **Run command / Node** | `npm test` (runs `node --test`) |
| `hello.js` | **Input / output** (no input) | `node hello.js` → `Hello, World!` |
| `calculator.js` | **Input / output** (with input) | `echo "1 + 2" \| node calculator.js` → `3` |

## Suggested Classmoji tests

- **Node** — setup `npm install`, run `npm test`. Passes when all `add` tests pass.
- **Input/output (no input)** — run `node hello.js`, expected output `Hello, World!`, comparison `Included`.
- **Input/output (with input)** — run `node calculator.js`, input `1 + 2`, expected output `3`, comparison `Included`.

To see a **failing** run, change the return in `add.js` (e.g. `a - b`) and push.
