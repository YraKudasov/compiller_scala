#include "./json.h"
#include "./parser.tab.h"

void
add_type_to_node(Json* node,const char* type_name) {

    if (node == NULL || type_name == NULL) {
        return;
    }
    Json_add_string_to_object(node, "type",(char*) type_name);
}


Json*
mk_int_const(int val) {
    Json* node = Json_new();
    add_type_to_node(node, "int_const");
    Json_add_int_to_object(node, "value", val);
    return node;
}

Json*
mk_char_const(char* char_const) {
    Json* node = Json_new();
    add_type_to_node(node, "char_const");
    Json_add_string_to_object(node, "value", char_const);
    return node;
}

Json*
mk_real_const(double val) {
    Json* node = Json_new();
    add_type_to_node(node, "real_const");
    Json_add_double_to_object(node, "value", val);
    return node;
}

Json*
mk_string_const(char* val) {
    Json* node = Json_new();
    add_type_to_node(node, "string_const");
    Json_add_string_to_object(node, "value", val);
    return node;
}

Json*
mk_boolean_const(bool val) {
    Json* node = Json_new();
    add_type_to_node(node, "boolean_const");
    Json_add_bool_to_object(node, "value", val);
    return node;
}

Json*
mk_null_const() {
    Json* node = Json_new();
    add_type_to_node(node, "null");
    Json_add_null_to_object(node, "value");
    return node;
}


Json*
mk_type(const char* type_name) {
    Json* user_type = Json_new();
    add_type_to_node(user_type, "type_spec");
    Json_add_string_to_object(user_type, "type_name",(char*) type_name);
    return user_type;
}


Json* 
mk_array_const(Json* elements) {
    Json* node = Json_new();
    add_type_to_node(node, "array_const");
    Json_add_object_to_object(node, "elements", elements);
    return node;
}

Json* 
mk_array_literal(Json* expr_list) {
    Json* node = Json_new();
    add_type_to_node(node, "array_literal");
    Json_add_array_to_object(node, "expr_list", expr_list);
    return node;
}

Json* 
mk_empty_array() {
    Json* node = Json_new();
    add_type_to_node(node, "empty_array");
    return node;
}

Json* 
mk_initialized_array(Json* array_node) {
    Json* node = Json_new();
    add_type_to_node(node, "initialized_array");
    Json_add_object_to_object(node, "array_node", array_node);
    return node;
}

Json*
mk_initialized_array_with_type_and_expr(Json* type, Json* expr) {
    Json* node = Json_new();
    add_type_to_node(node, "initialized_array_with_type");
    Json_add_object_to_object(node, "type", type);
    Json_add_object_to_object(node, "expression", expr);
    return node;
}

Json*
mk_real_type() {
    return (mk_type("REAL"));

}

Json*
mk_integer_type() {
    return (mk_type("INTEGER"));

}

Json*
mk_string_type() {
    return mk_type("STRING");
}

Json*
mk_char_type() {
    return mk_type("CHAR");
}

Json*
mk_boolean_type() {
    return mk_type("BOOLEAN_KW");
}

Json*
mk_any_type() {
    return mk_type("ANY");
}

