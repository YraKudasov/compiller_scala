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
    LOWER_THAN_EXPR = 258,         /* LOWER_THAN_EXPR  */
    UMINUS = 259,                  /* UMINUS  */
    UPLUS = 260,                   /* UPLUS  */
    NUM_10 = 261,                  /* NUM_10  */
    NUM_16 = 262,                  /* NUM_16  */
    REAL_NUMBER = 263,             /* REAL_NUMBER  */
    REAL_NUMBER_EXPONENT = 264,    /* REAL_NUMBER_EXPONENT  */
    IDENTIFIER = 265,              /* IDENTIFIER  */
    CONST_CHAR = 266,              /* CONST_CHAR  */
    CONST_STRING = 267,            /* CONST_STRING  */
    NEWLINE = 268,                 /* NEWLINE  */
    VAL = 269,                     /* VAL  */
    VAR = 270,                     /* VAR  */
    ELSE = 271,                    /* ELSE  */
    IF = 272,                      /* IF  */
    ELSE_IF = 273,                 /* ELSE_IF  */
    FOR = 274,                     /* FOR  */
    DO = 275,                      /* DO  */
    WHILE = 276,                   /* WHILE  */
    MATCH = 277,                   /* MATCH  */
    CASE = 278,                    /* CASE  */
    TRY = 279,                     /* TRY  */
    CATCH = 280,                   /* CATCH  */
    FINALLY = 281,                 /* FINALLY  */
    PRINT = 282,                   /* PRINT  */
    READLINE = 283,                /* READLINE  */
    KW_TRUE = 284,                 /* KW_TRUE  */
    KW_FALSE = 285,                /* KW_FALSE  */
    KW_NULL = 286,                 /* KW_NULL  */
    EQ = 287,                      /* EQ  */
    NEQ = 288,                     /* NEQ  */
    KW_OR = 289,                   /* KW_OR  */
    KW_AND = 290,                  /* KW_AND  */
    MORE_OR_EQUAL_OPERATOR = 291,  /* MORE_OR_EQUAL_OPERATOR  */
    LESS_OR_EQUAL_OPERATOR = 292,  /* LESS_OR_EQUAL_OPERATOR  */
    INT_KW = 293,                  /* INT_KW  */
    DOUBLE_KW = 294,               /* DOUBLE_KW  */
    STRING_KW = 295,               /* STRING_KW  */
    CHAR_KW = 296,                 /* CHAR_KW  */
    BOOLEAN_KW = 297,              /* BOOLEAN_KW  */
    ANY_KW = 298,                  /* ANY_KW  */
    UNIT_KW = 299,                 /* UNIT_KW  */
    TO = 300,                      /* TO  */
    BY = 301,                      /* BY  */
    YIELD = 302,                   /* YIELD  */
    GENERATOR_OPERATOR = 303,      /* GENERATOR_OPERATOR  */
    RIGHT_ARROW_OPERATOR = 304,    /* RIGHT_ARROW_OPERATOR  */
    ID_COLLECTION = 305,           /* ID_COLLECTION  */
    ARRAY = 306,                   /* ARRAY  */
    LIST = 307,                    /* LIST  */
    VECTOR = 308,                  /* VECTOR  */
    SET = 309,                     /* SET  */
    DEF = 310,                     /* DEF  */
    NEW = 311,                     /* NEW  */
    PROTECTED = 312,               /* PROTECTED  */
    PRIVATE = 313,                 /* PRIVATE  */
    CLASS = 314,                   /* CLASS  */
    CLASS_ID = 315,                /* CLASS_ID  */
    EXTENDS = 316                  /* EXTENDS  */
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

#line 131 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
