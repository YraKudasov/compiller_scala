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
  YYSYMBOL_LOWER_THAN_EXPR = 3,            /* LOWER_THAN_EXPR  */
  YYSYMBOL_4_ = 4,                         /* ','  */
  YYSYMBOL_5_ = 5,                         /* '='  */
  YYSYMBOL_6_ = 6,                         /* '|'  */
  YYSYMBOL_7_ = 7,                         /* '&'  */
  YYSYMBOL_8_ = 8,                         /* '>'  */
  YYSYMBOL_9_ = 9,                         /* '<'  */
  YYSYMBOL_10_ = 10,                       /* '+'  */
  YYSYMBOL_11_ = 11,                       /* '-'  */
  YYSYMBOL_12_ = 12,                       /* '*'  */
  YYSYMBOL_13_ = 13,                       /* '/'  */
  YYSYMBOL_14_ = 14,                       /* '%'  */
  YYSYMBOL_UMINUS = 15,                    /* UMINUS  */
  YYSYMBOL_UPLUS = 16,                     /* UPLUS  */
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
#define YYLAST   1017

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  144
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  297

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
       2,     2,     2,     2,     2,     2,     2,    14,     7,     2,
      17,    18,    12,    10,     4,    11,    81,    13,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,    15,
      16,    21,    22,    23,    24,    25,    26,    27,    28,    29,
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
     119,   120,   121,   122,   123,   127,   128,   132,   133,   134,
     135,   136,   137,   138,   147,   151,   155,   156,   157,   158,
     165,   166,   167,   168,   169,   170,   175,   176,   181,   182,
     183,   184,   190,   194,   198,   199,   204,   205,   206,   207,
     211,   212,   216,   217,   218,   219,   225,   226,   227,   231,
     235,   242,   243,   248,   249,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     294,   295,   296,   297,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   319,   323,   324,   325,   326,   330,
     335,   336,   340,   341,   345,   346,   351,   352,   353,   359,
     360,   361,   362,   363,   364,   365,   369,   370,   374,   375,
     379,   392,   398,   404,   410
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
  "','", "'='", "'|'", "'&'", "'>'", "'<'", "'+'", "'-'", "'*'", "'/'",
  "'%'", "UMINUS", "UPLUS", "'('", "')'", "'['", "']'", "NUM_10", "NUM_16",
  "REAL_NUMBER", "REAL_NUMBER_EXPONENT", "IDENTIFIER", "CONST_CHAR",
  "CONST_STRING", "NEWLINE", "VAL", "VAR", "ELSE", "IF", "ELSE_IF", "FOR",
  "DO", "WHILE", "MATCH", "CASE", "TRY", "CATCH", "FINALLY", "PRINT",
  "READLINE", "KW_TRUE", "KW_FALSE", "KW_NULL", "EQ", "NEQ", "KW_OR",
  "KW_AND", "MORE_OR_EQUAL_OPERATOR", "LESS_OR_EQUAL_OPERATOR", "INT_KW",
  "DOUBLE_KW", "STRING_KW", "CHAR_KW", "BOOLEAN_KW", "ANY_KW", "UNIT_KW",
  "TO", "BY", "YIELD", "GENERATOR_OPERATOR", "RIGHT_ARROW_OPERATOR",
  "ID_COLLECTION", "ARRAY", "LIST", "VECTOR", "SET", "DEF", "NEW",
  "PROTECTED", "PRIVATE", "CLASS", "CLASS_ID", "EXTENDS", "'{'", "'}'",
  "':'", "';'", "'.'", "$accept", "program", "instance_class",
  "visibility_modifier", "statement_expr_list", "statement_expr_list_e",
  "statement", "if_else_expr", "else_expr", "if_condition_list",
  "for_expr", "for_params", "for_multy_list", "while_expr",
  "do_while_expr", "match_expr", "case_condition", "int_literal_list_case",
  "case_list", "try_expr", "catch", "finally", "expr_list_e", "expr_list",
  "expr", "num_const", "const", "func_call", "params", "func",
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

