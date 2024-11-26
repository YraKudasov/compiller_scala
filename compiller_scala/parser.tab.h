/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    UMINUS = 258,                  /* UMINUS  */
    UPLUS = 259,                   /* UPLUS  */
    NUM_10 = 260,                  /* NUM_10  */
    NUM_16 = 261,                  /* NUM_16  */
    REAL_NUMBER = 262,             /* REAL_NUMBER  */
    REAL_NUMBER_EXPONENT = 263,    /* REAL_NUMBER_EXPONENT  */
    IDENTIFIER = 264,              /* IDENTIFIER  */
    CONST_CHAR = 265,              /* CONST_CHAR  */
    CONST_STRING = 266,            /* CONST_STRING  */
    NEWLINE = 267,                 /* NEWLINE  */
    VAL = 268,                     /* VAL  */
    VAR = 269,                     /* VAR  */
    ELSE = 270,                    /* ELSE  */
    IF = 271,                      /* IF  */
    ELSE_IF = 272,                 /* ELSE_IF  */
    FOR = 273,                     /* FOR  */
    DO = 274,                      /* DO  */
    WHILE = 275,                   /* WHILE  */
    MATCH = 276,                   /* MATCH  */
    CASE = 277,                    /* CASE  */
    TRY = 278,                     /* TRY  */
    CATCH = 279,                   /* CATCH  */
    FINALLY = 280,                 /* FINALLY  */
    KW_TRUE = 281,                 /* KW_TRUE  */
    KW_FALSE = 282,                /* KW_FALSE  */
    KW_NULL = 283,                 /* KW_NULL  */
    EQ = 284,                      /* EQ  */
    NEQ = 285,                     /* NEQ  */
    KW_OR = 286,                   /* KW_OR  */
    KW_AND = 287,                  /* KW_AND  */
    MORE_OR_EQUAL_OPERATOR = 288,  /* MORE_OR_EQUAL_OPERATOR  */
    LESS_OR_EQUAL_OPERATOR = 289,  /* LESS_OR_EQUAL_OPERATOR  */
    INT_KW = 290,                  /* INT_KW  */
    DOUBLE_KW = 291,               /* DOUBLE_KW  */
    STRING_KW = 292,               /* STRING_KW  */
    CHAR_KW = 293,                 /* CHAR_KW  */
    BOOLEAN_KW = 294,              /* BOOLEAN_KW  */
    ANY_KW = 295,                  /* ANY_KW  */
    UNIT_KW = 296,                 /* UNIT_KW  */
    TO = 297,                      /* TO  */
    BY = 298,                      /* BY  */
    YIELD = 299,                   /* YIELD  */
    GENERATOR_OPERATOR = 300,      /* GENERATOR_OPERATOR  */
    RIGHT_ARROW_OPERATOR = 301,    /* RIGHT_ARROW_OPERATOR  */
    ID_COLLECTION = 302,           /* ID_COLLECTION  */
    ARRAY = 303,                   /* ARRAY  */
    LIST = 304,                    /* LIST  */
    VECTOR = 305,                  /* VECTOR  */
    SET = 306,                     /* SET  */
    DEF = 307,                     /* DEF  */
    CLASS = 308,                   /* CLASS  */
    CLASS_ID = 309                 /* CLASS_ID  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "parser.y"

    int64_t int_value;
    double real_value;
    char* str_value;

#line 124 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
