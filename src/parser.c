/* Automatically generated by tree-sitter v0.25.3 */

#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 15
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define MAX_RESERVED_WORD_SET_SIZE 0
#define PRODUCTION_ID_COUNT 2
#define SUPERTYPE_COUNT 0

enum ts_symbol_identifiers {
  anon_sym_fun = 1,
  anon_sym_nocache = 2,
  anon_sym_EQ_GT = 3,
  anon_sym_SEMI = 4,
  anon_sym_LPAREN = 5,
  anon_sym_COMMA = 6,
  anon_sym_RPAREN = 7,
  anon_sym_PIPE_PIPE = 8,
  anon_sym_AMP_AMP = 9,
  sym_number = 10,
  aux_sym_boolean_token1 = 11,
  aux_sym_boolean_token2 = 12,
  sym_comment = 13,
  sym_identifier = 14,
  sym_source_file = 15,
  sym_expression = 16,
  sym_function_declaration = 17,
  sym_parameter_list = 18,
  sym_binary_expression = 19,
  sym_primary_expression = 20,
  sym__literal = 21,
  sym_boolean = 22,
  aux_sym_source_file_repeat1 = 23,
  aux_sym_parameter_list_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_expression] = "expression",
  [sym_function_declaration] = "function_declaration",
  [sym_parameter_list] = "parameter_list",
  [sym_binary_expression] = "binary_expression",
  [sym_primary_expression] = "primary_expression",
  [sym__literal] = "_literal",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym_expression] = sym_expression,
  [sym_function_declaration] = sym_function_declaration,
  [sym_parameter_list] = sym_parameter_list,
  [sym_binary_expression] = sym_binary_expression,
  [sym_primary_expression] = sym_primary_expression,
  [sym__literal] = sym__literal,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [sym_identifier] = {
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
  [sym__literal] = {
    .visible = false,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      ADVANCE_MAP(
        '#', 20,
        '&', 3,
        '(', 12,
        ')', 14,
        ',', 13,
        ';', 11,
        '=', 4,
        'F', 29,
        'f', 28,
        'n', 27,
        '|', 5,
        'T', 33,
        't', 33,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == ',') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == '|') ADVANCE(15);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      ADVANCE_MAP(
        '#', 20,
        '&', 3,
        ';', 11,
        'F', 29,
        'f', 28,
        '|', 5,
        'T', 33,
        't', 33,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_fun);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_nocache);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_boolean_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(26);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexerMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [STATE(0)] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_identifier] = ACTIONS(1),
  },
  [STATE(1)] = {
    [sym_source_file] = STATE(34),
    [sym_expression] = STATE(15),
    [sym_function_declaration] = STATE(9),
    [sym_binary_expression] = STATE(9),
    [sym_primary_expression] = STATE(9),
    [sym__literal] = STATE(10),
    [sym_boolean] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [aux_sym_boolean_token1] = ACTIONS(11),
    [aux_sym_boolean_token2] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(13),
  },
  [STATE(2)] = {
    [sym_expression] = STATE(15),
    [sym_function_declaration] = STATE(9),
    [sym_binary_expression] = STATE(9),
    [sym_primary_expression] = STATE(9),
    [sym__literal] = STATE(10),
    [sym_boolean] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_fun] = ACTIONS(17),
    [sym_number] = ACTIONS(20),
    [aux_sym_boolean_token1] = ACTIONS(23),
    [aux_sym_boolean_token2] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(26),
  },
  [STATE(3)] = {
    [sym_expression] = STATE(15),
    [sym_function_declaration] = STATE(9),
    [sym_binary_expression] = STATE(9),
    [sym_primary_expression] = STATE(9),
    [sym__literal] = STATE(10),
    [sym_boolean] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_fun] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [aux_sym_boolean_token1] = ACTIONS(11),
    [aux_sym_boolean_token2] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_fun,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(18), 1,
      sym_expression,
    ACTIONS(11), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(10), 2,
      sym__literal,
      sym_boolean,
    STATE(9), 3,
      sym_function_declaration,
      sym_binary_expression,
      sym_primary_expression,
  [29] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_fun,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(11), 1,
      sym_expression,
    ACTIONS(11), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(10), 2,
      sym__literal,
      sym_boolean,
    STATE(9), 3,
      sym_function_declaration,
      sym_binary_expression,
      sym_primary_expression,
  [58] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_fun,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(12), 1,
      sym_expression,
    ACTIONS(11), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(10), 2,
      sym__literal,
      sym_boolean,
    STATE(9), 3,
      sym_function_declaration,
      sym_binary_expression,
      sym_primary_expression,
  [87] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_fun,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(22), 1,
      sym_expression,
    ACTIONS(11), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    STATE(10), 2,
      sym__literal,
      sym_boolean,
    STATE(9), 3,
      sym_function_declaration,
      sym_binary_expression,
      sym_primary_expression,
  [116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 4,
      anon_sym_fun,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
    ACTIONS(31), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      sym_number,
  [133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 4,
      anon_sym_fun,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
    ACTIONS(35), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      sym_number,
  [150] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 4,
      anon_sym_fun,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
    ACTIONS(39), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      sym_number,
  [167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_AMP_AMP,
    ACTIONS(43), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      sym_number,
    ACTIONS(45), 4,
      anon_sym_fun,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
  [186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 4,
      anon_sym_fun,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
    ACTIONS(43), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      sym_number,
  [203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 4,
      anon_sym_fun,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
    ACTIONS(49), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      sym_number,
  [220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 4,
      anon_sym_fun,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
    ACTIONS(53), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      sym_number,
  [237] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_AMP_AMP,
    ACTIONS(61), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym_number,
    ACTIONS(59), 4,
      anon_sym_fun,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      sym_identifier,
  [257] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 1,
      sym_identifier,
    STATE(20), 1,
      aux_sym_parameter_list_repeat1,
  [273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(19), 1,
      aux_sym_parameter_list_repeat1,
  [286] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_AMP_AMP,
    ACTIONS(61), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(71), 1,
      anon_sym_SEMI,
  [299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    ACTIONS(76), 1,
      anon_sym_RPAREN,
    STATE(19), 1,
      aux_sym_parameter_list_repeat1,
  [312] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(78), 1,
      anon_sym_RPAREN,
    STATE(19), 1,
      aux_sym_parameter_list_repeat1,
  [325] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(78), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      aux_sym_parameter_list_repeat1,
  [338] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_AMP_AMP,
    ACTIONS(61), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(80), 1,
      anon_sym_SEMI,
  [351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_parameter_list,
  [361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_parameter_list,
  [371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_nocache,
    ACTIONS(86), 1,
      sym_identifier,
  [381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_EQ_GT,
  [396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_identifier,
  [403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_EQ_GT,
  [410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_identifier,
  [417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_EQ_GT,
  [424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_EQ_GT,
  [431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_EQ_GT,
  [438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 29,
  [SMALL_STATE(6)] = 58,
  [SMALL_STATE(7)] = 87,
  [SMALL_STATE(8)] = 116,
  [SMALL_STATE(9)] = 133,
  [SMALL_STATE(10)] = 150,
  [SMALL_STATE(11)] = 167,
  [SMALL_STATE(12)] = 186,
  [SMALL_STATE(13)] = 203,
  [SMALL_STATE(14)] = 220,
  [SMALL_STATE(15)] = 237,
  [SMALL_STATE(16)] = 257,
  [SMALL_STATE(17)] = 273,
  [SMALL_STATE(18)] = 286,
  [SMALL_STATE(19)] = 299,
  [SMALL_STATE(20)] = 312,
  [SMALL_STATE(21)] = 325,
  [SMALL_STATE(22)] = 338,
  [SMALL_STATE(23)] = 351,
  [SMALL_STATE(24)] = 361,
  [SMALL_STATE(25)] = 371,
  [SMALL_STATE(26)] = 381,
  [SMALL_STATE(27)] = 389,
  [SMALL_STATE(28)] = 396,
  [SMALL_STATE(29)] = 403,
  [SMALL_STATE(30)] = 410,
  [SMALL_STATE(31)] = 417,
  [SMALL_STATE(32)] = 424,
  [SMALL_STATE(33)] = 431,
  [SMALL_STATE(34)] = 438,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 7, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [102] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