#define YYPACT_NINF (-152)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     381,   635,   635,   697,  -152,  -152,  -152,  -152,    22,  -152,
    -152,    10,    18,    11,    -3,   635,    31,   -36,    36,    37,
    -152,  -152,  -152,    40,    43,    45,    48,    21,     9,  -152,
    -152,  -152,   381,    83,  -152,     8,   319,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,   864,  -152,    -6,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,     3,   738,
      26,   635,   635,    32,     6,     7,   635,    86,    86,   769,
     635,   635,   635,    96,   635,   635,   635,   635,    95,   103,
      46,  -152,  -152,  -152,  -152,  -152,   864,   635,   635,   635,
     635,   635,   635,   635,   635,   635,   635,   635,   635,   635,
     635,   635,    50,    98,   236,    49,   111,    85,   864,   133,
     155,   864,   122,   635,    99,   635,    99,   785,   100,   143,
     130,    27,   148,   832,   190,   845,  -152,   149,   151,   153,
     159,   158,    24,   156,   635,  -152,   938,   965,   134,   134,
     121,   121,  -152,  -152,  -152,   129,   129,   911,   920,   134,
     134,   122,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,   120,   169,   126,   635,  -152,   635,   166,    30,   864,
      99,    12,   201,   864,    16,   202,   635,   230,   449,   635,
      41,  -152,   511,    86,  -152,   635,   635,   -15,  -152,  -152,
    -152,  -152,  -152,   135,    29,   635,   236,   158,   191,    90,
     236,   196,   236,   864,   864,   176,   157,   209,   188,  -152,
     166,  -152,  -152,  -152,   205,   220,   635,   635,   635,   635,
     817,   165,   635,   864,   864,  -152,   635,   573,   198,   635,
     864,  -152,   892,  -152,   154,   167,   187,  -152,  -152,   864,
     231,    38,  -152,  -152,  -152,   635,    17,   635,   635,   230,
     635,   179,   181,   236,   864,   864,   864,   864,   635,  -152,
     230,   864,   864,   635,   864,   635,   864,  -152,   122,   635,
    -152,   635,  -152,   228,   230,   864,   864,  -152,   864,   635,
     236,  -152,   864,   194,   864,   864,    94,   274,   864,  -152,
    -152,   864,  -152,   230,  -152,  -152,  -152
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      16,     0,     0,   118,   100,   101,   102,   103,    66,   106,
     105,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     107,   108,   109,     0,     0,     0,     0,     0,     0,     6,
       5,    67,    16,     0,    97,     0,    15,     2,     8,    88,
      89,    90,    91,    93,    92,    10,   104,    65,    87,    95,
      23,    96,   110,   111,   112,   113,    86,    85,    66,     0,
       0,     0,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    62,    62,    62,    62,   121,     3,
       0,     1,     9,    14,    13,    11,    12,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    69,     0,     0,    68,     0,
      61,    63,     0,     0,     0,     0,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,    98,     0,     0,     0,
       0,   118,     0,   120,    62,    94,    82,    81,    70,    71,
      76,    77,    79,    78,    80,    74,    75,    83,    84,    72,
      73,     0,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   115,     0,     0,     0,   114,     0,     0,     0,    17,
       0,     0,     0,    18,     0,     0,     0,     0,     0,     0,
       0,    41,     0,     0,    39,     0,     0,     0,    99,   141,
     142,   143,   144,     0,     0,     0,     0,   118,     0,     0,
       0,   127,     0,   119,    64,    47,     0,    49,    50,    54,
       0,    44,    55,   138,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,    26,    29,     0,     0,     0,     0,
      34,    40,     0,    42,     0,     0,    56,    57,   122,   125,
       0,     0,     4,    45,   137,    62,   116,     0,     0,     0,
       0,     0,     0,     0,    19,    20,    21,    22,     0,    24,
       0,    30,    27,     0,    35,     0,    31,    43,     0,     0,
      58,     0,   123,     0,     0,    48,    52,    51,    46,     0,
       0,   139,    25,    36,    32,    28,     0,     0,   124,   126,
     117,    53,   140,     0,    59,    60,    37
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -152,  -152,  -152,  -152,  -152,   217,    15,  -152,  -152,  -152,
    -152,   -58,  -152,  -152,  -152,  -152,    51,  -152,  -142,  -152,
    -152,    23,   -70,  -152,     0,  -152,  -143,  -152,  -118,  -152,
    -152,  -152,  -152,  -152,  -151,   -98,  -152,   -93,  -152,  -152,
    -152,  -152
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    33,    34,    35,    36,    37,    38,    39,   259,   180,
      40,   119,   121,    41,    42,    43,   206,   207,   168,    44,
     236,   237,   109,   110,   111,    46,    47,    48,    60,    49,
     132,   133,    50,    51,   160,   161,   214,   172,    52,    53,
      54,    55
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      45,    56,    57,    59,   127,   128,   129,   130,    61,   199,
     120,   113,   115,   194,    67,    69,   171,   216,   174,   213,
      62,   218,   274,   175,   208,   234,   235,    61,    66,   195,
     106,   102,    45,   106,   221,    64,    86,    11,    12,    62,
      63,    71,   106,    65,   107,   240,    78,   238,    70,   244,
      82,    85,   118,    72,    73,   181,   272,    74,   209,    63,
      75,   108,    76,   184,   198,    77,   117,   208,   210,   225,
     123,   124,   125,   226,    68,   103,   200,   215,    27,   241,
     200,   200,   104,    81,    79,   114,   116,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   281,   196,   246,   182,   277,   183,   211,   112,
     212,   118,   131,   169,   126,   173,   170,   283,   209,   227,
     134,   228,   209,   152,   135,   231,   286,   151,   210,   292,
     162,   290,   210,    93,    94,    95,   163,    89,    90,    91,
      92,    93,    94,    95,    91,    92,    93,    94,    95,   164,
     296,   165,   153,   154,   155,   156,   157,   158,   159,   166,
     167,   178,   179,   177,   203,   185,   204,   189,   243,   190,
     212,   191,   294,   197,   212,   273,   220,   192,   223,   224,
     100,   101,   230,   193,   200,   232,   233,     4,     5,     6,
       7,   205,     9,    10,   201,   239,    87,    88,    89,    90,
      91,    92,    93,    94,    95,   202,   217,   219,   247,   242,
      20,    21,    22,   245,   104,   249,   254,   255,   256,   257,
     250,   248,   261,   252,   253,   260,   262,   264,   235,   266,
     265,   268,    23,    24,    25,    26,   271,    96,    97,    98,
      99,   100,   101,   279,   269,   280,   289,   275,   276,    80,
     278,     4,     5,     6,     7,   293,     9,    10,   282,   270,
       0,   251,     0,   284,     0,   285,     0,     0,   187,   287,
       0,   288,     0,     0,    20,    21,    22,     0,     0,   291,
      87,    88,    89,    90,    91,    92,    93,    94,    95,   153,
     154,   155,   156,   157,   158,   159,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    96,    97,    98,    99,   100,   101,     0,     0,     1,
       2,     0,     0,     0,     0,     0,     3,     0,     0,     0,
       4,     5,     6,     7,     8,     9,    10,    83,    11,    12,
       0,    13,   295,    14,    15,    16,     0,     0,    17,     0,
       0,    18,    19,    20,    21,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    23,    24,    25,    26,    27,
      28,     1,     2,     0,    31,     0,    32,     0,     3,    84,
       0,     0,     4,     5,     6,     7,     8,     9,    10,     0,
      11,    12,     0,    13,     0,    14,    15,    16,     0,     0,
      17,     0,     0,    18,    19,    20,    21,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,    24,    25,
      26,    27,    28,    29,    30,     0,    31,     0,    32,     1,
       2,     0,     0,     0,     0,     0,     3,     0,     0,     0,
       4,     5,     6,     7,     8,     9,    10,     0,     0,     0,
       0,    13,     0,    14,    15,    16,     0,     0,    17,     0,
       0,    18,    19,    20,    21,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   222,     0,     0,     0,    23,    24,    25,    26,     0,
      28,     1,     2,     0,    31,     0,    32,     0,     3,     0,
       0,     0,     4,     5,     6,     7,     8,     9,    10,     0,
       0,     0,     0,    13,     0,    14,    15,    16,     0,     0,
      17,     0,     0,    18,    19,    20,    21,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   229,     0,     0,     0,    23,    24,    25,
      26,     0,    28,     1,     2,     0,    31,     0,    32,     0,
       3,     0,     0,     0,     4,     5,     6,     7,     8,     9,
      10,     0,     0,     0,     0,    13,     0,    14,    15,    16,
       0,     0,    17,     0,     0,    18,    19,    20,    21,    22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   263,     0,     0,     0,    23,
      24,    25,    26,     0,    28,     1,     2,     0,    31,     0,
      32,     0,     3,     0,     0,     0,     4,     5,     6,     7,
       8,     9,    10,     0,     0,     0,     0,    13,     0,    14,
      15,    16,     0,     0,    17,     0,     0,    18,    19,    20,
      21,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    23,    24,    25,    26,     0,    28,     1,     2,     0,
      31,     0,    32,     0,     3,     0,     0,     0,     4,     5,
       6,     7,    58,     9,    10,     0,     0,     0,     0,    13,
       0,    14,    15,    16,     0,     0,    17,     0,     0,    18,
      19,    20,    21,    22,    87,    88,    89,    90,    91,    92,
      93,    94,    95,     0,     0,     0,   105,     0,     0,     0,
       0,     0,     0,    23,    24,    25,    26,     0,    28,     0,
       0,     0,    31,     0,    32,    87,    88,    89,    90,    91,
      92,    93,    94,    95,     0,    96,    97,    98,    99,   100,
     101,    87,    88,    89,    90,    91,    92,    93,    94,    95,
       0,     0,     0,   176,     0,   122,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    96,    97,    98,    99,
     100,   101,     0,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    87,    88,
      89,    90,    91,    92,    93,    94,    95,     0,   258,     0,
     186,    87,    88,    89,    90,    91,    92,    93,    94,    95,
       0,     0,     0,   188,    96,    97,    98,    99,   100,   101,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,     0,     0,     0,     0,     0,
       0,     0,    96,    97,    98,    99,   100,   101,    87,    88,
      89,    90,    91,    92,    93,    94,    95,     0,     0,     0,
     267,    96,    97,    98,    99,   100,   101,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    87,    88,    89,    90,
      91,    92,    93,    94,    95,     0,     0,     0,     0,    96,
      97,    98,    99,   100,   101,    88,    89,    90,    91,    92,
      93,    94,    95,     0,     0,     0,     0,     0,    96,    97,
       0,    99,   100,   101,     0,     0,     0,    96,    97,     0,
       0,   100,   101,    89,    90,    91,    92,    93,    94,    95,
       0,     0,     0,     0,     0,    96,    97,     0,     0,   100,
     101,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    96,    97,     0,     0,   100,   101
};

