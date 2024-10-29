%option noyywrap
%option never-interactive
%option c++
%option yylineno

%x CONST_STRING
%x MULTILINE_COMMENT
%x ONELINE_COMMENT
%x CHAR



DIGIT [0-9]
NUM_10 ({DIGIT}(?:_+)?)*{DIGIT}[L]?


HEXIT          [0-9a-fA-F]
NUM_16 0[xX]({HEXIT}(?:_+)?)*{HEXIT}[L]?


REAL_NUMBER                {NUM_10}?\.{NUM_10}|{NUM_10}\.{NUM_10}+|{NUM_10}[FfDd]|{NUM_10}\.{NUM_10}[FfDd]
REAL_NUMBER_EXPONENT       ({REAL_NUMBER}|{NUM_10})[eE][\-+]?{NUM_10}+[fFDd]?

%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include "ParseNumbers.h"
#include "parser.tab.h"
#pragma warning(disable : 4996)
%}

%%

%{
int64_t int_number;
double real_number;
int int_buffer;
char buffer[1000];
char buf_char[2];
%}

abstract { printf("(%s) - Found KW_ABSTRACT\n", yytext); }
val { printf("(%s) - Found KW_VAL\n", yytext); }
case { printf("(%s) - Found KW_CASE\n", yytext); }
catch { printf("(%s) - Found KW_CATCH\n", yytext); }
class { printf("(%s) - Found KW_CLASS\n", yytext); }
def { printf("(%s) - Found KW_DEF\n", yytext); }
do { printf("(%s) - Found KW_do\n", yytext); }
else { printf("(%s) - Found KW_ELSE\n", yytext); }
extends { printf("(%s) - Found KW_EXTENDS\n", yytext); }
false { printf("(%s) - Found KW_FALSE\n", yytext); }
for { printf("(%s) - Found KW_FOR\n", yytext); }
final { printf("(%s) - Found KW_FINAL\n", yytext); }
finally { printf("(%s) - Found KW_FINALLY\n", yytext); }
forSome { printf("(%s) - Found KW_forSome\n", yytext); }
if { printf("(%s) - Found KW_IF\n", yytext); }
implicit { printf("(%s) - Found KW_IMPLICIT\n", yytext); }
import { printf("(%s) - Found KW_IMPORT\n", yytext); }
lazy { printf("(%s) - Found KW_LAZY\n", yytext); }
match { printf("(%s) - Found KW_MATCH\n", yytext); }
new { printf("(%s) - Found KW_NEW\n", yytext); }
null { printf("(%s) - Found KW_NULL\n", yytext); }
object { printf("(%s) - Found KW_OBJECT\n", yytext); }
override { printf("(%s) - Found KW_OVERRIDE\n", yytext); }
package { printf("(%s) - Found KW_PACKAGE\n", yytext); }
private { printf("(%s) - Found KW_PRIVATE\n", yytext); }
protected { printf("(%s) - Found KW_PROTECTED\n", yytext); }
print { printf("(%s) - Found KW_PRINT\n", yytext); }
println { printf("(%s) - Found KW_PRINTLN\n", yytext); }
printf { printf("(%s) - Found KW_PRINTF\n", yytext); }
return { printf("(%s) - Found KW_RETURN\n", yytext); }
sealed { printf("(%s) - Found KW_SEALED\n", yytext); }
super { printf("(%s) - Found KW_SUPER\n", yytext); }
this { printf("(%s) - Found KW_THIS\n", yytext); }
throw { printf("(%s) - Found KW_THROW\n", yytext); }
trait { printf("(%s) - Found KW_TRAIT\n", yytext); }
true { printf("(%s) - Found KW_TRUE\n", yytext); }
try { printf("(%s) - Found KW_TRY\n", yytext); }
type { printf("(%s) - Found KW_TYPE\n", yytext); }
var { printf("(%s) - Found KW_VAR\n", yytext); }
while { printf("(%s) - Found KW_WHILE\n", yytext); }
with { printf("(%s) - Found KW_WITH\n", yytext); }
yield { printf("(%s) - Found KW_YIELD\n", yytext); }


