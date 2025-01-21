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

#include "FlexLexer.h"
extern int yylex();
extern int yylineno;
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



#line 106 "parser.tab.c"

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
    TRY = 279,                     /* TRY  */
    CATCH = 280,                   /* CATCH  */
    FINALLY = 281,                 /* FINALLY  */
    PRINT = 282,                   /* PRINT  */
    READLINE = 283,                /* READLINE  */
    ARRAY = 284,                   /* ARRAY  */
    OVERRIDE = 285,                /* OVERRIDE  */
    KW_TRUE = 286,                 /* KW_TRUE  */
    KW_FALSE = 287,                /* KW_FALSE  */
    KW_NULL = 288,                 /* KW_NULL  */
    EQ = 289,                      /* EQ  */
    NEQ = 290,                     /* NEQ  */
    KW_OR = 291,                   /* KW_OR  */
    KW_AND = 292,                  /* KW_AND  */
    MORE_OR_EQUAL_OPERATOR = 293,  /* MORE_OR_EQUAL_OPERATOR  */
    LESS_OR_EQUAL_OPERATOR = 294,  /* LESS_OR_EQUAL_OPERATOR  */
    INT_KW = 295,                  /* INT_KW  */
    DOUBLE_KW = 296,               /* DOUBLE_KW  */
    STRING_KW = 297,               /* STRING_KW  */
    CHAR_KW = 298,                 /* CHAR_KW  */
    BOOLEAN_KW = 299,              /* BOOLEAN_KW  */
    ANY_KW = 300,                  /* ANY_KW  */
    UNIT_KW = 301,                 /* UNIT_KW  */
    TO = 302,                      /* TO  */
    BY = 303,                      /* BY  */
    YIELD = 304,                   /* YIELD  */
    GENERATOR_OPERATOR = 305,      /* GENERATOR_OPERATOR  */
    RIGHT_ARROW_OPERATOR = 306,    /* RIGHT_ARROW_OPERATOR  */
    ID_COLLECTION = 307,           /* ID_COLLECTION  */
    LIST = 308,                    /* LIST  */
    VECTOR = 309,                  /* VECTOR  */
    SET = 310,                     /* SET  */
    DEF = 311,                     /* DEF  */
    NEW = 312,                     /* NEW  */
    PROTECTED = 313,               /* PROTECTED  */
    PRIVATE = 314,                 /* PRIVATE  */
    CLASS = 315,                   /* CLASS  */
    EXTENDS = 316,                 /* EXTENDS  */
    ABSTRACT = 317                 /* ABSTRACT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 41 "parser.y"

    int64_t int_value;
    double real_value;
    char* str_value;

#line 221 "parser.tab.c"

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
  YYSYMBOL_5_ = 5,                         /* ','  */
  YYSYMBOL_6_ = 6,                         /* '='  */
  YYSYMBOL_7_ = 7,                         /* '|'  */
  YYSYMBOL_8_ = 8,                         /* '&'  */
  YYSYMBOL_9_ = 9,                         /* '>'  */
  YYSYMBOL_10_ = 10,                       /* '<'  */
  YYSYMBOL_11_ = 11,                       /* '+'  */
  YYSYMBOL_12_ = 12,                       /* '-'  */
  YYSYMBOL_13_ = 13,                       /* '*'  */
  YYSYMBOL_14_ = 14,                       /* '/'  */
  YYSYMBOL_15_ = 15,                       /* '%'  */
  YYSYMBOL_UMINUS = 16,                    /* UMINUS  */
  YYSYMBOL_UPLUS = 17,                     /* UPLUS  */
  YYSYMBOL_18_ = 18,                       /* '('  */
  YYSYMBOL_19_ = 19,                       /* ')'  */
  YYSYMBOL_20_ = 20,                       /* '['  */
  YYSYMBOL_21_ = 21,                       /* ']'  */
  YYSYMBOL_NUM_10 = 22,                    /* NUM_10  */
  YYSYMBOL_NUM_16 = 23,                    /* NUM_16  */
  YYSYMBOL_REAL_NUMBER = 24,               /* REAL_NUMBER  */
  YYSYMBOL_REAL_NUMBER_EXPONENT = 25,      /* REAL_NUMBER_EXPONENT  */
  YYSYMBOL_IDENTIFIER = 26,                /* IDENTIFIER  */
  YYSYMBOL_CONST_CHAR = 27,                /* CONST_CHAR  */
  YYSYMBOL_CONST_STRING = 28,              /* CONST_STRING  */
  YYSYMBOL_NEWLINE = 29,                   /* NEWLINE  */
  YYSYMBOL_VAL = 30,                       /* VAL  */
  YYSYMBOL_VAR = 31,                       /* VAR  */
  YYSYMBOL_ELSE = 32,                      /* ELSE  */
  YYSYMBOL_IF = 33,                        /* IF  */
  YYSYMBOL_FOR = 34,                       /* FOR  */
  YYSYMBOL_DO = 35,                        /* DO  */
  YYSYMBOL_WHILE = 36,                     /* WHILE  */
  YYSYMBOL_MATCH = 37,                     /* MATCH  */
  YYSYMBOL_CASE = 38,                      /* CASE  */
  YYSYMBOL_TRY = 39,                       /* TRY  */
  YYSYMBOL_CATCH = 40,                     /* CATCH  */
  YYSYMBOL_FINALLY = 41,                   /* FINALLY  */
  YYSYMBOL_PRINT = 42,                     /* PRINT  */
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
  YYSYMBOL_LIST = 68,                      /* LIST  */
  YYSYMBOL_VECTOR = 69,                    /* VECTOR  */
  YYSYMBOL_SET = 70,                       /* SET  */
  YYSYMBOL_DEF = 71,                       /* DEF  */
  YYSYMBOL_NEW = 72,                       /* NEW  */
  YYSYMBOL_PROTECTED = 73,                 /* PROTECTED  */
  YYSYMBOL_PRIVATE = 74,                   /* PRIVATE  */
  YYSYMBOL_CLASS = 75,                     /* CLASS  */
  YYSYMBOL_EXTENDS = 76,                   /* EXTENDS  */
  YYSYMBOL_ABSTRACT = 77,                  /* ABSTRACT  */
  YYSYMBOL_78_ = 78,                       /* '{'  */
  YYSYMBOL_79_ = 79,                       /* '}'  */
  YYSYMBOL_80_ = 80,                       /* ':'  */
  YYSYMBOL_81_ = 81,                       /* ';'  */
  YYSYMBOL_82___ = 82,                     /* '_'  */
  YYSYMBOL_83_ = 83,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 84,                  /* $accept  */
  YYSYMBOL_create_instance_class = 85,     /* create_instance_class  */
  YYSYMBOL_instance_case_class_in_case = 86, /* instance_case_class_in_case  */
  YYSYMBOL_visibility_modifier = 87,       /* visibility_modifier  */
  YYSYMBOL_statement_expr_list = 88,       /* statement_expr_list  */
  YYSYMBOL_statement_expr_list_e = 89,     /* statement_expr_list_e  */
  YYSYMBOL_statement = 90,                 /* statement  */
  YYSYMBOL_if_else_expr = 91,              /* if_else_expr  */
  YYSYMBOL_for_expr = 92,                  /* for_expr  */
  YYSYMBOL_generators_and_conditions_parentheses_List = 93, /* generators_and_conditions_parentheses_List  */
  YYSYMBOL_generators_and_conditions_curly_braces_List = 94, /* generators_and_conditions_curly_braces_List  */
  YYSYMBOL_while_expr = 95,                /* while_expr  */
  YYSYMBOL_do_while_expr = 96,             /* do_while_expr  */
  YYSYMBOL_match_expr = 97,                /* match_expr  */
  YYSYMBOL_case_condition = 98,            /* case_condition  */
  YYSYMBOL_case_list = 99,                 /* case_list  */
  YYSYMBOL_literal_list_case = 100,        /* literal_list_case  */
  YYSYMBOL_try_expr = 101,                 /* try_expr  */
  YYSYMBOL_catch = 102,                    /* catch  */
  YYSYMBOL_finally = 103,                  /* finally  */
  YYSYMBOL_expr_list_e = 104,              /* expr_list_e  */
  YYSYMBOL_expr_list = 105,                /* expr_list  */
  YYSYMBOL_expr = 106,                     /* expr  */
  YYSYMBOL_num_const = 107,                /* num_const  */
  YYSYMBOL_const = 108,                    /* const  */
  YYSYMBOL_func_call = 109,                /* func_call  */
  YYSYMBOL_params = 110,                   /* params  */
  YYSYMBOL_func = 111,                     /* func  */
  YYSYMBOL_method_params_list = 112,       /* method_params_list  */
  YYSYMBOL_method = 113,                   /* method  */
  YYSYMBOL_method_call = 114,              /* method_call  */
  YYSYMBOL_type = 115,                     /* type  */
  YYSYMBOL_type_list_car = 116,            /* type_list_car  */
  YYSYMBOL_type_list = 117,                /* type_list  */
  YYSYMBOL_type_list_simple = 118,         /* type_list_simple  */
  YYSYMBOL_array = 119,                    /* array  */
  YYSYMBOL_array_literal = 120,            /* array_literal  */
  YYSYMBOL_initialized_array = 121,        /* initialized_array  */
  YYSYMBOL_list = 122,                     /* list  */
  YYSYMBOL_vector = 123,                   /* vector  */
  YYSYMBOL_set = 124,                      /* set  */
  YYSYMBOL_endlList = 125,                 /* endlList  */
  YYSYMBOL_endlOpt = 126,                  /* endlOpt  */
  YYSYMBOL_semicolonList = 127,            /* semicolonList  */
  YYSYMBOL_separator_List = 128,           /* separator_List  */
  YYSYMBOL_separator_List_e = 129          /* separator_List_e  */
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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1244

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  165
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  479

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   317


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
       2,     2,     2,     2,     2,     2,     2,    15,     8,     2,
      18,    19,    13,    11,     5,    12,    83,    14,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    80,    81,
      10,     6,     9,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    20,     2,    21,     2,    82,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    78,     7,    79,     2,     2,     2,     2,
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
      16,    17,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    95,   150,   151,   160,   164,   165,   182,   183,   184,
     185,   186,   187,   191,   192,   196,   197,   198,   199,   200,
     209,   210,   211,   219,   220,   221,   222,   233,   234,   235,
     236,   237,   238,   239,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   257,   261,   267,   268,   273,   274,   275,
     276,   277,   278,   279,   283,   284,   285,   290,   291,   298,
     299,   300,   304,   308,   315,   316,   321,   322,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   365,   366,   367,   368,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   389,   393,   394,   395,
     396,   400,   405,   406,   410,   411,   412,   413,   414,   415,
     416,   417,   422,   423,   424,   430,   431,   432,   433,   434,
     435,   436,   440,   441,   447,   448,   452,   463,   464,   468,
     472,   479,   485,   491,   499,   500,   505,   506,   511,   512,
     516,   517,   518,   519,   523,   524
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
  "LOWER_THAN_EXPR", "','", "'='", "'|'", "'&'", "'>'", "'<'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "UMINUS", "UPLUS", "'('", "')'", "'['",
  "']'", "NUM_10", "NUM_16", "REAL_NUMBER", "REAL_NUMBER_EXPONENT",
  "IDENTIFIER", "CONST_CHAR", "CONST_STRING", "NEWLINE", "VAL", "VAR",
  "ELSE", "IF", "FOR", "DO", "WHILE", "MATCH", "CASE", "TRY", "CATCH",
  "FINALLY", "PRINT", "READLINE", "ARRAY", "OVERRIDE", "KW_TRUE",
  "KW_FALSE", "KW_NULL", "EQ", "NEQ", "KW_OR", "KW_AND",
  "MORE_OR_EQUAL_OPERATOR", "LESS_OR_EQUAL_OPERATOR", "INT_KW",
  "DOUBLE_KW", "STRING_KW", "CHAR_KW", "BOOLEAN_KW", "ANY_KW", "UNIT_KW",
  "TO", "BY", "YIELD", "GENERATOR_OPERATOR", "RIGHT_ARROW_OPERATOR",
  "ID_COLLECTION", "LIST", "VECTOR", "SET", "DEF", "NEW", "PROTECTED",
  "PRIVATE", "CLASS", "EXTENDS", "ABSTRACT", "'{'", "'}'", "':'", "';'",
  "'_'", "'.'", "$accept", "create_instance_class",
  "instance_case_class_in_case", "visibility_modifier",
  "statement_expr_list", "statement_expr_list_e", "statement",
  "if_else_expr", "for_expr", "generators_and_conditions_parentheses_List",
  "generators_and_conditions_curly_braces_List", "while_expr",
  "do_while_expr", "match_expr", "case_condition", "case_list",
  "literal_list_case", "try_expr", "catch", "finally", "expr_list_e",
  "expr_list", "expr", "num_const", "const", "func_call", "params", "func",
  "method_params_list", "method", "method_call", "type", "type_list_car",
  "type_list", "type_list_simple", "array", "array_literal",
  "initialized_array", "list", "vector", "set", "endlList", "endlOpt",
  "semicolonList", "separator_List", "separator_List_e", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-312)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-158)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,    51,    44,  -312,    63,   517,  -312,    31,  -312,  -312,
    -312,  -312,  -312,     6,  -312,  -312,    66,  -312,  -312,  -312,
      82,    95,   136,   129,  -312,  -312,    51,   164,  -312,   171,
    -312,  -312,  -312,  -312,  -312,  -312,    51,  -312,     8,     1,
     939,   939,   939,   939,   168,   143,   213,   177,   517,  -312,
     183,   939,    51,    51,   939,   939,  1001,   190,    51,    51,
      51,    51,   144,   205,   207,    64,    12,  -312,  -312,  -312,
    -312,  -312,  -312,  -312,   209,   146,  1190,    28,  -312,  -312,
    -312,   216,   217,   218,   240,    14,    51,    51,    51,    51,
     230,   939,  1028,  -312,  -312,    18,   618,   139,   939,    34,
     233,    21,   939,   246,   939,   939,   247,   241,  -312,  -312,
     189,    15,   813,  -312,   265,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
     249,   236,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,
    -312,  -312,   257,   939,  1028,   939,   211,   517,  -312,  1190,
    -312,   240,   195,   260,   237,   283,    51,    51,   939,    16,
      51,   593,   939,   180,  1073,  -312,   286,  -312,  -312,  -312,
      51,    51,   235,    51,  -312,  -312,   112,    14,  -312,  1190,
    -312,    51,   939,   939,   939,   939,   939,   939,   939,   939,
     939,   939,   939,   939,   939,   939,   939,  -312,    51,   287,
    1190,  -312,  1190,    14,    51,  -312,   242,   285,   229,   939,
    -312,   939,   243,  1094,   253,   939,    29,   115,   278,  1121,
     141,  -312,   939,   293,   300,    51,   301,  -312,   733,  -312,
     939,   779,   203,   337,   337,   186,   186,  -312,  -312,  -312,
     153,   153,   125,   479,   337,   337,   250,   939,   939,   263,
     240,   316,   240,  1190,  1190,    51,    51,  1028,  1190,    51,
     939,   120,    51,    51,    51,   318,    51,   262,   264,   302,
    -312,   322,    51,    51,   319,    51,   112,  -312,  1190,  1190,
      51,  1142,  1190,    14,  -312,   939,    26,     0,   939,   284,
     662,  1190,   288,   939,   289,   939,   126,    -2,   939,   939,
       0,   939,  -312,  -312,    10,    17,    51,     2,  -312,     0,
    -312,   939,   338,  1028,    51,   324,  1028,    51,  1190,  1028,
    1190,    51,  1190,    51,    51,    51,    51,  1169,  -312,     4,
     231,    51,    51,    51,    51,    23,    51,   332,    51,   127,
      51,  1190,  -312,  -312,   -36,    51,    77,   296,   939,   303,
    1028,   299,   939,   877,   193,  -312,  -312,  -312,   939,   348,
     939,   348,    51,    51,   127,   939,   290,   142,   240,   332,
      24,   -11,  -312,   939,    51,  1028,  1190,  1028,   305,    51,
    1190,    51,  1190,    51,   939,  1190,   232,    51,  1190,    51,
     939,   240,    27,  1190,  -312,    51,   179,    51,    51,  -312,
    -312,   939,  -312,   306,    51,  1028,   939,   307,  1190,  -312,
     356,   371,   373,   375,  1190,    51,    51,    51,   377,  -312,
     939,   240,  -312,  1028,  1028,   323,  1190,    51,   321,   240,
      51,    51,   378,   939,   240,    51,  1190,    51,  -312,   326,
      51,  1028,   240,  -312,   939,   939,    51,  1190,    51,   939,
     384,    51,  1028,   329,  -312,  1190,  1190,   939,   386,  1190,
      51,  1028,   330,    51,  1190,    51,   939,  -312,    51,  1028,
     939,  1190,  1028,   335,  1190,  -312,    51,  1028,  -312
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   157,   157,   154,   156,     0,     1,     0,   155,   102,
     103,   104,   105,   157,   108,   107,     0,   109,   110,   111,
       0,     0,     0,     0,    53,    51,   157,    50,   106,    57,
     112,   147,   148,   113,   114,   115,   157,   158,   157,     0,
      65,    65,    65,    65,     0,     0,     0,     0,     0,   159,
       0,    65,   157,   157,     0,     0,   120,    69,   157,   157,
     157,   157,     0,     0,     0,   157,   165,    99,    90,    91,
      92,    93,    95,    94,     0,    64,    66,    68,    89,    97,
      98,     0,     0,     0,     0,   165,   157,   157,   157,   157,
       0,     0,     0,    88,    87,    69,     0,     0,    65,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   160,   161,
       0,   164,     0,   149,     0,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
       0,     0,   151,   152,   153,   135,   136,   137,   138,   139,
     140,   141,     0,     0,     0,     0,     0,     0,     4,    49,
      52,     0,    71,     0,     0,     0,   157,   157,     0,     0,
     157,   157,     0,     0,     0,   100,     2,    96,   162,   163,
     157,   157,     0,   157,     6,     5,     0,   165,     7,     9,
      19,   157,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   134,   157,     0,
      54,    58,    47,   165,   157,   142,   117,     0,     0,     0,
     116,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   101,    65,     0,     0,   157,     0,     8,   164,    13,
       0,    84,    83,    72,    73,    78,    79,    81,    80,    82,
      76,    77,    85,    86,    74,    75,     0,     0,     0,     0,
       0,   133,     0,   121,    70,   157,   157,     0,    27,   157,
       0,     0,   157,   157,   157,     0,   157,     0,     0,    59,
      60,     0,   157,   157,     0,   157,     0,    10,    11,    67,
     157,     0,    56,   165,   143,    65,   118,     0,     0,     0,
       0,    30,     0,     0,     0,     0,   156,     0,     0,     0,
       0,     0,    61,     3,     0,     0,   157,     0,    12,     0,
     150,     0,     0,     0,   157,    20,     0,   157,    24,     0,
      31,   157,    34,   157,   157,   157,   157,     0,    43,   157,
       0,   157,   157,   157,   157,     0,   157,   120,   157,   157,
     157,    55,   132,   119,     0,   157,     0,    28,     0,     0,
       0,     0,     0,     0,     0,    44,    62,    63,     0,     0,
       0,     0,   157,   157,   157,     0,     0,     0,     0,   120,
       0,     0,    45,     0,   157,     0,    23,     0,     0,   157,
      37,   157,    26,   157,     0,    15,     0,   157,    16,   157,
       0,     0,     0,   127,   122,   157,     0,   157,   157,    46,
      21,     0,    29,    32,   157,     0,     0,     0,    38,   144,
       0,     0,     0,     0,   131,   157,   157,   157,     0,   123,
       0,     0,    22,     0,     0,     0,    25,   157,     0,     0,
     157,   157,     0,     0,     0,   157,   126,   157,    33,    35,
     157,     0,     0,   145,     0,     0,   157,   130,   157,     0,
       0,   157,     0,     0,   146,    17,    18,     0,     0,   125,
     157,     0,    41,   157,   129,   157,     0,    36,   157,     0,
       0,   124,     0,    39,   128,    42,   157,     0,    40
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -312,  -312,  -312,   167,  -312,  -312,  -175,  -312,  -312,  -312,
    -312,  -312,  -312,  -312,   -45,   -40,  -312,  -312,  -312,   130,
     -37,  -312,   364,  -312,    58,  -312,  -291,  -312,    65,  -312,
    -312,   -74,   149,  -312,  -311,  -312,  -312,  -312,  -312,  -312,
    -312,  -242,    -1,  -312,   225,   -72
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    67,    25,   176,   177,   110,   178,    68,    69,   216,
     264,    70,    71,    72,    26,     2,    27,    73,   269,   270,
      74,    75,    76,    28,    77,    78,    97,    79,   339,   180,
      80,   205,   206,   410,   387,    30,    31,    32,    33,    34,
      35,     4,     7,    38,   111,   112
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       5,   227,    36,    88,    81,    82,    83,     3,   336,   -48,
     142,     3,    39,   143,    90,   108,   331,   108,   168,    51,
     337,     3,   296,   333,  -157,    45,    46,    36,    47,   362,
     397,   324,   313,   416,    52,    48,    98,    50,     1,   159,
     156,   337,   214,   372,     6,    37,   367,     3,   259,   215,
     389,    91,    92,   277,     3,  -157,    99,   100,   101,   102,
     103,   155,   260,    29,   107,  -157,     8,     3,   399,    36,
      37,   157,   -48,   346,   114,   411,   131,   325,   396,   326,
       8,    53,   338,   356,    40,   144,   145,   146,   147,    49,
     332,   -14,   250,   109,    99,   109,   169,   334,   151,   160,
      41,   308,   204,   363,   398,   229,    29,   417,    44,   374,
     261,   130,    37,    42,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,     8,
       3,   248,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   262,   170,   171,   153,   369,   292,   153,   263,     3,
     150,  -157,   323,   293,    43,   211,   212,   172,   154,   217,
     218,   394,   117,   118,   119,   120,   121,   122,   123,   223,
     224,  -157,   226,    44,   124,   125,   284,   127,   128,   129,
     230,   267,   268,   173,   153,   271,    84,   115,   116,   117,
     118,   119,   120,   121,   122,   123,  -157,   246,   419,   121,
     122,   123,   201,   249,  -157,    29,   128,   129,    98,    85,
      87,   311,   117,   118,   119,   120,   121,   122,   123,   383,
      86,    89,   104,   105,   274,   106,   384,  -157,   113,   124,
     125,   126,   127,   128,   129,   132,   133,   134,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   314,   312,   148,
     386,   158,   124,   125,   287,   288,   128,   129,   290,   220,
     329,   294,   295,   297,   162,   299,   165,   166,   167,   340,
     181,   304,   305,   198,   307,   197,   199,   203,   207,   309,
     124,   125,   126,   127,   128,   129,   208,   135,   136,   137,
     138,   139,   140,   141,   395,   135,   136,   137,   138,   139,
     140,   141,   210,   209,   222,   335,   225,   247,   250,   252,
     357,   251,   409,   344,   265,   289,   348,   415,   257,   272,
     350,   255,   351,   352,   353,   354,   273,   275,   280,   283,
     358,   359,   360,   361,   285,   365,   298,   368,   370,   371,
     300,   303,   301,   268,   373,   306,   316,   437,   119,   120,
     121,   122,   123,   319,   321,   443,   345,   342,   366,   375,
     448,   390,   391,   392,   379,   377,   386,   404,   454,   423,
     151,   343,   427,   401,   347,   428,   429,   349,   405,   430,
     406,   431,   407,   435,   446,   440,   412,   442,   413,   451,
     460,   463,   465,   468,   418,   276,   420,   421,   476,   302,
     364,   286,   228,   424,     0,     0,     0,     0,   378,     0,
       0,     0,     0,     0,   432,   433,   434,     0,    93,    94,
      96,     0,     0,     0,     0,     0,   441,     0,     0,   444,
     445,     0,     0,   402,   449,   403,   450,     0,     0,   452,
       0,     0,     0,     0,     0,   457,     0,   458,     0,     0,
     461,     0,     0,     0,     0,   149,     0,     0,     0,   466,
       0,     0,   469,   425,   470,     0,   161,   472,   163,   164,
       0,     0,     0,     0,     0,   477,   179,     0,     0,     0,
       0,   438,   439,     0,     0,     0,   115,   116,   117,   118,
     119,   120,   121,   122,   123,     0,     0,     0,     0,   453,
       0,     0,     0,     0,     0,     0,     0,   200,     0,   202,
     462,     0,     0,     0,     0,     0,     0,     0,     0,   467,
       0,     0,   213,     0,     0,     0,   219,   473,   124,   125,
     475,     0,   128,   129,     0,   478,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,    16,     0,    17,    18,    19,     0,     0,     0,     0,
       0,     0,     0,   253,     0,   254,     0,     0,     0,   258,
       0,     0,     0,     0,     0,    20,    21,    22,     0,    23,
       0,     0,   278,     0,   279,     0,     3,     0,     0,    24,
     115,   116,   117,   118,   119,   120,   121,   122,   123,     0,
       0,   281,   282,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   291,   115,   116,   117,   118,   119,
     120,   121,   122,   123,     0,     0,     0,   152,     0,     0,
       0,     0,   124,   125,   126,   127,   128,   129,     0,     0,
       0,     0,   315,     0,   318,     0,     0,   320,     0,   322,
       0,     0,   327,   328,     0,   330,     0,   124,   125,   126,
     127,   128,   129,    54,    55,   341,     0,     0,     0,     0,
      56,     0,     0,     0,     9,    10,    11,    12,    57,    14,
      15,     0,     0,     0,     0,    58,    59,    60,    61,     0,
       0,    62,     0,     0,    63,    64,    16,     0,    17,    18,
      19,     0,   376,     0,     0,     0,   380,   382,     0,     0,
       0,     0,   385,     0,   388,     0,   317,     0,     0,   393,
      20,    21,    22,     0,    65,     0,   168,   400,     0,     0,
      66,     0,     0,     0,    54,    55,     0,     0,   408,     0,
       0,    56,     0,     0,   414,     9,    10,    11,    12,    57,
      14,    15,     0,   170,   171,   422,    58,    59,    60,    61,
     426,     0,    62,     0,     0,    63,    64,    16,   172,    17,
      18,    19,     0,     0,   436,     0,     0,   116,   117,   118,
     119,   120,   121,   122,   123,     0,     0,   447,     0,     0,
       0,    20,    21,    22,   173,    65,   174,   175,   455,   456,
       0,    66,     0,   459,   169,     0,     0,     0,     0,     0,
       0,   464,     0,     0,    54,    55,     0,     0,   124,   125,
     471,    56,   128,   129,   474,     9,    10,    11,    12,    57,
      14,    15,     0,   170,   171,     0,    58,    59,    60,    61,
       0,     0,    62,     0,     0,    63,    64,    16,   172,    17,
      18,    19,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    20,    21,    22,   173,    65,   174,   175,    54,    55,
       0,    66,     0,     0,     0,    56,     0,     0,     0,     9,
      10,    11,    12,    57,    14,    15,     0,     0,     0,     0,
      58,    59,    60,    61,     0,     0,    62,     0,     0,    63,
      64,    16,     0,    17,    18,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   381,     0,     0,     0,    20,    21,    22,     0,    65,
      54,    55,     0,     0,     0,    66,     0,    56,     0,     0,
       0,     9,    10,    11,    12,    57,    14,    15,     0,     0,
       0,     0,    58,    59,    60,    61,     0,     0,    62,     0,
       0,    63,    64,    16,     0,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,    21,    22,
       0,    65,    54,    55,     0,     0,     0,    66,     0,    56,
       0,     0,     0,     9,    10,    11,    12,    95,    14,    15,
       0,     0,     0,     0,    58,    59,    60,    61,     0,     0,
      62,     0,     0,    63,    64,    16,     0,    17,    18,    19,
       9,    10,    11,    12,     0,    14,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
      21,    22,    16,    65,    17,    18,    19,     0,     0,    66,
     115,   116,   117,   118,   119,   120,   121,   122,   123,     0,
       0,     0,   221,     0,     0,     0,    20,    21,    22,     0,
      23,   115,   116,   117,   118,   119,   120,   121,   122,   123,
       0,     0,     0,   256,     0,     0,     0,     0,     0,     0,
       0,     0,   124,   125,   126,   127,   128,   129,   115,   116,
     117,   118,   119,   120,   121,   122,   123,     0,     0,     0,
     266,     0,     0,   124,   125,   126,   127,   128,   129,   115,
     116,   117,   118,   119,   120,   121,   122,   123,     0,     0,
       0,     0,     0,   310,     0,     0,     0,     0,     0,     0,
     124,   125,   126,   127,   128,   129,   115,   116,   117,   118,
     119,   120,   121,   122,   123,     0,     0,     0,   355,     0,
       0,   124,   125,   126,   127,   128,   129,   115,   116,   117,
     118,   119,   120,   121,   122,   123,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   124,   125,
     126,   127,   128,   129,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   124,
     125,   126,   127,   128,   129
};

