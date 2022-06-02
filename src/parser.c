#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 25
#define SYMBOL_COUNT 107
#define ALIAS_COUNT 0
#define TOKEN_COUNT 82
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 17

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
  anon_sym_QMARK_QMARK = 20,
  anon_sym_DOT_DOT_DOT = 21,
  anon_sym_DOT_DOT_LT = 22,
  anon_sym_BANG = 23,
  anon_sym_km = 24,
  anon_sym_m = 25,
  anon_sym_mi = 26,
  anon_sym_miles = 27,
  anon_sym_ft = 28,
  anon_sym_feet = 29,
  anon_sym_QMARK = 30,
  anon_sym_COLON = 31,
  anon_sym_id = 32,
  anon_sym_index = 33,
  anon_sym_pi = 34,
  anon_sym_now = 35,
  anon_sym_area = 36,
  anon_sym_coordinate = 37,
  anon_sym_distance = 38,
  anon_sym_latitude = 39,
  anon_sym_longitude = 40,
  anon_sym_length = 41,
  anon_sym_geometry = 42,
  anon_sym_clear = 43,
  anon_sym_white = 44,
  anon_sym_gray = 45,
  anon_sym_grey = 46,
  anon_sym_black = 47,
  anon_sym_red = 48,
  anon_sym_orange = 49,
  anon_sym_yellow = 50,
  anon_sym_green = 51,
  anon_sym_teal = 52,
  anon_sym_blue = 53,
  anon_sym_purple = 54,
  anon_sym_pink = 55,
  anon_sym_brown = 56,
  anon_sym_indigo = 57,
  anon_sym_linePoints = 58,
  anon_sym_collectionColor = 59,
  anon_sym_collectionLetter = 60,
  anon_sym_collectionName = 61,
  aux_sym_identifier_token1 = 62,
  anon_sym_BQUOTE = 63,
  aux_sym_identifier_token2 = 64,
  sym_type_identifier = 65,
  anon_sym_true = 66,
  anon_sym_false = 67,
  sym_number = 68,
  sym_rating = 69,
  anon_sym_DQUOTE = 70,
  aux_sym_string_token1 = 71,
  aux_sym_string_token2 = 72,
  anon_sym_SQUOTE = 73,
  aux_sym_string_token3 = 74,
  sym_nil = 75,
  anon_sym_LBRACK = 76,
  anon_sym_COMMA = 77,
  anon_sym_RBRACK = 78,
  anon_sym_DOT = 79,
  anon_sym_LPAREN = 80,
  anon_sym_RPAREN = 81,
  sym_expression = 82,
  sym__expression = 83,
  sym_binary_expression = 84,
  sym_range_expression = 85,
  sym__unary_expression = 86,
  sym_prefix_expression = 87,
  sym_suffix_expression = 88,
  sym_unit = 89,
  sym_open_start_range_expression = 90,
  sym_open_end_range_expression = 91,
  sym__primary_expression = 92,
  sym_ternary_expression = 93,
  sym__basic_literal = 94,
  sym_constant = 95,
  sym_identifier = 96,
  sym_boolean = 97,
  sym_string = 98,
  sym_array = 99,
  sym_field_access = 100,
  sym_method_invocation = 101,
  sym_argument_list = 102,
  aux_sym_string_repeat1 = 103,
  aux_sym_string_repeat2 = 104,
  aux_sym_array_repeat1 = 105,
  aux_sym_argument_list_repeat1 = 106,
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
  [anon_sym_QMARK_QMARK] = "\?\?",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_DOT_DOT_LT] = "..<",
  [anon_sym_BANG] = "!",
  [anon_sym_km] = "km",
  [anon_sym_m] = "m",
  [anon_sym_mi] = "mi",
  [anon_sym_miles] = "miles",
  [anon_sym_ft] = "ft",
  [anon_sym_feet] = "feet",
  [anon_sym_QMARK] = "\?",
  [anon_sym_COLON] = ":",
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
  [sym_rating] = "rating",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token3] = "string_token3",
  [sym_nil] = "nil",
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
  [sym_suffix_expression] = "suffix_expression",
  [sym_unit] = "unit",
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
  [anon_sym_QMARK_QMARK] = anon_sym_QMARK_QMARK,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_DOT_DOT_LT] = anon_sym_DOT_DOT_LT,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_km] = anon_sym_km,
  [anon_sym_m] = anon_sym_m,
  [anon_sym_mi] = anon_sym_mi,
  [anon_sym_miles] = anon_sym_miles,
  [anon_sym_ft] = anon_sym_ft,
  [anon_sym_feet] = anon_sym_feet,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_COLON] = anon_sym_COLON,
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
  [sym_rating] = sym_rating,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [sym_nil] = sym_nil,
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
  [sym_suffix_expression] = sym_suffix_expression,
  [sym_unit] = sym_unit,
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
  [anon_sym_QMARK_QMARK] = {
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
  [anon_sym_km] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_m] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_miles] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ft] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_feet] = {
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
  [sym_rating] = {
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
  [sym_nil] = {
    .visible = true,
    .named = true,
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
  [sym_suffix_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unit] = {
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
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 1},
  [7] = {.index = 9, .length = 3},
  [8] = {.index = 12, .length = 3},
  [9] = {.index = 15, .length = 2},
  [10] = {.index = 17, .length = 1},
  [11] = {.index = 18, .length = 2},
  [12] = {.index = 20, .length = 2},
  [13] = {.index = 22, .length = 3},
  [14] = {.index = 25, .length = 2},
  [15] = {.index = 27, .length = 2},
  [16] = {.index = 29, .length = 3},
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
    {field_operand, 0},
    {field_operator, 1},
  [8] =
    {field_element, 1},
  [9] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [12] =
    {field_end, 2},
    {field_operator, 1},
    {field_start, 0},
  [15] =
    {field_field, 2},
    {field_object, 0},
  [17] =
    {field_value, 1},
  [18] =
    {field_element, 1},
    {field_element, 2, .inherited = true},
  [20] =
    {field_element, 0, .inherited = true},
    {field_element, 1, .inherited = true},
  [22] =
    {field_arguments, 3},
    {field_name, 2},
    {field_object, 0},
  [25] =
    {field_value, 1},
    {field_value, 2, .inherited = true},
  [27] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [29] =
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
      if (eof) ADVANCE(19);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '"') ADVANCE(231);
      if (lookahead == '%') ADVANCE(35);
      if (lookahead == '&') ADVANCE(32);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '(') ADVANCE(245);
      if (lookahead == ')') ADVANCE(246);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '+') ADVANCE(28);
      if (lookahead == ',') ADVANCE(242);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(244);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(20);
      if (lookahead == '?') ADVANCE(56);
      if (lookahead == '[') ADVANCE(241);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == ']') ADVANCE(243);
      if (lookahead == '^') ADVANCE(34);
      if (lookahead == '`') ADVANCE(222);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'b') ADVANCE(154);
      if (lookahead == 'c') ADVANCE(164);
      if (lookahead == 'd') ADVANCE(143);
      if (lookahead == 'f') ADVANCE(90);
      if (lookahead == 'g') ADVANCE(124);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == 'k') ADVANCE(165);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 'm') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead == 'p') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == 'w') ADVANCE(142);
      if (lookahead == 'y') ADVANCE(129);
      if (lookahead == '|') ADVANCE(33);
      if (lookahead == 9733 ||
          lookahead == 9734) ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('e' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '"') ADVANCE(231);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == ')') ADVANCE(246);
      if (lookahead == '+') ADVANCE(28);
      if (lookahead == ',') ADVANCE(242);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == '[') ADVANCE(241);
      if (lookahead == ']') ADVANCE(243);
      if (lookahead == '`') ADVANCE(222);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'b') ADVANCE(154);
      if (lookahead == 'c') ADVANCE(164);
      if (lookahead == 'd') ADVANCE(143);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == 'g') ADVANCE(124);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead == 'p') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == 'w') ADVANCE(142);
      if (lookahead == 'y') ADVANCE(129);
      if (lookahead == 9733 ||
          lookahead == 9734) ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('e' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(231);
      if (lookahead == '\\') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead != 0) ADVANCE(232);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '\\') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '<') ADVANCE(41);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(24);
      END_STATE();
    case 8:
      if (lookahead == '`') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(10);
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 15:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(224);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 17:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(235);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '%') ADVANCE(35);
      if (lookahead == '&') ADVANCE(32);
      if (lookahead == '(') ADVANCE(245);
      if (lookahead == ')') ADVANCE(246);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '+') ADVANCE(28);
      if (lookahead == ',') ADVANCE(242);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(244);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(20);
      if (lookahead == '?') ADVANCE(56);
      if (lookahead == ']') ADVANCE(243);
      if (lookahead == '^') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'k') ADVANCE(12);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == '|') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(37);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '=') ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(26);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(27);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_LT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(25);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_km);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_km);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'i') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_mi);
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_mi);
      if (lookahead == 'l') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_miles);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_miles);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_ft);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_ft);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_feet);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_feet);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '?') ADVANCE(39);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_index);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_pi);
      if (lookahead == 'n') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_now);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_area);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_coordinate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_distance);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_latitude);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_longitude);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_length);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_geometry);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_clear);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_white);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_gray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_grey);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_black);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_red);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_orange);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_yellow);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_green);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_teal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_blue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_purple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_pink);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_brown);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_indigo);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_linePoints);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_collectionColor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_collectionLetter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_collectionName);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'C') ADVANCE(183);
      if (lookahead == 'L') ADVANCE(136);
      if (lookahead == 'N') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'P') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == 't') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == 'o') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'u') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'e') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == 'i') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == 'y') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'k') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'k') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'w') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'w') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'w') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'x') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'y') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'y') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_type_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_rating);
      if (lookahead == 9733 ||
          lookahead == 9734) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(232);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\\') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(237);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(235);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(5);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 18},
  [26] = {.lex_state = 18},
  [27] = {.lex_state = 18},
  [28] = {.lex_state = 18},
  [29] = {.lex_state = 18},
  [30] = {.lex_state = 18},
  [31] = {.lex_state = 18},
  [32] = {.lex_state = 18},
  [33] = {.lex_state = 18},
  [34] = {.lex_state = 18},
  [35] = {.lex_state = 18},
  [36] = {.lex_state = 18},
  [37] = {.lex_state = 18},
  [38] = {.lex_state = 18},
  [39] = {.lex_state = 18},
  [40] = {.lex_state = 18},
  [41] = {.lex_state = 18},
  [42] = {.lex_state = 18},
  [43] = {.lex_state = 18},
  [44] = {.lex_state = 18},
  [45] = {.lex_state = 18},
  [46] = {.lex_state = 18},
  [47] = {.lex_state = 18},
  [48] = {.lex_state = 18},
  [49] = {.lex_state = 18},
  [50] = {.lex_state = 18},
  [51] = {.lex_state = 18},
  [52] = {.lex_state = 18},
  [53] = {.lex_state = 18},
  [54] = {.lex_state = 18},
  [55] = {.lex_state = 18},
  [56] = {.lex_state = 18},
  [57] = {.lex_state = 18},
  [58] = {.lex_state = 18},
  [59] = {.lex_state = 18},
  [60] = {.lex_state = 18},
  [61] = {.lex_state = 18},
  [62] = {.lex_state = 18},
  [63] = {.lex_state = 18},
  [64] = {.lex_state = 18},
  [65] = {.lex_state = 18},
  [66] = {.lex_state = 18},
  [67] = {.lex_state = 18},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 15},
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
    [anon_sym_QMARK_QMARK] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT_LT] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_km] = ACTIONS(1),
    [anon_sym_m] = ACTIONS(1),
    [anon_sym_mi] = ACTIONS(1),
    [anon_sym_miles] = ACTIONS(1),
    [anon_sym_ft] = ACTIONS(1),
    [anon_sym_feet] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
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
    [sym_rating] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_expression] = STATE(81),
    [sym__expression] = STATE(67),
    [sym_binary_expression] = STATE(67),
    [sym_range_expression] = STATE(67),
    [sym__unary_expression] = STATE(67),
    [sym_prefix_expression] = STATE(67),
    [sym_suffix_expression] = STATE(67),
    [sym_open_start_range_expression] = STATE(67),
    [sym_open_end_range_expression] = STATE(67),
    [sym__primary_expression] = STATE(42),
    [sym_ternary_expression] = STATE(67),
    [sym__basic_literal] = STATE(42),
    [sym_constant] = STATE(42),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(42),
    [sym_string] = STATE(42),
    [sym_array] = STATE(42),
    [sym_field_access] = STATE(42),
    [sym_method_invocation] = STATE(42),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_id] = ACTIONS(7),
    [anon_sym_index] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_now] = ACTIONS(7),
    [anon_sym_area] = ACTIONS(7),
    [anon_sym_coordinate] = ACTIONS(7),
    [anon_sym_distance] = ACTIONS(7),
    [anon_sym_latitude] = ACTIONS(7),
    [anon_sym_longitude] = ACTIONS(7),
    [anon_sym_length] = ACTIONS(7),
    [anon_sym_geometry] = ACTIONS(7),
    [anon_sym_clear] = ACTIONS(7),
    [anon_sym_white] = ACTIONS(7),
    [anon_sym_gray] = ACTIONS(7),
    [anon_sym_grey] = ACTIONS(7),
    [anon_sym_black] = ACTIONS(7),
    [anon_sym_red] = ACTIONS(7),
    [anon_sym_orange] = ACTIONS(7),
    [anon_sym_yellow] = ACTIONS(7),
    [anon_sym_green] = ACTIONS(7),
    [anon_sym_teal] = ACTIONS(7),
    [anon_sym_blue] = ACTIONS(7),
    [anon_sym_purple] = ACTIONS(7),
    [anon_sym_pink] = ACTIONS(7),
    [anon_sym_brown] = ACTIONS(7),
    [anon_sym_indigo] = ACTIONS(7),
    [anon_sym_linePoints] = ACTIONS(7),
    [anon_sym_collectionColor] = ACTIONS(7),
    [anon_sym_collectionLetter] = ACTIONS(7),
    [anon_sym_collectionName] = ACTIONS(7),
    [aux_sym_identifier_token1] = ACTIONS(9),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [sym_type_identifier] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_rating] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym_nil] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [2] = {
    [sym__expression] = STATE(48),
    [sym_binary_expression] = STATE(48),
    [sym_range_expression] = STATE(48),
    [sym__unary_expression] = STATE(48),
    [sym_prefix_expression] = STATE(48),
    [sym_suffix_expression] = STATE(48),
    [sym_open_start_range_expression] = STATE(48),
    [sym_open_end_range_expression] = STATE(48),
    [sym__primary_expression] = STATE(42),
    [sym_ternary_expression] = STATE(48),
    [sym__basic_literal] = STATE(42),
    [sym_constant] = STATE(42),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(42),
    [sym_string] = STATE(42),
    [sym_array] = STATE(42),
    [sym_field_access] = STATE(42),
    [sym_method_invocation] = STATE(42),
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
    [anon_sym_QMARK_QMARK] = ACTIONS(27),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_km] = ACTIONS(29),
    [anon_sym_m] = ACTIONS(29),
    [anon_sym_mi] = ACTIONS(29),
    [anon_sym_miles] = ACTIONS(29),
    [anon_sym_ft] = ACTIONS(29),
    [anon_sym_feet] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_id] = ACTIONS(7),
    [anon_sym_index] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_now] = ACTIONS(7),
    [anon_sym_area] = ACTIONS(7),
    [anon_sym_coordinate] = ACTIONS(7),
    [anon_sym_distance] = ACTIONS(7),
    [anon_sym_latitude] = ACTIONS(7),
    [anon_sym_longitude] = ACTIONS(7),
    [anon_sym_length] = ACTIONS(7),
    [anon_sym_geometry] = ACTIONS(7),
    [anon_sym_clear] = ACTIONS(7),
    [anon_sym_white] = ACTIONS(7),
    [anon_sym_gray] = ACTIONS(7),
    [anon_sym_grey] = ACTIONS(7),
    [anon_sym_black] = ACTIONS(7),
    [anon_sym_red] = ACTIONS(7),
    [anon_sym_orange] = ACTIONS(7),
    [anon_sym_yellow] = ACTIONS(7),
    [anon_sym_green] = ACTIONS(7),
    [anon_sym_teal] = ACTIONS(7),
    [anon_sym_blue] = ACTIONS(7),
    [anon_sym_purple] = ACTIONS(7),
    [anon_sym_pink] = ACTIONS(7),
    [anon_sym_brown] = ACTIONS(7),
    [anon_sym_indigo] = ACTIONS(7),
    [anon_sym_linePoints] = ACTIONS(7),
    [anon_sym_collectionColor] = ACTIONS(7),
    [anon_sym_collectionLetter] = ACTIONS(7),
    [anon_sym_collectionName] = ACTIONS(7),
    [aux_sym_identifier_token1] = ACTIONS(9),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [sym_type_identifier] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_rating] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym_nil] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(27),
  },
  [3] = {
    [sym__expression] = STATE(63),
    [sym_binary_expression] = STATE(63),
    [sym_range_expression] = STATE(63),
    [sym__unary_expression] = STATE(63),
    [sym_prefix_expression] = STATE(63),
    [sym_suffix_expression] = STATE(63),
    [sym_open_start_range_expression] = STATE(63),
    [sym_open_end_range_expression] = STATE(63),
    [sym__primary_expression] = STATE(42),
    [sym_ternary_expression] = STATE(63),
    [sym__basic_literal] = STATE(42),
    [sym_constant] = STATE(42),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(42),
    [sym_string] = STATE(42),
    [sym_array] = STATE(42),
    [sym_field_access] = STATE(42),
    [sym_method_invocation] = STATE(42),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_id] = ACTIONS(7),
    [anon_sym_index] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_now] = ACTIONS(7),
    [anon_sym_area] = ACTIONS(7),
    [anon_sym_coordinate] = ACTIONS(7),
    [anon_sym_distance] = ACTIONS(7),
    [anon_sym_latitude] = ACTIONS(7),
    [anon_sym_longitude] = ACTIONS(7),
    [anon_sym_length] = ACTIONS(7),
    [anon_sym_geometry] = ACTIONS(7),
    [anon_sym_clear] = ACTIONS(7),
    [anon_sym_white] = ACTIONS(7),
    [anon_sym_gray] = ACTIONS(7),
    [anon_sym_grey] = ACTIONS(7),
    [anon_sym_black] = ACTIONS(7),
    [anon_sym_red] = ACTIONS(7),
    [anon_sym_orange] = ACTIONS(7),
    [anon_sym_yellow] = ACTIONS(7),
    [anon_sym_green] = ACTIONS(7),
    [anon_sym_teal] = ACTIONS(7),
    [anon_sym_blue] = ACTIONS(7),
    [anon_sym_purple] = ACTIONS(7),
    [anon_sym_pink] = ACTIONS(7),
    [anon_sym_brown] = ACTIONS(7),
    [anon_sym_indigo] = ACTIONS(7),
    [anon_sym_linePoints] = ACTIONS(7),
    [anon_sym_collectionColor] = ACTIONS(7),
    [anon_sym_collectionLetter] = ACTIONS(7),
    [anon_sym_collectionName] = ACTIONS(7),
    [aux_sym_identifier_token1] = ACTIONS(9),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [sym_type_identifier] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_rating] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym_nil] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_RBRACK] = ACTIONS(35),
  },
  [4] = {
    [sym__expression] = STATE(65),
    [sym_binary_expression] = STATE(65),
    [sym_range_expression] = STATE(65),
    [sym__unary_expression] = STATE(65),
    [sym_prefix_expression] = STATE(65),
    [sym_suffix_expression] = STATE(65),
    [sym_open_start_range_expression] = STATE(65),
    [sym_open_end_range_expression] = STATE(65),
    [sym__primary_expression] = STATE(42),
    [sym_ternary_expression] = STATE(65),
    [sym__basic_literal] = STATE(42),
    [sym_constant] = STATE(42),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(42),
    [sym_string] = STATE(42),
    [sym_array] = STATE(42),
    [sym_field_access] = STATE(42),
    [sym_method_invocation] = STATE(42),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_id] = ACTIONS(7),
    [anon_sym_index] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_now] = ACTIONS(7),
    [anon_sym_area] = ACTIONS(7),
    [anon_sym_coordinate] = ACTIONS(7),
    [anon_sym_distance] = ACTIONS(7),
    [anon_sym_latitude] = ACTIONS(7),
    [anon_sym_longitude] = ACTIONS(7),
    [anon_sym_length] = ACTIONS(7),
    [anon_sym_geometry] = ACTIONS(7),
    [anon_sym_clear] = ACTIONS(7),
    [anon_sym_white] = ACTIONS(7),
    [anon_sym_gray] = ACTIONS(7),
    [anon_sym_grey] = ACTIONS(7),
    [anon_sym_black] = ACTIONS(7),
    [anon_sym_red] = ACTIONS(7),
    [anon_sym_orange] = ACTIONS(7),
    [anon_sym_yellow] = ACTIONS(7),
    [anon_sym_green] = ACTIONS(7),
    [anon_sym_teal] = ACTIONS(7),
    [anon_sym_blue] = ACTIONS(7),
    [anon_sym_purple] = ACTIONS(7),
    [anon_sym_pink] = ACTIONS(7),
    [anon_sym_brown] = ACTIONS(7),
    [anon_sym_indigo] = ACTIONS(7),
    [anon_sym_linePoints] = ACTIONS(7),
    [anon_sym_collectionColor] = ACTIONS(7),
    [anon_sym_collectionLetter] = ACTIONS(7),
    [anon_sym_collectionName] = ACTIONS(7),
    [aux_sym_identifier_token1] = ACTIONS(9),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [sym_type_identifier] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_rating] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym_nil] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(37),
  },
  [5] = {
    [sym__expression] = STATE(62),
    [sym_binary_expression] = STATE(62),
    [sym_range_expression] = STATE(62),
    [sym__unary_expression] = STATE(62),
    [sym_prefix_expression] = STATE(62),
    [sym_suffix_expression] = STATE(62),
    [sym_open_start_range_expression] = STATE(62),
    [sym_open_end_range_expression] = STATE(62),
    [sym__primary_expression] = STATE(42),
    [sym_ternary_expression] = STATE(62),
    [sym__basic_literal] = STATE(42),
    [sym_constant] = STATE(42),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(42),
    [sym_string] = STATE(42),
    [sym_array] = STATE(42),
    [sym_field_access] = STATE(42),
    [sym_method_invocation] = STATE(42),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_id] = ACTIONS(7),
    [anon_sym_index] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_now] = ACTIONS(7),
    [anon_sym_area] = ACTIONS(7),
    [anon_sym_coordinate] = ACTIONS(7),
    [anon_sym_distance] = ACTIONS(7),
    [anon_sym_latitude] = ACTIONS(7),
    [anon_sym_longitude] = ACTIONS(7),
    [anon_sym_length] = ACTIONS(7),
    [anon_sym_geometry] = ACTIONS(7),
    [anon_sym_clear] = ACTIONS(7),
    [anon_sym_white] = ACTIONS(7),
    [anon_sym_gray] = ACTIONS(7),
    [anon_sym_grey] = ACTIONS(7),
    [anon_sym_black] = ACTIONS(7),
    [anon_sym_red] = ACTIONS(7),
    [anon_sym_orange] = ACTIONS(7),
    [anon_sym_yellow] = ACTIONS(7),
    [anon_sym_green] = ACTIONS(7),
    [anon_sym_teal] = ACTIONS(7),
    [anon_sym_blue] = ACTIONS(7),
    [anon_sym_purple] = ACTIONS(7),
    [anon_sym_pink] = ACTIONS(7),
    [anon_sym_brown] = ACTIONS(7),
    [anon_sym_indigo] = ACTIONS(7),
    [anon_sym_linePoints] = ACTIONS(7),
    [anon_sym_collectionColor] = ACTIONS(7),
    [anon_sym_collectionLetter] = ACTIONS(7),
    [anon_sym_collectionName] = ACTIONS(7),
    [aux_sym_identifier_token1] = ACTIONS(9),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [sym_type_identifier] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_rating] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym_nil] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(39),
  },
  [6] = {
    [sym__expression] = STATE(65),
    [sym_binary_expression] = STATE(65),
    [sym_range_expression] = STATE(65),
    [sym__unary_expression] = STATE(65),
    [sym_prefix_expression] = STATE(65),
    [sym_suffix_expression] = STATE(65),
    [sym_open_start_range_expression] = STATE(65),
    [sym_open_end_range_expression] = STATE(65),
    [sym__primary_expression] = STATE(42),
    [sym_ternary_expression] = STATE(65),
    [sym__basic_literal] = STATE(42),
    [sym_constant] = STATE(42),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(42),
    [sym_string] = STATE(42),
    [sym_array] = STATE(42),
    [sym_field_access] = STATE(42),
    [sym_method_invocation] = STATE(42),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_id] = ACTIONS(7),
    [anon_sym_index] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_now] = ACTIONS(7),
    [anon_sym_area] = ACTIONS(7),
    [anon_sym_coordinate] = ACTIONS(7),
    [anon_sym_distance] = ACTIONS(7),
    [anon_sym_latitude] = ACTIONS(7),
    [anon_sym_longitude] = ACTIONS(7),
    [anon_sym_length] = ACTIONS(7),
    [anon_sym_geometry] = ACTIONS(7),
    [anon_sym_clear] = ACTIONS(7),
    [anon_sym_white] = ACTIONS(7),
    [anon_sym_gray] = ACTIONS(7),
    [anon_sym_grey] = ACTIONS(7),
    [anon_sym_black] = ACTIONS(7),
    [anon_sym_red] = ACTIONS(7),
    [anon_sym_orange] = ACTIONS(7),
    [anon_sym_yellow] = ACTIONS(7),
    [anon_sym_green] = ACTIONS(7),
    [anon_sym_teal] = ACTIONS(7),
    [anon_sym_blue] = ACTIONS(7),
    [anon_sym_purple] = ACTIONS(7),
    [anon_sym_pink] = ACTIONS(7),
    [anon_sym_brown] = ACTIONS(7),
    [anon_sym_indigo] = ACTIONS(7),
    [anon_sym_linePoints] = ACTIONS(7),
    [anon_sym_collectionColor] = ACTIONS(7),
    [anon_sym_collectionLetter] = ACTIONS(7),
    [anon_sym_collectionName] = ACTIONS(7),
    [aux_sym_identifier_token1] = ACTIONS(9),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [sym_type_identifier] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_rating] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym_nil] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(41),
  },
  [7] = {
    [sym__expression] = STATE(57),
    [sym_binary_expression] = STATE(57),
    [sym_range_expression] = STATE(57),
    [sym__unary_expression] = STATE(57),
    [sym_prefix_expression] = STATE(57),
    [sym_suffix_expression] = STATE(57),
    [sym_open_start_range_expression] = STATE(57),
    [sym_open_end_range_expression] = STATE(57),
    [sym__primary_expression] = STATE(42),
    [sym_ternary_expression] = STATE(57),
    [sym__basic_literal] = STATE(42),
    [sym_constant] = STATE(42),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(42),
    [sym_string] = STATE(42),
    [sym_array] = STATE(42),
    [sym_field_access] = STATE(42),
    [sym_method_invocation] = STATE(42),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_id] = ACTIONS(7),
    [anon_sym_index] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_now] = ACTIONS(7),
    [anon_sym_area] = ACTIONS(7),
    [anon_sym_coordinate] = ACTIONS(7),
    [anon_sym_distance] = ACTIONS(7),
    [anon_sym_latitude] = ACTIONS(7),
    [anon_sym_longitude] = ACTIONS(7),
    [anon_sym_length] = ACTIONS(7),
    [anon_sym_geometry] = ACTIONS(7),
    [anon_sym_clear] = ACTIONS(7),
    [anon_sym_white] = ACTIONS(7),
    [anon_sym_gray] = ACTIONS(7),
    [anon_sym_grey] = ACTIONS(7),
    [anon_sym_black] = ACTIONS(7),
    [anon_sym_red] = ACTIONS(7),
    [anon_sym_orange] = ACTIONS(7),
    [anon_sym_yellow] = ACTIONS(7),
    [anon_sym_green] = ACTIONS(7),
    [anon_sym_teal] = ACTIONS(7),
    [anon_sym_blue] = ACTIONS(7),
    [anon_sym_purple] = ACTIONS(7),
    [anon_sym_pink] = ACTIONS(7),
    [anon_sym_brown] = ACTIONS(7),
    [anon_sym_indigo] = ACTIONS(7),
    [anon_sym_linePoints] = ACTIONS(7),
    [anon_sym_collectionColor] = ACTIONS(7),
    [anon_sym_collectionLetter] = ACTIONS(7),
    [anon_sym_collectionName] = ACTIONS(7),
    [aux_sym_identifier_token1] = ACTIONS(9),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [sym_type_identifier] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_rating] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym_nil] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [8] = {
    [sym__expression] = STATE(49),
    [sym_binary_expression] = STATE(49),
    [sym_range_expression] = STATE(49),
    [sym__unary_expression] = STATE(49),
    [sym_prefix_expression] = STATE(49),
    [sym_suffix_expression] = STATE(49),
    [sym_open_start_range_expression] = STATE(49),
    [sym_open_end_range_expression] = STATE(49),
    [sym__primary_expression] = STATE(42),
    [sym_ternary_expression] = STATE(49),
    [sym__basic_literal] = STATE(42),
    [sym_constant] = STATE(42),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(42),
    [sym_string] = STATE(42),
    [sym_array] = STATE(42),
    [sym_field_access] = STATE(42),
    [sym_method_invocation] = STATE(42),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_id] = ACTIONS(7),
    [anon_sym_index] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_now] = ACTIONS(7),
    [anon_sym_area] = ACTIONS(7),
    [anon_sym_coordinate] = ACTIONS(7),
    [anon_sym_distance] = ACTIONS(7),
    [anon_sym_latitude] = ACTIONS(7),
    [anon_sym_longitude] = ACTIONS(7),
    [anon_sym_length] = ACTIONS(7),
    [anon_sym_geometry] = ACTIONS(7),
    [anon_sym_clear] = ACTIONS(7),
    [anon_sym_white] = ACTIONS(7),
    [anon_sym_gray] = ACTIONS(7),
    [anon_sym_grey] = ACTIONS(7),
    [anon_sym_black] = ACTIONS(7),
    [anon_sym_red] = ACTIONS(7),
    [anon_sym_orange] = ACTIONS(7),
    [anon_sym_yellow] = ACTIONS(7),
    [anon_sym_green] = ACTIONS(7),
    [anon_sym_teal] = ACTIONS(7),
    [anon_sym_blue] = ACTIONS(7),
    [anon_sym_purple] = ACTIONS(7),
    [anon_sym_pink] = ACTIONS(7),
    [anon_sym_brown] = ACTIONS(7),
    [anon_sym_indigo] = ACTIONS(7),
    [anon_sym_linePoints] = ACTIONS(7),
    [anon_sym_collectionColor] = ACTIONS(7),
    [anon_sym_collectionLetter] = ACTIONS(7),
    [anon_sym_collectionName] = ACTIONS(7),
    [aux_sym_identifier_token1] = ACTIONS(9),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [sym_type_identifier] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_rating] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym_nil] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [9] = {
    [sym__expression] = STATE(55),
    [sym_binary_expression] = STATE(55),
    [sym_range_expression] = STATE(55),
    [sym__unary_expression] = STATE(55),
    [sym_prefix_expression] = STATE(55),
    [sym_suffix_expression] = STATE(55),
    [sym_open_start_range_expression] = STATE(55),
    [sym_open_end_range_expression] = STATE(55),
    [sym__primary_expression] = STATE(42),
    [sym_ternary_expression] = STATE(55),
    [sym__basic_literal] = STATE(42),
    [sym_constant] = STATE(42),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(42),
    [sym_string] = STATE(42),
    [sym_array] = STATE(42),
    [sym_field_access] = STATE(42),
    [sym_method_invocation] = STATE(42),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_id] = ACTIONS(7),
    [anon_sym_index] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_now] = ACTIONS(7),
    [anon_sym_area] = ACTIONS(7),
    [anon_sym_coordinate] = ACTIONS(7),
    [anon_sym_distance] = ACTIONS(7),
    [anon_sym_latitude] = ACTIONS(7),
    [anon_sym_longitude] = ACTIONS(7),
    [anon_sym_length] = ACTIONS(7),
    [anon_sym_geometry] = ACTIONS(7),
    [anon_sym_clear] = ACTIONS(7),
    [anon_sym_white] = ACTIONS(7),
    [anon_sym_gray] = ACTIONS(7),
    [anon_sym_grey] = ACTIONS(7),
    [anon_sym_black] = ACTIONS(7),
    [anon_sym_red] = ACTIONS(7),
    [anon_sym_orange] = ACTIONS(7),
    [anon_sym_yellow] = ACTIONS(7),
    [anon_sym_green] = ACTIONS(7),
    [anon_sym_teal] = ACTIONS(7),
    [anon_sym_blue] = ACTIONS(7),
    [anon_sym_purple] = ACTIONS(7),
    [anon_sym_pink] = ACTIONS(7),
    [anon_sym_brown] = ACTIONS(7),
    [anon_sym_indigo] = ACTIONS(7),
    [anon_sym_linePoints] = ACTIONS(7),
    [anon_sym_collectionColor] = ACTIONS(7),
    [anon_sym_collectionLetter] = ACTIONS(7),
    [anon_sym_collectionName] = ACTIONS(7),
    [aux_sym_identifier_token1] = ACTIONS(9),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [sym_type_identifier] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_rating] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym_nil] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [10] = {
    [sym__expression] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_range_expression] = STATE(33),
    [sym__unary_expression] = STATE(33),
    [sym_prefix_expression] = STATE(33),
    [sym_suffix_expression] = STATE(33),
    [sym_open_start_range_expression] = STATE(33),
    [sym_open_end_range_expression] = STATE(33),
    [sym__primary_expression] = STATE(42),
    [sym_ternary_expression] = STATE(33),
    [sym__basic_literal] = STATE(42),
    [sym_constant] = STATE(42),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(42),
    [sym_string] = STATE(42),
    [sym_array] = STATE(42),
    [sym_field_access] = STATE(42),
    [sym_method_invocation] = STATE(42),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_id] = ACTIONS(7),
    [anon_sym_index] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_now] = ACTIONS(7),
    [anon_sym_area] = ACTIONS(7),
    [anon_sym_coordinate] = ACTIONS(7),
    [anon_sym_distance] = ACTIONS(7),
    [anon_sym_latitude] = ACTIONS(7),
    [anon_sym_longitude] = ACTIONS(7),
    [anon_sym_length] = ACTIONS(7),
    [anon_sym_geometry] = ACTIONS(7),
    [anon_sym_clear] = ACTIONS(7),
    [anon_sym_white] = ACTIONS(7),
    [anon_sym_gray] = ACTIONS(7),
    [anon_sym_grey] = ACTIONS(7),
    [anon_sym_black] = ACTIONS(7),
    [anon_sym_red] = ACTIONS(7),
    [anon_sym_orange] = ACTIONS(7),
    [anon_sym_yellow] = ACTIONS(7),
    [anon_sym_green] = ACTIONS(7),
    [anon_sym_teal] = ACTIONS(7),
    [anon_sym_blue] = ACTIONS(7),
    [anon_sym_purple] = ACTIONS(7),
    [anon_sym_pink] = ACTIONS(7),
    [anon_sym_brown] = ACTIONS(7),
    [anon_sym_indigo] = ACTIONS(7),
    [anon_sym_linePoints] = ACTIONS(7),
    [anon_sym_collectionColor] = ACTIONS(7),
    [anon_sym_collectionLetter] = ACTIONS(7),
    [anon_sym_collectionName] = ACTIONS(7),
    [aux_sym_identifier_token1] = ACTIONS(9),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [sym_type_identifier] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_rating] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym_nil] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [11] = {
    [sym__expression] = STATE(64),
    [sym_binary_expression] = STATE(64),
    [sym_range_expression] = STATE(64),
    [sym__unary_expression] = STATE(64),
    [sym_prefix_expression] = STATE(64),
    [sym_suffix_expression] = STATE(64),
    [sym_open_start_range_expression] = STATE(64),
    [sym_open_end_range_expression] = STATE(64),
    [sym__primary_expression] = STATE(42),
    [sym_ternary_expression] = STATE(64),
    [sym__basic_literal] = STATE(42),
    [sym_constant] = STATE(42),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(42),
    [sym_string] = STATE(42),
    [sym_array] = STATE(42),
    [sym_field_access] = STATE(42),
    [sym_method_invocation] = STATE(42),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_id] = ACTIONS(7),
    [anon_sym_index] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_now] = ACTIONS(7),
    [anon_sym_area] = ACTIONS(7),
    [anon_sym_coordinate] = ACTIONS(7),
    [anon_sym_distance] = ACTIONS(7),
    [anon_sym_latitude] = ACTIONS(7),
    [anon_sym_longitude] = ACTIONS(7),
    [anon_sym_length] = ACTIONS(7),
    [anon_sym_geometry] = ACTIONS(7),
    [anon_sym_clear] = ACTIONS(7),
    [anon_sym_white] = ACTIONS(7),
    [anon_sym_gray] = ACTIONS(7),
    [anon_sym_grey] = ACTIONS(7),
    [anon_sym_black] = ACTIONS(7),
    [anon_sym_red] = ACTIONS(7),
    [anon_sym_orange] = ACTIONS(7),
    [anon_sym_yellow] = ACTIONS(7),
    [anon_sym_green] = ACTIONS(7),
    [anon_sym_teal] = ACTIONS(7),
    [anon_sym_blue] = ACTIONS(7),
    [anon_sym_purple] = ACTIONS(7),
    [anon_sym_pink] = ACTIONS(7),
    [anon_sym_brown] = ACTIONS(7),
    [anon_sym_indigo] = ACTIONS(7),
    [anon_sym_linePoints] = ACTIONS(7),
    [anon_sym_collectionColor] = ACTIONS(7),
    [anon_sym_collectionLetter] = ACTIONS(7),
    [anon_sym_collectionName] = ACTIONS(7),
    [aux_sym_identifier_token1] = ACTIONS(9),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [sym_type_identifier] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_rating] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym_nil] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [12] = {
    [sym__expression] = STATE(54),
    [sym_binary_expression] = STATE(54),
    [sym_range_expression] = STATE(54),
    [sym__unary_expression] = STATE(54),
    [sym_prefix_expression] = STATE(54),
    [sym_suffix_expression] = STATE(54),
    [sym_open_start_range_expression] = STATE(54),
    [sym_open_end_range_expression] = STATE(54),
    [sym__primary_expression] = STATE(42),
    [sym_ternary_expression] = STATE(54),
    [sym__basic_literal] = STATE(42),
    [sym_constant] = STATE(42),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(42),
    [sym_string] = STATE(42),
    [sym_array] = STATE(42),
    [sym_field_access] = STATE(42),
    [sym_method_invocation] = STATE(42),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_id] = ACTIONS(7),
    [anon_sym_index] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_now] = ACTIONS(7),
    [anon_sym_area] = ACTIONS(7),
    [anon_sym_coordinate] = ACTIONS(7),
    [anon_sym_distance] = ACTIONS(7),
    [anon_sym_latitude] = ACTIONS(7),
    [anon_sym_longitude] = ACTIONS(7),
    [anon_sym_length] = ACTIONS(7),
    [anon_sym_geometry] = ACTIONS(7),
    [anon_sym_clear] = ACTIONS(7),
    [anon_sym_white] = ACTIONS(7),
    [anon_sym_gray] = ACTIONS(7),
    [anon_sym_grey] = ACTIONS(7),
    [anon_sym_black] = ACTIONS(7),
    [anon_sym_red] = ACTIONS(7),
    [anon_sym_orange] = ACTIONS(7),
    [anon_sym_yellow] = ACTIONS(7),
    [anon_sym_green] = ACTIONS(7),
    [anon_sym_teal] = ACTIONS(7),
    [anon_sym_blue] = ACTIONS(7),
    [anon_sym_purple] = ACTIONS(7),
    [anon_sym_pink] = ACTIONS(7),
    [anon_sym_brown] = ACTIONS(7),
    [anon_sym_indigo] = ACTIONS(7),
    [anon_sym_linePoints] = ACTIONS(7),
    [anon_sym_collectionColor] = ACTIONS(7),
    [anon_sym_collectionLetter] = ACTIONS(7),
    [anon_sym_collectionName] = ACTIONS(7),
    [aux_sym_identifier_token1] = ACTIONS(9),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [sym_type_identifier] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_rating] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym_nil] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [13] = {
    [sym__expression] = STATE(66),
    [sym_binary_expression] = STATE(66),
    [sym_range_expression] = STATE(66),
    [sym__unary_expression] = STATE(66),
    [sym_prefix_expression] = STATE(66),
    [sym_suffix_expression] = STATE(66),
    [sym_open_start_range_expression] = STATE(66),
    [sym_open_end_range_expression] = STATE(66),
    [sym__primary_expression] = STATE(42),
    [sym_ternary_expression] = STATE(66),
    [sym__basic_literal] = STATE(42),
    [sym_constant] = STATE(42),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(42),
    [sym_string] = STATE(42),
    [sym_array] = STATE(42),
    [sym_field_access] = STATE(42),
    [sym_method_invocation] = STATE(42),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_id] = ACTIONS(7),
    [anon_sym_index] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_now] = ACTIONS(7),
    [anon_sym_area] = ACTIONS(7),
    [anon_sym_coordinate] = ACTIONS(7),
    [anon_sym_distance] = ACTIONS(7),
    [anon_sym_latitude] = ACTIONS(7),
    [anon_sym_longitude] = ACTIONS(7),
    [anon_sym_length] = ACTIONS(7),
    [anon_sym_geometry] = ACTIONS(7),
    [anon_sym_clear] = ACTIONS(7),
    [anon_sym_white] = ACTIONS(7),
    [anon_sym_gray] = ACTIONS(7),
    [anon_sym_grey] = ACTIONS(7),
    [anon_sym_black] = ACTIONS(7),
    [anon_sym_red] = ACTIONS(7),
    [anon_sym_orange] = ACTIONS(7),
    [anon_sym_yellow] = ACTIONS(7),
    [anon_sym_green] = ACTIONS(7),
    [anon_sym_teal] = ACTIONS(7),
    [anon_sym_blue] = ACTIONS(7),
    [anon_sym_purple] = ACTIONS(7),
    [anon_sym_pink] = ACTIONS(7),
    [anon_sym_brown] = ACTIONS(7),
    [anon_sym_indigo] = ACTIONS(7),
    [anon_sym_linePoints] = ACTIONS(7),
    [anon_sym_collectionColor] = ACTIONS(7),
    [anon_sym_collectionLetter] = ACTIONS(7),
    [anon_sym_collectionName] = ACTIONS(7),
    [aux_sym_identifier_token1] = ACTIONS(9),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [sym_type_identifier] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_rating] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym_nil] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [14] = {
    [sym__expression] = STATE(56),
    [sym_binary_expression] = STATE(56),
    [sym_range_expression] = STATE(56),
    [sym__unary_expression] = STATE(56),
    [sym_prefix_expression] = STATE(56),
    [sym_suffix_expression] = STATE(56),
    [sym_open_start_range_expression] = STATE(56),
    [sym_open_end_range_expression] = STATE(56),
    [sym__primary_expression] = STATE(42),
    [sym_ternary_expression] = STATE(56),
    [sym__basic_literal] = STATE(42),
    [sym_constant] = STATE(42),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(42),
    [sym_string] = STATE(42),
    [sym_array] = STATE(42),
    [sym_field_access] = STATE(42),
    [sym_method_invocation] = STATE(42),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_id] = ACTIONS(7),
    [anon_sym_index] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_now] = ACTIONS(7),
    [anon_sym_area] = ACTIONS(7),
    [anon_sym_coordinate] = ACTIONS(7),
    [anon_sym_distance] = ACTIONS(7),
    [anon_sym_latitude] = ACTIONS(7),
    [anon_sym_longitude] = ACTIONS(7),
    [anon_sym_length] = ACTIONS(7),
    [anon_sym_geometry] = ACTIONS(7),
    [anon_sym_clear] = ACTIONS(7),
    [anon_sym_white] = ACTIONS(7),
    [anon_sym_gray] = ACTIONS(7),
    [anon_sym_grey] = ACTIONS(7),
    [anon_sym_black] = ACTIONS(7),
    [anon_sym_red] = ACTIONS(7),
    [anon_sym_orange] = ACTIONS(7),
    [anon_sym_yellow] = ACTIONS(7),
    [anon_sym_green] = ACTIONS(7),
    [anon_sym_teal] = ACTIONS(7),
    [anon_sym_blue] = ACTIONS(7),
    [anon_sym_purple] = ACTIONS(7),
    [anon_sym_pink] = ACTIONS(7),
    [anon_sym_brown] = ACTIONS(7),
    [anon_sym_indigo] = ACTIONS(7),
    [anon_sym_linePoints] = ACTIONS(7),
    [anon_sym_collectionColor] = ACTIONS(7),
    [anon_sym_collectionLetter] = ACTIONS(7),
    [anon_sym_collectionName] = ACTIONS(7),
    [aux_sym_identifier_token1] = ACTIONS(9),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [sym_type_identifier] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_rating] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym_nil] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [15] = {
    [sym__expression] = STATE(48),
    [sym_binary_expression] = STATE(48),
    [sym_range_expression] = STATE(48),
    [sym__unary_expression] = STATE(48),
    [sym_prefix_expression] = STATE(48),
    [sym_suffix_expression] = STATE(48),
    [sym_open_start_range_expression] = STATE(48),
    [sym_open_end_range_expression] = STATE(48),
    [sym__primary_expression] = STATE(42),
    [sym_ternary_expression] = STATE(48),
    [sym__basic_literal] = STATE(42),
    [sym_constant] = STATE(42),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(42),
    [sym_string] = STATE(42),
    [sym_array] = STATE(42),
    [sym_field_access] = STATE(42),
    [sym_method_invocation] = STATE(42),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_id] = ACTIONS(7),
    [anon_sym_index] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_now] = ACTIONS(7),
    [anon_sym_area] = ACTIONS(7),
    [anon_sym_coordinate] = ACTIONS(7),
    [anon_sym_distance] = ACTIONS(7),
    [anon_sym_latitude] = ACTIONS(7),
    [anon_sym_longitude] = ACTIONS(7),
    [anon_sym_length] = ACTIONS(7),
    [anon_sym_geometry] = ACTIONS(7),
    [anon_sym_clear] = ACTIONS(7),
    [anon_sym_white] = ACTIONS(7),
    [anon_sym_gray] = ACTIONS(7),
    [anon_sym_grey] = ACTIONS(7),
    [anon_sym_black] = ACTIONS(7),
    [anon_sym_red] = ACTIONS(7),
    [anon_sym_orange] = ACTIONS(7),
    [anon_sym_yellow] = ACTIONS(7),
    [anon_sym_green] = ACTIONS(7),
    [anon_sym_teal] = ACTIONS(7),
    [anon_sym_blue] = ACTIONS(7),
    [anon_sym_purple] = ACTIONS(7),
    [anon_sym_pink] = ACTIONS(7),
    [anon_sym_brown] = ACTIONS(7),
    [anon_sym_indigo] = ACTIONS(7),
    [anon_sym_linePoints] = ACTIONS(7),
    [anon_sym_collectionColor] = ACTIONS(7),
    [anon_sym_collectionLetter] = ACTIONS(7),
    [anon_sym_collectionName] = ACTIONS(7),
    [aux_sym_identifier_token1] = ACTIONS(9),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [sym_type_identifier] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_rating] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym_nil] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [16] = {
    [sym__expression] = STATE(58),
    [sym_binary_expression] = STATE(58),
    [sym_range_expression] = STATE(58),
    [sym__unary_expression] = STATE(58),
    [sym_prefix_expression] = STATE(58),
    [sym_suffix_expression] = STATE(58),
    [sym_open_start_range_expression] = STATE(58),
    [sym_open_end_range_expression] = STATE(58),
    [sym__primary_expression] = STATE(42),
    [sym_ternary_expression] = STATE(58),
    [sym__basic_literal] = STATE(42),
    [sym_constant] = STATE(42),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(42),
    [sym_string] = STATE(42),
    [sym_array] = STATE(42),
    [sym_field_access] = STATE(42),
    [sym_method_invocation] = STATE(42),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_id] = ACTIONS(7),
    [anon_sym_index] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_now] = ACTIONS(7),
    [anon_sym_area] = ACTIONS(7),
    [anon_sym_coordinate] = ACTIONS(7),
    [anon_sym_distance] = ACTIONS(7),
    [anon_sym_latitude] = ACTIONS(7),
    [anon_sym_longitude] = ACTIONS(7),
    [anon_sym_length] = ACTIONS(7),
    [anon_sym_geometry] = ACTIONS(7),
    [anon_sym_clear] = ACTIONS(7),
    [anon_sym_white] = ACTIONS(7),
    [anon_sym_gray] = ACTIONS(7),
    [anon_sym_grey] = ACTIONS(7),
    [anon_sym_black] = ACTIONS(7),
    [anon_sym_red] = ACTIONS(7),
    [anon_sym_orange] = ACTIONS(7),
    [anon_sym_yellow] = ACTIONS(7),
    [anon_sym_green] = ACTIONS(7),
    [anon_sym_teal] = ACTIONS(7),
    [anon_sym_blue] = ACTIONS(7),
    [anon_sym_purple] = ACTIONS(7),
    [anon_sym_pink] = ACTIONS(7),
    [anon_sym_brown] = ACTIONS(7),
    [anon_sym_indigo] = ACTIONS(7),
    [anon_sym_linePoints] = ACTIONS(7),
    [anon_sym_collectionColor] = ACTIONS(7),
    [anon_sym_collectionLetter] = ACTIONS(7),
    [anon_sym_collectionName] = ACTIONS(7),
    [aux_sym_identifier_token1] = ACTIONS(9),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [sym_type_identifier] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_rating] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym_nil] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [17] = {
    [sym__expression] = STATE(59),
    [sym_binary_expression] = STATE(59),
    [sym_range_expression] = STATE(59),
    [sym__unary_expression] = STATE(59),
    [sym_prefix_expression] = STATE(59),
    [sym_suffix_expression] = STATE(59),
    [sym_open_start_range_expression] = STATE(59),
    [sym_open_end_range_expression] = STATE(59),
    [sym__primary_expression] = STATE(42),
    [sym_ternary_expression] = STATE(59),
    [sym__basic_literal] = STATE(42),
    [sym_constant] = STATE(42),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(42),
    [sym_string] = STATE(42),
    [sym_array] = STATE(42),
    [sym_field_access] = STATE(42),
    [sym_method_invocation] = STATE(42),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_id] = ACTIONS(7),
    [anon_sym_index] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_now] = ACTIONS(7),
    [anon_sym_area] = ACTIONS(7),
    [anon_sym_coordinate] = ACTIONS(7),
    [anon_sym_distance] = ACTIONS(7),
    [anon_sym_latitude] = ACTIONS(7),
    [anon_sym_longitude] = ACTIONS(7),
    [anon_sym_length] = ACTIONS(7),
    [anon_sym_geometry] = ACTIONS(7),
    [anon_sym_clear] = ACTIONS(7),
    [anon_sym_white] = ACTIONS(7),
    [anon_sym_gray] = ACTIONS(7),
    [anon_sym_grey] = ACTIONS(7),
    [anon_sym_black] = ACTIONS(7),
    [anon_sym_red] = ACTIONS(7),
    [anon_sym_orange] = ACTIONS(7),
    [anon_sym_yellow] = ACTIONS(7),
    [anon_sym_green] = ACTIONS(7),
    [anon_sym_teal] = ACTIONS(7),
    [anon_sym_blue] = ACTIONS(7),
    [anon_sym_purple] = ACTIONS(7),
    [anon_sym_pink] = ACTIONS(7),
    [anon_sym_brown] = ACTIONS(7),
    [anon_sym_indigo] = ACTIONS(7),
    [anon_sym_linePoints] = ACTIONS(7),
    [anon_sym_collectionColor] = ACTIONS(7),
    [anon_sym_collectionLetter] = ACTIONS(7),
    [anon_sym_collectionName] = ACTIONS(7),
    [aux_sym_identifier_token1] = ACTIONS(9),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [sym_type_identifier] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_rating] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym_nil] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [18] = {
    [sym__expression] = STATE(44),
    [sym_binary_expression] = STATE(44),
    [sym_range_expression] = STATE(44),
    [sym__unary_expression] = STATE(44),
    [sym_prefix_expression] = STATE(44),
    [sym_suffix_expression] = STATE(44),
    [sym_open_start_range_expression] = STATE(44),
    [sym_open_end_range_expression] = STATE(44),
    [sym__primary_expression] = STATE(42),
    [sym_ternary_expression] = STATE(44),
    [sym__basic_literal] = STATE(42),
    [sym_constant] = STATE(42),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(42),
    [sym_string] = STATE(42),
    [sym_array] = STATE(42),
    [sym_field_access] = STATE(42),
    [sym_method_invocation] = STATE(42),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_id] = ACTIONS(7),
    [anon_sym_index] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_now] = ACTIONS(7),
    [anon_sym_area] = ACTIONS(7),
    [anon_sym_coordinate] = ACTIONS(7),
    [anon_sym_distance] = ACTIONS(7),
    [anon_sym_latitude] = ACTIONS(7),
    [anon_sym_longitude] = ACTIONS(7),
    [anon_sym_length] = ACTIONS(7),
    [anon_sym_geometry] = ACTIONS(7),
    [anon_sym_clear] = ACTIONS(7),
    [anon_sym_white] = ACTIONS(7),
    [anon_sym_gray] = ACTIONS(7),
    [anon_sym_grey] = ACTIONS(7),
    [anon_sym_black] = ACTIONS(7),
    [anon_sym_red] = ACTIONS(7),
    [anon_sym_orange] = ACTIONS(7),
    [anon_sym_yellow] = ACTIONS(7),
    [anon_sym_green] = ACTIONS(7),
    [anon_sym_teal] = ACTIONS(7),
    [anon_sym_blue] = ACTIONS(7),
    [anon_sym_purple] = ACTIONS(7),
    [anon_sym_pink] = ACTIONS(7),
    [anon_sym_brown] = ACTIONS(7),
    [anon_sym_indigo] = ACTIONS(7),
    [anon_sym_linePoints] = ACTIONS(7),
    [anon_sym_collectionColor] = ACTIONS(7),
    [anon_sym_collectionLetter] = ACTIONS(7),
    [anon_sym_collectionName] = ACTIONS(7),
    [aux_sym_identifier_token1] = ACTIONS(9),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [sym_type_identifier] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_rating] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym_nil] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [19] = {
    [sym__expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_range_expression] = STATE(31),
    [sym__unary_expression] = STATE(31),
    [sym_prefix_expression] = STATE(31),
    [sym_suffix_expression] = STATE(31),
    [sym_open_start_range_expression] = STATE(31),
    [sym_open_end_range_expression] = STATE(31),
    [sym__primary_expression] = STATE(42),
    [sym_ternary_expression] = STATE(31),
    [sym__basic_literal] = STATE(42),
    [sym_constant] = STATE(42),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(42),
    [sym_string] = STATE(42),
    [sym_array] = STATE(42),
    [sym_field_access] = STATE(42),
    [sym_method_invocation] = STATE(42),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_id] = ACTIONS(7),
    [anon_sym_index] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_now] = ACTIONS(7),
    [anon_sym_area] = ACTIONS(7),
    [anon_sym_coordinate] = ACTIONS(7),
    [anon_sym_distance] = ACTIONS(7),
    [anon_sym_latitude] = ACTIONS(7),
    [anon_sym_longitude] = ACTIONS(7),
    [anon_sym_length] = ACTIONS(7),
    [anon_sym_geometry] = ACTIONS(7),
    [anon_sym_clear] = ACTIONS(7),
    [anon_sym_white] = ACTIONS(7),
    [anon_sym_gray] = ACTIONS(7),
    [anon_sym_grey] = ACTIONS(7),
    [anon_sym_black] = ACTIONS(7),
    [anon_sym_red] = ACTIONS(7),
    [anon_sym_orange] = ACTIONS(7),
    [anon_sym_yellow] = ACTIONS(7),
    [anon_sym_green] = ACTIONS(7),
    [anon_sym_teal] = ACTIONS(7),
    [anon_sym_blue] = ACTIONS(7),
    [anon_sym_purple] = ACTIONS(7),
    [anon_sym_pink] = ACTIONS(7),
    [anon_sym_brown] = ACTIONS(7),
    [anon_sym_indigo] = ACTIONS(7),
    [anon_sym_linePoints] = ACTIONS(7),
    [anon_sym_collectionColor] = ACTIONS(7),
    [anon_sym_collectionLetter] = ACTIONS(7),
    [anon_sym_collectionName] = ACTIONS(7),
    [aux_sym_identifier_token1] = ACTIONS(9),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [sym_type_identifier] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_rating] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym_nil] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [20] = {
    [sym__expression] = STATE(53),
    [sym_binary_expression] = STATE(53),
    [sym_range_expression] = STATE(53),
    [sym__unary_expression] = STATE(53),
    [sym_prefix_expression] = STATE(53),
    [sym_suffix_expression] = STATE(53),
    [sym_open_start_range_expression] = STATE(53),
    [sym_open_end_range_expression] = STATE(53),
    [sym__primary_expression] = STATE(42),
    [sym_ternary_expression] = STATE(53),
    [sym__basic_literal] = STATE(42),
    [sym_constant] = STATE(42),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(42),
    [sym_string] = STATE(42),
    [sym_array] = STATE(42),
    [sym_field_access] = STATE(42),
    [sym_method_invocation] = STATE(42),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_id] = ACTIONS(7),
    [anon_sym_index] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_now] = ACTIONS(7),
    [anon_sym_area] = ACTIONS(7),
    [anon_sym_coordinate] = ACTIONS(7),
    [anon_sym_distance] = ACTIONS(7),
    [anon_sym_latitude] = ACTIONS(7),
    [anon_sym_longitude] = ACTIONS(7),
    [anon_sym_length] = ACTIONS(7),
    [anon_sym_geometry] = ACTIONS(7),
    [anon_sym_clear] = ACTIONS(7),
    [anon_sym_white] = ACTIONS(7),
    [anon_sym_gray] = ACTIONS(7),
    [anon_sym_grey] = ACTIONS(7),
    [anon_sym_black] = ACTIONS(7),
    [anon_sym_red] = ACTIONS(7),
    [anon_sym_orange] = ACTIONS(7),
    [anon_sym_yellow] = ACTIONS(7),
    [anon_sym_green] = ACTIONS(7),
    [anon_sym_teal] = ACTIONS(7),
    [anon_sym_blue] = ACTIONS(7),
    [anon_sym_purple] = ACTIONS(7),
    [anon_sym_pink] = ACTIONS(7),
    [anon_sym_brown] = ACTIONS(7),
    [anon_sym_indigo] = ACTIONS(7),
    [anon_sym_linePoints] = ACTIONS(7),
    [anon_sym_collectionColor] = ACTIONS(7),
    [anon_sym_collectionLetter] = ACTIONS(7),
    [anon_sym_collectionName] = ACTIONS(7),
    [aux_sym_identifier_token1] = ACTIONS(9),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [sym_type_identifier] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_rating] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym_nil] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [21] = {
    [sym__expression] = STATE(51),
    [sym_binary_expression] = STATE(51),
    [sym_range_expression] = STATE(51),
    [sym__unary_expression] = STATE(51),
    [sym_prefix_expression] = STATE(51),
    [sym_suffix_expression] = STATE(51),
    [sym_open_start_range_expression] = STATE(51),
    [sym_open_end_range_expression] = STATE(51),
    [sym__primary_expression] = STATE(42),
    [sym_ternary_expression] = STATE(51),
    [sym__basic_literal] = STATE(42),
    [sym_constant] = STATE(42),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(42),
    [sym_string] = STATE(42),
    [sym_array] = STATE(42),
    [sym_field_access] = STATE(42),
    [sym_method_invocation] = STATE(42),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_id] = ACTIONS(7),
    [anon_sym_index] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_now] = ACTIONS(7),
    [anon_sym_area] = ACTIONS(7),
    [anon_sym_coordinate] = ACTIONS(7),
    [anon_sym_distance] = ACTIONS(7),
    [anon_sym_latitude] = ACTIONS(7),
    [anon_sym_longitude] = ACTIONS(7),
    [anon_sym_length] = ACTIONS(7),
    [anon_sym_geometry] = ACTIONS(7),
    [anon_sym_clear] = ACTIONS(7),
    [anon_sym_white] = ACTIONS(7),
    [anon_sym_gray] = ACTIONS(7),
    [anon_sym_grey] = ACTIONS(7),
    [anon_sym_black] = ACTIONS(7),
    [anon_sym_red] = ACTIONS(7),
    [anon_sym_orange] = ACTIONS(7),
    [anon_sym_yellow] = ACTIONS(7),
    [anon_sym_green] = ACTIONS(7),
    [anon_sym_teal] = ACTIONS(7),
    [anon_sym_blue] = ACTIONS(7),
    [anon_sym_purple] = ACTIONS(7),
    [anon_sym_pink] = ACTIONS(7),
    [anon_sym_brown] = ACTIONS(7),
    [anon_sym_indigo] = ACTIONS(7),
    [anon_sym_linePoints] = ACTIONS(7),
    [anon_sym_collectionColor] = ACTIONS(7),
    [anon_sym_collectionLetter] = ACTIONS(7),
    [anon_sym_collectionName] = ACTIONS(7),
    [aux_sym_identifier_token1] = ACTIONS(9),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [sym_type_identifier] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_rating] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym_nil] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [22] = {
    [sym__expression] = STATE(29),
    [sym_binary_expression] = STATE(29),
    [sym_range_expression] = STATE(29),
    [sym__unary_expression] = STATE(29),
    [sym_prefix_expression] = STATE(29),
    [sym_suffix_expression] = STATE(29),
    [sym_open_start_range_expression] = STATE(29),
    [sym_open_end_range_expression] = STATE(29),
    [sym__primary_expression] = STATE(42),
    [sym_ternary_expression] = STATE(29),
    [sym__basic_literal] = STATE(42),
    [sym_constant] = STATE(42),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(42),
    [sym_string] = STATE(42),
    [sym_array] = STATE(42),
    [sym_field_access] = STATE(42),
    [sym_method_invocation] = STATE(42),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_id] = ACTIONS(7),
    [anon_sym_index] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_now] = ACTIONS(7),
    [anon_sym_area] = ACTIONS(7),
    [anon_sym_coordinate] = ACTIONS(7),
    [anon_sym_distance] = ACTIONS(7),
    [anon_sym_latitude] = ACTIONS(7),
    [anon_sym_longitude] = ACTIONS(7),
    [anon_sym_length] = ACTIONS(7),
    [anon_sym_geometry] = ACTIONS(7),
    [anon_sym_clear] = ACTIONS(7),
    [anon_sym_white] = ACTIONS(7),
    [anon_sym_gray] = ACTIONS(7),
    [anon_sym_grey] = ACTIONS(7),
    [anon_sym_black] = ACTIONS(7),
    [anon_sym_red] = ACTIONS(7),
    [anon_sym_orange] = ACTIONS(7),
    [anon_sym_yellow] = ACTIONS(7),
    [anon_sym_green] = ACTIONS(7),
    [anon_sym_teal] = ACTIONS(7),
    [anon_sym_blue] = ACTIONS(7),
    [anon_sym_purple] = ACTIONS(7),
    [anon_sym_pink] = ACTIONS(7),
    [anon_sym_brown] = ACTIONS(7),
    [anon_sym_indigo] = ACTIONS(7),
    [anon_sym_linePoints] = ACTIONS(7),
    [anon_sym_collectionColor] = ACTIONS(7),
    [anon_sym_collectionLetter] = ACTIONS(7),
    [anon_sym_collectionName] = ACTIONS(7),
    [aux_sym_identifier_token1] = ACTIONS(9),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [sym_type_identifier] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_rating] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym_nil] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [23] = {
    [sym__expression] = STATE(65),
    [sym_binary_expression] = STATE(65),
    [sym_range_expression] = STATE(65),
    [sym__unary_expression] = STATE(65),
    [sym_prefix_expression] = STATE(65),
    [sym_suffix_expression] = STATE(65),
    [sym_open_start_range_expression] = STATE(65),
    [sym_open_end_range_expression] = STATE(65),
    [sym__primary_expression] = STATE(42),
    [sym_ternary_expression] = STATE(65),
    [sym__basic_literal] = STATE(42),
    [sym_constant] = STATE(42),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(42),
    [sym_string] = STATE(42),
    [sym_array] = STATE(42),
    [sym_field_access] = STATE(42),
    [sym_method_invocation] = STATE(42),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_id] = ACTIONS(7),
    [anon_sym_index] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_now] = ACTIONS(7),
    [anon_sym_area] = ACTIONS(7),
    [anon_sym_coordinate] = ACTIONS(7),
    [anon_sym_distance] = ACTIONS(7),
    [anon_sym_latitude] = ACTIONS(7),
    [anon_sym_longitude] = ACTIONS(7),
    [anon_sym_length] = ACTIONS(7),
    [anon_sym_geometry] = ACTIONS(7),
    [anon_sym_clear] = ACTIONS(7),
    [anon_sym_white] = ACTIONS(7),
    [anon_sym_gray] = ACTIONS(7),
    [anon_sym_grey] = ACTIONS(7),
    [anon_sym_black] = ACTIONS(7),
    [anon_sym_red] = ACTIONS(7),
    [anon_sym_orange] = ACTIONS(7),
    [anon_sym_yellow] = ACTIONS(7),
    [anon_sym_green] = ACTIONS(7),
    [anon_sym_teal] = ACTIONS(7),
    [anon_sym_blue] = ACTIONS(7),
    [anon_sym_purple] = ACTIONS(7),
    [anon_sym_pink] = ACTIONS(7),
    [anon_sym_brown] = ACTIONS(7),
    [anon_sym_indigo] = ACTIONS(7),
    [anon_sym_linePoints] = ACTIONS(7),
    [anon_sym_collectionColor] = ACTIONS(7),
    [anon_sym_collectionLetter] = ACTIONS(7),
    [anon_sym_collectionName] = ACTIONS(7),
    [aux_sym_identifier_token1] = ACTIONS(9),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [sym_type_identifier] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_rating] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym_nil] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [24] = {
    [sym__expression] = STATE(32),
    [sym_binary_expression] = STATE(32),
    [sym_range_expression] = STATE(32),
    [sym__unary_expression] = STATE(32),
    [sym_prefix_expression] = STATE(32),
    [sym_suffix_expression] = STATE(32),
    [sym_open_start_range_expression] = STATE(32),
    [sym_open_end_range_expression] = STATE(32),
    [sym__primary_expression] = STATE(42),
    [sym_ternary_expression] = STATE(32),
    [sym__basic_literal] = STATE(42),
    [sym_constant] = STATE(42),
    [sym_identifier] = STATE(25),
    [sym_boolean] = STATE(42),
    [sym_string] = STATE(42),
    [sym_array] = STATE(42),
    [sym_field_access] = STATE(42),
    [sym_method_invocation] = STATE(42),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DOT_DOT_LT] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_id] = ACTIONS(7),
    [anon_sym_index] = ACTIONS(7),
    [anon_sym_pi] = ACTIONS(7),
    [anon_sym_now] = ACTIONS(7),
    [anon_sym_area] = ACTIONS(7),
    [anon_sym_coordinate] = ACTIONS(7),
    [anon_sym_distance] = ACTIONS(7),
    [anon_sym_latitude] = ACTIONS(7),
    [anon_sym_longitude] = ACTIONS(7),
    [anon_sym_length] = ACTIONS(7),
    [anon_sym_geometry] = ACTIONS(7),
    [anon_sym_clear] = ACTIONS(7),
    [anon_sym_white] = ACTIONS(7),
    [anon_sym_gray] = ACTIONS(7),
    [anon_sym_grey] = ACTIONS(7),
    [anon_sym_black] = ACTIONS(7),
    [anon_sym_red] = ACTIONS(7),
    [anon_sym_orange] = ACTIONS(7),
    [anon_sym_yellow] = ACTIONS(7),
    [anon_sym_green] = ACTIONS(7),
    [anon_sym_teal] = ACTIONS(7),
    [anon_sym_blue] = ACTIONS(7),
    [anon_sym_purple] = ACTIONS(7),
    [anon_sym_pink] = ACTIONS(7),
    [anon_sym_brown] = ACTIONS(7),
    [anon_sym_indigo] = ACTIONS(7),
    [anon_sym_linePoints] = ACTIONS(7),
    [anon_sym_collectionColor] = ACTIONS(7),
    [anon_sym_collectionLetter] = ACTIONS(7),
    [anon_sym_collectionName] = ACTIONS(7),
    [aux_sym_identifier_token1] = ACTIONS(9),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [sym_type_identifier] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_rating] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym_nil] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_argument_list,
    ACTIONS(45), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_m,
      anon_sym_mi,
      anon_sym_QMARK,
      anon_sym_DOT,
    ACTIONS(43), 26,
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
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [46] = 4,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_argument_list,
    ACTIONS(51), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_m,
      anon_sym_mi,
      anon_sym_QMARK,
      anon_sym_DOT,
    ACTIONS(49), 26,
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
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [92] = 2,
    ACTIONS(55), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_m,
      anon_sym_mi,
      anon_sym_QMARK,
      anon_sym_DOT,
    ACTIONS(53), 27,
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
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [133] = 2,
    ACTIONS(59), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_m,
      anon_sym_mi,
      anon_sym_QMARK,
      anon_sym_DOT,
    ACTIONS(57), 27,
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
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [174] = 7,
    STATE(60), 1,
      sym_unit,
    ACTIONS(65), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 2,
      anon_sym_m,
      anon_sym_mi,
    ACTIONS(67), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 4,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
    ACTIONS(63), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_QMARK,
    ACTIONS(61), 17,
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
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [224] = 2,
    ACTIONS(75), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_m,
      anon_sym_mi,
      anon_sym_QMARK,
      anon_sym_DOT,
    ACTIONS(73), 26,
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
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [264] = 5,
    STATE(60), 1,
      sym_unit,
    ACTIONS(71), 2,
      anon_sym_m,
      anon_sym_mi,
    ACTIONS(69), 4,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
    ACTIONS(79), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_QMARK,
    ACTIONS(77), 22,
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
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [310] = 20,
    ACTIONS(89), 1,
      anon_sym_AMP_AMP,
    ACTIONS(91), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(93), 1,
      anon_sym_AMP,
    ACTIONS(95), 1,
      anon_sym_PIPE,
    ACTIONS(97), 1,
      anon_sym_CARET,
    ACTIONS(101), 1,
      anon_sym_GT_GT,
    ACTIONS(103), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(105), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(107), 1,
      anon_sym_DOT_DOT_LT,
    ACTIONS(109), 1,
      anon_sym_QMARK,
    STATE(60), 1,
      sym_unit,
    ACTIONS(65), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 2,
      anon_sym_m,
      anon_sym_mi,
    ACTIONS(83), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(85), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(99), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(67), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 4,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [386] = 18,
    ACTIONS(89), 1,
      anon_sym_AMP_AMP,
    ACTIONS(91), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(93), 1,
      anon_sym_AMP,
    ACTIONS(95), 1,
      anon_sym_PIPE,
    ACTIONS(97), 1,
      anon_sym_CARET,
    ACTIONS(101), 1,
      anon_sym_GT_GT,
    ACTIONS(103), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(109), 1,
      anon_sym_QMARK,
    STATE(60), 1,
      sym_unit,
    ACTIONS(65), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 2,
      anon_sym_m,
      anon_sym_mi,
    ACTIONS(83), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(85), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(99), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(67), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 4,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
    ACTIONS(111), 7,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [458] = 2,
    ACTIONS(115), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_m,
      anon_sym_mi,
      anon_sym_QMARK,
      anon_sym_DOT,
    ACTIONS(113), 26,
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
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [498] = 2,
    ACTIONS(119), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_m,
      anon_sym_mi,
      anon_sym_QMARK,
      anon_sym_DOT,
    ACTIONS(117), 26,
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
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [538] = 2,
    ACTIONS(123), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_m,
      anon_sym_mi,
      anon_sym_QMARK,
      anon_sym_DOT,
    ACTIONS(121), 26,
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
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [578] = 2,
    ACTIONS(127), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_m,
      anon_sym_mi,
      anon_sym_QMARK,
      anon_sym_DOT,
    ACTIONS(125), 26,
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
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [618] = 2,
    ACTIONS(131), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_m,
      anon_sym_mi,
      anon_sym_QMARK,
      anon_sym_DOT,
    ACTIONS(129), 26,
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
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [658] = 2,
    ACTIONS(135), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_m,
      anon_sym_mi,
      anon_sym_QMARK,
      anon_sym_DOT,
    ACTIONS(133), 26,
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
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [698] = 2,
    ACTIONS(139), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_m,
      anon_sym_mi,
      anon_sym_QMARK,
      anon_sym_DOT,
    ACTIONS(137), 26,
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
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [738] = 2,
    ACTIONS(143), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_m,
      anon_sym_mi,
      anon_sym_QMARK,
      anon_sym_DOT,
    ACTIONS(141), 26,
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
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [778] = 3,
    ACTIONS(149), 1,
      anon_sym_DOT,
    ACTIONS(147), 8,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_m,
      anon_sym_mi,
      anon_sym_QMARK,
    ACTIONS(145), 26,
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
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [820] = 2,
    ACTIONS(153), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_m,
      anon_sym_mi,
      anon_sym_QMARK,
      anon_sym_DOT,
    ACTIONS(151), 26,
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
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [860] = 12,
    ACTIONS(101), 1,
      anon_sym_GT_GT,
    STATE(60), 1,
      sym_unit,
    ACTIONS(65), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 2,
      anon_sym_m,
      anon_sym_mi,
    ACTIONS(83), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(85), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(99), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(63), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_QMARK,
    ACTIONS(67), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 4,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
    ACTIONS(61), 11,
      ts_builtin_sym_end,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [920] = 2,
    ACTIONS(157), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_m,
      anon_sym_mi,
      anon_sym_QMARK,
      anon_sym_DOT,
    ACTIONS(155), 26,
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
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [960] = 2,
    ACTIONS(161), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_m,
      anon_sym_mi,
      anon_sym_QMARK,
      anon_sym_DOT,
    ACTIONS(159), 26,
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
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1000] = 2,
    ACTIONS(165), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_m,
      anon_sym_mi,
      anon_sym_QMARK,
      anon_sym_DOT,
    ACTIONS(163), 26,
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
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1040] = 18,
    ACTIONS(89), 1,
      anon_sym_AMP_AMP,
    ACTIONS(91), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(93), 1,
      anon_sym_AMP,
    ACTIONS(95), 1,
      anon_sym_PIPE,
    ACTIONS(97), 1,
      anon_sym_CARET,
    ACTIONS(101), 1,
      anon_sym_GT_GT,
    ACTIONS(103), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(109), 1,
      anon_sym_QMARK,
    STATE(60), 1,
      sym_unit,
    ACTIONS(65), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 2,
      anon_sym_m,
      anon_sym_mi,
    ACTIONS(83), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(85), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(99), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(67), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 4,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
    ACTIONS(167), 7,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1112] = 17,
    ACTIONS(63), 1,
      anon_sym_QMARK,
    ACTIONS(89), 1,
      anon_sym_AMP_AMP,
    ACTIONS(91), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(93), 1,
      anon_sym_AMP,
    ACTIONS(95), 1,
      anon_sym_PIPE,
    ACTIONS(97), 1,
      anon_sym_CARET,
    ACTIONS(101), 1,
      anon_sym_GT_GT,
    STATE(60), 1,
      sym_unit,
    ACTIONS(65), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 2,
      anon_sym_m,
      anon_sym_mi,
    ACTIONS(83), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(85), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(99), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(67), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 4,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
    ACTIONS(61), 8,
      ts_builtin_sym_end,
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1182] = 2,
    ACTIONS(171), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_m,
      anon_sym_mi,
      anon_sym_QMARK,
      anon_sym_DOT,
    ACTIONS(169), 26,
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
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1222] = 13,
    ACTIONS(93), 1,
      anon_sym_AMP,
    ACTIONS(101), 1,
      anon_sym_GT_GT,
    STATE(60), 1,
      sym_unit,
    ACTIONS(63), 2,
      anon_sym_PIPE,
      anon_sym_QMARK,
    ACTIONS(65), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 2,
      anon_sym_m,
      anon_sym_mi,
    ACTIONS(83), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(85), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(99), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(67), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 4,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
    ACTIONS(61), 11,
      ts_builtin_sym_end,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1284] = 2,
    ACTIONS(175), 9,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_m,
      anon_sym_mi,
      anon_sym_QMARK,
      anon_sym_DOT,
    ACTIONS(173), 26,
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
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1324] = 14,
    ACTIONS(93), 1,
      anon_sym_AMP,
    ACTIONS(97), 1,
      anon_sym_CARET,
    ACTIONS(101), 1,
      anon_sym_GT_GT,
    STATE(60), 1,
      sym_unit,
    ACTIONS(63), 2,
      anon_sym_PIPE,
      anon_sym_QMARK,
    ACTIONS(65), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 2,
      anon_sym_m,
      anon_sym_mi,
    ACTIONS(83), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(85), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(99), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(67), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 4,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
    ACTIONS(61), 10,
      ts_builtin_sym_end,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1388] = 9,
    ACTIONS(101), 1,
      anon_sym_GT_GT,
    STATE(60), 1,
      sym_unit,
    ACTIONS(65), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 2,
      anon_sym_m,
      anon_sym_mi,
    ACTIONS(99), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(67), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 4,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
    ACTIONS(63), 5,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_QMARK,
    ACTIONS(61), 15,
      ts_builtin_sym_end,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1442] = 11,
    ACTIONS(101), 1,
      anon_sym_GT_GT,
    STATE(60), 1,
      sym_unit,
    ACTIONS(65), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 2,
      anon_sym_m,
      anon_sym_mi,
    ACTIONS(83), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(85), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(99), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(63), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_QMARK,
    ACTIONS(67), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 4,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
    ACTIONS(61), 13,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1500] = 15,
    ACTIONS(63), 1,
      anon_sym_QMARK,
    ACTIONS(93), 1,
      anon_sym_AMP,
    ACTIONS(95), 1,
      anon_sym_PIPE,
    ACTIONS(97), 1,
      anon_sym_CARET,
    ACTIONS(101), 1,
      anon_sym_GT_GT,
    STATE(60), 1,
      sym_unit,
    ACTIONS(65), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 2,
      anon_sym_m,
      anon_sym_mi,
    ACTIONS(83), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(85), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(99), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(67), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 4,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
    ACTIONS(61), 10,
      ts_builtin_sym_end,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1566] = 16,
    ACTIONS(63), 1,
      anon_sym_QMARK,
    ACTIONS(89), 1,
      anon_sym_AMP_AMP,
    ACTIONS(93), 1,
      anon_sym_AMP,
    ACTIONS(95), 1,
      anon_sym_PIPE,
    ACTIONS(97), 1,
      anon_sym_CARET,
    ACTIONS(101), 1,
      anon_sym_GT_GT,
    STATE(60), 1,
      sym_unit,
    ACTIONS(65), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 2,
      anon_sym_m,
      anon_sym_mi,
    ACTIONS(83), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(85), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(99), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(67), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 4,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
    ACTIONS(61), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE_PIPE,
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1634] = 6,
    STATE(60), 1,
      sym_unit,
    ACTIONS(71), 2,
      anon_sym_m,
      anon_sym_mi,
    ACTIONS(67), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 4,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
    ACTIONS(63), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_QMARK,
    ACTIONS(61), 19,
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
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1682] = 5,
    STATE(60), 1,
      sym_unit,
    ACTIONS(71), 2,
      anon_sym_m,
      anon_sym_mi,
    ACTIONS(69), 4,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
    ACTIONS(63), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_QMARK,
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
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1728] = 2,
    ACTIONS(179), 8,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_m,
      anon_sym_mi,
      anon_sym_QMARK,
    ACTIONS(177), 26,
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
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1767] = 2,
    ACTIONS(183), 8,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_m,
      anon_sym_mi,
      anon_sym_QMARK,
    ACTIONS(181), 26,
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
      anon_sym_QMARK_QMARK,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT_LT,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1806] = 22,
    ACTIONS(89), 1,
      anon_sym_AMP_AMP,
    ACTIONS(91), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(93), 1,
      anon_sym_AMP,
    ACTIONS(95), 1,
      anon_sym_PIPE,
    ACTIONS(97), 1,
      anon_sym_CARET,
    ACTIONS(101), 1,
      anon_sym_GT_GT,
    ACTIONS(103), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(105), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(107), 1,
      anon_sym_DOT_DOT_LT,
    ACTIONS(109), 1,
      anon_sym_QMARK,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_unit,
    STATE(74), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(65), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 2,
      anon_sym_m,
      anon_sym_mi,
    ACTIONS(83), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(85), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(99), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(67), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 4,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
  [1884] = 22,
    ACTIONS(89), 1,
      anon_sym_AMP_AMP,
    ACTIONS(91), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(93), 1,
      anon_sym_AMP,
    ACTIONS(95), 1,
      anon_sym_PIPE,
    ACTIONS(97), 1,
      anon_sym_CARET,
    ACTIONS(101), 1,
      anon_sym_GT_GT,
    ACTIONS(103), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(105), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(107), 1,
      anon_sym_DOT_DOT_LT,
    ACTIONS(109), 1,
      anon_sym_QMARK,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      sym_unit,
    STATE(75), 1,
      aux_sym_array_repeat1,
    ACTIONS(65), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 2,
      anon_sym_m,
      anon_sym_mi,
    ACTIONS(83), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(85), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(99), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(67), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 4,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
  [1962] = 20,
    ACTIONS(89), 1,
      anon_sym_AMP_AMP,
    ACTIONS(91), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(93), 1,
      anon_sym_AMP,
    ACTIONS(95), 1,
      anon_sym_PIPE,
    ACTIONS(97), 1,
      anon_sym_CARET,
    ACTIONS(101), 1,
      anon_sym_GT_GT,
    ACTIONS(103), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(105), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(107), 1,
      anon_sym_DOT_DOT_LT,
    ACTIONS(109), 1,
      anon_sym_QMARK,
    STATE(60), 1,
      sym_unit,
    ACTIONS(65), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 2,
      anon_sym_m,
      anon_sym_mi,
    ACTIONS(83), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(85), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(99), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(193), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(67), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 4,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
  [2035] = 20,
    ACTIONS(89), 1,
      anon_sym_AMP_AMP,
    ACTIONS(91), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(93), 1,
      anon_sym_AMP,
    ACTIONS(95), 1,
      anon_sym_PIPE,
    ACTIONS(97), 1,
      anon_sym_CARET,
    ACTIONS(101), 1,
      anon_sym_GT_GT,
    ACTIONS(103), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(105), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(107), 1,
      anon_sym_DOT_DOT_LT,
    ACTIONS(109), 1,
      anon_sym_QMARK,
    STATE(60), 1,
      sym_unit,
    ACTIONS(65), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 2,
      anon_sym_m,
      anon_sym_mi,
    ACTIONS(83), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(85), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(99), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(195), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(67), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 4,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
  [2108] = 20,
    ACTIONS(89), 1,
      anon_sym_AMP_AMP,
    ACTIONS(91), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(93), 1,
      anon_sym_AMP,
    ACTIONS(95), 1,
      anon_sym_PIPE,
    ACTIONS(97), 1,
      anon_sym_CARET,
    ACTIONS(101), 1,
      anon_sym_GT_GT,
    ACTIONS(103), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(105), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(107), 1,
      anon_sym_DOT_DOT_LT,
    ACTIONS(109), 1,
      anon_sym_QMARK,
    ACTIONS(197), 1,
      anon_sym_COLON,
    STATE(60), 1,
      sym_unit,
    ACTIONS(65), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 2,
      anon_sym_m,
      anon_sym_mi,
    ACTIONS(83), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(85), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(99), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(67), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 4,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
  [2180] = 20,
    ACTIONS(89), 1,
      anon_sym_AMP_AMP,
    ACTIONS(91), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(93), 1,
      anon_sym_AMP,
    ACTIONS(95), 1,
      anon_sym_PIPE,
    ACTIONS(97), 1,
      anon_sym_CARET,
    ACTIONS(101), 1,
      anon_sym_GT_GT,
    ACTIONS(103), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(105), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(107), 1,
      anon_sym_DOT_DOT_LT,
    ACTIONS(109), 1,
      anon_sym_QMARK,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      sym_unit,
    ACTIONS(65), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 2,
      anon_sym_m,
      anon_sym_mi,
    ACTIONS(83), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(85), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(99), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(67), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 4,
      anon_sym_km,
      anon_sym_miles,
      anon_sym_ft,
      anon_sym_feet,
  [2252] = 3,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    STATE(72), 1,
      aux_sym_string_repeat2,
    ACTIONS(201), 2,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [2263] = 3,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      aux_sym_string_repeat1,
    ACTIONS(205), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [2274] = 3,
    ACTIONS(207), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      aux_sym_string_repeat1,
    ACTIONS(209), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [2285] = 3,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    STATE(71), 1,
      aux_sym_string_repeat2,
    ACTIONS(212), 2,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [2296] = 3,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    STATE(71), 1,
      aux_sym_string_repeat2,
    ACTIONS(217), 2,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [2307] = 3,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      aux_sym_string_repeat1,
    ACTIONS(221), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [2318] = 3,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_argument_list_repeat1,
  [2328] = 3,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym_array_repeat1,
  [2338] = 3,
    ACTIONS(11), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_identifier_token1,
    STATE(26), 1,
      sym_identifier,
  [2348] = 3,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(234), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym_array_repeat1,
  [2358] = 3,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_argument_list_repeat1,
  [2368] = 2,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_argument_list,
  [2375] = 1,
    ACTIONS(241), 1,
      anon_sym_BQUOTE,
  [2379] = 1,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
  [2383] = 1,
    ACTIONS(245), 1,
      anon_sym_RBRACK,
  [2387] = 1,
    ACTIONS(247), 1,
      aux_sym_identifier_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(25)] = 0,
  [SMALL_STATE(26)] = 46,
  [SMALL_STATE(27)] = 92,
  [SMALL_STATE(28)] = 133,
  [SMALL_STATE(29)] = 174,
  [SMALL_STATE(30)] = 224,
  [SMALL_STATE(31)] = 264,
  [SMALL_STATE(32)] = 310,
  [SMALL_STATE(33)] = 386,
  [SMALL_STATE(34)] = 458,
  [SMALL_STATE(35)] = 498,
  [SMALL_STATE(36)] = 538,
  [SMALL_STATE(37)] = 578,
  [SMALL_STATE(38)] = 618,
  [SMALL_STATE(39)] = 658,
  [SMALL_STATE(40)] = 698,
  [SMALL_STATE(41)] = 738,
  [SMALL_STATE(42)] = 778,
  [SMALL_STATE(43)] = 820,
  [SMALL_STATE(44)] = 860,
  [SMALL_STATE(45)] = 920,
  [SMALL_STATE(46)] = 960,
  [SMALL_STATE(47)] = 1000,
  [SMALL_STATE(48)] = 1040,
  [SMALL_STATE(49)] = 1112,
  [SMALL_STATE(50)] = 1182,
  [SMALL_STATE(51)] = 1222,
  [SMALL_STATE(52)] = 1284,
  [SMALL_STATE(53)] = 1324,
  [SMALL_STATE(54)] = 1388,
  [SMALL_STATE(55)] = 1442,
  [SMALL_STATE(56)] = 1500,
  [SMALL_STATE(57)] = 1566,
  [SMALL_STATE(58)] = 1634,
  [SMALL_STATE(59)] = 1682,
  [SMALL_STATE(60)] = 1728,
  [SMALL_STATE(61)] = 1767,
  [SMALL_STATE(62)] = 1806,
  [SMALL_STATE(63)] = 1884,
  [SMALL_STATE(64)] = 1962,
  [SMALL_STATE(65)] = 2035,
  [SMALL_STATE(66)] = 2108,
  [SMALL_STATE(67)] = 2180,
  [SMALL_STATE(68)] = 2252,
  [SMALL_STATE(69)] = 2263,
  [SMALL_STATE(70)] = 2274,
  [SMALL_STATE(71)] = 2285,
  [SMALL_STATE(72)] = 2296,
  [SMALL_STATE(73)] = 2307,
  [SMALL_STATE(74)] = 2318,
  [SMALL_STATE(75)] = 2328,
  [SMALL_STATE(76)] = 2338,
  [SMALL_STATE(77)] = 2348,
  [SMALL_STATE(78)] = 2358,
  [SMALL_STATE(79)] = 2368,
  [SMALL_STATE(80)] = 2375,
  [SMALL_STATE(81)] = 2379,
  [SMALL_STATE(82)] = 2383,
  [SMALL_STATE(83)] = 2387,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_end_range_expression, 2, .production_id = 4),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_end_range_expression, 2, .production_id = 4),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_expression, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primary_expression, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3, .production_id = 9),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3, .production_id = 9),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_expression, 2, .production_id = 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix_expression, 2, .production_id = 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_start_range_expression, 2, .production_id = 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_expression, 5, .production_id = 16),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_invocation, 2, .production_id = 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_invocation, 2, .production_id = 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5, .production_id = 11),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 5, .production_id = 11),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, .production_id = 14),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4, .production_id = 14),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_invocation, 4, .production_id = 13),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_invocation, 4, .production_id = 13),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, .production_id = 11),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4, .production_id = 11),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, .production_id = 6),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4, .production_id = 6),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, .production_id = 10),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3, .production_id = 10),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 3, .production_id = 8),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, .production_id = 6),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, .production_id = 6),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_suffix_expression, 2, .production_id = 5),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_suffix_expression, 2, .production_id = 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 10),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, .production_id = 6),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(70),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(71),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, .production_id = 12), SHIFT_REPEAT(23),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, .production_id = 12),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 15), SHIFT_REPEAT(11),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, .production_id = 15),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [243] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
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
