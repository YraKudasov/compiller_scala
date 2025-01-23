%locations
%{
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "./ast.h"
#include "./strbuf.h"

#include "FlexLexer.h"
extern int yylex();
extern int yylineno;
Json *found_classes = NULL;
void yyerror(const char *str);
struct LOCATION
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
    struct LOCATION current_node_loc;
    #define YYLLOC_DEFAULT(Current, Rhs, N)\
        do {\
            if (N) {\
                (Current).first_line = YYRHSLOC (Rhs, 1).first_line;\
                (Current).first_column = YYRHSLOC (Rhs, 1).first_column;\
                (Current).last_line = YYRHSLOC (Rhs, N).last_line;\
                (Current).last_column  = YYRHSLOC (Rhs, N).last_column;\
            }\
            else {\
                (Current).first_line = (Current).last_line = YYRHSLOC (Rhs, 0).last_line;\
                (Current).first_column = (Current).last_column = YYRHSLOC (Rhs, 0).last_column;\
            }\
            current_node_loc = (Current);\
        } while (0)


%}

%define parse.error verbose
%define parse.trace
%define api.location.type {struct LOCATION}

%union {
    int int_value;
    double real_value;
    char* str_value;
    struct Json *tree;
}


%start program


%nonassoc ENDL
%nonassoc LOWER_THAN_EXPR
%nonassoc IF
%nonassoc DO
%nonassoc WHILE
%nonassoc MATCH
%right ELSE
%left ','
%right '=' RIGHT_ARROW_OPERATOR
%left KW_OR
%left KW_AND
%left '|'
%left '&'
%left EQ NEQ
%left '>' '<' MORE_OR_EQUAL_OPERATOR LESS_OR_EQUAL_OPERATOR
%right ':'
%left '+' '-' 
%left '*' '/' '%'
%nonassoc UMINUS UPLUS
%left '(' ')' '[' ']'
%left GENERATOR_OPERATOR
%left '.'



%token <int_value> NUM_10 NUM_16
%token <real_value> REAL_NUMBER REAL_NUMBER_EXPONENT
%token <str_value> IDENTIFIER CONST_CHAR CONST_STRING
%token NEWLINE
%token VAL VAR ELSE IF  FOR DO WHILE MATCH CASE PRINTLN READLINE ARRAY OVERRIDE
%token KW_TRUE KW_FALSE 
%token<jsonvalue> KW_NULL
%token EQ NEQ
%token KW_OR KW_AND
%token MORE_OR_EQUAL_OPERATOR LESS_OR_EQUAL_OPERATOR
%token INT_KW DOUBLE_KW STRING_KW CHAR_KW BOOLEAN_KW ANY_KW UNIT_KW
%token TO BY YIELD 
%token GENERATOR_OPERATOR RIGHT_ARROW_OPERATOR /* <- | => */
%token ID_COLLECTION
%token ARRAY 
%token DEF
%token NEW
%token PROTECTED PRIVATE
%token CLASS EXTENDS ABSTRACT
%token NOT
%token CASE_PATTERN

%type num_const

%type <tree> statement
%type <tree> expr expr_list expr_list_e
%type <tree> const
%type <tree> num_const
%type <tree> type type_list type_list_car type_list_simple
%type <tree> if_else_expr
%type <tree> method_call
%type <tree> array array_literal initialized_array 
%type <tree> while_expr do_while_expr
%type <tree> match_expr case_condition case_list CASE_PATTERN case
%type <tree> generators_and_conditions_parentheses_List



%%

/*************************************************************/

/* Program description */
program:
      statement_expr_list_e
    ;

/*************************************************************/

/*.....................................................CLASSES................................................... */
class:
      class_header '{' statement_expr_list_e '}'
    | abstract_class_header '{' statement_expr_list_e '}'
    | case_class_header '{' statement_expr_list_e '}'
    ;

