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

#line 82 "parser.tab.cpp"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_3_ = 3,                         /* '='  */
  YYSYMBOL_4_ = 4,                         /* '|'  */
  YYSYMBOL_5_ = 5,                         /* '&'  */
  YYSYMBOL_6_ = 6,                         /* '>'  */
  YYSYMBOL_7_ = 7,                         /* '<'  */
  YYSYMBOL_8_ = 8,                         /* '+'  */
  YYSYMBOL_9_ = 9,                         /* '-'  */
  YYSYMBOL_UMINUS = 10,                    /* UMINUS  */
  YYSYMBOL_UPLUS = 11,                     /* UPLUS  */
  YYSYMBOL_12_ = 12,                       /* '*'  */
  YYSYMBOL_13_ = 13,                       /* '/'  */
  YYSYMBOL_14_ = 14,                       /* '%'  */
  YYSYMBOL_15_ = 15,                       /* '('  */
  YYSYMBOL_16_ = 16,                       /* ')'  */
  YYSYMBOL_17_ = 17,                       /* '['  */
  YYSYMBOL_18_ = 18,                       /* ']'  */
  YYSYMBOL_NUM_10 = 19,                    /* NUM_10  */
  YYSYMBOL_NUM_16 = 20,                    /* NUM_16  */
  YYSYMBOL_REAL_NUMBER = 21,               /* REAL_NUMBER  */
  YYSYMBOL_REAL_NUMBER_EXPONENT = 22,      /* REAL_NUMBER_EXPONENT  */
  YYSYMBOL_IDENTIFIER = 23,                /* IDENTIFIER  */
  YYSYMBOL_CONST_CHAR = 24,                /* CONST_CHAR  */
  YYSYMBOL_CONST_STRING = 25,              /* CONST_STRING  */
  YYSYMBOL_NEWLINE = 26,                   /* NEWLINE  */
  YYSYMBOL_VAL = 27,                       /* VAL  */
  YYSYMBOL_VAR = 28,                       /* VAR  */
  YYSYMBOL_ELSE = 29,                      /* ELSE  */
  YYSYMBOL_IF = 30,                        /* IF  */
  YYSYMBOL_ELSE_IF = 31,                   /* ELSE_IF  */
  YYSYMBOL_FOR = 32,                       /* FOR  */
  YYSYMBOL_DO = 33,                        /* DO  */
  YYSYMBOL_WHILE = 34,                     /* WHILE  */
  YYSYMBOL_MATCH = 35,                     /* MATCH  */
  YYSYMBOL_CASE = 36,                      /* CASE  */
  YYSYMBOL_TRY = 37,                       /* TRY  */
  YYSYMBOL_CATCH = 38,                     /* CATCH  */
  YYSYMBOL_FINALLY = 39,                   /* FINALLY  */
  YYSYMBOL_KW_TRUE = 40,                   /* KW_TRUE  */
  YYSYMBOL_KW_FALSE = 41,                  /* KW_FALSE  */
  YYSYMBOL_KW_NULL = 42,                   /* KW_NULL  */
  YYSYMBOL_EQ = 43,                        /* EQ  */
  YYSYMBOL_NEQ = 44,                       /* NEQ  */
  YYSYMBOL_KW_OR = 45,                     /* KW_OR  */
  YYSYMBOL_KW_AND = 46,                    /* KW_AND  */
  YYSYMBOL_MORE_OR_EQUAL_OPERATOR = 47,    /* MORE_OR_EQUAL_OPERATOR  */
  YYSYMBOL_LESS_OR_EQUAL_OPERATOR = 48,    /* LESS_OR_EQUAL_OPERATOR  */
  YYSYMBOL_INT_KW = 49,                    /* INT_KW  */
  YYSYMBOL_DOUBLE_KW = 50,                 /* DOUBLE_KW  */
  YYSYMBOL_STRING_KW = 51,                 /* STRING_KW  */
  YYSYMBOL_CHAR_KW = 52,                   /* CHAR_KW  */
  YYSYMBOL_BOOLEAN_KW = 53,                /* BOOLEAN_KW  */
  YYSYMBOL_ANY_KW = 54,                    /* ANY_KW  */
  YYSYMBOL_UNIT_KW = 55,                   /* UNIT_KW  */
  YYSYMBOL_TO = 56,                        /* TO  */
  YYSYMBOL_BY = 57,                        /* BY  */
  YYSYMBOL_YIELD = 58,                     /* YIELD  */
  YYSYMBOL_GENERATOR_OPERATOR = 59,        /* GENERATOR_OPERATOR  */
  YYSYMBOL_RIGHT_ARROW_OPERATOR = 60,      /* RIGHT_ARROW_OPERATOR  */
  YYSYMBOL_ID_COLLECTION = 61,             /* ID_COLLECTION  */
  YYSYMBOL_ARRAY = 62,                     /* ARRAY  */
  YYSYMBOL_LIST = 63,                      /* LIST  */
  YYSYMBOL_VECTOR = 64,                    /* VECTOR  */
  YYSYMBOL_SET = 65,                       /* SET  */
  YYSYMBOL_DEF = 66,                       /* DEF  */
  YYSYMBOL_CLASS = 67,                     /* CLASS  */
  YYSYMBOL_CLASS_ID = 68,                  /* CLASS_ID  */
  YYSYMBOL_69_ = 69,                       /* '{'  */
  YYSYMBOL_70_ = 70,                       /* '}'  */
  YYSYMBOL_71_ = 71,                       /* ':'  */
  YYSYMBOL_72_ = 72,                       /* ','  */
  YYSYMBOL_73_ = 73,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 74,                  /* $accept  */
  YYSYMBOL_program = 75,                   /* program  */
  YYSYMBOL_statement_expr_list = 76,       /* statement_expr_list  */
  YYSYMBOL_statement_expr_list_e = 77,     /* statement_expr_list_e  */
  YYSYMBOL_statement = 78,                 /* statement  */
  YYSYMBOL_if_else_expr = 79,              /* if_else_expr  */
  YYSYMBOL_else_expr = 80,                 /* else_expr  */
  YYSYMBOL_if_condition_list = 81,         /* if_condition_list  */
  YYSYMBOL_for_expr = 82,                  /* for_expr  */
  YYSYMBOL_for_params = 83,                /* for_params  */
  YYSYMBOL_for_multy_list = 84,            /* for_multy_list  */
  YYSYMBOL_while_expr = 85,                /* while_expr  */
  YYSYMBOL_do_while_expr = 86,             /* do_while_expr  */
  YYSYMBOL_match_expr = 87,                /* match_expr  */
  YYSYMBOL_case_condition = 88,            /* case_condition  */
  YYSYMBOL_int_literal_list_case = 89,     /* int_literal_list_case  */
  YYSYMBOL_case_list = 90,                 /* case_list  */
  YYSYMBOL_try_expr = 91,                  /* try_expr  */
  YYSYMBOL_catch = 92,                     /* catch  */
  YYSYMBOL_finally = 93,                   /* finally  */
  YYSYMBOL_expr_list_e = 94,               /* expr_list_e  */
  YYSYMBOL_expr_list = 95,                 /* expr_list  */
  YYSYMBOL_expr = 96,                      /* expr  */
  YYSYMBOL_num_const = 97,                 /* num_const  */
  YYSYMBOL_const = 98,                     /* const  */
  YYSYMBOL_func_call = 99,                 /* func_call  */
  YYSYMBOL_params = 100,                   /* params  */
  YYSYMBOL_func = 101,                     /* func  */
  YYSYMBOL_method_params = 102,            /* method_params  */
  YYSYMBOL_method = 103,                   /* method  */
  YYSYMBOL_type = 104,                     /* type  */
  YYSYMBOL_type_list_car = 105,            /* type_list_car  */
  YYSYMBOL_type_list = 106,                /* type_list  */
  YYSYMBOL_type_list_simple = 107,         /* type_list_simple  */
  YYSYMBOL_array = 108,                    /* array  */
  YYSYMBOL_list = 109,                     /* list  */
  YYSYMBOL_vector = 110,                   /* vector  */
  YYSYMBOL_set = 111                       /* set  */
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
#define YYFINAL  69
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1226

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  138
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  288

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   309


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
       2,     2,     2,     2,     2,     2,     2,    14,     5,     2,
      15,    16,    12,     8,    72,     9,     2,    13,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    71,    73,
       7,     3,     6,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    17,     2,    18,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,     4,    70,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,    10,    11,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    63,    63,    93,    94,    95,    96,    97,    98,   102,
     103,   107,   108,   109,   110,   111,   112,   113,   122,   126,
     130,   131,   132,   133,   140,   141,   142,   143,   144,   145,
     150,   151,   156,   157,   158,   159,   165,   169,   173,   174,
     179,   180,   181,   182,   183,   187,   188,   192,   193,   194,
     195,   201,   202,   203,   207,   211,   218,   219,   224,   225,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     265,   266,   267,   268,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   290,   291,   295,   296,   297,   298,
     302,   303,   304,   305,   309,   310,   311,   315,   316,   317,
     318,   319,   320,   327,   328,   329,   330,   331,   332,   333,
     337,   338,   342,   343,   347,   360,   366,   372,   378
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
  "\"end of file\"", "error", "\"invalid token\"", "'='", "'|'", "'&'",
  "'>'", "'<'", "'+'", "'-'", "UMINUS", "UPLUS", "'*'", "'/'", "'%'",
  "'('", "')'", "'['", "']'", "NUM_10", "NUM_16", "REAL_NUMBER",
  "REAL_NUMBER_EXPONENT", "IDENTIFIER", "CONST_CHAR", "CONST_STRING",
  "NEWLINE", "VAL", "VAR", "ELSE", "IF", "ELSE_IF", "FOR", "DO", "WHILE",
  "MATCH", "CASE", "TRY", "CATCH", "FINALLY", "KW_TRUE", "KW_FALSE",
  "KW_NULL", "EQ", "NEQ", "KW_OR", "KW_AND", "MORE_OR_EQUAL_OPERATOR",
  "LESS_OR_EQUAL_OPERATOR", "INT_KW", "DOUBLE_KW", "STRING_KW", "CHAR_KW",
  "BOOLEAN_KW", "ANY_KW", "UNIT_KW", "TO", "BY", "YIELD",
  "GENERATOR_OPERATOR", "RIGHT_ARROW_OPERATOR", "ID_COLLECTION", "ARRAY",
  "LIST", "VECTOR", "SET", "DEF", "CLASS", "CLASS_ID", "'{'", "'}'", "':'",
  "','", "';'", "$accept", "program", "statement_expr_list",
  "statement_expr_list_e", "statement", "if_else_expr", "else_expr",
  "if_condition_list", "for_expr", "for_params", "for_multy_list",
  "while_expr", "do_while_expr", "match_expr", "case_condition",
  "int_literal_list_case", "case_list", "try_expr", "catch", "finally",
  "expr_list_e", "expr_list", "expr", "num_const", "const", "func_call",
  "params", "func", "method_params", "method", "type", "type_list_car",
  "type_list", "type_list_simple", "array", "list", "vector", "set", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-163)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-46)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     434,   844,   844,   895,  -163,  -163,  -163,  -163,    20,  -163,
    -163,   -11,    25,     9,     4,   844,    27,   -28,  -163,  -163,
    -163,    32,    43,    49,    56,    73,   434,    45,   375,  -163,
    -163,  -163,  -163,  -163,  -163,  -163,  -163,  1153,    70,  -163,
    -163,  -163,  -163,  -163,  -163,  -163,  -163,   142,   142,    18,
    1041,    -3,   844,   486,   -26,    24,    26,   844,    85,    85,
    1018,   844,   844,   844,   844,   844,   844,    57,    39,  -163,
    -163,  -163,  -163,  1153,   844,   844,   844,   844,   844,   844,
     844,   844,   844,   844,   844,   844,   844,   844,   844,    42,
      78,  -163,    -6,    89,  1153,  -163,    22,  1153,    79,   844,
     163,   844,   163,  1063,    58,   105,    94,    37,   119,  1086,
     256,   121,    66,   123,   126,   127,   122,    19,  -163,  1178,
     379,   310,   310,   142,   142,    -9,    -9,    -9,   177,   177,
    1153,  1153,   310,   310,    79,  -163,  -163,  -163,  -163,  -163,
    -163,  -163,  -163,    86,   537,    77,  -163,   844,   972,    80,
    1153,   163,  -163,     7,   146,  1153,     8,   148,   844,   979,
     588,   844,    92,  -163,   639,    85,  -163,   844,   844,     1,
    -163,  -163,  -163,  -163,    88,    28,   690,   122,    78,    99,
     742,   844,  1153,    78,  1153,   133,    97,   162,  -163,    21,
    -163,   972,  -163,  -163,  -163,   155,   102,   844,    78,   844,
     844,   844,  1108,   136,   844,    -9,  1153,  -163,   844,   793,
     145,   844,  1153,  -163,  1134,    -9,   108,   110,   154,  -163,
    -163,   434,  1153,  -163,    30,   191,  -163,   844,  1153,  1153,
     192,   844,   844,   979,   844,   138,   143,    78,  1153,  -163,
    1153,  1153,  1153,   844,  -163,   979,  1153,  1153,   844,  1153,
     844,  1153,  -163,    79,   844,  -163,   267,   132,  -163,   946,
    1153,   979,  1153,  1153,  -163,  1153,   844,    78,  -163,  1153,
     139,  1153,  1153,   100,   284,  -163,  -163,   434,  1153,  -163,
    1153,  -163,   979,  -163,  -163,   334,  -163,  -163
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      10,     0,     0,   109,    90,    91,    92,    93,    61,    96,
      95,     0,     0,     0,     0,     0,     0,     0,    97,    98,
      99,     0,     0,     0,     0,     0,    10,     0,     9,     2,
       3,    82,    83,    84,    85,    87,    86,     4,    94,    60,
      81,    89,    17,   100,   101,   102,   103,    80,    79,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    57,    57,    57,    57,   116,     0,     1,
       8,     7,     5,     6,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    63,     0,     0,    62,   104,     0,    58,     0,     0,
       0,     0,     0,     0,     0,     0,    32,     0,     0,     0,
       0,     0,    56,     0,     0,     0,   109,     0,    88,    76,
      75,    64,    65,    70,    71,    73,    72,    74,    68,    69,
      77,    78,    66,    67,     0,   123,   124,   125,   126,   127,
     128,   129,   106,     0,     0,     0,   105,     0,     0,     0,
      11,     0,   130,     0,     0,    12,     0,     0,     0,     0,
       0,     0,     0,    35,     0,     0,    33,     0,     0,     0,
     135,   136,   137,   138,     0,     0,     0,   109,     0,     0,
       0,     0,   110,     0,    59,    42,     0,    44,    94,    40,
      49,     0,    38,    50,   132,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,    20,    23,     0,     0,
       0,     0,    28,    34,     0,    36,     0,     0,    51,    52,
     114,    10,   120,   122,     0,     0,    39,     0,   111,   112,
     107,     0,     0,     0,     0,     0,     0,     0,    13,   131,
      14,    15,    16,     0,    18,     0,    24,    21,     0,    29,
       0,    25,    37,     0,     0,    53,     4,    17,   115,     0,
     113,     0,    43,    47,    46,    41,     0,     0,   133,    19,
      30,    26,    22,     0,     0,   119,   121,    10,   117,   108,
      48,   134,     0,    54,    55,     4,    31,   118
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -163,  -163,  -163,   205,   178,  -163,  -163,  -163,  -163,   -51,
    -163,  -163,  -163,  -163,    16,  -163,  -130,  -163,  -163,    -8,
     -34,   166,     0,  -142,  -141,  -163,  -107,  -163,  -163,  -162,
     -85,   118,  -163,   -86,  -163,  -163,  -163,  -163
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    27,    28,    68,    30,    31,   244,   162,    32,   105,
     107,    33,    34,    35,   186,   187,   149,    36,   218,   219,
     111,   112,    97,    38,    39,    40,    51,    41,   117,    42,
     152,   153,   195,   154,    43,    44,    45,    46
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      37,    47,    48,    50,   179,   142,   188,   189,   106,   175,
     197,   200,    55,    92,   223,    60,   157,   188,   203,    58,
     143,    52,   176,    52,    57,   -45,    37,    99,    73,   101,
     113,   114,   115,    53,   177,    53,    85,    86,   146,   216,
     217,    62,    61,    98,   220,    69,   258,    63,    56,   188,
     189,   234,    94,    54,   144,    54,   166,   103,    64,   257,
     104,   109,   110,   163,    65,   196,   194,   198,   198,    93,
     224,    66,   116,    59,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,    90,
     178,   188,   264,   225,   147,   100,    67,   102,   230,   150,
      93,   155,    93,   188,   270,    89,   190,   164,   104,   118,
     165,   134,   145,   239,   213,   148,   191,   159,   207,   188,
     279,   160,   208,   273,   161,   190,   190,   135,   136,   137,
     138,   139,   140,   141,   167,   191,   191,   170,   147,   171,
     188,   286,   172,   173,   182,   174,   180,   184,   183,   199,
     192,   201,   268,   193,    80,    81,    82,   232,   202,    90,
     205,   206,   209,   231,   212,   210,   233,   214,   215,   226,
     283,   236,   193,   193,   237,   250,   222,   253,   151,   254,
     228,   229,   281,    76,    77,    78,    79,    85,    86,    80,
      81,    82,   245,   217,   259,   261,   282,   238,   266,   240,
     241,   242,   276,   267,   246,    29,    72,   235,   247,   249,
     255,   251,   135,   136,   137,   138,   139,   140,   141,    96,
     156,   256,    85,    86,    87,    88,     0,   260,     0,     0,
       0,   262,   263,     0,   265,     0,     0,     0,     0,     0,
       0,     0,     0,   269,     0,     0,     0,     0,   271,     0,
     272,     0,     0,     0,   274,     0,     0,     0,     0,   278,
      74,    75,    76,    77,    78,    79,   280,     0,    80,    81,
      82,    74,    75,    76,    77,    78,    79,   285,     0,    80,
      81,    82,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,    79,     0,     0,    80,    81,    82,    83,
      84,    85,    86,    87,    88,     0,     0,     0,     0,     0,
      83,    84,    85,    86,    87,    88,     0,     0,    78,    79,
       0,     0,    80,    81,    82,     0,   169,    83,    84,    85,
      86,    87,    88,     0,     0,     0,     0,   275,    74,    75,
      76,    77,    78,    79,     0,     0,    80,    81,    82,     0,
       0,     0,     0,     0,   284,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,    84,    85,
      86,    87,    88,     1,     2,    76,    77,    78,    79,     0,
       3,    80,    81,    82,     4,     5,     6,     7,     8,     9,
      10,    70,    11,    12,   287,    13,     0,    14,    15,    16,
       0,     0,    17,     0,     0,    18,    19,    20,     0,     0,
       0,     0,    83,    84,    85,    86,    87,    88,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,    22,    23,
      24,    25,     1,     2,    26,     0,     0,     0,    71,     3,
       0,     0,     0,     4,     5,     6,     7,     8,     9,    10,
       0,    11,    12,     0,    13,     0,    14,    15,    16,     0,
       0,    17,     0,     0,    18,    19,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     2,    21,    22,    23,    24,
      25,     3,    95,    26,     0,     4,     5,     6,     7,     8,
       9,    10,     0,     0,     0,     0,    13,     0,    14,    15,
      16,     0,     0,    17,     0,     0,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     2,     0,    21,    22,
      23,    24,     3,     0,     0,    26,     4,     5,     6,     7,
       8,     9,    10,   181,     0,     0,     0,    13,     0,    14,
      15,    16,     0,     0,    17,     0,     0,    18,    19,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     2,     0,    21,
      22,    23,    24,     3,     0,     0,    26,     4,     5,     6,
       7,     8,     9,    10,     0,     0,     0,     0,    13,     0,
      14,    15,    16,     0,     0,    17,     0,     0,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   204,     1,     2,     0,
      21,    22,    23,    24,     3,     0,     0,    26,     4,     5,
       6,     7,     8,     9,    10,     0,     0,     0,     0,    13,
       0,    14,    15,    16,     0,     0,    17,     0,     0,    18,
      19,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   211,     1,     2,
       0,    21,    22,    23,    24,     3,     0,     0,    26,     4,
       5,     6,     7,     8,     9,    10,     0,     0,     0,     0,
      13,     0,    14,    15,    16,     0,     0,    17,     0,     0,
      18,    19,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     2,    21,    22,    23,    24,    25,     3,     0,   221,
       0,     4,     5,     6,     7,     8,     9,    10,   227,     0,
       0,     0,    13,     0,    14,    15,    16,     0,     0,    17,
       0,     0,    18,    19,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     2,     0,    21,    22,    23,    24,     3,     0,
       0,    26,     4,     5,     6,     7,     8,     9,    10,     0,
       0,     0,     0,    13,     0,    14,    15,    16,     0,     0,
      17,     0,     0,    18,    19,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   248,     1,     2,     0,    21,    22,    23,    24,     3,
       0,     0,    26,     4,     5,     6,     7,     8,     9,    10,
       0,     0,     0,     0,    13,     0,    14,    15,    16,     0,
       0,    17,     0,     0,    18,    19,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     2,     0,    21,    22,    23,    24,
       3,     0,     0,    26,     4,     5,     6,     7,    49,     9,
      10,     0,     0,     0,     0,    13,     0,    14,    15,    16,
       0,     0,    17,     0,     0,    18,    19,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     2,     0,    21,    22,    23,
      24,     3,     0,     0,    26,     4,     5,     6,     7,     8,
       9,    10,     0,     0,     0,     0,    13,     0,    14,    15,
      16,     0,     0,    17,     0,     0,    18,    19,    20,     0,
       0,     4,     5,     6,     7,   185,     9,    10,     4,     5,
       6,     7,     0,     9,    10,     0,     0,     0,    21,    22,
      23,    24,    18,    19,    20,   277,     0,     0,     0,    18,
      19,    20,    74,    75,    76,    77,    78,    79,     0,     0,
      80,    81,    82,     0,    21,    22,    23,    24,     0,     0,
       0,    21,    22,    23,    24,    74,    75,    76,    77,    78,
      79,     0,   108,    80,    81,    82,     0,    91,     0,     0,
       0,    83,    84,    85,    86,    87,    88,    74,    75,    76,
      77,    78,    79,     0,     0,    80,    81,    82,     0,   158,
       0,     0,     0,     0,    83,    84,    85,    86,    87,    88,
      74,    75,    76,    77,    78,    79,     0,     0,    80,    81,
      82,     0,   168,     0,     0,     0,    83,    84,    85,    86,
      87,    88,    74,    75,    76,    77,    78,    79,     0,     0,
      80,    81,    82,     0,     0,     0,     0,     0,     0,    83,
      84,    85,    86,    87,    88,     0,     0,   243,    74,    75,
      76,    77,    78,    79,     0,     0,    80,    81,    82,     0,
     252,    83,    84,    85,    86,    87,    88,    74,    75,    76,
      77,    78,    79,     0,     0,    80,    81,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,    84,    85,
      86,    87,    88,    75,    76,    77,    78,    79,     0,     0,
      80,    81,    82,     0,     0,     0,    83,    84,    85,    86,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,    84,    85,    86,    87,    88
};

