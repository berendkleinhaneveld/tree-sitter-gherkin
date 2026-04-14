# tree-sitter-gherkin

[Tree-sitter](https://tree-sitter.github.io) grammar for Gherkin / Cucumber `.feature` files.

Used by the [zed-gherkin](https://github.com/berendkleinhaneveld/zed-gherkin) Zed extension, but usable anywhere tree-sitter grammars are consumed.

## Features

- Feature / Rule / Background / Scenario / Scenario Outline / Examples headers
- Given / When / Then / And / But / `*` steps (English keywords)
- Tags (`@smoke`, `@wip`)
- Data tables with `|` cells (escaped `\|` supported)
- Doc strings (`"""` and ``` ``` ```)
- Quoted strings, numbers, and `<parameter>` placeholders inside step text
- Free-text descriptions and `#` comments

## Develop

```sh
npm install
npx tree-sitter generate
npx tree-sitter test
npx tree-sitter parse path/to/file.feature
```

Corpus tests live in `test/corpus/`. Add a failing test before touching `grammar.js`.

## Use from another tree-sitter consumer

Clone it and point your tool at the directory, or reference it by git URL + commit SHA (tree-sitter CLI, Zed, Neovim, etc. all support this).

## Known limitations

- English keywords only (no localized Gherkin dialects)
- A description line that starts with a step keyword (`Given is a word.`) parses as a step — classic Gherkin ambiguity
- Lines starting with `|`, `@`, or `#` always take the table/tag/comment path, even inside prose

## License

MIT