class_header:
      CLASS endlOpt IDENTIFIER endlOpt '(' class_params_e ')'
    | CLASS endlOpt IDENTIFIER endlOpt'(' class_params_e ')' inheritance
    | CLASS endlOpt IDENTIFIER
    | CLASS endlOpt IDENTIFIER endlOpt inheritance
    ;

abstract_class_header:
      ABSTRACT endlOpt class_header
    ;


case_class_header:
      CASE endlOpt CLASS endlOpt IDENTIFIER endlOpt '(' class_params_e ')'
    | CASE endlOpt CLASS endlOpt IDENTIFIER endlOpt'(' class_params_e ')' inheritance
    ;


class_params:
      VAR IDENTIFIER ':' type
    | VAL IDENTIFIER ':' type
    | VAR IDENTIFIER ':' type '=' const
    | VAL IDENTIFIER ':' type '=' const
    | class_params ',' VAR IDENTIFIER ':' type
    | class_params ',' VAL IDENTIFIER ':' type
    | class_params ',' VAR IDENTIFIER ':' type '=' const
    | class_params ',' VAL IDENTIFIER ':' type '=' const
    | visibility_modifier VAR IDENTIFIER ':' type
    | visibility_modifier VAL IDENTIFIER ':' type
    | visibility_modifier VAR IDENTIFIER ':' type '=' const
    | visibility_modifier VAL IDENTIFIER ':' type '=' const
    | class_params ',' visibility_modifier VAR IDENTIFIER ':' type
    | class_params ',' visibility_modifier VAL IDENTIFIER ':' type
    | class_params ',' visibility_modifier VAR IDENTIFIER ':' type '=' const
    | class_params ',' visibility_modifier VAL IDENTIFIER ':' type '=' const
    ;

class_params_e:
      class_params
    | /* nothing */
    ;

create_instance_class:
      NEW endlOpt IDENTIFIER
    | NEW endlOpt IDENTIFIER'(' expr_list_e ')'
    ;

create_instance_case_class:
      IDENTIFIER endlOpt '(' expr_list_e ')'
    | NEW endlOpt IDENTIFIER'(' expr_list_e ')'
    ;

instance_case_class_in_case:
      IDENTIFIER endlOpt '(' expr_list_e ')'
    ;

visibility_modifier:
      PRIVATE
    | PROTECTED
    ;



/*...........................Наследование...........................*/

inheritance:
      EXTENDS endlOpt IDENTIFIER
    | EXTENDS endlOpt IDENTIFIER '('expr_list')'
    ;


 /*...........................Statement_expr...........................*/   

/* Statements */
statement_expr_list:
      statement { printf("Add first statement :\n"); }
    | visibility_modifier statement { printf("Add first visibility_modifier statement :\n"); }
    | expr { printf("Add first statement :\n"); }
    | statement_expr_list  separator_List statement { printf("Add new statement to statement_expr_list :\n"); }
    | statement_expr_list  separator_List expr { printf("Add new expr to statement_expr_list :\n"); }
    | statement_expr_list  separator_List visibility_modifier statement { printf("Add new visibility_modifier to statement_expr_list :\n"); }
    ;

statement_expr_list_e:
      separator_List_e statement_expr_list separator_List_e 
    | /* nothing */  { printf("PARSER found statement_list_e - nothing\n"); }
    ;

statement:
      VAL endlOpt IDENTIFIER endlOpt '=' endlOpt expr  { $$ = mk_declaration_expr(mk_ident_lit($3), $7); found_classes=$$; puts(Json_to_pretty_string(found_classes));}
    | VAR endlOpt IDENTIFIER endlOpt '=' endlOpt expr  { printf("implicit variable declaration:\n"); }
    | VAL endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr { printf("explicit value declaration:\n"); }
    | VAR endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr { printf("explicit variable declaration:\n"); }
    | VAR endlOpt IDENTIFIER endlOpt ':' endlOpt ARRAY '[' type ']' endlOpt '=' endlOpt array { printf("explicit array declaration:\n"); }
    | VAL endlOpt IDENTIFIER endlOpt ':' endlOpt ARRAY '[' type ']' endlOpt '=' endlOpt array { printf("explicit array declaration:\n"); }
    | class { printf("Class:\n"); }
    | method { printf("Method:\n"); }
    ;
    
 