\" {buffer[0]=0; BEGIN(CONST_STRING);}
<CONST_STRING>[^\\\"]+ {strcat(buffer,yytext);}
<CONST_STRING>\\\n[\n\t\r ]* 
<CONST_STRING>\\\\ {strcat(buffer, "\\");}
<CONST_STRING>\\b {strcat(buffer, "\b");}
<CONST_STRING>\\n {strcat(buffer, "\n");}
<CONST_STRING>\\t {strcat(buffer, "\t");}
<CONST_STRING>\\r {strcat(buffer, "\r");}
<CONST_STRING>\\\" {strcat(buffer, "\"");}
<CONST_STRING>\\\' {strcat(buffer, "\'");}
<CONST_STRING>\\u[0-9A-Fa-f]{4} { 
    unsigned int unicode_value = strtol(yytext + 2, NULL, 16); // Преобразуем шестнадцатеричное значение в целое число
    if (unicode_value >= 0 && unicode_value <= 255) { // Проверяем диапазон
        buf_char[0] = (wchar_t)unicode_value; // Присваиваем его буферу
        buf_char[1] = 0; // Завершаем строку
        strcat(buffer, buf_char); // Конкатенируем в буфер
    } else {
        printf("Error: Unicode value is out of range (0000-0255)\n");
    }
}
<CONST_STRING><<EOF>> {printf("(%s) - Found ERROR_STRING\n", buffer); BEGIN(INITIAL);}
<CONST_STRING>\\ {printf("(%s) - Found NOT_ESCAPED_SLASH\n", buffer); BEGIN(INITIAL);}
<CONST_STRING>\" {printf("(%s) - Found CONST_STRING\n", buffer); BEGIN(INITIAL);}

\' {buffer[0]=0; BEGIN(CHAR);}
<CHAR>\\u[0-9A-Fa-f]{4}\' {
    yytext[strlen(yytext)-1] = '\0'; // Удаляем одинарную кавычку в конце
    wchar_t buf_char[1]; // Буфер для хранения символа Unicode
    unsigned int unicode_value = strtol(yytext + 2, NULL, 16); // Преобразуем шестнадцатеричное значение в целое число

    // Проверяем, находится ли значение в диапазоне от 0 до 255
    if (unicode_value >= 0 && unicode_value <= 255) {
        buf_char[0] = (wchar_t)unicode_value; // Присваиваем его буферу
        printf("(%lc) - Found CHAR\n", buf_char[0]); // Выводим символ
    } else {
        printf("Error: Unicode value is out of range (0000-0255)\n");
    }

    BEGIN(INITIAL);
}
<CHAR>[^\\\']+ {strcat(buffer,yytext);}
<CHAR>\\\\ {strcat(buffer, "\\");}
<CHAR>\\b {strcat(buffer, "\b");}
<CHAR>\\n {strcat(buffer, "\n");}
<CHAR>\\t {strcat(buffer, "\t");}
<CHAR>\\r {strcat(buffer, "\r");}
<CHAR>\\\" {strcat(buffer, "\"");}
<CHAR>\\\' {strcat(buffer, "\'");}
<CHAR><<EOF>> {printf("(%s) - Error CHAR\n", buffer); BEGIN(INITIAL);}
<CHAR>\' {
if(strlen(buffer)==1){
printf("(%s) - Found CHAR\n", buffer); BEGIN(INITIAL);
}else{
printf("(%s) - Error CHAR\n", buffer); BEGIN(INITIAL);
}
}

\/\* {buffer[0]=0; BEGIN(MULTILINE_COMMENT);}
<MULTILINE_COMMENT>[^\*\/]+ {strcat(buffer,yytext);}
<MULTILINE_COMMENT>\* {strcat(buffer, "*");}
<MULTILINE_COMMENT>\/ {strcat(buffer, "/");}
<MULTILINE_COMMENT><<EOF>> { printf("(%s) - Error MULTILINE_COMMENT\n", buffer); BEGIN(INITIAL);}
<MULTILINE_COMMENT>\*\/ {printf("(%s) - Found MULTILINE_COMMENT\n", buffer); BEGIN(INITIAL);}

\/\/ {buffer[0]=0; BEGIN(ONELINE_COMMENT);}
<ONELINE_COMMENT>[^\n] {strcat(buffer, yytext);}
<ONELINE_COMMENT>\n {printf("(%s) - Found ONELINE_COMMENT\n", buffer); BEGIN(INITIAL);}
<ONELINE_COMMENT><<EOF>> {printf("(%s) - Found ONELINE_COMMENT\n", buffer); BEGIN(INITIAL);}


