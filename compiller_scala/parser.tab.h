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
    NUM_10 = 258,                  /* NUM_10  */
    NUM_16 = 259,                  /* NUM_16  */
    REAL_NUMBER = 260,             /* REAL_NUMBER  */
    REAL_NUMBER_EXPONENT = 261,    /* REAL_NUMBER_EXPONENT  */
    IDENTIFIER = 262,              /* IDENTIFIER  */
    CONST_CHAR = 263,              /* CONST_CHAR  */
    CONST_STRING = 264,            /* CONST_STRING  */
    VAL = 265,                     /* VAL  */
    ELSE = 266,                    /* ELSE  */
    IF = 267,                      /* IF  */
    ELSE_IF = 268,                 /* ELSE_IF  */
    FOR = 269,                     /* FOR  */
    DO = 270,                      /* DO  */
    WHILE = 271,                   /* WHILE  */
    MATCH = 272,                   /* MATCH  */
    CASE = 273,                    /* CASE  */
    KW_TRUE = 274,                 /* KW_TRUE  */
    KW_FALSE = 275,                /* KW_FALSE  */
    KW_NULL = 276,                 /* KW_NULL  */
    EQ = 277,                      /* EQ  */
    NEQ = 278,                     /* NEQ  */
    MORE_OR_EQUAL_OPERATOR = 279,  /* MORE_OR_EQUAL_OPERATOR  */
    LESS_OR_EQUAL_OPERATOR = 280,  /* LESS_OR_EQUAL_OPERATOR  */
    INT_KW = 281,                  /* INT_KW  */
    DOUBLE_KW = 282,               /* DOUBLE_KW  */
    STRING_KW = 283,               /* STRING_KW  */
    CHAR_KW = 284,                 /* CHAR_KW  */
    BOOLEAN_KW = 285,              /* BOOLEAN_KW  */
    ANY_KW = 286,                  /* ANY_KW  */
    TO = 287,                      /* TO  */
    BY = 288,                      /* BY  */
    GENERATOR_OPERATOR = 289,      /* GENERATOR_OPERATOR  */
    RIGHT_ARROW_OPERATOR = 290,    /* RIGHT_ARROW_OPERATOR  */
    ID_COLLECTION = 291,           /* ID_COLLECTION  */
    ARRAY = 292,                   /* ARRAY  */
    LIST = 293,                    /* LIST  */
    VECTOR = 294,                  /* VECTOR  */
    SET = 295                      /* SET  */
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

#line 110 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
