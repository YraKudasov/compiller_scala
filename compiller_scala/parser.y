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




%type <stmt> statement statement_list_e if_else_stmt if_stmt else_if_stmt else_stmt
%type <expr> expr expr_list expr_list_e numbers condition



%token <int_value> NUM_10 NUM_16 INT_CONST
%token <real_value> REAL_NUMBER REAL_NUMBER_EXPONENT REAL_CONST
%token <str_value> IDENTIFIER CONST_CHAR CONST_STRING
%token  VAL ELSE IF ELSE_IF
%token EQ NEQ
%token MORE_OR_EQUAL_OPERATOR LESS_OR_EQUAL_OPERATOR
%token INT_KW DOUBLE_KW STRING_KW CHAR_KW BOOLEAN_KW ANY_KW

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
    ;

/* IF_ELSE Statement */

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
INT_CONST:
      NUM_10 { printf("PARSER found - INT\n"); }
    | NUM_16 { printf("PARSER found - INT\n"); }
    ;


REAL_CONST:
      REAL_NUMBER { printf("PARSER found - REAL\n"); }
    | REAL_NUMBER_EXPONENT { printf("PARSER found - REAL_EXP\n"); }
    ;


const:
      INT_CONST
    | REAL_CONST
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
      ARRAY '(' array_list_e ')' { printf("PARSER found Array\n"); }
    | /* Can do with FOR LOOP */

array_list:
      expr_list
    | array
    | expr_list ',' array 
    ;

array_list_e:
      array_list
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
    ;



%%
