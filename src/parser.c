/* Automatically generated by tree-sitter v0.25.3 */

#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 15
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define MAX_RESERVED_WORD_SET_SIZE 0
#define PRODUCTION_ID_COUNT 2
#define SUPERTYPE_COUNT 0

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_fun = 2,
  anon_sym_nocache = 3,
  anon_sym_EQ_GT = 4,
  anon_sym_SEMI = 5,
  anon_sym_LPAREN = 6,
  anon_sym_COMMA = 7,
  anon_sym_RPAREN = 8,
  anon_sym_PIPE_PIPE = 9,
  anon_sym_AMP_AMP = 10,
  anon_sym_DQUOTE = 11,
  sym__string_content = 12,
  anon_sym_DOLLAR = 13,
  anon_sym_AT = 14,
  sym__integer = 15,
  sym__double = 16,
  aux_sym_boolean_token1 = 17,
  aux_sym_boolean_token2 = 18,
  sym_comment = 19,
  sym_null = 20,
  sym_source_file = 21,
  sym_expression = 22,
  sym_function_declaration = 23,
  sym_parameter_list = 24,
  sym_binary_expression = 25,
  sym_primary_expression = 26,
  sym_string_literal = 27,
  sym_variable = 28,
  sym__literal = 29,
  sym_number = 30,
  sym_boolean = 31,
  aux_sym_source_file_repeat1 = 32,
  aux_sym_parameter_list_repeat1 = 33,
  aux_sym_string_literal_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_fun] = "fun",
  [anon_sym_nocache] = "nocache",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_DQUOTE] = "\"",
  [sym__string_content] = "_string_content",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_AT] = "@",
  [sym__integer] = "_integer",
  [sym__double] = "_double",
  [aux_sym_boolean_token1] = "boolean_token1",
  [aux_sym_boolean_token2] = "boolean_token2",
  [sym_comment] = "comment",
  [sym_null] = "null",
  [sym_source_file] = "source_file",
  [sym_expression] = "expression",
  [sym_function_declaration] = "function_declaration",
  [sym_parameter_list] = "parameter_list",
  [sym_binary_expression] = "binary_expression",
  [sym_primary_expression] = "primary_expression",
  [sym_string_literal] = "string_literal",
  [sym_variable] = "variable",
  [sym__literal] = "_literal",
  [sym_number] = "number",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_fun] = anon_sym_fun,
  [anon_sym_nocache] = anon_sym_nocache,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__string_content] = sym__string_content,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_AT] = anon_sym_AT,
  [sym__integer] = sym__integer,
  [sym__double] = sym__double,
  [aux_sym_boolean_token1] = aux_sym_boolean_token1,
  [aux_sym_boolean_token2] = aux_sym_boolean_token2,
  [sym_comment] = sym_comment,
  [sym_null] = sym_null,
  [sym_source_file] = sym_source_file,
  [sym_expression] = sym_expression,
  [sym_function_declaration] = sym_function_declaration,
  [sym_parameter_list] = sym_parameter_list,
  [sym_binary_expression] = sym_binary_expression,
  [sym_primary_expression] = sym_primary_expression,
  [sym_string_literal] = sym_string_literal,
  [sym_variable] = sym_variable,
  [sym__literal] = sym__literal,
  [sym_number] = sym_number,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_fun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nocache] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__string_content] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym__integer] = {
    .visible = false,
    .named = true,
  },
  [sym__double] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_boolean_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_boolean_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_left = 1,
  field_operator = 2,
  field_right = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
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
  [23] = 23,
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
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      ADVANCE_MAP(
        '"', 14,
        '#', 21,
        '$', 17,
        '&', 2,
        '(', 9,
        ')', 11,
        ',', 10,
        ';', 8,
        '=', 3,
        '@', 18,
        '|', 4,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '#') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead)) ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == '|') ADVANCE(12);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__string_content);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '$') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead)) ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__string_content);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '.') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__double);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
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
      if (lookahead == 'F') ADVANCE(1);
      if (lookahead == 'N') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(4);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'u') ADVANCE(8);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(9);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_boolean_token1);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      END_STATE();
    case 21:
      if (lookahead == 'h') ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_nocache);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexerMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [STATE(0)] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_fun] = ACTIONS(1),
    [anon_sym_nocache] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym__integer] = ACTIONS(1),
    [sym__double] = ACTIONS(1),
    [aux_sym_boolean_token1] = ACTIONS(1),
    [aux_sym_boolean_token2] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(1),
  },
  [STATE(1)] = {
    [sym_source_file] = STATE(42),
    [sym_expression] = STATE(19),
    [sym_function_declaration] = STATE(10),
    [sym_binary_expression] = STATE(10),
    [sym_primary_expression] = STATE(10),
    [sym_string_literal] = STATE(8),
    [sym_variable] = STATE(8),
    [sym__literal] = STATE(8),
    [sym_number] = STATE(8),
    [sym_boolean] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_fun] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(13),
    [sym__integer] = ACTIONS(15),
    [sym__double] = ACTIONS(17),
    [aux_sym_boolean_token1] = ACTIONS(19),
    [aux_sym_boolean_token2] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
  },
  [STATE(2)] = {
    [sym_expression] = STATE(19),
    [sym_function_declaration] = STATE(10),
    [sym_binary_expression] = STATE(10),
    [sym_primary_expression] = STATE(10),
    [sym_string_literal] = STATE(8),
    [sym_variable] = STATE(8),
    [sym__literal] = STATE(8),
    [sym_number] = STATE(8),
    [sym_boolean] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_fun] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(13),
    [sym__integer] = ACTIONS(15),
    [sym__double] = ACTIONS(17),
    [aux_sym_boolean_token1] = ACTIONS(19),
    [aux_sym_boolean_token2] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
  },
  [STATE(3)] = {
    [sym_expression] = STATE(19),
    [sym_function_declaration] = STATE(10),
    [sym_binary_expression] = STATE(10),
    [sym_primary_expression] = STATE(10),
    [sym_string_literal] = STATE(8),
    [sym_variable] = STATE(8),
    [sym__literal] = STATE(8),
    [sym_number] = STATE(8),
    [sym_boolean] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_fun] = ACTIONS(28),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_DOLLAR] = ACTIONS(34),
    [anon_sym_AT] = ACTIONS(34),
    [sym__integer] = ACTIONS(37),
    [sym__double] = ACTIONS(40),
    [aux_sym_boolean_token1] = ACTIONS(43),
    [aux_sym_boolean_token2] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(25),
  },
  [STATE(4)] = {
    [sym_expression] = STATE(16),
    [sym_function_declaration] = STATE(10),
    [sym_binary_expression] = STATE(10),
    [sym_primary_expression] = STATE(10),
    [sym_string_literal] = STATE(8),
    [sym_variable] = STATE(8),
    [sym__literal] = STATE(8),
    [sym_number] = STATE(8),
    [sym_boolean] = STATE(8),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_fun] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(13),
    [sym__integer] = ACTIONS(15),
    [sym__double] = ACTIONS(17),
    [aux_sym_boolean_token1] = ACTIONS(19),
    [aux_sym_boolean_token2] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
  },
  [STATE(5)] = {
    [sym_expression] = STATE(14),
    [sym_function_declaration] = STATE(10),
    [sym_binary_expression] = STATE(10),
    [sym_primary_expression] = STATE(10),
    [sym_string_literal] = STATE(8),
    [sym_variable] = STATE(8),
    [sym__literal] = STATE(8),
    [sym_number] = STATE(8),
    [sym_boolean] = STATE(8),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_fun] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(13),
    [sym__integer] = ACTIONS(15),
    [sym__double] = ACTIONS(17),
    [aux_sym_boolean_token1] = ACTIONS(19),
    [aux_sym_boolean_token2] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
  },
  [STATE(6)] = {
    [sym_expression] = STATE(29),
    [sym_function_declaration] = STATE(10),
    [sym_binary_expression] = STATE(10),
    [sym_primary_expression] = STATE(10),
    [sym_string_literal] = STATE(8),
    [sym_variable] = STATE(8),
    [sym__literal] = STATE(8),
    [sym_number] = STATE(8),
    [sym_boolean] = STATE(8),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_fun] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(13),
    [sym__integer] = ACTIONS(15),
    [sym__double] = ACTIONS(17),
    [aux_sym_boolean_token1] = ACTIONS(19),
    [aux_sym_boolean_token2] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
  },
  [STATE(7)] = {
    [sym_expression] = STATE(28),
    [sym_function_declaration] = STATE(10),
    [sym_binary_expression] = STATE(10),
    [sym_primary_expression] = STATE(10),
    [sym_string_literal] = STATE(8),
    [sym_variable] = STATE(8),
    [sym__literal] = STATE(8),
    [sym_number] = STATE(8),
    [sym_boolean] = STATE(8),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_fun] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(13),
    [sym__integer] = ACTIONS(15),
    [sym__double] = ACTIONS(17),
    [aux_sym_boolean_token1] = ACTIONS(19),
    [aux_sym_boolean_token2] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 6,
      anon_sym_fun,
      sym__integer,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_null,
      sym_identifier,
    ACTIONS(46), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      sym__double,
  [22] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 6,
      anon_sym_fun,
      sym__integer,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_null,
      sym_identifier,
    ACTIONS(50), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      sym__double,
  [44] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 6,
      anon_sym_fun,
      sym__integer,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_null,
      sym_identifier,
    ACTIONS(54), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      sym__double,
  [66] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 6,
      anon_sym_fun,
      sym__integer,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_null,
      sym_identifier,
    ACTIONS(58), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      sym__double,
  [88] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 6,
      anon_sym_fun,
      sym__integer,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_null,
      sym_identifier,
    ACTIONS(62), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      sym__double,
  [110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 6,
      anon_sym_fun,
      sym__integer,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_null,
      sym_identifier,
    ACTIONS(66), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      sym__double,
  [132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 6,
      anon_sym_fun,
      sym__integer,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_null,
      sym_identifier,
    ACTIONS(70), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      sym__double,
  [154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 6,
      anon_sym_fun,
      sym__integer,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_null,
      sym_identifier,
    ACTIONS(74), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      sym__double,
  [176] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_AMP_AMP,
    ACTIONS(72), 6,
      anon_sym_fun,
      sym__integer,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_null,
      sym_identifier,
    ACTIONS(70), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      sym__double,
  [200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 6,
      anon_sym_fun,
      sym__integer,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_null,
      sym_identifier,
    ACTIONS(80), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      sym__double,
  [222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 6,
      anon_sym_fun,
      sym__integer,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_null,
      sym_identifier,
    ACTIONS(84), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      sym__double,
  [244] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_AMP_AMP,
    ACTIONS(92), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(88), 5,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_AT,
      sym__double,
    ACTIONS(90), 6,
      anon_sym_fun,
      sym__integer,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_null,
      sym_identifier,
  [269] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_parameter_list_repeat1,
  [285] = 4,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      sym__string_content,
    ACTIONS(104), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_string_literal_repeat1,
  [298] = 4,
    ACTIONS(104), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      sym__string_content,
    STATE(21), 1,
      aux_sym_string_literal_repeat1,
  [311] = 4,
    ACTIONS(104), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      sym__string_content,
    STATE(23), 1,
      aux_sym_string_literal_repeat1,
  [324] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_parameter_list_repeat1,
  [337] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      aux_sym_parameter_list_repeat1,
  [350] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      aux_sym_parameter_list_repeat1,
  [363] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      aux_sym_parameter_list_repeat1,
  [376] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_AMP_AMP,
    ACTIONS(92), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(124), 1,
      anon_sym_SEMI,
  [389] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_AMP_AMP,
    ACTIONS(92), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(126), 1,
      anon_sym_SEMI,
  [402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_parameter_list,
  [412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(132), 1,
      anon_sym_nocache,
  [430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_parameter_list,
  [440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_EQ_GT,
  [447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_identifier,
  [454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_EQ_GT,
  [461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym_identifier,
  [468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_EQ_GT,
  [475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym_identifier,
  [482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_EQ_GT,
  [489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_EQ_GT,
  [496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 22,
  [SMALL_STATE(10)] = 44,
  [SMALL_STATE(11)] = 66,
  [SMALL_STATE(12)] = 88,
  [SMALL_STATE(13)] = 110,
  [SMALL_STATE(14)] = 132,
  [SMALL_STATE(15)] = 154,
  [SMALL_STATE(16)] = 176,
  [SMALL_STATE(17)] = 200,
  [SMALL_STATE(18)] = 222,
  [SMALL_STATE(19)] = 244,
  [SMALL_STATE(20)] = 269,
  [SMALL_STATE(21)] = 285,
  [SMALL_STATE(22)] = 298,
  [SMALL_STATE(23)] = 311,
  [SMALL_STATE(24)] = 324,
  [SMALL_STATE(25)] = 337,
  [SMALL_STATE(26)] = 350,
  [SMALL_STATE(27)] = 363,
  [SMALL_STATE(28)] = 376,
  [SMALL_STATE(29)] = 389,
  [SMALL_STATE(30)] = 402,
  [SMALL_STATE(31)] = 412,
  [SMALL_STATE(32)] = 420,
  [SMALL_STATE(33)] = 430,
  [SMALL_STATE(34)] = 440,
  [SMALL_STATE(35)] = 447,
  [SMALL_STATE(36)] = 454,
  [SMALL_STATE(37)] = 461,
  [SMALL_STATE(38)] = 468,
  [SMALL_STATE(39)] = 475,
  [SMALL_STATE(40)] = 482,
  [SMALL_STATE(41)] = 489,
  [SMALL_STATE(42)] = 496,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 7, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_expression(void) {
  static const TSLanguage language = {
    .abi_version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .supertype_count = SUPERTYPE_COUNT,
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
    .lex_modes = (const void*)ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
    .name = "expression",
    .max_reserved_word_set_size = 0,
    .metadata = {
      .major_version = 0,
      .minor_version = 1,
      .patch_version = 0,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
