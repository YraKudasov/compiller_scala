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
%token ABSTRACT VAL CASE CATCH CLASS DEF DO ELSE EXTENDS FALSE FOR FINAL FINALLY FOR_SOME IF IMPLICIT IMPORT LAZY MATCH NEW OBJECT OVERRIDE TRAIT TRUE TRY VAR WHILE
%type <int_value> expression
%type <real_value> real_expression

%%


program:
    | program statement
    ;

statement:
      IDENTIFIER '=' expression ';' { printf("Assignment: %s = %lld\n", $1, $3); free($1); }
    | IDENTIFIER '(' ')' ';' { printf("Function call: %s()\n", $1); free($1); }
    | ABSTRACT IDENTIFIER '{' statement '}' { printf("Abstract class: %s\n", $2); free($2); }
    | VAL IDENTIFIER '=' expression ';' { printf("Value declaration: %s = %lld\n", $2, $4); free($2); }
    | CASE expression ':' statement { printf("Case statement\n"); }
    | IF expression '{' statement '}' { printf("If statement\n"); }
    | WHILE expression '{' statement '}' { printf("While loop\n"); }
    | DO '{' statement '}' WHILE expression { printf("Do-while loop\n"); }
    | CATCH '{' statement '}' { printf("Catch block\n"); }
    | CLASS IDENTIFIER '{' statement '}' { printf("Class definition: %s\n", $2); free($2); }
    | DEF IDENTIFIER '(' ')' '{' statement '}' { printf("Function definition: %s\n", $2); free($2); }
    | EXTENDS IDENTIFIER { printf("Extends: %s\n", $2); free($2); }
    | TRUE { printf("True value\n"); }
    | FALSE { printf("False value\n"); }
    | real_expression { printf("Real number: %f\n", $1); }
    | NUM_10 { printf("Decimal number: %lld\n", $1); }
    | NUM_16 { printf("Hexadecimal number: %lld\n", $1); }
    ;

expression:
      NUM_10 { $$ = $1; }
    | NUM_16 { $$ = $1; }
    | IDENTIFIER { $$ = 0; }
    ;

real_expression:
      REAL_NUMBER { $$ = $1; }
    | REAL_NUMBER_EXPONENT { $$ = $1; }
    ;

%%
