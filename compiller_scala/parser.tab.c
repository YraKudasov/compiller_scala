/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "./ast.h"
#include "./strbuf.h"

#include "FlexLexer.h"
extern int yylex();
extern int yylineno;
Json *found_classes = NULL;
void yyerror(const char *str);
struct LOCATION
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
    struct LOCATION current_node_loc;
    #define YYLLOC_DEFAULT(Current, Rhs, N)\
        do {\
            if (N) {\
                (Current).first_line = YYRHSLOC (Rhs, 1).first_line;\
                (Current).first_column = YYRHSLOC (Rhs, 1).first_column;\
                (Current).last_line = YYRHSLOC (Rhs, N).last_line;\
                (Current).last_column  = YYRHSLOC (Rhs, N).last_column;\
            }\
            else {\
                (Current).first_line = (Current).last_line = YYRHSLOC (Rhs, 0).last_line;\
                (Current).first_column = (Current).last_column = YYRHSLOC (Rhs, 0).last_column;\
            }\
            current_node_loc = (Current);\
        } while (0)



#line 110 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif


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
    EXPR = 260,                    /* EXPR  */
    UMINUS = 261,                  /* UMINUS  */
    UPLUS = 262,                   /* UPLUS  */
    NUM_10 = 263,                  /* NUM_10  */
    NUM_16 = 264,                  /* NUM_16  */
    REAL_NUMBER = 265,             /* REAL_NUMBER  */
    REAL_NUMBER_EXPONENT = 266,    /* REAL_NUMBER_EXPONENT  */
    IDENTIFIER = 267,              /* IDENTIFIER  */
    CONST_CHAR = 268,              /* CONST_CHAR  */
    CONST_STRING = 269,            /* CONST_STRING  */
    NEWLINE = 270,                 /* NEWLINE  */
    VAL = 271,                     /* VAL  */
    VAR = 272,                     /* VAR  */
    ELSE = 273,                    /* ELSE  */
    IF = 274,                      /* IF  */
    FOR = 275,                     /* FOR  */
    DO = 276,                      /* DO  */
    WHILE = 277,                   /* WHILE  */
    MATCH = 278,                   /* MATCH  */
    CASE = 279,                    /* CASE  */
    PRINTLN = 280,                 /* PRINTLN  */
    READLINE = 281,                /* READLINE  */
    ARRAY = 282,                   /* ARRAY  */
    OVERRIDE = 283,                /* OVERRIDE  */
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
    DEF = 306,                     /* DEF  */
    NEW = 307,                     /* NEW  */
    PROTECTED = 308,               /* PROTECTED  */
    PRIVATE = 309,                 /* PRIVATE  */
    CLASS = 310,                   /* CLASS  */
    EXTENDS = 311,                 /* EXTENDS  */
    ABSTRACT = 312,                /* ABSTRACT  */
    NOT = 313,                     /* NOT  */
    CASE_PATTERN = 314             /* CASE_PATTERN  */
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