static const yytype_int16 yycheck[] =
{
       1,   176,    38,    48,    41,    42,    43,     3,     6,     3,
      84,     3,    13,    85,    51,     3,     6,     3,     3,    18,
      18,     3,   264,     6,     6,    26,    27,    38,    29,     6,
       6,    33,     6,     6,    33,    36,    18,    38,    38,    18,
       6,    18,    26,    79,     0,    81,   337,     3,    19,    33,
     361,    52,    53,   228,     3,    37,    57,    58,    59,    60,
      61,    98,    33,     5,    65,    37,     3,     3,    79,    38,
      81,    37,    66,   315,    75,   386,    77,    79,   369,    81,
       3,    80,    80,    79,    18,    86,    87,    88,    89,    81,
      80,    79,    66,    81,    95,    81,    81,    80,    80,    78,
      18,   276,   147,    80,    80,   177,    48,    80,    44,    32,
      81,    83,    81,    18,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,     3,
       3,   203,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    26,    30,    31,     5,    18,    26,     5,    33,     3,
      92,     5,    26,    33,    18,   156,   157,    45,    19,   160,
     161,    19,     9,    10,    11,    12,    13,    14,    15,   170,
     171,     7,   173,    44,    49,    50,   250,    52,    53,    54,
     181,    40,    41,    71,     5,   222,    18,     7,     8,     9,
      10,    11,    12,    13,    14,    15,     6,   198,    19,    13,
      14,    15,   144,   204,    33,   147,    53,    54,    18,    66,
      33,   283,     9,    10,    11,    12,    13,    14,    15,    26,
       7,    38,    78,    18,   225,    18,    33,    37,    19,    49,
      50,    51,    52,    53,    54,    19,    19,    19,     7,     8,
       9,    10,    11,    12,    13,    14,    15,   287,   285,    19,
      18,    18,    49,    50,   255,   256,    53,    54,   259,    79,
     300,   262,   263,   264,    18,   266,    19,    26,    79,   309,
       5,   272,   273,    37,   275,    26,    19,    66,    83,   280,
      49,    50,    51,    52,    53,    54,    26,    55,    56,    57,
      58,    59,    60,    61,   368,    55,    56,    57,    58,    59,
      60,    61,    19,    66,    18,   306,    71,    20,    66,    80,
      79,    26,   386,   314,    36,   257,   317,   391,    65,    26,
     321,    78,   323,   324,   325,   326,    26,    26,    78,    66,
     331,   332,   333,   334,    18,   336,    18,   338,   339,   340,
      78,    19,    78,    41,   345,    26,    62,   421,    11,    12,
      13,    14,    15,    65,    65,   429,    32,    19,    26,    63,
     434,   362,   363,   364,    65,    62,    18,    62,   442,    63,
      80,   313,    65,   374,   316,    19,     5,   319,   379,     6,
     381,     6,   383,     6,     6,    62,   387,    66,   389,    63,
       6,    62,     6,    63,   395,   228,   397,   398,    63,   269,
     335,   252,   177,   404,    -1,    -1,    -1,    -1,   350,    -1,
      -1,    -1,    -1,    -1,   415,   416,   417,    -1,    54,    55,
      56,    -1,    -1,    -1,    -1,    -1,   427,    -1,    -1,   430,
     431,    -1,    -1,   375,   435,   377,   437,    -1,    -1,   440,
      -1,    -1,    -1,    -1,    -1,   446,    -1,   448,    -1,    -1,
     451,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,   460,
      -1,    -1,   463,   405,   465,    -1,   102,   468,   104,   105,
      -1,    -1,    -1,    -1,    -1,   476,   112,    -1,    -1,    -1,
      -1,   423,   424,    -1,    -1,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    -1,    -1,   441,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,    -1,   145,
     452,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   461,
      -1,    -1,   158,    -1,    -1,    -1,   162,   469,    49,    50,
     472,    -1,    53,    54,    -1,   477,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,    44,    -1,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   209,    -1,   211,    -1,    -1,    -1,   215,
      -1,    -1,    -1,    -1,    -1,    68,    69,    70,    -1,    72,
      -1,    -1,   228,    -1,   230,    -1,     3,    -1,    -1,    82,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,   247,   248,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   260,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    49,    50,    51,    52,    53,    54,    -1,    -1,
      -1,    -1,   288,    -1,   290,    -1,    -1,   293,    -1,   295,
      -1,    -1,   298,   299,    -1,   301,    -1,    49,    50,    51,
      52,    53,    54,    11,    12,   311,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    42,    43,    44,    -1,    46,    47,
      48,    -1,   348,    -1,    -1,    -1,   352,   353,    -1,    -1,
      -1,    -1,   358,    -1,   360,    -1,    64,    -1,    -1,   365,
      68,    69,    70,    -1,    72,    -1,     3,   373,    -1,    -1,
      78,    -1,    -1,    -1,    11,    12,    -1,    -1,   384,    -1,
      -1,    18,    -1,    -1,   390,    22,    23,    24,    25,    26,
      27,    28,    -1,    30,    31,   401,    33,    34,    35,    36,
     406,    -1,    39,    -1,    -1,    42,    43,    44,    45,    46,
      47,    48,    -1,    -1,   420,    -1,    -1,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,   433,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    74,   444,   445,
      -1,    78,    -1,   449,    81,    -1,    -1,    -1,    -1,    -1,
      -1,   457,    -1,    -1,    11,    12,    -1,    -1,    49,    50,
     466,    18,    53,    54,   470,    22,    23,    24,    25,    26,
      27,    28,    -1,    30,    31,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    42,    43,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    74,    11,    12,
      -1,    78,    -1,    -1,    -1,    18,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    42,
      43,    44,    -1,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    68,    69,    70,    -1,    72,
      11,    12,    -1,    -1,    -1,    78,    -1,    18,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    42,    43,    44,    -1,    46,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,
      -1,    72,    11,    12,    -1,    -1,    -1,    78,    -1,    18,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    42,    43,    44,    -1,    46,    47,    48,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      69,    70,    44,    72,    46,    47,    48,    -1,    -1,    78,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    68,    69,    70,    -1,
      72,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    51,    52,    53,    54,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    -1,
      19,    -1,    -1,    49,    50,    51,    52,    53,    54,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    51,    52,    53,    54,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    -1,    19,    -1,
      -1,    49,    50,    51,    52,    53,    54,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    53,    54
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    38,    99,     3,   125,   126,     0,   126,     3,    22,
      23,    24,    25,    26,    27,    28,    44,    46,    47,    48,
      68,    69,    70,    72,    82,    86,    98,   100,   107,   108,
     119,   120,   121,   122,   123,   124,    38,    81,   127,   126,
      18,    18,    18,    18,    44,   126,   126,   126,   126,    81,
     126,    18,    33,    80,    11,    12,    18,    26,    33,    34,
      35,    36,    39,    42,    43,    72,    78,    85,    91,    92,
      95,    96,    97,   101,   104,   105,   106,   108,   109,   111,
     114,   104,   104,   104,    18,    66,     7,    33,    98,    38,
     104,   126,   126,   106,   106,    26,   106,   110,    18,   126,
     126,   126,   126,   126,    78,    18,    18,   126,     3,    81,
      89,   128,   129,    19,   126,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    49,    50,    51,    52,    53,    54,
      83,   126,    19,    19,    19,    55,    56,    57,    58,    59,
      60,    61,   115,   129,   126,   126,   126,   126,    19,   106,
     108,    80,    19,     5,    19,   104,     6,    37,    18,    18,
      78,   106,    18,   106,   106,    19,    26,    79,     3,    81,
      30,    31,    45,    71,    73,    74,    87,    88,    90,   106,
     113,     5,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,    26,    37,    19,
     106,   108,   106,    66,    98,   115,   116,    83,    26,    66,
      19,   126,   126,   106,    26,    33,    93,   126,   126,   106,
      79,    19,    18,   126,   126,    71,   126,    90,   128,   129,
     126,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   126,    20,   129,   126,
      66,    26,    80,   106,   106,    78,    19,    65,   106,    19,
      33,    81,    26,    33,    94,    36,    19,    40,    41,   102,
     103,   104,    26,    26,   126,    26,    87,    90,   106,   106,
      78,   106,   106,    66,   115,    18,   116,   126,   126,   108,
     126,   106,    26,    33,   126,   126,   125,   126,    18,   126,
      78,    78,   103,    19,   126,   126,    26,   126,    90,   126,
      21,   129,   104,     6,    99,   106,    62,    64,   106,    65,
     106,    65,   106,    26,    33,    79,    81,   106,   106,    99,
     106,     6,    80,     6,    80,   126,     6,    18,    80,   112,
      99,   106,    19,   108,   126,    32,   125,   108,   126,   108,
     126,   126,   126,   126,   126,    19,    79,    79,   126,   126,
     126,   126,     6,    80,   112,   126,    26,   110,   126,    18,
     126,   126,    79,   126,    32,    63,   106,    62,   108,    65,
     106,    64,   106,    26,    33,   106,    18,   118,   106,   118,
     126,   126,   126,   106,    19,   115,   110,     6,    80,    79,
     106,   126,   108,   108,    62,   126,   126,   126,   106,   115,
     117,   118,   126,   126,   106,   115,     6,    80,   126,    19,
     126,   126,   106,    63,   126,   108,   106,    65,    19,     5,
       6,     6,   126,   126,   126,     6,   106,   115,   108,   108,
      62,   126,    66,   115,   126,   126,     6,   106,   115,   126,
     126,    63,   126,   108,   115,   106,   106,   126,   126,   106,
       6,   126,   108,    62,   106,     6,   126,   108,    63,   126,
     126,   106,   126,   108,   106,   108,    63,   126,   108
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    84,    85,    85,    86,    87,    87,    88,    88,    88,
      88,    88,    88,    89,    89,    90,    90,    90,    90,    90,
      91,    91,    91,    92,    92,    92,    92,    93,    93,    93,
      93,    93,    93,    93,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    95,    96,    97,    97,    98,    98,    98,
      98,    98,    98,    98,    99,    99,    99,   100,   100,   101,
     101,   101,   102,   103,   104,   104,   105,   105,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   107,   107,   107,   107,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   109,   110,   110,   110,
     110,   111,   112,   112,   113,   113,   113,   113,   113,   113,
     113,   113,   114,   114,   114,   115,   115,   115,   115,   115,
     115,   115,   116,   116,   117,   117,   118,   119,   119,   120,
     121,   122,   123,   124,   125,   125,   126,   126,   127,   127,
     128,   128,   128,   128,   129,   129
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     6,     5,     1,     1,     1,     2,     1,
       3,     3,     4,     3,     0,     7,     7,    11,    11,     1,
       7,    10,    11,     9,     7,    11,     9,     2,     5,     7,
       3,     4,     7,     9,     3,     8,    11,     5,     6,    12,
      15,    10,    13,     7,     8,     9,     9,     5,     1,     5,
       1,     1,     5,     1,     7,    11,     9,     1,     5,     5,
       5,     6,     4,     4,     1,     0,     1,     5,     1,     1,
       5,     3,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       3,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     5,     7,
       0,     5,     3,     4,    13,    11,     9,     7,    14,    12,
      10,     8,     8,     5,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     3,     5,     1,     1,     4,
       8,     4,     4,     4,     1,     2,     1,     0,     1,     2,
       1,     1,     2,     2,     1,     0
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
  case 7: /* statement_expr_list: statement  */
#line 182 "parser.y"
                { printf("Add first statement :\n"); }
#line 2179 "parser.tab.c"
    break;

  case 8: /* statement_expr_list: visibility_modifier statement  */
#line 183 "parser.y"
                                    { printf("Add first visibility_modifier statement :\n"); }
#line 2185 "parser.tab.c"
    break;

  case 9: /* statement_expr_list: expr  */
#line 184 "parser.y"
           { printf("Add first statement :\n"); }
#line 2191 "parser.tab.c"
    break;

  case 10: /* statement_expr_list: statement_expr_list separator_List statement  */
#line 185 "parser.y"
                                                    { printf("Add new statement to statement_expr_list :\n"); }
#line 2197 "parser.tab.c"
    break;

  case 11: /* statement_expr_list: statement_expr_list separator_List expr  */
#line 186 "parser.y"
                                               { printf("Add new expr to statement_expr_list :\n"); }
#line 2203 "parser.tab.c"
    break;

  case 12: /* statement_expr_list: statement_expr_list separator_List visibility_modifier statement  */
#line 187 "parser.y"
                                                                        { printf("Add new visibility_modifier to statement_expr_list :\n"); }
#line 2209 "parser.tab.c"
    break;

  case 14: /* statement_expr_list_e: %empty  */
#line 192 "parser.y"
                     { printf("PARSER found statement_list_e - nothing\n"); }
#line 2215 "parser.tab.c"
    break;

  case 15: /* statement: VAL endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 196 "parser.y"
                                                       { printf("implicit value declaration:\n"); }
#line 2221 "parser.tab.c"
    break;

  case 16: /* statement: VAR endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 197 "parser.y"
                                                       { printf("implicit variable declaration:\n"); }
#line 2227 "parser.tab.c"
    break;

  case 17: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 198 "parser.y"
                                                                                           { printf("explicit value declaration:\n"); }
#line 2233 "parser.tab.c"
    break;

  case 18: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 199 "parser.y"
                                                                                           { printf("explicit variable declaration:\n"); }
#line 2239 "parser.tab.c"
    break;

  case 19: /* statement: method  */
#line 200 "parser.y"
             { printf("Method:\n"); }
#line 2245 "parser.tab.c"
    break;

  case 20: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr  */
#line 209 "parser.y"
                                                      { printf("IF-CONSTR\n"); }
#line 2251 "parser.tab.c"
    break;

  case 21: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr ELSE endlOpt expr  */
#line 210 "parser.y"
                                                                          { printf("IF_ELSE-CONSTR\n"); }
#line 2257 "parser.tab.c"
    break;

  case 22: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr endlList ELSE endlOpt expr  */
#line 211 "parser.y"
                                                                                   { printf("IF_ELSE-CONSTR\n"); }
#line 2263 "parser.tab.c"
    break;

  case 23: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt YIELD endlOpt expr  */
#line 219 "parser.y"
                                                                                                                          { printf("FOR in parentheses\n"); }
#line 2269 "parser.tab.c"
    break;

  case 24: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt expr  */
#line 220 "parser.y"
                                                                                                            { printf("FOR in parentheses\n"); }
#line 2275 "parser.tab.c"
    break;

  case 25: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt YIELD endlOpt expr  */
#line 221 "parser.y"
                                                                                                                                           { printf("FOR in curly_braces\n"); }
#line 2281 "parser.tab.c"
    break;

  case 26: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt expr  */
#line 222 "parser.y"
                                                                                                                             { printf("FOR in curly_braces\n"); }
#line 2287 "parser.tab.c"
    break;

  case 64: /* expr_list_e: expr_list  */
#line 315 "parser.y"
                   { printf("PARSER found expr_list - expr_list\n"); }
#line 2293 "parser.tab.c"
    break;

  case 65: /* expr_list_e: %empty  */
#line 316 "parser.y"
                     { printf("PARSER found expr_list - nothing\n"); }
#line 2299 "parser.tab.c"
    break;

  case 66: /* expr_list: expr  */
#line 321 "parser.y"
                      { printf("PARSER found expr_list - expr\n"); }
#line 2305 "parser.tab.c"
    break;

  case 67: /* expr_list: expr_list endlOpt ',' endlOpt expr  */
#line 322 "parser.y"
                                          { printf("PARSER found expr_list - expr_list\n"); }
#line 2311 "parser.tab.c"
    break;

  case 68: /* expr: const  */
#line 327 "parser.y"
                                  {printf("PARSER found expr - const\n"); }
#line 2317 "parser.tab.c"
    break;

  case 69: /* expr: IDENTIFIER  */
#line 328 "parser.y"
                                       {printf("PARSER found expr - IDENTIFIER\n"); }
#line 2323 "parser.tab.c"
    break;

  case 70: /* expr: IDENTIFIER endlOpt '=' endlOpt expr  */
#line 329 "parser.y"
                                          { printf("Assignment:\n"); }
#line 2329 "parser.tab.c"
    break;

  case 71: /* expr: '(' expr ')'  */
#line 330 "parser.y"
                   { printf("PARSER found expr - ( expr ) \n"); }
#line 2335 "parser.tab.c"
    break;

  case 72: /* expr: expr '>' endlOpt expr  */
#line 331 "parser.y"
                            {printf("PARSER found expr - expr > expr\n"); }
#line 2341 "parser.tab.c"
    break;

  case 73: /* expr: expr '<' endlOpt expr  */
#line 332 "parser.y"
                            {printf("PARSER found expr - expr < expr\n"); }
#line 2347 "parser.tab.c"
    break;

  case 74: /* expr: expr MORE_OR_EQUAL_OPERATOR endlOpt expr  */
#line 333 "parser.y"
                                               {printf("PARSER found expr - expr >= expr\n"); }
#line 2353 "parser.tab.c"
    break;

  case 75: /* expr: expr LESS_OR_EQUAL_OPERATOR endlOpt expr  */
#line 334 "parser.y"
                                               {printf("PARSER found expr - expr <= expr\n"); }
#line 2359 "parser.tab.c"
    break;

  case 76: /* expr: expr EQ endlOpt expr  */
#line 335 "parser.y"
                           {printf("PARSER found expr - expr == expr\n"); }
#line 2365 "parser.tab.c"
    break;

  case 77: /* expr: expr NEQ endlOpt expr  */
#line 336 "parser.y"
                            {printf("PARSER found expr - expr != expr\n"); }
#line 2371 "parser.tab.c"
    break;

  case 78: /* expr: expr '+' endlOpt expr  */
#line 337 "parser.y"
                            { printf("PARSER found expr - expr + expr\n"); }
#line 2377 "parser.tab.c"
    break;

  case 79: /* expr: expr '-' endlOpt expr  */
#line 338 "parser.y"
                            { printf("PARSER found expr - expr - expr\n"); }
#line 2383 "parser.tab.c"
    break;

  case 80: /* expr: expr '/' endlOpt expr  */
#line 339 "parser.y"
                            { printf("PARSER found expr - expr / expr\n"); }
#line 2389 "parser.tab.c"
    break;

  case 81: /* expr: expr '*' endlOpt expr  */
#line 340 "parser.y"
                            { printf("PARSER found expr - expr * expr\n"); }
#line 2395 "parser.tab.c"
    break;

  case 82: /* expr: expr '%' endlOpt expr  */
#line 341 "parser.y"
                            { printf("PARSER found expr - expr % expr\n"); }
#line 2401 "parser.tab.c"
    break;

  case 83: /* expr: expr '&' endlOpt expr  */
#line 342 "parser.y"
                            { printf("PARSER found expr - expr && expr\n"); }
#line 2407 "parser.tab.c"
    break;

  case 84: /* expr: expr '|' endlOpt expr  */
#line 343 "parser.y"
                            { printf("PARSER found expr - expr | expr\n"); }
#line 2413 "parser.tab.c"
    break;

  case 85: /* expr: expr KW_OR endlOpt expr  */
#line 344 "parser.y"
                              { printf("PARSER found expr - expr || expr\n"); }
#line 2419 "parser.tab.c"
    break;

  case 86: /* expr: expr KW_AND endlOpt expr  */
#line 345 "parser.y"
                               { printf("PARSER found expr - expr && expr\n"); }
#line 2425 "parser.tab.c"
    break;

  case 87: /* expr: '-' expr  */
#line 346 "parser.y"
                             { printf("PARSER found expr - UMINUS\n"); }
#line 2431 "parser.tab.c"
    break;

  case 88: /* expr: '+' expr  */
#line 347 "parser.y"
                            { printf("PARSER found expr - UPLUS\n"); }
#line 2437 "parser.tab.c"
    break;

  case 89: /* expr: func_call  */
#line 348 "parser.y"
                { printf("PARSER found expr - func_call\n"); }
#line 2443 "parser.tab.c"
    break;

  case 90: /* expr: if_else_expr  */
#line 349 "parser.y"
                                        { printf("PARSER found expr - if_else_expr\n"); }
#line 2449 "parser.tab.c"
    break;

  case 91: /* expr: for_expr  */
#line 350 "parser.y"
               { printf("PARSER found expr - for_expr\n"); }
#line 2455 "parser.tab.c"
    break;

  case 92: /* expr: while_expr  */
#line 351 "parser.y"
                 { printf("PARSER found expr - while_expr\n"); }
#line 2461 "parser.tab.c"
    break;

  case 93: /* expr: do_while_expr  */
#line 352 "parser.y"
                    { printf("PARSER found expr - do_while_expr\n"); }
#line 2467 "parser.tab.c"
    break;

  case 94: /* expr: try_expr  */
#line 353 "parser.y"
               { printf("PARSER found expr - try_expr\n"); }
#line 2473 "parser.tab.c"
    break;

  case 95: /* expr: match_expr  */
#line 354 "parser.y"
                 { printf("PARSER found expr - match_expr\n"); }
#line 2479 "parser.tab.c"
    break;

  case 96: /* expr: '{' statement_expr_list_e '}'  */
#line 355 "parser.y"
                                     { printf("PARSER found expr -  { statement_expr_list_e }\n"); }
#line 2485 "parser.tab.c"
    break;

  case 97: /* expr: func  */
#line 356 "parser.y"
           { printf("Function:\n"); }
#line 2491 "parser.tab.c"
    break;

  case 98: /* expr: method_call  */
#line 357 "parser.y"
                  { printf("method_call:\n"); }
#line 2497 "parser.tab.c"
    break;

  case 99: /* expr: create_instance_class  */
#line 358 "parser.y"
                            { printf("instance_class:\n"); }
#line 2503 "parser.tab.c"
    break;

  case 100: /* expr: READLINE '(' ')'  */
#line 359 "parser.y"
                     { printf("readLine:\n"); }
#line 2509 "parser.tab.c"
    break;

  case 101: /* expr: PRINT '(' expr ')'  */
#line 360 "parser.y"
                        { printf("print:\n"); }
#line 2515 "parser.tab.c"
    break;

  case 102: /* num_const: NUM_10  */
#line 365 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 2521 "parser.tab.c"
    break;

  case 103: /* num_const: NUM_16  */
#line 366 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 2527 "parser.tab.c"
    break;

  case 104: /* num_const: REAL_NUMBER  */
#line 367 "parser.y"
                  { printf("PARSER found - REAL\n"); }
#line 2533 "parser.tab.c"
    break;

  case 105: /* num_const: REAL_NUMBER_EXPONENT  */
#line 368 "parser.y"
                           { printf("PARSER found - REAL_EXP\n"); }
#line 2539 "parser.tab.c"
    break;

  case 116: /* func_call: IDENTIFIER '(' expr_list_e ')'  */
#line 389 "parser.y"
                                     { printf("Function call: WITH PARAMS\n"); }
#line 2545 "parser.tab.c"
    break;

  case 149: /* array_literal: ARRAY '(' expr_list_e ')'  */
#line 468 "parser.y"
                                { printf("PARSER found Array\n"); }
#line 2551 "parser.tab.c"
    break;

  case 151: /* list: LIST '(' expr_list_e ')'  */
#line 479 "parser.y"
                               { printf("PARSER found List\n"); }
#line 2557 "parser.tab.c"
    break;

  case 152: /* vector: VECTOR '(' expr_list_e ')'  */
#line 485 "parser.y"
                                 { printf("PARSER found Vector\n"); }
#line 2563 "parser.tab.c"
    break;

  case 153: /* set: SET '(' expr_list_e ')'  */
#line 491 "parser.y"
                              { printf("PARSER found Set\n"); }
#line 2569 "parser.tab.c"
    break;

  case 154: /* endlList: ENDL  */
#line 499 "parser.y"
                    { printf("PARSER found ENDL\n"); }
#line 2575 "parser.tab.c"
    break;

  case 155: /* endlList: endlList ENDL  */
#line 500 "parser.y"
                    { printf("PARSER found endlList\n"); }
#line 2581 "parser.tab.c"
    break;

  case 156: /* endlOpt: endlList  */
#line 505 "parser.y"
               { printf("PARSER found endlOpt\n"); }
#line 2587 "parser.tab.c"
    break;

  case 158: /* semicolonList: ';'  */
#line 511 "parser.y"
                   { printf("PARSER found SEMICOLON\n"); }
#line 2593 "parser.tab.c"
    break;

  case 159: /* semicolonList: semicolonList ';'  */
#line 512 "parser.y"
                        { printf("PARSER found semicolonList\n"); }
#line 2599 "parser.tab.c"
    break;

  case 160: /* separator_List: ENDL  */
#line 516 "parser.y"
            { printf("PARSER found ENDL\n"); }
#line 2605 "parser.tab.c"
    break;

  case 161: /* separator_List: ';'  */
#line 517 "parser.y"
            { printf("PARSER found SEMICOLON\n"); }
#line 2611 "parser.tab.c"
    break;

  case 162: /* separator_List: separator_List ENDL  */
#line 518 "parser.y"
                            { printf("PARSER add ENDL to separator_List\n"); }
#line 2617 "parser.tab.c"
    break;

  case 163: /* separator_List: separator_List ';'  */
#line 519 "parser.y"
                           { printf("PARSER add ; to separator_List\n"); }
#line 2623 "parser.tab.c"
    break;


#line 2627 "parser.tab.c"

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

#line 526 "parser.y"

