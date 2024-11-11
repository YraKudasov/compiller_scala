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


%token <int_value> NUM_10 NUM_16
%token <real_value> REAL_NUMBER REAL_NUMBER_EXPONENT
%token <str_value> IDENTIFIER
%token ABSTRACT VAL CASE CATCH CLASS DEF DO ELSE EXTENDS FALSE FOR FINAL FINALLY FOR_SOME IF IMPLICIT IMPORT LAZY MATCH NEW OBJECT OVERRIDE TRAIT TRUE TRY VAR WHILE PLUS_OPERATOR
%token MORE_OR_EQUAL_OPERATOR LESS_OR_EQUAL_OPERATOR

%%


program:
    | program statement
    ;

statement_list:
      statement
    | statement_list statement
    ;


statement:
      IDENTIFIER '=' expr ';' { printf("Assignment:\n"); }
    | IDENTIFIER '(' ')' ';' { printf("Function call:\n"); }
    | ABSTRACT IDENTIFIER '{' statement '}' { printf("Abstract class:\n"); }
    | VAL IDENTIFIER '=' expr ';' { printf("Value declaration:\n"); }
    | CASE expr ':' statement { printf("Case statement\n"); }
    | IF expr '{' statement '}' { printf("If statement\n"); }
    | WHILE expr '{' statement '}' { printf("While loop\n"); }
    | DO '{' statement '}' WHILE expr { printf("Do-while loop\n"); }
    | CATCH '{' statement '}' { printf("Catch block\n"); }
    | CLASS IDENTIFIER '{' statement '}' { printf("Class definition\n"); }
    | DEF IDENTIFIER '(' ')' '{' statement '}' { printf("Function definition\n"); }
    | EXTENDS IDENTIFIER { printf("Extends: \n"); }
    ;


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


expr:
      numbers
    | IDENTIFIER
    | expr '+' expr { printf("PARSER found expr - expr + expr\n"); }
    | expr '-' expr { printf("PARSER found expr - expr - expr\n"); }
    | expr '/' expr { printf("PARSER found expr - expr / expr\n"); }
    | expr '*' expr { printf("PARSER found expr - expr * expr\n"); }
    | expr '%' expr { printf("PARSER found expr - expr % expr\n"); }
    | expr '&' expr {printf("PARSER found expr - expr && expr\n"); }
    | expr '|' expr {printf("PARSER found expr - expr | expr\n"); }
    | expr '>' expr {printf("PARSER found expr - expr > expr\n"); }
    | expr '<' expr {printf("PARSER found expr - expr < expr\n"); }
    | expr MORE_OR_EQUAL_OPERATOR expr {printf("PARSER found expr - expr >= expr\n"); }
    | expr LESS_OR_EQUAL_OPERATOR expr {printf("PARSER found expr - expr <= expr\n"); }
    | func_call {printf("PARSER found expr - func_call\n"); }
    ;


%%
