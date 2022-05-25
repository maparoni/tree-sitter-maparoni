#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 80
#define LARGE_STATE_COUNT 24
#define SYMBOL_COUNT 97
#define ALIAS_COUNT 0
#define TOKEN_COUNT 74
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 16

enum {
  anon_sym_GT = 1,
  anon_sym_LT = 2,
  anon_sym_GT_EQ = 3,
  anon_sym_LT_EQ = 4,
  anon_sym_EQ_EQ = 5,
  anon_sym_BANG_EQ = 6,
  anon_sym_AMP_AMP = 7,
  anon_sym_PIPE_PIPE = 8,
  anon_sym_PLUS = 9,
  anon_sym_DASH = 10,
  anon_sym_STAR = 11,
  anon_sym_SLASH = 12,
  anon_sym_AMP = 13,
  anon_sym_PIPE = 14,
  anon_sym_CARET = 15,
  anon_sym_PERCENT = 16,
  anon_sym_LT_LT = 17,
  anon_sym_GT_GT = 18,
  anon_sym_GT_GT_GT = 19,
  anon_sym_DOT_DOT_DOT = 20,
  anon_sym_DOT_DOT_LT = 21,
  anon_sym_BANG = 22,
  anon_sym_QMARK = 23,
  anon_sym_COLON = 24,
  anon_sym_nil = 25,
  anon_sym_id = 26,
  anon_sym_index = 27,
  anon_sym_pi = 28,
  anon_sym_now = 29,
  anon_sym_area = 30,
  anon_sym_coordinate = 31,
  anon_sym_distance = 32,
  anon_sym_latitude = 33,
  anon_sym_longitude = 34,
  anon_sym_length = 35,
  anon_sym_geometry = 36,
  anon_sym_clear = 37,
  anon_sym_white = 38,
  anon_sym_gray = 39,
  anon_sym_grey = 40,
  anon_sym_black = 41,
  anon_sym_red = 42,
  anon_sym_orange = 43,
  anon_sym_yellow = 44,
  anon_sym_green = 45,
  anon_sym_teal = 46,
  anon_sym_blue = 47,
  anon_sym_purple = 48,
  anon_sym_pink = 49,
  anon_sym_brown = 50,
  anon_sym_indigo = 51,
  anon_sym_linePoints = 52,
  anon_sym_collectionColor = 53,
  anon_sym_collectionLetter = 54,
  anon_sym_collectionName = 55,
  aux_sym_identifier_token1 = 56,
  anon_sym_BQUOTE = 57,
  aux_sym_identifier_token2 = 58,
  sym_type_identifier = 59,
  anon_sym_true = 60,
  anon_sym_false = 61,
  sym_number = 62,
  anon_sym_DQUOTE = 63,
  aux_sym_string_token1 = 64,
  aux_sym_string_token2 = 65,
  anon_sym_SQUOTE = 66,
  aux_sym_string_token3 = 67,
  anon_sym_LBRACK = 68,
  anon_sym_COMMA = 69,
  anon_sym_RBRACK = 70,
  anon_sym_DOT = 71,
  anon_sym_LPAREN = 72,
  anon_sym_RPAREN = 73,
  sym_expression = 74,
  sym__expression = 75,
  sym_binary_expression = 76,
  sym_range_expression = 77,
  sym__unary_expression = 78,
  sym_prefix_expression = 79,
  sym_open_start_range_expression = 80,
  sym_open_end_range_expression = 81,
  sym__primary_expression = 82,
  sym_ternary_expression = 83,
  sym__basic_literal = 84,
  sym_constant = 85,
  sym_identifier = 86,
  sym_boolean = 87,
  sym_string = 88,
  sym_array = 89,
  sym_field_access = 90,
  sym_method_invocation = 91,
  sym_argument_list = 92,
  aux_sym_string_repeat1 = 93,
  aux_sym_string_repeat2 = 94,
  aux_sym_array_repeat1 = 95,
  aux_sym_argument_list_repeat1 = 96,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_GT_GT_GT] = ">>>",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_DOT_DOT_LT] = "..<",
  [anon_sym_BANG] = "!",
  [anon_sym_QMARK] = "\?",
  [anon_sym_COLON] = ":",
  [anon_sym_nil] = "nil",
  [anon_sym_id] = "id",
  [anon_sym_index] = "index",
  [anon_sym_pi] = "pi",
  [anon_sym_now] = "now",
  [anon_sym_area] = "area",
  [anon_sym_coordinate] = "coordinate",
  [anon_sym_distance] = "distance",
  [anon_sym_latitude] = "latitude",
  [anon_sym_longitude] = "longitude",
  [anon_sym_length] = "length",
  [anon_sym_geometry] = "geometry",
  [anon_sym_clear] = "clear",
  [anon_sym_white] = "white",
  [anon_sym_gray] = "gray",
  [anon_sym_grey] = "grey",
  [anon_sym_black] = "black",
  [anon_sym_red] = "red",
  [anon_sym_orange] = "orange",
  [anon_sym_yellow] = "yellow",
  [anon_sym_green] = "green",
  [anon_sym_teal] = "teal",
  [anon_sym_blue] = "blue",
  [anon_sym_purple] = "purple",
  [anon_sym_pink] = "pink",
  [anon_sym_brown] = "brown",
  [anon_sym_indigo] = "indigo",
  [anon_sym_linePoints] = "linePoints",
  [anon_sym_collectionColor] = "collectionColor",
  [anon_sym_collectionLetter] = "collectionLetter",
  [anon_sym_collectionName] = "collectionName",
  [aux_sym_identifier_token1] = "identifier_token1",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_identifier_token2] = "identifier_token2",
  [sym_type_identifier] = "type_identifier",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token3] = "string_token3",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_expression] = "expression",
  [sym__expression] = "_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_range_expression] = "range_expression",
  [sym__unary_expression] = "_unary_expression",
  [sym_prefix_expression] = "prefix_expression",
  [sym_open_start_range_expression] = "open_start_range_expression",
  [sym_open_end_range_expression] = "open_end_range_expression",
  [sym__primary_expression] = "_primary_expression",
  [sym_ternary_expression] = "ternary_expression",
  [sym__basic_literal] = "_basic_literal",
  [sym_constant] = "constant",
  [sym_identifier] = "identifier",
  [sym_boolean] = "boolean",
  [sym_string] = "string",
  [sym_array] = "array",
  [sym_field_access] = "field_access",
  [sym_method_invocation] = "method_invocation",
  [sym_argument_list] = "argument_list",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_GT_GT_GT] = anon_sym_GT_GT_GT,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_DOT_DOT_LT] = anon_sym_DOT_DOT_LT,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_nil] = anon_sym_nil,
  [anon_sym_id] = anon_sym_id,
  [anon_sym_index] = anon_sym_index,
  [anon_sym_pi] = anon_sym_pi,
  [anon_sym_now] = anon_sym_now,
  [anon_sym_area] = anon_sym_area,
  [anon_sym_coordinate] = anon_sym_coordinate,
  [anon_sym_distance] = anon_sym_distance,
  [anon_sym_latitude] = anon_sym_latitude,
  [anon_sym_longitude] = anon_sym_longitude,
  [anon_sym_length] = anon_sym_length,
  [anon_sym_geometry] = anon_sym_geometry,
  [anon_sym_clear] = anon_sym_clear,
  [anon_sym_white] = anon_sym_white,
  [anon_sym_gray] = anon_sym_gray,
  [anon_sym_grey] = anon_sym_grey,
  [anon_sym_black] = anon_sym_black,
  [anon_sym_red] = anon_sym_red,
  [anon_sym_orange] = anon_sym_orange,
  [anon_sym_yellow] = anon_sym_yellow,
  [anon_sym_green] = anon_sym_green,
  [anon_sym_teal] = anon_sym_teal,
  [anon_sym_blue] = anon_sym_blue,
  [anon_sym_purple] = anon_sym_purple,
  [anon_sym_pink] = anon_sym_pink,
  [anon_sym_brown] = anon_sym_brown,
  [anon_sym_indigo] = anon_sym_indigo,
  [anon_sym_linePoints] = anon_sym_linePoints,
  [anon_sym_collectionColor] = anon_sym_collectionColor,
  [anon_sym_collectionLetter] = anon_sym_collectionLetter,
  [anon_sym_collectionName] = anon_sym_collectionName,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_identifier_token2] = aux_sym_identifier_token2,
  [sym_type_identifier] = sym_type_identifier,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_expression] = sym_expression,
  [sym__expression] = sym__expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_range_expression] = sym_range_expression,
  [sym__unary_expression] = sym__unary_expression,
  [sym_prefix_expression] = sym_prefix_expression,
  [sym_open_start_range_expression] = sym_open_start_range_expression,
  [sym_open_end_range_expression] = sym_open_end_range_expression,
  [sym__primary_expression] = sym__primary_expression,
  [sym_ternary_expression] = sym_ternary_expression,
  [sym__basic_literal] = sym__basic_literal,
  [sym_constant] = sym_constant,
  [sym_identifier] = sym_identifier,
  [sym_boolean] = sym_boolean,
  [sym_string] = sym_string,
  [sym_array] = sym_array,
  [sym_field_access] = sym_field_access,
  [sym_method_invocation] = sym_method_invocation,
  [sym_argument_list] = sym_argument_list,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_now] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_area] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_coordinate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_distance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_latitude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_longitude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_length] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_geometry] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clear] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_white] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_grey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_black] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_red] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orange] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yellow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_green] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_teal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_purple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pink] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_indigo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_linePoints] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_collectionColor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_collectionLetter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_collectionName] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_range_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__unary_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_prefix_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_open_start_range_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_open_end_range_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__primary_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_ternary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__basic_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_field_access] = {
    .visible = true,
    .named = true,
  },
  [sym_method_invocation] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alternative = 1,
  field_arguments = 2,
  field_condition = 3,
  field_consequence = 4,
  field_element = 5,
  field_end = 6,
  field_field = 7,
  field_left = 8,
  field_name = 9,
  field_object = 10,
  field_operand = 11,
  field_operator = 12,
  field_right = 13,
  field_start = 14,
  field_value = 15,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_arguments] = "arguments",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_element] = "element",
  [field_end] = "end",
  [field_field] = "field",
  [field_left] = "left",
  [field_name] = "name",
  [field_object] = "object",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_start] = "start",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 3},
  [7] = {.index = 10, .length = 3},
  [8] = {.index = 13, .length = 2},
  [9] = {.index = 15, .length = 1},
  [10] = {.index = 16, .length = 2},
  [11] = {.index = 18, .length = 2},
  [12] = {.index = 20, .length = 3},
  [13] = {.index = 23, .length = 2},
  [14] = {.index = 25, .length = 2},
  [15] = {.index = 27, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operand, 1},
    {field_operator, 0},
  [2] =
    {field_end, 1},
  [3] =
    {field_arguments, 1},
    {field_name, 0},
  [5] =
    {field_start, 0},
  [6] =
    {field_element, 1},
  [7] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [10] =
    {field_end, 2},
    {field_operator, 1},
    {field_start, 0},
  [13] =
    {field_field, 2},
    {field_object, 0},
  [15] =
    {field_value, 1},
  [16] =
    {field_element, 1},
    {field_element, 2, .inherited = true},
  [18] =
    {field_element, 0, .inherited = true},
    {field_element, 1, .inherited = true},
  [20] =
    {field_arguments, 3},
    {field_name, 2},
    {field_object, 0},
  [23] =
    {field_value, 1},
    {field_value, 2, .inherited = true},
  [25] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [27] =
    {field_alternative, 4},
    {field_condition, 0},
    {field_consequence, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '!') ADVANCE(31);
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '%') ADVANCE(25);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '(') ADVANCE(214);
      if (lookahead == ')') ADVANCE(215);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(18);
      if (lookahead == ',') ADVANCE(211);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '.') ADVANCE(213);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '>') ADVANCE(10);
      if (lookahead == '?') ADVANCE(32);
      if (lookahead == '[') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == ']') ADVANCE(212);
      if (lookahead == '^') ADVANCE(24);
      if (lookahead == '`') ADVANCE(193);
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead == 'b') ADVANCE(128);
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead == 'f') ADVANCE(67);
      if (lookahead == 'g') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == 'p') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(101);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == 'w') ADVANCE(116);
      if (lookahead == 'y') ADVANCE(104);
      if (lookahead == '|') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('e' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(196);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '<') ADVANCE(30);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == '`') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 6:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(195);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 8:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(27);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(26);
      if (lookahead == '=') ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(16);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(17);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_LT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(15);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_index);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_pi);
      if (lookahead == 'n') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_now);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_area);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_coordinate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_distance);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_latitude);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_longitude);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_length);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_geometry);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_clear);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_white);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_gray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_grey);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_black);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_red);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_orange);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_yellow);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_green);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_teal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_blue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_purple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_pink);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_brown);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_indigo);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_linePoints);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_collectionColor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_collectionLetter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_collectionName);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'C') ADVANCE(156);
      if (lookahead == 'L') ADVANCE(109);
      if (lookahead == 'N') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'P') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'e') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == 'i') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == 'y') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'k') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'k') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'w') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'w') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'w') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'x') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'y') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'y') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_type_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(202);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(207);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(3);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
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
  [21] = {.lex_state = 0},
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
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_GT_GT_GT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT_LT] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [anon_sym_id] = ACTIONS(1),
    [anon_sym_index] = ACTIONS(1),
    [anon_sym_pi] = ACTIONS(1),
    [anon_sym_now] = ACTIONS(1),
    [anon_sym_area] = ACTIONS(1),
    [anon_sym_coordinate] = ACTIONS(1),
    [anon_sym_distance] = ACTIONS(1),
    [anon_sym_latitude] = ACTIONS(1),
    [anon_sym_longitude] = ACTIONS(1),
    [anon_sym_length] = ACTIONS(1),
    [anon_sym_geometry] = ACTIONS(1),
    [anon_sym_clear] = ACTIONS(1),
    [anon_sym_white] = ACTIONS(1),
    [anon_sym_gray] = ACTIONS(1),
    [anon_sym_grey] = ACTIONS(1),
    [anon_sym_black] = ACTIONS(1),
    [anon_sym_red] = ACTIONS(1),
    [anon_sym_orange] = ACTIONS(1),
    [anon_sym_yellow] = ACTIONS(1),
    [anon_sym_green] = ACTIONS(1),
    [anon_sym_teal] = ACTIONS(1),
    [anon_sym_blue] = ACTIONS(1),
    [anon_sym_purple] = ACTIONS(1),
    [anon_sym_pink] = ACTIONS(1),
    [anon_sym_brown] = ACTIONS(1),
    [anon_sym_indigo] = ACTIONS(1),
    [anon_sym_linePoints] = ACTIONS(1),
    [anon_sym_collectionColor] = ACTIONS(1),
    [anon_sym_collectionLetter] = ACTIONS(1),
    [anon_sym_collectionName] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym_type_identifier] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_expression] = STATE(78),
    [sym__expression] = STATE(62),
    [sym_binary_expression] = STATE(62),
    [sym_range_expression] = STATE(62),
    [sym__unary_expression] = STATE(62),
    [sym_prefix_expression] = STATE(62),
    [sym_open_start_range_expression] = STATE(62),
    [sym_open_end_range_expression] = STATE(62),
    [sym__primary_expression] = STATE(30),
    [sym_ternary_expression] = STATE(62),
    [sym__basic_literal] = STATE(30),
    [sym_constant] = STATE(30),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(30),
    [sym_string] = STATE(30),
    [sym_array] = STATE(30),
    [sym_field_access] = STATE(30),
    [sym_method_invocation] = STATE(30),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_nil] = ACTIONS(7),
    [anon_sym_id] = ACTIONS(9),
    [anon_sym_index] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(9),
    [anon_sym_now] = ACTIONS(9),
    [anon_sym_area] = ACTIONS(9),
    [anon_sym_coordinate] = ACTIONS(9),
    [anon_sym_distance] = ACTIONS(9),
    [anon_sym_latitude] = ACTIONS(9),
    [anon_sym_longitude] = ACTIONS(9),
    [anon_sym_length] = ACTIONS(9),
    [anon_sym_geometry] = ACTIONS(9),
    [anon_sym_clear] = ACTIONS(9),
    [anon_sym_white] = ACTIONS(9),
    [anon_sym_gray] = ACTIONS(9),
    [anon_sym_grey] = ACTIONS(9),
    [anon_sym_black] = ACTIONS(9),
    [anon_sym_red] = ACTIONS(9),
    [anon_sym_orange] = ACTIONS(9),
    [anon_sym_yellow] = ACTIONS(9),
    [anon_sym_green] = ACTIONS(9),
    [anon_sym_teal] = ACTIONS(9),
    [anon_sym_blue] = ACTIONS(9),
    [anon_sym_purple] = ACTIONS(9),
    [anon_sym_pink] = ACTIONS(9),
    [anon_sym_brown] = ACTIONS(9),
    [anon_sym_indigo] = ACTIONS(9),
    [anon_sym_linePoints] = ACTIONS(9),
    [anon_sym_collectionColor] = ACTIONS(9),
    [anon_sym_collectionLetter] = ACTIONS(9),
    [anon_sym_collectionName] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [sym_type_identifier] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [2] = {
    [sym__expression] = STATE(57),
    [sym_binary_expression] = STATE(57),
    [sym_range_expression] = STATE(57),
    [sym__unary_expression] = STATE(57),
    [sym_prefix_expression] = STATE(57),
    [sym_open_start_range_expression] = STATE(57),
    [sym_open_end_range_expression] = STATE(57),
    [sym__primary_expression] = STATE(30),
    [sym_ternary_expression] = STATE(57),
    [sym__basic_literal] = STATE(30),
    [sym_constant] = STATE(30),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(30),
    [sym_string] = STATE(30),
    [sym_array] = STATE(30),
    [sym_field_access] = STATE(30),
    [sym_method_invocation] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(27),
    [anon_sym_BANG_EQ] = ACTIONS(27),
    [anon_sym_AMP_AMP] = ACTIONS(27),
    [anon_sym_PIPE_PIPE] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_CARET] = ACTIONS(27),
    [anon_sym_PERCENT] = ACTIONS(27),
    [anon_sym_LT_LT] = ACTIONS(27),
    [anon_sym_GT_GT] = ACTIONS(29),
    [anon_sym_GT_GT_GT] = ACTIONS(27),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_nil] = ACTIONS(7),
    [anon_sym_id] = ACTIONS(9),
    [anon_sym_index] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(9),
    [anon_sym_now] = ACTIONS(9),
    [anon_sym_area] = ACTIONS(9),
    [anon_sym_coordinate] = ACTIONS(9),
    [anon_sym_distance] = ACTIONS(9),
    [anon_sym_latitude] = ACTIONS(9),
    [anon_sym_longitude] = ACTIONS(9),
    [anon_sym_length] = ACTIONS(9),
    [anon_sym_geometry] = ACTIONS(9),
    [anon_sym_clear] = ACTIONS(9),
    [anon_sym_white] = ACTIONS(9),
    [anon_sym_gray] = ACTIONS(9),
    [anon_sym_grey] = ACTIONS(9),
    [anon_sym_black] = ACTIONS(9),
    [anon_sym_red] = ACTIONS(9),
    [anon_sym_orange] = ACTIONS(9),
    [anon_sym_yellow] = ACTIONS(9),
    [anon_sym_green] = ACTIONS(9),
    [anon_sym_teal] = ACTIONS(9),
    [anon_sym_blue] = ACTIONS(9),
    [anon_sym_purple] = ACTIONS(9),
    [anon_sym_pink] = ACTIONS(9),
    [anon_sym_brown] = ACTIONS(9),
    [anon_sym_indigo] = ACTIONS(9),
    [anon_sym_linePoints] = ACTIONS(9),
    [anon_sym_collectionColor] = ACTIONS(9),
    [anon_sym_collectionLetter] = ACTIONS(9),
    [anon_sym_collectionName] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [sym_type_identifier] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(27),
  },
  [3] = {
    [sym__expression] = STATE(59),
    [sym_binary_expression] = STATE(59),
    [sym_range_expression] = STATE(59),
    [sym__unary_expression] = STATE(59),
    [sym_prefix_expression] = STATE(59),
    [sym_open_start_range_expression] = STATE(59),
    [sym_open_end_range_expression] = STATE(59),
    [sym__primary_expression] = STATE(30),
    [sym_ternary_expression] = STATE(59),
    [sym__basic_literal] = STATE(30),
    [sym_constant] = STATE(30),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(30),
    [sym_string] = STATE(30),
    [sym_array] = STATE(30),
    [sym_field_access] = STATE(30),
    [sym_method_invocation] = STATE(30),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_nil] = ACTIONS(7),
    [anon_sym_id] = ACTIONS(9),
    [anon_sym_index] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(9),
    [anon_sym_now] = ACTIONS(9),
    [anon_sym_area] = ACTIONS(9),
    [anon_sym_coordinate] = ACTIONS(9),
    [anon_sym_distance] = ACTIONS(9),
    [anon_sym_latitude] = ACTIONS(9),
    [anon_sym_longitude] = ACTIONS(9),
    [anon_sym_length] = ACTIONS(9),
    [anon_sym_geometry] = ACTIONS(9),
    [anon_sym_clear] = ACTIONS(9),
    [anon_sym_white] = ACTIONS(9),
    [anon_sym_gray] = ACTIONS(9),
    [anon_sym_grey] = ACTIONS(9),
    [anon_sym_black] = ACTIONS(9),
    [anon_sym_red] = ACTIONS(9),
    [anon_sym_orange] = ACTIONS(9),
    [anon_sym_yellow] = ACTIONS(9),
    [anon_sym_green] = ACTIONS(9),
    [anon_sym_teal] = ACTIONS(9),
    [anon_sym_blue] = ACTIONS(9),
    [anon_sym_purple] = ACTIONS(9),
    [anon_sym_pink] = ACTIONS(9),
    [anon_sym_brown] = ACTIONS(9),
    [anon_sym_indigo] = ACTIONS(9),
    [anon_sym_linePoints] = ACTIONS(9),
    [anon_sym_collectionColor] = ACTIONS(9),
    [anon_sym_collectionLetter] = ACTIONS(9),
    [anon_sym_collectionName] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [sym_type_identifier] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_RBRACK] = ACTIONS(35),
  },
  [4] = {
    [sym__expression] = STATE(61),
    [sym_binary_expression] = STATE(61),
    [sym_range_expression] = STATE(61),
    [sym__unary_expression] = STATE(61),
    [sym_prefix_expression] = STATE(61),
    [sym_open_start_range_expression] = STATE(61),
    [sym_open_end_range_expression] = STATE(61),
    [sym__primary_expression] = STATE(30),
    [sym_ternary_expression] = STATE(61),
    [sym__basic_literal] = STATE(30),
    [sym_constant] = STATE(30),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(30),
    [sym_string] = STATE(30),
    [sym_array] = STATE(30),
    [sym_field_access] = STATE(30),
    [sym_method_invocation] = STATE(30),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_nil] = ACTIONS(7),
    [anon_sym_id] = ACTIONS(9),
    [anon_sym_index] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(9),
    [anon_sym_now] = ACTIONS(9),
    [anon_sym_area] = ACTIONS(9),
    [anon_sym_coordinate] = ACTIONS(9),
    [anon_sym_distance] = ACTIONS(9),
    [anon_sym_latitude] = ACTIONS(9),
    [anon_sym_longitude] = ACTIONS(9),
    [anon_sym_length] = ACTIONS(9),
    [anon_sym_geometry] = ACTIONS(9),
    [anon_sym_clear] = ACTIONS(9),
    [anon_sym_white] = ACTIONS(9),
    [anon_sym_gray] = ACTIONS(9),
    [anon_sym_grey] = ACTIONS(9),
    [anon_sym_black] = ACTIONS(9),
    [anon_sym_red] = ACTIONS(9),
    [anon_sym_orange] = ACTIONS(9),
    [anon_sym_yellow] = ACTIONS(9),
    [anon_sym_green] = ACTIONS(9),
    [anon_sym_teal] = ACTIONS(9),
    [anon_sym_blue] = ACTIONS(9),
    [anon_sym_purple] = ACTIONS(9),
    [anon_sym_pink] = ACTIONS(9),
    [anon_sym_brown] = ACTIONS(9),
    [anon_sym_indigo] = ACTIONS(9),
    [anon_sym_linePoints] = ACTIONS(9),
    [anon_sym_collectionColor] = ACTIONS(9),
    [anon_sym_collectionLetter] = ACTIONS(9),
    [anon_sym_collectionName] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [sym_type_identifier] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(37),
  },
  [5] = {
    [sym__expression] = STATE(58),
    [sym_binary_expression] = STATE(58),
    [sym_range_expression] = STATE(58),
    [sym__unary_expression] = STATE(58),
    [sym_prefix_expression] = STATE(58),
    [sym_open_start_range_expression] = STATE(58),
    [sym_open_end_range_expression] = STATE(58),
    [sym__primary_expression] = STATE(30),
    [sym_ternary_expression] = STATE(58),
    [sym__basic_literal] = STATE(30),
    [sym_constant] = STATE(30),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(30),
    [sym_string] = STATE(30),
    [sym_array] = STATE(30),
    [sym_field_access] = STATE(30),
    [sym_method_invocation] = STATE(30),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_nil] = ACTIONS(7),
    [anon_sym_id] = ACTIONS(9),
    [anon_sym_index] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(9),
    [anon_sym_now] = ACTIONS(9),
    [anon_sym_area] = ACTIONS(9),
    [anon_sym_coordinate] = ACTIONS(9),
    [anon_sym_distance] = ACTIONS(9),
    [anon_sym_latitude] = ACTIONS(9),
    [anon_sym_longitude] = ACTIONS(9),
    [anon_sym_length] = ACTIONS(9),
    [anon_sym_geometry] = ACTIONS(9),
    [anon_sym_clear] = ACTIONS(9),
    [anon_sym_white] = ACTIONS(9),
    [anon_sym_gray] = ACTIONS(9),
    [anon_sym_grey] = ACTIONS(9),
    [anon_sym_black] = ACTIONS(9),
    [anon_sym_red] = ACTIONS(9),
    [anon_sym_orange] = ACTIONS(9),
    [anon_sym_yellow] = ACTIONS(9),
    [anon_sym_green] = ACTIONS(9),
    [anon_sym_teal] = ACTIONS(9),
    [anon_sym_blue] = ACTIONS(9),
    [anon_sym_purple] = ACTIONS(9),
    [anon_sym_pink] = ACTIONS(9),
    [anon_sym_brown] = ACTIONS(9),
    [anon_sym_indigo] = ACTIONS(9),
    [anon_sym_linePoints] = ACTIONS(9),
    [anon_sym_collectionColor] = ACTIONS(9),
    [anon_sym_collectionLetter] = ACTIONS(9),
    [anon_sym_collectionName] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [sym_type_identifier] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(39),
  },
  [6] = {
    [sym__expression] = STATE(61),
    [sym_binary_expression] = STATE(61),
    [sym_range_expression] = STATE(61),
    [sym__unary_expression] = STATE(61),
    [sym_prefix_expression] = STATE(61),
    [sym_open_start_range_expression] = STATE(61),
    [sym_open_end_range_expression] = STATE(61),
    [sym__primary_expression] = STATE(30),
    [sym_ternary_expression] = STATE(61),
    [sym__basic_literal] = STATE(30),
    [sym_constant] = STATE(30),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(30),
    [sym_string] = STATE(30),
    [sym_array] = STATE(30),
    [sym_field_access] = STATE(30),
    [sym_method_invocation] = STATE(30),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_nil] = ACTIONS(7),
    [anon_sym_id] = ACTIONS(9),
    [anon_sym_index] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(9),
    [anon_sym_now] = ACTIONS(9),
    [anon_sym_area] = ACTIONS(9),
    [anon_sym_coordinate] = ACTIONS(9),
    [anon_sym_distance] = ACTIONS(9),
    [anon_sym_latitude] = ACTIONS(9),
    [anon_sym_longitude] = ACTIONS(9),
    [anon_sym_length] = ACTIONS(9),
    [anon_sym_geometry] = ACTIONS(9),
    [anon_sym_clear] = ACTIONS(9),
    [anon_sym_white] = ACTIONS(9),
    [anon_sym_gray] = ACTIONS(9),
    [anon_sym_grey] = ACTIONS(9),
    [anon_sym_black] = ACTIONS(9),
    [anon_sym_red] = ACTIONS(9),
    [anon_sym_orange] = ACTIONS(9),
    [anon_sym_yellow] = ACTIONS(9),
    [anon_sym_green] = ACTIONS(9),
    [anon_sym_teal] = ACTIONS(9),
    [anon_sym_blue] = ACTIONS(9),
    [anon_sym_purple] = ACTIONS(9),
    [anon_sym_pink] = ACTIONS(9),
    [anon_sym_brown] = ACTIONS(9),
    [anon_sym_indigo] = ACTIONS(9),
    [anon_sym_linePoints] = ACTIONS(9),
    [anon_sym_collectionColor] = ACTIONS(9),
    [anon_sym_collectionLetter] = ACTIONS(9),
    [anon_sym_collectionName] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [sym_type_identifier] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(41),
  },
  [7] = {
    [sym__expression] = STATE(50),
    [sym_binary_expression] = STATE(50),
    [sym_range_expression] = STATE(50),
    [sym__unary_expression] = STATE(50),
    [sym_prefix_expression] = STATE(50),
    [sym_open_start_range_expression] = STATE(50),
    [sym_open_end_range_expression] = STATE(50),
    [sym__primary_expression] = STATE(30),
    [sym_ternary_expression] = STATE(50),
    [sym__basic_literal] = STATE(30),
    [sym_constant] = STATE(30),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(30),
    [sym_string] = STATE(30),
    [sym_array] = STATE(30),
    [sym_field_access] = STATE(30),
    [sym_method_invocation] = STATE(30),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_nil] = ACTIONS(7),
    [anon_sym_id] = ACTIONS(9),
    [anon_sym_index] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(9),
    [anon_sym_now] = ACTIONS(9),
    [anon_sym_area] = ACTIONS(9),
    [anon_sym_coordinate] = ACTIONS(9),
    [anon_sym_distance] = ACTIONS(9),
    [anon_sym_latitude] = ACTIONS(9),
    [anon_sym_longitude] = ACTIONS(9),
    [anon_sym_length] = ACTIONS(9),
    [anon_sym_geometry] = ACTIONS(9),
    [anon_sym_clear] = ACTIONS(9),
    [anon_sym_white] = ACTIONS(9),
    [anon_sym_gray] = ACTIONS(9),
    [anon_sym_grey] = ACTIONS(9),
    [anon_sym_black] = ACTIONS(9),
    [anon_sym_red] = ACTIONS(9),
    [anon_sym_orange] = ACTIONS(9),
    [anon_sym_yellow] = ACTIONS(9),
    [anon_sym_green] = ACTIONS(9),
    [anon_sym_teal] = ACTIONS(9),
    [anon_sym_blue] = ACTIONS(9),
    [anon_sym_purple] = ACTIONS(9),
    [anon_sym_pink] = ACTIONS(9),
    [anon_sym_brown] = ACTIONS(9),
    [anon_sym_indigo] = ACTIONS(9),
    [anon_sym_linePoints] = ACTIONS(9),
    [anon_sym_collectionColor] = ACTIONS(9),
    [anon_sym_collectionLetter] = ACTIONS(9),
    [anon_sym_collectionName] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [sym_type_identifier] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [8] = {
    [sym__expression] = STATE(46),
    [sym_binary_expression] = STATE(46),
    [sym_range_expression] = STATE(46),
    [sym__unary_expression] = STATE(46),
    [sym_prefix_expression] = STATE(46),
    [sym_open_start_range_expression] = STATE(46),
    [sym_open_end_range_expression] = STATE(46),
    [sym__primary_expression] = STATE(30),
    [sym_ternary_expression] = STATE(46),
    [sym__basic_literal] = STATE(30),
    [sym_constant] = STATE(30),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(30),
    [sym_string] = STATE(30),
    [sym_array] = STATE(30),
    [sym_field_access] = STATE(30),
    [sym_method_invocation] = STATE(30),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_nil] = ACTIONS(7),
    [anon_sym_id] = ACTIONS(9),
    [anon_sym_index] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(9),
    [anon_sym_now] = ACTIONS(9),
    [anon_sym_area] = ACTIONS(9),
    [anon_sym_coordinate] = ACTIONS(9),
    [anon_sym_distance] = ACTIONS(9),
    [anon_sym_latitude] = ACTIONS(9),
    [anon_sym_longitude] = ACTIONS(9),
    [anon_sym_length] = ACTIONS(9),
    [anon_sym_geometry] = ACTIONS(9),
    [anon_sym_clear] = ACTIONS(9),
    [anon_sym_white] = ACTIONS(9),
    [anon_sym_gray] = ACTIONS(9),
    [anon_sym_grey] = ACTIONS(9),
    [anon_sym_black] = ACTIONS(9),
    [anon_sym_red] = ACTIONS(9),
    [anon_sym_orange] = ACTIONS(9),
    [anon_sym_yellow] = ACTIONS(9),
    [anon_sym_green] = ACTIONS(9),
    [anon_sym_teal] = ACTIONS(9),
    [anon_sym_blue] = ACTIONS(9),
    [anon_sym_purple] = ACTIONS(9),
    [anon_sym_pink] = ACTIONS(9),
    [anon_sym_brown] = ACTIONS(9),
    [anon_sym_indigo] = ACTIONS(9),
    [anon_sym_linePoints] = ACTIONS(9),
    [anon_sym_collectionColor] = ACTIONS(9),
    [anon_sym_collectionLetter] = ACTIONS(9),
    [anon_sym_collectionName] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [sym_type_identifier] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [9] = {
    [sym__expression] = STATE(60),
    [sym_binary_expression] = STATE(60),
    [sym_range_expression] = STATE(60),
    [sym__unary_expression] = STATE(60),
    [sym_prefix_expression] = STATE(60),
    [sym_open_start_range_expression] = STATE(60),
    [sym_open_end_range_expression] = STATE(60),
    [sym__primary_expression] = STATE(30),
    [sym_ternary_expression] = STATE(60),
    [sym__basic_literal] = STATE(30),
    [sym_constant] = STATE(30),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(30),
    [sym_string] = STATE(30),
    [sym_array] = STATE(30),
    [sym_field_access] = STATE(30),
    [sym_method_invocation] = STATE(30),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_nil] = ACTIONS(7),
    [anon_sym_id] = ACTIONS(9),
    [anon_sym_index] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(9),
    [anon_sym_now] = ACTIONS(9),
    [anon_sym_area] = ACTIONS(9),
    [anon_sym_coordinate] = ACTIONS(9),
    [anon_sym_distance] = ACTIONS(9),
    [anon_sym_latitude] = ACTIONS(9),
    [anon_sym_longitude] = ACTIONS(9),
    [anon_sym_length] = ACTIONS(9),
    [anon_sym_geometry] = ACTIONS(9),
    [anon_sym_clear] = ACTIONS(9),
    [anon_sym_white] = ACTIONS(9),
    [anon_sym_gray] = ACTIONS(9),
    [anon_sym_grey] = ACTIONS(9),
    [anon_sym_black] = ACTIONS(9),
    [anon_sym_red] = ACTIONS(9),
    [anon_sym_orange] = ACTIONS(9),
    [anon_sym_yellow] = ACTIONS(9),
    [anon_sym_green] = ACTIONS(9),
    [anon_sym_teal] = ACTIONS(9),
    [anon_sym_blue] = ACTIONS(9),
    [anon_sym_purple] = ACTIONS(9),
    [anon_sym_pink] = ACTIONS(9),
    [anon_sym_brown] = ACTIONS(9),
    [anon_sym_indigo] = ACTIONS(9),
    [anon_sym_linePoints] = ACTIONS(9),
    [anon_sym_collectionColor] = ACTIONS(9),
    [anon_sym_collectionLetter] = ACTIONS(9),
    [anon_sym_collectionName] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [sym_type_identifier] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [10] = {
    [sym__expression] = STATE(44),
    [sym_binary_expression] = STATE(44),
    [sym_range_expression] = STATE(44),
    [sym__unary_expression] = STATE(44),
    [sym_prefix_expression] = STATE(44),
    [sym_open_start_range_expression] = STATE(44),
    [sym_open_end_range_expression] = STATE(44),
    [sym__primary_expression] = STATE(30),
    [sym_ternary_expression] = STATE(44),
    [sym__basic_literal] = STATE(30),
    [sym_constant] = STATE(30),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(30),
    [sym_string] = STATE(30),
    [sym_array] = STATE(30),
    [sym_field_access] = STATE(30),
    [sym_method_invocation] = STATE(30),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_nil] = ACTIONS(7),
    [anon_sym_id] = ACTIONS(9),
    [anon_sym_index] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(9),
    [anon_sym_now] = ACTIONS(9),
    [anon_sym_area] = ACTIONS(9),
    [anon_sym_coordinate] = ACTIONS(9),
    [anon_sym_distance] = ACTIONS(9),
    [anon_sym_latitude] = ACTIONS(9),
    [anon_sym_longitude] = ACTIONS(9),
    [anon_sym_length] = ACTIONS(9),
    [anon_sym_geometry] = ACTIONS(9),
    [anon_sym_clear] = ACTIONS(9),
    [anon_sym_white] = ACTIONS(9),
    [anon_sym_gray] = ACTIONS(9),
    [anon_sym_grey] = ACTIONS(9),
    [anon_sym_black] = ACTIONS(9),
    [anon_sym_red] = ACTIONS(9),
    [anon_sym_orange] = ACTIONS(9),
    [anon_sym_yellow] = ACTIONS(9),
    [anon_sym_green] = ACTIONS(9),
    [anon_sym_teal] = ACTIONS(9),
    [anon_sym_blue] = ACTIONS(9),
    [anon_sym_purple] = ACTIONS(9),
    [anon_sym_pink] = ACTIONS(9),
    [anon_sym_brown] = ACTIONS(9),
    [anon_sym_indigo] = ACTIONS(9),
    [anon_sym_linePoints] = ACTIONS(9),
    [anon_sym_collectionColor] = ACTIONS(9),
    [anon_sym_collectionLetter] = ACTIONS(9),
    [anon_sym_collectionName] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [sym_type_identifier] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [11] = {
    [sym__expression] = STATE(49),
    [sym_binary_expression] = STATE(49),
    [sym_range_expression] = STATE(49),
    [sym__unary_expression] = STATE(49),
    [sym_prefix_expression] = STATE(49),
    [sym_open_start_range_expression] = STATE(49),
    [sym_open_end_range_expression] = STATE(49),
    [sym__primary_expression] = STATE(30),
    [sym_ternary_expression] = STATE(49),
    [sym__basic_literal] = STATE(30),
    [sym_constant] = STATE(30),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(30),
    [sym_string] = STATE(30),
    [sym_array] = STATE(30),
    [sym_field_access] = STATE(30),
    [sym_method_invocation] = STATE(30),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_nil] = ACTIONS(7),
    [anon_sym_id] = ACTIONS(9),
    [anon_sym_index] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(9),
    [anon_sym_now] = ACTIONS(9),
    [anon_sym_area] = ACTIONS(9),
    [anon_sym_coordinate] = ACTIONS(9),
    [anon_sym_distance] = ACTIONS(9),
    [anon_sym_latitude] = ACTIONS(9),
    [anon_sym_longitude] = ACTIONS(9),
    [anon_sym_length] = ACTIONS(9),
    [anon_sym_geometry] = ACTIONS(9),
    [anon_sym_clear] = ACTIONS(9),
    [anon_sym_white] = ACTIONS(9),
    [anon_sym_gray] = ACTIONS(9),
    [anon_sym_grey] = ACTIONS(9),
    [anon_sym_black] = ACTIONS(9),
    [anon_sym_red] = ACTIONS(9),
    [anon_sym_orange] = ACTIONS(9),
    [anon_sym_yellow] = ACTIONS(9),
    [anon_sym_green] = ACTIONS(9),
    [anon_sym_teal] = ACTIONS(9),
    [anon_sym_blue] = ACTIONS(9),
    [anon_sym_purple] = ACTIONS(9),
    [anon_sym_pink] = ACTIONS(9),
    [anon_sym_brown] = ACTIONS(9),
    [anon_sym_indigo] = ACTIONS(9),
    [anon_sym_linePoints] = ACTIONS(9),
    [anon_sym_collectionColor] = ACTIONS(9),
    [anon_sym_collectionLetter] = ACTIONS(9),
    [anon_sym_collectionName] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [sym_type_identifier] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [12] = {
    [sym__expression] = STATE(51),
    [sym_binary_expression] = STATE(51),
    [sym_range_expression] = STATE(51),
    [sym__unary_expression] = STATE(51),
    [sym_prefix_expression] = STATE(51),
    [sym_open_start_range_expression] = STATE(51),
    [sym_open_end_range_expression] = STATE(51),
    [sym__primary_expression] = STATE(30),
    [sym_ternary_expression] = STATE(51),
    [sym__basic_literal] = STATE(30),
    [sym_constant] = STATE(30),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(30),
    [sym_string] = STATE(30),
    [sym_array] = STATE(30),
    [sym_field_access] = STATE(30),
    [sym_method_invocation] = STATE(30),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_nil] = ACTIONS(7),
    [anon_sym_id] = ACTIONS(9),
    [anon_sym_index] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(9),
    [anon_sym_now] = ACTIONS(9),
    [anon_sym_area] = ACTIONS(9),
    [anon_sym_coordinate] = ACTIONS(9),
    [anon_sym_distance] = ACTIONS(9),
    [anon_sym_latitude] = ACTIONS(9),
    [anon_sym_longitude] = ACTIONS(9),
    [anon_sym_length] = ACTIONS(9),
    [anon_sym_geometry] = ACTIONS(9),
    [anon_sym_clear] = ACTIONS(9),
    [anon_sym_white] = ACTIONS(9),
    [anon_sym_gray] = ACTIONS(9),
    [anon_sym_grey] = ACTIONS(9),
    [anon_sym_black] = ACTIONS(9),
    [anon_sym_red] = ACTIONS(9),
    [anon_sym_orange] = ACTIONS(9),
    [anon_sym_yellow] = ACTIONS(9),
    [anon_sym_green] = ACTIONS(9),
    [anon_sym_teal] = ACTIONS(9),
    [anon_sym_blue] = ACTIONS(9),
    [anon_sym_purple] = ACTIONS(9),
    [anon_sym_pink] = ACTIONS(9),
    [anon_sym_brown] = ACTIONS(9),
    [anon_sym_indigo] = ACTIONS(9),
    [anon_sym_linePoints] = ACTIONS(9),
    [anon_sym_collectionColor] = ACTIONS(9),
    [anon_sym_collectionLetter] = ACTIONS(9),
    [anon_sym_collectionName] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [sym_type_identifier] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [13] = {
    [sym__expression] = STATE(52),
    [sym_binary_expression] = STATE(52),
    [sym_range_expression] = STATE(52),
    [sym__unary_expression] = STATE(52),
    [sym_prefix_expression] = STATE(52),
    [sym_open_start_range_expression] = STATE(52),
    [sym_open_end_range_expression] = STATE(52),
    [sym__primary_expression] = STATE(30),
    [sym_ternary_expression] = STATE(52),
    [sym__basic_literal] = STATE(30),
    [sym_constant] = STATE(30),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(30),
    [sym_string] = STATE(30),
    [sym_array] = STATE(30),
    [sym_field_access] = STATE(30),
    [sym_method_invocation] = STATE(30),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_nil] = ACTIONS(7),
    [anon_sym_id] = ACTIONS(9),
    [anon_sym_index] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(9),
    [anon_sym_now] = ACTIONS(9),
    [anon_sym_area] = ACTIONS(9),
    [anon_sym_coordinate] = ACTIONS(9),
    [anon_sym_distance] = ACTIONS(9),
    [anon_sym_latitude] = ACTIONS(9),
    [anon_sym_longitude] = ACTIONS(9),
    [anon_sym_length] = ACTIONS(9),
    [anon_sym_geometry] = ACTIONS(9),
    [anon_sym_clear] = ACTIONS(9),
    [anon_sym_white] = ACTIONS(9),
    [anon_sym_gray] = ACTIONS(9),
    [anon_sym_grey] = ACTIONS(9),
    [anon_sym_black] = ACTIONS(9),
    [anon_sym_red] = ACTIONS(9),
    [anon_sym_orange] = ACTIONS(9),
    [anon_sym_yellow] = ACTIONS(9),
    [anon_sym_green] = ACTIONS(9),
    [anon_sym_teal] = ACTIONS(9),
    [anon_sym_blue] = ACTIONS(9),
    [anon_sym_purple] = ACTIONS(9),
    [anon_sym_pink] = ACTIONS(9),
    [anon_sym_brown] = ACTIONS(9),
    [anon_sym_indigo] = ACTIONS(9),
    [anon_sym_linePoints] = ACTIONS(9),
    [anon_sym_collectionColor] = ACTIONS(9),
    [anon_sym_collectionLetter] = ACTIONS(9),
    [anon_sym_collectionName] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [sym_type_identifier] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [14] = {
    [sym__expression] = STATE(53),
    [sym_binary_expression] = STATE(53),
    [sym_range_expression] = STATE(53),
    [sym__unary_expression] = STATE(53),
    [sym_prefix_expression] = STATE(53),
    [sym_open_start_range_expression] = STATE(53),
    [sym_open_end_range_expression] = STATE(53),
    [sym__primary_expression] = STATE(30),
    [sym_ternary_expression] = STATE(53),
    [sym__basic_literal] = STATE(30),
    [sym_constant] = STATE(30),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(30),
    [sym_string] = STATE(30),
    [sym_array] = STATE(30),
    [sym_field_access] = STATE(30),
    [sym_method_invocation] = STATE(30),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_nil] = ACTIONS(7),
    [anon_sym_id] = ACTIONS(9),
    [anon_sym_index] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(9),
    [anon_sym_now] = ACTIONS(9),
    [anon_sym_area] = ACTIONS(9),
    [anon_sym_coordinate] = ACTIONS(9),
    [anon_sym_distance] = ACTIONS(9),
    [anon_sym_latitude] = ACTIONS(9),
    [anon_sym_longitude] = ACTIONS(9),
    [anon_sym_length] = ACTIONS(9),
    [anon_sym_geometry] = ACTIONS(9),
    [anon_sym_clear] = ACTIONS(9),
    [anon_sym_white] = ACTIONS(9),
    [anon_sym_gray] = ACTIONS(9),
    [anon_sym_grey] = ACTIONS(9),
    [anon_sym_black] = ACTIONS(9),
    [anon_sym_red] = ACTIONS(9),
    [anon_sym_orange] = ACTIONS(9),
    [anon_sym_yellow] = ACTIONS(9),
    [anon_sym_green] = ACTIONS(9),
    [anon_sym_teal] = ACTIONS(9),
    [anon_sym_blue] = ACTIONS(9),
    [anon_sym_purple] = ACTIONS(9),
    [anon_sym_pink] = ACTIONS(9),
    [anon_sym_brown] = ACTIONS(9),
    [anon_sym_indigo] = ACTIONS(9),
    [anon_sym_linePoints] = ACTIONS(9),
    [anon_sym_collectionColor] = ACTIONS(9),
    [anon_sym_collectionLetter] = ACTIONS(9),
    [anon_sym_collectionName] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [sym_type_identifier] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [15] = {
    [sym__expression] = STATE(45),
    [sym_binary_expression] = STATE(45),
    [sym_range_expression] = STATE(45),
    [sym__unary_expression] = STATE(45),
    [sym_prefix_expression] = STATE(45),
    [sym_open_start_range_expression] = STATE(45),
    [sym_open_end_range_expression] = STATE(45),
    [sym__primary_expression] = STATE(30),
    [sym_ternary_expression] = STATE(45),
    [sym__basic_literal] = STATE(30),
    [sym_constant] = STATE(30),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(30),
    [sym_string] = STATE(30),
    [sym_array] = STATE(30),
    [sym_field_access] = STATE(30),
    [sym_method_invocation] = STATE(30),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_nil] = ACTIONS(7),
    [anon_sym_id] = ACTIONS(9),
    [anon_sym_index] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(9),
    [anon_sym_now] = ACTIONS(9),
    [anon_sym_area] = ACTIONS(9),
    [anon_sym_coordinate] = ACTIONS(9),
    [anon_sym_distance] = ACTIONS(9),
    [anon_sym_latitude] = ACTIONS(9),
    [anon_sym_longitude] = ACTIONS(9),
    [anon_sym_length] = ACTIONS(9),
    [anon_sym_geometry] = ACTIONS(9),
    [anon_sym_clear] = ACTIONS(9),
    [anon_sym_white] = ACTIONS(9),
    [anon_sym_gray] = ACTIONS(9),
    [anon_sym_grey] = ACTIONS(9),
    [anon_sym_black] = ACTIONS(9),
    [anon_sym_red] = ACTIONS(9),
    [anon_sym_orange] = ACTIONS(9),
    [anon_sym_yellow] = ACTIONS(9),
    [anon_sym_green] = ACTIONS(9),
    [anon_sym_teal] = ACTIONS(9),
    [anon_sym_blue] = ACTIONS(9),
    [anon_sym_purple] = ACTIONS(9),
    [anon_sym_pink] = ACTIONS(9),
    [anon_sym_brown] = ACTIONS(9),
    [anon_sym_indigo] = ACTIONS(9),
    [anon_sym_linePoints] = ACTIONS(9),
    [anon_sym_collectionColor] = ACTIONS(9),
    [anon_sym_collectionLetter] = ACTIONS(9),
    [anon_sym_collectionName] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [sym_type_identifier] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [16] = {
    [sym__expression] = STATE(61),
    [sym_binary_expression] = STATE(61),
    [sym_range_expression] = STATE(61),
    [sym__unary_expression] = STATE(61),
    [sym_prefix_expression] = STATE(61),
    [sym_open_start_range_expression] = STATE(61),
    [sym_open_end_range_expression] = STATE(61),
    [sym__primary_expression] = STATE(30),
    [sym_ternary_expression] = STATE(61),
    [sym__basic_literal] = STATE(30),
    [sym_constant] = STATE(30),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(30),
    [sym_string] = STATE(30),
    [sym_array] = STATE(30),
    [sym_field_access] = STATE(30),
    [sym_method_invocation] = STATE(30),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_nil] = ACTIONS(7),
    [anon_sym_id] = ACTIONS(9),
    [anon_sym_index] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(9),
    [anon_sym_now] = ACTIONS(9),
    [anon_sym_area] = ACTIONS(9),
    [anon_sym_coordinate] = ACTIONS(9),
    [anon_sym_distance] = ACTIONS(9),
    [anon_sym_latitude] = ACTIONS(9),
    [anon_sym_longitude] = ACTIONS(9),
    [anon_sym_length] = ACTIONS(9),
    [anon_sym_geometry] = ACTIONS(9),
    [anon_sym_clear] = ACTIONS(9),
    [anon_sym_white] = ACTIONS(9),
    [anon_sym_gray] = ACTIONS(9),
    [anon_sym_grey] = ACTIONS(9),
    [anon_sym_black] = ACTIONS(9),
    [anon_sym_red] = ACTIONS(9),
    [anon_sym_orange] = ACTIONS(9),
    [anon_sym_yellow] = ACTIONS(9),
    [anon_sym_green] = ACTIONS(9),
    [anon_sym_teal] = ACTIONS(9),
    [anon_sym_blue] = ACTIONS(9),
    [anon_sym_purple] = ACTIONS(9),
    [anon_sym_pink] = ACTIONS(9),
    [anon_sym_brown] = ACTIONS(9),
    [anon_sym_indigo] = ACTIONS(9),
    [anon_sym_linePoints] = ACTIONS(9),
    [anon_sym_collectionColor] = ACTIONS(9),
    [anon_sym_collectionLetter] = ACTIONS(9),
    [anon_sym_collectionName] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [sym_type_identifier] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [17] = {
    [sym__expression] = STATE(54),
    [sym_binary_expression] = STATE(54),
    [sym_range_expression] = STATE(54),
    [sym__unary_expression] = STATE(54),
    [sym_prefix_expression] = STATE(54),
    [sym_open_start_range_expression] = STATE(54),
    [sym_open_end_range_expression] = STATE(54),
    [sym__primary_expression] = STATE(30),
    [sym_ternary_expression] = STATE(54),
    [sym__basic_literal] = STATE(30),
    [sym_constant] = STATE(30),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(30),
    [sym_string] = STATE(30),
    [sym_array] = STATE(30),
    [sym_field_access] = STATE(30),
    [sym_method_invocation] = STATE(30),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_nil] = ACTIONS(7),
    [anon_sym_id] = ACTIONS(9),
    [anon_sym_index] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(9),
    [anon_sym_now] = ACTIONS(9),
    [anon_sym_area] = ACTIONS(9),
    [anon_sym_coordinate] = ACTIONS(9),
    [anon_sym_distance] = ACTIONS(9),
    [anon_sym_latitude] = ACTIONS(9),
    [anon_sym_longitude] = ACTIONS(9),
    [anon_sym_length] = ACTIONS(9),
    [anon_sym_geometry] = ACTIONS(9),
    [anon_sym_clear] = ACTIONS(9),
    [anon_sym_white] = ACTIONS(9),
    [anon_sym_gray] = ACTIONS(9),
    [anon_sym_grey] = ACTIONS(9),
    [anon_sym_black] = ACTIONS(9),
    [anon_sym_red] = ACTIONS(9),
    [anon_sym_orange] = ACTIONS(9),
    [anon_sym_yellow] = ACTIONS(9),
    [anon_sym_green] = ACTIONS(9),
    [anon_sym_teal] = ACTIONS(9),
    [anon_sym_blue] = ACTIONS(9),
    [anon_sym_purple] = ACTIONS(9),
    [anon_sym_pink] = ACTIONS(9),
    [anon_sym_brown] = ACTIONS(9),
    [anon_sym_indigo] = ACTIONS(9),
    [anon_sym_linePoints] = ACTIONS(9),
    [anon_sym_collectionColor] = ACTIONS(9),
    [anon_sym_collectionLetter] = ACTIONS(9),
    [anon_sym_collectionName] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [sym_type_identifier] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [18] = {
    [sym__expression] = STATE(55),
    [sym_binary_expression] = STATE(55),
    [sym_range_expression] = STATE(55),
    [sym__unary_expression] = STATE(55),
    [sym_prefix_expression] = STATE(55),
    [sym_open_start_range_expression] = STATE(55),
    [sym_open_end_range_expression] = STATE(55),
    [sym__primary_expression] = STATE(30),
    [sym_ternary_expression] = STATE(55),
    [sym__basic_literal] = STATE(30),
    [sym_constant] = STATE(30),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(30),
    [sym_string] = STATE(30),
    [sym_array] = STATE(30),
    [sym_field_access] = STATE(30),
    [sym_method_invocation] = STATE(30),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_nil] = ACTIONS(7),
    [anon_sym_id] = ACTIONS(9),
    [anon_sym_index] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(9),
    [anon_sym_now] = ACTIONS(9),
    [anon_sym_area] = ACTIONS(9),
    [anon_sym_coordinate] = ACTIONS(9),
    [anon_sym_distance] = ACTIONS(9),
    [anon_sym_latitude] = ACTIONS(9),
    [anon_sym_longitude] = ACTIONS(9),
    [anon_sym_length] = ACTIONS(9),
    [anon_sym_geometry] = ACTIONS(9),
    [anon_sym_clear] = ACTIONS(9),
    [anon_sym_white] = ACTIONS(9),
    [anon_sym_gray] = ACTIONS(9),
    [anon_sym_grey] = ACTIONS(9),
    [anon_sym_black] = ACTIONS(9),
    [anon_sym_red] = ACTIONS(9),
    [anon_sym_orange] = ACTIONS(9),
    [anon_sym_yellow] = ACTIONS(9),
    [anon_sym_green] = ACTIONS(9),
    [anon_sym_teal] = ACTIONS(9),
    [anon_sym_blue] = ACTIONS(9),
    [anon_sym_purple] = ACTIONS(9),
    [anon_sym_pink] = ACTIONS(9),
    [anon_sym_brown] = ACTIONS(9),
    [anon_sym_indigo] = ACTIONS(9),
    [anon_sym_linePoints] = ACTIONS(9),
    [anon_sym_collectionColor] = ACTIONS(9),
    [anon_sym_collectionLetter] = ACTIONS(9),
    [anon_sym_collectionName] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [sym_type_identifier] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [19] = {
    [sym__expression] = STATE(56),
    [sym_binary_expression] = STATE(56),
    [sym_range_expression] = STATE(56),
    [sym__unary_expression] = STATE(56),
    [sym_prefix_expression] = STATE(56),
    [sym_open_start_range_expression] = STATE(56),
    [sym_open_end_range_expression] = STATE(56),
    [sym__primary_expression] = STATE(30),
    [sym_ternary_expression] = STATE(56),
    [sym__basic_literal] = STATE(30),
    [sym_constant] = STATE(30),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(30),
    [sym_string] = STATE(30),
    [sym_array] = STATE(30),
    [sym_field_access] = STATE(30),
    [sym_method_invocation] = STATE(30),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_nil] = ACTIONS(7),
    [anon_sym_id] = ACTIONS(9),
    [anon_sym_index] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(9),
    [anon_sym_now] = ACTIONS(9),
    [anon_sym_area] = ACTIONS(9),
    [anon_sym_coordinate] = ACTIONS(9),
    [anon_sym_distance] = ACTIONS(9),
    [anon_sym_latitude] = ACTIONS(9),
    [anon_sym_longitude] = ACTIONS(9),
    [anon_sym_length] = ACTIONS(9),
    [anon_sym_geometry] = ACTIONS(9),
    [anon_sym_clear] = ACTIONS(9),
    [anon_sym_white] = ACTIONS(9),
    [anon_sym_gray] = ACTIONS(9),
    [anon_sym_grey] = ACTIONS(9),
    [anon_sym_black] = ACTIONS(9),
    [anon_sym_red] = ACTIONS(9),
    [anon_sym_orange] = ACTIONS(9),
    [anon_sym_yellow] = ACTIONS(9),
    [anon_sym_green] = ACTIONS(9),
    [anon_sym_teal] = ACTIONS(9),
    [anon_sym_blue] = ACTIONS(9),
    [anon_sym_purple] = ACTIONS(9),
    [anon_sym_pink] = ACTIONS(9),
    [anon_sym_brown] = ACTIONS(9),
    [anon_sym_indigo] = ACTIONS(9),
    [anon_sym_linePoints] = ACTIONS(9),
    [anon_sym_collectionColor] = ACTIONS(9),
    [anon_sym_collectionLetter] = ACTIONS(9),
    [anon_sym_collectionName] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [sym_type_identifier] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [20] = {
    [sym__expression] = STATE(47),
    [sym_binary_expression] = STATE(47),
    [sym_range_expression] = STATE(47),
    [sym__unary_expression] = STATE(47),
    [sym_prefix_expression] = STATE(47),
    [sym_open_start_range_expression] = STATE(47),
    [sym_open_end_range_expression] = STATE(47),
    [sym__primary_expression] = STATE(30),
    [sym_ternary_expression] = STATE(47),
    [sym__basic_literal] = STATE(30),
    [sym_constant] = STATE(30),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(30),
    [sym_string] = STATE(30),
    [sym_array] = STATE(30),
    [sym_field_access] = STATE(30),
    [sym_method_invocation] = STATE(30),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_nil] = ACTIONS(7),
    [anon_sym_id] = ACTIONS(9),
    [anon_sym_index] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(9),
    [anon_sym_now] = ACTIONS(9),
    [anon_sym_area] = ACTIONS(9),
    [anon_sym_coordinate] = ACTIONS(9),
    [anon_sym_distance] = ACTIONS(9),
    [anon_sym_latitude] = ACTIONS(9),
    [anon_sym_longitude] = ACTIONS(9),
    [anon_sym_length] = ACTIONS(9),
    [anon_sym_geometry] = ACTIONS(9),
    [anon_sym_clear] = ACTIONS(9),
    [anon_sym_white] = ACTIONS(9),
    [anon_sym_gray] = ACTIONS(9),
    [anon_sym_grey] = ACTIONS(9),
    [anon_sym_black] = ACTIONS(9),
    [anon_sym_red] = ACTIONS(9),
    [anon_sym_orange] = ACTIONS(9),
    [anon_sym_yellow] = ACTIONS(9),
    [anon_sym_green] = ACTIONS(9),
    [anon_sym_teal] = ACTIONS(9),
    [anon_sym_blue] = ACTIONS(9),
    [anon_sym_purple] = ACTIONS(9),
    [anon_sym_pink] = ACTIONS(9),
    [anon_sym_brown] = ACTIONS(9),
    [anon_sym_indigo] = ACTIONS(9),
    [anon_sym_linePoints] = ACTIONS(9),
    [anon_sym_collectionColor] = ACTIONS(9),
    [anon_sym_collectionLetter] = ACTIONS(9),
    [anon_sym_collectionName] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [sym_type_identifier] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [21] = {
    [sym__expression] = STATE(57),
    [sym_binary_expression] = STATE(57),
    [sym_range_expression] = STATE(57),
    [sym__unary_expression] = STATE(57),
    [sym_prefix_expression] = STATE(57),
    [sym_open_start_range_expression] = STATE(57),
    [sym_open_end_range_expression] = STATE(57),
    [sym__primary_expression] = STATE(30),
    [sym_ternary_expression] = STATE(57),
    [sym__basic_literal] = STATE(30),
    [sym_constant] = STATE(30),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(30),
    [sym_string] = STATE(30),
    [sym_array] = STATE(30),
    [sym_field_access] = STATE(30),
    [sym_method_invocation] = STATE(30),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_nil] = ACTIONS(7),
    [anon_sym_id] = ACTIONS(9),
    [anon_sym_index] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(9),
    [anon_sym_now] = ACTIONS(9),
    [anon_sym_area] = ACTIONS(9),
    [anon_sym_coordinate] = ACTIONS(9),
    [anon_sym_distance] = ACTIONS(9),
    [anon_sym_latitude] = ACTIONS(9),
    [anon_sym_longitude] = ACTIONS(9),
    [anon_sym_length] = ACTIONS(9),
    [anon_sym_geometry] = ACTIONS(9),
    [anon_sym_clear] = ACTIONS(9),
    [anon_sym_white] = ACTIONS(9),
    [anon_sym_gray] = ACTIONS(9),
    [anon_sym_grey] = ACTIONS(9),
    [anon_sym_black] = ACTIONS(9),
    [anon_sym_red] = ACTIONS(9),
    [anon_sym_orange] = ACTIONS(9),
    [anon_sym_yellow] = ACTIONS(9),
    [anon_sym_green] = ACTIONS(9),
    [anon_sym_teal] = ACTIONS(9),
    [anon_sym_blue] = ACTIONS(9),
    [anon_sym_purple] = ACTIONS(9),
    [anon_sym_pink] = ACTIONS(9),
    [anon_sym_brown] = ACTIONS(9),
    [anon_sym_indigo] = ACTIONS(9),
    [anon_sym_linePoints] = ACTIONS(9),
    [anon_sym_collectionColor] = ACTIONS(9),
    [anon_sym_collectionLetter] = ACTIONS(9),
    [anon_sym_collectionName] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [sym_type_identifier] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [22] = {
    [sym__expression] = STATE(63),
    [sym_binary_expression] = STATE(63),
    [sym_range_expression] = STATE(63),
    [sym__unary_expression] = STATE(63),
    [sym_prefix_expression] = STATE(63),
    [sym_open_start_range_expression] = STATE(63),
    [sym_open_end_range_expression] = STATE(63),
    [sym__primary_expression] = STATE(30),
    [sym_ternary_expression] = STATE(63),
    [sym__basic_literal] = STATE(30),
    [sym_constant] = STATE(30),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(30),
    [sym_string] = STATE(30),
    [sym_array] = STATE(30),
    [sym_field_access] = STATE(30),
    [sym_method_invocation] = STATE(30),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_nil] = ACTIONS(7),
    [anon_sym_id] = ACTIONS(9),
    [anon_sym_index] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(9),
    [anon_sym_now] = ACTIONS(9),
    [anon_sym_area] = ACTIONS(9),
    [anon_sym_coordinate] = ACTIONS(9),
    [anon_sym_distance] = ACTIONS(9),
    [anon_sym_latitude] = ACTIONS(9),
    [anon_sym_longitude] = ACTIONS(9),
    [anon_sym_length] = ACTIONS(9),
    [anon_sym_geometry] = ACTIONS(9),
    [anon_sym_clear] = ACTIONS(9),
    [anon_sym_white] = ACTIONS(9),
    [anon_sym_gray] = ACTIONS(9),
    [anon_sym_grey] = ACTIONS(9),
    [anon_sym_black] = ACTIONS(9),
    [anon_sym_red] = ACTIONS(9),
    [anon_sym_orange] = ACTIONS(9),
    [anon_sym_yellow] = ACTIONS(9),
    [anon_sym_green] = ACTIONS(9),
    [anon_sym_teal] = ACTIONS(9),
    [anon_sym_blue] = ACTIONS(9),
    [anon_sym_purple] = ACTIONS(9),
    [anon_sym_pink] = ACTIONS(9),
    [anon_sym_brown] = ACTIONS(9),
    [anon_sym_indigo] = ACTIONS(9),
    [anon_sym_linePoints] = ACTIONS(9),
    [anon_sym_collectionColor] = ACTIONS(9),
    [anon_sym_collectionLetter] = ACTIONS(9),
    [anon_sym_collectionName] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [sym_type_identifier] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [23] = {
    [sym__expression] = STATE(48),
    [sym_binary_expression] = STATE(48),
    [sym_range_expression] = STATE(48),
    [sym__unary_expression] = STATE(48),
    [sym_prefix_expression] = STATE(48),
    [sym_open_start_range_expression] = STATE(48),
    [sym_open_end_range_expression] = STATE(48),
    [sym__primary_expression] = STATE(30),
    [sym_ternary_expression] = STATE(48),
    [sym__basic_literal] = STATE(30),
    [sym_constant] = STATE(30),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(30),
    [sym_string] = STATE(30),
    [sym_array] = STATE(30),
    [sym_field_access] = STATE(30),
    [sym_method_invocation] = STATE(30),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_nil] = ACTIONS(7),
    [anon_sym_id] = ACTIONS(9),
    [anon_sym_index] = ACTIONS(9),
    [anon_sym_pi] = ACTIONS(9),
    [anon_sym_now] = ACTIONS(9),
    [anon_sym_area] = ACTIONS(9),
    [anon_sym_coordinate] = ACTIONS(9),
    [anon_sym_distance] = ACTIONS(9),
    [anon_sym_latitude] = ACTIONS(9),
    [anon_sym_longitude] = ACTIONS(9),
    [anon_sym_length] = ACTIONS(9),
    [anon_sym_geometry] = ACTIONS(9),
    [anon_sym_clear] = ACTIONS(9),
    [anon_sym_white] = ACTIONS(9),
    [anon_sym_gray] = ACTIONS(9),
    [anon_sym_grey] = ACTIONS(9),
    [anon_sym_black] = ACTIONS(9),
    [anon_sym_red] = ACTIONS(9),
    [anon_sym_orange] = ACTIONS(9),
    [anon_sym_yellow] = ACTIONS(9),
    [anon_sym_green] = ACTIONS(9),
    [anon_sym_teal] = ACTIONS(9),
    [anon_sym_blue] = ACTIONS(9),
    [anon_sym_purple] = ACTIONS(9),
    [anon_sym_pink] = ACTIONS(9),
    [anon_sym_brown] = ACTIONS(9),
    [anon_sym_indigo] = ACTIONS(9),
    [anon_sym_linePoints] = ACTIONS(9),
    [anon_sym_collectionColor] = ACTIONS(9),
    [anon_sym_collectionLetter] = ACTIONS(9),
    [anon_sym_collectionName] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [sym_type_identifier] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_argument_list,
    ACTIONS(45), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_DOT,
    ACTIONS(43), 22,
      ts_builtin_sym_end,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [39] = 4,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_argument_list,
    ACTIONS(51), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_DOT,
    ACTIONS(49), 22,
      ts_builtin_sym_end,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [78] = 2,
    ACTIONS(55), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_DOT,
    ACTIONS(53), 23,
      ts_builtin_sym_end,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [112] = 2,
    ACTIONS(59), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_DOT,
    ACTIONS(57), 23,
      ts_builtin_sym_end,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [146] = 2,
    ACTIONS(63), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_DOT,
    ACTIONS(61), 22,
      ts_builtin_sym_end,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [179] = 2,
    ACTIONS(67), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_DOT,
    ACTIONS(65), 22,
      ts_builtin_sym_end,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [212] = 3,
    ACTIONS(73), 1,
      anon_sym_DOT,
    ACTIONS(71), 5,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(69), 22,
      ts_builtin_sym_end,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [247] = 2,
    ACTIONS(77), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_DOT,
    ACTIONS(75), 22,
      ts_builtin_sym_end,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [280] = 2,
    ACTIONS(81), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_DOT,
    ACTIONS(79), 22,
      ts_builtin_sym_end,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [313] = 2,
    ACTIONS(85), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_DOT,
    ACTIONS(83), 22,
      ts_builtin_sym_end,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [346] = 2,
    ACTIONS(89), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_DOT,
    ACTIONS(87), 22,
      ts_builtin_sym_end,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [379] = 2,
    ACTIONS(93), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_DOT,
    ACTIONS(91), 22,
      ts_builtin_sym_end,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [412] = 2,
    ACTIONS(97), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_DOT,
    ACTIONS(95), 22,
      ts_builtin_sym_end,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [445] = 2,
    ACTIONS(101), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_DOT,
    ACTIONS(99), 22,
      ts_builtin_sym_end,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [478] = 2,
    ACTIONS(105), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_DOT,
    ACTIONS(103), 22,
      ts_builtin_sym_end,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [511] = 2,
    ACTIONS(109), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_DOT,
    ACTIONS(107), 22,
      ts_builtin_sym_end,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [544] = 2,
    ACTIONS(113), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_DOT,
    ACTIONS(111), 22,
      ts_builtin_sym_end,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [577] = 2,
    ACTIONS(117), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_DOT,
    ACTIONS(115), 22,
      ts_builtin_sym_end,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [610] = 2,
    ACTIONS(121), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_DOT,
    ACTIONS(119), 22,
      ts_builtin_sym_end,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [643] = 2,
    ACTIONS(125), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_DOT,
    ACTIONS(123), 22,
      ts_builtin_sym_end,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [676] = 11,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(143), 1,
      anon_sym_CARET,
    ACTIONS(147), 1,
      anon_sym_GT_GT,
    ACTIONS(129), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(133), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(145), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(137), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(127), 10,
      ts_builtin_sym_end,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [726] = 2,
    ACTIONS(151), 5,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(149), 22,
      ts_builtin_sym_end,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [758] = 14,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(143), 1,
      anon_sym_CARET,
    ACTIONS(147), 1,
      anon_sym_GT_GT,
    ACTIONS(155), 1,
      anon_sym_AMP_AMP,
    ACTIONS(157), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(159), 1,
      anon_sym_QMARK,
    ACTIONS(129), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(133), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(145), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(137), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(153), 7,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [814] = 16,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(143), 1,
      anon_sym_CARET,
    ACTIONS(147), 1,
      anon_sym_GT_GT,
    ACTIONS(155), 1,
      anon_sym_AMP_AMP,
    ACTIONS(157), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(159), 1,
      anon_sym_QMARK,
    ACTIONS(163), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(165), 1,
      anon_sym_DOT_DOT_LT,
    ACTIONS(129), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(133), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(145), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(137), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(161), 5,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [874] = 6,
    ACTIONS(147), 1,
      anon_sym_GT_GT,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(145), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(137), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(167), 4,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(127), 15,
      ts_builtin_sym_end,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [914] = 8,
    ACTIONS(147), 1,
      anon_sym_GT_GT,
    ACTIONS(129), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(145), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(167), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(137), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(127), 13,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [958] = 12,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(143), 1,
      anon_sym_CARET,
    ACTIONS(147), 1,
      anon_sym_GT_GT,
    ACTIONS(155), 1,
      anon_sym_AMP_AMP,
    ACTIONS(129), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(133), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(145), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(137), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(127), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1010] = 3,
    ACTIONS(137), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(167), 5,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(127), 19,
      ts_builtin_sym_end,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1044] = 2,
    ACTIONS(167), 5,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(127), 22,
      ts_builtin_sym_end,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1076] = 9,
    ACTIONS(147), 1,
      anon_sym_GT_GT,
    ACTIONS(129), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(133), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(145), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(167), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(137), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(127), 11,
      ts_builtin_sym_end,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1122] = 11,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(143), 1,
      anon_sym_CARET,
    ACTIONS(147), 1,
      anon_sym_GT_GT,
    ACTIONS(167), 1,
      anon_sym_PIPE,
    ACTIONS(129), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(133), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(145), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(137), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(127), 10,
      ts_builtin_sym_end,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1172] = 10,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(147), 1,
      anon_sym_GT_GT,
    ACTIONS(167), 1,
      anon_sym_PIPE,
    ACTIONS(129), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(133), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(145), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(137), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(127), 11,
      ts_builtin_sym_end,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1220] = 4,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(137), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(167), 5,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(127), 17,
      ts_builtin_sym_end,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1256] = 14,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(143), 1,
      anon_sym_CARET,
    ACTIONS(147), 1,
      anon_sym_GT_GT,
    ACTIONS(155), 1,
      anon_sym_AMP_AMP,
    ACTIONS(157), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(159), 1,
      anon_sym_QMARK,
    ACTIONS(129), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(133), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(145), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(137), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(169), 7,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1312] = 18,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(143), 1,
      anon_sym_CARET,
    ACTIONS(147), 1,
      anon_sym_GT_GT,
    ACTIONS(155), 1,
      anon_sym_AMP_AMP,
    ACTIONS(157), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(159), 1,
      anon_sym_QMARK,
    ACTIONS(163), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(165), 1,
      anon_sym_DOT_DOT_LT,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(129), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(133), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(145), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(137), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1374] = 18,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(143), 1,
      anon_sym_CARET,
    ACTIONS(147), 1,
      anon_sym_GT_GT,
    ACTIONS(155), 1,
      anon_sym_AMP_AMP,
    ACTIONS(157), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(159), 1,
      anon_sym_QMARK,
    ACTIONS(163), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(165), 1,
      anon_sym_DOT_DOT_LT,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      aux_sym_array_repeat1,
    ACTIONS(129), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(133), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(145), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(137), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1436] = 16,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(143), 1,
      anon_sym_CARET,
    ACTIONS(147), 1,
      anon_sym_GT_GT,
    ACTIONS(155), 1,
      anon_sym_AMP_AMP,
    ACTIONS(157), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(159), 1,
      anon_sym_QMARK,
    ACTIONS(163), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(165), 1,
      anon_sym_DOT_DOT_LT,
    ACTIONS(129), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(133), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(145), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(179), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(137), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1493] = 16,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(143), 1,
      anon_sym_CARET,
    ACTIONS(147), 1,
      anon_sym_GT_GT,
    ACTIONS(155), 1,
      anon_sym_AMP_AMP,
    ACTIONS(157), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(159), 1,
      anon_sym_QMARK,
    ACTIONS(163), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(165), 1,
      anon_sym_DOT_DOT_LT,
    ACTIONS(129), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(133), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(145), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(181), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(137), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1550] = 16,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(143), 1,
      anon_sym_CARET,
    ACTIONS(147), 1,
      anon_sym_GT_GT,
    ACTIONS(155), 1,
      anon_sym_AMP_AMP,
    ACTIONS(157), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(159), 1,
      anon_sym_QMARK,
    ACTIONS(163), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(165), 1,
      anon_sym_DOT_DOT_LT,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(133), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(145), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(137), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1606] = 16,
    ACTIONS(139), 1,
      anon_sym_AMP,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(143), 1,
      anon_sym_CARET,
    ACTIONS(147), 1,
      anon_sym_GT_GT,
    ACTIONS(155), 1,
      anon_sym_AMP_AMP,
    ACTIONS(157), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(159), 1,
      anon_sym_QMARK,
    ACTIONS(163), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(165), 1,
      anon_sym_DOT_DOT_LT,
    ACTIONS(185), 1,
      anon_sym_COLON,
    ACTIONS(129), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(133), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(135), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(145), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(137), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1662] = 3,
    ACTIONS(189), 1,
      anon_sym_SQUOTE,
    STATE(67), 1,
      aux_sym_string_repeat2,
    ACTIONS(187), 2,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [1673] = 3,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      aux_sym_string_repeat1,
    ACTIONS(191), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1684] = 3,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      aux_sym_string_repeat1,
    ACTIONS(195), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1695] = 3,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    STATE(69), 1,
      aux_sym_string_repeat2,
    ACTIONS(198), 2,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [1706] = 3,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      aux_sym_string_repeat1,
    ACTIONS(202), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1717] = 3,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    STATE(69), 1,
      aux_sym_string_repeat2,
    ACTIONS(204), 2,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [1728] = 3,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_argument_list_repeat1,
  [1738] = 3,
    ACTIONS(13), 1,
      anon_sym_BQUOTE,
    ACTIONS(211), 1,
      aux_sym_identifier_token1,
    STATE(24), 1,
      sym_identifier,
  [1748] = 3,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(216), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      aux_sym_array_repeat1,
  [1758] = 3,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    ACTIONS(220), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      aux_sym_array_repeat1,
  [1768] = 3,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_argument_list_repeat1,
  [1778] = 2,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_argument_list,
  [1785] = 1,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
  [1789] = 1,
    ACTIONS(229), 1,
      anon_sym_BQUOTE,
  [1793] = 1,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
  [1797] = 1,
    ACTIONS(233), 1,
      aux_sym_identifier_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(24)] = 0,
  [SMALL_STATE(25)] = 39,
  [SMALL_STATE(26)] = 78,
  [SMALL_STATE(27)] = 112,
  [SMALL_STATE(28)] = 146,
  [SMALL_STATE(29)] = 179,
  [SMALL_STATE(30)] = 212,
  [SMALL_STATE(31)] = 247,
  [SMALL_STATE(32)] = 280,
  [SMALL_STATE(33)] = 313,
  [SMALL_STATE(34)] = 346,
  [SMALL_STATE(35)] = 379,
  [SMALL_STATE(36)] = 412,
  [SMALL_STATE(37)] = 445,
  [SMALL_STATE(38)] = 478,
  [SMALL_STATE(39)] = 511,
  [SMALL_STATE(40)] = 544,
  [SMALL_STATE(41)] = 577,
  [SMALL_STATE(42)] = 610,
  [SMALL_STATE(43)] = 643,
  [SMALL_STATE(44)] = 676,
  [SMALL_STATE(45)] = 726,
  [SMALL_STATE(46)] = 758,
  [SMALL_STATE(47)] = 814,
  [SMALL_STATE(48)] = 874,
  [SMALL_STATE(49)] = 914,
  [SMALL_STATE(50)] = 958,
  [SMALL_STATE(51)] = 1010,
  [SMALL_STATE(52)] = 1044,
  [SMALL_STATE(53)] = 1076,
  [SMALL_STATE(54)] = 1122,
  [SMALL_STATE(55)] = 1172,
  [SMALL_STATE(56)] = 1220,
  [SMALL_STATE(57)] = 1256,
  [SMALL_STATE(58)] = 1312,
  [SMALL_STATE(59)] = 1374,
  [SMALL_STATE(60)] = 1436,
  [SMALL_STATE(61)] = 1493,
  [SMALL_STATE(62)] = 1550,
  [SMALL_STATE(63)] = 1606,
  [SMALL_STATE(64)] = 1662,
  [SMALL_STATE(65)] = 1673,
  [SMALL_STATE(66)] = 1684,
  [SMALL_STATE(67)] = 1695,
  [SMALL_STATE(68)] = 1706,
  [SMALL_STATE(69)] = 1717,
  [SMALL_STATE(70)] = 1728,
  [SMALL_STATE(71)] = 1738,
  [SMALL_STATE(72)] = 1748,
  [SMALL_STATE(73)] = 1758,
  [SMALL_STATE(74)] = 1768,
  [SMALL_STATE(75)] = 1778,
  [SMALL_STATE(76)] = 1785,
  [SMALL_STATE(77)] = 1789,
  [SMALL_STATE(78)] = 1793,
  [SMALL_STATE(79)] = 1797,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_end_range_expression, 2, .production_id = 4),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_end_range_expression, 2, .production_id = 4),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3, .production_id = 8),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3, .production_id = 8),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_expression, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primary_expression, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_invocation, 2, .production_id = 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_invocation, 2, .production_id = 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5, .production_id = 10),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 5, .production_id = 10),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, .production_id = 13),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4, .production_id = 13),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_invocation, 4, .production_id = 12),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_invocation, 4, .production_id = 12),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, .production_id = 10),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4, .production_id = 10),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, .production_id = 5),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4, .production_id = 5),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, .production_id = 9),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3, .production_id = 9),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, .production_id = 5),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, .production_id = 5),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 6),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_expression, 2, .production_id = 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix_expression, 2, .production_id = 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_expression, 5, .production_id = 15),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_start_range_expression, 2, .production_id = 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 6),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 3, .production_id = 7),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 9),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, .production_id = 5),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(66),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(69),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, .production_id = 11), SHIFT_REPEAT(16),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, .production_id = 11),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 14), SHIFT_REPEAT(9),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 14),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [231] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_maparoni(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
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
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
