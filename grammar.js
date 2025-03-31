/**
 * @file Expression language for Salesforce projects
 * @author Cesar Parra <cesar.parra@gmail.com>
 * @license MIT
 */

function caseInsensitive(keyword) {
  return new RegExp(
    keyword
      .split("")
      .map((letter) => `[${letter}${letter.toUpperCase()}]`)
      .join(""),
  );
}

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  COMMENT: 0,
  OR: 1,
  AND: 2,
  EQUALITY: 3,
  COMPARISON: 4,
  TERM: 5,
  FACTOR: 6,
  CALL: 7,
};

module.exports = grammar({
  name: "expression",

  extras: ($) => [/\s/, $.comment],

  word: ($) => $.identifier,

  rules: {
    source_file: ($) => repeat($.expression),

    // Expressions

    expression: ($) =>
      choice($.function_declaration, $.binary_expression, $.primary_expression),

    function_declaration: ($) =>
      seq(
        "fun",
        optional("nocache"),
        $.identifier,
        $.parameter_list,
        "=>",
        $.expression,
        ";",
      ),

    parameter_list: ($) =>
      seq("(", optional($.identifier), repeat(seq(",", $.identifier)), ")"),

    binary_expression: ($) =>
      choice(
        ...[
          ["||", PREC.OR],
          ["&&", PREC.AND],
        ].map(([operator, precedence]) =>
          prec.left(
            precedence,
            seq(
              field("left", $.expression),
              // @ts-expect-error - Ignore TS error
              field("operator", operator),
              field("right", $.expression),
            ),
          ),
        ),
      ),

    // Primary Expressions

    primary_expression: ($) =>
      choice(
        $._literal,
        $.string_literal,
        $.variable,
        $.function_call,
        $.grouped_expression,
        $.identifier,
      ),

    string_literal: ($) => seq('"', repeat(choice($._string_content)), '"'),

    _string_content: ($) => token(prec(1, /[^"$][^"]*/)),

    // A custom variable is any identifier that starts with a $
    // While a context variable is any identifier that starts with a @

    variable: ($) => choice(seq("$", $.identifier), seq("@", $.identifier)),

    function_call: ($) =>
      prec(PREC.CALL, seq($.identifier, "(", optional($.argument_list), ")")),

    argument_list: ($) => seq($.expression, repeat(seq(",", $.expression))),

    grouped_expression: ($) => seq("(", $.expression, ")"),

    // Literals

    _literal: ($) => choice($.number, $.boolean, $.null),

    number: ($) => choice($._integer, $._double),

    _integer: ($) => /\d+/,

    _double: ($) => /\d+\.\d+/,

    boolean: ($) => choice(caseInsensitive("true"), caseInsensitive("false")),

    comment: ($) => token("#"),

    null: ($) => caseInsensitive("null"),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
  },
});

// TODO: Queries
// TODO: String templates
