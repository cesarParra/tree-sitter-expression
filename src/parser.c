/* Automatically generated by tree-sitter v0.25.3 */

#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 15
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
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
  sym_number = 11,
  aux_sym_boolean_token1 = 12,
  aux_sym_boolean_token2 = 13,
  sym_comment = 14,
  sym_null = 15,
  anon_sym_DQUOTE = 16,
  sym__string_content = 17,
  sym_source_file = 18,
  sym_expression = 19,
  sym_function_declaration = 20,
  sym_parameter_list = 21,
  sym_binary_expression = 22,
  sym_primary_expression = 23,
  sym__literal = 24,
  sym_boolean = 25,
  sym_string_literal = 26,
  aux_sym_source_file_repeat1 = 27,
  aux_sym_parameter_list_repeat1 = 28,
  aux_sym_string_literal_repeat1 = 29,
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
  [sym_number] = "number",
  [aux_sym_boolean_token1] = "boolean_token1",
  [aux_sym_boolean_token2] = "boolean_token2",
  [sym_comment] = "comment",
  [sym_null] = "null",
  [anon_sym_DQUOTE] = "\"",
  [sym__string_content] = "_string_content",
  [sym_source_file] = "source_file",
  [sym_expression] = "expression",
  [sym_function_declaration] = "function_declaration",
  [sym_parameter_list] = "parameter_list",
  [sym_binary_expression] = "binary_expression",
  [sym_primary_expression] = "primary_expression",
  [sym__literal] = "_literal",
  [sym_boolean] = "boolean",
  [sym_string_literal] = "string_literal",
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
  [sym_number] = sym_number,
  [aux_sym_boolean_token1] = aux_sym_boolean_token1,
  [aux_sym_boolean_token2] = aux_sym_boolean_token2,
  [sym_comment] = sym_comment,
  [sym_null] = sym_null,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__string_content] = sym__string_content,
  [sym_source_file] = sym_source_file,
  [sym_expression] = sym_expression,
  [sym_function_declaration] = sym_function_declaration,
  [sym_parameter_list] = sym_parameter_list,
  [sym_binary_expression] = sym_binary_expression,
  [sym_primary_expression] = sym_primary_expression,
  [sym__literal] = sym__literal,
  [sym_boolean] = sym_boolean,
  [sym_string_literal] = sym_string_literal,
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
  [sym_number] = {
    .visible = true,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__string_content] = {
    .visible = false,
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
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      ADVANCE_MAP(
        '"', 15,
        '#', 14,
        '&', 2,
        '(', 8,
        ')', 10,
        ',', 9,
        ';', 7,
        '=', 3,
        '|', 4,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead)) ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == '|') ADVANCE(11);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__string_content);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '$') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead)) ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__string_content);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
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
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
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
    [sym_number] = ACTIONS(1),
    [aux_sym_boolean_token1] = ACTIONS(1),
    [aux_sym_boolean_token2] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [STATE(1)] = {
    [sym_source_file] = STATE(34),
    [sym_expression] = STATE(17),
    [sym_function_declaration] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_primary_expression] = STATE(14),
    [sym__literal] = STATE(11),
    [sym_boolean] = STATE(11),
    [sym_string_literal] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_fun] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [aux_sym_boolean_token1] = ACTIONS(13),
    [aux_sym_boolean_token2] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(15),
  },
  [STATE(2)] = {
    [sym_expression] = STATE(17),
    [sym_function_declaration] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_primary_expression] = STATE(14),
    [sym__literal] = STATE(11),
    [sym_boolean] = STATE(11),
    [sym_string_literal] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_fun] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [aux_sym_boolean_token1] = ACTIONS(13),
    [aux_sym_boolean_token2] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(15),
  },
  [STATE(3)] = {
    [sym_expression] = STATE(17),
    [sym_function_declaration] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_primary_expression] = STATE(14),
    [sym__literal] = STATE(11),
    [sym_boolean] = STATE(11),
    [sym_string_literal] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_fun] = ACTIONS(24),
    [sym_number] = ACTIONS(27),
    [aux_sym_boolean_token1] = ACTIONS(30),
    [aux_sym_boolean_token2] = ACTIONS(30),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(33),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_fun,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_expression,
    ACTIONS(7), 2,
      sym_null,
      sym_identifier,
    ACTIONS(13), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(11), 3,
      sym__literal,
      sym_boolean,
      sym_string_literal,
    STATE(14), 3,
      sym_function_declaration,
      sym_binary_expression,
      sym_primary_expression,
  [34] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_fun,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_expression,
    ACTIONS(7), 2,
      sym_null,
      sym_identifier,
    ACTIONS(13), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(11), 3,
      sym__literal,
      sym_boolean,
      sym_string_literal,
    STATE(14), 3,
      sym_function_declaration,
      sym_binary_expression,
      sym_primary_expression,
  [68] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_fun,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym_expression,
    ACTIONS(7), 2,
      sym_null,
      sym_identifier,
    ACTIONS(13), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(11), 3,
      sym__literal,
      sym_boolean,
      sym_string_literal,
    STATE(14), 3,
      sym_function_declaration,
      sym_binary_expression,
      sym_primary_expression,
  [102] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_fun,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      sym_expression,
    ACTIONS(7), 2,
      sym_null,
      sym_identifier,
    ACTIONS(13), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(11), 3,
      sym__literal,
      sym_boolean,
      sym_string_literal,
    STATE(14), 3,
      sym_function_declaration,
      sym_binary_expression,
      sym_primary_expression,
  [136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 5,
      anon_sym_fun,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_null,
      sym_identifier,
    ACTIONS(36), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      sym_number,
      anon_sym_DQUOTE,
  [155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 5,
      anon_sym_fun,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_null,
      sym_identifier,
    ACTIONS(40), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      sym_number,
      anon_sym_DQUOTE,
  [174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 5,
      anon_sym_fun,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_null,
      sym_identifier,
    ACTIONS(44), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      sym_number,
      anon_sym_DQUOTE,
  [193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 5,
      anon_sym_fun,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_null,
      sym_identifier,
    ACTIONS(48), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      sym_number,
      anon_sym_DQUOTE,
  [212] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_AMP_AMP,
    ACTIONS(52), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(54), 5,
      anon_sym_fun,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_null,
      sym_identifier,
  [233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 5,
      anon_sym_fun,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_null,
      sym_identifier,
    ACTIONS(52), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      sym_number,
      anon_sym_DQUOTE,
  [252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 5,
      anon_sym_fun,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_null,
      sym_identifier,
    ACTIONS(58), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      sym_number,
      anon_sym_DQUOTE,
  [271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 5,
      anon_sym_fun,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_null,
      sym_identifier,
    ACTIONS(62), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      sym_number,
      anon_sym_DQUOTE,
  [290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 5,
      anon_sym_fun,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_null,
      sym_identifier,
    ACTIONS(66), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      sym_number,
      anon_sym_DQUOTE,
  [309] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_AMP_AMP,
    ACTIONS(74), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(70), 3,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(72), 5,
      anon_sym_fun,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_null,
      sym_identifier,
  [331] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    ACTIONS(80), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_parameter_list_repeat1,
  [347] = 4,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      sym__string_content,
    STATE(21), 1,
      aux_sym_string_literal_repeat1,
  [360] = 4,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      sym__string_content,
    STATE(20), 1,
      aux_sym_string_literal_repeat1,
  [373] = 4,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym__string_content,
    STATE(20), 1,
      aux_sym_string_literal_repeat1,
  [386] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_parameter_list_repeat1,
  [399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      aux_sym_parameter_list_repeat1,
  [412] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_parameter_list_repeat1,
  [425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_AMP_AMP,
    ACTIONS(74), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(101), 1,
      anon_sym_SEMI,
  [438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_COMMA,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_parameter_list_repeat1,
  [451] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_AMP_AMP,
    ACTIONS(74), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(108), 1,
      anon_sym_SEMI,
  [464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_nocache,
  [474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_parameter_list,
  [484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_parameter_list,
  [494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_EQ_GT,
  [509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym_identifier,
  [516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
  [523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_EQ_GT,
  [530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_identifier,
  [537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_EQ_GT,
  [544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_EQ_GT,
  [551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_EQ_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 34,
  [SMALL_STATE(6)] = 68,
  [SMALL_STATE(7)] = 102,
  [SMALL_STATE(8)] = 136,
  [SMALL_STATE(9)] = 155,
  [SMALL_STATE(10)] = 174,
  [SMALL_STATE(11)] = 193,
  [SMALL_STATE(12)] = 212,
  [SMALL_STATE(13)] = 233,
  [SMALL_STATE(14)] = 252,
  [SMALL_STATE(15)] = 271,
  [SMALL_STATE(16)] = 290,
  [SMALL_STATE(17)] = 309,
  [SMALL_STATE(18)] = 331,
  [SMALL_STATE(19)] = 347,
  [SMALL_STATE(20)] = 360,
  [SMALL_STATE(21)] = 373,
  [SMALL_STATE(22)] = 386,
  [SMALL_STATE(23)] = 399,
  [SMALL_STATE(24)] = 412,
  [SMALL_STATE(25)] = 425,
  [SMALL_STATE(26)] = 438,
  [SMALL_STATE(27)] = 451,
  [SMALL_STATE(28)] = 464,
  [SMALL_STATE(29)] = 474,
  [SMALL_STATE(30)] = 484,
  [SMALL_STATE(31)] = 494,
  [SMALL_STATE(32)] = 502,
  [SMALL_STATE(33)] = 509,
  [SMALL_STATE(34)] = 516,
  [SMALL_STATE(35)] = 523,
  [SMALL_STATE(36)] = 530,
  [SMALL_STATE(37)] = 537,
  [SMALL_STATE(38)] = 544,
  [SMALL_STATE(39)] = 551,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 7, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [120] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 0),
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
