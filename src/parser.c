#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
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
  sym_parameter = 19,
  sym_string = 20,
  sym_number = 21,
  anon_sym_PIPE = 22,
  sym_table_cell = 23,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 24,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 25,
  sym_docstring_content = 26,
  sym_comment = 27,
  sym_source_file = 28,
  sym__line = 29,
  sym_tag_line = 30,
  sym_feature_header = 31,
  sym_rule_header = 32,
  sym_background_header = 33,
  sym_scenario_header = 34,
  sym_scenario_keyword = 35,
  sym_examples_header = 36,
  sym_examples_keyword = 37,
  sym_header_text = 38,
  sym_step = 39,
  sym_step_keyword = 40,
  sym_step_text = 41,
  sym_table_row = 42,
  sym_docstring = 43,
  sym__triple_dquote = 44,
  sym__triple_backtick = 45,
  sym__docstring_line = 46,
  sym_description = 47,
  aux_sym_source_file_repeat1 = 48,
  aux_sym_tag_line_repeat1 = 49,
  aux_sym_header_text_repeat1 = 50,
  aux_sym_step_text_repeat1 = 51,
  aux_sym_table_row_repeat1 = 52,
  aux_sym_docstring_repeat1 = 53,
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
  [sym_parameter] = "parameter",
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
  [sym_parameter] = sym_parameter,
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
  [sym_parameter] = {
    .visible = true,
    .named = true,
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
  [49] = 38,
};

