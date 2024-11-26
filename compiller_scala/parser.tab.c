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
    KW_TRUE = 282,                 /* KW_TRUE  */
    KW_FALSE = 283,                /* KW_FALSE  */
    KW_NULL = 284,                 /* KW_NULL  */
    EQ = 285,                      /* EQ  */
    NEQ = 286,                     /* NEQ  */
    KW_OR = 287,                   /* KW_OR  */
    KW_AND = 288,                  /* KW_AND  */
    MORE_OR_EQUAL_OPERATOR = 289,  /* MORE_OR_EQUAL_OPERATOR  */
    LESS_OR_EQUAL_OPERATOR = 290,  /* LESS_OR_EQUAL_OPERATOR  */
    INT_KW = 291,                  /* INT_KW  */
    DOUBLE_KW = 292,               /* DOUBLE_KW  */
    STRING_KW = 293,               /* STRING_KW  */
    CHAR_KW = 294,                 /* CHAR_KW  */
    BOOLEAN_KW = 295,              /* BOOLEAN_KW  */
    ANY_KW = 296,                  /* ANY_KW  */
    UNIT_KW = 297,                 /* UNIT_KW  */
    TO = 298,                      /* TO  */
    BY = 299,                      /* BY  */
    YIELD = 300,                   /* YIELD  */
    GENERATOR_OPERATOR = 301,      /* GENERATOR_OPERATOR  */
    RIGHT_ARROW_OPERATOR = 302,    /* RIGHT_ARROW_OPERATOR  */
    ID_COLLECTION = 303,           /* ID_COLLECTION  */
    ARRAY = 304,                   /* ARRAY  */
    LIST = 305,                    /* LIST  */
    VECTOR = 306,                  /* VECTOR  */
    SET = 307,                     /* SET  */
    DEF = 308,                     /* DEF  */
    CLASS = 309,                   /* CLASS  */
    CLASS_ID = 310                 /* CLASS_ID  */
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