#line 223 "parser.tab.c"

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



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ENDL = 3,                       /* ENDL  */
  YYSYMBOL_LOWER_THAN_EXPR = 4,            /* LOWER_THAN_EXPR  */
  YYSYMBOL_EXPR = 5,                       /* EXPR  */
  YYSYMBOL_6_ = 6,                         /* ','  */
  YYSYMBOL_7_ = 7,                         /* '='  */
  YYSYMBOL_8_ = 8,                         /* '|'  */
  YYSYMBOL_9_ = 9,                         /* '&'  */
  YYSYMBOL_10_ = 10,                       /* '>'  */
  YYSYMBOL_11_ = 11,                       /* '<'  */
  YYSYMBOL_12_ = 12,                       /* ':'  */
  YYSYMBOL_13_ = 13,                       /* '+'  */
  YYSYMBOL_14_ = 14,                       /* '-'  */
  YYSYMBOL_15_ = 15,                       /* '*'  */
  YYSYMBOL_16_ = 16,                       /* '/'  */
  YYSYMBOL_17_ = 17,                       /* '%'  */
  YYSYMBOL_UMINUS = 18,                    /* UMINUS  */
  YYSYMBOL_UPLUS = 19,                     /* UPLUS  */
  YYSYMBOL_20_ = 20,                       /* '('  */
  YYSYMBOL_21_ = 21,                       /* ')'  */
  YYSYMBOL_22_ = 22,                       /* '['  */
  YYSYMBOL_23_ = 23,                       /* ']'  */
  YYSYMBOL_24_ = 24,                       /* '.'  */
  YYSYMBOL_NUM_10 = 25,                    /* NUM_10  */
  YYSYMBOL_NUM_16 = 26,                    /* NUM_16  */
  YYSYMBOL_REAL_NUMBER = 27,               /* REAL_NUMBER  */
  YYSYMBOL_REAL_NUMBER_EXPONENT = 28,      /* REAL_NUMBER_EXPONENT  */
  YYSYMBOL_IDENTIFIER = 29,                /* IDENTIFIER  */
  YYSYMBOL_CONST_CHAR = 30,                /* CONST_CHAR  */
  YYSYMBOL_CONST_STRING = 31,              /* CONST_STRING  */
  YYSYMBOL_NEWLINE = 32,                   /* NEWLINE  */
  YYSYMBOL_VAL = 33,                       /* VAL  */
  YYSYMBOL_VAR = 34,                       /* VAR  */
  YYSYMBOL_ELSE = 35,                      /* ELSE  */
  YYSYMBOL_IF = 36,                        /* IF  */
  YYSYMBOL_FOR = 37,                       /* FOR  */
  YYSYMBOL_DO = 38,                        /* DO  */
  YYSYMBOL_WHILE = 39,                     /* WHILE  */
  YYSYMBOL_MATCH = 40,                     /* MATCH  */
  YYSYMBOL_CASE = 41,                      /* CASE  */
  YYSYMBOL_PRINTLN = 42,                   /* PRINTLN  */
  YYSYMBOL_READLINE = 43,                  /* READLINE  */
  YYSYMBOL_ARRAY = 44,                     /* ARRAY  */
  YYSYMBOL_OVERRIDE = 45,                  /* OVERRIDE  */
  YYSYMBOL_KW_TRUE = 46,                   /* KW_TRUE  */
  YYSYMBOL_KW_FALSE = 47,                  /* KW_FALSE  */
  YYSYMBOL_KW_NULL = 48,                   /* KW_NULL  */
  YYSYMBOL_EQ = 49,                        /* EQ  */
  YYSYMBOL_NEQ = 50,                       /* NEQ  */
  YYSYMBOL_KW_OR = 51,                     /* KW_OR  */
  YYSYMBOL_KW_AND = 52,                    /* KW_AND  */
  YYSYMBOL_MORE_OR_EQUAL_OPERATOR = 53,    /* MORE_OR_EQUAL_OPERATOR  */
  YYSYMBOL_LESS_OR_EQUAL_OPERATOR = 54,    /* LESS_OR_EQUAL_OPERATOR  */
  YYSYMBOL_INT_KW = 55,                    /* INT_KW  */
  YYSYMBOL_DOUBLE_KW = 56,                 /* DOUBLE_KW  */
  YYSYMBOL_STRING_KW = 57,                 /* STRING_KW  */
  YYSYMBOL_CHAR_KW = 58,                   /* CHAR_KW  */
  YYSYMBOL_BOOLEAN_KW = 59,                /* BOOLEAN_KW  */
  YYSYMBOL_ANY_KW = 60,                    /* ANY_KW  */
  YYSYMBOL_UNIT_KW = 61,                   /* UNIT_KW  */
  YYSYMBOL_TO = 62,                        /* TO  */
  YYSYMBOL_BY = 63,                        /* BY  */
  YYSYMBOL_YIELD = 64,                     /* YIELD  */
  YYSYMBOL_GENERATOR_OPERATOR = 65,        /* GENERATOR_OPERATOR  */
  YYSYMBOL_RIGHT_ARROW_OPERATOR = 66,      /* RIGHT_ARROW_OPERATOR  */
  YYSYMBOL_ID_COLLECTION = 67,             /* ID_COLLECTION  */
  YYSYMBOL_DEF = 68,                       /* DEF  */
  YYSYMBOL_NEW = 69,                       /* NEW  */
  YYSYMBOL_PROTECTED = 70,                 /* PROTECTED  */
  YYSYMBOL_PRIVATE = 71,                   /* PRIVATE  */
  YYSYMBOL_CLASS = 72,                     /* CLASS  */
  YYSYMBOL_EXTENDS = 73,                   /* EXTENDS  */
  YYSYMBOL_ABSTRACT = 74,                  /* ABSTRACT  */
  YYSYMBOL_NOT = 75,                       /* NOT  */
  YYSYMBOL_CASE_PATTERN = 76,              /* CASE_PATTERN  */
  YYSYMBOL_77_ = 77,                       /* '{'  */
  YYSYMBOL_78_ = 78,                       /* '}'  */
  YYSYMBOL_79_ = 79,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 80,                  /* $accept  */
  YYSYMBOL_program = 81,                   /* program  */
  YYSYMBOL_class = 82,                     /* class  */
  YYSYMBOL_class_header = 83,              /* class_header  */
  YYSYMBOL_abstract_class_header = 84,     /* abstract_class_header  */
  YYSYMBOL_case_class_header = 85,         /* case_class_header  */
  YYSYMBOL_class_params = 86,              /* class_params  */
  YYSYMBOL_class_params_e = 87,            /* class_params_e  */
  YYSYMBOL_create_instance_class = 88,     /* create_instance_class  */
  YYSYMBOL_visibility_modifier = 89,       /* visibility_modifier  */
  YYSYMBOL_inheritance = 90,               /* inheritance  */
  YYSYMBOL_statement_expr_list = 91,       /* statement_expr_list  */
  YYSYMBOL_statement_expr_list_e = 92,     /* statement_expr_list_e  */
  YYSYMBOL_statement = 93,                 /* statement  */
  YYSYMBOL_if_else_expr = 94,              /* if_else_expr  */
  YYSYMBOL_for_expr = 95,                  /* for_expr  */
  YYSYMBOL_96_1 = 96,                      /* $@1  */
  YYSYMBOL_generators_and_conditions_parentheses_List = 97, /* generators_and_conditions_parentheses_List  */
  YYSYMBOL_generators_and_conditions_curly_braces_List = 98, /* generators_and_conditions_curly_braces_List  */
  YYSYMBOL_while_expr = 99,                /* while_expr  */
  YYSYMBOL_do_while_expr = 100,            /* do_while_expr  */
  YYSYMBOL_match_expr = 101,               /* match_expr  */
  YYSYMBOL_case_condition = 102,           /* case_condition  */
  YYSYMBOL_case_list = 103,                /* case_list  */
  YYSYMBOL_expr_list_e = 104,              /* expr_list_e  */
  YYSYMBOL_expr_list = 105,                /* expr_list  */
  YYSYMBOL_expr = 106,                     /* expr  */
  YYSYMBOL_num_const = 107,                /* num_const  */
  YYSYMBOL_const = 108,                    /* const  */
  YYSYMBOL_params = 109,                   /* params  */
  YYSYMBOL_anonymous_func = 110,           /* anonymous_func  */
  YYSYMBOL_method_params_list = 111,       /* method_params_list  */
  YYSYMBOL_method = 112,                   /* method  */
  YYSYMBOL_method_arguments_list = 113,    /* method_arguments_list  */
  YYSYMBOL_method_call = 114,              /* method_call  */
  YYSYMBOL_type = 115,                     /* type  */
  YYSYMBOL_type_list_car = 116,            /* type_list_car  */
  YYSYMBOL_type_list = 117,                /* type_list  */
  YYSYMBOL_type_list_simple = 118,         /* type_list_simple  */
  YYSYMBOL_array = 119,                    /* array  */
  YYSYMBOL_array_literal = 120,            /* array_literal  */
  YYSYMBOL_initialized_array = 121,        /* initialized_array  */
  YYSYMBOL_endlList = 122,                 /* endlList  */
  YYSYMBOL_endlOpt = 123,                  /* endlOpt  */
  YYSYMBOL_semicolonList = 124,            /* semicolonList  */
  YYSYMBOL_separator_List = 125,           /* separator_List  */
  YYSYMBOL_separator_List_e = 126          /* separator_List_e  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1340

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  184
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  538

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   314


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    17,     9,     2,
      20,    21,    15,    13,     6,    14,    24,    16,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    12,    79,
      11,     7,    10,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    22,     2,    23,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    77,     8,    78,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,    18,    19,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   127,   127,   134,   135,   136,   140,   141,   142,   143,
     147,   152,   153,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   177,
     178,   182,   183,   196,   197,   205,   206,   214,   215,   216,
     217,   218,   219,   223,   224,   228,   229,   230,   231,   232,
     233,   234,   235,   244,   245,   246,   254,   255,   255,   256,
     257,   262,   263,   264,   265,   266,   267,   268,   269,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     289,   293,   299,   304,   305,   311,   312,   313,   323,   324,
     329,   330,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   372,   373,   374,   375,   380,
     381,   382,   383,   384,   385,   386,   392,   393,   394,   395,
     396,   401,   406,   407,   411,   412,   413,   414,   415,   416,
     417,   418,   422,   423,   427,   428,   434,   435,   436,   437,
     438,   439,   440,   444,   445,   449,   450,   454,   465,   466,
     470,   471,   475,   484,   485,   490,   491,   496,   497,   501,
     502,   503,   504,   508,   509
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ENDL",
  "LOWER_THAN_EXPR", "EXPR", "','", "'='", "'|'", "'&'", "'>'", "'<'",
  "':'", "'+'", "'-'", "'*'", "'/'", "'%'", "UMINUS", "UPLUS", "'('",
  "')'", "'['", "']'", "'.'", "NUM_10", "NUM_16", "REAL_NUMBER",
  "REAL_NUMBER_EXPONENT", "IDENTIFIER", "CONST_CHAR", "CONST_STRING",
  "NEWLINE", "VAL", "VAR", "ELSE", "IF", "FOR", "DO", "WHILE", "MATCH",
  "CASE", "PRINTLN", "READLINE", "ARRAY", "OVERRIDE", "KW_TRUE",
  "KW_FALSE", "KW_NULL", "EQ", "NEQ", "KW_OR", "KW_AND",
  "MORE_OR_EQUAL_OPERATOR", "LESS_OR_EQUAL_OPERATOR", "INT_KW",
  "DOUBLE_KW", "STRING_KW", "CHAR_KW", "BOOLEAN_KW", "ANY_KW", "UNIT_KW",
  "TO", "BY", "YIELD", "GENERATOR_OPERATOR", "RIGHT_ARROW_OPERATOR",
  "ID_COLLECTION", "DEF", "NEW", "PROTECTED", "PRIVATE", "CLASS",
  "EXTENDS", "ABSTRACT", "NOT", "CASE_PATTERN", "'{'", "'}'", "';'",
  "$accept", "program", "class", "class_header", "abstract_class_header",
  "case_class_header", "class_params", "class_params_e",
  "create_instance_class", "visibility_modifier", "inheritance",
  "statement_expr_list", "statement_expr_list_e", "statement",
  "if_else_expr", "for_expr", "$@1",
  "generators_and_conditions_parentheses_List",
  "generators_and_conditions_curly_braces_List", "while_expr",
  "do_while_expr", "match_expr", "case_condition", "case_list",
  "expr_list_e", "expr_list", "expr", "num_const", "const", "params",
  "anonymous_func", "method_params_list", "method",
  "method_arguments_list", "method_call", "type", "type_list_car",
  "type_list", "type_list_simple", "array", "array_literal",
  "initialized_array", "endlList", "endlOpt", "semicolonList",
  "separator_List", "separator_List_e", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-406)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-177)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,  -406,  -406,    36,  -406,     7,   262,  -406,  -406,  -406,
     993,   993,  1029,  -406,  -406,  -406,  -406,    27,  -406,  -406,
      45,    45,    45,    45,    45,    45,    45,    99,   101,   109,
      70,  -406,  -406,  -406,    45,    45,  -406,  -406,    45,    45,
      15,  -406,   130,   137,   146,  -406,   281,    12,  -406,  -406,
    -406,  -406,  -406,  -406,  1210,  -406,  -406,  -406,  -406,  -406,
    -406,  -406,  -406,  -406,  -406,   257,   743,    37,  -406,   993,
      26,   158,   205,   218,   200,   201,   220,     5,   993,   228,
     180,   993,   233,   243,    45,   227,    73,   239,   206,   207,
      15,    15,    15,  -406,   886,  -406,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    45,   344,  -406,   254,    45,   258,   236,  1210,   259,
     266,   993,  -406,    45,    45,    45,   993,   265,    45,   586,
     993,    45,  1070,  -406,   993,   268,    45,   282,    45,     6,
    -406,  -406,   234,   235,   245,   281,  -406,  1210,   993,   993,
     993,   993,   993,   993,   993,   993,   993,   244,   993,   993,
     993,   993,   993,   993,  -406,  -406,  -406,  -406,  -406,  -406,
    -406,  -406,    10,   313,   261,  -406,   322,   308,   158,   314,
     993,    32,   199,  1086,   272,     2,   309,   301,  1133,   315,
    -406,   321,    45,   215,   993,   323,    25,  -406,  -406,  -406,
    -406,   596,    16,   303,   303,   230,   230,  -406,  -406,  -406,
      45,    46,    46,   764,   117,   303,   303,   190,   344,   344,
      45,    45,  -406,  -406,  1223,    45,    45,    45,    45,    45,
     362,    45,   993,    38,    45,    45,   326,    45,    45,  -406,
     221,    45,    45,   325,    45,   329,   344,   106,    45,  -406,
     302,    45,  -406,  -406,    14,   993,   993,   993,     8,   993,
      20,   993,  -406,   289,   469,  1210,   287,   993,   291,    39,
      -1,   993,   993,   338,    45,    45,    45,   993,   344,   349,
     183,   250,  -406,   346,   341,   343,   367,   353,   131,   350,
      45,    45,   331,   190,  1210,  1210,  1210,    51,   356,    45,
    1210,   360,    45,   660,   190,    45,  1210,   760,  1210,    45,
      45,    45,    45,    45,  1148,  1210,   106,   993,   344,   260,
    1210,    45,  -406,    45,    45,   325,   364,   373,   382,   139,
     324,   357,   383,   376,   155,    82,  -406,  -406,   390,   407,
     344,   409,   344,   410,    45,    19,   351,   993,  -406,  -406,
     358,  1240,   354,   993,   948,    86,  -406,   397,  1210,    45,
      45,    45,   415,   993,   344,   184,   993,   344,   344,   395,
     398,   154,  -406,   416,   417,   993,  -406,    45,   426,    45,
    -406,  -406,    17,   368,   344,   412,    45,   413,    45,   993,
      45,   190,  1223,   190,  -406,   371,    45,  1210,    45,  1223,
      45,   993,   324,   447,   993,   344,    45,  1210,    45,  -406,
    1195,   448,   449,   446,   450,   430,   431,   344,   344,   115,
     402,   155,  -406,   422,   344,  -406,    45,   993,    45,   993,
    1223,   993,  -406,   406,    45,  1264,   993,   414,  1210,  -406,
      45,  1210,    45,   993,   465,  -406,   190,   190,   344,   344,
     462,   463,   470,   477,  -406,    12,    45,    45,  -406,   478,
    1210,   481,  1210,  1223,   190,   190,  -406,   428,  1223,    45,
     993,   484,  1210,    45,  -406,  -406,   485,   486,   344,   344,
     190,   190,   993,   435,   155,    45,    45,  -406,   439,    45,
    1271,  1210,    45,   993,   190,   190,   497,   503,  -406,  -406,
    1210,    12,    45,    72,    72,    45,   190,  -406,   452,   993,
    1210,  -406,  -406,   190,   190,   993,   453,  -406,  -406,   190,
     455,    45,  1210,  -406,  -406,  1210,    12,  -406,    45,   190,
     993,   190,   457,  1210,  -406,    45,   190,  -406
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     184,   179,   180,     0,     2,   183,     0,     1,   181,   182,
       0,     0,   140,   125,   126,   127,   128,    93,   131,   130,
     176,   176,   176,   176,   176,   176,   176,     0,     0,   171,
       0,   132,   133,   134,   176,   176,    34,    33,   176,   176,
     184,    51,     0,     0,     0,   121,     0,   184,    37,   113,
     114,   115,   116,   117,    39,   129,    92,   119,    52,   120,
     135,   168,   169,   112,   111,    93,     0,     0,   173,    89,
       0,   154,   175,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   176,     0,     0,     0,     0,     0,
     184,   184,   184,    38,   183,    43,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,     0,    95,     0,   176,     0,    88,    90,     0,
       0,    89,   174,   176,   176,   176,     0,     0,   176,   176,
       0,   176,     0,   122,    89,     0,   176,    31,   176,   176,
      10,   118,     0,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   156,   157,   158,   159,   160,   161,
     162,   163,   136,     0,     0,   152,     0,     0,   155,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     123,     0,   176,     0,    89,     0,     0,     3,     4,     5,
      42,   108,   107,    96,    97,   102,   103,   105,   104,   106,
     176,   100,   101,   109,   110,    98,    99,     0,     0,     0,
     176,   176,   124,   153,    94,   176,   176,   176,   176,   176,
       0,   176,     0,     0,   176,   176,     0,   176,   176,   170,
       0,   176,   176,   140,   176,     0,     0,    30,   176,     9,
       0,   176,   137,   164,   138,     0,     0,     0,     0,     0,
       0,     0,    63,     0,     0,    64,     0,     0,     0,   175,
       0,     0,     0,     0,   176,   176,   176,     0,     0,     0,
       0,     0,    32,     0,     0,     0,    29,     0,     0,     0,
     176,   176,     0,     0,   141,    91,    45,     0,     0,   176,
      46,     0,   176,    55,     0,   176,    57,     0,    65,   176,
     176,   176,   176,   176,     0,    80,    30,     0,     0,     0,
     147,   176,   142,   176,   176,   140,     0,     0,     0,     0,
       6,     0,     0,    35,     0,     0,   139,   165,     0,     0,
       0,     0,     0,     0,   176,     0,    61,     0,    58,    68,
       0,     0,     0,     0,     0,     0,    81,     0,   151,   176,
     176,   176,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     0,     0,     0,    84,   176,    83,   176,
      82,   177,   176,     0,     0,     0,   176,     0,   176,     0,
     176,     0,    56,     0,    71,     0,   176,    72,   176,    60,
     176,     0,    11,     0,     0,     0,   176,   146,   176,   143,
       0,    14,    13,     0,     0,     0,     0,     0,     0,   176,
       0,     0,   178,     0,     0,   166,   176,     0,   176,     0,
      53,     0,    62,    66,   176,     0,     0,     0,    73,    12,
     176,   150,   176,     0,     0,   172,     0,     0,     0,     0,
       0,     0,    22,    21,    36,   184,   176,   176,   167,     0,
      47,     0,    48,    54,     0,     0,    79,     0,    59,   176,
       0,     0,   145,   176,    16,    15,    18,    17,     0,     0,
       0,     0,     0,     0,     0,   176,   176,    67,    69,   176,
       0,   149,   176,     0,     0,     0,    26,    25,    24,    23,
      85,   184,   176,     0,     0,   176,     0,    76,     0,     0,
     144,    20,    19,     0,     0,     0,     0,    50,    49,     0,
      77,   176,   148,    28,    27,    87,   184,    70,   176,     0,
       0,     0,    74,    86,    78,   176,     0,    75
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -406,  -406,  -406,   433,  -406,  -406,  -406,   209,  -406,    -5,
    -318,  -406,    13,   -44,  -406,  -406,  -406,  -406,  -406,  -406,
    -406,  -406,  -405,  -406,   -97,  -326,    -6,  -406,   374,  -240,
    -406,   283,  -406,   408,  -406,  -205,   307,  -406,  -146,  -308,
    -406,  -406,  -216,   342,  -406,   475,   -40
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,    41,    42,    43,    44,   286,   287,    45,   288,
     249,    47,     4,    48,    49,    50,   348,   185,   235,    51,
      52,    53,   377,   291,   116,   117,   118,    55,    56,    67,
      57,   244,    58,    71,    59,   171,   172,   338,   299,    60,
      61,    62,    72,   176,   382,     5,     6
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      54,    46,    93,   280,    63,    64,    66,    95,   378,    68,
       8,   -44,   372,   253,     1,     1,   456,   217,     1,   269,
      68,   293,   122,   231,   179,   127,    98,    99,   297,   100,
     101,   102,   103,   104,  -176,   311,     7,   191,   232,   225,
     297,   283,   122,   114,   226,   247,   119,    69,    68,   419,
     146,    70,   298,    89,   390,   120,    98,    99,   115,   100,
     101,   102,   103,   104,   301,   106,   107,   266,   310,   110,
     111,   297,   129,   321,   267,   132,   218,   312,   313,   502,
     218,   233,   128,    -8,   439,   365,     9,   345,   147,   145,
       2,     2,   337,   -44,     2,   378,   422,   245,   248,   110,
     111,   200,   137,   142,   143,   144,   164,   165,   166,   167,
     168,   169,   170,   359,   302,   400,    29,   138,    68,    81,
     183,    82,   401,   379,   188,    96,    97,    98,    99,  -176,
     100,   101,   102,   103,   104,   385,   454,   387,    84,   284,
     285,   251,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   339,   211,   212,   213,   214,   215,   216,   378,   408,
     380,   381,   411,   412,   331,   332,   106,   107,    10,    11,
     110,   111,   369,   370,   224,    12,    36,    37,   121,   425,
      13,    14,    15,    16,    17,    18,    19,   415,   416,   114,
     114,    22,    23,    24,    25,   517,   518,    27,    28,    29,
     442,    31,    32,    33,   322,   409,   227,    90,   122,    36,
      37,   228,   452,   453,    91,    13,    14,    15,    16,   458,
      18,    19,   241,    92,    35,   123,   265,   242,   274,   124,
     125,   376,    40,   275,    29,   243,    31,    32,    33,    68,
     126,   243,  -176,   476,   477,   102,   103,   104,   130,   294,
     295,   296,   131,   300,   133,   303,   136,   323,   306,   251,
      68,   308,   324,   134,  -176,   314,   315,   360,   139,   112,
     325,   320,   361,   496,   497,    10,    11,    69,    38,   175,
     325,    70,    12,   173,   177,   141,    69,    13,    14,    15,
      16,    17,    18,    19,   184,    20,    21,   192,    22,    23,
      24,    25,   194,    26,    27,    28,    29,    30,    31,    32,
      33,   358,   197,   198,    20,    21,   100,   101,   102,   103,
     104,   210,    26,   199,   371,   219,    30,   220,   221,   222,
      34,    35,    36,    37,    38,   223,    39,   230,   234,    40,
     236,   392,   239,   290,   238,   246,   271,   397,   399,    34,
     282,   304,   307,    38,   279,    39,   309,   407,   316,    73,
     410,   112,    74,    75,    76,    77,    78,    79,    80,   326,
     327,    83,   328,   329,   330,   138,    85,    86,   340,   333,
      87,    88,   342,   430,   366,   367,   373,    13,    14,    15,
      16,   262,    18,    19,   368,   438,   375,   248,   441,   164,
     165,   166,   167,   168,   169,   170,    29,    73,    31,    32,
      33,   383,   374,   384,   391,   482,   386,   388,   402,   396,
     393,   460,   406,   462,   413,   463,   135,   414,   417,   418,
     468,   251,  -176,   434,   424,   426,   428,   472,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   440,   446,   447,   174,   448,   450,
     451,   515,   449,   457,   491,   180,   181,   182,   455,   464,
     186,   187,   473,   189,   478,   479,   500,   480,   193,   469,
     195,   196,    10,    11,   481,   485,   530,   510,   486,    12,
     489,   492,   494,   495,    13,    14,    15,    16,    17,    18,
      19,   501,   505,   522,   513,    22,    23,    24,    25,   525,
     514,    27,    28,    29,   521,    31,    32,    33,   528,   526,
     535,   140,    94,   276,   533,   357,   254,     0,   178,     0,
       0,     0,     0,   305,   240,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,    40,     0,     0,     0,
       0,     0,   250,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   255,   256,     0,     0,     0,   257,   258,   259,
     260,   261,     0,   264,     0,     0,   268,   270,     0,   272,
     273,     0,     0,   277,   278,     0,   281,     0,     0,    68,
     289,   252,     0,   292,    96,    97,    98,    99,     0,   100,
     101,   102,   103,   104,   263,    97,    98,    99,     0,   100,
     101,   102,   103,   104,     0,     0,   317,   318,   319,     0,
       0,     0,     0,     0,     0,     0,   105,     0,     0,     0,
       0,     0,   334,   335,     0,   106,   107,   108,   109,   110,
     111,   341,     0,     0,   343,   106,   107,   347,     0,   110,
     111,   351,   352,   353,   354,   355,     0,     0,     0,     0,
       0,     0,     0,   362,     0,   363,   364,   336,    96,    97,
      98,    99,     0,   100,   101,   102,   103,   104,   346,     0,
       0,   350,     0,     0,     0,     0,   389,     0,     0,     0,
       0,     0,     0,     0,     0,   344,     0,     0,     0,     0,
     105,   403,   404,   405,     0,     0,     0,     0,     0,   106,
     107,   108,   109,   110,   111,     0,     0,     0,     0,   420,
       0,   421,     0,     0,   423,   395,     0,     0,   427,     0,
     429,     0,   431,     0,     0,     0,     0,     0,   435,     0,
     436,     0,   437,     0,     0,     0,     0,     0,   443,     0,
     444,    96,    97,    98,    99,     0,   100,   101,   102,   103,
     104,     0,     0,     0,   113,   432,     0,   433,   459,     0,
     461,     0,    96,    97,    98,    99,   465,   100,   101,   102,
     103,   104,   470,   105,   471,    13,    14,    15,    16,   349,
      18,    19,   106,   107,   108,   109,   110,   111,   483,   484,
       0,     0,     0,     0,    29,     0,    31,    32,    33,   467,
       0,   490,     0,   106,   107,   493,   109,   110,   111,     0,
     474,   475,     0,     0,     0,     0,     0,   503,   504,   251,
       0,   506,     0,     0,   509,     0,     0,     0,   487,   488,
       0,     0,     0,     0,   516,     0,     0,   519,     0,     0,
       0,     0,     0,     0,   498,   499,     0,     0,     0,     0,
       0,     0,     0,   529,   508,     0,     0,     0,   511,   512,
     531,     0,     0,     0,     0,     0,     0,   536,     0,     0,
     520,     0,     0,     0,     0,     0,     0,   523,   524,     8,
       0,     0,     0,   527,     0,     0,     0,     0,     0,    10,
      11,     0,     0,   532,     0,   534,    12,     0,     0,     0,
     537,    13,    14,    15,    16,    17,    18,    19,     0,    20,
      21,     0,    22,    23,    24,    25,     0,    26,    27,    28,
      29,    30,    31,    32,    33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    35,    36,    37,    38,     0,
      39,    10,    11,    40,     0,     9,     0,     0,    12,     0,
       0,     0,     0,    13,    14,    15,    16,    17,    18,    19,
       0,     0,     0,     0,    22,    23,    24,    25,     0,     0,
      27,    28,    29,     0,    31,    32,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,   398,    12,     0,     0,     0,    35,    13,    14,
      15,    16,    17,    18,    19,    40,     0,     0,     0,    22,
      23,    24,    25,     0,     0,    27,    28,    29,     0,    31,
      32,    33,    10,    11,     0,     0,     0,     0,     0,    12,
       0,     0,     0,     0,    13,    14,    15,    16,    65,    18,
      19,     0,    35,     0,     0,    22,    23,    24,    25,     0,
      40,    27,    28,    29,     0,    31,    32,    33,    96,    97,
      98,    99,     0,   100,   101,   102,   103,   104,     0,     0,
       0,   190,     0,     0,    96,    97,    98,    99,    35,   100,
     101,   102,   103,   104,     0,     0,    40,   229,     0,     0,
     105,     0,     0,     0,     0,     0,     0,     0,     0,   106,
     107,   108,   109,   110,   111,     0,   105,     0,     0,     0,
       0,     0,     0,     0,     0,   106,   107,   108,   109,   110,
     111,    96,    97,    98,    99,     0,   100,   101,   102,   103,
     104,     0,     0,     0,   237,     0,    96,    97,    98,    99,
       0,   100,   101,   102,   103,   104,     0,     0,     0,   356,
       0,     0,     0,   105,     0,     0,     0,     0,     0,     0,
       0,     0,   106,   107,   108,   109,   110,   111,   105,     0,
       0,     0,     0,     0,     0,     0,     0,   106,   107,   108,
     109,   110,   111,    96,    97,    98,    99,     0,   100,   101,
     102,   103,   104,     0,     0,     0,   445,     0,    96,    97,
      98,    99,     0,   100,   101,   102,   103,   104,     0,     0,
       0,    96,    97,    98,    99,   105,   100,   101,   102,   103,
     104,     0,     0,     0,   106,   107,   108,   109,   110,   111,
     105,     0,     0,     0,     0,     0,     0,     0,     0,   106,
     107,   108,   109,   110,   111,    13,    14,    15,    16,   394,
      18,    19,   106,   107,   108,   109,   110,   111,     0,     0,
       0,     0,     0,     0,    29,     0,    31,    32,    33,    13,
      14,    15,    16,   466,    18,    19,    13,    14,    15,    16,
     507,    18,    19,     0,     0,     0,     0,     0,    29,   251,
      31,    32,    33,     0,     0,    29,     0,    31,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   251,     0,     0,     0,     0,     0,     0,
     251
};

static const yytype_int16 yycheck[] =
{
       6,     6,    46,   243,    10,    11,    12,    47,   334,     3,
       3,     0,   330,   218,     3,     3,   421,     7,     3,   235,
       3,     7,     3,    21,   121,    20,    10,    11,    20,    13,
      14,    15,    16,    17,     7,    36,     0,   134,    36,     7,
      20,   246,     3,     6,    12,    20,    20,    20,     3,   375,
      94,    24,    44,    40,    35,    29,    10,    11,    21,    13,
      14,    15,    16,    17,    44,    49,    50,    29,    29,    53,
      54,    20,    78,   278,    36,    81,    66,    78,    79,   484,
      66,    79,    77,    77,   402,   325,    79,   303,    94,    94,
      79,    79,   297,    78,    79,   421,    79,   194,    73,    53,
      54,   145,    29,    90,    91,    92,    55,    56,    57,    58,
      59,    60,    61,   318,   260,    29,    44,    44,     3,    20,
     126,    20,    36,    41,   130,     8,     9,    10,    11,    20,
      13,    14,    15,    16,    17,   340,    21,   342,    68,    33,
      34,    69,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   297,   158,   159,   160,   161,   162,   163,   484,   364,
      78,    79,   367,   368,    33,    34,    49,    50,    13,    14,
      53,    54,    33,    34,   180,    20,    70,    71,    20,   384,
      25,    26,    27,    28,    29,    30,    31,    33,    34,     6,
       6,    36,    37,    38,    39,   503,   504,    42,    43,    44,
     405,    46,    47,    48,    21,    21,     7,    77,     3,    70,
      71,    12,   417,   418,    77,    25,    26,    27,    28,   424,
      30,    31,     7,    77,    69,     7,   232,    12,     7,    29,
      29,    76,    77,    12,    44,    20,    46,    47,    48,     3,
      20,    20,     6,   448,   449,    15,    16,    17,    20,   255,
     256,   257,    72,   259,    21,   261,    29,     7,   264,    69,
       3,   267,    12,    20,     7,   271,   272,     7,    29,    12,
      20,   277,    12,   478,   479,    13,    14,    20,    72,    21,
      20,    24,    20,    29,    25,    78,    20,    25,    26,    27,
      28,    29,    30,    31,    29,    33,    34,    29,    36,    37,
      38,    39,    20,    41,    42,    43,    44,    45,    46,    47,
      48,   317,    78,    78,    33,    34,    13,    14,    15,    16,
      17,    77,    41,    78,   329,    12,    45,    66,     6,    21,
      68,    69,    70,    71,    72,    21,    74,    65,    29,    77,
      39,   347,    21,    41,    29,    22,    20,   353,   354,    68,
      21,    62,    65,    72,    29,    74,    65,   363,    20,    17,
     366,    12,    20,    21,    22,    23,    24,    25,    26,    23,
      29,    29,    29,     6,    21,    44,    34,    35,    22,    29,
      38,    39,    22,   389,    20,    12,    29,    25,    26,    27,
      28,    29,    30,    31,    12,   401,    20,    73,   404,    55,
      56,    57,    58,    59,    60,    61,    44,    65,    46,    47,
      48,    21,    29,     6,    63,   455,     7,     7,    21,    65,
      62,   427,     7,   429,    29,   431,    84,    29,    12,    12,
     436,    69,     6,    62,    66,    23,    23,   443,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,     7,     7,     7,   115,    12,    29,
      29,   501,    12,    41,   470,   123,   124,   125,    66,    63,
     128,   129,     7,   131,    12,    12,   482,     7,   136,    65,
     138,   139,    13,    14,     7,     7,   526,   493,     7,    20,
      62,     7,     7,     7,    25,    26,    27,    28,    29,    30,
      31,    66,    63,   509,     7,    36,    37,    38,    39,   515,
       7,    42,    43,    44,    62,    46,    47,    48,    63,    66,
      63,    88,    47,   240,   530,   316,   219,    -1,   120,    -1,
      -1,    -1,    -1,    64,   192,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,   210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   220,   221,    -1,    -1,    -1,   225,   226,   227,
     228,   229,    -1,   231,    -1,    -1,   234,   235,    -1,   237,
     238,    -1,    -1,   241,   242,    -1,   244,    -1,    -1,     3,
     248,   217,    -1,   251,     8,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,   230,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    -1,    -1,   274,   275,   276,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,   290,   291,    -1,    49,    50,    51,    52,    53,
      54,   299,    -1,    -1,   302,    49,    50,   305,    -1,    53,
      54,   309,   310,   311,   312,   313,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   321,    -1,   323,   324,   293,     8,     9,
      10,    11,    -1,    13,    14,    15,    16,    17,   304,    -1,
      -1,   307,    -1,    -1,    -1,    -1,   344,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      40,   359,   360,   361,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,   377,
      -1,   379,    -1,    -1,   382,   351,    -1,    -1,   386,    -1,
     388,    -1,   390,    -1,    -1,    -1,    -1,    -1,   396,    -1,
     398,    -1,   400,    -1,    -1,    -1,    -1,    -1,   406,    -1,
     408,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    -1,    -1,    -1,    21,   391,    -1,   393,   426,    -1,
     428,    -1,     8,     9,    10,    11,   434,    13,    14,    15,
      16,    17,   440,    40,   442,    25,    26,    27,    28,    29,
      30,    31,    49,    50,    51,    52,    53,    54,   456,   457,
      -1,    -1,    -1,    -1,    44,    -1,    46,    47,    48,   435,
      -1,   469,    -1,    49,    50,   473,    52,    53,    54,    -1,
     446,   447,    -1,    -1,    -1,    -1,    -1,   485,   486,    69,
      -1,   489,    -1,    -1,   492,    -1,    -1,    -1,   464,   465,
      -1,    -1,    -1,    -1,   502,    -1,    -1,   505,    -1,    -1,
      -1,    -1,    -1,    -1,   480,   481,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   521,   490,    -1,    -1,    -1,   494,   495,
     528,    -1,    -1,    -1,    -1,    -1,    -1,   535,    -1,    -1,
     506,    -1,    -1,    -1,    -1,    -1,    -1,   513,   514,     3,
      -1,    -1,    -1,   519,    -1,    -1,    -1,    -1,    -1,    13,
      14,    -1,    -1,   529,    -1,   531,    20,    -1,    -1,    -1,
     536,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      34,    -1,    36,    37,    38,    39,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,    -1,
      74,    13,    14,    77,    -1,    79,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,    -1,    -1,    36,    37,    38,    39,    -1,    -1,
      42,    43,    44,    -1,    46,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    -1,    -1,
      -1,    -1,    64,    20,    -1,    -1,    -1,    69,    25,    26,
      27,    28,    29,    30,    31,    77,    -1,    -1,    -1,    36,
      37,    38,    39,    -1,    -1,    42,    43,    44,    -1,    46,
      47,    48,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    -1,    69,    -1,    -1,    36,    37,    38,    39,    -1,
      77,    42,    43,    44,    -1,    46,    47,    48,     8,     9,
      10,    11,    -1,    13,    14,    15,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,     8,     9,    10,    11,    69,    13,
      14,    15,    16,    17,    -1,    -1,    77,    21,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    53,    54,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,
      54,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    -1,    -1,    -1,    21,    -1,     8,     9,    10,    11,
      -1,    13,    14,    15,    16,    17,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    51,    52,    53,    54,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    54,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    -1,    -1,    -1,    21,    -1,     8,     9,
      10,    11,    -1,    13,    14,    15,    16,    17,    -1,    -1,
      -1,     8,     9,    10,    11,    40,    13,    14,    15,    16,
      17,    -1,    -1,    -1,    49,    50,    51,    52,    53,    54,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    53,    54,    25,    26,    27,    28,    29,
      30,    31,    49,    50,    51,    52,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    46,    47,    48,    25,
      26,    27,    28,    29,    30,    31,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    44,    69,
      46,    47,    48,    -1,    -1,    44,    -1,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      69
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    79,    81,    92,   125,   126,     0,     3,    79,
      13,    14,    20,    25,    26,    27,    28,    29,    30,    31,
      33,    34,    36,    37,    38,    39,    41,    42,    43,    44,
      45,    46,    47,    48,    68,    69,    70,    71,    72,    74,
      77,    82,    83,    84,    85,    88,    89,    91,    93,    94,
      95,    99,   100,   101,   106,   107,   108,   110,   112,   114,
     119,   120,   121,   106,   106,    29,   106,   109,     3,    20,
      24,   113,   122,   123,   123,   123,   123,   123,   123,   123,
     123,    20,    20,   123,    68,   123,   123,   123,   123,    92,
      77,    77,    77,    93,   125,   126,     8,     9,    10,    11,
      13,    14,    15,    16,    17,    40,    49,    50,    51,    52,
      53,    54,    12,    21,     6,    21,   104,   105,   106,    20,
      29,    20,     3,     7,    29,    29,    20,    20,    77,   106,
      20,    72,   106,    21,    20,   123,    29,    29,    44,    29,
      83,    78,    92,    92,    92,    89,    93,   106,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,    55,    56,    57,    58,    59,    60,
      61,   115,   116,    29,   123,    21,   123,    25,   113,   104,
     123,   123,   123,   106,    29,    97,   123,   123,   106,   123,
      21,   104,    29,   123,    20,   123,   123,    78,    78,    78,
      93,   106,   106,   106,   106,   106,   106,   106,   106,   106,
      77,   106,   106,   106,   106,   106,   106,     7,    66,    12,
      66,     6,    21,    21,   106,     7,    12,     7,    12,    21,
      65,    21,    36,    79,    29,    98,    39,    21,    29,    21,
     123,     7,    12,    20,   111,   104,    22,    20,    73,    90,
     123,    69,   108,   115,   116,   123,   123,   123,   123,   123,
     123,   123,    29,   108,   123,   106,    29,    36,   123,   122,
     123,    20,   123,   123,     7,    12,   111,   123,   123,    29,
     109,   123,    21,   115,    33,    34,    86,    87,    89,   123,
      41,   103,   123,     7,   106,   106,   106,    20,    44,   118,
     106,    44,   118,   106,    62,    64,   106,    65,   106,    65,
      29,    36,    78,    79,   106,   106,    20,   123,   123,   123,
     106,   115,    21,     7,    12,    20,    23,    29,    29,     6,
      21,    33,    34,    29,   123,   123,   108,   115,   117,   118,
      22,   123,    22,   123,    35,   122,   108,   123,    96,    29,
     108,   123,   123,   123,   123,   123,    21,    87,   106,   115,
       7,    12,   123,   123,   123,   109,    20,    12,    12,    33,
      34,    89,    90,    29,    29,    20,    76,   102,   105,    41,
      78,    79,   124,    21,     6,   115,     7,   115,     7,   123,
      35,    63,   106,    62,    29,   108,    65,   106,    64,   106,
      29,    36,    21,   123,   123,   123,     7,   106,   115,    21,
     106,   115,   115,    29,    29,    33,    34,    12,    12,   105,
     123,   123,    79,   123,    66,   115,    23,   123,    23,   123,
     106,   123,   108,   108,    62,   123,   123,   123,   106,    90,
       7,   106,   115,   123,   123,    21,     7,     7,    12,    12,
      29,    29,   115,   115,    21,    66,   102,    41,   115,   123,
     106,   123,   106,   106,    63,   123,    29,   108,   106,    65,
     123,   123,   106,     7,   108,   108,   115,   115,    12,    12,
       7,     7,   126,   123,   123,     7,     7,   108,   108,    62,
     123,   106,     7,   123,     7,     7,   115,   115,   108,   108,
     106,    66,   102,   123,   123,    63,   123,    29,   108,   123,
     106,   108,   108,     7,     7,   126,   123,   119,   119,   123,
     108,    62,   106,   108,   108,   106,    66,   108,    63,   123,
     126,   123,   108,   106,   108,    63,   123,   108
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    80,    81,    82,    82,    82,    83,    83,    83,    83,
      84,    85,    85,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    87,
      87,    88,    88,    89,    89,    90,    90,    91,    91,    91,
      91,    91,    91,    92,    92,    93,    93,    93,    93,    93,
      93,    93,    93,    94,    94,    94,    95,    96,    95,    95,
      95,    97,    97,    97,    97,    97,    97,    97,    97,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      99,   100,   101,   102,   102,   103,   103,   103,   104,   104,
     105,   105,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   107,   107,   107,   107,   108,
     108,   108,   108,   108,   108,   108,   109,   109,   109,   109,
     109,   110,   111,   111,   112,   112,   112,   112,   112,   112,
     112,   112,   113,   113,   114,   114,   115,   115,   115,   115,
     115,   115,   115,   116,   116,   117,   117,   118,   119,   119,
     120,   120,   121,   122,   122,   123,   123,   124,   124,   125,
     125,   125,   125,   126,   126
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     4,     4,     4,     7,     8,     3,     5,
       3,     9,    10,     4,     4,     6,     6,     6,     6,     8,
       8,     5,     5,     7,     7,     7,     7,     9,     9,     1,
       0,     3,     6,     1,     1,     3,     6,     1,     2,     1,
       3,     3,     4,     3,     0,     7,     7,    11,    11,    14,
      14,     1,     1,    10,    11,     7,     9,     0,     8,    11,
       9,     5,     7,     3,     3,     4,     7,     9,     5,     8,
      11,     5,     5,     6,    12,    15,     9,    10,    13,     7,
       7,     8,     8,     1,     1,     7,    11,     9,     1,     0,
       1,     5,     1,     1,     5,     3,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     2,     2,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     3,     4,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     5,     5,     7,
       0,     7,     3,     5,    13,    11,     9,     7,    14,    12,
      10,     8,     3,     4,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     5,     1,     1,
       5,     1,    10,     1,     2,     1,     0,     1,     2,     1,
       1,     2,     2,     1,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 37: /* statement_expr_list: statement  */
