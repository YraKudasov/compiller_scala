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
# define YYDEBUG 1
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
    ENDL = 258,                    /* ENDL  */
    LOWER_THAN_EXPR = 259,         /* LOWER_THAN_EXPR  */
    UMINUS = 260,                  /* UMINUS  */
    UPLUS = 261,                   /* UPLUS  */
    NUM_10 = 262,                  /* NUM_10  */
    NUM_16 = 263,                  /* NUM_16  */
    REAL_NUMBER = 264,             /* REAL_NUMBER  */
    REAL_NUMBER_EXPONENT = 265,    /* REAL_NUMBER_EXPONENT  */
    IDENTIFIER = 266,              /* IDENTIFIER  */
    CONST_CHAR = 267,              /* CONST_CHAR  */
    CONST_STRING = 268,            /* CONST_STRING  */
    NEWLINE = 269,                 /* NEWLINE  */
    VAL = 270,                     /* VAL  */
    VAR = 271,                     /* VAR  */
    ELSE = 272,                    /* ELSE  */
    IF = 273,                      /* IF  */
    FOR = 274,                     /* FOR  */
    DO = 275,                      /* DO  */
    WHILE = 276,                   /* WHILE  */
    MATCH = 277,                   /* MATCH  */
    CASE = 278,                    /* CASE  */
    PRINTLN = 279,                 /* PRINTLN  */
    READLINE = 280,                /* READLINE  */
    ARRAY = 281,                   /* ARRAY  */
    OVERRIDE = 282,                /* OVERRIDE  */
    KW_TRUE = 283,                 /* KW_TRUE  */
    KW_FALSE = 284,                /* KW_FALSE  */
    KW_NULL = 285,                 /* KW_NULL  */
    EQ = 286,                      /* EQ  */
    NEQ = 287,                     /* NEQ  */
    KW_OR = 288,                   /* KW_OR  */
    KW_AND = 289,                  /* KW_AND  */
    MORE_OR_EQUAL_OPERATOR = 290,  /* MORE_OR_EQUAL_OPERATOR  */
    LESS_OR_EQUAL_OPERATOR = 291,  /* LESS_OR_EQUAL_OPERATOR  */
    INT_KW = 292,                  /* INT_KW  */
    DOUBLE_KW = 293,               /* DOUBLE_KW  */
    STRING_KW = 294,               /* STRING_KW  */
    CHAR_KW = 295,                 /* CHAR_KW  */
    BOOLEAN_KW = 296,              /* BOOLEAN_KW  */
    ANY_KW = 297,                  /* ANY_KW  */
    UNIT_KW = 298,                 /* UNIT_KW  */
    TO = 299,                      /* TO  */
    BY = 300,                      /* BY  */
    YIELD = 301,                   /* YIELD  */
    GENERATOR_OPERATOR = 302,      /* GENERATOR_OPERATOR  */
    RIGHT_ARROW_OPERATOR = 303,    /* RIGHT_ARROW_OPERATOR  */
    ID_COLLECTION = 304,           /* ID_COLLECTION  */
    DEF = 305,                     /* DEF  */
    NEW = 306,                     /* NEW  */
    PROTECTED = 307,               /* PROTECTED  */
    PRIVATE = 308,                 /* PRIVATE  */
    CLASS = 309,                   /* CLASS  */
    EXTENDS = 310,                 /* EXTENDS  */
    ABSTRACT = 311,                /* ABSTRACT  */
    NOT = 312                      /* NOT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 45 "parser.y"

    int int_value;
    double real_value;
    char* str_value;
    struct Json *tree;

#line 128 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
typedef struct LOCATION YYLTYPE;


extern YYSTYPE yylval;
extern YYLTYPE yylloc;

int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
