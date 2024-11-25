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
%nonassoc UMINUS UPLUS
%left '*' '/' '%'
%left '(' ')' '[' ']'




%type <stmt> statement statement_list statement_list_e if_else_stmt else_stmt for_stmt while_stmt do_while_stmt
%type <expr> expr expr_list expr_list_e match



%token <int_value> NUM_10 NUM_16
%token <real_value> REAL_NUMBER REAL_NUMBER_EXPONENT
%token <str_value> IDENTIFIER CONST_CHAR CONST_STRING
%token NEWLINE
%token VAL VAR ELSE IF ELSE_IF FOR DO WHILE MATCH CASE  TRY CATCH FINALLY
%token KW_TRUE KW_FALSE KW_NULL
%token EQ NEQ
%token MORE_OR_EQUAL_OPERATOR LESS_OR_EQUAL_OPERATOR
%token INT_KW DOUBLE_KW STRING_KW CHAR_KW BOOLEAN_KW ANY_KW 
%token TO BY YIELD
%token GENERATOR_OPERATOR RIGHT_ARROW_OPERATOR /* <- | => */
%token ID_COLLECTION
%token ARRAY LIST VECTOR SET
%token DEF
%token CLASS CLASS_ID 

%%

/*************************************************************/

/* Program description */
program:
      statement_expr_list_e
    ;

/*************************************************************/

/*.....................................................CLASSES ÄÎÄÅËÀÒÜ................................................... */
class_body:
    '{'  '}'

class_header:
    CLASS CLASS_ID '(' class_params ')'
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

    

/* Statements */
statement_expr_list:
      statement
    | expr
    | statement_expr_list statement
    | statement_expr_list expr
    | statement_expr_list ';'
    | statement_expr_list NEWLINE
    ;

statement_expr_list_e:
      statement_expr_list
    | /* nothing */  { printf("PARSER found statement_list_e - nothing\n"); }
    ;

statement:
      VAL IDENTIFIER '=' expr  { printf("Value declaration:\n"); }
    | VAR IDENTIFIER '=' expr  { printf("Variable declaration:\n"); }
    | DEF IDENTIFIER 
    ;



/*..................................................... IF-ELSE................................................... */


if_else_expr:
      IF '(' expr ')' expr else_expr
    ;

else_expr:
      ELSE expr
    ;

if_condition_list:
      IF expr
    | if_condition_list IF expr
    | if_condition_list ';' IF expr 
    | if_condition_list NEWLINE
    ;


/*..................................................... FOR................................................... */

for_expr:
          FOR '(' for_params ')' YIELD expr
        | FOR '{'for_multy_list'}' YIELD expr
        | FOR '{' for_params if_condition_list '}' YIELD expr
        | FOR '(' for_params ')' expr { printf("FOR LOOP\n"); }
        | FOR '{'for_multy_list'}' expr { printf("FOR MULTY LOOP\n"); }
        | FOR '{' for_params if_condition_list '}' expr { printf("FOR LOOP: multy with IF_STMT\n"); }
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
        | num_const MATCH '{' case_list '}'
        ;


case_condition:
          const
        | const IF expr
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
        | case_list CASE case_condition RIGHT_ARROW_OPERATOR expr
        | case_list NEWLINE
        | case_list ';'
        ;
            
/*..................................................... TRY/CATCH/FINALLY................................................... */

try_expr:
          TRY'{' expr '}' catch
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
    | expr '||' expr { printf("PARSER found expr - expr || expr\n"); }
    | expr '&&' expr { printf("PARSER found expr - expr && expr\n"); }
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
      IDENTIFIER '(' ')' { printf("Function call: NO PARAMS\n"); }
    | IDENTIFIER '(' expr_list ')' { printf("Function call: WITH PARAMS\n"); }
    ;

params:
      IDENTIFIER ':' type
    | params ',' IDENTIFIER ':' type
    | /* nothing */

func:
      '(params)' RIGHT_ARROW_OPERATOR expr
    | '(params)' NEWLINE RIGHT_ARROW_OPERATOR expr
    | '(params)' RIGHT_ARROW_OPERATOR NEWLINE expr
    | '(params)' NEWLINE RIGHT_ARROW_OPERATOR NEWLINE expr
    
    ;

method:
     DEF '('params')' 



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
