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




%right '='
%left '|'
%left '&'
%left EQ NEQ
%left '>' '<' MORE_OR_EQUAL_OPERATOR LESS_OR_EQUAL_OPERATOR
%left '+' '-'
%left '*' '/' '%'




%type <stmt> statement statement_list_e if_else_stmt if_stmt else_if_stmt else_stmt for_stmt while_stmt do_while_stmt
%type <expr> expr expr_list expr_list_e numbers condition



%token <int_value> NUM_10 NUM_16
%token <real_value> REAL_NUMBER REAL_NUMBER_EXPONENT
%token <str_value> IDENTIFIER
%token  VAL ELSE IF ELSE_IF FOR DO
%token EQ NEQ
%token MORE_OR_EQUAL_OPERATOR LESS_OR_EQUAL_OPERATOR
%token to by
%token GENERATOR_OPERATOR RIGHT_ARROW_OPERATOR /*FOR | CASE */

%%

/*************************************************************/
/* Описание программы */

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

/* IF_ELSE Statement */

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


if_else_stmt:
      if_stmt
    | if_stmt else_if_stmt else_stmt
    | if_stmt else_stmt
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
                  IDENTIFIER GENERATOR_OPERATOR NUM_10 to NUM_10
                | IDENTIFIER GENERATOR_OPERATOR NUM_10 to NUM_10 by NUM_10
                | IDENTIFIER GENERATOR_OPERATOR char to char
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
        | numbers MATCH '{' case_list '}'
        ;

case:
          CASE numbers RIGHT_ARROW_OPERATOR statement_list
        | CASE IDENTIFIER RIGHT_ARROW_OPERATOR statement_list
        | CASE IDENTIFIER if_condition RIGHT_ARROW_OPERATOR statement_list
        | CASE numbers if_condition RIGHT_ARROW_OPERATOR statement_list
        | CASE numbers_list_case RIGHT_ARROW_OPERATOR statement_list
        ;

numbers_list_case:
                      numbers '|' 
                    | numbers_list_case numbers
                    ;

case_list:
             case
           | case_list case
           ;
            
/*************************************************************/
/* Expr */

numbers:
      NUM_10 { printf("PARSER found - INT\n"); }
    | NUM_16 { printf("PARSER found - INT\n"); }
    | REAL_NUMBER { printf("PARSER found - REAL\n"); }
    | REAL_NUMBER_EXPONENT { printf("PARSER found - REAL_EXP\n"); }
    ;


expr_list_e:
      expr_list    { printf("PARSER found expr_list - expr_list\n"); }
    | /* nothing */  { printf("PARSER found expr_list - nothing\n"); }
    ;


expr_list:
      expr            { printf("PARSER found expr_list - expr\n"); }
    | expr_list ',' expr  { printf("PARSER found expr_list - expr_list\n"); }
    ;


func_call:
      IDENTIFIER '(' ')' { printf("Function call: NO PARAMS\n"); }
    | IDENTIFIER '(' expr_list ')' { printf("Function call: WITH PARAMS\n"); }
    ;


condition:
      expr '>' expr {printf("PARSER found expr - expr > expr\n"); }
    | expr '<' expr {printf("PARSER found expr - expr < expr\n"); }
    | expr MORE_OR_EQUAL_OPERATOR expr {printf("PARSER found expr - expr >= expr\n"); }
    | expr LESS_OR_EQUAL_OPERATOR expr {printf("PARSER found expr - expr <= expr\n"); }
    | expr EQ expr {printf("PARSER found expr - expr == expr\n"); }
    | expr NEQ expr {printf("PARSER found expr - expr != expr\n"); }
    ;

expr:
      numbers
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
    | for_stmt { printf("PARSER found expr - for_stmt\n"); }
    | match
    ;


%%
