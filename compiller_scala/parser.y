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


%start expr


%right '='
%left '|'
%left '&'
%left EQ NEQ
%left '>' '<' MORE_OR_EQUAL_OPERATOR LESS_OR_EQUAL_OPERATOR
%left '+' '-'
%left '*' '/' '%'




%type <stmt> statement statement_list_e if_else_stmt if_stmt else_if_stmt else_stmt for_stmt while_stmt do_while_stmt
%type <expr> expr expr_list expr_list_e condition match



%token <int_value> NUM_10 NUM_16
%token <real_value> REAL_NUMBER REAL_NUMBER_EXPONENT
%token <str_value> IDENTIFIER CONST_CHAR CONST_STRING
%token  VAL ELSE IF ELSE_IF FOR DO WHILE MATCH CASE 
%token KW_TRUE KW_FALSE KW_NULL
%token EQ NEQ
%token MORE_OR_EQUAL_OPERATOR LESS_OR_EQUAL_OPERATOR
%token INT_KW DOUBLE_KW STRING_KW CHAR_KW BOOLEAN_KW ANY_KW 
%token TO BY
%token GENERATOR_OPERATOR RIGHT_ARROW_OPERATOR /* <- | => */
%token ID_COLLECTION
%token ARRAY LIST VECTOR SET

%%

/*************************************************************/

/* Program description */
program:
    | program statement
    | program statement_list_e
    ;

/*************************************************************/

/* Statements */
statement_list:
      statement
    | statement_list statement
    ;

statement_list_e:
      statement_list
    | /* nothing */
    ;

statement:
      IDENTIFIER '=' expr ';' { printf("Assignment:\n"); }
    | VAL IDENTIFIER '=' expr ';' { printf("Value declaration:\n"); }
    | if_else_stmt { printf("IF_ELSE construction:\n"); }
    | for_stmt { printf("FOR_STMT construction:\n"); }
    | while_stmt { printf("WHILE_STMT construction:\n"); }
    | do_while_stmt { printf("DO_WHILE_STMT construction:\n"); }
    ;

/*..................................................... IF-ELSE................................................... */

if_else_stmt:
      if_stmt
    | if_stmt else_if_stmt else_stmt
    | if_stmt else_stmt
    ;


if_stmt:
      IF '(' condition ')' statement
    | IF '(' condition ')' '{' statement_list_e '}'
    | IF '(' condition ')' '{' statement_list_e if_else_stmt statement_list_e '}'
    ;


else_if_stmt:
      ELSE_IF '(' condition ')' statement
    | ELSE_IF '(' condition ')' '{' statement_list_e '}'
    | ELSE_IF '(' condition ')' statement else_if_stmt
    | ELSE_IF '(' condition ')' '{' statement_list_e '}' else_if_stmt
    | ELSE_IF '(' condition ')' '{' statement_list_e if_else_stmt statement_list_e'}'
    ;


else_stmt:
      ELSE statement                          
    | ELSE '{' statement_list_e '}'
    | ELSE '{' statement_list_e if_else_stmt statement_list_e '}'
    ;



if_condition:
          IF '(' condition ')'
        | IF condition
        ;

if_condition_list:
          if_condition
        | if_condition_list if_condition
        ;


/*..................................................... FOR................................................... */
for_stmt:
          FOR '(' for_params ')' '{' statement_list '}' { printf("FOR LOOP\n"); }
        | FOR '{'for_multy_list'}' '{' statement_list '}' { printf("FOR MULTY LOOP\n"); }
        | FOR '{' for_params if_condition_list '}' '{' statement_list '}' { printf("FOR LOOP: multy with IF_STMT\n"); }
        ;

/*standart*/
for_base_params:
          IDENTIFIER GENERATOR_OPERATOR NUM_10 TO NUM_10
        | IDENTIFIER GENERATOR_OPERATOR NUM_10 TO NUM_10 BY NUM_10
        | IDENTIFIER GENERATOR_OPERATOR CONST_CHAR TO CONST_CHAR
        ;

for_params:
            for_base_params
        | IDENTIFIER GENERATOR_OPERATOR ID_COLLECTION
        ;



for_multy_list:
          for_base_params
        | for_multy_list for_base_params
        ;


/*..................................................... DO / WHILE................................................... */
while_stmt: 
        WHILE '(' condition ')' '{' statement_list '}'
        ;

do_while_stmt:
        DO '{' statement_list '}' WHILE'(' condition ')'
        ;
