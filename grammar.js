const PREC = {
  // https://introcs.cs.princeton.edu/java/11precedence/
  COMMENT: 0,      // //  /*  */
  ELEMENT_VAL: 2,
  TERNARY: 3,      // ?:
  OR: 4,           // ||
  AND: 5,          // &&
  BIT_OR: 6,       // |
  BIT_XOR: 7,      // ^
  BIT_AND: 8,      // &
  EQUALITY: 9,     // ==  !=
  GENERIC: 10,
  REL: 10,         // <  <=  >  >=
  SHIFT: 11,       // <<  >>  >>>
  ADD: 12,         // +  -
  MULT: 13,        // *  /  %
  UNARY: 15,       // ++a  --a  a++  a--  +  -  !  ~
  ARRAY: 16,       // [Index]
  OBJ_ACCESS: 16,  // .
  PARENS: 16,      // (Expression)
};

module.exports = grammar({
  name: 'maparoni',

  rules: {
    expression: $ => $._expression,

    _expression: $=> choice(
        $._unary_expression,
        $.binary_expression,
        $._primary_expression,
        // TODO: other kinds of expressions
      ),

    // // Unary expressions
    // _unary_expression: ($) =>
    //   choice(
    //     // $.postfix_expression,
    //     $.call_expression,
    //     $.navigation_expression,
    //     $.prefix_expression
    //   ),

    // navigation_expression: ($) =>
    //   prec.left(
    //     PRECS.navigation,
    //     seq(
    //       field("target", $.expression),
    //       field("suffix", $.navigation_suffix)
    //     )
    //   ),      

    binary_expression: $ => choice(
      ...[
        ['>', PREC.REL],
        ['<', PREC.REL],
        ['>=', PREC.REL],
        ['<=', PREC.REL],
        ['==', PREC.EQUALITY],
        ['!=', PREC.EQUALITY],
        ['&&', PREC.AND],
        ['||', PREC.OR],
        ['+', PREC.ADD],
        ['-', PREC.ADD],
        ['*', PREC.MULT],
        ['/', PREC.MULT],
        ['&', PREC.BIT_AND],
        ['|', PREC.BIT_OR],
        ['^', PREC.BIT_XOR],
        ['%', PREC.MULT],
        ['<<', PREC.SHIFT],
        ['>>', PREC.SHIFT],
        ['>>>', PREC.SHIFT],
      ].map(([operator, precedence]) =>
        prec.left(precedence, seq(
          field('left', $._expression),
          field('operator', operator),
          field('right', $._expression)
        ))
      )),

    _unary_expression: $ => $.prefix_expression,
    
    prefix_expression: $ => choice(
      ...[
        ['+', PREC.UNARY],
        ['-', PREC.UNARY],
        ['!', PREC.UNARY],
      ].map(([operator, precedence]) =>
        prec.left(precedence, seq(
          field('operator', operator),
          field('operand', $._expression)
        ))
      )),      

    // TODO: Ternary expression (a ? b : c)

    _primary_expression: $ => choice(
      $.identifier,
      $._basic_literal,
      $.field_access,
      $.method_invocation,
  ),

    // Literals
    _basic_literal: ($) =>
      choice(
        $.number,
        // $.hex_literal,
        // $.oct_literal,
        // $.bin_literal,
        // $.real_literal,
        $.boolean,
        $.string,
        "nil"
      ),    

    identifier: $ => /[a-z][a-zA-Z0-9_]*/,

    boolean: ($) => choice("true", "false"),

    number: $ => /[0-9]+(\.[0-9]+)?/,

    string: $ => choice(
      seq('"', repeat(choice(/[^"]/, /\\./)), '"'),
      seq("'", repeat(choice(/[^']/, /\\./)), "'")
    ), 

    // TODO: Array literal ([1, 2, 3])
    // TODO: Variable literal (`foo bar`)

    // Fields

    field_access: $ => seq(
      field('object', $._primary_expression),
      '.',
      field('field', $.identifier)
    ),    

    // Functions

    method_invocation: $ => seq(
      choice(
        field('name', choice($.identifier, $.known_type)),
        seq(
          field('object', $._primary_expression),
          '.',
          field('name', $.identifier),
        )
      ),
      field('arguments', $.argument_list)
    ),

    // argument_list: $ => seq('(', commaSep($.expression), ')'),    

    // // Function call (foo(a, b))
    // call_expression: ($) =>
    //   prec(
    //     PRECS.call,
    //     // prec.dynamic(DYNAMIC_PRECS.call, seq(
    //     //   choice($.identifier, $.known_type), 
    //     //   $._call_suffix)
    //     // )
    //     prec.left(
    //       seq(
    //         choice($.identifier, $.known_type, $.navigation_expression), 
    //         $._call_suffix
    //       )
    //     )
    //   ),

    // // Suffixes
    // navigation_suffix: ($) =>
    //   seq(
    //     ".",
    //     field("suffix", $.identifier)
    //   ),

    // _call_suffix: ($) =>
    //   prec(
    //     PRECS.call_suffix,
    //     seq(
    //       $.argument_list
    //     )
    //   ),

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
      
    // TODO: Comments???
    // MAPARONI Specials

    known_type: $ => choice("Number", "Rating", "Date", "Time", "Instant", "Position", "Color", "RGB", "Style"),

  }
});

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}