#line 190 "parser.tab.c"

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
  YYSYMBOL_KW_TRUE = 42,                   /* KW_TRUE  */
  YYSYMBOL_KW_FALSE = 43,                  /* KW_FALSE  */
  YYSYMBOL_KW_NULL = 44,                   /* KW_NULL  */
  YYSYMBOL_EQ = 45,                        /* EQ  */
  YYSYMBOL_NEQ = 46,                       /* NEQ  */
  YYSYMBOL_KW_OR = 47,                     /* KW_OR  */
  YYSYMBOL_KW_AND = 48,                    /* KW_AND  */
  YYSYMBOL_MORE_OR_EQUAL_OPERATOR = 49,    /* MORE_OR_EQUAL_OPERATOR  */
  YYSYMBOL_LESS_OR_EQUAL_OPERATOR = 50,    /* LESS_OR_EQUAL_OPERATOR  */
  YYSYMBOL_INT_KW = 51,                    /* INT_KW  */
  YYSYMBOL_DOUBLE_KW = 52,                 /* DOUBLE_KW  */
  YYSYMBOL_STRING_KW = 53,                 /* STRING_KW  */
  YYSYMBOL_CHAR_KW = 54,                   /* CHAR_KW  */
  YYSYMBOL_BOOLEAN_KW = 55,                /* BOOLEAN_KW  */
  YYSYMBOL_ANY_KW = 56,                    /* ANY_KW  */
  YYSYMBOL_UNIT_KW = 57,                   /* UNIT_KW  */
  YYSYMBOL_TO = 58,                        /* TO  */
  YYSYMBOL_BY = 59,                        /* BY  */
  YYSYMBOL_YIELD = 60,                     /* YIELD  */
  YYSYMBOL_GENERATOR_OPERATOR = 61,        /* GENERATOR_OPERATOR  */
  YYSYMBOL_RIGHT_ARROW_OPERATOR = 62,      /* RIGHT_ARROW_OPERATOR  */
  YYSYMBOL_ID_COLLECTION = 63,             /* ID_COLLECTION  */
  YYSYMBOL_ARRAY = 64,                     /* ARRAY  */
  YYSYMBOL_LIST = 65,                      /* LIST  */
  YYSYMBOL_VECTOR = 66,                    /* VECTOR  */
  YYSYMBOL_SET = 67,                       /* SET  */
  YYSYMBOL_DEF = 68,                       /* DEF  */
  YYSYMBOL_CLASS = 69,                     /* CLASS  */
  YYSYMBOL_CLASS_ID = 70,                  /* CLASS_ID  */
  YYSYMBOL_71_ = 71,                       /* '{'  */
  YYSYMBOL_72_ = 72,                       /* '}'  */
  YYSYMBOL_73_ = 73,                       /* ':'  */
  YYSYMBOL_74_ = 74,                       /* ';'  */
  YYSYMBOL_75_ = 75,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 76,                  /* $accept  */
  YYSYMBOL_program = 77,                   /* program  */
  YYSYMBOL_statement_expr_list = 78,       /* statement_expr_list  */
  YYSYMBOL_statement_expr_list_e = 79,     /* statement_expr_list_e  */
  YYSYMBOL_statement = 80,                 /* statement  */
  YYSYMBOL_if_else_expr = 81,              /* if_else_expr  */
  YYSYMBOL_else_expr = 82,                 /* else_expr  */
  YYSYMBOL_if_condition_list = 83,         /* if_condition_list  */
  YYSYMBOL_for_expr = 84,                  /* for_expr  */
  YYSYMBOL_for_params = 85,                /* for_params  */
  YYSYMBOL_for_multy_list = 86,            /* for_multy_list  */
  YYSYMBOL_while_expr = 87,                /* while_expr  */
  YYSYMBOL_do_while_expr = 88,             /* do_while_expr  */
  YYSYMBOL_match_expr = 89,                /* match_expr  */
  YYSYMBOL_case_condition = 90,            /* case_condition  */
  YYSYMBOL_int_literal_list_case = 91,     /* int_literal_list_case  */
  YYSYMBOL_case_list = 92,                 /* case_list  */
  YYSYMBOL_try_expr = 93,                  /* try_expr  */
  YYSYMBOL_catch = 94,                     /* catch  */
  YYSYMBOL_finally = 95,                   /* finally  */
  YYSYMBOL_expr_list_e = 96,               /* expr_list_e  */
  YYSYMBOL_expr_list = 97,                 /* expr_list  */
  YYSYMBOL_expr = 98,                      /* expr  */
  YYSYMBOL_num_const = 99,                 /* num_const  */
  YYSYMBOL_const = 100,                    /* const  */
  YYSYMBOL_func_call = 101,                /* func_call  */
  YYSYMBOL_params = 102,                   /* params  */
  YYSYMBOL_func = 103,                     /* func  */
  YYSYMBOL_method_params_list_e = 104,     /* method_params_list_e  */
  YYSYMBOL_method_params_list = 105,       /* method_params_list  */
  YYSYMBOL_method = 106,                   /* method  */
  YYSYMBOL_method_call = 107,              /* method_call  */
  YYSYMBOL_type = 108,                     /* type  */
  YYSYMBOL_type_list_car = 109,            /* type_list_car  */
  YYSYMBOL_type_list = 110,                /* type_list  */
  YYSYMBOL_type_list_simple = 111,         /* type_list_simple  */
  YYSYMBOL_array = 112,                    /* array  */
  YYSYMBOL_list = 113,                     /* list  */
  YYSYMBOL_vector = 114,                   /* vector  */
  YYSYMBOL_set = 115                       /* set  */
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
#define YYFINAL  71
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   995

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  141
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  290

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   310


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
      17,    18,    14,    10,     4,    11,    75,    15,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    73,    74,
       9,     5,     8,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    19,     2,    20,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    71,     6,    72,     2,     2,     2,     2,
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
      70
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    65,    65,   102,   103,   104,   105,   106,   107,   108,
     109,   113,   114,   118,   119,   120,   121,   122,   123,   124,
     133,   137,   141,   142,   143,   144,   151,   152,   153,   154,
     155,   156,   161,   162,   167,   168,   169,   170,   176,   180,
     184,   185,   190,   191,   192,   193,   197,   198,   202,   203,
     204,   205,   211,   212,   213,   217,   221,   228,   229,   234,
     235,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   277,   278,   279,   280,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   302,   306,   307,
     308,   309,   313,   314,   315,   316,   321,   322,   326,   327,
     331,   332,   333,   338,   339,   340,   346,   347,   348,   349,
     350,   351,   352,   356,   357,   361,   362,   366,   379,   385,
     391,   397
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
  "FINALLY", "KW_TRUE", "KW_FALSE", "KW_NULL", "EQ", "NEQ", "KW_OR",
  "KW_AND", "MORE_OR_EQUAL_OPERATOR", "LESS_OR_EQUAL_OPERATOR", "INT_KW",
  "DOUBLE_KW", "STRING_KW", "CHAR_KW", "BOOLEAN_KW", "ANY_KW", "UNIT_KW",
  "TO", "BY", "YIELD", "GENERATOR_OPERATOR", "RIGHT_ARROW_OPERATOR",
  "ID_COLLECTION", "ARRAY", "LIST", "VECTOR", "SET", "DEF", "CLASS",
  "CLASS_ID", "'{'", "'}'", "':'", "';'", "'.'", "$accept", "program",
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