/*..................................................... MATCH................................................... */
match:
          IDENTIFIER MATCH '{' case_list'}'
        | int_literal MATCH '{' case_list '}'
        ;

case:
          CASE case_condition RIGHT_ARROW_OPERATOR statement_list
        | CASE case_condition RIGHT_ARROW_OPERATOR CONST_STRING
        ;

case_condition:
          int_literal
        | int_literal if_condition
        | IDENTIFIER
        | IDENTIFIER if_condition
        | KW_TRUE
        | KW_FALSE
        | KW_TRUE if_condition
        | KW_FALSE if_condition
        | int_literal_list_case
        ;

int_literal_list_case:
          int_literal '|' 
        | int_literal_list_case int_literal
        ;

case_list:
          case
        | case_list case
        ;
            
/*************************************************************/

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
      const
    | IDENTIFIER
    | '(' expr ')'
    | expr '+' expr { printf("PARSER found expr - expr + expr\n"); }
    | expr '-' expr { printf("PARSER found expr - expr - expr\n"); }
    | expr '/' expr { printf("PARSER found expr - expr / expr\n"); }
    | expr '*' expr { printf("PARSER found expr - expr * expr\n"); }
    | expr '%' expr { printf("PARSER found expr - expr % expr\n"); }
    | expr '&' expr { printf("PARSER found expr - expr && expr\n"); }
    | expr '|' expr { printf("PARSER found expr - expr | expr\n"); }
    | condition { printf("PARSER found expr - condition\n"); }
    | func_call { printf("PARSER found expr - func_call\n"); }
    | if_else_stmt { printf("PARSER found expr - if_else_stmt\n"); }
    | array
    | list
    | vector
    | set
    ;


/* Constants */
int_literal:
      NUM_10 { printf("PARSER found - INT\n"); }
    | NUM_16 { printf("PARSER found - INT\n"); }
    ;


real_literal:
      REAL_NUMBER { printf("PARSER found - REAL\n"); }
    | REAL_NUMBER_EXPONENT { printf("PARSER found - REAL_EXP\n"); }
    ;


const:
      int_literal
    | real_literal
    | CONST_STRING
    | CONST_CHAR
    | KW_TRUE
    | KW_FALSE
    | KW_NULL
    ;


/* Function call */
func_call:
      IDENTIFIER '(' ')' { printf("Function call: NO PARAMS\n"); }
    | IDENTIFIER '(' expr_list ')' { printf("Function call: WITH PARAMS\n"); }
    ;


/* Condition */
condition:
      expr '>' expr {printf("PARSER found expr - expr > expr\n"); }
    | expr '<' expr {printf("PARSER found expr - expr < expr\n"); }
    | expr MORE_OR_EQUAL_OPERATOR expr {printf("PARSER found expr - expr >= expr\n"); }
    | expr LESS_OR_EQUAL_OPERATOR expr {printf("PARSER found expr - expr <= expr\n"); }
    | expr EQ expr {printf("PARSER found expr - expr == expr\n"); }
    | expr NEQ expr {printf("PARSER found expr - expr != expr\n"); }
    ;

/* Types */
type:
      INT_KW
    | DOUBLE_KW
    | STRING_KW
    | CHAR_KW
    | BOOLEAN_KW
    | ANY_KW
    


/************************************************/

/* Array */
array:
      ARRAY '(' massive_list_e ')' { printf("PARSER found Array\n"); }
    | /* Can do with FOR LOOP */

massive_list:
      expr_list 
    ;

massive_list_e:
      massive_list
    | /* nothing */
    ;


/* List */
list:
      LIST '(' list_list_e ')' { printf("PARSER found List\n"); }
    | /* Can do with FOR LOOP */
    ;

list_list:
      expr_list
    | list
    | expr_list ',' list_list 
    ;

list_list_e:
      list_list
    | /* nothing */
    ;


 /* Vector */
vector:
      VECTOR '(' vector_list_e ')' { printf("PARSER found Vector\n"); }
    ;

vector_list:
      expr_list
    | vector
    | expr_list ',' vector_list 
    ;

vector_list_e:
      vector_list
    | /* nothing */
    ;


/* Set */
set:
      SET '(' set_list_e ')' { printf("PARSER found Set\n"); }
    ;

set_list:
      expr_list
    | set
    | expr_list ',' set_list 
    ;

set_list_e:
      set_list
    | /* nothing */


%%