static TSCharacterRange sym__word_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', '!'}, {'$', '&'}, {'(', ';'}, {'=', '?'}, {'A', '_'}, {'a', '{'},
  {'}', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(32);
      ADVANCE_MAP(
        '\n', 33,
        '\r', 1,
        '"', 5,
        '#', 56,
        '\'', 9,
        '*', 37,
        '-', 65,
        '<', 12,
        '@', 30,
        'S', 58,
        '`', 16,
        '|', 42,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(67);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(33);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(67);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4);
      if ((!eof && set_contains(sym__word_character_set_1, 9, lookahead))) ADVANCE(67);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(45);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(55);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == 'O') ADVANCE(29);
      if (lookahead == 'T') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '`') ADVANCE(47);
      END_STATE();
    case 15:
      if (lookahead == '`') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(55);
      END_STATE();
    case 16:
      if (lookahead == '`') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 24:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(34);
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      ADVANCE_MAP(
        '\n', 33,
        '\r', 1,
        '"', 8,
        '#', 56,
        '*', 37,
        '@', 30,
        'S', 58,
        '`', 16,
        '|', 42,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '<') ADVANCE(67);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__nl);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_scenario_keyword_token1);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_scenario_keyword_token2);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(67);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_parameter);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_table_cell);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '|') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_table_cell);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '|') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(55);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(55);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_docstring_content);
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_docstring_content);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_docstring_content);
      if (lookahead == '"') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(55);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_docstring_content);
      if (lookahead == '`') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(55);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_docstring_content);
      if (lookahead == '`') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_docstring_content);
      if (lookahead == '`') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_docstring_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(67);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(59);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(67);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(67);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(67);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(67);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(67);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(67);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(67);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(67);
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
  [1] = {.lex_state = 31},
  [2] = {.lex_state = 31},
  [3] = {.lex_state = 31},
  [4] = {.lex_state = 31},
  [5] = {.lex_state = 31},
  [6] = {.lex_state = 31},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 15},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 15},
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
    [sym_parameter] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(44),
    [sym__line] = STATE(3),
    [sym_tag_line] = STATE(42),
    [sym_feature_header] = STATE(42),
    [sym_rule_header] = STATE(42),
    [sym_background_header] = STATE(42),
    [sym_scenario_header] = STATE(42),
    [sym_scenario_keyword] = STATE(19),
    [sym_examples_header] = STATE(42),
    [sym_examples_keyword] = STATE(17),
    [sym_step] = STATE(42),
    [sym_step_keyword] = STATE(7),
    [sym_table_row] = STATE(42),
    [sym_docstring] = STATE(3),
    [sym__triple_dquote] = STATE(43),
    [sym__triple_backtick] = STATE(46),
    [sym_description] = STATE(42),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_tag_line_repeat1] = STATE(25),
    [aux_sym_header_text_repeat1] = STATE(24),
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
    [sym_tag_line] = STATE(42),
    [sym_feature_header] = STATE(42),
    [sym_rule_header] = STATE(42),
    [sym_background_header] = STATE(42),
    [sym_scenario_header] = STATE(42),
    [sym_scenario_keyword] = STATE(19),
    [sym_examples_header] = STATE(42),
    [sym_examples_keyword] = STATE(17),
    [sym_step] = STATE(42),
    [sym_step_keyword] = STATE(7),
    [sym_table_row] = STATE(42),
    [sym_docstring] = STATE(2),
    [sym__triple_dquote] = STATE(43),
    [sym__triple_backtick] = STATE(46),
    [sym_description] = STATE(42),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_tag_line_repeat1] = STATE(25),
    [aux_sym_header_text_repeat1] = STATE(24),
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
    [sym_tag_line] = STATE(42),
    [sym_feature_header] = STATE(42),
    [sym_rule_header] = STATE(42),
    [sym_background_header] = STATE(42),
    [sym_scenario_header] = STATE(42),
    [sym_scenario_keyword] = STATE(19),
    [sym_examples_header] = STATE(42),
    [sym_examples_keyword] = STATE(17),
    [sym_step] = STATE(42),
    [sym_step_keyword] = STATE(7),
    [sym_table_row] = STATE(42),
    [sym_docstring] = STATE(2),
    [sym__triple_dquote] = STATE(43),
    [sym__triple_backtick] = STATE(46),
    [sym_description] = STATE(42),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_tag_line_repeat1] = STATE(25),
    [aux_sym_header_text_repeat1] = STATE(24),
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
    STATE(37), 1,
      sym_step_text,
    ACTIONS(97), 3,
      sym_parameter,
      sym_string,
      sym_number,
  [102] = 4,
    ACTIONS(99), 1,
      sym__word,
    ACTIONS(101), 1,
      sym__nl,
    STATE(9), 1,
      aux_sym_step_text_repeat1,
    ACTIONS(103), 3,
      sym_parameter,
      sym_string,
      sym_number,
  [117] = 4,
    ACTIONS(105), 1,
      sym__word,
    ACTIONS(108), 1,
      sym__nl,
    STATE(9), 1,
      aux_sym_step_text_repeat1,
    ACTIONS(110), 3,
      sym_parameter,
      sym_string,
      sym_number,
  [132] = 4,
    ACTIONS(113), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(115), 1,
      sym_docstring_content,
    STATE(39), 1,
      sym__triple_backtick,
    STATE(14), 2,
      sym__docstring_line,
      aux_sym_docstring_repeat1,
  [146] = 4,
    ACTIONS(113), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(117), 1,
      sym_docstring_content,
    STATE(39), 1,
      sym__triple_dquote,
    STATE(13), 2,
      sym__docstring_line,
      aux_sym_docstring_repeat1,
  [160] = 2,
    ACTIONS(119), 1,
      sym__word,
    ACTIONS(121), 4,
      sym__nl,
      sym_parameter,
      sym_string,
      sym_number,
  [170] = 4,
    ACTIONS(117), 1,
      sym_docstring_content,
    ACTIONS(123), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(35), 1,
      sym__triple_dquote,
    STATE(22), 2,
      sym__docstring_line,
      aux_sym_docstring_repeat1,
  [184] = 4,
    ACTIONS(115), 1,
      sym_docstring_content,
    ACTIONS(123), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(35), 1,
      sym__triple_backtick,
    STATE(23), 2,
      sym__docstring_line,
      aux_sym_docstring_repeat1,
  [198] = 4,
    ACTIONS(125), 1,
      sym__nl,
    ACTIONS(127), 1,
      anon_sym_PIPE,
    ACTIONS(129), 1,
      sym_table_cell,
    STATE(18), 1,
      aux_sym_table_row_repeat1,
  [211] = 4,
    ACTIONS(131), 1,
      sym__word,
    ACTIONS(133), 1,
      sym__nl,
    STATE(28), 1,
      aux_sym_header_text_repeat1,
    STATE(45), 1,
      sym_header_text,
  [224] = 4,
    ACTIONS(131), 1,
      sym__word,
    ACTIONS(135), 1,
      sym__nl,
    STATE(28), 1,
      aux_sym_header_text_repeat1,
    STATE(36), 1,
      sym_header_text,
  [237] = 4,
    ACTIONS(137), 1,
      sym__nl,
    ACTIONS(139), 1,
      anon_sym_PIPE,
    ACTIONS(142), 1,
      sym_table_cell,
    STATE(18), 1,
      aux_sym_table_row_repeat1,
  [250] = 4,
    ACTIONS(131), 1,
      sym__word,
    ACTIONS(145), 1,
      sym__nl,
    STATE(28), 1,
      aux_sym_header_text_repeat1,
    STATE(48), 1,
      sym_header_text,
  [263] = 4,
    ACTIONS(131), 1,
      sym__word,
    ACTIONS(147), 1,
      sym__nl,
    STATE(28), 1,
      aux_sym_header_text_repeat1,
    STATE(40), 1,
      sym_header_text,
  [276] = 4,
    ACTIONS(131), 1,
      sym__word,
    ACTIONS(149), 1,
      sym__nl,
    STATE(28), 1,
      aux_sym_header_text_repeat1,
    STATE(47), 1,
      sym_header_text,
  [289] = 3,
    ACTIONS(151), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(153), 1,
      sym_docstring_content,
    STATE(22), 2,
      sym__docstring_line,
      aux_sym_docstring_repeat1,
  [300] = 3,
    ACTIONS(151), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(156), 1,
      sym_docstring_content,
    STATE(23), 2,
      sym__docstring_line,
      aux_sym_docstring_repeat1,
  [311] = 3,
    ACTIONS(159), 1,
      sym__word,
    ACTIONS(161), 1,
      sym__nl,
    STATE(27), 1,
      aux_sym_header_text_repeat1,
  [321] = 3,
    ACTIONS(163), 1,
      sym__nl,
    ACTIONS(165), 1,
      sym_tag,
    STATE(29), 1,
      aux_sym_tag_line_repeat1,
  [331] = 3,
    ACTIONS(129), 1,
      sym_table_cell,
    ACTIONS(167), 1,
      anon_sym_PIPE,
    STATE(15), 1,
      aux_sym_table_row_repeat1,
  [341] = 3,
    ACTIONS(169), 1,
      sym__word,
    ACTIONS(172), 1,
      sym__nl,
    STATE(27), 1,
      aux_sym_header_text_repeat1,
  [351] = 3,
    ACTIONS(159), 1,
      sym__word,
    ACTIONS(174), 1,
      sym__nl,
    STATE(27), 1,
      aux_sym_header_text_repeat1,
  [361] = 3,
    ACTIONS(176), 1,
      sym__nl,
    ACTIONS(178), 1,
      sym_tag,
    STATE(29), 1,
      aux_sym_tag_line_repeat1,
  [371] = 2,
    ACTIONS(181), 1,
      sym_table_cell,
    ACTIONS(137), 2,
      sym__nl,
      anon_sym_PIPE,
  [379] = 1,
    ACTIONS(183), 2,
      sym__nl,
      sym__word,
  [384] = 1,
    ACTIONS(185), 2,
      sym__nl,
      sym__word,
  [389] = 1,
    ACTIONS(187), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_docstring_content,
  [394] = 1,
    ACTIONS(187), 2,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym_docstring_content,
  [399] = 1,
    ACTIONS(189), 1,
      sym__nl,
  [403] = 1,
    ACTIONS(191), 1,
      sym__nl,
  [407] = 1,
    ACTIONS(193), 1,
      sym__nl,
  [411] = 1,
    ACTIONS(195), 1,
      sym__nl,
  [415] = 1,
    ACTIONS(197), 1,
      sym__nl,
  [419] = 1,
    ACTIONS(199), 1,
      sym__nl,
  [423] = 1,
    ACTIONS(201), 1,
      anon_sym_PIPE,
  [427] = 1,
    ACTIONS(203), 1,
      sym__nl,
  [431] = 1,
    ACTIONS(205), 1,
      sym__nl,
  [435] = 1,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
  [439] = 1,
    ACTIONS(209), 1,
      sym__nl,
  [443] = 1,
    ACTIONS(211), 1,
      sym__nl,
  [447] = 1,
    ACTIONS(213), 1,
      sym__nl,
  [451] = 1,
    ACTIONS(215), 1,
      sym__nl,
  [455] = 1,
    ACTIONS(217), 1,
      sym__nl,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 28,
  [SMALL_STATE(6)] = 56,
  [SMALL_STATE(7)] = 84,
  [SMALL_STATE(8)] = 102,
  [SMALL_STATE(9)] = 117,
  [SMALL_STATE(10)] = 132,
  [SMALL_STATE(11)] = 146,
  [SMALL_STATE(12)] = 160,
  [SMALL_STATE(13)] = 170,
  [SMALL_STATE(14)] = 184,
  [SMALL_STATE(15)] = 198,
  [SMALL_STATE(16)] = 211,
  [SMALL_STATE(17)] = 224,
  [SMALL_STATE(18)] = 237,
  [SMALL_STATE(19)] = 250,
  [SMALL_STATE(20)] = 263,
  [SMALL_STATE(21)] = 276,
  [SMALL_STATE(22)] = 289,
  [SMALL_STATE(23)] = 300,
  [SMALL_STATE(24)] = 311,
  [SMALL_STATE(25)] = 321,
  [SMALL_STATE(26)] = 331,
  [SMALL_STATE(27)] = 341,
  [SMALL_STATE(28)] = 351,
  [SMALL_STATE(29)] = 361,
  [SMALL_STATE(30)] = 371,
  [SMALL_STATE(31)] = 379,
  [SMALL_STATE(32)] = 384,
  [SMALL_STATE(33)] = 389,
  [SMALL_STATE(34)] = 394,
  [SMALL_STATE(35)] = 399,
  [SMALL_STATE(36)] = 403,
  [SMALL_STATE(37)] = 407,
  [SMALL_STATE(38)] = 411,
  [SMALL_STATE(39)] = 415,
  [SMALL_STATE(40)] = 419,
  [SMALL_STATE(41)] = 423,
  [SMALL_STATE(42)] = 427,
  [SMALL_STATE(43)] = 431,
  [SMALL_STATE(44)] = 435,
  [SMALL_STATE(45)] = 439,
  [SMALL_STATE(46)] = 443,
  [SMALL_STATE(47)] = 447,
  [SMALL_STATE(48)] = 451,
  [SMALL_STATE(49)] = 455,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
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
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_text, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_text_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_text_repeat1, 2, 0, 0),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_text_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step_keyword, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_keyword, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_row, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_header, 1, 0, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_examples_header, 1, 0, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_row_repeat1, 2, 0, 0),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_row_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_row_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario_header, 1, 0, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background_header, 1, 0, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_header, 1, 0, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_docstring_repeat1, 2, 0, 0),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_docstring_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_docstring_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_line, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_text_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_text_repeat1, 2, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_text, 1, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_line_repeat1, 2, 0, 0),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_line_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_row_repeat1, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario_keyword, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_examples_keyword, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__docstring_line, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_examples_header, 2, 0, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 2, 0, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background_header, 2, 0, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [207] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_header, 2, 0, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_header, 2, 0, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario_header, 2, 0, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
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
