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
  YYSYMBOL_ELSE_IF = 34,                   /* ELSE_IF  */
  YYSYMBOL_FOR = 35,                       /* FOR  */
  YYSYMBOL_DO = 36,                        /* DO  */
  YYSYMBOL_WHILE = 37,                     /* WHILE  */
  YYSYMBOL_MATCH = 38,                     /* MATCH  */
  YYSYMBOL_CASE = 39,                      /* CASE  */
  YYSYMBOL_TRY = 40,                       /* TRY  */
  YYSYMBOL_CATCH = 41,                     /* CATCH  */
  YYSYMBOL_FINALLY = 42,                   /* FINALLY  */
  YYSYMBOL_PRINT = 43,                     /* PRINT  */
  YYSYMBOL_READLINE = 44,                  /* READLINE  */
  YYSYMBOL_KW_TRUE = 45,                   /* KW_TRUE  */
  YYSYMBOL_KW_FALSE = 46,                  /* KW_FALSE  */
  YYSYMBOL_KW_NULL = 47,                   /* KW_NULL  */
  YYSYMBOL_EQ = 48,                        /* EQ  */
  YYSYMBOL_NEQ = 49,                       /* NEQ  */
  YYSYMBOL_KW_OR = 50,                     /* KW_OR  */
  YYSYMBOL_KW_AND = 51,                    /* KW_AND  */
  YYSYMBOL_MORE_OR_EQUAL_OPERATOR = 52,    /* MORE_OR_EQUAL_OPERATOR  */
  YYSYMBOL_LESS_OR_EQUAL_OPERATOR = 53,    /* LESS_OR_EQUAL_OPERATOR  */
  YYSYMBOL_INT_KW = 54,                    /* INT_KW  */
  YYSYMBOL_DOUBLE_KW = 55,                 /* DOUBLE_KW  */
  YYSYMBOL_STRING_KW = 56,                 /* STRING_KW  */
  YYSYMBOL_CHAR_KW = 57,                   /* CHAR_KW  */
  YYSYMBOL_BOOLEAN_KW = 58,                /* BOOLEAN_KW  */
  YYSYMBOL_ANY_KW = 59,                    /* ANY_KW  */
  YYSYMBOL_UNIT_KW = 60,                   /* UNIT_KW  */
  YYSYMBOL_TO = 61,                        /* TO  */
  YYSYMBOL_BY = 62,                        /* BY  */
  YYSYMBOL_YIELD = 63,                     /* YIELD  */
  YYSYMBOL_GENERATOR_OPERATOR = 64,        /* GENERATOR_OPERATOR  */
  YYSYMBOL_RIGHT_ARROW_OPERATOR = 65,      /* RIGHT_ARROW_OPERATOR  */
  YYSYMBOL_ID_COLLECTION = 66,             /* ID_COLLECTION  */
  YYSYMBOL_ARRAY = 67,                     /* ARRAY  */
  YYSYMBOL_LIST = 68,                      /* LIST  */
  YYSYMBOL_VECTOR = 69,                    /* VECTOR  */
  YYSYMBOL_SET = 70,                       /* SET  */
  YYSYMBOL_DEF = 71,                       /* DEF  */
  YYSYMBOL_NEW = 72,                       /* NEW  */
  YYSYMBOL_PROTECTED = 73,                 /* PROTECTED  */
  YYSYMBOL_PRIVATE = 74,                   /* PRIVATE  */
  YYSYMBOL_CLASS = 75,                     /* CLASS  */
  YYSYMBOL_CLASS_ID = 76,                  /* CLASS_ID  */
  YYSYMBOL_EXTENDS = 77,                   /* EXTENDS  */
  YYSYMBOL_78_ = 78,                       /* '{'  */
  YYSYMBOL_79_ = 79,                       /* '}'  */
  YYSYMBOL_80_ = 80,                       /* ':'  */
  YYSYMBOL_81_ = 81,                       /* ';'  */
  YYSYMBOL_82_ = 82,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 83,                  /* $accept  */
  YYSYMBOL_program = 84,                   /* program  */
  YYSYMBOL_instance_class = 85,            /* instance_class  */
  YYSYMBOL_visibility_modifier = 86,       /* visibility_modifier  */
  YYSYMBOL_statement_expr_list = 87,       /* statement_expr_list  */
  YYSYMBOL_statement_expr_list_e = 88,     /* statement_expr_list_e  */
  YYSYMBOL_statement = 89,                 /* statement  */
  YYSYMBOL_if_else_expr = 90,              /* if_else_expr  */
  YYSYMBOL_else_expr = 91,                 /* else_expr  */
  YYSYMBOL_if_condition_list = 92,         /* if_condition_list  */
  YYSYMBOL_for_expr = 93,                  /* for_expr  */
  YYSYMBOL_for_params = 94,                /* for_params  */
  YYSYMBOL_for_multy_list = 95,            /* for_multy_list  */
  YYSYMBOL_while_expr = 96,                /* while_expr  */
  YYSYMBOL_do_while_expr = 97,             /* do_while_expr  */
  YYSYMBOL_match_expr = 98,                /* match_expr  */
  YYSYMBOL_case_condition = 99,            /* case_condition  */
  YYSYMBOL_int_literal_list_case = 100,    /* int_literal_list_case  */
  YYSYMBOL_case_list = 101,                /* case_list  */
  YYSYMBOL_try_expr = 102,                 /* try_expr  */
  YYSYMBOL_catch = 103,                    /* catch  */
  YYSYMBOL_finally = 104,                  /* finally  */
  YYSYMBOL_expr_list_e = 105,              /* expr_list_e  */
  YYSYMBOL_expr_list = 106,                /* expr_list  */
  YYSYMBOL_expr = 107,                     /* expr  */
  YYSYMBOL_num_const = 108,                /* num_const  */
  YYSYMBOL_const = 109,                    /* const  */
  YYSYMBOL_func_call = 110,                /* func_call  */
  YYSYMBOL_params = 111,                   /* params  */
  YYSYMBOL_func = 112,                     /* func  */
  YYSYMBOL_method_params_list_e = 113,     /* method_params_list_e  */
  YYSYMBOL_method_params_list = 114,       /* method_params_list  */
  YYSYMBOL_method = 115,                   /* method  */
  YYSYMBOL_method_call = 116,              /* method_call  */
  YYSYMBOL_type = 117,                     /* type  */
  YYSYMBOL_type_list_car = 118,            /* type_list_car  */
  YYSYMBOL_type_list = 119,                /* type_list  */
  YYSYMBOL_type_list_simple = 120,         /* type_list_simple  */
  YYSYMBOL_array = 121,                    /* array  */
  YYSYMBOL_list = 122,                     /* list  */
  YYSYMBOL_vector = 123,                   /* vector  */
  YYSYMBOL_set = 124,                      /* set  */
  YYSYMBOL_endlList = 125,                 /* endlList  */
  YYSYMBOL_endlOpt = 126,                  /* endlOpt  */
  YYSYMBOL_semicolonList = 127             /* semicolonList  */
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
#define YYFINAL  83
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1074

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  148
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  323

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
      18,    19,    13,    11,     5,    12,    82,    14,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    80,    81,
      10,     6,     9,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    20,     2,    21,     2,     2,     2,     2,     2,     2,
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
       0,    65,    65,    95,    96,   100,   101,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   128,   129,   133,   134,
     135,   136,   137,   146,   150,   154,   155,   156,   163,   164,
     165,   166,   167,   168,   173,   174,   179,   180,   181,   182,
     188,   192,   196,   197,   202,   203,   204,   205,   209,   210,
     214,   215,   216,   217,   223,   224,   225,   229,   233,   240,
     241,   246,   247,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   292,   293,
     294,   295,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   317,   321,   322,   323,   324,   328,   333,   334,
     338,   339,   343,   344,   349,   350,   351,   357,   358,   359,
     360,   361,   362,   363,   367,   368,   374,   375,   379,   392,
     398,   404,   410,   418,   419,   424,   425,   430,   431
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
  "\"end of file\"", "error", "\"invalid token\"", "ENDL",
  "LOWER_THAN_EXPR", "','", "'='", "'|'", "'&'", "'>'", "'<'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "UMINUS", "UPLUS", "'('", "')'", "'['",
  "']'", "NUM_10", "NUM_16", "REAL_NUMBER", "REAL_NUMBER_EXPONENT",
  "IDENTIFIER", "CONST_CHAR", "CONST_STRING", "NEWLINE", "VAL", "VAR",
  "ELSE", "IF", "ELSE_IF", "FOR", "DO", "WHILE", "MATCH", "CASE", "TRY",
  "CATCH", "FINALLY", "PRINT", "READLINE", "KW_TRUE", "KW_FALSE",
  "KW_NULL", "EQ", "NEQ", "KW_OR", "KW_AND", "MORE_OR_EQUAL_OPERATOR",
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
  "list", "vector", "set", "endlList", "endlOpt", "semicolonList", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-239)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-147)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     387,   641,   641,   703,  -239,  -239,  -239,  -239,    32,  -239,
    -239,    18,    18,    18,    -2,   641,    16,   -38,    25,    28,
    -239,  -239,  -239,    37,    38,    46,    53,    49,   -32,  -239,
    -239,  -239,   387,    58,  -239,    -8,    26,  -239,  -239,  -239,
    -239,  -239,  -239,  -239,  -239,   957,  -239,   -25,  -239,  -239,
    -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,    29,   801,
      34,   641,   641,   -29,  -239,    76,    54,    56,    66,    86,
      86,   824,   641,   641,   641,    98,   641,   641,   641,   641,
     101,   105,    59,  -239,  -239,   301,    47,   641,   641,   641,
     641,   641,   641,   641,   641,   641,   641,   641,   641,   641,
     641,   641,    62,   126,   147,    72,   130,    94,   957,   138,
     155,   957,   123,  -239,    18,    18,   641,    97,   144,   134,
      39,   154,   871,   231,   884,  -239,   156,   157,   159,   160,
     166,     6,   162,   641,  -239,    -8,  -239,   957,  -239,    27,
    1021,   989,   122,   122,   135,   135,  -239,  -239,  -239,   205,
     205,   966,   975,   122,   122,   123,  -239,  -239,  -239,  -239,
    -239,  -239,  -239,  -239,  -239,   117,   167,   103,   641,  -239,
     641,   119,     2,    30,    31,   897,   760,   455,    18,    23,
    -239,   517,    86,  -239,   641,   641,    10,  -239,  -239,  -239,
    -239,  -239,   115,    40,   641,   147,   166,   177,  -239,  -239,
     387,    74,   147,   179,   147,   957,   957,   165,   143,   192,
     178,  -239,   119,  -239,  -239,    18,    18,    18,    18,    18,
     149,   641,   957,   641,   579,   -15,   641,   957,  -239,   944,
    -239,   158,   171,   170,  -239,  -239,   957,   207,   110,  -239,
      -8,  -239,   957,  -239,  -239,   641,    13,   641,   641,   760,
     641,   168,   641,   204,   641,   204,   641,   760,   957,   957,
     641,   957,    18,    27,   957,  -239,   123,   641,  -239,   641,
    -239,  -239,   206,   760,   957,   957,  -239,   957,   641,   957,
     382,    18,   957,    18,   748,   172,   957,   641,   199,    92,
     342,   957,  -239,  -239,   957,  -239,   216,   232,   245,   247,
     223,   760,   957,   641,  -239,  -239,   194,   147,    18,    18,
      18,  -239,  -239,   957,   147,  -239,   641,   641,   641,  -239,
     957,   957,   957
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      17,     0,     0,   116,    98,    99,   100,   101,    64,   104,
     103,   146,   146,   146,     0,     0,     0,     0,     0,     0,
     105,   106,   107,     0,     0,     0,     0,     0,     0,     6,
       5,    65,    17,     0,    95,     0,    16,     2,     7,    86,
      87,    88,    89,    91,    90,     9,   102,    63,    85,    93,
      22,    94,   108,   109,   110,   111,    84,    83,    64,     0,
       0,     0,    60,     0,   143,   145,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    60,    60,    60,    60,
     119,     3,     0,     1,     8,   145,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    67,     0,     0,    66,     0,
      59,    61,     0,   144,   146,   146,     0,     0,     0,    36,
       0,     0,     0,     0,     0,    96,     0,     0,     0,     0,
     116,     0,   118,    60,    92,     0,    13,    14,   147,   146,
      80,    79,    68,    69,    74,    75,    77,    76,    78,    72,
      73,    81,    82,    70,    71,     0,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   113,     0,     0,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,   146,   146,
      39,     0,     0,    37,     0,     0,     0,    97,   139,   140,
     141,   142,     0,     0,     0,     0,   116,     0,    15,   148,
       0,     0,     0,   125,     0,   117,    62,    45,     0,    47,
      48,    52,     0,    42,    53,   146,   146,   146,   146,   146,
       0,     0,    31,     0,     0,     0,     0,    32,    38,     0,
      40,     0,     0,    54,    55,   120,   123,     0,     0,     4,
       0,    10,    11,    43,   135,    60,   114,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,    25,
       0,    33,   146,   146,    29,    41,     0,     0,    56,     0,
     121,    12,     0,     0,    46,    50,    49,    44,     0,    18,
       0,   146,    19,   146,   146,    34,    30,     0,     0,     0,
       0,   122,   124,   115,    51,   136,     0,     0,     0,     0,
       0,     0,    26,     0,    57,    58,     0,     0,   146,   146,
     146,    23,    35,    27,     0,   137,     0,     0,     0,   138,
      20,    21,    24
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -239,  -239,  -239,   -76,  -239,   229,   -31,  -239,  -239,  -239,
    -239,   -60,  -239,  -239,  -239,  -239,    50,  -239,  -141,  -239,
    -239,    33,   -71,  -239,     0,  -239,  -143,  -239,  -119,  -239,
    -239,  -239,  -239,  -239,  -175,    60,  -239,  -238,  -239,  -239,
    -239,  -239,   227,    12,    43
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    33,    34,    35,    36,    37,    38,    39,   311,   179,
      40,   118,   120,    41,    42,    43,   208,   209,   172,    44,
     233,   234,   109,   110,   111,    46,    47,    48,    60,    49,
     131,   132,    50,    51,   164,   165,   296,   281,    52,    53,
      54,    55,    65,    66,   139
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      45,    56,    57,    59,    84,   126,   127,   128,   129,   135,
     119,   193,   194,   102,   201,    71,    69,   283,   262,   273,
     237,    64,    11,    12,    67,    68,    64,   244,   210,    64,
      64,   211,    45,   220,    72,    61,   215,   217,    61,   106,
      73,   212,   297,    74,    81,   106,    75,    62,    86,   112,
      62,   231,   232,   107,   136,    76,    77,   103,    83,   235,
     183,   108,   197,    27,    78,   117,   138,    63,   180,   210,
      63,    79,   122,   123,   124,    80,    70,   238,   202,   113,
     114,   213,   115,   214,   116,   137,   195,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   224,   211,   198,   295,   276,  -146,   199,   104,
     216,   218,   117,   212,   285,   106,   175,   125,   181,   130,
     182,   211,   228,   133,   240,   289,   173,   174,   138,   270,
     293,   212,   315,    91,    92,    93,    94,    95,   134,   319,
     155,     4,     5,     6,     7,   207,     9,    10,    93,    94,
      95,   200,   156,   243,   166,   214,   167,   169,   312,   168,
     170,   176,   171,   177,    20,    21,    22,   178,   205,   241,
     206,   304,   184,   214,   272,   188,   189,   222,   190,   191,
     196,   227,   202,   204,   229,   230,    23,    24,    25,    26,
     223,   225,   192,   203,   236,   104,   239,   245,   247,   249,
     242,   157,   158,   159,   160,   161,   162,   163,   248,   271,
     257,   250,   232,   269,    89,    90,    91,    92,    93,    94,
      95,   258,   280,   259,   261,   292,   264,   252,   253,   254,
     255,   256,   303,   278,   301,   306,   266,   307,    87,    88,
      89,    90,    91,    92,    93,    94,    95,   274,   275,   267,
     277,   308,   279,   309,   282,   310,   284,   100,   101,   314,
     286,    82,   251,    85,   246,     0,   268,   290,   263,   291,
       0,     0,     0,     0,   287,   288,     0,     0,   294,    96,
      97,    98,    99,   100,   101,     0,     0,   302,     0,     0,
       0,     0,     0,   298,     0,   299,   300,     0,     0,     0,
       0,     0,     0,   313,   113,     0,     0,     0,     0,     0,
     186,     0,     1,     2,     0,     0,   320,   321,   322,     3,
     316,   317,   318,     4,     5,     6,     7,     8,     9,    10,
       0,    11,    12,     0,    13,     0,    14,    15,    16,     0,
       0,    17,     0,     0,    18,    19,    20,    21,    22,    87,
      88,    89,    90,    91,    92,    93,    94,    95,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    23,    24,
      25,    26,    27,    28,    29,    30,     0,    31,     0,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      96,    97,    98,    99,   100,   101,     0,     0,     1,     2,
     280,     0,     0,     0,     0,     3,     0,     0,     0,     4,
       5,     6,     7,     8,     9,    10,     0,    11,    12,     0,
      13,   305,    14,    15,    16,     0,     0,    17,     0,     0,
      18,    19,    20,    21,    22,     0,   157,   158,   159,   160,
     161,   162,   163,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    23,    24,    25,    26,    27,    28,
      29,    30,     0,    31,     0,    32,     1,     2,     0,     0,
       0,     0,     0,     3,     0,     0,     0,     4,     5,     6,
       7,     8,     9,    10,     0,     0,     0,     0,    13,     0,
      14,    15,    16,     0,     0,    17,     0,     0,    18,    19,
      20,    21,    22,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   221,     0,
       0,     0,    23,    24,    25,    26,     0,    28,     1,     2,
       0,    31,     0,    32,     0,     3,     0,     0,     0,     4,
       5,     6,     7,     8,     9,    10,     0,     0,     0,     0,
      13,     0,    14,    15,    16,     0,     0,    17,     0,     0,
      18,    19,    20,    21,    22,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     226,     0,     0,     0,    23,    24,    25,    26,     0,    28,
       1,     2,     0,    31,     0,    32,     0,     3,     0,     0,
       0,     4,     5,     6,     7,     8,     9,    10,     0,     0,
       0,     0,    13,     0,    14,    15,    16,     0,     0,    17,
       0,     0,    18,    19,    20,    21,    22,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   260,     0,     0,     0,    23,    24,    25,    26,
       0,    28,     1,     2,     0,    31,     0,    32,     0,     3,
       0,     0,     0,     4,     5,     6,     7,     8,     9,    10,
       0,     0,     0,     0,    13,     0,    14,    15,    16,     0,
       0,    17,     0,     0,    18,    19,    20,    21,    22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    23,    24,
      25,    26,     0,    28,     1,     2,     0,    31,     0,    32,
       0,     3,     0,     0,     0,     4,     5,     6,     7,    58,
       9,    10,     0,     0,     0,     0,    13,     0,    14,    15,
      16,     0,     0,    17,     0,     0,    18,    19,    20,    21,
      22,    64,     0,     0,     0,    87,    88,    89,    90,    91,
      92,    93,    94,    95,     0,     0,     0,     0,     0,     0,
      23,    24,    25,    26,     0,    28,     0,     0,     0,    31,
       0,    32,     4,     5,     6,     7,     0,     9,    10,     0,
       0,     0,     0,     0,     0,     0,    96,    97,    98,    99,
     100,   101,     0,     0,     0,    20,    21,    22,    87,    88,
      89,    90,    91,    92,    93,    94,    95,     0,     0,     0,
     105,     0,     0,     0,     0,     0,     0,    23,    24,    25,
      26,    87,    88,    89,    90,    91,    92,    93,    94,    95,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    96,
      97,    98,    99,   100,   101,     0,     0,     0,     0,     0,
       0,   121,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    96,    97,    98,    99,   100,   101,    87,    88,
      89,    90,    91,    92,    93,    94,    95,     0,     0,     0,
     185,    87,    88,    89,    90,    91,    92,    93,    94,    95,
       0,     0,     0,   187,    87,    88,    89,    90,    91,    92,
      93,    94,    95,     0,     0,     0,   219,     0,     0,    96,
      97,    98,    99,   100,   101,     0,     0,     0,     0,     0,
       0,     0,    96,    97,    98,    99,   100,   101,     0,     0,
       0,     0,     0,     0,     0,    96,    97,    98,    99,   100,
     101,    87,    88,    89,    90,    91,    92,    93,    94,    95,
       0,     0,     0,   265,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    87,    88,    89,    90,    91,    92,    93,    94,
      95,     0,    96,    97,    98,    99,   100,   101,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,     0,     0,     0,    96,    97,     0,    99,   100,   101,
       0,     0,     0,    96,    97,     0,     0,   100,   101,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,     0,
       0,   100,   101,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    96,
      97,     0,     0,   100,   101
};