static const yytype_int16 yycheck[] =
{
       0,     1,     2,     3,    74,    75,    76,    77,     5,   151,
      68,     5,     5,   131,    17,    15,   114,     5,   116,   170,
      17,     5,     5,   116,   167,    40,    41,     5,    17,     5,
       4,    37,    32,     4,   177,    25,    36,    29,    30,    17,
      37,    77,     4,    25,    18,   196,    25,    18,    17,   200,
      35,    36,    25,    17,    17,    28,    18,    17,    28,    37,
      17,    61,    17,   121,   134,    17,    66,   210,    38,    28,
      70,    71,    72,    32,    77,    81,    64,   170,    70,   197,
      64,    64,    79,     0,    75,    79,    79,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   253,    79,   202,    78,   249,    80,    78,    77,
      80,    25,    17,   113,    18,   115,    17,   260,    28,    78,
      17,    80,    28,    25,    78,   183,   268,    77,    38,   280,
      81,   274,    38,    12,    13,    14,    25,     8,     9,    10,
      11,    12,    13,    14,    10,    11,    12,    13,    14,    64,
     293,    18,    53,    54,    55,    56,    57,    58,    59,     4,
      38,    18,    32,    63,   164,    17,   166,    18,    78,    18,
      80,    18,    78,    17,    80,   245,   176,    18,   178,   179,
      51,    52,   182,    25,    64,   185,   186,    21,    22,    23,
      24,    25,    26,    27,    25,   195,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    79,     5,     5,    32,    18,
      44,    45,    46,    17,    79,     6,   216,   217,   218,   219,
      32,    64,   222,    18,     4,    60,   226,   227,    41,   229,
      32,    77,    66,    67,    68,    69,     5,    47,    48,    49,
      50,    51,    52,    64,    77,    64,    18,   247,   248,    32,
     250,    21,    22,    23,    24,    61,    26,    27,   258,   236,
      -1,   210,    -1,   263,    -1,   265,    -1,    -1,    78,   269,
      -1,   271,    -1,    -1,    44,    45,    46,    -1,    -1,   279,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    53,
      54,    55,    56,    57,    58,    59,    66,    67,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    -1,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    78,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,
      71,    10,    11,    -1,    75,    -1,    77,    -1,    17,    80,
      -1,    -1,    21,    22,    23,    24,    25,    26,    27,    -1,
      29,    30,    -1,    32,    -1,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    42,    43,    44,    45,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    68,
      69,    70,    71,    72,    73,    -1,    75,    -1,    77,    10,
      11,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      -1,    32,    -1,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    66,    67,    68,    69,    -1,
      71,    10,    11,    -1,    75,    -1,    77,    -1,    17,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,    27,    -1,
      -1,    -1,    -1,    32,    -1,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    42,    43,    44,    45,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    66,    67,    68,
      69,    -1,    71,    10,    11,    -1,    75,    -1,    77,    -1,
      17,    -1,    -1,    -1,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    -1,    32,    -1,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    42,    43,    44,    45,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      67,    68,    69,    -1,    71,    10,    11,    -1,    75,    -1,
      77,    -1,    17,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    27,    -1,    -1,    -1,    -1,    32,    -1,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    42,    43,    44,
      45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    68,    69,    -1,    71,    10,    11,    -1,
      75,    -1,    77,    -1,    17,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    32,
      -1,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    42,
      43,    44,    45,    46,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    -1,    71,    -1,
      -1,    -1,    75,    -1,    77,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    -1,    47,    48,    49,    50,    51,
      52,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    18,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    52,    -1,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    47,    48,    49,    50,    51,    52,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    31,    -1,
      18,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    18,    47,    48,    49,    50,    51,    52,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    47,
      48,    49,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    49,    50,    51,    52,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      18,    47,    48,    49,    50,    51,    52,     6,     7,     8,
       9,    10,    11,    12,    13,    14,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    52,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    47,    48,
      -1,    50,    51,    52,    -1,    -1,    -1,    47,    48,    -1,
      -1,    51,    52,     8,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    -1,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    -1,    51,    52
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
      87,     0,    88,    28,    80,    88,   106,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    47,    48,    49,    50,
      51,    52,    37,    81,    79,    18,     4,    18,   106,   104,
     105,   106,    77,     5,    79,     5,    79,   106,    25,    93,
      93,    94,    36,   106,   106,   106,    18,   104,   104,   104,
     104,    17,   112,   113,    17,    78,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,    77,    25,    53,    54,    55,    56,    57,    58,    59,
     116,   117,    81,    25,    64,    18,     4,    38,   100,   106,
      17,   117,   119,   106,   117,   119,    18,    63,    18,    32,
      91,    28,    78,    80,    93,    17,    18,    78,    18,    18,
      18,    18,    18,    25,   110,     5,    79,    17,   104,   100,
      64,    25,    79,   106,   106,    25,    98,    99,   108,    28,
      38,    78,    80,   116,   118,   119,     5,     5,     5,     5,
     106,   108,    62,   106,   106,    28,    32,    78,    80,    62,
     106,    93,   106,   106,    40,    41,   102,   103,    18,   106,
     116,   110,    18,    78,   116,    17,   117,    32,    64,     6,
      32,    98,    18,     4,   106,   106,   106,   106,    31,    90,
      60,   106,   106,    62,   106,    32,   106,    18,    77,    77,
     103,     5,    18,   104,     5,   106,   106,   108,   106,    64,
      64,   116,   106,   108,   106,   106,   100,   106,   106,    18,
     108,   106,   116,    61,    78,    78,   108
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    82,    83,    84,    84,    85,    85,    85,    86,    86,
      86,    86,    86,    86,    86,    87,    87,    88,    88,    88,
      88,    88,    88,    88,    89,    90,    91,    91,    91,    91,
      92,    92,    92,    92,    92,    92,    93,    93,    94,    94,
      94,    94,    95,    96,    97,    97,    98,    98,    98,    98,
      99,    99,   100,   100,   100,   100,   101,   101,   101,   102,
     103,   104,   104,   105,   105,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     107,   107,   107,   107,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   109,   110,   110,   110,   110,   111,
     112,   112,   113,   113,   114,   114,   115,   115,   115,   116,
     116,   116,   116,   116,   116,   116,   117,   117,   118,   118,
     119,   120,   121,   122,   123
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     5,     1,     1,     0,     1,     2,
       1,     2,     2,     2,     2,     1,     0,     4,     4,     6,
       6,     6,     6,     1,     6,     2,     2,     3,     4,     2,
       6,     6,     7,     5,     5,     6,     5,     7,     1,     2,
       3,     2,     5,     6,     5,     5,     3,     1,     3,     1,
       1,     3,     4,     5,     2,     2,     5,     5,     6,     4,
       4,     1,     0,     1,     3,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     3,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     3,     5,     7,     0,     5,
       1,     0,     3,     4,     7,     5,     8,     5,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       5,     4,     4,     4,     4
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
                { printf("Add statement :\n"); }
#line 1543 "parser.tab.cpp"
    break;

  case 11: /* statement_expr_list: statement_expr_list statement  */
#line 120 "parser.y"
                                     { printf("Add new statement :\n"); }
#line 1549 "parser.tab.cpp"
    break;

  case 13: /* statement_expr_list: statement_expr_list ';'  */
#line 122 "parser.y"
                               { printf("Add ; :\n"); }
#line 1555 "parser.tab.cpp"
    break;

  case 14: /* statement_expr_list: statement_expr_list NEWLINE  */
#line 123 "parser.y"
                                  { printf("Add NEWLINE :\n"); }
#line 1561 "parser.tab.cpp"
    break;

  case 16: /* statement_expr_list_e: %empty  */
#line 128 "parser.y"
                     { printf("PARSER found statement_list_e - nothing\n"); }
#line 1567 "parser.tab.cpp"
    break;

  case 17: /* statement: VAL IDENTIFIER '=' expr  */
#line 132 "parser.y"
                               { printf("implicit value declaration:\n"); }
#line 1573 "parser.tab.cpp"
    break;

  case 18: /* statement: VAR IDENTIFIER '=' expr  */
#line 133 "parser.y"
                               { printf("implicit variable declaration:\n"); }
#line 1579 "parser.tab.cpp"
    break;

  case 19: /* statement: VAL IDENTIFIER ':' type_list_car '=' expr  */
#line 134 "parser.y"
                                                { printf("explicit value declaration:\n"); }
#line 1585 "parser.tab.cpp"
    break;

  case 20: /* statement: VAL IDENTIFIER ':' type_list_simple '=' expr  */
#line 135 "parser.y"
                                                   { printf("explicit value declaration:\n"); }
#line 1591 "parser.tab.cpp"
    break;

  case 21: /* statement: VAR IDENTIFIER ':' type_list_car '=' expr  */
#line 136 "parser.y"
                                                { printf("explicit variable declaration:\n"); }
#line 1597 "parser.tab.cpp"
    break;

  case 22: /* statement: VAR IDENTIFIER ':' type_list_simple '=' expr  */
#line 137 "parser.y"
                                                   { printf("explicit variable declaration:\n"); }
#line 1603 "parser.tab.cpp"
    break;

  case 23: /* statement: method  */
#line 138 "parser.y"
             { printf("Method:\n"); }
#line 1609 "parser.tab.cpp"
    break;

  case 33: /* for_expr: FOR '(' for_params ')' expr  */
#line 168 "parser.y"
                                                             { printf("FOR LOOP\n"); }
#line 1615 "parser.tab.cpp"
    break;

  case 34: /* for_expr: FOR '{' for_multy_list '}' expr  */
#line 169 "parser.y"
                                                              { printf("FOR MULTY LOOP\n"); }
#line 1621 "parser.tab.cpp"
    break;

  case 35: /* for_expr: FOR '{' for_params if_condition_list '}' expr  */
#line 170 "parser.y"
                                                                               { printf("FOR LOOP: multy with IF_STMT\n"); }
#line 1627 "parser.tab.cpp"
    break;

  case 61: /* expr_list_e: expr_list  */
#line 242 "parser.y"
                   { printf("PARSER found expr_list - expr_list\n"); }
#line 1633 "parser.tab.cpp"
    break;

  case 62: /* expr_list_e: %empty  */
#line 243 "parser.y"
                     { printf("PARSER found expr_list - nothing\n"); }
#line 1639 "parser.tab.cpp"
    break;

  case 63: /* expr_list: expr  */
#line 248 "parser.y"
                      { printf("PARSER found expr_list - expr\n"); }
#line 1645 "parser.tab.cpp"
    break;

  case 64: /* expr_list: expr_list ',' expr  */
#line 249 "parser.y"
                          { printf("PARSER found expr_list - expr_list\n"); }
#line 1651 "parser.tab.cpp"
    break;

  case 65: /* expr: const  */
#line 254 "parser.y"
            {printf("PARSER found expr - const\n"); }
#line 1657 "parser.tab.cpp"
    break;

  case 66: /* expr: IDENTIFIER  */
#line 255 "parser.y"
                 {printf("PARSER found expr - IDENTIFIER\n"); }
#line 1663 "parser.tab.cpp"
    break;

  case 67: /* expr: CLASS_ID  */
#line 256 "parser.y"
               {printf("PARSER found expr - CLASS_ID\n"); }
#line 1669 "parser.tab.cpp"
    break;

  case 68: /* expr: IDENTIFIER '=' expr  */
#line 257 "parser.y"
                          { printf("Assignment:\n"); }
#line 1675 "parser.tab.cpp"
    break;

  case 69: /* expr: '(' expr ')'  */
#line 258 "parser.y"
                   {printf("PARSER found expr - ( expr )\n"); }
#line 1681 "parser.tab.cpp"
    break;

  case 70: /* expr: expr '>' expr  */
#line 259 "parser.y"
                    {printf("PARSER found expr - expr > expr\n"); }
#line 1687 "parser.tab.cpp"
    break;

  case 71: /* expr: expr '<' expr  */
#line 260 "parser.y"
                    {printf("PARSER found expr - expr < expr\n"); }
#line 1693 "parser.tab.cpp"
    break;

  case 72: /* expr: expr MORE_OR_EQUAL_OPERATOR expr  */
#line 261 "parser.y"
                                       {printf("PARSER found expr - expr >= expr\n"); }
#line 1699 "parser.tab.cpp"
    break;

  case 73: /* expr: expr LESS_OR_EQUAL_OPERATOR expr  */
#line 262 "parser.y"
                                       {printf("PARSER found expr - expr <= expr\n"); }
#line 1705 "parser.tab.cpp"
    break;

  case 74: /* expr: expr EQ expr  */
#line 263 "parser.y"
                   {printf("PARSER found expr - expr == expr\n"); }
#line 1711 "parser.tab.cpp"
    break;

  case 75: /* expr: expr NEQ expr  */
#line 264 "parser.y"
                    {printf("PARSER found expr - expr != expr\n"); }
#line 1717 "parser.tab.cpp"
    break;

  case 76: /* expr: expr '+' expr  */
#line 265 "parser.y"
                    { printf("PARSER found expr - expr + expr\n"); }
#line 1723 "parser.tab.cpp"
    break;

  case 77: /* expr: expr '-' expr  */
#line 266 "parser.y"
                    { printf("PARSER found expr - expr - expr\n"); }
#line 1729 "parser.tab.cpp"
    break;

  case 78: /* expr: expr '/' expr  */
#line 267 "parser.y"
                    { printf("PARSER found expr - expr / expr\n"); }
#line 1735 "parser.tab.cpp"
    break;

  case 79: /* expr: expr '*' expr  */
#line 268 "parser.y"
                    { printf("PARSER found expr - expr * expr\n"); }
#line 1741 "parser.tab.cpp"
    break;

  case 80: /* expr: expr '%' expr  */
#line 269 "parser.y"
                    { printf("PARSER found expr - expr % expr\n"); }
#line 1747 "parser.tab.cpp"
    break;

  case 81: /* expr: expr '&' expr  */
#line 270 "parser.y"
                    { printf("PARSER found expr - expr && expr\n"); }
#line 1753 "parser.tab.cpp"
    break;

  case 82: /* expr: expr '|' expr  */
#line 271 "parser.y"
                    { printf("PARSER found expr - expr | expr\n"); }
#line 1759 "parser.tab.cpp"
    break;

  case 83: /* expr: expr KW_OR expr  */
#line 272 "parser.y"
                      { printf("PARSER found expr - expr || expr\n"); }
#line 1765 "parser.tab.cpp"
    break;

  case 84: /* expr: expr KW_AND expr  */
#line 273 "parser.y"
                       { printf("PARSER found expr - expr && expr\n"); }
#line 1771 "parser.tab.cpp"
    break;

  case 85: /* expr: '-' expr  */
#line 274 "parser.y"
                             { printf("PARSER found expr - UMINUS\n"); }
#line 1777 "parser.tab.cpp"
    break;

  case 86: /* expr: '+' expr  */
#line 275 "parser.y"
                            { printf("PARSER found expr - UPLUS\n"); }
#line 1783 "parser.tab.cpp"
    break;

  case 87: /* expr: func_call  */
#line 276 "parser.y"
                { printf("PARSER found expr - func_call\n"); }
#line 1789 "parser.tab.cpp"
    break;

  case 88: /* expr: if_else_expr  */
#line 277 "parser.y"
                  { printf("PARSER found expr - if_else_expr\n"); }
#line 1795 "parser.tab.cpp"
    break;

  case 89: /* expr: for_expr  */
#line 278 "parser.y"
               { printf("PARSER found expr - for_expr\n"); }
#line 1801 "parser.tab.cpp"
    break;

  case 90: /* expr: while_expr  */
#line 279 "parser.y"
                 { printf("PARSER found expr - while_expr\n"); }
#line 1807 "parser.tab.cpp"
    break;

  case 91: /* expr: do_while_expr  */
#line 280 "parser.y"
                    { printf("PARSER found expr - do_while_expr\n"); }
#line 1813 "parser.tab.cpp"
    break;

  case 92: /* expr: try_expr  */
#line 281 "parser.y"
               { printf("PARSER found expr - try_expr\n"); }
#line 1819 "parser.tab.cpp"
    break;

  case 93: /* expr: match_expr  */
#line 282 "parser.y"
                 { printf("PARSER found expr - match_expr\n"); }
#line 1825 "parser.tab.cpp"
    break;

  case 95: /* expr: func  */
#line 284 "parser.y"
           { printf("Function:\n"); }
#line 1831 "parser.tab.cpp"
    break;

  case 96: /* expr: method_call  */
#line 285 "parser.y"
                  { printf("method_call:\n"); }
#line 1837 "parser.tab.cpp"
    break;

  case 97: /* expr: instance_class  */
#line 286 "parser.y"
                     { printf("instance_class:\n"); }
#line 1843 "parser.tab.cpp"
    break;

  case 98: /* expr: READLINE '(' ')'  */
#line 287 "parser.y"
                     { printf("readLine:\n"); }
#line 1849 "parser.tab.cpp"
    break;

  case 99: /* expr: PRINT '(' expr ')'  */
#line 288 "parser.y"
                        { printf("print:\n"); }
#line 1855 "parser.tab.cpp"
    break;

  case 100: /* num_const: NUM_10  */
#line 294 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 1861 "parser.tab.cpp"
    break;

  case 101: /* num_const: NUM_16  */
#line 295 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 1867 "parser.tab.cpp"
    break;

  case 102: /* num_const: REAL_NUMBER  */
#line 296 "parser.y"
                  { printf("PARSER found - REAL\n"); }
#line 1873 "parser.tab.cpp"
    break;

  case 103: /* num_const: REAL_NUMBER_EXPONENT  */
#line 297 "parser.y"
                           { printf("PARSER found - REAL_EXP\n"); }
#line 1879 "parser.tab.cpp"
    break;

  case 114: /* func_call: IDENTIFIER '(' expr_list_e ')'  */
#line 319 "parser.y"
                                     { printf("Function call: WITH PARAMS\n"); }
#line 1885 "parser.tab.cpp"
    break;

  case 141: /* array: ARRAY '(' expr_list_e ')'  */
#line 392 "parser.y"
                                { printf("PARSER found Array\n"); }
#line 1891 "parser.tab.cpp"
    break;

  case 142: /* list: LIST '(' expr_list_e ')'  */
#line 398 "parser.y"
                               { printf("PARSER found List\n"); }
#line 1897 "parser.tab.cpp"
    break;

  case 143: /* vector: VECTOR '(' expr_list_e ')'  */
#line 404 "parser.y"
                                 { printf("PARSER found Vector\n"); }
#line 1903 "parser.tab.cpp"
    break;

  case 144: /* set: SET '(' expr_list_e ')'  */
#line 410 "parser.y"
                              { printf("PARSER found Set\n"); }
#line 1909 "parser.tab.cpp"
    break;


#line 1913 "parser.tab.cpp"

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

#line 415 "parser.y"