static const yytype_int16 yycheck[] =
{
       0,     1,     2,     3,   134,    90,   148,   148,    59,   116,
       3,     3,    23,    16,   176,    15,   102,   159,   159,    15,
      26,     3,     3,     3,    15,     4,    26,     3,    28,     3,
      64,    65,    66,    15,    15,    15,    45,    46,    16,    38,
      39,    69,    15,    69,    16,     0,    16,    15,    23,   191,
     191,    30,    52,    35,    60,    35,   107,    57,    15,   221,
      23,    61,    62,    26,    15,   151,   151,    60,    60,    72,
     177,    15,    15,    69,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    71,
      71,   233,   233,   178,    72,    71,    23,    71,   183,    99,
      72,   101,    72,   245,   245,    35,    26,    70,    23,    70,
      73,    69,    23,   198,   165,    36,    36,    59,    26,   261,
     261,    16,    30,   253,    30,    26,    26,    49,    50,    51,
      52,    53,    54,    55,    15,    36,    36,    16,    72,    16,
     282,   282,    16,    16,   144,    23,    60,   147,    71,     3,
      70,     3,   237,    73,    12,    13,    14,    60,   158,    71,
     160,   161,    70,    30,   164,    73,     4,   167,   168,    70,
      70,    16,    73,    73,    72,    30,   176,    69,    15,    69,
     180,   181,   267,     6,     7,     8,     9,    45,    46,    12,
      13,    14,    56,    39,     3,     3,    57,   197,    60,   199,
     200,   201,    70,    60,   204,     0,    28,   191,   208,   209,
     218,   211,    49,    50,    51,    52,    53,    54,    55,    53,
     102,   221,    45,    46,    47,    48,    -1,   227,    -1,    -1,
      -1,   231,   232,    -1,   234,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   243,    -1,    -1,    -1,    -1,   248,    -1,
     250,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,   259,
       4,     5,     6,     7,     8,     9,   266,    -1,    12,    13,
      14,     4,     5,     6,     7,     8,     9,   277,    -1,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,
       6,     7,     8,     9,    -1,    -1,    12,    13,    14,    43,
      44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
      43,    44,    45,    46,    47,    48,    -1,    -1,     8,     9,
      -1,    -1,    12,    13,    14,    -1,    70,    43,    44,    45,
      46,    47,    48,    -1,    -1,    -1,    -1,    70,     4,     5,
       6,     7,     8,     9,    -1,    -1,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    70,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,
      46,    47,    48,     8,     9,     6,     7,     8,     9,    -1,
      15,    12,    13,    14,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    70,    30,    -1,    32,    33,    34,
      -1,    -1,    37,    -1,    -1,    40,    41,    42,    -1,    -1,
      -1,    -1,    43,    44,    45,    46,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,
      65,    66,     8,     9,    69,    -1,    -1,    -1,    73,    15,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    28,    -1,    30,    -1,    32,    33,    34,    -1,
      -1,    37,    -1,    -1,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,     9,    62,    63,    64,    65,
      66,    15,    16,    69,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    -1,    -1,    37,    -1,    -1,    40,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     8,     9,    -1,    62,    63,
      64,    65,    15,    -1,    -1,    69,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    -1,    -1,    37,    -1,    -1,    40,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     8,     9,    -1,    62,
      63,    64,    65,    15,    -1,    -1,    69,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    -1,    -1,    37,    -1,    -1,    40,    41,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,     8,     9,    -1,
      62,    63,    64,    65,    15,    -1,    -1,    69,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    -1,    -1,    37,    -1,    -1,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,     8,     9,
      -1,    62,    63,    64,    65,    15,    -1,    -1,    69,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    -1,    -1,    37,    -1,    -1,
      40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       8,     9,    62,    63,    64,    65,    66,    15,    -1,    69,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    -1,    -1,    37,
      -1,    -1,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     8,     9,    -1,    62,    63,    64,    65,    15,    -1,
      -1,    69,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    -1,    -1,
      37,    -1,    -1,    40,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,     8,     9,    -1,    62,    63,    64,    65,    15,
      -1,    -1,    69,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    -1,
      -1,    37,    -1,    -1,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     8,     9,    -1,    62,    63,    64,    65,
      15,    -1,    -1,    69,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      -1,    -1,    37,    -1,    -1,    40,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,     9,    -1,    62,    63,    64,
      65,    15,    -1,    -1,    69,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    -1,    -1,    37,    -1,    -1,    40,    41,    42,    -1,
      -1,    19,    20,    21,    22,    23,    24,    25,    19,    20,
      21,    22,    -1,    24,    25,    -1,    -1,    -1,    62,    63,
      64,    65,    40,    41,    42,    69,    -1,    -1,    -1,    40,
      41,    42,     4,     5,     6,     7,     8,     9,    -1,    -1,
      12,    13,    14,    -1,    62,    63,    64,    65,    -1,    -1,
      -1,    62,    63,    64,    65,     4,     5,     6,     7,     8,
       9,    -1,    34,    12,    13,    14,    -1,    16,    -1,    -1,
      -1,    43,    44,    45,    46,    47,    48,     4,     5,     6,
       7,     8,     9,    -1,    -1,    12,    13,    14,    -1,    16,
      -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,    48,
       4,     5,     6,     7,     8,     9,    -1,    -1,    12,    13,
      14,    -1,    16,    -1,    -1,    -1,    43,    44,    45,    46,
      47,    48,     4,     5,     6,     7,     8,     9,    -1,    -1,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    45,    46,    47,    48,    -1,    -1,    29,     4,     5,
       6,     7,     8,     9,    -1,    -1,    12,    13,    14,    -1,
      16,    43,    44,    45,    46,    47,    48,     4,     5,     6,
       7,     8,     9,    -1,    -1,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,
      46,    47,    48,     5,     6,     7,     8,     9,    -1,    -1,
      12,    13,    14,    -1,    -1,    -1,    43,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    45,    46,    47,    48
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     8,     9,    15,    19,    20,    21,    22,    23,    24,
      25,    27,    28,    30,    32,    33,    34,    37,    40,    41,
      42,    62,    63,    64,    65,    66,    69,    75,    76,    77,
      78,    79,    82,    85,    86,    87,    91,    96,    97,    98,
      99,   101,   103,   108,   109,   110,   111,    96,    96,    23,
      96,   100,     3,    15,    35,    23,    23,    15,    15,    69,
      96,    15,    69,    15,    15,    15,    15,    23,    77,     0,
      26,    73,    78,    96,     4,     5,     6,     7,     8,     9,
      12,    13,    14,    43,    44,    45,    46,    47,    48,    35,
      71,    16,    16,    72,    96,    16,    95,    96,    69,     3,
      71,     3,    71,    96,    23,    83,    83,    84,    34,    96,
      96,    94,    95,    94,    94,    94,    15,   102,    70,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    69,    49,    50,    51,    52,    53,
      54,    55,   104,    26,    60,    23,    16,    72,    36,    90,
      96,    15,   104,   105,   107,    96,   105,   107,    16,    59,
      16,    30,    81,    26,    70,    73,    83,    15,    16,    70,
      16,    16,    16,    16,    23,   100,     3,    15,    71,    90,
      60,    26,    96,    71,    96,    23,    88,    89,    97,    98,
      26,    36,    70,    73,   104,   106,   107,     3,    60,     3,
       3,     3,    96,    98,    58,    96,    96,    26,    30,    70,
      73,    58,    96,    83,    96,    96,    38,    39,    92,    93,
      16,    69,    96,   103,   100,   104,    70,    26,    96,    96,
     104,    30,    60,     4,    30,    88,    16,    72,    96,   104,
      96,    96,    96,    29,    80,    56,    96,    96,    58,    96,
      30,    96,    16,    69,    69,    93,    96,   103,    16,     3,
      96,     3,    96,    96,    98,    96,    60,    60,   104,    96,
      98,    96,    96,    90,    96,    70,    70,    69,    96,    98,
      96,   104,    57,    70,    70,    96,    98,    70
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    74,    75,    76,    76,    76,    76,    76,    76,    77,
      77,    78,    78,    78,    78,    78,    78,    78,    79,    80,
      81,    81,    81,    81,    82,    82,    82,    82,    82,    82,
      83,    83,    84,    84,    84,    84,    85,    86,    87,    87,
      88,    88,    88,    88,    88,    89,    89,    90,    90,    90,
      90,    91,    91,    91,    92,    93,    94,    94,    95,    95,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      97,    97,    97,    97,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    99,    99,   100,   100,   100,   100,
     101,   101,   101,   101,   102,   102,   102,   103,   103,   103,
     103,   103,   103,   104,   104,   104,   104,   104,   104,   104,
     105,   105,   106,   106,   107,   108,   109,   110,   111
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     2,     2,     2,     1,
       0,     4,     4,     6,     6,     6,     6,     1,     6,     2,
       2,     3,     4,     2,     6,     6,     7,     5,     5,     6,
       5,     7,     1,     2,     3,     2,     5,     6,     5,     5,
       1,     3,     1,     3,     1,     1,     3,     4,     5,     2,
       2,     5,     5,     6,     4,     4,     1,     0,     1,     3,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     4,     3,     5,     7,     0,
       5,     6,     6,     7,     3,     4,     0,     7,     9,     7,
       5,     7,     5,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     5,     4,     4,     4,     4
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
  case 10: /* statement_expr_list_e: %empty  */
#line 103 "parser.y"
                     { printf("PARSER found statement_list_e - nothing\n"); }
#line 1561 "parser.tab.cpp"
    break;

  case 11: /* statement: VAL IDENTIFIER '=' expr  */
#line 107 "parser.y"
                               { printf("implicit value declaration:\n"); }
#line 1567 "parser.tab.cpp"
    break;

  case 12: /* statement: VAR IDENTIFIER '=' expr  */
#line 108 "parser.y"
                               { printf("implicit variable declaration:\n"); }
#line 1573 "parser.tab.cpp"
    break;

  case 13: /* statement: VAL IDENTIFIER ':' type_list_car '=' expr  */
#line 109 "parser.y"
                                                { printf("explicit value declaration:\n"); }
#line 1579 "parser.tab.cpp"
    break;

  case 14: /* statement: VAL IDENTIFIER ':' type_list_simple '=' expr  */
#line 110 "parser.y"
                                                   { printf("explicit value declaration:\n"); }
#line 1585 "parser.tab.cpp"
    break;

  case 15: /* statement: VAR IDENTIFIER ':' type_list_car '=' expr  */
#line 111 "parser.y"
                                                { printf("explicit variable declaration:\n"); }
#line 1591 "parser.tab.cpp"
    break;

  case 16: /* statement: VAR IDENTIFIER ':' type_list_simple '=' expr  */
#line 112 "parser.y"
                                                   { printf("explicit variable declaration:\n"); }
#line 1597 "parser.tab.cpp"
    break;

  case 17: /* statement: method  */
#line 113 "parser.y"
             { printf("Method:\n"); }
#line 1603 "parser.tab.cpp"
    break;

  case 27: /* for_expr: FOR '(' for_params ')' expr  */
#line 143 "parser.y"
                                      { printf("FOR LOOP\n"); }
#line 1609 "parser.tab.cpp"
    break;

  case 28: /* for_expr: FOR '{' for_multy_list '}' expr  */
#line 144 "parser.y"
                                        { printf("FOR MULTY LOOP\n"); }
#line 1615 "parser.tab.cpp"
    break;

  case 29: /* for_expr: FOR '{' for_params if_condition_list '}' expr  */
#line 145 "parser.y"
                                                        { printf("FOR LOOP: multy with IF_STMT\n"); }
#line 1621 "parser.tab.cpp"
    break;

  case 56: /* expr_list_e: expr_list  */
#line 218 "parser.y"
                   { printf("PARSER found expr_list - expr_list\n"); }
#line 1627 "parser.tab.cpp"
    break;

  case 57: /* expr_list_e: %empty  */
#line 219 "parser.y"
                     { printf("PARSER found expr_list - nothing\n"); }
#line 1633 "parser.tab.cpp"
    break;

  case 58: /* expr_list: expr  */
#line 224 "parser.y"
                      { printf("PARSER found expr_list - expr\n"); }
#line 1639 "parser.tab.cpp"
    break;

  case 59: /* expr_list: expr_list ',' expr  */
#line 225 "parser.y"
                          { printf("PARSER found expr_list - expr_list\n"); }
#line 1645 "parser.tab.cpp"
    break;

  case 60: /* expr: const  */
#line 230 "parser.y"
            {printf("PARSER found expr - const\n"); }
#line 1651 "parser.tab.cpp"
    break;

  case 61: /* expr: IDENTIFIER  */
#line 231 "parser.y"
                 {printf("PARSER found expr - IDENTIFIER\n"); }
#line 1657 "parser.tab.cpp"
    break;

  case 62: /* expr: IDENTIFIER '=' expr  */
#line 232 "parser.y"
                          { printf("Assignment:\n"); }
#line 1663 "parser.tab.cpp"
    break;

  case 63: /* expr: '(' expr ')'  */
#line 233 "parser.y"
                   {printf("PARSER found expr - ( expr )\n"); }
#line 1669 "parser.tab.cpp"
    break;

  case 64: /* expr: expr '>' expr  */
#line 234 "parser.y"
                    {printf("PARSER found expr - expr > expr\n"); }
#line 1675 "parser.tab.cpp"
    break;

  case 65: /* expr: expr '<' expr  */
#line 235 "parser.y"
                    {printf("PARSER found expr - expr < expr\n"); }
#line 1681 "parser.tab.cpp"
    break;

  case 66: /* expr: expr MORE_OR_EQUAL_OPERATOR expr  */
#line 236 "parser.y"
                                       {printf("PARSER found expr - expr >= expr\n"); }
#line 1687 "parser.tab.cpp"
    break;

  case 67: /* expr: expr LESS_OR_EQUAL_OPERATOR expr  */
#line 237 "parser.y"
                                       {printf("PARSER found expr - expr <= expr\n"); }
#line 1693 "parser.tab.cpp"
    break;

  case 68: /* expr: expr EQ expr  */
#line 238 "parser.y"
                   {printf("PARSER found expr - expr == expr\n"); }
#line 1699 "parser.tab.cpp"
    break;

  case 69: /* expr: expr NEQ expr  */
#line 239 "parser.y"
                    {printf("PARSER found expr - expr != expr\n"); }
#line 1705 "parser.tab.cpp"
    break;

  case 70: /* expr: expr '+' expr  */
#line 240 "parser.y"
                    { printf("PARSER found expr - expr + expr\n"); }
#line 1711 "parser.tab.cpp"
    break;

  case 71: /* expr: expr '-' expr  */
#line 241 "parser.y"
                    { printf("PARSER found expr - expr - expr\n"); }
#line 1717 "parser.tab.cpp"
    break;

  case 72: /* expr: expr '/' expr  */
#line 242 "parser.y"
                    { printf("PARSER found expr - expr / expr\n"); }
#line 1723 "parser.tab.cpp"
    break;

  case 73: /* expr: expr '*' expr  */
#line 243 "parser.y"
                    { printf("PARSER found expr - expr * expr\n"); }
#line 1729 "parser.tab.cpp"
    break;

  case 74: /* expr: expr '%' expr  */
#line 244 "parser.y"
                    { printf("PARSER found expr - expr % expr\n"); }
#line 1735 "parser.tab.cpp"
    break;

  case 75: /* expr: expr '&' expr  */
#line 245 "parser.y"
                    { printf("PARSER found expr - expr && expr\n"); }
#line 1741 "parser.tab.cpp"
    break;

  case 76: /* expr: expr '|' expr  */
#line 246 "parser.y"
                    { printf("PARSER found expr - expr | expr\n"); }
#line 1747 "parser.tab.cpp"
    break;

  case 77: /* expr: expr KW_OR expr  */
#line 247 "parser.y"
                      { printf("PARSER found expr - expr || expr\n"); }
#line 1753 "parser.tab.cpp"
    break;

  case 78: /* expr: expr KW_AND expr  */
#line 248 "parser.y"
                       { printf("PARSER found expr - expr && expr\n"); }
#line 1759 "parser.tab.cpp"
    break;

  case 81: /* expr: func_call  */
#line 251 "parser.y"
                { printf("PARSER found expr - func_call\n"); }
#line 1765 "parser.tab.cpp"
    break;

  case 82: /* expr: if_else_expr  */
#line 252 "parser.y"
                  { printf("PARSER found expr - if_else_expr\n"); }
#line 1771 "parser.tab.cpp"
    break;

  case 83: /* expr: for_expr  */
#line 253 "parser.y"
               { printf("PARSER found expr - for_expr\n"); }
#line 1777 "parser.tab.cpp"
    break;

  case 84: /* expr: while_expr  */
#line 254 "parser.y"
                 { printf("PARSER found expr - while_expr\n"); }
#line 1783 "parser.tab.cpp"
    break;

  case 85: /* expr: do_while_expr  */
#line 255 "parser.y"
                    { printf("PARSER found expr - do_while_expr\n"); }
#line 1789 "parser.tab.cpp"
    break;

  case 86: /* expr: try_expr  */
#line 256 "parser.y"
               { printf("PARSER found expr - try_expr\n"); }
#line 1795 "parser.tab.cpp"
    break;

  case 87: /* expr: match_expr  */
#line 257 "parser.y"
                 { printf("PARSER found expr - match_expr\n"); }
#line 1801 "parser.tab.cpp"
    break;

  case 89: /* expr: func  */
#line 259 "parser.y"
           { printf("Function:\n"); }
#line 1807 "parser.tab.cpp"
    break;

  case 90: /* num_const: NUM_10  */
#line 265 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 1813 "parser.tab.cpp"
    break;

  case 91: /* num_const: NUM_16  */
#line 266 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 1819 "parser.tab.cpp"
    break;

  case 92: /* num_const: REAL_NUMBER  */
#line 267 "parser.y"
                  { printf("PARSER found - REAL\n"); }
#line 1825 "parser.tab.cpp"
    break;

  case 93: /* num_const: REAL_NUMBER_EXPONENT  */
#line 268 "parser.y"
                           { printf("PARSER found - REAL_EXP\n"); }
#line 1831 "parser.tab.cpp"
    break;

  case 104: /* func_call: IDENTIFIER '(' ')'  */
#line 290 "parser.y"
                         { printf("Function call: NO PARAMS\n"); }
#line 1837 "parser.tab.cpp"
    break;

  case 105: /* func_call: IDENTIFIER '(' expr_list ')'  */
#line 291 "parser.y"
                                   { printf("Function call: WITH PARAMS\n"); }
#line 1843 "parser.tab.cpp"
    break;

  case 135: /* array: ARRAY '(' expr_list_e ')'  */
#line 360 "parser.y"
                                { printf("PARSER found Array\n"); }
#line 1849 "parser.tab.cpp"
    break;

  case 136: /* list: LIST '(' expr_list_e ')'  */
#line 366 "parser.y"
                               { printf("PARSER found List\n"); }
#line 1855 "parser.tab.cpp"
    break;

  case 137: /* vector: VECTOR '(' expr_list_e ')'  */
#line 372 "parser.y"
                                 { printf("PARSER found Vector\n"); }
#line 1861 "parser.tab.cpp"
    break;

  case 138: /* set: SET '(' expr_list_e ')'  */
#line 378 "parser.y"
                              { printf("PARSER found Set\n"); }
#line 1867 "parser.tab.cpp"
    break;


#line 1871 "parser.tab.cpp"

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

#line 383 "parser.y"

