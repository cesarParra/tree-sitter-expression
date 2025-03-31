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
      choice($._literal, $.identifier, $.string_literal),

    // Literals

    _literal: ($) => choice($.number, $.boolean, $.null),

    number: ($) => /\d+/,

    boolean: ($) => choice(caseInsensitive("true"), caseInsensitive("false")),

    comment: ($) => token("#"),

    null: ($) => caseInsensitive("null"),

    string_literal: ($) => seq('"', repeat(choice($._string_content)), '"'),

    _string_content: ($) => token(prec(1, /[^"$][^"]*/)),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
  },
});

// TODO: Queries
// TODO: String templates