static const yytype_int16 yycheck[] =
{
       0,     1,     2,     3,    35,    76,    77,    78,    79,    85,
      70,   130,     6,    38,   155,    15,    18,   255,    33,     6,
     195,     3,    30,    31,    12,    13,     3,   202,   171,     3,
       3,    29,    32,   176,    18,     6,     6,     6,     6,     5,
      78,    39,   280,    18,    76,     5,    18,    18,    36,    78,
      18,    41,    42,    19,    85,    18,    18,    82,     0,    19,
     120,    61,   133,    71,    18,    26,    81,    38,    29,   212,
      38,    18,    72,    73,    74,    26,    78,   196,    65,     3,
      26,    79,    26,    81,    18,    85,    80,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    79,    29,   135,   280,   249,    81,    81,    80,
      80,    80,    26,    39,   257,     5,   116,    19,    79,    18,
      81,    29,   182,    18,   200,   266,   114,   115,    81,    19,
     273,    39,   307,    11,    12,    13,    14,    15,    79,   314,
      78,    22,    23,    24,    25,    26,    27,    28,    13,    14,
      15,   139,    26,    79,    82,    81,    26,    19,   301,    65,
       5,    64,    39,    19,    45,    46,    47,    33,   168,   200,
     170,    79,    18,    81,   245,    19,    19,   177,    19,    19,
      18,   181,    65,    80,   184,   185,    67,    68,    69,    70,
     178,   179,    26,    26,   194,    80,    19,    18,    33,     7,
     200,    54,    55,    56,    57,    58,    59,    60,    65,   240,
      61,    33,    42,     6,     9,    10,    11,    12,    13,    14,
      15,   221,    18,   223,   224,    19,   226,   215,   216,   217,
     218,   219,    33,    65,    62,    19,    78,     5,     7,     8,
       9,    10,    11,    12,    13,    14,    15,   247,   248,    78,
     250,     6,   252,     6,   254,    32,   256,    52,    53,    65,
     260,    32,   212,    36,   204,    -1,   233,   267,   225,   269,
      -1,    -1,    -1,    -1,   262,   263,    -1,    -1,   278,    48,
      49,    50,    51,    52,    53,    -1,    -1,   287,    -1,    -1,
      -1,    -1,    -1,   281,    -1,   283,   284,    -1,    -1,    -1,
      -1,    -1,    -1,   303,     3,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    11,    12,    -1,    -1,   316,   317,   318,    18,
     308,   309,   310,    22,    23,    24,    25,    26,    27,    28,
      -1,    30,    31,    -1,    33,    -1,    35,    36,    37,    -1,
      -1,    40,    -1,    -1,    43,    44,    45,    46,    47,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    -1,    -1,    11,    12,
      18,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    -1,    30,    31,    -1,
      33,    79,    35,    36,    37,    -1,    -1,    40,    -1,    -1,
      43,    44,    45,    46,    47,    -1,    54,    55,    56,    57,
      58,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    -1,    78,    11,    12,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,    33,    -1,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    43,    44,
      45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    67,    68,    69,    70,    -1,    72,    11,    12,
      -1,    76,    -1,    78,    -1,    18,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    -1,    -1,    40,    -1,    -1,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    67,    68,    69,    70,    -1,    72,
      11,    12,    -1,    76,    -1,    78,    -1,    18,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    -1,    -1,    40,
      -1,    -1,    43,    44,    45,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    67,    68,    69,    70,
      -1,    72,    11,    12,    -1,    76,    -1,    78,    -1,    18,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,    -1,
      -1,    40,    -1,    -1,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      69,    70,    -1,    72,    11,    12,    -1,    76,    -1,    78,
      -1,    18,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    -1,    -1,    40,    -1,    -1,    43,    44,    45,    46,
      47,     3,    -1,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    78,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    45,    46,    47,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
      70,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    -1,
      19,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    -1,    19,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    -1,    19,    -1,    -1,    48,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    -1,    19,     7,     8,     9,    10,    11,    12,
      13,    14,    15,     7,     8,     9,    10,    11,    12,    13,
      14,    15,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    48,    49,    50,    51,    52,    53,     9,    10,
      11,    12,    13,    14,    15,    48,    49,    50,    51,    52,
      53,    -1,    -1,    -1,    48,    49,    -1,    51,    52,    53,
      -1,    -1,    -1,    48,    49,    -1,    -1,    52,    53,     8,
       9,    10,    11,    12,    13,    14,    15,    48,    49,    -1,
      -1,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    52,    53
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    11,    12,    18,    22,    23,    24,    25,    26,    27,
      28,    30,    31,    33,    35,    36,    37,    40,    43,    44,
      45,    46,    47,    67,    68,    69,    70,    71,    72,    73,
      74,    76,    78,    84,    85,    86,    87,    88,    89,    90,
      93,    96,    97,    98,   102,   107,   108,   109,   110,   112,
     115,   116,   121,   122,   123,   124,   107,   107,    26,   107,
     111,     6,    18,    38,     3,   125,   126,   126,   126,    18,
      78,   107,    18,    78,    18,    18,    18,    18,    18,    18,
      26,    76,    88,     0,    89,   125,   126,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    48,    49,    50,    51,
      52,    53,    38,    82,    80,    19,     5,    19,   107,   105,
     106,   107,    78,     3,    26,    26,    18,    26,    94,    94,
      95,    37,   107,   107,   107,    19,   105,   105,   105,   105,
      18,   113,   114,    18,    79,    86,    89,   107,    81,   127,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,    78,    26,    54,    55,    56,
      57,    58,    59,    60,   117,   118,    82,    26,    65,    19,
       5,    39,   101,   126,   126,   107,    64,    19,    33,    92,
      29,    79,    81,    94,    18,    19,    79,    19,    19,    19,
      19,    19,    26,   111,     6,    80,    18,   105,    89,    81,
     126,   101,    65,    26,    80,   107,   107,    26,    99,   100,
     109,    29,    39,    79,    81,     6,    80,     6,    80,    19,
     109,    63,   107,   126,    79,   126,    63,   107,    94,   107,
     107,    41,    42,   103,   104,    19,   107,   117,   111,    19,
      86,    89,   107,    79,   117,    18,   118,    33,    65,     7,
      33,    99,   126,   126,   126,   126,   126,    61,   107,   107,
      63,   107,    33,   127,   107,    19,    78,    78,   104,     6,
      19,    89,   105,     6,   107,   107,   109,   107,    65,   107,
      18,   120,   107,   120,   107,   109,   107,   126,   126,   101,
     107,   107,    19,   109,   107,   117,   119,   120,   126,   126,
     126,    62,   107,    33,    79,    79,    19,     5,     6,     6,
      32,    91,   109,   107,    65,   117,   126,   126,   126,   117,
     107,   107,   107
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    83,    84,    85,    85,    86,    86,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    88,    88,    89,    89,
      89,    89,    89,    90,    91,    92,    92,    92,    93,    93,
      93,    93,    93,    93,    94,    94,    95,    95,    95,    95,
      96,    97,    98,    98,    99,    99,    99,    99,   100,   100,
     101,   101,   101,   101,   102,   102,   102,   103,   104,   105,
     105,   106,   106,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   108,   108,
     108,   108,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   110,   111,   111,   111,   111,   112,   113,   113,
     114,   114,   115,   115,   116,   116,   116,   117,   117,   117,
     117,   117,   117,   117,   118,   118,   119,   119,   120,   121,
     122,   123,   124,   125,   125,   126,   126,   127,   127
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     5,     1,     1,     1,     2,     1,
       5,     5,     6,     3,     3,     4,     1,     0,     7,     7,
      11,    11,     1,     9,     3,     3,     5,     6,     6,     6,
       7,     5,     5,     6,     5,     7,     1,     2,     3,     2,
       5,     6,     5,     5,     3,     1,     3,     1,     1,     3,
       4,     5,     2,     2,     5,     5,     6,     4,     4,     1,
       0,     1,     3,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     3,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     3,     5,     7,     0,     5,     1,     0,
       3,     4,     7,     5,     8,     5,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     3,     5,     4,
       4,     4,     4,     1,     2,     1,     0,     1,     2
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
  case 7: /* statement_expr_list: statement  */
#line 116 "parser.y"
                { printf("Add first statement :\n"); }
#line 1569 "parser.tab.cpp"
    break;

  case 8: /* statement_expr_list: visibility_modifier statement  */
#line 117 "parser.y"
                                    { printf("Add first visibility_modifier statement :\n"); }
#line 1575 "parser.tab.cpp"
    break;

  case 9: /* statement_expr_list: expr  */
#line 118 "parser.y"
           { printf("Add first statement :\n"); }
#line 1581 "parser.tab.cpp"
    break;

  case 10: /* statement_expr_list: statement_expr_list endlOpt semicolonList endlOpt statement  */
#line 119 "parser.y"
                                                                   { printf("Add new statement to statement_expr_list :\n"); }
#line 1587 "parser.tab.cpp"
    break;

  case 11: /* statement_expr_list: statement_expr_list endlOpt semicolonList endlOpt expr  */
#line 120 "parser.y"
                                                              { printf("Add new expr to statement_expr_list :\n"); }
#line 1593 "parser.tab.cpp"
    break;

  case 12: /* statement_expr_list: statement_expr_list endlOpt semicolonList endlOpt visibility_modifier statement  */
#line 121 "parser.y"
                                                                                       { printf("Add new visibility_modifier to statement_expr_list :\n"); }
#line 1599 "parser.tab.cpp"
    break;

  case 13: /* statement_expr_list: statement_expr_list endlList statement  */
#line 122 "parser.y"
                                              { printf("Add new statement to statement_expr_list :\n"); }
#line 1605 "parser.tab.cpp"
    break;

  case 14: /* statement_expr_list: statement_expr_list endlList expr  */
#line 123 "parser.y"
                                         { printf("Add new expr to statement_expr_list :\n"); }
#line 1611 "parser.tab.cpp"
    break;

  case 15: /* statement_expr_list: statement_expr_list endlList visibility_modifier statement  */
#line 124 "parser.y"
                                                                  { printf("Add new visibility_modifier to statement_expr_list :\n"); }
#line 1617 "parser.tab.cpp"
    break;

  case 17: /* statement_expr_list_e: %empty  */
#line 129 "parser.y"
                     { printf("PARSER found statement_list_e - nothing\n"); }
#line 1623 "parser.tab.cpp"
    break;

  case 18: /* statement: VAL endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 133 "parser.y"
                                                       { printf("implicit value declaration:\n"); }
#line 1629 "parser.tab.cpp"
    break;

  case 19: /* statement: VAR endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 134 "parser.y"
                                                       { printf("implicit variable declaration:\n"); }
#line 1635 "parser.tab.cpp"
    break;

  case 20: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 135 "parser.y"
                                                                                           { printf("explicit value declaration:\n"); }
#line 1641 "parser.tab.cpp"
    break;

  case 21: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 136 "parser.y"
                                                                                           { printf("explicit variable declaration:\n"); }
#line 1647 "parser.tab.cpp"
    break;

  case 22: /* statement: method  */
#line 137 "parser.y"
             { printf("Method:\n"); }
#line 1653 "parser.tab.cpp"
    break;

  case 31: /* for_expr: FOR '(' for_params ')' expr  */
#line 166 "parser.y"
                                                             { printf("FOR LOOP\n"); }
#line 1659 "parser.tab.cpp"
    break;

  case 32: /* for_expr: FOR '{' for_multy_list '}' expr  */
#line 167 "parser.y"
                                                              { printf("FOR MULTY LOOP\n"); }
#line 1665 "parser.tab.cpp"
    break;

  case 33: /* for_expr: FOR '{' for_params if_condition_list '}' expr  */
#line 168 "parser.y"
                                                                               { printf("FOR LOOP: multy with IF_STMT\n"); }
#line 1671 "parser.tab.cpp"
    break;

  case 59: /* expr_list_e: expr_list  */
#line 240 "parser.y"
                   { printf("PARSER found expr_list - expr_list\n"); }
#line 1677 "parser.tab.cpp"
    break;

  case 60: /* expr_list_e: %empty  */
#line 241 "parser.y"
                     { printf("PARSER found expr_list - nothing\n"); }
#line 1683 "parser.tab.cpp"
    break;

  case 61: /* expr_list: expr  */
#line 246 "parser.y"
                      { printf("PARSER found expr_list - expr\n"); }
#line 1689 "parser.tab.cpp"
    break;

  case 62: /* expr_list: expr_list ',' expr  */
#line 247 "parser.y"
                          { printf("PARSER found expr_list - expr_list\n"); }
#line 1695 "parser.tab.cpp"
    break;

  case 63: /* expr: const  */
#line 252 "parser.y"
            {printf("PARSER found expr - const\n"); }
#line 1701 "parser.tab.cpp"
    break;

  case 64: /* expr: IDENTIFIER  */
#line 253 "parser.y"
                 {printf("PARSER found expr - IDENTIFIER\n"); }
#line 1707 "parser.tab.cpp"
    break;

  case 65: /* expr: CLASS_ID  */
#line 254 "parser.y"
               {printf("PARSER found expr - CLASS_ID\n"); }
#line 1713 "parser.tab.cpp"
    break;

  case 66: /* expr: IDENTIFIER '=' expr  */
#line 255 "parser.y"
                          { printf("Assignment:\n"); }
#line 1719 "parser.tab.cpp"
    break;

  case 67: /* expr: '(' expr ')'  */
#line 256 "parser.y"
                   {printf("PARSER found expr - ( expr )\n"); }
#line 1725 "parser.tab.cpp"
    break;

  case 68: /* expr: expr '>' expr  */
#line 257 "parser.y"
                    {printf("PARSER found expr - expr > expr\n"); }
#line 1731 "parser.tab.cpp"
    break;

  case 69: /* expr: expr '<' expr  */
#line 258 "parser.y"
                    {printf("PARSER found expr - expr < expr\n"); }
#line 1737 "parser.tab.cpp"
    break;

  case 70: /* expr: expr MORE_OR_EQUAL_OPERATOR expr  */
#line 259 "parser.y"
                                       {printf("PARSER found expr - expr >= expr\n"); }
#line 1743 "parser.tab.cpp"
    break;

  case 71: /* expr: expr LESS_OR_EQUAL_OPERATOR expr  */
#line 260 "parser.y"
                                       {printf("PARSER found expr - expr <= expr\n"); }
#line 1749 "parser.tab.cpp"
    break;

  case 72: /* expr: expr EQ expr  */
#line 261 "parser.y"
                   {printf("PARSER found expr - expr == expr\n"); }
#line 1755 "parser.tab.cpp"
    break;

  case 73: /* expr: expr NEQ expr  */
#line 262 "parser.y"
                    {printf("PARSER found expr - expr != expr\n"); }
#line 1761 "parser.tab.cpp"
    break;

  case 74: /* expr: expr '+' expr  */
#line 263 "parser.y"
                    { printf("PARSER found expr - expr + expr\n"); }
#line 1767 "parser.tab.cpp"
    break;

  case 75: /* expr: expr '-' expr  */
#line 264 "parser.y"
                    { printf("PARSER found expr - expr - expr\n"); }
#line 1773 "parser.tab.cpp"
    break;

  case 76: /* expr: expr '/' expr  */
#line 265 "parser.y"
                    { printf("PARSER found expr - expr / expr\n"); }
#line 1779 "parser.tab.cpp"
    break;

  case 77: /* expr: expr '*' expr  */
#line 266 "parser.y"
                    { printf("PARSER found expr - expr * expr\n"); }
#line 1785 "parser.tab.cpp"
    break;

  case 78: /* expr: expr '%' expr  */
#line 267 "parser.y"
                    { printf("PARSER found expr - expr % expr\n"); }
#line 1791 "parser.tab.cpp"
    break;

  case 79: /* expr: expr '&' expr  */
#line 268 "parser.y"
                    { printf("PARSER found expr - expr && expr\n"); }
#line 1797 "parser.tab.cpp"
    break;

  case 80: /* expr: expr '|' expr  */
#line 269 "parser.y"
                    { printf("PARSER found expr - expr | expr\n"); }
#line 1803 "parser.tab.cpp"
    break;

  case 81: /* expr: expr KW_OR expr  */
#line 270 "parser.y"
                      { printf("PARSER found expr - expr || expr\n"); }
#line 1809 "parser.tab.cpp"
    break;

  case 82: /* expr: expr KW_AND expr  */
#line 271 "parser.y"
                       { printf("PARSER found expr - expr && expr\n"); }
#line 1815 "parser.tab.cpp"
    break;

  case 83: /* expr: '-' expr  */
#line 272 "parser.y"
                             { printf("PARSER found expr - UMINUS\n"); }
#line 1821 "parser.tab.cpp"
    break;

  case 84: /* expr: '+' expr  */
#line 273 "parser.y"
                            { printf("PARSER found expr - UPLUS\n"); }
#line 1827 "parser.tab.cpp"
    break;

  case 85: /* expr: func_call  */
#line 274 "parser.y"
                { printf("PARSER found expr - func_call\n"); }
#line 1833 "parser.tab.cpp"
    break;

  case 86: /* expr: if_else_expr  */
#line 275 "parser.y"
                  { printf("PARSER found expr - if_else_expr\n"); }
#line 1839 "parser.tab.cpp"
    break;

  case 87: /* expr: for_expr  */
#line 276 "parser.y"
               { printf("PARSER found expr - for_expr\n"); }
#line 1845 "parser.tab.cpp"
    break;

  case 88: /* expr: while_expr  */
#line 277 "parser.y"
                 { printf("PARSER found expr - while_expr\n"); }
#line 1851 "parser.tab.cpp"
    break;

  case 89: /* expr: do_while_expr  */
#line 278 "parser.y"
                    { printf("PARSER found expr - do_while_expr\n"); }
#line 1857 "parser.tab.cpp"
    break;

  case 90: /* expr: try_expr  */
#line 279 "parser.y"
               { printf("PARSER found expr - try_expr\n"); }
#line 1863 "parser.tab.cpp"
    break;

  case 91: /* expr: match_expr  */
#line 280 "parser.y"
                 { printf("PARSER found expr - match_expr\n"); }
#line 1869 "parser.tab.cpp"
    break;

  case 93: /* expr: func  */
#line 282 "parser.y"
           { printf("Function:\n"); }
#line 1875 "parser.tab.cpp"
    break;

  case 94: /* expr: method_call  */
#line 283 "parser.y"
                  { printf("method_call:\n"); }
#line 1881 "parser.tab.cpp"
    break;

  case 95: /* expr: instance_class  */
#line 284 "parser.y"
                     { printf("instance_class:\n"); }
#line 1887 "parser.tab.cpp"
    break;

  case 96: /* expr: READLINE '(' ')'  */
#line 285 "parser.y"
                     { printf("readLine:\n"); }
#line 1893 "parser.tab.cpp"
    break;

  case 97: /* expr: PRINT '(' expr ')'  */
#line 286 "parser.y"
                        { printf("print:\n"); }
#line 1899 "parser.tab.cpp"
    break;

  case 98: /* num_const: NUM_10  */
#line 292 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 1905 "parser.tab.cpp"
    break;

  case 99: /* num_const: NUM_16  */
#line 293 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 1911 "parser.tab.cpp"
    break;

  case 100: /* num_const: REAL_NUMBER  */
#line 294 "parser.y"
                  { printf("PARSER found - REAL\n"); }
#line 1917 "parser.tab.cpp"
    break;

  case 101: /* num_const: REAL_NUMBER_EXPONENT  */
#line 295 "parser.y"
                           { printf("PARSER found - REAL_EXP\n"); }
#line 1923 "parser.tab.cpp"
    break;

  case 112: /* func_call: IDENTIFIER '(' expr_list_e ')'  */
#line 317 "parser.y"
                                     { printf("Function call: WITH PARAMS\n"); }
#line 1929 "parser.tab.cpp"
    break;

  case 139: /* array: ARRAY '(' expr_list_e ')'  */
#line 392 "parser.y"
                                { printf("PARSER found Array\n"); }
#line 1935 "parser.tab.cpp"
    break;

  case 140: /* list: LIST '(' expr_list_e ')'  */
#line 398 "parser.y"
                               { printf("PARSER found List\n"); }
#line 1941 "parser.tab.cpp"
    break;

  case 141: /* vector: VECTOR '(' expr_list_e ')'  */
#line 404 "parser.y"
                                 { printf("PARSER found Vector\n"); }
#line 1947 "parser.tab.cpp"
    break;

  case 142: /* set: SET '(' expr_list_e ')'  */
#line 410 "parser.y"
                              { printf("PARSER found Set\n"); }
#line 1953 "parser.tab.cpp"
    break;

  case 143: /* endlList: ENDL  */
#line 418 "parser.y"
                    { printf("PARSER found ENDL\n"); }
#line 1959 "parser.tab.cpp"
    break;

  case 144: /* endlList: endlList ENDL  */
#line 419 "parser.y"
                    { printf("PARSER found endlList\n"); }
#line 1965 "parser.tab.cpp"
    break;

  case 145: /* endlOpt: endlList  */
#line 424 "parser.y"
               { printf("PARSER found endlOpt\n"); }
#line 1971 "parser.tab.cpp"
    break;

  case 147: /* semicolonList: ';'  */
#line 430 "parser.y"
                   { printf("PARSER found SEMICOLON\n"); }
#line 1977 "parser.tab.cpp"
    break;

  case 148: /* semicolonList: semicolonList ';'  */
#line 431 "parser.y"
                        { printf("PARSER found semicolonList\n"); }
#line 1983 "parser.tab.cpp"
    break;


#line 1987 "parser.tab.cpp"

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

#line 434 "parser.y"

