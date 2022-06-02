; Types

(type_identifier) @type

((field_access
  object: (identifier) @type)
 (#match? @type "^[A-Z]"))
((method_invocation
  object: (identifier) @type)
 (#match? @type "^[A-Z]"))

(method_invocation
  name: (identifier) @function)

; Variables

(identifier) @variable

; Literals

[
  (number)
] @number

[
  (string)
] @string

[
  (boolean)
  (nil)
] @constant.builtin

; Constants

[
  "id"
  "index"
  "pi"
  "now"
  "area"
  "coordinate"
  "distance"
  "latitude"
  "longitude"
  "length"
  "geometry"
  "clear"
  "white"
  "gray"
  "grey"
  "black"
  "red"
  "orange"
  "yellow"
  "green"
  "teal"
  "blue"
  "purple"
  "pink"
  "brown"
  "indigo"
  "linePoints"
  "collectionColor"
  "collectionLetter"
  "collectionName"
] @constant

[
  "km"
  "m"
  "mi"
  "miles"
  "ft"
  "feet"
] @unit

; Operators

[
  "."
  ","
] @punctuation.delimiter

[
  "-"
  "+"
  "*"
  "/"
  "%"
  "<"
  "<<"
  "=="
  "!"
  "!="
  ">"
  ">="
  ">>"
  ">>>"
  "^"
  "&"
  "|"
  "&&"
  "||"
  "..."
  "..<"
  "??"
] @operator

[
  "("
  ")"
  "["
  "]"
] @punctuation.bracket