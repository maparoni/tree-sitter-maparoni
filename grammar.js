const PRECS = {
  multiplication: 11,
  addition: 10,
  infix_operations: 9,
  nil_coalescing: 8,
  check: 7,
  prefix_operations: 7,
  comparison: 6,
  postfix_operations: 6,
  equality: 5,
  conjunction: 4,
  disjunction: 3,
  // block: 2,
  // loop: 1,
  // keypath: 1,
  // control_transfer: 0,
  // as: -1,
  // tuple: -1,
  // if: -1,
  // switch: -1,
  // do: -1,
  fully_open_range: -1,
  range: -1,
  navigation: -1,
  expr: -1,
  // ty: -1,
  call: -2,
  ternary: -2,
  try: -2,
  call_suffix: -2,
  range_suffix: -2,
  ternary_binary_suffix: -2,
  // await: -2,
  // assignment: -3,
  comment: -3,
  // lambda: -3,
};

const DYNAMIC_PRECS = {
  call: 1,
};

module.exports = grammar({
  name: 'maparoni',

  rules: {
    source_file: $ => $._expression,

    _expression: $ => 
      prec(
        PRECS.expr,
        choice(
          $.identifier,
          $.boolean,
          $.number,
          $.string,
          $._unary_expression,
          $._binary_expression,
          // $.equality_expression,
          // TODO: other kinds of expressions
        )
      ),

    // Unary expressions
    _unary_expression: ($) =>
      choice(
        // $.postfix_expression,
        $.call_expression,
        $.navigation_expression,
        $.prefix_expression
      ),

    navigation_expression: ($) =>
      prec.left(
        PRECS.navigation,
        seq(
          field("target", $._expression),
          field("suffix", $.navigation_suffix)
        )
      ),      

    // Binary expressions
    _binary_expression: ($) =>
      choice(
        $.multiplicative_expression,
        $.additive_expression,
        // $.range_expression,
        // $.infix_expression,
        // $.nil_coalescing_expression,
        // $.check_expression,
        $.equality_expression
        // $.comparison_expression,
        // $.conjunction_expression,
        // $.disjunction_expression,
        // $.bitwise_operation
      ),
    multiplicative_expression: ($) =>
      prec.left(
        PRECS.multiplication,
        seq(
          field("lhs", $._expression),
          field("op", $._multiplicative_operator),
          field("rhs", $._expression)
        )
      ),
    additive_expression: ($) =>
      prec.left(
        PRECS.addition,
        seq(
          field("lhs", $._expression),
          field("op", $._additive_operator),
          field("rhs", $._expression)
        )
      ),
    // range_expression: ($) =>
    // prec.right(
    //   PRECS.range,
    //   seq(
    //     field("start", $._expression),
    //     field("op", $._range_operator),
    //     field("end", $._expression)
    //   )
    // ),
    // infix_expression: ($) =>
    // prec.left(
    //   PRECS.infix_operations,
    //   seq(
    //     field("lhs", $._expression),
    //     field("op", $.custom_operator),
    //     field("rhs", $._expression)
    //   )
    // ),
    // nil_coalescing_expression: ($) =>
    // prec.right(
    //   PRECS.nil_coalescing,
    //   seq(
    //     field("value", $._expression),
    //     $._nil_coalescing_operator,
    //     field("if_nil", $._expression)
    //   )
    // ),    
    equality_expression: $ => prec.left(
      PRECS.equality,
      seq(
        field("lhs", $._expression),
        choice(
          '==',
          '!='
        ),
        field("rhs", $._expression)
      )
    ),

    // Literals

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    boolean: ($) => choice("true", "false"),

    number: $ => /[0-9]+(\.[0-9]+)?/,

    string: $ => choice(
      seq('"', repeat(choice(/[^"]/, /\\./)), '"'),
      seq("'", repeat(choice(/[^']/, /\\./)), "'")
    ), 

    // TODO: Array literal ([1, 2, 3])
    // TODO: Variable literal (`foo bar`)

    // Arithmetic

    _prefix_operator: $ => prec.right(
      choice(
        '-',
        '+',
        '!'
      )
    ),
    prefix_expression: $ => prec.left(
      PRECS.prefix_operations,
      seq(
        field("operation", $._prefix_operator),
        $._expression
      )
    ),

    // TODO: Ternary expression (a ? b : c)
    // TODO: Unary expression (!a)
    // TODO: Binary expression (a + b)

    // Function call (foo(a, b))
    call_expression: ($) =>
      prec(
        PRECS.call,
        prec.dynamic(DYNAMIC_PRECS.call, seq($._expression, $._call_suffix))
      ),

    // Suffixes
    navigation_suffix: ($) =>
      seq(
        ".",
        field("suffix", $.identifier)
      ),

    _call_suffix: ($) =>
      prec(
        PRECS.call_suffix,
        seq(
          $.argument_list
        )
      ),

    argument_list: ($) =>
      seq(
        "(", 
        optional(
          sep1(
            field("value", $._expression), 
            ","
          )
        ), 
        ")"
      ),
    
      
    // TODO: Explicit member expression (foo.bar)

    // TODO: Comments???

    _additive_operator: ($) => choice("+", "-"),
    _multiplicative_operator: ($) => choice("*", "/", "%"),
  }
});

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}