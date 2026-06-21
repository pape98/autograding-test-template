# Autograding test bed

Scripts for exercising **every** Classmoji autograding method, all runnable on the
`ubuntu-latest` GitHub Actions runner with **no extra installs** (Node, Python 3,
Java JDK, and gcc/g++ are preinstalled).

## Run-command / language graders (pass = exit code 0)

| Method | Test name | Setup command | Run command |
| --- | --- | --- | --- |
| **Node** | Node add | `npm install` | `npm test` |
| **Run command** | File check | _(none)_ | `bash command/check.sh` |
| **Python** | Python add | _(none)_ | `cd python && python3 -m unittest` |
| **Java** | Java add | _(none)_ | `cd java && javac Add.java && java Add` |
| **C** | C add | _(none)_ | `cd c && gcc add.c -o a.out && ./a.out` |
| **C++** | C++ add | _(none)_ | `cd cpp && g++ add.cpp -o a.out && ./a.out` |

## Input / output graders (compare stdout to expected)

| Test name | Run command | Input | Expected output | Comparison |
| --- | --- | --- | --- | --- |
| Hello (included) | `node hello.js` | _(empty)_ | `Hello, World!` | Included |
| Calculator (input) | `node calculator.js` | `1 + 2` | `3` | Included |
| Greeting (regex) | `node hello.js` | _(empty)_ | `^Hello, .+!$` | Regex |
| Python hello | `python3 python/hello.py` | _(empty)_ | `Hello, World!` | Included |

> **Exact vs Included:** `console.log` / `print` add a trailing newline, so prefer
> **Included** (or **Regex**) unless your program writes output with no newline.

## Make a test fail (to see red)

- **Node / Python / Java / C / C++:** change the `add` implementation (e.g. `a - b`).
- **Run command:** rename or remove `README.md`.
- **Input/output:** change the expected output in the test config.

## What's in here

- `add.js` + `add.test.js`, `hello.js`, `calculator.js`, `package.json` — Node + I/O
- `python/add.py` + `test_add.py`, `python/hello.py` — Python (built-in `unittest`)
- `java/Add.java`, `c/add.c`, `cpp/add.cpp` — self-checking programs (exit non-zero on failure)
- `command/check.sh` — generic run-command example
