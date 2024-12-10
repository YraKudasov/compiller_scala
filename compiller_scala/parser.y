%{
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "FlexLexer.h"
extern int yylex();
extern int yylineno;
void yyerror(const char *s);
%}

%union {
    int64_t int_value;
    double real_value;
    char* str_value;
}


%start program


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
%nonassoc UMINUS UPLUS
%left '*' '/' '%'
%left '(' ')' '[' ']'





%token <int_value> NUM_10 NUM_16
%token <real_value> REAL_NUMBER REAL_NUMBER_EXPONENT
%token <str_value> IDENTIFIER CONST_CHAR CONST_STRING
%token NEWLINE
%token VAL VAR ELSE IF ELSE_IF FOR DO WHILE MATCH CASE  TRY CATCH FINALLY
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
%token CLASS CLASS_ID EXTENDS

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
      CLASS CLASS_ID '(' class_params ')'
    | CLASS CLASS_ID '(' class_params ')' inheritance
    | CLASS CLASS_ID
    | CLASS CLASS_ID inheritance
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
    | /* nothing */ 
    ;

instance_class:
      NEW CLASS_ID
    | NEW CLASS_ID'(' expr_list_e ')'
    ;

/*...........................Наследование...........................*/

inheritance:
      EXTENDS CLASS_ID
    | EXTENDS CLASS_ID'('expr_list')'
    ;


    

/* Statements */
statement_expr_list:
      statement
    | expr
    | statement_expr_list ';' statement
    | statement_expr_list NEWLINE statement
    | statement_expr_list ';' expr
    | statement_expr_list NEWLINE expr
    | statement_expr_list ';'
    | statement_expr_list NEWLINE
    ;

statement_expr_list_e:
      statement_expr_list
    | /* nothing */  { printf("PARSER found statement_list_e - nothing\n"); }
    ;

statement:
      VAL IDENTIFIER '=' expr  { printf("implicit value declaration:\n"); }
    | VAR IDENTIFIER '=' expr  { printf("implicit variable declaration:\n"); }
    | VAL IDENTIFIER ':' type_list_car '=' expr { printf("explicit value declaration:\n"); }
    | VAL IDENTIFIER ':' type_list_simple '=' expr { printf("explicit value declaration:\n"); }
    | VAR IDENTIFIER ':' type_list_car '=' expr { printf("explicit variable declaration:\n"); }
    | VAR IDENTIFIER ':' type_list_simple '=' expr { printf("explicit variable declaration:\n"); }
    | method { printf("Method:\n"); }
    ;

 

/*..................................................... IF-ELSE................................................... */


if_else_expr:
      IF '(' expr ')' expr else_expr
    ;

else_expr:
      ELSE expr %prec LOWER_THAN_EXPR
    ;

if_condition_list:
      IF expr
    | if_condition_list IF expr
    | if_condition_list ';' IF expr 
    | if_condition_list NEWLINE
    ;


/*..................................................... FOR................................................... */

for_expr:
          FOR '(' for_params ')' YIELD expr %prec LOWER_THAN_EXPR
        | FOR '{'for_multy_list'}' YIELD expr %prec LOWER_THAN_EXPR
        | FOR '{' for_params if_condition_list '}' YIELD expr %prec LOWER_THAN_EXPR
        | FOR '(' for_params ')' expr  %prec LOWER_THAN_EXPR { printf("FOR LOOP\n"); } 
        | FOR '{'for_multy_list'}' expr %prec LOWER_THAN_EXPR { printf("FOR MULTY LOOP\n"); }
        | FOR '{' for_params if_condition_list '}' expr  %prec LOWER_THAN_EXPR { printf("FOR LOOP: multy with IF_STMT\n"); }
        ;

/*standart*/
for_params:
          IDENTIFIER GENERATOR_OPERATOR const TO const
        | IDENTIFIER GENERATOR_OPERATOR const TO const BY const
        ;


for_multy_list:
          for_params
        | for_multy_list for_params 
        | for_multy_list ';' for_params
        | for_multy_list NEWLINE
        ;


/*..................................................... DO / WHILE................................................... */
while_expr: 
        WHILE '(' expr ')' expr
        ;

do_while_expr:
        DO expr WHILE'(' expr ')'
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
    | expr_list ',' expr  { printf("PARSER found expr_list - expr_list\n"); }
    ;


expr:
      const {printf("PARSER found expr - const\n"); }
    | IDENTIFIER {printf("PARSER found expr - IDENTIFIER\n"); }
    | CLASS_ID {printf("PARSER found expr - CLASS_ID\n"); }
    | IDENTIFIER '=' expr { printf("Assignment:\n"); }
    | '(' expr ')' {printf("PARSER found expr - ( expr )\n"); }
    | expr '>' expr {printf("PARSER found expr - expr > expr\n"); }
    | expr '<' expr {printf("PARSER found expr - expr < expr\n"); }
    | expr MORE_OR_EQUAL_OPERATOR expr {printf("PARSER found expr - expr >= expr\n"); }
    | expr LESS_OR_EQUAL_OPERATOR expr {printf("PARSER found expr - expr <= expr\n"); }
    | expr EQ expr {printf("PARSER found expr - expr == expr\n"); }
    | expr NEQ expr {printf("PARSER found expr - expr != expr\n"); }
    | expr '+' expr { printf("PARSER found expr - expr + expr\n"); }
    | expr '-' expr { printf("PARSER found expr - expr - expr\n"); }
    | expr '/' expr { printf("PARSER found expr - expr / expr\n"); }
    | expr '*' expr { printf("PARSER found expr - expr * expr\n"); }
    | expr '%' expr { printf("PARSER found expr - expr % expr\n"); }
    | expr '&' expr { printf("PARSER found expr - expr && expr\n"); }
    | expr '|' expr { printf("PARSER found expr - expr | expr\n"); }
    | expr KW_OR expr { printf("PARSER found expr - expr || expr\n"); }
    | expr KW_AND expr { printf("PARSER found expr - expr && expr\n"); }
    | '-' expr  %prec UMINUS
    | '+' expr  %prec UMINUS
    | func_call { printf("PARSER found expr - func_call\n"); }
    | if_else_expr{ printf("PARSER found expr - if_else_expr\n"); }
    | for_expr { printf("PARSER found expr - for_expr\n"); }
    | while_expr { printf("PARSER found expr - while_expr\n"); }
    | do_while_expr { printf("PARSER found expr - do_while_expr\n"); }
    | try_expr { printf("PARSER found expr - try_expr\n"); }
    | match_expr { printf("PARSER found expr - match_expr\n"); }
    | '{' statement_expr_list_e '}'
    | func { printf("Function:\n"); }
    | method_call { printf("method_call:\n"); }
    | instance_class { printf("instance_class:\n"); }
    | readLine'('')' { printf("readLine:\n"); }
    | print'(' expr ')' { printf("print:\n"); }
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



%%
