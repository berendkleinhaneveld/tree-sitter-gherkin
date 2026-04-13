#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  sym__word = 1,
  sym__nl = 2,
  sym_tag = 3,
  sym_feature_keyword = 4,
  sym_rule_keyword = 5,
  sym_background_keyword = 6,
  anon_sym_Scenario_COLON = 7,
  anon_sym_Example_COLON = 8,
  aux_sym_scenario_keyword_token1 = 9,
  aux_sym_scenario_keyword_token2 = 10,
  anon_sym_Examples_COLON = 11,
  anon_sym_Scenarios_COLON = 12,
  anon_sym_Given = 13,
  anon_sym_When = 14,
  anon_sym_Then = 15,
  anon_sym_And = 16,
  anon_sym_But = 17,
  anon_sym_STAR = 18,
  sym_string = 19,
  sym_number = 20,
  anon_sym_PIPE = 21,
  sym_table_cell = 22,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 23,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 24,
  sym_docstring_content = 25,
  sym_comment = 26,
  sym_source_file = 27,
  sym__line = 28,
  sym_tag_line = 29,
  sym_feature_header = 30,
  sym_rule_header = 31,
  sym_background_header = 32,
  sym_scenario_header = 33,
  sym_scenario_keyword = 34,
  sym_examples_header = 35,
  sym_examples_keyword = 36,
  sym_header_text = 37,
  sym_step = 38,
  sym_step_keyword = 39,
  sym_step_text = 40,
  sym_table_row = 41,
  sym_docstring = 42,
  sym__triple_dquote = 43,
  sym__triple_backtick = 44,
  sym__docstring_line = 45,
  sym_description = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym_tag_line_repeat1 = 48,
  aux_sym_header_text_repeat1 = 49,
  aux_sym_step_text_repeat1 = 50,
  aux_sym_table_row_repeat1 = 51,
  aux_sym_docstring_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__word] = "_word",
  [sym__nl] = "_nl",
  [sym_tag] = "tag",
  [sym_feature_keyword] = "feature_keyword",
  [sym_rule_keyword] = "rule_keyword",
  [sym_background_keyword] = "background_keyword",
  [anon_sym_Scenario_COLON] = "Scenario:",
  [anon_sym_Example_COLON] = "Example:",
  [aux_sym_scenario_keyword_token1] = "scenario_keyword_token1",
  [aux_sym_scenario_keyword_token2] = "scenario_keyword_token2",
  [anon_sym_Examples_COLON] = "Examples:",
  [anon_sym_Scenarios_COLON] = "Scenarios:",
  [anon_sym_Given] = "Given",
  [anon_sym_When] = "When",
  [anon_sym_Then] = "Then",
  [anon_sym_And] = "And",
  [anon_sym_But] = "But",
  [anon_sym_STAR] = "*",
  [sym_string] = "string",
  [sym_number] = "number",
  [anon_sym_PIPE] = "|",
  [sym_table_cell] = "table_cell",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [sym_docstring_content] = "docstring_content",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym_tag_line] = "tag_line",
  [sym_feature_header] = "feature_header",
  [sym_rule_header] = "rule_header",
  [sym_background_header] = "background_header",
  [sym_scenario_header] = "scenario_header",
  [sym_scenario_keyword] = "scenario_keyword",
  [sym_examples_header] = "examples_header",
  [sym_examples_keyword] = "examples_keyword",
  [sym_header_text] = "header_text",
  [sym_step] = "step",
  [sym_step_keyword] = "step_keyword",
  [sym_step_text] = "step_text",
  [sym_table_row] = "table_row",
  [sym_docstring] = "docstring",
  [sym__triple_dquote] = "_triple_dquote",
  [sym__triple_backtick] = "_triple_backtick",
  [sym__docstring_line] = "_docstring_line",
  [sym_description] = "description",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_tag_line_repeat1] = "tag_line_repeat1",
  [aux_sym_header_text_repeat1] = "header_text_repeat1",
  [aux_sym_step_text_repeat1] = "step_text_repeat1",
  [aux_sym_table_row_repeat1] = "table_row_repeat1",
  [aux_sym_docstring_repeat1] = "docstring_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__word] = sym__word,
  [sym__nl] = sym__nl,
  [sym_tag] = sym_tag,
  [sym_feature_keyword] = sym_feature_keyword,
  [sym_rule_keyword] = sym_rule_keyword,
  [sym_background_keyword] = sym_background_keyword,
  [anon_sym_Scenario_COLON] = anon_sym_Scenario_COLON,
  [anon_sym_Example_COLON] = anon_sym_Example_COLON,
  [aux_sym_scenario_keyword_token1] = aux_sym_scenario_keyword_token1,
  [aux_sym_scenario_keyword_token2] = aux_sym_scenario_keyword_token2,
  [anon_sym_Examples_COLON] = anon_sym_Examples_COLON,
  [anon_sym_Scenarios_COLON] = anon_sym_Scenarios_COLON,
  [anon_sym_Given] = anon_sym_Given,
  [anon_sym_When] = anon_sym_When,
  [anon_sym_Then] = anon_sym_Then,
  [anon_sym_And] = anon_sym_And,
  [anon_sym_But] = anon_sym_But,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_table_cell] = sym_table_cell,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [sym_docstring_content] = sym_docstring_content,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__line] = sym__line,
  [sym_tag_line] = sym_tag_line,
  [sym_feature_header] = sym_feature_header,
  [sym_rule_header] = sym_rule_header,
  [sym_background_header] = sym_background_header,
  [sym_scenario_header] = sym_scenario_header,
  [sym_scenario_keyword] = sym_scenario_keyword,
  [sym_examples_header] = sym_examples_header,
  [sym_examples_keyword] = sym_examples_keyword,
  [sym_header_text] = sym_header_text,
  [sym_step] = sym_step,
  [sym_step_keyword] = sym_step_keyword,
  [sym_step_text] = sym_step_text,
  [sym_table_row] = sym_table_row,
  [sym_docstring] = sym_docstring,
  [sym__triple_dquote] = sym__triple_dquote,
  [sym__triple_backtick] = sym__triple_backtick,
  [sym__docstring_line] = sym__docstring_line,
  [sym_description] = sym_description,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_tag_line_repeat1] = aux_sym_tag_line_repeat1,
  [aux_sym_header_text_repeat1] = aux_sym_header_text_repeat1,
  [aux_sym_step_text_repeat1] = aux_sym_step_text_repeat1,
  [aux_sym_table_row_repeat1] = aux_sym_table_row_repeat1,
  [aux_sym_docstring_repeat1] = aux_sym_docstring_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym__nl] = {
    .visible = false,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_feature_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_background_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Scenario_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Example_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_scenario_keyword_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scenario_keyword_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Examples_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Scenarios_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Given] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_When] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_And] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_But] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_table_cell] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_docstring_content] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_tag_line] = {
    .visible = true,
    .named = true,
  },
  [sym_feature_header] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_header] = {
    .visible = true,
    .named = true,
  },
  [sym_background_header] = {
    .visible = true,
    .named = true,
  },
  [sym_scenario_header] = {
    .visible = true,
    .named = true,
  },
  [sym_scenario_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_examples_header] = {
    .visible = true,
    .named = true,
  },
  [sym_examples_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_header_text] = {
    .visible = true,
    .named = true,
  },
  [sym_step] = {
    .visible = true,
    .named = true,
  },
  [sym_step_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_step_text] = {
    .visible = true,
    .named = true,
  },
  [sym_table_row] = {
    .visible = true,
    .named = true,
  },
  [sym_docstring] = {
    .visible = true,
    .named = true,
  },
  [sym__triple_dquote] = {
    .visible = false,
    .named = true,
  },
  [sym__triple_backtick] = {
    .visible = false,
    .named = true,
  },
  [sym__docstring_line] = {
    .visible = false,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tag_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_header_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_step_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_row_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_docstring_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_keyword = 1,
  field_name = 2,
  field_text = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_keyword] = "keyword",
  [field_name] = "name",
  [field_text] = "text",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_keyword, 0},
  [1] =
    {field_keyword, 0},
    {field_name, 1},
  [3] =
    {field_keyword, 0},
    {field_text, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 22,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 33,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 47,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(31);
      ADVANCE_MAP(
        '\n', 32,
        '\r', 1,
        '"', 5,
        '#', 54,
        '\'', 9,
        '*', 36,
        '-', 63,
        '@', 29,
        'S', 56,
        '`', 15,
        '|', 40,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(65);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(32);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(65);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '|') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\'' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(65);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(43);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(53);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == 'O') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '`') ADVANCE(45);
      END_STATE();
    case 14:
      if (lookahead == '`') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(53);
      END_STATE();
    case 15:
      if (lookahead == '`') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(33);
      END_STATE();
    case 30:
      if (eof) ADVANCE(31);
      ADVANCE_MAP(
        '\n', 32,
        '\r', 1,
        '"', 8,
        '#', 54,
        '*', 36,
        '@', 29,
        'S', 56,
        '`', 15,
        '|', 40,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\'') ADVANCE(65);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__nl);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_scenario_keyword_token1);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_scenario_keyword_token2);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(65);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_table_cell);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '|') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_table_cell);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '|') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(53);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(53);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_docstring_content);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(53);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_docstring_content);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(53);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_docstring_content);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_docstring_content);
      if (lookahead == '`') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_docstring_content);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_docstring_content);
      if (lookahead == '`') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_docstring_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(65);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(65);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(65);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(65);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(65);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(65);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(65);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(65);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(65);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'A', 1,
        'B', 2,
        'E', 3,
        'F', 4,
        'G', 5,
        'R', 6,
        'S', 7,
        'T', 8,
        'W', 9,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'x') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'h') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'h') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 'v') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_And);
      END_STATE();
    case 21:
      if (lookahead == 'k') ADVANCE(30);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_But);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(42);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_Then);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_When);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_Given);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_rule_keyword);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(55);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_Example_COLON);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(58);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_feature_keyword);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_Examples_COLON);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_Scenario_COLON);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(62);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_Scenarios_COLON);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_background_keyword);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 30},
  [2] = {.lex_state = 30},
  [3] = {.lex_state = 30},
  [4] = {.lex_state = 30},
  [5] = {.lex_state = 30},
  [6] = {.lex_state = 30},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
    [sym__nl] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [sym_feature_keyword] = ACTIONS(1),
    [sym_rule_keyword] = ACTIONS(1),
    [sym_background_keyword] = ACTIONS(1),
    [anon_sym_Scenario_COLON] = ACTIONS(1),
    [anon_sym_Example_COLON] = ACTIONS(1),
    [aux_sym_scenario_keyword_token1] = ACTIONS(1),
    [aux_sym_scenario_keyword_token2] = ACTIONS(1),
    [anon_sym_Examples_COLON] = ACTIONS(1),
    [anon_sym_Scenarios_COLON] = ACTIONS(1),
    [anon_sym_Given] = ACTIONS(1),
    [anon_sym_When] = ACTIONS(1),
    [anon_sym_Then] = ACTIONS(1),
    [anon_sym_And] = ACTIONS(1),
    [anon_sym_But] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(42),
    [sym__line] = STATE(3),
    [sym_tag_line] = STATE(38),
    [sym_feature_header] = STATE(38),
    [sym_rule_header] = STATE(38),
    [sym_background_header] = STATE(38),
    [sym_scenario_header] = STATE(38),
    [sym_scenario_keyword] = STATE(19),
    [sym_examples_header] = STATE(38),
    [sym_examples_keyword] = STATE(20),
    [sym_step] = STATE(38),
    [sym_step_keyword] = STATE(7),
    [sym_table_row] = STATE(38),
    [sym_docstring] = STATE(3),
    [sym__triple_dquote] = STATE(46),
    [sym__triple_backtick] = STATE(37),
    [sym_description] = STATE(38),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_tag_line_repeat1] = STATE(29),
    [aux_sym_header_text_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__word] = ACTIONS(5),
    [sym__nl] = ACTIONS(7),
    [sym_tag] = ACTIONS(9),
    [sym_feature_keyword] = ACTIONS(11),
    [sym_rule_keyword] = ACTIONS(13),
    [sym_background_keyword] = ACTIONS(15),
    [anon_sym_Scenario_COLON] = ACTIONS(17),
    [anon_sym_Example_COLON] = ACTIONS(17),
    [aux_sym_scenario_keyword_token1] = ACTIONS(19),
    [aux_sym_scenario_keyword_token2] = ACTIONS(19),
    [anon_sym_Examples_COLON] = ACTIONS(21),
    [anon_sym_Scenarios_COLON] = ACTIONS(21),
    [anon_sym_Given] = ACTIONS(23),
    [anon_sym_When] = ACTIONS(23),
    [anon_sym_Then] = ACTIONS(23),
    [anon_sym_And] = ACTIONS(23),
    [anon_sym_But] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(29),
    [sym_comment] = ACTIONS(31),
  },
  [2] = {
    [sym__line] = STATE(2),
    [sym_tag_line] = STATE(38),
    [sym_feature_header] = STATE(38),
    [sym_rule_header] = STATE(38),
    [sym_background_header] = STATE(38),
    [sym_scenario_header] = STATE(38),
    [sym_scenario_keyword] = STATE(19),
    [sym_examples_header] = STATE(38),
    [sym_examples_keyword] = STATE(20),
    [sym_step] = STATE(38),
    [sym_step_keyword] = STATE(7),
    [sym_table_row] = STATE(38),
    [sym_docstring] = STATE(2),
    [sym__triple_dquote] = STATE(46),
    [sym__triple_backtick] = STATE(37),
    [sym_description] = STATE(38),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_tag_line_repeat1] = STATE(29),
    [aux_sym_header_text_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym__word] = ACTIONS(35),
    [sym__nl] = ACTIONS(38),
    [sym_tag] = ACTIONS(41),
    [sym_feature_keyword] = ACTIONS(44),
    [sym_rule_keyword] = ACTIONS(47),
    [sym_background_keyword] = ACTIONS(50),
    [anon_sym_Scenario_COLON] = ACTIONS(53),
    [anon_sym_Example_COLON] = ACTIONS(53),
    [aux_sym_scenario_keyword_token1] = ACTIONS(56),
    [aux_sym_scenario_keyword_token2] = ACTIONS(56),
    [anon_sym_Examples_COLON] = ACTIONS(59),
    [anon_sym_Scenarios_COLON] = ACTIONS(59),
    [anon_sym_Given] = ACTIONS(62),
    [anon_sym_When] = ACTIONS(62),
    [anon_sym_Then] = ACTIONS(62),
    [anon_sym_And] = ACTIONS(62),
    [anon_sym_But] = ACTIONS(62),
    [anon_sym_STAR] = ACTIONS(62),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(68),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(71),
    [sym_comment] = ACTIONS(74),
  },
  [3] = {
    [sym__line] = STATE(2),
    [sym_tag_line] = STATE(38),
    [sym_feature_header] = STATE(38),
    [sym_rule_header] = STATE(38),
    [sym_background_header] = STATE(38),
    [sym_scenario_header] = STATE(38),
    [sym_scenario_keyword] = STATE(19),
    [sym_examples_header] = STATE(38),
    [sym_examples_keyword] = STATE(20),
    [sym_step] = STATE(38),
    [sym_step_keyword] = STATE(7),
    [sym_table_row] = STATE(38),
    [sym_docstring] = STATE(2),
    [sym__triple_dquote] = STATE(46),
    [sym__triple_backtick] = STATE(37),
    [sym_description] = STATE(38),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_tag_line_repeat1] = STATE(29),
    [aux_sym_header_text_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym__word] = ACTIONS(5),
    [sym__nl] = ACTIONS(79),
    [sym_tag] = ACTIONS(9),
    [sym_feature_keyword] = ACTIONS(11),
    [sym_rule_keyword] = ACTIONS(13),
    [sym_background_keyword] = ACTIONS(15),
    [anon_sym_Scenario_COLON] = ACTIONS(17),
    [anon_sym_Example_COLON] = ACTIONS(17),
    [aux_sym_scenario_keyword_token1] = ACTIONS(19),
    [aux_sym_scenario_keyword_token2] = ACTIONS(19),
    [anon_sym_Examples_COLON] = ACTIONS(21),
    [anon_sym_Scenarios_COLON] = ACTIONS(21),
    [anon_sym_Given] = ACTIONS(23),
    [anon_sym_When] = ACTIONS(23),
    [anon_sym_Then] = ACTIONS(23),
    [anon_sym_And] = ACTIONS(23),
    [anon_sym_But] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(25),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(29),
    [sym_comment] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(81), 9,
      ts_builtin_sym_end,
      sym__nl,
      sym_tag,
      aux_sym_scenario_keyword_token1,
      aux_sym_scenario_keyword_token2,
      anon_sym_PIPE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_comment,
    ACTIONS(83), 14,
      sym_feature_keyword,
      sym_rule_keyword,
      sym_background_keyword,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_Examples_COLON,
      anon_sym_Scenarios_COLON,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
      anon_sym_STAR,
      sym__word,
  [28] = 2,
    ACTIONS(85), 9,
      ts_builtin_sym_end,
      sym__nl,
      sym_tag,
      aux_sym_scenario_keyword_token1,
      aux_sym_scenario_keyword_token2,
      anon_sym_PIPE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_comment,
    ACTIONS(87), 14,
      sym_feature_keyword,
      sym_rule_keyword,
      sym_background_keyword,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_Examples_COLON,
      anon_sym_Scenarios_COLON,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
      anon_sym_STAR,
      sym__word,
  [56] = 2,
    ACTIONS(89), 9,
      ts_builtin_sym_end,
      sym__nl,
      sym_tag,
      aux_sym_scenario_keyword_token1,
      aux_sym_scenario_keyword_token2,
      anon_sym_PIPE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_comment,
    ACTIONS(91), 14,
      sym_feature_keyword,
      sym_rule_keyword,
      sym_background_keyword,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_Examples_COLON,
      anon_sym_Scenarios_COLON,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
      anon_sym_STAR,
      sym__word,
  [84] = 5,
    ACTIONS(93), 1,
      sym__word,
    ACTIONS(95), 1,
      sym__nl,
    STATE(8), 1,
      aux_sym_step_text_repeat1,
    STATE(39), 1,
      sym_step_text,
    ACTIONS(97), 2,
      sym_string,
      sym_number,
  [101] = 4,
    ACTIONS(99), 1,
      sym__word,
    ACTIONS(101), 1,
      sym__nl,
    STATE(10), 1,
      aux_sym_step_text_repeat1,
    ACTIONS(103), 2,
      sym_string,
      sym_number,
  [115] = 4,
    ACTIONS(105), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(107), 1,
      sym_docstring_content,
    STATE(41), 1,
      sym__triple_backtick,
    STATE(13), 2,
      sym__docstring_line,
      aux_sym_docstring_repeat1,
  [129] = 4,
    ACTIONS(109), 1,
      sym__word,
    ACTIONS(112), 1,
      sym__nl,
    STATE(10), 1,
      aux_sym_step_text_repeat1,
    ACTIONS(114), 2,
      sym_string,
      sym_number,
  [143] = 4,
    ACTIONS(117), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(119), 1,
      sym_docstring_content,
    STATE(44), 1,
      sym__triple_dquote,
    STATE(22), 2,
      sym__docstring_line,
      aux_sym_docstring_repeat1,
  [157] = 4,
    ACTIONS(105), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(119), 1,
      sym_docstring_content,
    STATE(41), 1,
      sym__triple_dquote,
    STATE(11), 2,
      sym__docstring_line,
      aux_sym_docstring_repeat1,
  [171] = 4,
    ACTIONS(107), 1,
      sym_docstring_content,
    ACTIONS(117), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(44), 1,
      sym__triple_backtick,
    STATE(23), 2,
      sym__docstring_line,
      aux_sym_docstring_repeat1,
  [185] = 4,
    ACTIONS(121), 1,
      sym__nl,
    ACTIONS(123), 1,
      anon_sym_PIPE,
    ACTIONS(125), 1,
      sym_table_cell,
    STATE(18), 1,
      aux_sym_table_row_repeat1,
  [198] = 4,
    ACTIONS(127), 1,
      sym__word,
    ACTIONS(129), 1,
      sym__nl,
    STATE(30), 1,
      aux_sym_header_text_repeat1,
    STATE(48), 1,
      sym_header_text,
  [211] = 4,
    ACTIONS(127), 1,
      sym__word,
    ACTIONS(131), 1,
      sym__nl,
    STATE(30), 1,
      aux_sym_header_text_repeat1,
    STATE(43), 1,
      sym_header_text,
  [224] = 2,
    ACTIONS(133), 1,
      sym__word,
    ACTIONS(135), 3,
      sym__nl,
      sym_string,
      sym_number,
  [233] = 4,
    ACTIONS(137), 1,
      sym__nl,
    ACTIONS(139), 1,
      anon_sym_PIPE,
    ACTIONS(142), 1,
      sym_table_cell,
    STATE(18), 1,
      aux_sym_table_row_repeat1,
  [246] = 4,
    ACTIONS(127), 1,
      sym__word,
    ACTIONS(145), 1,
      sym__nl,
    STATE(30), 1,
      aux_sym_header_text_repeat1,
    STATE(35), 1,
      sym_header_text,
  [259] = 4,
    ACTIONS(127), 1,
      sym__word,
    ACTIONS(147), 1,
      sym__nl,
    STATE(30), 1,
      aux_sym_header_text_repeat1,
    STATE(36), 1,
      sym_header_text,
  [272] = 4,
    ACTIONS(127), 1,
      sym__word,
    ACTIONS(149), 1,
      sym__nl,
    STATE(30), 1,
      aux_sym_header_text_repeat1,
    STATE(40), 1,
      sym_header_text,
  [285] = 3,
    ACTIONS(151), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(153), 1,
      sym_docstring_content,
    STATE(22), 2,
      sym__docstring_line,
      aux_sym_docstring_repeat1,
  [296] = 3,
    ACTIONS(151), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(156), 1,
      sym_docstring_content,
    STATE(23), 2,
      sym__docstring_line,
      aux_sym_docstring_repeat1,
  [307] = 3,
    ACTIONS(125), 1,
      sym_table_cell,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    STATE(14), 1,
      aux_sym_table_row_repeat1,
  [317] = 3,
    ACTIONS(161), 1,
      sym__word,
    ACTIONS(163), 1,
      sym__nl,
    STATE(27), 1,
      aux_sym_header_text_repeat1,
  [327] = 3,
    ACTIONS(165), 1,
      sym__nl,
    ACTIONS(167), 1,
      sym_tag,
    STATE(26), 1,
      aux_sym_tag_line_repeat1,
  [337] = 3,
    ACTIONS(170), 1,
      sym__word,
    ACTIONS(173), 1,
      sym__nl,
    STATE(27), 1,
      aux_sym_header_text_repeat1,
  [347] = 2,
    ACTIONS(175), 1,
      sym_table_cell,
    ACTIONS(137), 2,
      sym__nl,
      anon_sym_PIPE,
  [355] = 3,
    ACTIONS(177), 1,
      sym__nl,
    ACTIONS(179), 1,
      sym_tag,
    STATE(26), 1,
      aux_sym_tag_line_repeat1,
  [365] = 3,
    ACTIONS(161), 1,
      sym__word,
    ACTIONS(181), 1,
      sym__nl,
    STATE(27), 1,
      aux_sym_header_text_repeat1,
  [375] = 1,
    ACTIONS(183), 2,
      sym__nl,
      sym__word,
  [380] = 1,
    ACTIONS(185), 2,
      sym__nl,
      sym__word,
  [385] = 1,
    ACTIONS(187), 2,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_docstring_content,
  [390] = 1,
    ACTIONS(187), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_docstring_content,
  [395] = 1,
    ACTIONS(189), 1,
      sym__nl,
  [399] = 1,
    ACTIONS(191), 1,
      sym__nl,
  [403] = 1,
    ACTIONS(193), 1,
      sym__nl,
  [407] = 1,
    ACTIONS(195), 1,
      sym__nl,
  [411] = 1,
    ACTIONS(197), 1,
      sym__nl,
  [415] = 1,
    ACTIONS(199), 1,
      sym__nl,
  [419] = 1,
    ACTIONS(201), 1,
      sym__nl,
  [423] = 1,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
  [427] = 1,
    ACTIONS(205), 1,
      sym__nl,
  [431] = 1,
    ACTIONS(207), 1,
      sym__nl,
  [435] = 1,
    ACTIONS(209), 1,
      anon_sym_PIPE,
  [439] = 1,
    ACTIONS(211), 1,
      sym__nl,
  [443] = 1,
    ACTIONS(213), 1,
      sym__nl,
  [447] = 1,
    ACTIONS(215), 1,
      sym__nl,
  [451] = 1,
    ACTIONS(217), 1,
      sym__nl,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 28,
  [SMALL_STATE(6)] = 56,
  [SMALL_STATE(7)] = 84,
  [SMALL_STATE(8)] = 101,
  [SMALL_STATE(9)] = 115,
  [SMALL_STATE(10)] = 129,
  [SMALL_STATE(11)] = 143,
  [SMALL_STATE(12)] = 157,
  [SMALL_STATE(13)] = 171,
  [SMALL_STATE(14)] = 185,
  [SMALL_STATE(15)] = 198,
  [SMALL_STATE(16)] = 211,
  [SMALL_STATE(17)] = 224,
  [SMALL_STATE(18)] = 233,
  [SMALL_STATE(19)] = 246,
  [SMALL_STATE(20)] = 259,
  [SMALL_STATE(21)] = 272,
  [SMALL_STATE(22)] = 285,
  [SMALL_STATE(23)] = 296,
  [SMALL_STATE(24)] = 307,
  [SMALL_STATE(25)] = 317,
  [SMALL_STATE(26)] = 327,
  [SMALL_STATE(27)] = 337,
  [SMALL_STATE(28)] = 347,
  [SMALL_STATE(29)] = 355,
  [SMALL_STATE(30)] = 365,
  [SMALL_STATE(31)] = 375,
  [SMALL_STATE(32)] = 380,
  [SMALL_STATE(33)] = 385,
  [SMALL_STATE(34)] = 390,
  [SMALL_STATE(35)] = 395,
  [SMALL_STATE(36)] = 399,
  [SMALL_STATE(37)] = 403,
  [SMALL_STATE(38)] = 407,
  [SMALL_STATE(39)] = 411,
  [SMALL_STATE(40)] = 415,
  [SMALL_STATE(41)] = 419,
  [SMALL_STATE(42)] = 423,
  [SMALL_STATE(43)] = 427,
  [SMALL_STATE(44)] = 431,
  [SMALL_STATE(45)] = 435,
  [SMALL_STATE(46)] = 439,
  [SMALL_STATE(47)] = 443,
  [SMALL_STATE(48)] = 447,
  [SMALL_STATE(49)] = 451,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docstring, 4, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docstring, 4, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docstring, 5, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docstring, 5, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 1, 0, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_text, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_text_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_text_repeat1, 2, 0, 0),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_text_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_row, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_header, 1, 0, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background_header, 1, 0, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step_keyword, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_keyword, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_row_repeat1, 2, 0, 0),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_row_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_row_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario_header, 1, 0, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_examples_header, 1, 0, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_header, 1, 0, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_docstring_repeat1, 2, 0, 0),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_docstring_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_docstring_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_line_repeat1, 2, 0, 0),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_line_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_text_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_text_repeat1, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_row_repeat1, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_line, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_text, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario_keyword, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_examples_keyword, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__docstring_line, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario_header, 2, 0, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_examples_header, 2, 0, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 2, 0, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_header, 2, 0, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [203] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background_header, 2, 0, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_header, 2, 0, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_gherkin(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__word,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
