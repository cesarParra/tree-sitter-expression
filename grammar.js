/**
 * @file Expression language for Salesforce projects
 * @author Cesar Parra <cesar.parra@gmail.com>
 * @license MIT
 */

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

    primary_expression: ($) => choice($._literal, $.identifier),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    // Literals

    _literal: ($) => choice($.number),

    number: ($) => /\d+/,

    // Comments are always one line starting with a #
    comment: ($) => token(seq("#")),
  },
});
