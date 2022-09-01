const PREC = {
  // https://introcs.cs.princeton.edu/java/11precedence/
  COMMENT:      0, // //  /*  */
  RANGE_SUFFIX: 1, // ..
  RANGE:        2, // ..
  ELEMENT_VAL:  2,
  TERNARY:      3, // ?:
  NIL_COALESCING: 3, // ??
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
  SUFFIX: 16,      // 10km
  ARRAY: 17,       // [Index]
  OBJ_ACCESS: 17,  // .
  PARENS: 17,      // (Expression)
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
        ['??', PREC.NIL_COALESCING],
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
      $.suffix_expression,
      $.open_start_range_expression,
      $.open_end_range_expression,
    ),
    
    prefix_expression: $ => choice(
      ...[
        ['!', PREC.UNARY],
      ].map(([operator, precedence]) =>
        prec.left(precedence, seq(
          field('operator', operator),
          field('operand', $._expression)
        ))
      )),
  
    suffix_expression: $ => prec.left(PREC.SUFFIX, seq(
        field('operand', $._expression),
        field('operator', $.unit)
      )),

    unit: $ => choice(
      "km",
      "m",
      "mi",
      "miles",
      "ft",
      "feet",
    ),

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
      $.constant,
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
        $.rating,
        $.boolean,
        $.string,
        $.array,
        $.nil,
      ),
    
    constant: ($) => choice(
      "id",
      "index",
      "pi",
      "now",
      "area",
      "coordinate",
      "distance",
      "latitude",
      "longitude",
      "length",
      "geometry",
      "clear",
      "white",
      "gray",
      "grey",
      "black",
      "red",
      "orange",
      "yellow",
      "green",
      "teal",
      "blue",
      "purple",
      "pink",
      "brown",
      "indigo",
      "linePoints",
      "collectionColor",
      "collectionLetter",
      "collectionName",
    ),

    identifier: ($) => choice(
      /[a-z][a-zA-Z0-9_]*/,
      seq('`', /[^`]+/, '`')
    ),

    type_identifier: ($) => /[A-Z][a-zA-Z0-9_]*/,

    boolean: ($) => choice("true", "false"),

    number: ($) => /[+-]?[0-9]+(\.[0-9]+)?/,

    rating: ($) => /[★☆]+/,

    string: ($) => choice(
      seq('"', repeat(choice(/[^"]/, /\\./)), '"'),
      seq("'", repeat(choice(/[^']/, /\\./)), "'")
    ),

    nil: ($) => "nil",

    array: ($) =>
      seq(
        "[",
        optional(sep1(field("element", $._expression), ",")),
        optional(","),
        "]"
      ),

    // TODO: `nil` or other constants?

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