#line 214 "parser.y"
                { printf("Add first statement :\n"); }
#line 2224 "parser.tab.c"
    break;

  case 38: /* statement_expr_list: visibility_modifier statement  */
#line 215 "parser.y"
                                    { printf("Add first visibility_modifier statement :\n"); }
#line 2230 "parser.tab.c"
    break;

  case 39: /* statement_expr_list: expr  */
#line 216 "parser.y"
           { printf("Add first statement :\n"); }
#line 2236 "parser.tab.c"
    break;

  case 40: /* statement_expr_list: statement_expr_list separator_List statement  */
#line 217 "parser.y"
                                                    { printf("Add new statement to statement_expr_list :\n"); }
#line 2242 "parser.tab.c"
    break;

  case 41: /* statement_expr_list: statement_expr_list separator_List expr  */
#line 218 "parser.y"
                                               { printf("Add new expr to statement_expr_list :\n"); }
#line 2248 "parser.tab.c"
    break;

  case 42: /* statement_expr_list: statement_expr_list separator_List visibility_modifier statement  */
#line 219 "parser.y"
                                                                        { printf("Add new visibility_modifier to statement_expr_list :\n"); }
#line 2254 "parser.tab.c"
    break;

  case 44: /* statement_expr_list_e: %empty  */
#line 224 "parser.y"
                     { printf("PARSER found statement_list_e - nothing\n"); }
