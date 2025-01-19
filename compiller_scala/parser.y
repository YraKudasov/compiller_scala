%locations
%{
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "FlexLexer.h"
extern int yylex();
extern int yylineno;
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
    int64_t int_value;
    double real_value;
    char* str_value;
}


%start program


%nonassoc ENDL
%nonassoc LOWER_THAN_EXPR
%left ','
%right '=' RIGHT_ARROW_OPERATOR
%left KW_OR
%left KW_AND
%left '|'
%left '&'
%left EQ NEQ
%left '>' '<' MORE_OR_EQUAL_OPERATOR LESS_OR_EQUAL_OPERATOR
%left '+' '-' 
%left '*' '/' '%'
%nonassoc UMINUS UPLUS
%left '(' ')' '[' ']'
%nonassoc IF
%right ELSE



%token <int_value> NUM_10 NUM_16
%token <real_value> REAL_NUMBER REAL_NUMBER_EXPONENT
%token <str_value> IDENTIFIER CONST_CHAR CONST_STRING
%token NEWLINE
%token VAL VAR ELSE IF  FOR DO WHILE MATCH CASE  TRY CATCH FINALLY PRINT READLINE
%token KW_TRUE KW_FALSE KW_NULL
%token EQ NEQ
%token KW_OR KW_AND
%token MORE_OR_EQUAL_OPERATOR LESS_OR_EQUAL_OPERATOR
%token INT_KW DOUBLE_KW STRING_KW CHAR_KW BOOLEAN_KW ANY_KW UNIT_KW
%token TO BY YIELD
%token GENERATOR_OPERATOR RIGHT_ARROW_OPERATOR /* <- | => */
%token ID_COLLECTION
%token ARRAY LIST VECTOR SET
%token DEF
%token NEW
%token PROTECTED PRIVATE
%token CLASS  EXTENDS

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
    ;

class_header:
      CLASS endlOpt IDENTIFIER endlOpt '(' class_params_e ')'
    | CLASS endlOpt IDENTIFIER endlOpt'(' class_params_e ')' inheritance
    | CLASS endlOpt IDENTIFIER
    | CLASS endlOpt IDENTIFIER endlOpt inheritance
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
    ;

class_params_e:
      class_params
    | /* nothing */
    ;

instance_class:
      NEW endlOpt IDENTIFIER
    | NEW endlOpt IDENTIFIER'(' expr_list_e ')'
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
    | statement_expr_list  endlOpt semicolonList endlOpt statement { printf("Add new statement to statement_expr_list :\n"); }
    | statement_expr_list  endlOpt semicolonList endlOpt expr { printf("Add new expr to statement_expr_list :\n"); }
    | statement_expr_list  endlOpt semicolonList endlOpt visibility_modifier statement { printf("Add new visibility_modifier to statement_expr_list :\n"); }
    | statement_expr_list  endlList statement { printf("Add new statement to statement_expr_list :\n"); }
    | statement_expr_list  endlList expr { printf("Add new expr to statement_expr_list :\n"); }
    | statement_expr_list  endlList visibility_modifier statement { printf("Add new visibility_modifier to statement_expr_list :\n"); }
    ;

statement_expr_list_e:
      endlOpt statement_expr_list endlOpt
    | /* nothing */  { printf("PARSER found statement_list_e - nothing\n"); }
    ;

statement:
      VAL endlOpt IDENTIFIER endlOpt '=' endlOpt expr  { printf("implicit value declaration:\n"); }
    | VAR endlOpt IDENTIFIER endlOpt '=' endlOpt expr  { printf("implicit variable declaration:\n"); }
    | VAL endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr { printf("explicit value declaration:\n"); }
    | VAR endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr { printf("explicit variable declaration:\n"); }
    | method { printf("Method:\n"); }
    ;
    
 

/*..................................................... IF-ELSE................................................... */


if_else_expr:
      IF endlOpt '('  expr  ')' endlOpt expr %prec IF { printf("IF-CONSTR\n"); }
    | IF endlOpt '('  expr  ')' endlOpt expr ELSE endlOpt expr %prec ELSE { printf("IF_ELSE-CONSTR\n"); }
    | IF endlOpt '('  expr  ')' endlOpt expr endlList ELSE endlOpt expr %prec ELSE { printf("IF_ELSE-CONSTR\n"); }
    ;


