%option noyywrap
%option never-interactive
%option nounistd
%option c++

%x CONST_STRING
%x MULTILINE_COMMENT
%x ONELINE_COMMENT
%x CHAR

DIGIT [0-9]

%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
char buffer[1000];

%}

%%

%{
int remove_char(char *s, int pos);
void remove_underline();
void remove_f64();
void remove_i32();
int int_buffer;
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
<CONST_STRING>\\\n[\n\t\r ]* {strcat(buffer, "");}
<CONST_STRING>\\\\ {strcat(buffer, "\\");}
<CONST_STRING>\\n {strcat(buffer, "\n");}
<CONST_STRING>\\t {strcat(buffer, "\t");}
<CONST_STRING>\\0 {strcat(buffer, "\0");}
<CONST_STRING>\\r {strcat(buffer, "\r");}
<CONST_STRING>\\\" {strcat(buffer, "\"");}
<CONST_STRING>\\\' {strcat(buffer, "\'");}
<CONST_STRING>\\x[0-7][0-9A-Fa-f] { buf_char[0] = strtol(yytext+2, NULL, 16); buf_char[1] = 0; strcat(buffer, buf_char);}
<CONST_STRING><<EOF>> {printf("(%s) - Found ERROR_STRING\n", buffer); BEGIN(INITIAL);}
<CONST_STRING>\\ {printf("(%s) - Found NOT_ESCAPED_SLASH\n", buffer); BEGIN(INITIAL);}
<CONST_STRING>\" {printf("(%s) - Found CONST_STRING\n", buffer); BEGIN(INITIAL);}

\' {buffer[0]=0; BEGIN(CHAR);}
<CHAR>\\x[0-7][0-9A-Fa-f]\' { yytext[strlen(yytext)-1] = '\0'; buf_char[0] = strtol(yytext+2, NULL, 16); printf( "(%c) - Found CHAR\n", buf_char[0] ); BEGIN(INITIAL);}
<CHAR>[^\\\']+ {strcat(buffer,yytext);}
<CHAR>\\\\ {strcat(buffer, "\\");}
<CHAR>\\n {strcat(buffer, "\n");}
<CHAR>\\t {strcat(buffer, "\t");}
<CHAR>\\0 {strcat(buffer, "\0");}
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
<MULTILINE_COMMENT><<EOF>> { printf("(%s) - Error COMMENT\n", buffer); BEGIN(INITIAL);}
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
\( { printf("(%s) - Found ROUND_BRACKET\n", yytext); }
\) { printf("(%s) - Found ROUND_BRACKET\n", yytext); }
\{ { printf("(%s) - Found BRACE\n", yytext); }
\} { printf("(%s) - Found BRACE\n", yytext); }
\; { printf("(%s) - Found SEMICOLON\n", yytext); }
\, { printf("(%s) - Found COMMA\n", yytext); }
\: { printf("(%s) - Found COLON\n", yytext); }
\. { printf("(%s) - Found DOT\n", yytext); }
\& { printf("(%s) - Found AMPERSAND\n", yytext); }

[a-zA-Z_][a-zA-Z0-9_]* { printf("(%s) - Found IDENTIFIER\n", yytext); }

{DIGIT}+(_+{DIGIT}*)*(i32)? {
remove_underline();
remove_i32();
printf("(%d) - Found DECIMAL_INTEGER\n", atoi(buffer));
}

([0-9]_*)+(\.([0-9]_*))?[Ee][+-]?([0-9]|_)*[0-9]([0-9]|_)*(f64)? {
remove_f64();
remove_underline();
printf("(%f) - Found FLOAT_CONST\n", atof(buffer));
}

([0-9]_*)+(f64|\.(([0-9]_*)+(f64)?)) {
remove_f64();
remove_underline();
printf("(%f) - Found FLOAT_CONST\n", atof(buffer));
}

0o(_*[0-7])+(i32)? {
remove_underline();
remove_i32();
printf("(%d) - Found OCTAL_INTEGER\n", strtol(buffer+2, NULL, 8));
}

0x(_*[0-9A-Fa-f])+(i32)? {
remove_underline();
remove_i32();
printf("(%d) - Found HEXADECIMAL_INTEGER\n", strtol(buffer+2, NULL, 16));
}

0b(_*[0-1])+(i32)? {
remove_underline();
remove_i32();
printf("(%d) - Found BINARY_INTEGER\n", strtol(buffer+2, NULL, 2));
}

[0-9]*[a-zA-Z_][a-zA-Z0-9_]* { printf("(%s) - Error IDENTIFIER\n", yytext); }

" " {}
\n {}

%%

int remove_char(char *s, int pos)
{
  int length = strlen(s);

  if (pos >= length) return 0;

  for (int i = pos; i < length; i++)
    s[i] = s[i + 1];

  return 1;
}

void remove_underline()
{
    strcpy(buffer, yytext);
    char* ptr = strchr(buffer, '_');
    while (ptr != NULL){
        ptr = strchr(buffer, '_');
        int pos = ptr - buffer;
        remove_char(buffer, pos);
    }
}

void remove_f64()
{
    strcpy(buffer, yytext);
    char* ptr = strstr(buffer, "f64");
    if (ptr != NULL){
        int pos = ptr - buffer;
        buffer[pos] = '\0';
    }
}

void remove_i32()
{
    strcpy(buffer, yytext);
    char* ptr = strstr(buffer, "i32");
        if (ptr != NULL){
            int pos = ptr - buffer;
            buffer[pos] = '\0';
        }
}

int main()
{
    return 1;
}