#line 2260 "parser.tab.c"
    break;

  case 45: /* statement: VAL endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 228 "parser.y"
                                                       {(yyval.tree) = mk_declaration_val(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[0].tree));found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2266 "parser.tab.c"
    break;

  case 46: /* statement: VAR endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 229 "parser.y"
                                                       {(yyval.tree) = mk_declaration_var(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[0].tree));found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2272 "parser.tab.c"
    break;

  case 47: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 230 "parser.y"
                                                                                           {(yyval.tree) = mk_declaration_val_type(mk_ident_lit((yyvsp[-8].str_value)),(yyvsp[-4].tree),(yyvsp[0].tree));found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2278 "parser.tab.c"
    break;

  case 48: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 231 "parser.y"
                                                                                           {(yyval.tree) = mk_declaration_var_type(mk_ident_lit((yyvsp[-8].str_value)),(yyvsp[-4].tree),(yyvsp[0].tree));found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2284 "parser.tab.c"
    break;

  case 49: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt ARRAY '[' type ']' endlOpt '=' endlOpt array  */
#line 232 "parser.y"
                                                                                              {(yyval.tree) = mk_declaration_var_array(mk_ident_lit((yyvsp[-11].str_value)),(yyvsp[-5].tree),(yyvsp[0].tree));found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2290 "parser.tab.c"
    break;

  case 50: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt ARRAY '[' type ']' endlOpt '=' endlOpt array  */
#line 233 "parser.y"
                                                                                              {(yyval.tree) = mk_declaration_val_array(mk_ident_lit((yyvsp[-11].str_value)),(yyvsp[-5].tree),(yyvsp[0].tree));found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2296 "parser.tab.c"
    break;

  case 51: /* statement: class  */
#line 234 "parser.y"
            { printf("Class:\n"); }
#line 2302 "parser.tab.c"
    break;

  case 52: /* statement: method  */
#line 235 "parser.y"
             {(yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2308 "parser.tab.c"
    break;

  case 53: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr ELSE endlOpt expr  */
#line 244 "parser.y"
                                                                           { (yyval.tree) = mk_if_else_expr((yyvsp[-6].tree), (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2314 "parser.tab.c"
    break;

  case 54: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr endlList ELSE endlOpt expr  */
#line 245 "parser.y"
                                                                                    { (yyval.tree) = mk_if_else_expr((yyvsp[-7].tree), (yyvsp[-4].tree), (yyvsp[0].tree)); }
#line 2320 "parser.tab.c"
    break;

  case 55: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr  */
#line 246 "parser.y"
                                                      { (yyval.tree) = mk_if_expr((yyvsp[-3].tree), (yyvsp[0].tree));}
#line 2326 "parser.tab.c"
    break;

  case 56: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt YIELD endlOpt expr  */
#line 254 "parser.y"
                                                                                                              { (yyval.tree) = mk_for_expr((yyvsp[-5].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2332 "parser.tab.c"
    break;

  case 57: /* $@1: %empty  */
#line 255 "parser.y"
                                                                                      { printf("FOR in parentheses\n"); }
#line 2338 "parser.tab.c"
    break;

  case 58: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt expr $@1  */
#line 255 "parser.y"
                                                                                                                                     { (yyval.tree) = mk_for_expr((yyvsp[-4].tree), (yyvsp[-1].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2344 "parser.tab.c"
    break;

  case 59: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt YIELD endlOpt expr  */
#line 256 "parser.y"
                                                                                                                                { printf("FOR in curly_braces\n"); }
#line 2350 "parser.tab.c"
    break;

  case 60: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt expr  */
#line 257 "parser.y"
                                                                                                                   { printf("FOR in curly_braces\n"); }
#line 2356 "parser.tab.c"
    break;

  case 61: /* generators_and_conditions_parentheses_List: IDENTIFIER GENERATOR_OPERATOR const TO const  */
#line 262 "parser.y"
                                                        {(yyval.tree) = add_to_list(mk_list(),  mk_generator_without_by(mk_ident_lit((yyvsp[-4].str_value)), (yyvsp[-2].tree), (yyvsp[0].tree))); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2362 "parser.tab.c"
    break;

  case 62: /* generators_and_conditions_parentheses_List: IDENTIFIER GENERATOR_OPERATOR const TO const BY const  */
#line 263 "parser.y"
                                                                {(yyval.tree) = add_to_list(mk_list(),  mk_generator_with_by(mk_ident_lit((yyvsp[-6].str_value)), (yyvsp[-4].tree), (yyvsp[-2].tree), (yyvsp[0].tree))); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2368 "parser.tab.c"
    break;

  case 63: /* generators_and_conditions_parentheses_List: IDENTIFIER GENERATOR_OPERATOR IDENTIFIER  */
#line 264 "parser.y"
                                                   {(yyval.tree) = add_to_list(mk_list(), mk_generator_without_to_and_by(mk_ident_lit((yyvsp[-2].str_value)),mk_ident_lit((yyvsp[0].str_value)))); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2374 "parser.tab.c"
    break;

  case 64: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List IF expr  */
#line 265 "parser.y"
                                                             { (yyval.tree) = add_to_list((yyvsp[-2].tree), mk_if_cond((yyvsp[0].tree))); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2380 "parser.tab.c"
    break;

  case 65: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List ';' IF expr  */
#line 266 "parser.y"
                                                                 { (yyval.tree) = add_to_list((yyvsp[-3].tree), mk_if_cond((yyvsp[0].tree))); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2386 "parser.tab.c"
    break;

  case 66: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List ';' IDENTIFIER GENERATOR_OPERATOR const TO const  */
#line 267 "parser.y"
                                                                                                      { (yyval.tree) = add_to_list((yyvsp[-6].tree), mk_generator_without_by(mk_ident_lit((yyvsp[-4].str_value)), (yyvsp[-2].tree), (yyvsp[0].tree))); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2392 "parser.tab.c"
    break;

  case 67: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List ';' IDENTIFIER GENERATOR_OPERATOR const TO const BY const  */
#line 268 "parser.y"
                                                                                                               { (yyval.tree) = add_to_list((yyvsp[-8].tree), mk_generator_with_by(mk_ident_lit((yyvsp[-6].str_value)), (yyvsp[-4].tree), (yyvsp[-2].tree), (yyvsp[0].tree))); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2398 "parser.tab.c"
    break;

  case 68: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List ';' IDENTIFIER GENERATOR_OPERATOR IDENTIFIER  */
#line 269 "parser.y"
                                                                                                  { (yyval.tree) = add_to_list((yyvsp[-4].tree), mk_generator_without_to_and_by(mk_ident_lit((yyvsp[-2].str_value)), mk_ident_lit((yyvsp[0].str_value)))); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2404 "parser.tab.c"
    break;

  case 69: /* generators_and_conditions_curly_braces_List: IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt const TO endlOpt const  */
#line 273 "parser.y"
                                                                               {(yyval.tree) = add_to_list(mk_list(),  mk_generator_without_by(mk_ident_lit((yyvsp[-7].str_value)), (yyvsp[-3].tree), (yyvsp[0].tree))); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2410 "parser.tab.c"
    break;

  case 70: /* generators_and_conditions_curly_braces_List: IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt const TO endlOpt const BY endlOpt const  */
#line 274 "parser.y"
                                                                                                {(yyval.tree) = add_to_list(mk_list(),  mk_generator_with_by(mk_ident_lit((yyvsp[-10].str_value)), (yyvsp[-6].tree), (yyvsp[-3].tree), (yyvsp[0].tree))); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2416 "parser.tab.c"
    break;

  case 71: /* generators_and_conditions_curly_braces_List: IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt IDENTIFIER  */
#line 275 "parser.y"
                                                                   {(yyval.tree) = add_to_list(mk_list(), mk_generator_without_to_and_by(mk_ident_lit((yyvsp[-4].str_value)),mk_ident_lit((yyvsp[0].str_value)))); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2422 "parser.tab.c"
    break;

  case 72: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlOpt IF endlOpt expr  */
#line 276 "parser.y"
                                                                              { (yyval.tree) = add_to_list((yyvsp[-4].tree), mk_if_cond((yyvsp[0].tree))); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2428 "parser.tab.c"
    break;

  case 73: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlOpt ';' endlOpt IF expr  */
#line 277 "parser.y"
                                                                                  { (yyval.tree) = add_to_list((yyvsp[-5].tree), mk_if_cond((yyvsp[0].tree))); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2434 "parser.tab.c"
    break;

  case 74: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlOpt ';' endlOpt IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt const TO endlOpt const  */
#line 278 "parser.y"
                                                                                                                                               { (yyval.tree) = add_to_list((yyvsp[-11].tree), mk_generator_without_by(mk_ident_lit((yyvsp[-7].str_value)), (yyvsp[-3].tree), (yyvsp[0].tree))); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2440 "parser.tab.c"
    break;

  case 75: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlOpt ';' endlOpt IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt const TO endlOpt const BY endlOpt const  */
#line 279 "parser.y"
                                                                                                                                                                { (yyval.tree) = add_to_list((yyvsp[-14].tree), mk_generator_with_by(mk_ident_lit((yyvsp[-10].str_value)), (yyvsp[-6].tree), (yyvsp[-3].tree), (yyvsp[0].tree))); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2446 "parser.tab.c"
    break;

  case 76: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlOpt ';' endlOpt IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt IDENTIFIER  */
#line 280 "parser.y"
                                                                                                                                   { (yyval.tree) = add_to_list((yyvsp[-8].tree), mk_generator_without_to_and_by(mk_ident_lit((yyvsp[-4].str_value)), mk_ident_lit((yyvsp[0].str_value)))); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2452 "parser.tab.c"
    break;

  case 77: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlList IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt const TO endlOpt const  */
#line 281 "parser.y"
                                                                                                                                    {(yyval.tree) = add_to_list(mk_list(),  mk_generator_without_by(mk_ident_lit((yyvsp[-7].str_value)), (yyvsp[-3].tree), (yyvsp[0].tree))); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2458 "parser.tab.c"
    break;

  case 78: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlList IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt const TO endlOpt const BY endlOpt const  */
#line 282 "parser.y"
                                                                                                                                                     {(yyval.tree) = add_to_list(mk_list(),  mk_generator_with_by(mk_ident_lit((yyvsp[-10].str_value)), (yyvsp[-6].tree), (yyvsp[-3].tree), (yyvsp[0].tree))); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2464 "parser.tab.c"
    break;

  case 79: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlList IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt IDENTIFIER  */
#line 283 "parser.y"
                                                                                                                        {(yyval.tree) = add_to_list(mk_list(), mk_generator_without_to_and_by(mk_ident_lit((yyvsp[-4].str_value)),mk_ident_lit((yyvsp[0].str_value)))); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2470 "parser.tab.c"
    break;

  case 80: /* while_expr: WHILE endlOpt '(' expr ')' endlOpt expr  */
#line 289 "parser.y"
                                                              { (yyval.tree) = mk_while_expr((yyvsp[-3].tree),(yyvsp[0].tree)); }
#line 2476 "parser.tab.c"
    break;

  case 81: /* do_while_expr: DO endlOpt expr endlOpt WHILE '(' expr ')'  */
#line 293 "parser.y"
                                                                 { (yyval.tree) = mk_do_while_expr((yyvsp[-5].tree),(yyvsp[-1].tree)); }
#line 2482 "parser.tab.c"
    break;

  case 82: /* match_expr: expr MATCH endlOpt '{' endlOpt case_list endlOpt '}'  */
#line 299 "parser.y"
                                                              {(yyval.tree) = mk_match_expr((yyvsp[-7].tree),(yyvsp[-2].tree));}
#line 2488 "parser.tab.c"
    break;

  case 83: /* case_condition: expr_list  */
#line 304 "parser.y"
                                          {(yyval.tree) = add_case_condition((yyvsp[0].tree));}
#line 2494 "parser.tab.c"
    break;

  case 84: /* case_condition: CASE_PATTERN  */
#line 305 "parser.y"
                       {(yyval.tree) = add_case_condition((yyvsp[0].tree));}
#line 2500 "parser.tab.c"
    break;

  case 85: /* case_list: CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 311 "parser.y"
                                                                                         {(yyval.tree) = mk_list();(yyval.tree) = add_alt_case((yyval.tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2506 "parser.tab.c"
    break;

  case 86: /* case_list: case_list endlOpt semicolonList endlOpt CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 312 "parser.y"
                                                                                                                                 {(yyval.tree) = add_alt_case((yyvsp[-10].tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2512 "parser.tab.c"
    break;

  case 87: /* case_list: case_list endlOpt CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 313 "parser.y"
                                                                                                           {(yyval.tree) = add_alt_case((yyvsp[-8].tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2518 "parser.tab.c"
    break;

  case 88: /* expr_list_e: expr_list  */
#line 323 "parser.y"
                   { printf("PARSER found expr_list - expr_list\n"); }
#line 2524 "parser.tab.c"
    break;

  case 89: /* expr_list_e: %empty  */
#line 324 "parser.y"
                     {  (yyval.tree) = mk_list(); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2530 "parser.tab.c"
    break;

  case 90: /* expr_list: expr  */
#line 329 "parser.y"
                                { (yyval.tree) = add_to_list(mk_list(), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2536 "parser.tab.c"
    break;

  case 91: /* expr_list: expr_list endlOpt ',' endlOpt expr  */
#line 330 "parser.y"
                                          { (yyval.tree) = add_to_list((yyvsp[-4].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2542 "parser.tab.c"
    break;

  case 92: /* expr: const  */
#line 335 "parser.y"
                                  {printf("PARSER found expr - const\n"); }
#line 2548 "parser.tab.c"
    break;

  case 93: /* expr: IDENTIFIER  */
#line 336 "parser.y"
                                       {(yyval.tree) = mk_ident_lit((yyvsp[0].str_value)); }
#line 2554 "parser.tab.c"
    break;

  case 94: /* expr: IDENTIFIER endlOpt '=' endlOpt expr  */
#line 337 "parser.y"
                                          { printf("Assignment:\n"); }
#line 2560 "parser.tab.c"
    break;

  case 95: /* expr: '(' expr ')'  */
#line 338 "parser.y"
                   { printf("PARSER found expr - ( expr ) \n"); }
#line 2566 "parser.tab.c"
    break;

  case 96: /* expr: expr '>' endlOpt expr  */
#line 339 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) ">", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2572 "parser.tab.c"
    break;

  case 97: /* expr: expr '<' endlOpt expr  */
#line 340 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "<", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2578 "parser.tab.c"
    break;

  case 98: /* expr: expr MORE_OR_EQUAL_OPERATOR endlOpt expr  */
#line 341 "parser.y"
                                               { (yyval.tree) = mk_bin_op((char*) ">=", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2584 "parser.tab.c"
    break;

  case 99: /* expr: expr LESS_OR_EQUAL_OPERATOR endlOpt expr  */
#line 342 "parser.y"
                                               { (yyval.tree) = mk_bin_op((char*) "<=", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2590 "parser.tab.c"
    break;

  case 100: /* expr: expr EQ endlOpt expr  */
#line 343 "parser.y"
                           { (yyval.tree) = mk_bin_op((char*) "==", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2596 "parser.tab.c"
    break;

  case 101: /* expr: expr NEQ endlOpt expr  */
#line 344 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "!=", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2602 "parser.tab.c"
    break;

  case 102: /* expr: expr '+' endlOpt expr  */
#line 345 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "+", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2608 "parser.tab.c"
    break;

  case 103: /* expr: expr '-' endlOpt expr  */
#line 346 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "-", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2614 "parser.tab.c"
    break;

  case 104: /* expr: expr '/' endlOpt expr  */
#line 347 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "/", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2620 "parser.tab.c"
    break;

  case 105: /* expr: expr '*' endlOpt expr  */
#line 348 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "*", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2626 "parser.tab.c"
    break;

  case 106: /* expr: expr '%' endlOpt expr  */
#line 349 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "%", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2632 "parser.tab.c"
    break;

  case 107: /* expr: expr '&' endlOpt expr  */
#line 350 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "&", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2638 "parser.tab.c"
    break;

  case 108: /* expr: expr '|' endlOpt expr  */
#line 351 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "|", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2644 "parser.tab.c"
    break;

  case 109: /* expr: expr KW_OR endlOpt expr  */
#line 352 "parser.y"
                              { (yyval.tree) = mk_bin_op((char*) "||", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2650 "parser.tab.c"
    break;

  case 110: /* expr: expr KW_AND endlOpt expr  */
#line 353 "parser.y"
                               { (yyval.tree) = mk_bin_op((char*) "&&", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2656 "parser.tab.c"
    break;

  case 111: /* expr: '-' expr  */
#line 354 "parser.y"
                             { (yyval.tree) = mk_unary_op("unary_minus_op", (yyvsp[0].tree));found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2662 "parser.tab.c"
    break;

  case 112: /* expr: '+' expr  */
#line 355 "parser.y"
                            { (yyval.tree) = mk_unary_op("unary_plus_op", (yyvsp[0].tree));found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2668 "parser.tab.c"
    break;

  case 113: /* expr: if_else_expr  */
#line 356 "parser.y"
                   {(yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2674 "parser.tab.c"
    break;

  case 114: /* expr: for_expr  */
#line 357 "parser.y"
               { printf("PARSER found expr - for_expr\n"); }
#line 2680 "parser.tab.c"
    break;

  case 115: /* expr: while_expr  */
#line 358 "parser.y"
                 {(yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2686 "parser.tab.c"
    break;

  case 116: /* expr: do_while_expr  */
#line 359 "parser.y"
                    {(yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2692 "parser.tab.c"
    break;

  case 117: /* expr: match_expr  */
#line 360 "parser.y"
                 {(yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2698 "parser.tab.c"
    break;

  case 118: /* expr: '{' statement_expr_list_e '}'  */
#line 361 "parser.y"
                                    { printf("  { statement_expr_list_e }\n"); }
#line 2704 "parser.tab.c"
    break;

  case 119: /* expr: anonymous_func  */
#line 362 "parser.y"
                     { (yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2710 "parser.tab.c"
    break;

  case 120: /* expr: method_call  */
#line 363 "parser.y"
                  { printf("method_call:\n"); }
#line 2716 "parser.tab.c"
    break;

  case 121: /* expr: create_instance_class  */
#line 364 "parser.y"
                            { printf("instance_class:\n"); }
#line 2722 "parser.tab.c"
    break;

  case 122: /* expr: READLINE '(' ')'  */
#line 365 "parser.y"
                     { printf("readLine:\n"); }
#line 2728 "parser.tab.c"
    break;

  case 123: /* expr: PRINTLN '(' expr ')'  */
#line 366 "parser.y"
                          { printf("print:\n"); }
#line 2734 "parser.tab.c"
    break;

  case 124: /* expr: IDENTIFIER '.' '(' NUM_10 ')'  */
#line 367 "parser.y"
                                    { printf("array_call:\n"); }
#line 2740 "parser.tab.c"
    break;

  case 125: /* num_const: NUM_10  */
#line 372 "parser.y"
             { (yyval.tree) = mk_int_const((yyvsp[0].int_value)); }
#line 2746 "parser.tab.c"
    break;

  case 126: /* num_const: NUM_16  */
#line 373 "parser.y"
             { (yyval.tree) = mk_int_const((yyvsp[0].int_value)); }
#line 2752 "parser.tab.c"
    break;

  case 127: /* num_const: REAL_NUMBER  */
#line 374 "parser.y"
                  { (yyval.tree) = mk_real_const((yyvsp[0].real_value)); }
#line 2758 "parser.tab.c"
    break;

  case 128: /* num_const: REAL_NUMBER_EXPONENT  */
#line 375 "parser.y"
                           { (yyval.tree) = mk_real_const((yyvsp[0].real_value)); }
#line 2764 "parser.tab.c"
    break;

  case 130: /* const: CONST_STRING  */
#line 381 "parser.y"
                   { (yyval.tree) = mk_string_const((yyvsp[0].str_value)); }
#line 2770 "parser.tab.c"
    break;

  case 131: /* const: CONST_CHAR  */
#line 382 "parser.y"
                 { (yyval.tree) = mk_char_const((yyvsp[0].str_value)); }
#line 2776 "parser.tab.c"
    break;

  case 132: /* const: KW_TRUE  */
#line 383 "parser.y"
              { (yyval.tree) = mk_boolean_const(true); }
#line 2782 "parser.tab.c"
    break;

  case 133: /* const: KW_FALSE  */
#line 384 "parser.y"
               { (yyval.tree) = mk_boolean_const(false); }
#line 2788 "parser.tab.c"
    break;

  case 134: /* const: KW_NULL  */
#line 385 "parser.y"
              { (yyval.tree) = mk_null_const(); }
#line 2794 "parser.tab.c"
    break;

  case 135: /* const: array  */
#line 386 "parser.y"
            { (yyval.tree) = mk_array_const((yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2800 "parser.tab.c"
    break;

  case 136: /* params: IDENTIFIER ':' type_list_car  */
#line 392 "parser.y"
                                    { (yyval.tree) = mk_method_params(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2806 "parser.tab.c"
    break;

  case 137: /* params: IDENTIFIER ':' type_list_car '=' const  */
#line 393 "parser.y"
                                              { (yyval.tree) = mk_method_params_value(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2812 "parser.tab.c"
    break;

  case 138: /* params: params ',' IDENTIFIER ':' type_list_car  */
#line 394 "parser.y"
                                               { (yyval.tree) = mk_list(), (yyval.tree) = mk_method_params(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2818 "parser.tab.c"
    break;

  case 139: /* params: params ',' IDENTIFIER ':' type_list_car '=' const  */
#line 395 "parser.y"
                                                         { (yyval.tree) = mk_list(),  (yyval.tree) = mk_method_params_value(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2824 "parser.tab.c"
    break;

  case 141: /* anonymous_func: '(' params ')' endlOpt RIGHT_ARROW_OPERATOR endlOpt expr  */
#line 401 "parser.y"
                                                                                   { (yyval.tree) = mk_anonym_func((yyvsp[-5].tree),(yyvsp[0].tree));}
#line 2830 "parser.tab.c"
    break;

  case 142: /* method_params_list: '(' params ')'  */
#line 406 "parser.y"
                   { (yyval.tree) = (yyvsp[-1].tree); }
#line 2836 "parser.tab.c"
    break;

  case 143: /* method_params_list: method_params_list endlOpt '(' params ')'  */
#line 407 "parser.y"
                                              { (yyval.tree) = mk_list(); (yyval.tree) = add_to_list((yyvsp[-4].tree),(yyvsp[-1].tree));}
#line 2842 "parser.tab.c"
    break;

  case 144: /* method: DEF endlOpt IDENTIFIER endlOpt method_params_list endlOpt ':' endlOpt type endlOpt '=' endlOpt expr  */
#line 411 "parser.y"
                                                                                                          { (yyval.tree) = mk_method_declaration(mk_ident_lit((yyvsp[-10].str_value)),(yyvsp[-8].tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2848 "parser.tab.c"
    break;

  case 145: /* method: DEF endlOpt IDENTIFIER endlOpt ':' endlOpt type endlOpt '=' endlOpt expr  */
#line 412 "parser.y"
                                                                               { (yyval.tree) = mk_method_declaration_typeOnly(mk_ident_lit((yyvsp[-8].str_value)),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2854 "parser.tab.c"
    break;

  case 146: /* method: DEF endlOpt IDENTIFIER endlOpt method_params_list endlOpt '=' endlOpt expr  */
#line 413 "parser.y"
                                                                                 { (yyval.tree) = mk_method_declaration_paramsOnly(mk_ident_lit((yyvsp[-6].str_value)),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2860 "parser.tab.c"
    break;

  case 147: /* method: DEF endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 414 "parser.y"
                                                      { (yyval.tree) = mk_method_declaration_bodyOnly(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[0].tree));}
#line 2866 "parser.tab.c"
    break;

  case 156: /* type: INT_KW  */
#line 434 "parser.y"
             { (yyval.tree) = mk_integer_type();found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2872 "parser.tab.c"
    break;

  case 157: /* type: DOUBLE_KW  */
#line 435 "parser.y"
                { (yyval.tree) = mk_real_type(); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2878 "parser.tab.c"
    break;

  case 158: /* type: STRING_KW  */
#line 436 "parser.y"
                { (yyval.tree) = mk_string_type();found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2884 "parser.tab.c"
    break;

  case 159: /* type: CHAR_KW  */
#line 437 "parser.y"
              { (yyval.tree) = mk_char_type();found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2890 "parser.tab.c"
    break;

  case 160: /* type: BOOLEAN_KW  */
#line 438 "parser.y"
                 { (yyval.tree) = mk_boolean_type();found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2896 "parser.tab.c"
    break;

  case 161: /* type: ANY_KW  */
#line 439 "parser.y"
             { (yyval.tree) = mk_any_type(); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2902 "parser.tab.c"
    break;

  case 162: /* type: UNIT_KW  */
#line 440 "parser.y"
              { (yyval.tree) = mk_unit_type();found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2908 "parser.tab.c"
    break;

  case 163: /* type_list_car: type  */
#line 444 "parser.y"
           { (yyval.tree) = mk_list(); (yyval.tree) = add_to_list((yyval.tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2914 "parser.tab.c"
    break;

  case 164: /* type_list_car: type_list_car RIGHT_ARROW_OPERATOR type  */
#line 445 "parser.y"
                                              { (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree));found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2920 "parser.tab.c"
    break;

  case 165: /* type_list: type  */
#line 449 "parser.y"
           { (yyval.tree) = mk_list(); (yyval.tree) = add_to_list((yyval.tree), (yyvsp[0].tree));found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2926 "parser.tab.c"
    break;

  case 166: /* type_list: type_list_simple ',' type  */
#line 450 "parser.y"
                                { (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2932 "parser.tab.c"
    break;

  case 167: /* type_list_simple: '(' type_list ')' RIGHT_ARROW_OPERATOR type  */
#line 454 "parser.y"
                                                 { (yyval.tree) = add_to_list((yyvsp[-3].tree), (yyvsp[0].tree));found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2938 "parser.tab.c"
    break;

  case 168: /* array: array_literal  */
#line 465 "parser.y"
                     {(yyval.tree) = (yyvsp[0].tree); }
#line 2944 "parser.tab.c"
    break;

  case 169: /* array: initialized_array  */
#line 466 "parser.y"
                         {(yyval.tree) = mk_initialized_array((yyvsp[0].tree));}
#line 2950 "parser.tab.c"
    break;

  case 170: /* array_literal: ARRAY endlOpt '(' expr_list_e ')'  */
#line 470 "parser.y"
                                        {  (yyval.tree) = mk_array_literal((yyvsp[-1].tree)); }
#line 2956 "parser.tab.c"
    break;

  case 171: /* array_literal: ARRAY  */
#line 471 "parser.y"
                                   { (yyval.tree) = mk_empty_array(); }
#line 2962 "parser.tab.c"
    break;

  case 172: /* initialized_array: NEW endlOpt ARRAY endlOpt '[' type ']' '(' expr ')'  */
#line 475 "parser.y"
                                                           { (yyval.tree) = mk_initialized_array_with_type_and_expr((yyvsp[-4].tree), (yyvsp[-1].tree));}
#line 2968 "parser.tab.c"
    break;

  case 173: /* endlList: ENDL  */
#line 484 "parser.y"
                    { printf("PARSER found ENDL\n"); }
#line 2974 "parser.tab.c"
    break;

  case 174: /* endlList: endlList ENDL  */
#line 485 "parser.y"
                    { printf("PARSER found endlList\n"); }
#line 2980 "parser.tab.c"
    break;

  case 175: /* endlOpt: endlList  */
#line 490 "parser.y"
               { printf("PARSER found endlOpt\n"); }
#line 2986 "parser.tab.c"
    break;

  case 177: /* semicolonList: ';'  */
#line 496 "parser.y"
                   { printf("PARSER found SEMICOLON\n"); }
#line 2992 "parser.tab.c"
    break;

  case 178: /* semicolonList: semicolonList ';'  */
#line 497 "parser.y"
                        { printf("PARSER found semicolonList\n"); }
#line 2998 "parser.tab.c"
    break;

  case 179: /* separator_List: ENDL  */
#line 501 "parser.y"
            { printf("PARSER found ENDL\n"); }
#line 3004 "parser.tab.c"
    break;

  case 180: /* separator_List: ';'  */
#line 502 "parser.y"
            { printf("PARSER found SEMICOLON\n"); }
#line 3010 "parser.tab.c"
    break;

  case 181: /* separator_List: separator_List ENDL  */
#line 503 "parser.y"
                            { printf("PARSER add ENDL to separator_List\n"); }
#line 3016 "parser.tab.c"
    break;

  case 182: /* separator_List: separator_List ';'  */
#line 504 "parser.y"
                           { printf("PARSER add ; to separator_List\n"); }
#line 3022 "parser.tab.c"
    break;


#line 3026 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 511 "parser.y"