/*..................................................... IF-ELSE................................................... */


if_else_expr:
      IF endlOpt '('  expr  ')' endlOpt expr ELSE endlOpt expr %prec ELSE  { $$ = mk_if_else_expr($4, $7, $10); }
    | IF endlOpt '('  expr  ')' endlOpt expr endlList ELSE endlOpt expr %prec ELSE  { $$ = mk_if_else_expr($4, $7, $11); }
    | IF endlOpt '('  expr  ')' endlOpt expr %prec IF { $$ = mk_if_expr($4, $7);}
    ;
    


/*..................................................... FOR................................................... */

for_expr:
          FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt YIELD endlOpt expr %prec LOWER_THAN_EXPR { printf("FOR in parentheses\n"); }
        | FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt expr %prec LOWER_THAN_EXPR { printf("FOR in parentheses\n"); }
        | FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt YIELD endlOpt expr %prec LOWER_THAN_EXPR { printf("FOR in curly_braces\n"); }
        | FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt expr %prec LOWER_THAN_EXPR { printf("FOR in curly_braces\n"); }
        ;


generators_and_conditions_parentheses_List:
          IDENTIFIER GENERATOR_OPERATOR const TO const  {$$ = add_to_list(mk_list(),  mk_generator_without_by(mk_ident_lit($1), $3, $5)); found_classes=$$; puts(Json_to_pretty_string(found_classes));}
        | IDENTIFIER GENERATOR_OPERATOR const TO const BY const {$$ = add_to_list(mk_list(),  mk_generator_with_by(mk_ident_lit($1), $3, $5, $7)); found_classes=$$; puts(Json_to_pretty_string(found_classes));}
        | IDENTIFIER GENERATOR_OPERATOR IDENTIFIER {$$ = add_to_list(mk_list(), mk_generator_without_to_and_by(mk_ident_lit($1),mk_ident_lit($3))); found_classes=$$; puts(Json_to_pretty_string(found_classes));}
        | generators_and_conditions_parentheses_List IF expr { $$ = add_to_list($1, mk_if_cond($3)); found_classes=$$; puts(Json_to_pretty_string(found_classes));}
        | generators_and_conditions_parentheses_List ';' IF expr { $$ = add_to_list($1, mk_if_cond($4)); found_classes=$$; puts(Json_to_pretty_string(found_classes));}
        | generators_and_conditions_parentheses_List ';' IDENTIFIER GENERATOR_OPERATOR const TO const { $$ = add_to_list($1, mk_generator_without_by(mk_ident_lit($3), $5, $7)); found_classes=$$; puts(Json_to_pretty_string(found_classes));}
        | generators_and_conditions_parentheses_List ';' IDENTIFIER GENERATOR_OPERATOR const TO const BY const { $$ = add_to_list($1, mk_generator_with_by(mk_ident_lit($3), $5, $7, $9)); found_classes=$$; puts(Json_to_pretty_string(found_classes));}
        | generators_and_conditions_parentheses_List ';' IDENTIFIER GENERATOR_OPERATOR IDENTIFIER { $$ = add_to_list($1, mk_generator_without_to_and_by(mk_ident_lit($3), mk_ident_lit($5))); found_classes=$$; puts(Json_to_pretty_string(found_classes));}
        ;

generators_and_conditions_curly_braces_List:
          IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt const TO endlOpt const
        | IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt const TO endlOpt const BY endlOpt const
        | IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt IDENTIFIER
        | generators_and_conditions_curly_braces_List endlOpt IF endlOpt expr 
        | generators_and_conditions_curly_braces_List endlOpt ';' endlOpt IF expr 
        | generators_and_conditions_curly_braces_List endlOpt ';' endlOpt IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt const TO endlOpt const
        | generators_and_conditions_curly_braces_List endlOpt ';' endlOpt IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt const TO endlOpt const BY endlOpt const
        | generators_and_conditions_curly_braces_List endlOpt ';' endlOpt IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt IDENTIFIER
        | generators_and_conditions_curly_braces_List endlList IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt const TO endlOpt const
        | generators_and_conditions_curly_braces_List endlList IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt const TO endlOpt const BY endlOpt const
        | generators_and_conditions_curly_braces_List endlList IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt IDENTIFIER
        ;


