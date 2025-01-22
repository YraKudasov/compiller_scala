#include "./json.h"
#include "./parser.tab.h"

void
add_type_to_node(Json* node, const char* type_name) {
    Json_add_string_to_object(node, "type", (char*)type_name);
}

Json*
mk_ident_lit(const char* ident) {
    Json* node = Json_new();
    add_type_to_node(node, "ident_lit");
    Json_add_string_to_object(node, "value", (char*)ident);
    return node;
}

Json*
mk_bin_op(const char* op_name, Json* left, Json* right) {
    Json* node = Json_new();
    add_type_to_node(node, op_name);
    Json_add_object_to_object(node, "left", left);
    Json_add_object_to_object(node, "right", right);
    return node;
}