if_condition_list:
      IF endlOpt expr
    | if_condition_list endlOpt IF endlOpt expr
    | if_condition_list endlOpt semicolonList endlOpt IF expr 
    ;


/*..................................................... FOR................................................... */

for_expr:
          FOR endlOpt '(' for_multy_list ')' endlOpt YIELD endlOpt expr %prec LOWER_THAN_EXPR { printf("FOR MULTY LOOP\n"); }
        | FOR endlOpt '(' for_params if_condition_list ')' endlOpt YIELD endlOpt expr %prec LOWER_THAN_EXPR { printf("FOR LOOP: multy with IF_STMT\n"); }
        | FOR endlOpt '(' for_multy_list ')' endlOpt expr %prec LOWER_THAN_EXPR { printf("FOR MULTY LOOP\n"); }
        | FOR endlOpt '(' for_params if_condition_list ')' endlOpt expr  %prec LOWER_THAN_EXPR { printf("FOR LOOP: multy with IF_STMT\n"); }
        ;

/*standart*/
for_params:
          IDENTIFIER GENERATOR_OPERATOR const TO const
        | IDENTIFIER GENERATOR_OPERATOR const TO const BY const
        ;


for_multy_list:
          for_params
        | for_multy_list endlOpt semicolonList endlOpt for_params
        ;


/*..................................................... DO / WHILE................................................... */
while_expr: 
          WHILE endlOpt '(' expr ')' endlOpt expr
        ;

do_while_expr:
          DO endlOpt expr endlOpt WHILE '(' expr ')'
        ;
/*..................................................... MATCH................................................... */
match_expr:
          IDENTIFIER MATCH '{' case_list'}'
        | const MATCH '{' case_list '}'
        ;


case_condition:
          const IF expr
        | IDENTIFIER
        | IDENTIFIER IF expr
        | int_literal_list_case
        ;

int_literal_list_case:
          const 
        | int_literal_list_case '|' const 
        ;

case_list:
          CASE case_condition RIGHT_ARROW_OPERATOR expr
        | case_list CASE case_condition RIGHT_ARROW_OPERATOR expr
        | case_list NEWLINE
        | case_list ';'
        ;
            
/*..................................................... TRY/CATCH/FINALLY................................................... */

try_expr:
          TRY'{' expr '}' catch
        | TRY'{' expr '}' finally
        | TRY'{' expr '}' catch finally
        ;

catch:
          CATCH '{' case_list '}'
        ;

finally:
          FINALLY '{' expr '}'
        ;



/* Expr */
expr_list_e:
      expr_list    { printf("PARSER found expr_list - expr_list\n"); }
    | /* nothing */  { printf("PARSER found expr_list - nothing\n"); }
    ;


expr_list:
      expr            { printf("PARSER found expr_list - expr\n"); }
    | expr_list endlOpt ',' endlOpt expr  { printf("PARSER found expr_list - expr_list\n"); }
    ;