Json*
mk_unit_type() {
    return mk_type("UNIT");
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

Json*
mk_unary_op(const char* op_name, Json* arg) {
    Json* node = Json_new();
    add_type_to_node(node,(char*) op_name);
    Json_add_object_to_object(node, "arg", arg); 
        return node;
}

Json*
mk_if_else_expr(Json* cond, Json* then_expr, Json* else_expr) {
    Json* node = Json_new();
    add_type_to_node(node, "if_else_expr");
    Json_add_object_to_object(node, "cond", cond);
    Json_add_object_to_object(node, "then_expr", then_expr);
    Json_add_object_to_object(node, "else_expr", else_expr);
    return node;
}

Json*
mk_if_expr(Json* cond, Json* then_expr) {
    Json* node = Json_new();
    add_type_to_node(node, "if_expr");
    Json_add_object_to_object(node, "cond", cond);
    Json_add_object_to_object(node, "then_expr", then_expr);
    return node;
}

Json*
mk_simple_call(char* feature_name, Json* args_list) {
    Json* simple_call = Json_new();
    Json_add_string_to_object(simple_call, "name", feature_name);
    Json_add_array_to_object(simple_call, "args_list", args_list);
    return simple_call;
}

Json*
mk_list() {
    return Json_new();
}

Json*
add_to_list(Json* list, Json* element) {
    Json_add_object_to_array(list, element);
    return list;
}

Json*
mk_while_expr(Json* cond, Json* body_list) {
    Json* node = Json_new();
    add_type_to_node(node, "while-loop");
    Json_add_object_to_object(node, "cond", cond);
    Json_add_array_to_object(node, "body", body_list);
    return node;
}

Json*
mk_do_while_expr(Json* body_list, Json* cond) {
    Json* node = Json_new();
    add_type_to_node(node, "do-while-loop");
    Json_add_array_to_object(node, "body", body_list);
    Json_add_object_to_object(node, "cond", cond);
    return node;
}

Json* 
add_alt_case(Json* cases, Json* cond, Json* body) {
    Json* case_expr = Json_new(); 
    add_type_to_node(case_expr, "cases"); 
    Json_add_array_to_object(case_expr, "cond", cond);
    Json_add_array_to_object(case_expr, "body", body);
    Json_add_object_to_array(cases, case_expr);

    return cases;
}

Json* 
add_case_condition(Json* condition) {
    Json* node = Json_new(); 
    add_type_to_node(node, "case_cond"); 
    Json_add_array_to_object(node, "condition", condition);

    return node; 
}

Json* mk_case_expr(Json* cond, Json* body) {
    Json* node = Json_new();
    add_type_to_node(node, "case");
    Json_add_array_to_object(node, "expr", cond);
    Json_add_array_to_object(node, "body", body);

    return node;
}

Json* mk_match_expr(Json* expr, Json* cases) {
    Json* node = Json_new(); 
    add_type_to_node(node, "match_expr");
    Json_add_object_to_object(node, "expr", expr);
    Json_add_array_to_object(node, "cases", cases);

    return node;
}

Json*
mk_declaration_val(Json* identifier, Json* expr) {
    Json* node = Json_new();
    add_type_to_node(node, "declaration_val");
    Json_add_object_to_object(node, "val identifier", identifier);
    Json_add_object_to_object(node, "expression", expr);
    return node;
}

Json*
mk_declaration_var(Json* identifier, Json* expr) {
    Json* node = Json_new();
    add_type_to_node(node, "declaration_var");
    Json_add_object_to_object(node, "var identifier", identifier);
    Json_add_object_to_object(node, "expression", expr);
    return node;
}

Json*
mk_declaration_val_type(Json* identifier,Json* type, Json* expr) {
    Json* node = Json_new();
    add_type_to_node(node, "declaration_val_type");
    Json_add_object_to_object(node, "val identifier", identifier);
    Json_add_array_to_object(node, "type", type);
    Json_add_object_to_object(node, "expression", expr);
    return node;
}

Json*
mk_declaration_var_type(Json* identifier, Json* type, Json* expr) {
    Json* node = Json_new();
    add_type_to_node(node, "declaration_val_type");
    Json_add_object_to_object(node, "var identifier", identifier);
    Json_add_array_to_object(node, "type", type);
    Json_add_object_to_object(node, "expression", expr);
    return node;
}

Json*
mk_declaration_var_array(Json* identifier, Json* array_type, Json* array) {
    Json* node = Json_new();
    add_type_to_node(node, "declaration_var_array");
    Json_add_object_to_object(node, "var identifier", identifier);
    Json_add_object_to_object(node, "array_type", array_type);
    Json_add_array_to_object(node, "expression", array);
    return node;
}

Json*
mk_declaration_val_array(Json* identifier, Json* array_type, Json* array) {
    Json* node = Json_new();
    add_type_to_node(node, "declaration_val_array");
    Json_add_object_to_object(node, "val identifier", identifier);
    Json_add_object_to_object(node, "array_type", array_type);
    Json_add_array_to_object(node, "expression", array);

    return node;
}

Json*
mk_method_params(Json* identifier, Json* type) {
    Json* node = Json_new();
    add_type_to_node(node, "method_params");
    Json_add_object_to_object(node, "identifier", identifier);
    Json_add_array_to_object(node, "type", type);

    return node;
}

Json*
mk_method_params_value(Json* identifier, Json* type,Json* value) {
    Json* node = Json_new();
    add_type_to_node(node, "method_params");
    Json_add_object_to_object(node, "identifier", identifier);
    Json_add_array_to_object(node, "type", type);
    Json_add_object_to_object(node, "value", value);

    return node;
}

Json*
mk_anonym_func(Json* params, Json* body) {
    Json* node = Json_new();
    add_type_to_node(node, "anonym_func");
    Json_add_array_to_object(node, "params",params);
    Json_add_object_to_object(node, "body", body);

    return node;
}

Json*
mk_method_declaration(Json* identifier, Json* params, Json* type, Json* body) {
    Json* node = Json_new();
    add_type_to_node(node, "method_declaration");
    Json_add_object_to_object(node, "identifier", identifier);
    Json_add_array_to_object(node, "params", params);
    Json_add_object_to_object(node, "type", type);
    Json_add_object_to_object(node, "body", body);

    return node;
}

Json*
mk_method_declaration_typeOnly(Json* identifier, Json* type, Json* body) {
    Json* node = Json_new();
    add_type_to_node(node, "method_declaration");
    Json_add_object_to_object(node, "identifier", identifier);
    Json_add_object_to_object(node, "type", type);
    Json_add_object_to_object(node, "body", body);

    return node;
}

Json*
mk_method_declaration_paramsOnly(Json* identifier, Json* params, Json* body) {
    Json* node = Json_new();
    add_type_to_node(node, "method_declaration");
    Json_add_object_to_object(node, "identifier", identifier);
    Json_add_array_to_object(node, "params", params);
    Json_add_object_to_object(node, "body", body);

    return node;
}

Json*
mk_method_declaration_bodyOnly(Json* identifier, Json* body) {
    Json* node = Json_new();
    add_type_to_node(node, "method_declaration");
    Json_add_object_to_object(node, "identifier", identifier);
    Json_add_object_to_object(node, "body", body);

    return node;
}


Json*
mk_generator_without_to_and_by(Json* identifier, Json* from) {
    Json* node = Json_new();
    add_type_to_node(node, "generator_without_to_and_by");
    Json_add_object_to_object(node, "identifier", identifier);
    Json_add_object_to_object(node, "from", from);
    return node;
}


Json*
mk_generator_without_by(Json* identifier, Json* from, Json* to) {
    Json* node = Json_new();
    add_type_to_node(node, "generator_without_by");
    Json_add_object_to_object(node, "identifier", identifier);
    Json_add_object_to_object(node, "from", from);
    Json_add_object_to_object(node, "to", to);
    return node;
}


Json*
mk_generator_with_by(Json* identifier, Json* from, Json* to, Json* by) {
    Json* node = Json_new();
    add_type_to_node(node, "generator_with_by");
    Json_add_object_to_object(node, "identifier", identifier);
    Json_add_object_to_object(node, "from", from);
    Json_add_object_to_object(node, "to", to);
    Json_add_object_to_object(node, "by", by);
    return node;
}



Json* mk_if_cond(Json* expr) {
    Json* node = Json_new();
    add_type_to_node(node, "if_condition");
    Json_add_object_to_object(node, "expression", expr);
    return node;
}


