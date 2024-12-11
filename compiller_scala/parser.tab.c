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
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "FlexLexer.h"
extern int yylex();
extern int yylineno;
void yyerror(const char *s);

#line 82 "parser.tab.c"

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

#line 196 "parser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_LOWER_THAN_EXPR = 3,            /* LOWER_THAN_EXPR  */
  YYSYMBOL_4_ = 4,                         /* ','  */
  YYSYMBOL_5_ = 5,                         /* '='  */
  YYSYMBOL_6_ = 6,                         /* '|'  */
  YYSYMBOL_7_ = 7,                         /* '&'  */
  YYSYMBOL_8_ = 8,                         /* '>'  */
  YYSYMBOL_9_ = 9,                         /* '<'  */
  YYSYMBOL_10_ = 10,                       /* '+'  */
  YYSYMBOL_11_ = 11,                       /* '-'  */
  YYSYMBOL_UMINUS = 12,                    /* UMINUS  */
  YYSYMBOL_UPLUS = 13,                     /* UPLUS  */
  YYSYMBOL_14_ = 14,                       /* '*'  */
  YYSYMBOL_15_ = 15,                       /* '/'  */
  YYSYMBOL_16_ = 16,                       /* '%'  */
  YYSYMBOL_17_ = 17,                       /* '('  */
  YYSYMBOL_18_ = 18,                       /* ')'  */
  YYSYMBOL_19_ = 19,                       /* '['  */
  YYSYMBOL_20_ = 20,                       /* ']'  */
  YYSYMBOL_NUM_10 = 21,                    /* NUM_10  */
  YYSYMBOL_NUM_16 = 22,                    /* NUM_16  */
  YYSYMBOL_REAL_NUMBER = 23,               /* REAL_NUMBER  */
  YYSYMBOL_REAL_NUMBER_EXPONENT = 24,      /* REAL_NUMBER_EXPONENT  */
  YYSYMBOL_IDENTIFIER = 25,                /* IDENTIFIER  */
  YYSYMBOL_CONST_CHAR = 26,                /* CONST_CHAR  */
  YYSYMBOL_CONST_STRING = 27,              /* CONST_STRING  */
  YYSYMBOL_NEWLINE = 28,                   /* NEWLINE  */
  YYSYMBOL_VAL = 29,                       /* VAL  */
  YYSYMBOL_VAR = 30,                       /* VAR  */
  YYSYMBOL_ELSE = 31,                      /* ELSE  */
  YYSYMBOL_IF = 32,                        /* IF  */
  YYSYMBOL_ELSE_IF = 33,                   /* ELSE_IF  */
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
  YYSYMBOL_KW_TRUE = 44,                   /* KW_TRUE  */
  YYSYMBOL_KW_FALSE = 45,                  /* KW_FALSE  */
  YYSYMBOL_KW_NULL = 46,                   /* KW_NULL  */
  YYSYMBOL_EQ = 47,                        /* EQ  */
  YYSYMBOL_NEQ = 48,                       /* NEQ  */
  YYSYMBOL_KW_OR = 49,                     /* KW_OR  */
  YYSYMBOL_KW_AND = 50,                    /* KW_AND  */
  YYSYMBOL_MORE_OR_EQUAL_OPERATOR = 51,    /* MORE_OR_EQUAL_OPERATOR  */
  YYSYMBOL_LESS_OR_EQUAL_OPERATOR = 52,    /* LESS_OR_EQUAL_OPERATOR  */
  YYSYMBOL_INT_KW = 53,                    /* INT_KW  */
  YYSYMBOL_DOUBLE_KW = 54,                 /* DOUBLE_KW  */
  YYSYMBOL_STRING_KW = 55,                 /* STRING_KW  */
  YYSYMBOL_CHAR_KW = 56,                   /* CHAR_KW  */
  YYSYMBOL_BOOLEAN_KW = 57,                /* BOOLEAN_KW  */
  YYSYMBOL_ANY_KW = 58,                    /* ANY_KW  */
  YYSYMBOL_UNIT_KW = 59,                   /* UNIT_KW  */
  YYSYMBOL_TO = 60,                        /* TO  */
  YYSYMBOL_BY = 61,                        /* BY  */
  YYSYMBOL_YIELD = 62,                     /* YIELD  */
  YYSYMBOL_GENERATOR_OPERATOR = 63,        /* GENERATOR_OPERATOR  */
  YYSYMBOL_RIGHT_ARROW_OPERATOR = 64,      /* RIGHT_ARROW_OPERATOR  */
  YYSYMBOL_ID_COLLECTION = 65,             /* ID_COLLECTION  */
  YYSYMBOL_ARRAY = 66,                     /* ARRAY  */
  YYSYMBOL_LIST = 67,                      /* LIST  */
  YYSYMBOL_VECTOR = 68,                    /* VECTOR  */
  YYSYMBOL_SET = 69,                       /* SET  */
  YYSYMBOL_DEF = 70,                       /* DEF  */
  YYSYMBOL_NEW = 71,                       /* NEW  */
  YYSYMBOL_PROTECTED = 72,                 /* PROTECTED  */
  YYSYMBOL_PRIVATE = 73,                   /* PRIVATE  */
  YYSYMBOL_CLASS = 74,                     /* CLASS  */
  YYSYMBOL_CLASS_ID = 75,                  /* CLASS_ID  */
  YYSYMBOL_EXTENDS = 76,                   /* EXTENDS  */
  YYSYMBOL_77_ = 77,                       /* '{'  */
  YYSYMBOL_78_ = 78,                       /* '}'  */
  YYSYMBOL_79_ = 79,                       /* ':'  */
  YYSYMBOL_80_ = 80,                       /* ';'  */
  YYSYMBOL_81_ = 81,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 82,                  /* $accept  */
  YYSYMBOL_program = 83,                   /* program  */
  YYSYMBOL_instance_class = 84,            /* instance_class  */
  YYSYMBOL_visibility_modifier = 85,       /* visibility_modifier  */
  YYSYMBOL_statement_expr_list = 86,       /* statement_expr_list  */
  YYSYMBOL_statement_expr_list_e = 87,     /* statement_expr_list_e  */
  YYSYMBOL_statement = 88,                 /* statement  */
  YYSYMBOL_if_else_expr = 89,              /* if_else_expr  */
  YYSYMBOL_else_expr = 90,                 /* else_expr  */
  YYSYMBOL_if_condition_list = 91,         /* if_condition_list  */
  YYSYMBOL_for_expr = 92,                  /* for_expr  */
  YYSYMBOL_for_params = 93,                /* for_params  */
  YYSYMBOL_for_multy_list = 94,            /* for_multy_list  */
  YYSYMBOL_while_expr = 95,                /* while_expr  */
  YYSYMBOL_do_while_expr = 96,             /* do_while_expr  */
  YYSYMBOL_match_expr = 97,                /* match_expr  */
  YYSYMBOL_case_condition = 98,            /* case_condition  */
  YYSYMBOL_int_literal_list_case = 99,     /* int_literal_list_case  */
  YYSYMBOL_case_list = 100,                /* case_list  */
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
  YYSYMBOL_method_params_list_e = 112,     /* method_params_list_e  */
  YYSYMBOL_method_params_list = 113,       /* method_params_list  */
  YYSYMBOL_method = 114,                   /* method  */
  YYSYMBOL_method_call = 115,              /* method_call  */
  YYSYMBOL_type = 116,                     /* type  */
  YYSYMBOL_type_list_car = 117,            /* type_list_car  */
  YYSYMBOL_type_list = 118,                /* type_list  */
  YYSYMBOL_type_list_simple = 119,         /* type_list_simple  */
  YYSYMBOL_array = 120,                    /* array  */
  YYSYMBOL_list = 121,                     /* list  */
  YYSYMBOL_vector = 122,                   /* vector  */
  YYSYMBOL_set = 123                       /* set  */
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  81
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   989

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  146
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  299

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   316


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
       2,     2,     2,     2,     2,     2,     2,    16,     7,     2,
      17,    18,    14,    10,     4,    11,    81,    15,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    79,    80,
       9,     5,     8,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    19,     2,    20,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    77,     6,    78,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,    12,
      13,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    65,    65,    95,    96,   100,   101,   102,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   129,   130,   134,
     135,   136,   137,   138,   139,   140,   149,   153,   157,   158,
     159,   160,   167,   168,   169,   170,   171,   172,   177,   178,
     183,   184,   185,   186,   192,   196,   200,   201,   206,   207,
     208,   209,   213,   214,   218,   219,   220,   221,   227,   228,
     229,   233,   237,   244,   245,   250,   251,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   296,   297,   298,   299,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   321,   325,   326,   327,
     328,   332,   337,   338,   342,   343,   347,   348,   353,   354,
     355,   361,   362,   363,   364,   365,   366,   367,   371,   372,
     376,   377,   381,   394,   400,   406,   412
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "LOWER_THAN_EXPR",
  "','", "'='", "'|'", "'&'", "'>'", "'<'", "'+'", "'-'", "UMINUS",
  "UPLUS", "'*'", "'/'", "'%'", "'('", "')'", "'['", "']'", "NUM_10",
  "NUM_16", "REAL_NUMBER", "REAL_NUMBER_EXPONENT", "IDENTIFIER",
  "CONST_CHAR", "CONST_STRING", "NEWLINE", "VAL", "VAR", "ELSE", "IF",
  "ELSE_IF", "FOR", "DO", "WHILE", "MATCH", "CASE", "TRY", "CATCH",
  "FINALLY", "PRINT", "READLINE", "KW_TRUE", "KW_FALSE", "KW_NULL", "EQ",
  "NEQ", "KW_OR", "KW_AND", "MORE_OR_EQUAL_OPERATOR",
  "LESS_OR_EQUAL_OPERATOR", "INT_KW", "DOUBLE_KW", "STRING_KW", "CHAR_KW",
  "BOOLEAN_KW", "ANY_KW", "UNIT_KW", "TO", "BY", "YIELD",
  "GENERATOR_OPERATOR", "RIGHT_ARROW_OPERATOR", "ID_COLLECTION", "ARRAY",
  "LIST", "VECTOR", "SET", "DEF", "NEW", "PROTECTED", "PRIVATE", "CLASS",
  "CLASS_ID", "EXTENDS", "'{'", "'}'", "':'", "';'", "'.'", "$accept",
  "program", "instance_class", "visibility_modifier",
  "statement_expr_list", "statement_expr_list_e", "statement",
  "if_else_expr", "else_expr", "if_condition_list", "for_expr",
  "for_params", "for_multy_list", "while_expr", "do_while_expr",
  "match_expr", "case_condition", "int_literal_list_case", "case_list",
  "try_expr", "catch", "finally", "expr_list_e", "expr_list", "expr",
  "num_const", "const", "func_call", "params", "func",
  "method_params_list_e", "method_params_list", "method", "method_call",
  "type", "type_list_car", "type_list", "type_list_simple", "array",
  "list", "vector", "set", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-156)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     253,   569,   569,   631,  -156,  -156,  -156,  -156,   119,  -156,
    -156,    -5,     1,    23,    -4,   569,    24,   -35,    27,    35,
    -156,  -156,  -156,    36,    38,    39,    46,    42,   -29,  -156,
    -156,  -156,   253,    51,  -156,     6,    26,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,   869,  -156,   -23,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,    34,    34,    28,   703,
      19,   569,   569,    -3,    22,    25,   569,    57,    57,   723,
     569,   569,   569,    91,   569,   569,   569,   569,    88,    98,
      40,  -156,  -156,   321,   321,   569,   569,   569,   569,   569,
     569,   569,   569,   569,   569,   569,   569,   569,   569,   569,
      43,    97,    87,    54,   124,    59,   869,   130,   158,   869,
     125,   569,   249,   569,   249,   770,   101,   147,   135,    32,
     152,   783,   123,   796,  -156,   164,   165,   167,   168,   151,
      29,   181,   569,  -156,  -156,   869,  -156,   869,   937,   325,
     299,   299,    34,    34,  -156,  -156,  -156,   422,   422,   916,
     927,   299,   299,   125,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,   115,   177,   126,   569,  -156,   569,   189,
      41,   869,   249,    11,   198,   869,    13,   199,   569,   659,
     383,   569,   129,  -156,   445,    57,  -156,   569,   569,   -12,
    -156,  -156,  -156,  -156,  -156,   127,    20,   569,    87,   151,
     190,   161,    87,   200,    87,   869,   869,   191,   163,   219,
     194,  -156,   189,  -156,  -156,  -156,   212,   228,   569,   569,
     569,   569,   843,   176,   569,   869,   869,  -156,   569,   507,
     205,   569,   869,  -156,   854,  -156,   166,   169,   197,  -156,
    -156,   869,   239,    21,  -156,  -156,  -156,   569,    14,   569,
     569,   659,   569,   183,   184,    87,   869,   869,   869,   869,
     569,  -156,   659,   869,   869,   569,   869,   569,   869,  -156,
     125,   569,  -156,   569,  -156,   227,   659,   869,   869,  -156,
     869,   569,    87,  -156,   869,   192,   869,   869,   162,   144,
     869,  -156,  -156,   869,  -156,   659,  -156,  -156,  -156
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      18,     0,     0,   120,   102,   103,   104,   105,    68,   108,
     107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     109,   110,   111,     0,     0,     0,     0,     0,     0,     6,
       5,    69,    18,     0,    99,     0,    17,     2,     8,    90,
      91,    92,    93,    95,    94,    10,   106,    67,    89,    97,
      25,    98,   112,   113,   114,   115,    88,    87,    68,     0,
       0,     0,    64,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    64,    64,    64,   123,     3,
       0,     1,     9,    16,    15,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    71,     0,     0,    70,     0,    63,    65,
       0,     0,     0,     0,     0,     0,     0,     0,    40,     0,
       0,     0,     0,     0,   100,     0,     0,     0,     0,   120,
       0,   122,    64,    96,    12,    14,    11,    13,    84,    83,
      72,    73,    78,    79,    81,    80,    82,    76,    77,    85,
      86,    74,    75,     0,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   117,     0,     0,     0,   116,     0,     0,
       0,    19,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,    43,     0,     0,    41,     0,     0,     0,
     101,   143,   144,   145,   146,     0,     0,     0,     0,   120,
       0,     0,     0,   129,     0,   121,    66,    49,     0,    51,
      52,    56,     0,    46,    57,   140,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    35,    28,    31,     0,     0,
       0,     0,    36,    42,     0,    44,     0,     0,    58,    59,
     124,   127,     0,     0,     4,    47,   139,    64,   118,     0,
       0,     0,     0,     0,     0,     0,    21,    22,    23,    24,
       0,    26,     0,    32,    29,     0,    37,     0,    33,    45,
       0,     0,    60,     0,   125,     0,     0,    50,    54,    53,
      48,     0,     0,   141,    27,    38,    34,    30,     0,     0,
     126,   128,   119,    55,   142,     0,    61,    62,    39
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -156,  -156,  -156,  -156,  -156,   222,    33,  -156,  -156,  -156,
    -156,   -60,  -156,  -156,  -156,  -156,    47,  -156,  -144,  -156,
    -156,    30,   -70,  -156,     0,  -156,  -148,  -156,  -118,  -156,
    -156,  -156,  -156,  -156,  -155,  -102,  -156,   -92,  -156,  -156,
    -156,  -156
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    33,    34,    35,    36,    37,    38,    39,   261,   182,
      40,   117,   119,    41,    42,    43,   208,   209,   170,    44,
     238,   239,   107,   108,   109,    46,    47,    48,    60,    49,
     130,   131,    50,    51,   162,   163,   216,   174,    52,    53,
      54,    55
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      45,    56,    57,    59,   125,   126,   127,   128,   118,   201,
     173,   196,   176,    67,   100,    69,   218,   215,   220,   276,
      64,   210,   177,   104,   104,   104,    65,   111,   236,   237,
     113,   223,    45,    61,   197,    11,    12,   105,   240,   274,
      66,    70,    71,   242,    72,    62,    79,   246,    91,    92,
      93,    81,    73,    74,    83,    75,    76,   116,   101,   186,
     183,   106,   200,    77,   210,    63,   115,    78,    82,   211,
     121,   122,   123,    68,   110,   202,    27,   202,   202,   212,
     217,   243,   116,   135,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     283,   112,   248,   279,   114,   129,    84,   102,   198,   124,
     184,   171,   185,   175,   285,   132,   134,   136,   133,   213,
     153,   214,   154,   166,    61,   233,   288,   294,   292,    85,
      86,    87,    88,    89,    90,   164,    62,    91,    92,    93,
     155,   156,   157,   158,   159,   160,   161,   298,   167,   165,
      85,    86,    87,    88,    89,    90,    63,   227,    91,    92,
      93,   228,   168,   169,   179,   180,   205,   181,   206,   187,
      94,    95,    96,    97,    98,    99,   195,   275,   222,   202,
     225,   226,   191,   192,   232,   193,   194,   234,   235,   211,
     211,    94,    95,    96,    97,    98,    99,   241,   199,   212,
     212,   189,   203,   219,   221,   204,   102,   229,   244,   230,
       4,     5,     6,     7,   207,     9,    10,   247,   256,   257,
     258,   259,   297,   249,   263,   251,   252,   250,   264,   266,
     254,   268,   255,    20,    21,    22,   262,   267,   237,   245,
     296,   214,   214,   270,   273,   291,   271,   281,   282,   277,
     278,     0,   280,   295,    80,    23,    24,    25,    26,   253,
     284,     0,     0,     1,     2,   286,   172,   287,   272,     0,
       3,   289,     0,   290,     4,     5,     6,     7,     8,     9,
      10,   293,    11,    12,     0,    13,     0,    14,    15,    16,
       0,     0,    17,     0,     0,    18,    19,    20,    21,    22,
       0,     0,   155,   156,   157,   158,   159,   160,   161,    89,
      90,     0,     0,    91,    92,    93,     0,     0,     0,    23,
      24,    25,    26,    27,    28,    29,    30,     0,    31,     0,
      32,     1,     2,    87,    88,    89,    90,     0,     3,    91,
      92,    93,     4,     5,     6,     7,     8,     9,    10,     0,
      11,    12,     0,    13,     0,    14,    15,    16,     0,     0,
      17,     0,     0,    18,    19,    20,    21,    22,     0,     0,
       0,     0,    94,    95,     0,     0,    98,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,    24,    25,
      26,    27,    28,     1,     2,     0,    31,     0,    32,     0,
       3,     0,     0,     0,     4,     5,     6,     7,     8,     9,
      10,     0,     0,     0,     0,    13,     0,    14,    15,    16,
       0,     0,    17,     0,     0,    18,    19,    20,    21,    22,
      87,    88,    89,    90,     0,     0,    91,    92,    93,     0,
       0,     0,     0,     0,     0,   224,     0,     0,     0,    23,
      24,    25,    26,     0,    28,     1,     2,     0,    31,     0,
      32,     0,     3,     0,     0,     0,     4,     5,     6,     7,
       8,     9,    10,    98,    99,     0,     0,    13,     0,    14,
      15,    16,     0,     0,    17,     0,     0,    18,    19,    20,
      21,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   231,     0,     0,
       0,    23,    24,    25,    26,     0,    28,     1,     2,     0,
      31,     0,    32,     0,     3,     0,     0,     0,     4,     5,
       6,     7,     8,     9,    10,     0,     0,     0,     0,    13,
       0,    14,    15,    16,     0,     0,    17,     0,     0,    18,
      19,    20,    21,    22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   265,
       0,     0,     0,    23,    24,    25,    26,     0,    28,     1,
       2,     0,    31,     0,    32,     0,     3,     0,     0,     0,
       4,     5,     6,     7,     8,     9,    10,     0,     0,     0,
       0,    13,     0,    14,    15,    16,     0,     0,    17,     0,
       0,    18,    19,    20,    21,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    23,    24,    25,    26,     0,
      28,     1,     2,     0,    31,     0,    32,     0,     3,     0,
       0,     0,     4,     5,     6,     7,    58,     9,    10,     0,
       0,     0,     0,    13,     0,    14,    15,    16,     0,     0,
      17,     0,     0,    18,    19,    20,    21,    22,     0,     0,
       4,     5,     6,     7,     0,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,    24,    25,
      26,     0,    28,    20,    21,    22,    31,     0,    32,    85,
      86,    87,    88,    89,    90,     0,     0,    91,    92,    93,
       0,   103,     0,     0,     0,    23,    24,    25,    26,    85,
      86,    87,    88,    89,    90,     0,     0,    91,    92,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,    95,    96,    97,    98,    99,     0,     0,     0,   120,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,    95,    96,    97,    98,    99,    85,    86,    87,    88,
      89,    90,     0,     0,    91,    92,    93,     0,   178,    85,
      86,    87,    88,    89,    90,     0,     0,    91,    92,    93,
       0,   188,    85,    86,    87,    88,    89,    90,     0,     0,
      91,    92,    93,     0,   190,     0,     0,    94,    95,    96,
      97,    98,    99,     0,     0,     0,     0,     0,     0,     0,
      94,    95,    96,    97,    98,    99,     0,     0,     0,     0,
       0,     0,     0,    94,    95,    96,    97,    98,    99,    85,
      86,    87,    88,    89,    90,     0,     0,    91,    92,    93,
      85,    86,    87,    88,    89,    90,     0,     0,    91,    92,
      93,     0,   269,     0,   260,    85,    86,    87,    88,    89,
      90,     0,     0,    91,    92,    93,     0,     0,     0,     0,
      94,    95,    96,    97,    98,    99,     0,     0,     0,     0,
       0,    94,    95,    96,    97,    98,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,    95,    96,    97,
      98,    99,    85,    86,    87,    88,    89,    90,     0,     0,
      91,    92,    93,    85,    86,    87,    88,    89,    90,     0,
       0,    91,    92,    93,    86,    87,    88,    89,    90,     0,
       0,    91,    92,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,    95,     0,    97,    98,    99,     0,
       0,     0,     0,     0,    94,    95,     0,     0,    98,    99,
       0,     0,     0,     0,    94,    95,     0,     0,    98,    99
};