expr:
      const {printf("PARSER found expr - const\n"); }
    | IDENTIFIER %prec LOWER_THAN_EXPR {printf("PARSER found expr - IDENTIFIER\n"); }
    | IDENTIFIER endlOpt '=' endlOpt expr { printf("Assignment:\n"); }
    | '(' expr ')' { printf("PARSER found expr - ( expr ) \n"); }
    | expr '>' endlOpt expr {printf("PARSER found expr - expr > expr\n"); }
    | expr '<' endlOpt expr {printf("PARSER found expr - expr < expr\n"); }
    | expr MORE_OR_EQUAL_OPERATOR endlOpt expr {printf("PARSER found expr - expr >= expr\n"); }
    | expr LESS_OR_EQUAL_OPERATOR endlOpt expr {printf("PARSER found expr - expr <= expr\n"); }
    | expr EQ endlOpt expr {printf("PARSER found expr - expr == expr\n"); }
    | expr NEQ endlOpt expr {printf("PARSER found expr - expr != expr\n"); }
    | expr '+' endlOpt expr { printf("PARSER found expr - expr + expr\n"); }
    | expr '-' endlOpt expr { printf("PARSER found expr - expr - expr\n"); }
    | expr '/' endlOpt expr { printf("PARSER found expr - expr / expr\n"); }
    | expr '*' endlOpt expr { printf("PARSER found expr - expr * expr\n"); }
    | expr '%' endlOpt expr { printf("PARSER found expr - expr % expr\n"); }
    | expr '&' endlOpt expr { printf("PARSER found expr - expr && expr\n"); }
    | expr '|' endlOpt expr { printf("PARSER found expr - expr | expr\n"); }
    | expr KW_OR endlOpt expr { printf("PARSER found expr - expr || expr\n"); }
    | expr KW_AND endlOpt expr { printf("PARSER found expr - expr && expr\n"); }
    | '-' expr  %prec UMINUS { printf("PARSER found expr - UMINUS\n"); }
    | '+' expr  %prec UPLUS { printf("PARSER found expr - UPLUS\n"); }
    | func_call { printf("PARSER found expr - func_call\n"); }
    | if_else_expr %prec LOWER_THAN_EXPR{ printf("PARSER found expr - if_else_expr\n"); }
    | for_expr { printf("PARSER found expr - for_expr\n"); }
    | while_expr { printf("PARSER found expr - while_expr\n"); }
    | do_while_expr { printf("PARSER found expr - do_while_expr\n"); }
    | try_expr { printf("PARSER found expr - try_expr\n"); }
    | match_expr { printf("PARSER found expr - match_expr\n"); }
    | '{' statement_expr_list_e  '}' { printf("PARSER found expr -  { statement_expr_list_e }\n"); }
    | func { printf("Function:\n"); }
    | method_call { printf("method_call:\n"); }
    | instance_class { printf("instance_class:\n"); }
    | READLINE'('')' { printf("readLine:\n"); }
    | PRINT'(' expr ')' { printf("print:\n"); }
    ;

/* Constants */
num_const:
      NUM_10 { printf("PARSER found - INT\n"); }
    | NUM_16 { printf("PARSER found - INT\n"); }
    | REAL_NUMBER { printf("PARSER found - REAL\n"); }
    | REAL_NUMBER_EXPONENT { printf("PARSER found - REAL_EXP\n"); }
    ;



const:
      num_const
    | CONST_STRING
    | CONST_CHAR
    | KW_TRUE
    | KW_FALSE
    | KW_NULL
    | array
    | list
    | vector
    | set
    ;

    /*.....................................................FUNCTIONS/METHODS................................................... */

/* Function call */
func_call:
      IDENTIFIER '(' expr_list_e ')' { printf("Function call: WITH PARAMS\n"); }
    ;

params:
      IDENTIFIER ':' type_list_car
    | params ',' IDENTIFIER ':' type_list_car
    | params ',' IDENTIFIER ':' type_list_car '=' const
    | /* nothing */
    ;

func:
      '('params')' RIGHT_ARROW_OPERATOR expr %prec LOWER_THAN_EXPR
    ;


method_params_list_e:
      method_params_list
    | /* nothing */
    ;

method_params_list:
      '('params')'
    | method_params_list '('params')'
    ;

method:
      DEF IDENTIFIER method_params_list_e ':' type '=' expr
    | DEF IDENTIFIER method_params_list_e '=' expr 
    ;


method_call:
     '('expr')' '.' IDENTIFIER'('expr_list_e')' 
    |'('expr')' '.' IDENTIFIER
    | const '.' IDENTIFIER
    ;


/* Types */
type:
      INT_KW
    | DOUBLE_KW
    | STRING_KW
    | CHAR_KW
    | BOOLEAN_KW
    | ANY_KW
    | UNIT_KW
    ;
    
type_list_car:
      type
    | type_list_car RIGHT_ARROW_OPERATOR type
    ;



type_list:
      type
    | type_list_simple ',' type
    ;

type_list_simple:
     '(' type_list ')' RIGHT_ARROW_OPERATOR type
    ;
    





/************************************************/


/* Array */
array:
      ARRAY '(' expr_list_e ')' { printf("PARSER found Array\n"); }
      ;


/* List */
list:
      LIST '(' expr_list_e ')' { printf("PARSER found List\n"); }
    ;


 /* Vector */
vector:
      VECTOR '(' expr_list_e ')' { printf("PARSER found Vector\n"); }
    ;


/* Set */
set:
      SET '(' expr_list_e ')' { printf("PARSER found Set\n"); }
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

%%