/*..................................................... DO / WHILE................................................... */
while_expr: 
          WHILE endlOpt '(' expr ')' endlOpt expr %prec WHILE { $$ = mk_while_expr($4,$7); }
        ;

do_while_expr:
          DO endlOpt expr endlOpt WHILE '(' expr ')' %prec WHILE { $$ = mk_do_while_expr($3,$7); }
        ;


/*..................................................... MATCH................................................... */
match_expr:
          expr MATCH endlOpt '{' endlOpt case_list endlOpt'}' {$$ = mk_match_expr($1,$6);}
        ;


case_condition:
          expr_list %prec LOWER_THAN_EXPR {$$ = add_case_condition($1);}
        | CASE_PATTERN {$$ = add_case_condition($1);}
        ;


    
case_list:
          CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr {$$ = mk_list();$$ = add_alt_case($$,$3,$7);}
        | case_list endlOpt semicolonList endlOpt CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr {$$ = add_alt_case($1,$7,$11);}
        | case_list endlOpt CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr {$$ = add_alt_case($1,$5,$9);}
        ;

/*..................................................... EXPR................................................... */




/* Expr */
expr_list_e:
      expr_list    { printf("PARSER found expr_list - expr_list\n"); }
    | /* nothing */  {  $$ = mk_list(); found_classes=$$; puts(Json_to_pretty_string(found_classes));}
    ;


expr_list:
      expr            { $$ = add_to_list(mk_list(), $1); found_classes=$$; puts(Json_to_pretty_string(found_classes));}
    | expr_list endlOpt ',' endlOpt expr  { $$ = add_to_list($1, $5); found_classes=$$; puts(Json_to_pretty_string(found_classes));}
    ;