#define YYPACT_NINF (-150)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     260,   619,   619,   670,  -150,  -150,  -150,  -150,    20,  -150,
    -150,    35,    36,    25,    26,   619,    86,   -18,  -150,  -150,
    -150,    96,   106,   109,   110,    92,  -150,   260,   125,   -12,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,   875,  -150,
      -9,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,   105,
     105,    19,   739,    28,   619,   619,    57,    17,    18,   619,
     104,   104,   762,   619,   619,   619,   619,   619,   619,   115,
      59,  -150,   260,   260,   619,   619,   619,   619,   619,   619,
     619,   619,   619,   619,   619,   619,   619,   619,   619,    62,
     112,   141,    60,   118,     6,   875,   116,   140,   875,   101,
     619,   192,   619,   192,   785,    93,   145,   132,    27,   149,
     807,   100,   151,   152,   158,   163,   159,    21,   172,  -150,
    -150,   875,  -150,   875,   945,   929,    34,    34,   105,   105,
    -150,  -150,  -150,   300,   300,   901,   920,    34,    34,   101,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,   142,
     178,   137,   150,   312,  -150,   619,   135,    -7,   875,   192,
       7,   208,   875,     8,   209,   619,   700,   363,   619,   108,
    -150,   414,   104,  -150,   619,   619,   -11,  -150,  -150,  -150,
    -150,   144,    29,   465,   141,   159,   113,   141,   202,   141,
     517,   619,   875,   875,   188,   160,   215,   191,  -150,   135,
    -150,  -150,  -150,   206,   227,   619,   619,   619,   619,   830,
     174,   619,   875,   875,  -150,   619,   568,   205,   619,   875,
    -150,   856,  -150,   167,   170,   210,  -150,  -150,   875,  -150,
     247,    94,  -150,  -150,   619,     9,   619,   875,   875,   619,
     619,   700,   619,   194,   196,   141,   875,   875,   875,   875,
     619,  -150,   700,   875,   875,   619,   875,   619,   875,  -150,
     101,   619,  -150,   619,  -150,   235,   700,   875,   875,   875,
    -150,   875,   619,   141,  -150,   875,   195,   875,   875,   114,
     219,   875,  -150,  -150,   875,  -150,   700,  -150,  -150,  -150
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      12,     0,     0,   111,    93,    94,    95,    96,    62,    99,
      98,     0,     0,     0,     0,     0,     0,     0,   100,   101,
     102,     0,     0,     0,     0,     0,    63,    12,     0,    11,
       2,     3,    84,    85,    86,    87,    89,    88,     4,    97,
      61,    83,    91,    19,    92,   103,   104,   105,   106,    82,
      81,    62,     0,     0,     0,    58,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    58,    58,    58,    58,   117,
       0,     1,    10,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    65,     0,     0,    64,     0,    57,    59,     0,
       0,     0,     0,     0,     0,     0,     0,    34,     0,     0,
       0,     0,     0,     0,     0,     0,   111,     0,   116,    90,
       6,     8,     5,     7,    78,    77,    66,    67,    72,    73,
      75,    74,    76,    70,    71,    79,    80,    68,    69,     0,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   108,
       0,     0,     0,     0,   107,     0,     0,     0,    13,     0,
       0,     0,    14,     0,     0,     0,     0,     0,     0,     0,
      37,     0,     0,    35,     0,     0,     0,   138,   139,   140,
     141,     0,     0,     0,     0,   111,     0,     0,   124,     0,
       0,     0,   112,    60,    43,     0,    45,    46,    50,     0,
      40,    51,   135,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,    22,    25,     0,     0,     0,     0,    30,
      36,     0,    38,     0,     0,    52,    53,   118,   121,   122,
       0,     0,    41,   134,    58,   109,     0,   113,   114,     0,
       0,     0,     0,     0,     0,     0,    15,    16,    17,    18,
       0,    20,     0,    26,    23,     0,    31,     0,    27,    39,
       0,     0,    54,     0,   119,     0,     0,   115,    44,    48,
      47,    42,     0,     0,   136,    21,    32,    28,    24,     0,
       0,   120,   123,   110,    49,   137,     0,    55,    56,    33
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -150,  -150,  -150,   232,   -32,  -150,  -150,  -150,  -150,   -50,
    -150,  -150,  -150,  -150,    61,  -150,  -130,  -150,  -150,    37,
     -61,  -150,     0,  -150,  -148,  -150,   -96,  -150,  -150,  -150,
      90,  -150,  -149,   -84,  -150,   -64,  -150,  -150,  -150,  -150
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    28,    29,    30,    31,    32,   251,   169,    33,   106,
     108,    34,    35,    36,   195,   196,   157,    37,   225,   226,
      96,    97,    98,    39,    40,    41,    53,    42,   117,   118,
      43,    44,   148,   149,   203,   161,    45,    46,    47,    48
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      38,    49,    50,    52,   112,   113,   114,   115,   197,   186,
     202,   107,   205,   207,   266,    62,    72,   160,   210,   163,
     182,   198,   100,   102,    54,    54,   183,    38,    89,   223,
     224,   199,    93,    93,   152,   230,    55,    55,   233,   164,
     120,   122,    59,    60,    78,    79,    94,   227,    80,    81,
      82,   197,   105,    64,    95,   170,    56,    56,   173,   104,
      57,    58,    73,   110,   111,   200,    90,   201,   153,   187,
     187,   187,   121,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   231,
     101,   103,    91,   270,   184,   204,   274,    61,    93,   171,
     158,   172,   162,    63,   276,   235,    74,    75,    76,    77,
      78,    79,   264,    65,    80,    81,    82,    69,   283,    80,
      81,    82,   220,    66,   285,    71,    67,    68,    99,   105,
     279,   119,   116,   139,   154,   150,   214,   140,   289,   156,
     215,   198,   198,   151,   155,    83,    84,    85,    86,    87,
      88,   199,   199,   192,   166,   193,     4,     5,     6,     7,
     194,     9,    10,   167,   168,   209,   174,   212,   213,   177,
     178,   219,   176,   265,   221,   222,   179,    18,    19,    20,
     216,   180,   217,   228,   181,   232,   287,   201,   201,   185,
     237,   238,   141,   142,   143,   144,   145,   146,   147,    21,
      22,    23,    24,   188,   187,   246,   247,   248,   249,   159,
     189,   253,   190,   206,   208,   254,   256,    91,   258,   234,
     239,   241,   240,   242,   244,    74,    75,    76,    77,    78,
      79,   245,   252,    80,    81,    82,   267,   257,   260,   268,
     269,   261,   271,   141,   142,   143,   144,   145,   146,   147,
     275,   224,   263,   282,   286,   277,   272,   278,   273,    70,
     243,   280,   262,   281,    83,    84,    85,    86,    87,    88,
       1,     2,   284,   229,     0,     0,     0,     3,     0,     0,
       0,     4,     5,     6,     7,     8,     9,    10,     0,    11,
      12,   288,    13,     0,    14,    15,    16,     0,     0,    17,
       0,     0,    18,    19,    20,     0,     0,     0,    76,    77,
      78,    79,     0,     0,    80,    81,    82,     0,     0,     0,
       0,     0,     1,     2,    21,    22,    23,    24,    25,     3,
      26,    27,     0,     4,     5,     6,     7,     8,     9,    10,
     191,     0,     0,     0,    13,     0,    14,    15,    16,    87,
      88,    17,     0,     0,    18,    19,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     2,     0,    21,    22,    23,    24,
       3,     0,    26,    27,     4,     5,     6,     7,     8,     9,
      10,     0,     0,     0,     0,    13,     0,    14,    15,    16,
       0,     0,    17,     0,     0,    18,    19,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   211,     1,     2,     0,    21,    22,    23,
      24,     3,     0,    26,    27,     4,     5,     6,     7,     8,
       9,    10,     0,     0,     0,     0,    13,     0,    14,    15,
      16,     0,     0,    17,     0,     0,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   218,     1,     2,     0,    21,    22,
      23,    24,     3,     0,    26,    27,     4,     5,     6,     7,
       8,     9,    10,     0,     0,     0,     0,    13,     0,    14,
      15,    16,     0,     0,    17,     0,     0,    18,    19,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     2,    21,
      22,    23,    24,    25,     3,    26,    27,     0,     4,     5,
       6,     7,     8,     9,    10,   236,     0,     0,     0,    13,
       0,    14,    15,    16,     0,     0,    17,     0,     0,    18,
      19,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     2,
       0,    21,    22,    23,    24,     3,     0,    26,    27,     4,
       5,     6,     7,     8,     9,    10,     0,     0,     0,     0,
      13,     0,    14,    15,    16,     0,     0,    17,     0,     0,
      18,    19,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   255,     1,
       2,     0,    21,    22,    23,    24,     3,     0,    26,    27,
       4,     5,     6,     7,     8,     9,    10,     0,     0,     0,
       0,    13,     0,    14,    15,    16,     0,     0,    17,     0,
       0,    18,    19,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     2,     0,    21,    22,    23,    24,     3,     0,    26,
      27,     4,     5,     6,     7,    51,     9,    10,     0,     0,
       0,     0,    13,     0,    14,    15,    16,     0,     0,    17,
       0,     0,    18,    19,    20,     0,     0,     0,     0,     0,
       0,     4,     5,     6,     7,     0,     9,    10,     0,     0,
       0,     0,     0,     0,    21,    22,    23,    24,     0,     0,
      26,    27,    18,    19,    20,    74,    75,    76,    77,    78,
      79,     0,     0,    80,    81,    82,     0,    92,     0,     0,
       0,     0,     0,     0,    21,    22,    23,    24,    74,    75,
      76,    77,    78,    79,     0,     0,    80,    81,    82,     0,
       0,     0,     0,     0,    83,    84,    85,    86,    87,    88,
       0,    74,    75,    76,    77,    78,    79,     0,   109,    80,
      81,    82,     0,   165,     0,     0,     0,    83,    84,    85,
      86,    87,    88,    74,    75,    76,    77,    78,    79,     0,
       0,    80,    81,    82,     0,   175,     0,     0,     0,     0,
      83,    84,    85,    86,    87,    88,    74,    75,    76,    77,
      78,    79,     0,     0,    80,    81,    82,     0,     0,     0,
       0,     0,    83,    84,    85,    86,    87,    88,     0,     0,
       0,   250,    74,    75,    76,    77,    78,    79,     0,     0,
      80,    81,    82,     0,   259,    83,    84,    85,    86,    87,
      88,    74,    75,    76,    77,    78,    79,     0,     0,    80,
      81,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,    84,    85,    86,    87,    88,    74,    75,    76,
      77,    78,    79,     0,     0,    80,    81,    82,     0,     0,
      83,    84,    85,    86,    87,    88,    74,    75,    76,    77,
      78,    79,     0,     0,    80,    81,    82,    76,    77,    78,
      79,     0,     0,    80,    81,    82,    83,    84,     0,    86,
      87,    88,    75,    76,    77,    78,    79,     0,     0,    80,
      81,    82,     0,     0,     0,    83,    84,     0,     0,    87,
      88,     0,     0,     0,    83,    84,     0,     0,    87,    88,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      83,    84,     0,     0,    87,    88
};