static const yytype_int16 yycheck[] =
{
       0,     1,     2,     3,    74,    75,    76,    77,    68,   153,
     112,   129,   114,    17,    37,    15,     5,   172,     5,     5,
      25,   169,   114,     4,     4,     4,    25,     5,    40,    41,
       5,   179,    32,     5,     5,    29,    30,    18,    18,    18,
      17,    17,    77,   198,    17,    17,    75,   202,    14,    15,
      16,     0,    17,    17,    28,    17,    17,    25,    81,   119,
      28,    61,   132,    17,   212,    37,    66,    25,    35,    28,
      70,    71,    72,    77,    77,    64,    70,    64,    64,    38,
     172,   199,    25,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     255,    79,   204,   251,    79,    17,    80,    79,    79,    18,
      78,   111,    80,   113,   262,    17,    83,    84,    78,    78,
      77,    80,    25,    64,     5,   185,   270,   282,   276,     6,
       7,     8,     9,    10,    11,    81,    17,    14,    15,    16,
      53,    54,    55,    56,    57,    58,    59,   295,    18,    25,
       6,     7,     8,     9,    10,    11,    37,    28,    14,    15,
      16,    32,     4,    38,    63,    18,   166,    32,   168,    17,
      47,    48,    49,    50,    51,    52,    25,   247,   178,    64,
     180,   181,    18,    18,   184,    18,    18,   187,   188,    28,
      28,    47,    48,    49,    50,    51,    52,   197,    17,    38,
      38,    78,    25,     5,     5,    79,    79,    78,    18,    80,
      21,    22,    23,    24,    25,    26,    27,    17,   218,   219,
     220,   221,    78,    32,   224,     6,    32,    64,   228,   229,
      18,   231,     4,    44,    45,    46,    60,    32,    41,    78,
      78,    80,    80,    77,     5,    18,    77,    64,    64,   249,
     250,    -1,   252,    61,    32,    66,    67,    68,    69,   212,
     260,    -1,    -1,    10,    11,   265,    17,   267,   238,    -1,
      17,   271,    -1,   273,    21,    22,    23,    24,    25,    26,
      27,   281,    29,    30,    -1,    32,    -1,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    42,    43,    44,    45,    46,
      -1,    -1,    53,    54,    55,    56,    57,    58,    59,    10,
      11,    -1,    -1,    14,    15,    16,    -1,    -1,    -1,    66,
      67,    68,    69,    70,    71,    72,    73,    -1,    75,    -1,
      77,    10,    11,     8,     9,    10,    11,    -1,    17,    14,
      15,    16,    21,    22,    23,    24,    25,    26,    27,    -1,
      29,    30,    -1,    32,    -1,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    42,    43,    44,    45,    46,    -1,    -1,
      -1,    -1,    47,    48,    -1,    -1,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    68,
      69,    70,    71,    10,    11,    -1,    75,    -1,    77,    -1,
      17,    -1,    -1,    -1,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    -1,    32,    -1,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    42,    43,    44,    45,    46,
       8,     9,    10,    11,    -1,    -1,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      67,    68,    69,    -1,    71,    10,    11,    -1,    75,    -1,
      77,    -1,    17,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    27,    51,    52,    -1,    -1,    32,    -1,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    42,    43,    44,
      45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    66,    67,    68,    69,    -1,    71,    10,    11,    -1,
      75,    -1,    77,    -1,    17,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    32,
      -1,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    42,
      43,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    66,    67,    68,    69,    -1,    71,    10,
      11,    -1,    75,    -1,    77,    -1,    17,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      -1,    32,    -1,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,    -1,
      71,    10,    11,    -1,    75,    -1,    77,    -1,    17,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,    27,    -1,
      -1,    -1,    -1,    32,    -1,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    42,    43,    44,    45,    46,    -1,    -1,
      21,    22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    68,
      69,    -1,    71,    44,    45,    46,    75,    -1,    77,     6,
       7,     8,     9,    10,    11,    -1,    -1,    14,    15,    16,
      -1,    18,    -1,    -1,    -1,    66,    67,    68,    69,     6,
       7,     8,     9,    10,    11,    -1,    -1,    14,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,     6,     7,     8,     9,
      10,    11,    -1,    -1,    14,    15,    16,    -1,    18,     6,
       7,     8,     9,    10,    11,    -1,    -1,    14,    15,    16,
      -1,    18,     6,     7,     8,     9,    10,    11,    -1,    -1,
      14,    15,    16,    -1,    18,    -1,    -1,    47,    48,    49,
      50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,     6,
       7,     8,     9,    10,    11,    -1,    -1,    14,    15,    16,
       6,     7,     8,     9,    10,    11,    -1,    -1,    14,    15,
      16,    -1,    18,    -1,    31,     6,     7,     8,     9,    10,
      11,    -1,    -1,    14,    15,    16,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,    -1,    -1,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    52,     6,     7,     8,     9,    10,    11,    -1,    -1,
      14,    15,    16,     6,     7,     8,     9,    10,    11,    -1,
      -1,    14,    15,    16,     7,     8,     9,    10,    11,    -1,
      -1,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    -1,    50,    51,    52,    -1,
      -1,    -1,    -1,    -1,    47,    48,    -1,    -1,    51,    52,
      -1,    -1,    -1,    -1,    47,    48,    -1,    -1,    51,    52
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    10,    11,    17,    21,    22,    23,    24,    25,    26,
      27,    29,    30,    32,    34,    35,    36,    39,    42,    43,
      44,    45,    46,    66,    67,    68,    69,    70,    71,    72,
      73,    75,    77,    83,    84,    85,    86,    87,    88,    89,
      92,    95,    96,    97,   101,   106,   107,   108,   109,   111,
     114,   115,   120,   121,   122,   123,   106,   106,    25,   106,
     110,     5,    17,    37,    25,    25,    17,    17,    77,   106,
      17,    77,    17,    17,    17,    17,    17,    17,    25,    75,
      87,     0,    88,    28,    80,     6,     7,     8,     9,    10,
      11,    14,    15,    16,    47,    48,    49,    50,    51,    52,
      37,    81,    79,    18,     4,    18,   106,   104,   105,   106,
      77,     5,    79,     5,    79,   106,    25,    93,    93,    94,
      36,   106,   106,   106,    18,   104,   104,   104,   104,    17,
     112,   113,    17,    78,    88,   106,    88,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,    77,    25,    53,    54,    55,    56,    57,
      58,    59,   116,   117,    81,    25,    64,    18,     4,    38,
     100,   106,    17,   117,   119,   106,   117,   119,    18,    63,
      18,    32,    91,    28,    78,    80,    93,    17,    18,    78,
      18,    18,    18,    18,    18,    25,   110,     5,    79,    17,
     104,   100,    64,    25,    79,   106,   106,    25,    98,    99,
     108,    28,    38,    78,    80,   116,   118,   119,     5,     5,
       5,     5,   106,   108,    62,   106,   106,    28,    32,    78,
      80,    62,   106,    93,   106,   106,    40,    41,   102,   103,
      18,   106,   116,   110,    18,    78,   116,    17,   117,    32,
      64,     6,    32,    98,    18,     4,   106,   106,   106,   106,
      31,    90,    60,   106,   106,    62,   106,    32,   106,    18,
      77,    77,   103,     5,    18,   104,     5,   106,   106,   108,
     106,    64,    64,   116,   106,   108,   106,   106,   100,   106,
     106,    18,   108,   106,   116,    61,    78,    78,   108
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    82,    83,    84,    84,    85,    85,    85,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    87,    87,    88,
      88,    88,    88,    88,    88,    88,    89,    90,    91,    91,
      91,    91,    92,    92,    92,    92,    92,    92,    93,    93,
      94,    94,    94,    94,    95,    96,    97,    97,    98,    98,
      98,    98,    99,    99,   100,   100,   100,   100,   101,   101,
     101,   102,   103,   104,   104,   105,   105,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   107,   107,   107,   107,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   109,   110,   110,   110,
     110,   111,   112,   112,   113,   113,   114,   114,   115,   115,
     115,   116,   116,   116,   116,   116,   116,   116,   117,   117,
     118,   118,   119,   120,   121,   122,   123
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     5,     1,     1,     0,     1,     2,
       1,     3,     3,     3,     3,     2,     2,     1,     0,     4,
       4,     6,     6,     6,     6,     1,     6,     2,     2,     3,
       4,     2,     6,     6,     7,     5,     5,     6,     5,     7,
       1,     2,     3,     2,     5,     6,     5,     5,     3,     1,
       3,     1,     1,     3,     4,     5,     2,     2,     5,     5,
       6,     4,     4,     1,     0,     1,     3,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       3,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     5,     7,
       0,     5,     1,     0,     3,     4,     7,     5,     8,     5,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     3,     5,     4,     4,     4,     4
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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
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

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 8: /* statement_expr_list: statement  */
#line 117 "parser.y"
                { printf("Add new statement :\n"); }
#line 1644 "parser.tab.c"
    break;

  case 11: /* statement_expr_list: statement_expr_list ';' statement  */
#line 120 "parser.y"
                                        { printf("Add new statement with ';' :\n"); }
#line 1650 "parser.tab.c"
    break;

  case 12: /* statement_expr_list: statement_expr_list NEWLINE statement  */
#line 121 "parser.y"
                                            { printf("Add new statement with NEWLINE';' :\n"); }
#line 1656 "parser.tab.c"
    break;

  case 18: /* statement_expr_list_e: %empty  */
#line 130 "parser.y"
                     { printf("PARSER found statement_list_e - nothing\n"); }
#line 1662 "parser.tab.c"
    break;

  case 19: /* statement: VAL IDENTIFIER '=' expr  */
#line 134 "parser.y"
                               { printf("implicit value declaration:\n"); }
#line 1668 "parser.tab.c"
    break;

  case 20: /* statement: VAR IDENTIFIER '=' expr  */
#line 135 "parser.y"
                               { printf("implicit variable declaration:\n"); }
#line 1674 "parser.tab.c"
    break;

  case 21: /* statement: VAL IDENTIFIER ':' type_list_car '=' expr  */
#line 136 "parser.y"
                                                { printf("explicit value declaration:\n"); }
#line 1680 "parser.tab.c"
    break;

  case 22: /* statement: VAL IDENTIFIER ':' type_list_simple '=' expr  */
#line 137 "parser.y"
                                                   { printf("explicit value declaration:\n"); }
#line 1686 "parser.tab.c"
    break;

  case 23: /* statement: VAR IDENTIFIER ':' type_list_car '=' expr  */
#line 138 "parser.y"
                                                { printf("explicit variable declaration:\n"); }
#line 1692 "parser.tab.c"
    break;

  case 24: /* statement: VAR IDENTIFIER ':' type_list_simple '=' expr  */
#line 139 "parser.y"
                                                   { printf("explicit variable declaration:\n"); }
#line 1698 "parser.tab.c"
    break;

  case 25: /* statement: method  */
#line 140 "parser.y"
             { printf("Method:\n"); }
#line 1704 "parser.tab.c"
    break;

  case 35: /* for_expr: FOR '(' for_params ')' expr  */
#line 170 "parser.y"
                                                             { printf("FOR LOOP\n"); }
#line 1710 "parser.tab.c"
    break;

  case 36: /* for_expr: FOR '{' for_multy_list '}' expr  */
#line 171 "parser.y"
                                                              { printf("FOR MULTY LOOP\n"); }
#line 1716 "parser.tab.c"
    break;

  case 37: /* for_expr: FOR '{' for_params if_condition_list '}' expr  */
#line 172 "parser.y"
                                                                               { printf("FOR LOOP: multy with IF_STMT\n"); }
#line 1722 "parser.tab.c"
    break;

  case 63: /* expr_list_e: expr_list  */
#line 244 "parser.y"
                   { printf("PARSER found expr_list - expr_list\n"); }
#line 1728 "parser.tab.c"
    break;

  case 64: /* expr_list_e: %empty  */
#line 245 "parser.y"
                     { printf("PARSER found expr_list - nothing\n"); }
#line 1734 "parser.tab.c"
    break;

  case 65: /* expr_list: expr  */
#line 250 "parser.y"
                      { printf("PARSER found expr_list - expr\n"); }
#line 1740 "parser.tab.c"
    break;

  case 66: /* expr_list: expr_list ',' expr  */
#line 251 "parser.y"
                          { printf("PARSER found expr_list - expr_list\n"); }
#line 1746 "parser.tab.c"
    break;

  case 67: /* expr: const  */
#line 256 "parser.y"
            {printf("PARSER found expr - const\n"); }
#line 1752 "parser.tab.c"
    break;

  case 68: /* expr: IDENTIFIER  */
#line 257 "parser.y"
                 {printf("PARSER found expr - IDENTIFIER\n"); }
#line 1758 "parser.tab.c"
    break;

  case 69: /* expr: CLASS_ID  */
#line 258 "parser.y"
               {printf("PARSER found expr - CLASS_ID\n"); }
#line 1764 "parser.tab.c"
    break;

  case 70: /* expr: IDENTIFIER '=' expr  */
#line 259 "parser.y"
                          { printf("Assignment:\n"); }
#line 1770 "parser.tab.c"
    break;

  case 71: /* expr: '(' expr ')'  */
#line 260 "parser.y"
                   {printf("PARSER found expr - ( expr )\n"); }
#line 1776 "parser.tab.c"
    break;

  case 72: /* expr: expr '>' expr  */
#line 261 "parser.y"
                    {printf("PARSER found expr - expr > expr\n"); }
#line 1782 "parser.tab.c"
    break;

  case 73: /* expr: expr '<' expr  */
#line 262 "parser.y"
                    {printf("PARSER found expr - expr < expr\n"); }
#line 1788 "parser.tab.c"
    break;

  case 74: /* expr: expr MORE_OR_EQUAL_OPERATOR expr  */
#line 263 "parser.y"
                                       {printf("PARSER found expr - expr >= expr\n"); }
#line 1794 "parser.tab.c"
    break;

  case 75: /* expr: expr LESS_OR_EQUAL_OPERATOR expr  */
#line 264 "parser.y"
                                       {printf("PARSER found expr - expr <= expr\n"); }
#line 1800 "parser.tab.c"
    break;

  case 76: /* expr: expr EQ expr  */
#line 265 "parser.y"
                   {printf("PARSER found expr - expr == expr\n"); }
#line 1806 "parser.tab.c"
    break;

  case 77: /* expr: expr NEQ expr  */
#line 266 "parser.y"
                    {printf("PARSER found expr - expr != expr\n"); }
#line 1812 "parser.tab.c"
    break;

  case 78: /* expr: expr '+' expr  */
#line 267 "parser.y"
                    { printf("PARSER found expr - expr + expr\n"); }
#line 1818 "parser.tab.c"
    break;

  case 79: /* expr: expr '-' expr  */
#line 268 "parser.y"
                    { printf("PARSER found expr - expr - expr\n"); }
#line 1824 "parser.tab.c"
    break;

  case 80: /* expr: expr '/' expr  */
#line 269 "parser.y"
                    { printf("PARSER found expr - expr / expr\n"); }
#line 1830 "parser.tab.c"
    break;

  case 81: /* expr: expr '*' expr  */
#line 270 "parser.y"
                    { printf("PARSER found expr - expr * expr\n"); }
#line 1836 "parser.tab.c"
    break;

  case 82: /* expr: expr '%' expr  */
#line 271 "parser.y"
                    { printf("PARSER found expr - expr % expr\n"); }
#line 1842 "parser.tab.c"
    break;

  case 83: /* expr: expr '&' expr  */
#line 272 "parser.y"
                    { printf("PARSER found expr - expr && expr\n"); }
#line 1848 "parser.tab.c"
    break;

  case 84: /* expr: expr '|' expr  */
#line 273 "parser.y"
                    { printf("PARSER found expr - expr | expr\n"); }
#line 1854 "parser.tab.c"
    break;

  case 85: /* expr: expr KW_OR expr  */
#line 274 "parser.y"
                      { printf("PARSER found expr - expr || expr\n"); }
#line 1860 "parser.tab.c"
    break;

  case 86: /* expr: expr KW_AND expr  */
#line 275 "parser.y"
                       { printf("PARSER found expr - expr && expr\n"); }
#line 1866 "parser.tab.c"
    break;

  case 89: /* expr: func_call  */
#line 278 "parser.y"
                { printf("PARSER found expr - func_call\n"); }
#line 1872 "parser.tab.c"
    break;

  case 90: /* expr: if_else_expr  */
#line 279 "parser.y"
                  { printf("PARSER found expr - if_else_expr\n"); }
#line 1878 "parser.tab.c"
    break;

  case 91: /* expr: for_expr  */
#line 280 "parser.y"
               { printf("PARSER found expr - for_expr\n"); }
#line 1884 "parser.tab.c"
    break;

  case 92: /* expr: while_expr  */
#line 281 "parser.y"
                 { printf("PARSER found expr - while_expr\n"); }
#line 1890 "parser.tab.c"
    break;

  case 93: /* expr: do_while_expr  */
#line 282 "parser.y"
                    { printf("PARSER found expr - do_while_expr\n"); }
#line 1896 "parser.tab.c"
    break;

  case 94: /* expr: try_expr  */
#line 283 "parser.y"
               { printf("PARSER found expr - try_expr\n"); }
#line 1902 "parser.tab.c"
    break;

  case 95: /* expr: match_expr  */
#line 284 "parser.y"
                 { printf("PARSER found expr - match_expr\n"); }
#line 1908 "parser.tab.c"
    break;

  case 97: /* expr: func  */
#line 286 "parser.y"
           { printf("Function:\n"); }
#line 1914 "parser.tab.c"
    break;

  case 98: /* expr: method_call  */
#line 287 "parser.y"
                  { printf("method_call:\n"); }
#line 1920 "parser.tab.c"
    break;

  case 99: /* expr: instance_class  */
#line 288 "parser.y"
                     { printf("instance_class:\n"); }
#line 1926 "parser.tab.c"
    break;

  case 100: /* expr: READLINE '(' ')'  */
#line 289 "parser.y"
                     { printf("readLine:\n"); }
#line 1932 "parser.tab.c"
    break;

  case 101: /* expr: PRINT '(' expr ')'  */
#line 290 "parser.y"
                        { printf("print:\n"); }
#line 1938 "parser.tab.c"
    break;

  case 102: /* num_const: NUM_10  */
#line 296 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 1944 "parser.tab.c"
    break;

  case 103: /* num_const: NUM_16  */
#line 297 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 1950 "parser.tab.c"
    break;

  case 104: /* num_const: REAL_NUMBER  */
#line 298 "parser.y"
                  { printf("PARSER found - REAL\n"); }
#line 1956 "parser.tab.c"
    break;

  case 105: /* num_const: REAL_NUMBER_EXPONENT  */
#line 299 "parser.y"
                           { printf("PARSER found - REAL_EXP\n"); }
#line 1962 "parser.tab.c"
    break;

  case 116: /* func_call: IDENTIFIER '(' expr_list_e ')'  */
#line 321 "parser.y"
                                     { printf("Function call: WITH PARAMS\n"); }
#line 1968 "parser.tab.c"
    break;

  case 143: /* array: ARRAY '(' expr_list_e ')'  */
#line 394 "parser.y"
                                { printf("PARSER found Array\n"); }
#line 1974 "parser.tab.c"
    break;

  case 144: /* list: LIST '(' expr_list_e ')'  */
#line 400 "parser.y"
                               { printf("PARSER found List\n"); }
#line 1980 "parser.tab.c"
    break;

  case 145: /* vector: VECTOR '(' expr_list_e ')'  */
#line 406 "parser.y"
                                 { printf("PARSER found Vector\n"); }
#line 1986 "parser.tab.c"
    break;

  case 146: /* set: SET '(' expr_list_e ')'  */
#line 412 "parser.y"
                              { printf("PARSER found Set\n"); }
#line 1992 "parser.tab.c"
    break;


#line 1996 "parser.tab.c"

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
      yyerror (YY_("syntax error"));
    }

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
                      yytoken, &yylval);
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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 417 "parser.y"