expr:
      const %prec LOWER_THAN_EXPR {printf("PARSER found expr - const\n"); }
    | IDENTIFIER %prec LOWER_THAN_EXPR {$$ = mk_ident_lit($1); }
    | IDENTIFIER endlOpt '=' endlOpt expr { $$ = mk_bin_op((char*) "=", mk_ident_lit($1), $5); found_classes=$$; puts(Json_to_pretty_string(found_classes)); }
    | '(' expr ')' { printf("PARSER found expr - ( expr ) \n"); }
    | expr '>' endlOpt expr { $$ = mk_bin_op((char*) ">", $1, $4); found_classes=$$; puts(Json_to_pretty_string(found_classes)); }
    | expr '<' endlOpt expr { $$ = mk_bin_op((char*) "<", $1, $4); found_classes=$$; puts(Json_to_pretty_string(found_classes)); }
    | expr MORE_OR_EQUAL_OPERATOR endlOpt expr { $$ = mk_bin_op((char*) ">=", $1, $4); found_classes=$$; puts(Json_to_pretty_string(found_classes)); }
    | expr LESS_OR_EQUAL_OPERATOR endlOpt expr { $$ = mk_bin_op((char*) "<=", $1, $4); found_classes=$$; puts(Json_to_pretty_string(found_classes)); }
    | expr EQ endlOpt expr { $$ = mk_bin_op((char*) "==", $1, $4); found_classes=$$; puts(Json_to_pretty_string(found_classes)); }
    | expr NEQ endlOpt expr { $$ = mk_bin_op((char*) "!=", $1, $4); found_classes=$$; puts(Json_to_pretty_string(found_classes)); }
    | expr '+' endlOpt expr { $$ = mk_bin_op((char*) "+", $1, $4); found_classes=$$; puts(Json_to_pretty_string(found_classes)); }
    | expr '-' endlOpt expr { $$ = mk_bin_op((char*) "-", $1, $4); found_classes=$$; puts(Json_to_pretty_string(found_classes)); }
    | expr '/' endlOpt expr { $$ = mk_bin_op((char*) "/", $1, $4); found_classes=$$; puts(Json_to_pretty_string(found_classes)); }
    | expr '*' endlOpt expr { $$ = mk_bin_op((char*) "*", $1, $4); found_classes=$$; puts(Json_to_pretty_string(found_classes)); }
    | expr '%' endlOpt expr { $$ = mk_bin_op((char*) "%", $1, $4); found_classes=$$; puts(Json_to_pretty_string(found_classes)); }
    | expr '&' endlOpt expr { $$ = mk_bin_op((char*) "&", $1, $4); found_classes=$$; puts(Json_to_pretty_string(found_classes)); }
    | expr '|' endlOpt expr { $$ = mk_bin_op((char*) "|", $1, $4); found_classes=$$; puts(Json_to_pretty_string(found_classes)); }
    | expr KW_OR endlOpt expr { $$ = mk_bin_op((char*) "||", $1, $4); found_classes=$$; puts(Json_to_pretty_string(found_classes)); }
    | expr KW_AND endlOpt expr { $$ = mk_bin_op((char*) "&&", $1, $4); found_classes=$$; puts(Json_to_pretty_string(found_classes)); }
    | '-' expr  %prec UMINUS { $$ = mk_unary_op("unary_minus_op", $2);found_classes=$$; puts(Json_to_pretty_string(found_classes)); }
    | '+' expr  %prec UPLUS { $$ = mk_unary_op("unary_plus_op", $2);found_classes=$$; puts(Json_to_pretty_string(found_classes)); }
    | if_else_expr {$$=$1;found_classes=$$; puts(Json_to_pretty_string(found_classes));}
    | for_expr { printf("PARSER found expr - for_expr\n"); }
    | while_expr {$$=$1;found_classes=$$; puts(Json_to_pretty_string(found_classes));}
    | do_while_expr {$$=$1;found_classes=$$; puts(Json_to_pretty_string(found_classes));}
    | match_expr {$$=$1;found_classes=$$; puts(Json_to_pretty_string(found_classes));}
    | '{' statement_expr_list_e '}' { printf("  { statement_expr_list_e }\n"); }
    | anonymous_func { printf("Function:\n"); }
    | method_call { printf("method_call:\n"); }
    | create_instance_class { printf("instance_class:\n"); }
    | READLINE'('')' { printf("readLine:\n"); }
    | PRINTLN'(' expr ')' { printf("print:\n"); }
    | IDENTIFIER '.' '(' NUM_10 ')' { printf("array_call:\n"); }
    ;

/* Constants */
num_const:
      NUM_10 { $$ = mk_int_const($1); }
    | NUM_16 { $$ = mk_int_const($1); }
    | REAL_NUMBER { $$ = mk_real_const($1); }
    | REAL_NUMBER_EXPONENT { $$ = mk_real_const($1); }
    ;


const:
      num_const
    | CONST_STRING { $$ = mk_string_const($1); }
    | CONST_CHAR { $$ = mk_char_const($1); }
    | KW_TRUE { $$ = mk_boolean_const(true); }
    | KW_FALSE { $$ = mk_boolean_const(false); }
    | KW_NULL { $$ = mk_null_const(); }
    | array { $$ = mk_array_const($1); found_classes=$$; puts(Json_to_pretty_string(found_classes));}
    ;

    /*.....................................................FUNCTIONS/METHODS................................................... */

params:
      IDENTIFIER ':' type_list_car
    | params ',' IDENTIFIER ':' type_list_car
    | params ',' IDENTIFIER ':' type_list_car '=' const
    | /* nothing */
    ;


anonymous_func:
      '('params')' endlOpt RIGHT_ARROW_OPERATOR endlOpt expr %prec LOWER_THAN_EXPR
    ;


