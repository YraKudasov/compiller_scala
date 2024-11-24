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


%right '='
%left '|'
%left '&'
%left EQ NEQ
%left '>' '<' MORE_OR_EQUAL_OPERATOR LESS_OR_EQUAL_OPERATOR
%left '+' '-'
%left '*' '/' '%'
%left '(' ')' '[' ']'




%type <stmt> statement statement_list statement_list_e if_else_stmt else_stmt for_stmt while_stmt do_while_stmt
%type <expr> expr expr_list expr_list_e match



%token <int_value> NUM_10 NUM_16
%token <real_value> REAL_NUMBER REAL_NUMBER_EXPONENT
%token <str_value> IDENTIFIER CONST_CHAR CONST_STRING
%token NEWLINE
%token VAL VAR ELSE IF ELSE_IF FOR DO WHILE MATCH CASE 
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
      statement_list_e
    ;

/*************************************************************/

/* Statements */
statement_list:
      statement ';'
    | statement NEWLINE
    | statement_list statement ';'
    | statement_list statement NEWLINE
    ;

statement_list_e:
      statement_list
    | /* nothing */  { printf("PARSER found statement_list_e - nothing\n"); }
    ;

statement:
      IDENTIFIER '=' expr ';' { printf("Assignment:\n"); }
    | VAL IDENTIFIER '=' expr ';' { printf("Value declaration:\n"); }
    | VAR IDENTIFIER '=' expr ';' { printf("Variable declaration:\n"); }
    | if_else_stmt { printf("IF_ELSE construction:\n"); }
    | for_stmt { printf("FOR_STMT construction:\n"); }
    | while_stmt { printf("WHILE_STMT construction:\n"); }
    | do_while_stmt { printf("DO_WHILE_STMT construction:\n"); }
    | '{' statement_list_e '}'
    ;

/*..................................................... IF-ELSE................................................... */


if_else_stmt:
      IF expr statement else_stmt
    ;

else_stmt:
      ELSE statement
    ;


if_condition_list:
      IF expr
    | if_condition_list IF expr
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
        WHILE '(' expr ')' '{' statement_list '}'
        ;

do_while_stmt:
        DO '{' statement_list '}' WHILE'(' expr ')'
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
        | int_literal IF expr
        | IDENTIFIER
        | IDENTIFIER IF expr
        | KW_TRUE
        | KW_FALSE
        | KW_TRUE IF expr
        | KW_FALSE IF expr
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
      const {printf("PARSER found expr - const\n"); }
    | IDENTIFIER {printf("PARSER found expr - IDENTIFIER\n"); }
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
    | func_call { printf("PARSER found expr - func_call\n"); }
    | if_else_stmt { printf("PARSER found expr - if_else_stmt\n"); }
    | for_stmt { printf("PARSER found expr - for_stmt\n"); }
    | match { printf("PARSER found expr - match\n"); }
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
    | array
    | list
    | vector
    | set
    ;


/* Function call */
func_call:
      IDENTIFIER '(' ')' { printf("Function call: NO PARAMS\n"); }
    | IDENTIFIER '(' expr_list ')' { printf("Function call: WITH PARAMS\n"); }
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

massive_list:
      expr_list 
    ;

massive_list_e:
      massive_list
    | /* nothing */
    ;


/* Array */
array:
      ARRAY '(' massive_list_e ')' { printf("PARSER found Array\n"); }
      ;


/* List */
list:
      LIST '(' massive_list_e ')' { printf("PARSER found List\n"); }
    ;


 /* Vector */
vector:
      VECTOR '(' massive_list_e ')' { printf("PARSER found Vector\n"); }
    ;


/* Set */
set:
      SET '(' massive_list_e ')' { printf("PARSER found Set\n"); }
    ;



%%
