tree-sitter-maparoni
===========================

[![CI Status](https://github.com/maparoni/tree-sitter-maparoni/actions/workflows/ci.yml/badge.svg)](https://github.com/maparoni/tree-sitter-maparoni/actions/workflows/ci.yml)

Grammar of [Maparoni](https://maparoni.app)'s [expressions](https://maparoni.app/guide/advanced/formulas.html) for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

Makes a good basis for grammars of other expressions that are built using [nicklockwood/Expression](https://github.com/nicklockwood/Expression).

## Help

### Editing

The grammar is defined in `grammar.js`, mostly be specifying all those rules.

Rules that are prefixed with a `_` will not be returned by the parser. Be mindful about that, when defining the grammar as how to build these rules depends on how they'll be used.

### Testing

- When adding new functionality add new tests in the `test` directory.
- Run `tree-sitter test` to run the suite from the `test` directory, and check that it all passes.

### Whenever this was changed do

- Run `tree-sitter generate` to build the C files (in `src`), that can be used with anything that can integrate C code
- Run `tree-sitter build-wasm` to build the WASM file, that can be used with JS-based tree-sitter highlighters