static const yytype_int16 yycheck[] =
{
       0,     1,     2,     3,    65,    66,    67,    68,   156,   139,
     159,    61,     5,     5,     5,    15,    28,   101,   166,   103,
     116,    28,     5,     5,     5,     5,     5,    27,    37,    40,
      41,    38,     4,     4,    28,   184,    17,    17,   187,   103,
      72,    73,    17,    17,    10,    11,    18,    18,    14,    15,
      16,   199,    25,    71,    54,    28,    37,    37,   108,    59,
      25,    25,    74,    63,    64,    72,    75,    74,    62,    62,
      62,    62,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,   185,
      73,    73,    73,   241,    73,   159,   245,    71,     4,    72,
     100,    74,   102,    17,   252,   189,     6,     7,     8,     9,
      10,    11,    18,    17,    14,    15,    16,    25,   266,    14,
      15,    16,   172,    17,   273,     0,    17,    17,    71,    25,
     260,    72,    17,    71,    18,    75,    28,    25,   286,    38,
      32,    28,    28,    25,     4,    45,    46,    47,    48,    49,
      50,    38,    38,   153,    61,   155,    21,    22,    23,    24,
      25,    26,    27,    18,    32,   165,    17,   167,   168,    18,
      18,   171,    72,   234,   174,   175,    18,    42,    43,    44,
      72,    18,    74,   183,    25,    72,    72,    74,    74,    17,
     190,   191,    51,    52,    53,    54,    55,    56,    57,    64,
      65,    66,    67,    25,    62,   205,   206,   207,   208,    17,
      73,   211,    62,     5,     5,   215,   216,    73,   218,    17,
      32,     6,    62,    32,    18,     6,     7,     8,     9,    10,
      11,     4,    58,    14,    15,    16,   236,    32,    71,   239,
     240,    71,   242,    51,    52,    53,    54,    55,    56,    57,
     250,    41,     5,    18,    59,   255,    62,   257,    62,    27,
     199,   261,   225,   263,    45,    46,    47,    48,    49,    50,
      10,    11,   272,   183,    -1,    -1,    -1,    17,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,    -1,    29,
      30,    72,    32,    -1,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    42,    43,    44,    -1,    -1,    -1,     8,     9,
      10,    11,    -1,    -1,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    10,    11,    64,    65,    66,    67,    68,    17,
      70,    71,    -1,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    32,    -1,    34,    35,    36,    49,
      50,    39,    -1,    -1,    42,    43,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    -1,    64,    65,    66,    67,
      17,    -1,    70,    71,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    -1,    32,    -1,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    10,    11,    -1,    64,    65,    66,
      67,    17,    -1,    70,    71,    21,    22,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    -1,    32,    -1,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    10,    11,    -1,    64,    65,
      66,    67,    17,    -1,    70,    71,    21,    22,    23,    24,
      25,    26,    27,    -1,    -1,    -1,    -1,    32,    -1,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    64,
      65,    66,    67,    68,    17,    70,    71,    -1,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    32,
      -1,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    42,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      -1,    64,    65,    66,    67,    17,    -1,    70,    71,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,
      32,    -1,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    10,
      11,    -1,    64,    65,    66,    67,    17,    -1,    70,    71,
      21,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      -1,    32,    -1,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    -1,    64,    65,    66,    67,    17,    -1,    70,
      71,    21,    22,    23,    24,    25,    26,    27,    -1,    -1,
      -1,    -1,    32,    -1,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    -1,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    -1,    -1,
      70,    71,    42,    43,    44,     6,     7,     8,     9,    10,
      11,    -1,    -1,    14,    15,    16,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,     6,     7,
       8,     9,    10,    11,    -1,    -1,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,    50,
      -1,     6,     7,     8,     9,    10,    11,    -1,    36,    14,
      15,    16,    -1,    18,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,     6,     7,     8,     9,    10,    11,    -1,
      -1,    14,    15,    16,    -1,    18,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,     6,     7,     8,     9,
      10,    11,    -1,    -1,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    50,    -1,    -1,
      -1,    31,     6,     7,     8,     9,    10,    11,    -1,    -1,
      14,    15,    16,    -1,    18,    45,    46,    47,    48,    49,
      50,     6,     7,     8,     9,    10,    11,    -1,    -1,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    50,     6,     7,     8,
       9,    10,    11,    -1,    -1,    14,    15,    16,    -1,    -1,
      45,    46,    47,    48,    49,    50,     6,     7,     8,     9,
      10,    11,    -1,    -1,    14,    15,    16,     8,     9,    10,
      11,    -1,    -1,    14,    15,    16,    45,    46,    -1,    48,
      49,    50,     7,     8,     9,    10,    11,    -1,    -1,    14,
      15,    16,    -1,    -1,    -1,    45,    46,    -1,    -1,    49,
      50,    -1,    -1,    -1,    45,    46,    -1,    -1,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    -1,    49,    50
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    10,    11,    17,    21,    22,    23,    24,    25,    26,
      27,    29,    30,    32,    34,    35,    36,    39,    42,    43,
      44,    64,    65,    66,    67,    68,    70,    71,    77,    78,
      79,    80,    81,    84,    87,    88,    89,    93,    98,    99,
     100,   101,   103,   106,   107,   112,   113,   114,   115,    98,
      98,    25,    98,   102,     5,    17,    37,    25,    25,    17,
      17,    71,    98,    17,    71,    17,    17,    17,    17,    25,
      79,     0,    28,    74,     6,     7,     8,     9,    10,    11,
      14,    15,    16,    45,    46,    47,    48,    49,    50,    37,
      75,    73,    18,     4,    18,    98,    96,    97,    98,    71,
       5,    73,     5,    73,    98,    25,    85,    85,    86,    36,
      98,    98,    96,    96,    96,    96,    17,   104,   105,    72,
      80,    98,    80,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    71,
      25,    51,    52,    53,    54,    55,    56,    57,   108,   109,
      75,    25,    28,    62,    18,     4,    38,    92,    98,    17,
     109,   111,    98,   109,   111,    18,    61,    18,    32,    83,
      28,    72,    74,    85,    17,    18,    72,    18,    18,    18,
      18,    25,   102,     5,    73,    17,    92,    62,    25,    73,
      62,    28,    98,    98,    25,    90,    91,   100,    28,    38,
      72,    74,   108,   110,   111,     5,     5,     5,     5,    98,
     100,    60,    98,    98,    28,    32,    72,    74,    60,    98,
      85,    98,    98,    40,    41,    94,    95,    18,    98,   106,
     108,   102,    72,   108,    17,   109,    28,    98,    98,    32,
      62,     6,    32,    90,    18,     4,    98,    98,    98,    98,
      31,    82,    58,    98,    98,    60,    98,    32,    98,    18,
      71,    71,    95,     5,    18,    96,     5,    98,    98,    98,
     100,    98,    62,    62,   108,    98,   100,    98,    98,    92,
      98,    98,    18,   100,    98,   108,    59,    72,    72,   100
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    76,    77,    78,    78,    78,    78,    78,    78,    78,
      78,    79,    79,    80,    80,    80,    80,    80,    80,    80,
      81,    82,    83,    83,    83,    83,    84,    84,    84,    84,
      84,    84,    85,    85,    86,    86,    86,    86,    87,    88,
      89,    89,    90,    90,    90,    90,    91,    91,    92,    92,
      92,    92,    93,    93,    93,    94,    95,    96,    96,    97,
      97,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    99,    99,    99,    99,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   101,   102,   102,
     102,   102,   103,   103,   103,   103,   104,   104,   105,   105,
     106,   106,   106,   107,   107,   107,   108,   108,   108,   108,
     108,   108,   108,   109,   109,   110,   110,   111,   112,   113,
     114,   115
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     3,     3,     3,     2,
       2,     1,     0,     4,     4,     6,     6,     6,     6,     1,
       6,     2,     2,     3,     4,     2,     6,     6,     7,     5,
       5,     6,     5,     7,     1,     2,     3,     2,     5,     6,
       5,     5,     3,     1,     3,     1,     1,     3,     4,     5,
       2,     2,     5,     5,     6,     4,     4,     1,     0,     1,
       3,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     3,     5,
       7,     0,     5,     6,     6,     7,     1,     0,     3,     4,
       7,     5,     5,     8,     5,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     5,     4,     4,
       4,     4
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
  case 12: /* statement_expr_list_e: %empty  */
#line 114 "parser.y"
                     { printf("PARSER found statement_list_e - nothing\n"); }
#line 1625 "parser.tab.c"
    break;

  case 13: /* statement: VAL IDENTIFIER '=' expr  */
#line 118 "parser.y"
                               { printf("implicit value declaration:\n"); }
#line 1631 "parser.tab.c"
    break;

  case 14: /* statement: VAR IDENTIFIER '=' expr  */
#line 119 "parser.y"
                               { printf("implicit variable declaration:\n"); }
#line 1637 "parser.tab.c"
    break;

  case 15: /* statement: VAL IDENTIFIER ':' type_list_car '=' expr  */
#line 120 "parser.y"
                                                { printf("explicit value declaration:\n"); }
#line 1643 "parser.tab.c"
    break;

  case 16: /* statement: VAL IDENTIFIER ':' type_list_simple '=' expr  */
#line 121 "parser.y"
                                                   { printf("explicit value declaration:\n"); }
#line 1649 "parser.tab.c"
    break;

  case 17: /* statement: VAR IDENTIFIER ':' type_list_car '=' expr  */
#line 122 "parser.y"
                                                { printf("explicit variable declaration:\n"); }
#line 1655 "parser.tab.c"
    break;

  case 18: /* statement: VAR IDENTIFIER ':' type_list_simple '=' expr  */
#line 123 "parser.y"
                                                   { printf("explicit variable declaration:\n"); }
#line 1661 "parser.tab.c"
    break;

  case 19: /* statement: method  */
#line 124 "parser.y"
             { printf("Method:\n"); }
#line 1667 "parser.tab.c"
    break;

  case 29: /* for_expr: FOR '(' for_params ')' expr  */
#line 154 "parser.y"
                                                             { printf("FOR LOOP\n"); }
#line 1673 "parser.tab.c"
    break;

  case 30: /* for_expr: FOR '{' for_multy_list '}' expr  */
#line 155 "parser.y"
                                                              { printf("FOR MULTY LOOP\n"); }
#line 1679 "parser.tab.c"
    break;

  case 31: /* for_expr: FOR '{' for_params if_condition_list '}' expr  */
#line 156 "parser.y"
                                                                               { printf("FOR LOOP: multy with IF_STMT\n"); }
#line 1685 "parser.tab.c"
    break;

  case 57: /* expr_list_e: expr_list  */
#line 228 "parser.y"
                   { printf("PARSER found expr_list - expr_list\n"); }
#line 1691 "parser.tab.c"
    break;

  case 58: /* expr_list_e: %empty  */
#line 229 "parser.y"
                     { printf("PARSER found expr_list - nothing\n"); }
#line 1697 "parser.tab.c"
    break;

  case 59: /* expr_list: expr  */
#line 234 "parser.y"
                      { printf("PARSER found expr_list - expr\n"); }
#line 1703 "parser.tab.c"
    break;

  case 60: /* expr_list: expr_list ',' expr  */
#line 235 "parser.y"
                          { printf("PARSER found expr_list - expr_list\n"); }
#line 1709 "parser.tab.c"
    break;

  case 61: /* expr: const  */
#line 240 "parser.y"
            {printf("PARSER found expr - const\n"); }
#line 1715 "parser.tab.c"
    break;

  case 62: /* expr: IDENTIFIER  */
#line 241 "parser.y"
                 {printf("PARSER found expr - IDENTIFIER\n"); }
#line 1721 "parser.tab.c"
    break;

  case 63: /* expr: CLASS_ID  */
#line 242 "parser.y"
               {printf("PARSER found expr - CLASS_ID\n"); }
#line 1727 "parser.tab.c"
    break;

  case 64: /* expr: IDENTIFIER '=' expr  */
#line 243 "parser.y"
                          { printf("Assignment:\n"); }
#line 1733 "parser.tab.c"
    break;

  case 65: /* expr: '(' expr ')'  */
#line 244 "parser.y"
                   {printf("PARSER found expr - ( expr )\n"); }
#line 1739 "parser.tab.c"
    break;

  case 66: /* expr: expr '>' expr  */
#line 245 "parser.y"
                    {printf("PARSER found expr - expr > expr\n"); }
#line 1745 "parser.tab.c"
    break;

  case 67: /* expr: expr '<' expr  */
#line 246 "parser.y"
                    {printf("PARSER found expr - expr < expr\n"); }
#line 1751 "parser.tab.c"
    break;

  case 68: /* expr: expr MORE_OR_EQUAL_OPERATOR expr  */
#line 247 "parser.y"
                                       {printf("PARSER found expr - expr >= expr\n"); }
#line 1757 "parser.tab.c"
    break;

  case 69: /* expr: expr LESS_OR_EQUAL_OPERATOR expr  */
#line 248 "parser.y"
                                       {printf("PARSER found expr - expr <= expr\n"); }
#line 1763 "parser.tab.c"
    break;

  case 70: /* expr: expr EQ expr  */
#line 249 "parser.y"
                   {printf("PARSER found expr - expr == expr\n"); }
#line 1769 "parser.tab.c"
    break;

  case 71: /* expr: expr NEQ expr  */
#line 250 "parser.y"
                    {printf("PARSER found expr - expr != expr\n"); }
#line 1775 "parser.tab.c"
    break;

  case 72: /* expr: expr '+' expr  */
#line 251 "parser.y"
                    { printf("PARSER found expr - expr + expr\n"); }
#line 1781 "parser.tab.c"
    break;

  case 73: /* expr: expr '-' expr  */
#line 252 "parser.y"
                    { printf("PARSER found expr - expr - expr\n"); }
#line 1787 "parser.tab.c"
    break;

  case 74: /* expr: expr '/' expr  */
#line 253 "parser.y"
                    { printf("PARSER found expr - expr / expr\n"); }
#line 1793 "parser.tab.c"
    break;

  case 75: /* expr: expr '*' expr  */
#line 254 "parser.y"
                    { printf("PARSER found expr - expr * expr\n"); }
#line 1799 "parser.tab.c"
    break;

  case 76: /* expr: expr '%' expr  */
#line 255 "parser.y"
                    { printf("PARSER found expr - expr % expr\n"); }
#line 1805 "parser.tab.c"
    break;

  case 77: /* expr: expr '&' expr  */
#line 256 "parser.y"
                    { printf("PARSER found expr - expr && expr\n"); }
#line 1811 "parser.tab.c"
    break;

  case 78: /* expr: expr '|' expr  */
#line 257 "parser.y"
                    { printf("PARSER found expr - expr | expr\n"); }
#line 1817 "parser.tab.c"
    break;

  case 79: /* expr: expr KW_OR expr  */
#line 258 "parser.y"
                      { printf("PARSER found expr - expr || expr\n"); }
#line 1823 "parser.tab.c"
    break;

  case 80: /* expr: expr KW_AND expr  */
#line 259 "parser.y"
                       { printf("PARSER found expr - expr && expr\n"); }
#line 1829 "parser.tab.c"
    break;

  case 83: /* expr: func_call  */
#line 262 "parser.y"
                { printf("PARSER found expr - func_call\n"); }
#line 1835 "parser.tab.c"
    break;

  case 84: /* expr: if_else_expr  */
#line 263 "parser.y"
                  { printf("PARSER found expr - if_else_expr\n"); }
#line 1841 "parser.tab.c"
    break;

  case 85: /* expr: for_expr  */
#line 264 "parser.y"
               { printf("PARSER found expr - for_expr\n"); }
#line 1847 "parser.tab.c"
    break;

  case 86: /* expr: while_expr  */
#line 265 "parser.y"
                 { printf("PARSER found expr - while_expr\n"); }
#line 1853 "parser.tab.c"
    break;

  case 87: /* expr: do_while_expr  */
#line 266 "parser.y"
                    { printf("PARSER found expr - do_while_expr\n"); }
#line 1859 "parser.tab.c"
    break;

  case 88: /* expr: try_expr  */
#line 267 "parser.y"
               { printf("PARSER found expr - try_expr\n"); }
#line 1865 "parser.tab.c"
    break;

  case 89: /* expr: match_expr  */
#line 268 "parser.y"
                 { printf("PARSER found expr - match_expr\n"); }
#line 1871 "parser.tab.c"
    break;

  case 91: /* expr: func  */
#line 270 "parser.y"
           { printf("Function:\n"); }
#line 1877 "parser.tab.c"
    break;

  case 92: /* expr: method_call  */
#line 271 "parser.y"
                  { printf("method_call:\n"); }
#line 1883 "parser.tab.c"
    break;

  case 93: /* num_const: NUM_10  */
#line 277 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 1889 "parser.tab.c"
    break;

  case 94: /* num_const: NUM_16  */
#line 278 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 1895 "parser.tab.c"
    break;

  case 95: /* num_const: REAL_NUMBER  */
#line 279 "parser.y"
                  { printf("PARSER found - REAL\n"); }
#line 1901 "parser.tab.c"
    break;

  case 96: /* num_const: REAL_NUMBER_EXPONENT  */
#line 280 "parser.y"
                           { printf("PARSER found - REAL_EXP\n"); }
#line 1907 "parser.tab.c"
    break;

  case 107: /* func_call: IDENTIFIER '(' expr_list_e ')'  */
#line 302 "parser.y"
                                     { printf("Function call: WITH PARAMS\n"); }
#line 1913 "parser.tab.c"
    break;

  case 138: /* array: ARRAY '(' expr_list_e ')'  */
#line 379 "parser.y"
                                { printf("PARSER found Array\n"); }
#line 1919 "parser.tab.c"
    break;

  case 139: /* list: LIST '(' expr_list_e ')'  */
#line 385 "parser.y"
                               { printf("PARSER found List\n"); }
#line 1925 "parser.tab.c"
    break;

  case 140: /* vector: VECTOR '(' expr_list_e ')'  */
#line 391 "parser.y"
                                 { printf("PARSER found Vector\n"); }
#line 1931 "parser.tab.c"
    break;

  case 141: /* set: SET '(' expr_list_e ')'  */
#line 397 "parser.y"
                              { printf("PARSER found Set\n"); }
#line 1937 "parser.tab.c"
    break;


#line 1941 "parser.tab.c"

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

#line 402 "parser.y"

