/**
 * @file Gherkin grammar for tree-sitter
 * English-only. Line-oriented.
 */

module.exports = grammar({
  name: 'gherkin',

  extras: $ => [/[ \t]/],

  word: $ => $._word,

  conflicts: $ => [],

  rules: {
    source_file: $ => repeat($._line),

    _line: $ => choice(
      seq($.tag_line, $._nl),
      seq($.feature_header, $._nl),
      seq($.scenario_header, $._nl),
      seq($.background_header, $._nl),
      seq($.rule_header, $._nl),
      seq($.examples_header, $._nl),
      seq($.step, $._nl),
      seq($.table_row, $._nl),
      seq($.comment, $._nl),
      $.docstring,
      seq($.description, $._nl),
      $._nl,
    ),

    _nl: $ => /\r?\n/,

    // ---------- tags ----------
    tag_line: $ => repeat1($.tag),
    tag: $ => /@[^\s@]+/,

    // ---------- headers ----------
    // Each *_keyword token bakes in the trailing ':' so it wins length-ties
    // against the generic `_word` regex used by `description`.
    feature_header: $ => seq(
      field('keyword', $.feature_keyword),
      optional(field('name', $.header_text)),
    ),
    feature_keyword: $ => token('Feature:'),

    rule_header: $ => seq(
      field('keyword', $.rule_keyword),
      optional(field('name', $.header_text)),
    ),
    rule_keyword: $ => token('Rule:'),

    background_header: $ => seq(
      field('keyword', $.background_keyword),
      optional(field('name', $.header_text)),
    ),
    background_keyword: $ => token('Background:'),

    scenario_header: $ => seq(
      field('keyword', $.scenario_keyword),
      optional(field('name', $.header_text)),
    ),
    scenario_keyword: $ => choice(
      token('Scenario:'),
      token('Example:'),
      token(/Scenario[ \t]+Outline[ \t]*:/),
      token(/Scenario[ \t]+Template[ \t]*:/),
    ),

    examples_header: $ => seq(
      field('keyword', $.examples_keyword),
      optional(field('name', $.header_text)),
    ),
    examples_keyword: $ => choice(token('Examples:'), token('Scenarios:')),

    header_text: $ => repeat1($._word),

    // ---------- steps ----------
    step: $ => seq(
      field('keyword', $.step_keyword),
      optional(field('text', $.step_text)),
    ),
    step_keyword: $ => choice('Given', 'When', 'Then', 'And', 'But', '*'),
    step_text: $ => repeat1(choice($.parameter, $.string, $.number, $._word)),

    // Scenario Outline placeholder, e.g. <start>
    parameter: $ => token(prec(5, /<[^>\n\r]*>/)),

    // String literal — double- or single-quoted, no line breaks.
    string: $ => token(prec(5, choice(
      /"[^"\n\r]*"/,
      /'[^'\n\r]*'/,
    ))),

    // Integer or float (optionally signed).
    number: $ => token(prec(5, /-?\d+(\.\d+)?/)),

    // ---------- tables ----------
    table_row: $ => seq(
      '|',
      repeat1(seq(optional($.table_cell), '|')),
    ),
    table_cell: $ => /[^|\n\r]+/,

    // ---------- doc strings ----------
    docstring: $ => choice(
      seq($._triple_dquote, $._nl, repeat($._docstring_line), $._triple_dquote, $._nl),
      seq($._triple_backtick, $._nl, repeat($._docstring_line), $._triple_backtick, $._nl),
    ),
    _triple_dquote: $ => '"""',
    _triple_backtick: $ => '```',
    _docstring_line: $ => seq($.docstring_content, $._nl),
    docstring_content: $ => /[^\n\r]+/,

    // ---------- comments ----------
    comment: $ => token(seq('#', /[^\n\r]*/)),

    // ---------- description ----------
    description: $ => repeat1($._word),

    // plain word token (non-whitespace). Used for the `word` directive so
    // literal keywords like `Given` only match as whole words.
    _word: $ => /[^\s|@#"'`<][^\s]*/,
  },
});