\+ { printf("(%s) - Found PLUS_OPERATOR\n", yytext); }
\- { printf("(%s) - Found MINUS_OPERATOR\n", yytext); }
\* { printf("(%s) - Found MUL_OPERATOR\n", yytext); }
\% { printf("(%s) - Found MOD_OPERATOR\n", yytext); }
\%\= { printf("(%s) - Found MOD_ASSIGNMENT_OPERATOR\n", yytext); }
\*\* { printf("(%s) - Found EXP_OPERATOR\n", yytext); }
\*\*\= { printf("(%s) - Found EXP_ASSIGNMENT_OPERATOR\n", yytext); }
\/ { printf("(%s) - Found DIV_OPERATOR\n", yytext); }
\+\= { printf("(%s) - Found PLUS_ASSIGNMENT_OPERATOR\n", yytext); }
\-\= { printf("(%s) - Found MINUS_ASSIGNMENT_OPERATOR\n", yytext); }
\*\= { printf("(%s) - Found MUL_ASSIGNMENT_OPERATOR\n", yytext); }
\/\= { printf("(%s) - Found DIV_ASSIGNMENT_OPERATOR\n", yytext); }
\<= { printf("(%s) - Found LESS_OR_EQUAL_OPERATOR\n", yytext); }
\<\<\= { printf("(%s) - Found LEFTSHIFT_ASSIGNMENT_OPERATOR\n", yytext); }
\>\>\= { printf("(%s) - Found RIGHTSHIFT_ASSIGNMENT_OPERATOR\n", yytext); }
\>= { printf("(%s) - Found MORE_OR_EQUAL_OPERATOR\n", yytext); }
\< { printf("(%s) - Found LESS_OPERATOR\n", yytext); }
\> { printf("(%s) - Found MORE_OPERATOR\n", yytext); }
\!= { printf("(%s) - Found NOT_EQUAL_OPERATOR\n", yytext); }
= { printf("(%s) - Found ASSIGNMENT_OPERATOR\n", yytext); }
\^ { printf("(%s) - Found CIRCUMFLEX\n", yytext); }


== { printf("(%s) - Found EQUAL_OPERATOR\n", yytext); }
\! { printf("(%s) - Found NOT_OPERATOR\n", yytext); }
\|\| { printf("(%s) - Found OR_OPERATOR\n", yytext); }
\&\& { printf("(%s) - Found AND_OPERATOR\n", yytext); }

\&\= { printf("(%s) - Found BITWISE_AND_ASSIGNMENT_OPERATOR\n", yytext); }
\^\= { printf("(%s) - Found BITWISE_EX_OR_ASSIGNMENT_OPERATOR\n", yytext); }
\|\= { printf("(%s) - Found BITWISE_IN_OR_ASSIGNMENT_OPERATOR\n", yytext); }
\| { printf("(%s) - Found BITWISE_OR_OPERATOR\n", yytext); }
\<\< { printf("(%s) - Found BITWISE_LEFTSHIFT_OPERATOR\n", yytext); }
\>\> { printf("(%s) - Found BITWISE_RIGHTSHIFT_OPERATOR\n", yytext); }
\~ { printf("(%s) - Found BITWISE_onesCOMPLEMENT_OPERATOR\n", yytext); }
\>\>\> { printf("(%s) - Found BITWISE_RIGHTSHIF_ZERO_OPERATOR\n", yytext); }

\-\> { printf("(%s) - Found TUPLE\n", yytext); }

\[ { printf("(%s) - Found SQUARE_BRACKET\n", yytext); }
\] { printf("(%s) - Found SQUARE_BRACKET\n", yytext); }
\( { printf("(%s) - Found ROUND_BRACKET\n", yytext); return '(';}
\) { printf("(%s) - Found ROUND_BRACKET\n", yytext); return ')';}
\{ { printf("(%s) - Found BRACE\n", yytext); }
\} { printf("(%s) - Found BRACE\n", yytext); }
\; { printf("(%s) - Found SEMICOLON\n", yytext); return ';';}
\, { printf("(%s) - Found COMMA\n", yytext); }
\: { printf("(%s) - Found COLON\n", yytext); }
\. { printf("(%s) - Found DOT\n", yytext); }
\& { printf("(%s) - Found AMPERSAND\n", yytext); }




{NUM_10} {
    char* number = strdup(yytext);
    
    char* end = number + strlen(number) - 1;
    while (end > number && isspace((unsigned char)*end)) {
        end--;
    }
    
    *(end + 1) = '\0';

    if (strlen(number) == 0) {
        fprintf(stderr, "Error: Unable to parse number from input: '%s'\n", yytext);
    } else {
        int64_t int_number; 
        parse_integer(&int_number, number, 10); 
        printf("Found decimal number: %lld\n", int_number); 
    }

    free(number); 
}


{NUM_16} {
    parse_integer(&int_number, yytext, 16);
    printf("Line %d: found hex number: %d\n", yylineno, int_number);
}


{REAL_NUMBER} {
    parse_real(&real_number, yytext);
    printf("Line %d: found real number: %f\n", yylineno, real_number);
}

{REAL_NUMBER_EXPONENT} {
    parse_real(&real_number, yytext);
    printf("Line %d: found real exponent number: %f\n", yylineno, real_number);
}



[a-zA-Z_][a-zA-Z0-9_]* { 
    yylval.str_value = strdup(yytext);
    printf("(%s) - Found IDENTIFIER\n", yytext); 
    return IDENTIFIER;
}


[0-9]*[a-zA-Z_][a-zA-Z0-9_]* { printf("(%s) - Error IDENTIFIER\n", yytext); }

[ \t]+  {}
\n {}
.  {}
%%


