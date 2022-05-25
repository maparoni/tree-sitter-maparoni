const PREC = {
  // https://introcs.cs.princeton.edu/java/11precedence/
  COMMENT: 0,      // //  /*  */
  RANGE_SUFFIX: 1, // ..
  RANGE:        2, // ..
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
        $.range_expression,
        $._primary_expression,
        $.ternary_expression,
      ),

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

    range_expression: $ => choice(
      ...[
        ['...', PREC.RANGE],
        ['..<', PREC.RANGE],
      ].map(([operator, precedence]) =>
        prec.left(precedence, seq(
          field('start', $._expression),
          field('operator', operator),
          field('end', $._expression)
        ))
      )),      

    _unary_expression: $ => choice(
      $.prefix_expression,
      $.open_start_range_expression,
      $.open_end_range_expression,
    ),
    
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

    open_start_range_expression: ($) =>
      prec.right(
        PREC.RANGE,
        seq(
          choice("..<", "..."),
          prec.right(PREC.RANGE_SUFFIX, field("end", $._expression))
        )
      ),
    
    open_end_range_expression: ($) =>
      prec.right(
        PREC.RANGE,
        seq(field("start", $._expression), "...")
      ),      

    _primary_expression: $ => choice(
      $.identifier,
      $._basic_literal,
      $.field_access,
      $.method_invocation,
    ),

    ternary_expression: $ => prec.right(PREC.TERNARY, seq(
      field('condition', $._expression),
      '?',
      field('consequence', $._expression),
      ':',
      field('alternative', $._expression)
    )),  

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
        $.array,
        "nil"
      ),    

    identifier: ($) => choice(
      /[a-z][a-zA-Z0-9_]*/,
      seq('`', /[^`]+/, '`')
    ),

    type_identifier: ($) => /[A-Z][a-zA-Z0-9_]*/,

    boolean: ($) => choice("true", "false"),

    number: ($) => /[0-9]+(\.[0-9]+)?/,

    string: ($) => choice(
      seq('"', repeat(choice(/[^"]/, /\\./)), '"'),
      seq("'", repeat(choice(/[^']/, /\\./)), "'")
    ), 

    array: ($) =>
      seq(
        "[",
        optional(sep1(field("element", $._expression), ",")),
        optional(","),
        "]"
      ),

    // TODO: Two-sided ranges (`1..<10`)

    // Fields

    field_access: ($) => seq(
      field('object', $._primary_expression),
      '.',
      field('field', $.identifier)
    ),    

    // Functions

    method_invocation: ($) => seq(
      choice(
        field('name', choice($.identifier, $.type_identifier)),
        seq(
          field('object', $._primary_expression),
          '.',
          field('name', $.identifier),
        )
      ),
      field('arguments', $.argument_list)
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
      
    // TODO: Comments???

  }
});

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}