method_params_list:
      '('params')' { printf("PARSER found method params list\n"); }
    | method_params_list endlOpt '('params')'
    ;

method:
      DEF endlOpt IDENTIFIER endlOpt method_params_list endlOpt ':' endlOpt type endlOpt '=' endlOpt expr
    | DEF endlOpt IDENTIFIER endlOpt ':' endlOpt type endlOpt '=' endlOpt expr
    | DEF endlOpt IDENTIFIER endlOpt method_params_list endlOpt '=' endlOpt expr 
    | DEF endlOpt IDENTIFIER endlOpt '=' endlOpt expr 
    | OVERRIDE DEF endlOpt IDENTIFIER endlOpt method_params_list endlOpt ':' endlOpt type endlOpt '=' endlOpt expr
    | OVERRIDE DEF endlOpt IDENTIFIER endlOpt ':' endlOpt type endlOpt '=' endlOpt expr
    | OVERRIDE DEF endlOpt IDENTIFIER endlOpt method_params_list endlOpt '=' endlOpt expr 
    | OVERRIDE DEF endlOpt IDENTIFIER endlOpt '=' endlOpt expr 
    ;

method_arguments_list:
      '('expr_list_e')' 
    | method_arguments_list '('expr_list_e')'
    ;

method_call:
      IDENTIFIER method_arguments_list 
    | IDENTIFIER '.' IDENTIFIER method_arguments_list 
    ;


/* Types */
type:
      INT_KW { $$ = mk_integer_type(); }
    | DOUBLE_KW { $$ = mk_real_type(); }
    | STRING_KW { $$ = mk_string_type(); }
    | CHAR_KW { $$ = mk_char_type(); }
    | BOOLEAN_KW { $$ = mk_boolean_type(); }
    | ANY_KW { $$ = mk_any_type(); }
    | UNIT_KW { $$ = mk_unit_type(); }
    ;
    
type_list_car:
      type { $$ = mk_list(); $$ = add_to_list($$, $1); }
    | type_list_car RIGHT_ARROW_OPERATOR type { $$ = add_to_list($1, $3); }
    ;

type_list:
      type { $$ = mk_list(); $$ = add_to_list($$, $1); }
    | type_list_simple ',' type { $$ = add_to_list($1, $3); }
    ;

type_list_simple:
     '(' type_list ')' RIGHT_ARROW_OPERATOR type { $$ = add_to_list($2, $5); }
    ;
    



/************************************************/


/* Array */
array:
       array_literal {$$ = mk_array_literal($1); }
     | initialized_array {$$ = mk_initialized_array($1);}
     ;
      
array_literal:
       ARRAY endlOpt'(' expr_list_e ')' {  $$ = mk_array_with_expr_list($4); }
     | ARRAY %prec LOWER_THAN_EXPR { $$ = mk_empty_array(); }
     ;

initialized_array:
       NEW endlOpt ARRAY endlOpt '[' type ']' '(' expr ')' { $$ = mk_initialized_array_with_type_and_expr($6, $9);}
     ;



/*............................Обработка ENDL.........................................*/

/* endlList */
endlList:
      ENDL          { printf("PARSER found ENDL\n"); }
    | endlList ENDL { printf("PARSER found endlList\n"); }
    ;

/* endlOpt */
endlOpt:
      endlList { printf("PARSER found endlOpt\n"); }
    | /*empty*/ 
    ;

    /* endlList */
semicolonList:
      ';'          { printf("PARSER found SEMICOLON\n"); }
    | semicolonList ';' { printf("PARSER found semicolonList\n"); }
    ;

separator_List:
      ENDL  { printf("PARSER found ENDL\n"); }
    | ';'   { printf("PARSER found SEMICOLON\n"); }
    | separator_List  ENDL  { printf("PARSER add ENDL to separator_List\n"); }
    | separator_List  ';'  { printf("PARSER add ; to separator_List\n"); }
    ;

separator_List_e:
      separator_List
    | /* nothing */
    ;
%%
