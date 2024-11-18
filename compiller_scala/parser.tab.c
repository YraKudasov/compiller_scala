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

#line 175 "parser.tab.c"

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
  YYSYMBOL_3_ = 3,                         /* '='  */
  YYSYMBOL_4_ = 4,                         /* '|'  */
  YYSYMBOL_5_ = 5,                         /* '&'  */
  YYSYMBOL_6_ = 6,                         /* '>'  */
  YYSYMBOL_7_ = 7,                         /* '<'  */
  YYSYMBOL_8_ = 8,                         /* '+'  */
  YYSYMBOL_9_ = 9,                         /* '-'  */
  YYSYMBOL_10_ = 10,                       /* '*'  */
  YYSYMBOL_11_ = 11,                       /* '/'  */
  YYSYMBOL_12_ = 12,                       /* '%'  */
  YYSYMBOL_13_ = 13,                       /* '('  */
  YYSYMBOL_14_ = 14,                       /* ')'  */
  YYSYMBOL_15_ = 15,                       /* '['  */
  YYSYMBOL_16_ = 16,                       /* ']'  */
  YYSYMBOL_NUM_10 = 17,                    /* NUM_10  */
  YYSYMBOL_NUM_16 = 18,                    /* NUM_16  */
  YYSYMBOL_REAL_NUMBER = 19,               /* REAL_NUMBER  */
  YYSYMBOL_REAL_NUMBER_EXPONENT = 20,      /* REAL_NUMBER_EXPONENT  */
  YYSYMBOL_IDENTIFIER = 21,                /* IDENTIFIER  */
  YYSYMBOL_CONST_CHAR = 22,                /* CONST_CHAR  */
  YYSYMBOL_CONST_STRING = 23,              /* CONST_STRING  */
  YYSYMBOL_VAL = 24,                       /* VAL  */
  YYSYMBOL_ELSE = 25,                      /* ELSE  */
  YYSYMBOL_IF = 26,                        /* IF  */
  YYSYMBOL_ELSE_IF = 27,                   /* ELSE_IF  */
  YYSYMBOL_FOR = 28,                       /* FOR  */
  YYSYMBOL_DO = 29,                        /* DO  */
  YYSYMBOL_WHILE = 30,                     /* WHILE  */
  YYSYMBOL_MATCH = 31,                     /* MATCH  */
  YYSYMBOL_CASE = 32,                      /* CASE  */
  YYSYMBOL_KW_TRUE = 33,                   /* KW_TRUE  */
  YYSYMBOL_KW_FALSE = 34,                  /* KW_FALSE  */
  YYSYMBOL_KW_NULL = 35,                   /* KW_NULL  */
  YYSYMBOL_EQ = 36,                        /* EQ  */
  YYSYMBOL_NEQ = 37,                       /* NEQ  */
  YYSYMBOL_MORE_OR_EQUAL_OPERATOR = 38,    /* MORE_OR_EQUAL_OPERATOR  */
  YYSYMBOL_LESS_OR_EQUAL_OPERATOR = 39,    /* LESS_OR_EQUAL_OPERATOR  */
  YYSYMBOL_INT_KW = 40,                    /* INT_KW  */
  YYSYMBOL_DOUBLE_KW = 41,                 /* DOUBLE_KW  */
  YYSYMBOL_STRING_KW = 42,                 /* STRING_KW  */
  YYSYMBOL_CHAR_KW = 43,                   /* CHAR_KW  */
  YYSYMBOL_BOOLEAN_KW = 44,                /* BOOLEAN_KW  */
  YYSYMBOL_ANY_KW = 45,                    /* ANY_KW  */
  YYSYMBOL_TO = 46,                        /* TO  */
  YYSYMBOL_BY = 47,                        /* BY  */
  YYSYMBOL_GENERATOR_OPERATOR = 48,        /* GENERATOR_OPERATOR  */
  YYSYMBOL_RIGHT_ARROW_OPERATOR = 49,      /* RIGHT_ARROW_OPERATOR  */
  YYSYMBOL_ID_COLLECTION = 50,             /* ID_COLLECTION  */
  YYSYMBOL_ARRAY = 51,                     /* ARRAY  */
  YYSYMBOL_LIST = 52,                      /* LIST  */
  YYSYMBOL_VECTOR = 53,                    /* VECTOR  */
  YYSYMBOL_SET = 54,                       /* SET  */
  YYSYMBOL_55_ = 55,                       /* ';'  */
  YYSYMBOL_56_ = 56,                       /* '{'  */
  YYSYMBOL_57_ = 57,                       /* '}'  */
  YYSYMBOL_58_ = 58,                       /* ','  */
  YYSYMBOL_YYACCEPT = 59,                  /* $accept  */
  YYSYMBOL_statement_list = 60,            /* statement_list  */
  YYSYMBOL_statement_list_e = 61,          /* statement_list_e  */
  YYSYMBOL_statement = 62,                 /* statement  */
  YYSYMBOL_if_else_stmt = 63,              /* if_else_stmt  */
  YYSYMBOL_if_stmt = 64,                   /* if_stmt  */
  YYSYMBOL_else_if_stmt = 65,              /* else_if_stmt  */
  YYSYMBOL_else_stmt = 66,                 /* else_stmt  */
  YYSYMBOL_if_condition = 67,              /* if_condition  */
  YYSYMBOL_if_condition_list = 68,         /* if_condition_list  */
  YYSYMBOL_for_stmt = 69,                  /* for_stmt  */
  YYSYMBOL_for_base_params = 70,           /* for_base_params  */
  YYSYMBOL_for_params = 71,                /* for_params  */
  YYSYMBOL_for_multy_list = 72,            /* for_multy_list  */
  YYSYMBOL_while_stmt = 73,                /* while_stmt  */
  YYSYMBOL_do_while_stmt = 74,             /* do_while_stmt  */
  YYSYMBOL_match = 75,                     /* match  */
  YYSYMBOL_case = 76,                      /* case  */
  YYSYMBOL_case_condition = 77,            /* case_condition  */
  YYSYMBOL_int_literal_list_case = 78,     /* int_literal_list_case  */
  YYSYMBOL_case_list = 79,                 /* case_list  */
  YYSYMBOL_expr_list = 80,                 /* expr_list  */
  YYSYMBOL_expr = 81,                      /* expr  */
  YYSYMBOL_int_literal = 82,               /* int_literal  */
  YYSYMBOL_real_literal = 83,              /* real_literal  */
  YYSYMBOL_const = 84,                     /* const  */
  YYSYMBOL_func_call = 85,                 /* func_call  */
  YYSYMBOL_massive_list = 86,              /* massive_list  */
  YYSYMBOL_massive_list_e = 87,            /* massive_list_e  */
  YYSYMBOL_array = 88,                     /* array  */
  YYSYMBOL_list = 89,                      /* list  */
  YYSYMBOL_vector = 90,                    /* vector  */
  YYSYMBOL_set = 91                        /* set  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   608

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  102
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  206

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


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
       2,     2,     2,     2,     2,     2,     2,    12,     5,     2,
      13,    14,    10,     8,    58,     9,     2,    11,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    55,
       7,     3,     6,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    15,     2,    16,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     4,    57,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    57,    66,    67,    68,    72,    73,    77,    78,    79,
      80,    81,    82,    88,    89,    90,    95,    96,   101,   102,
     103,   104,   109,   110,   115,   116,   120,   121,   127,   128,
     129,   134,   135,   136,   140,   141,   147,   148,   154,   158,
     162,   163,   167,   168,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   184,   185,   189,   190,   203,   204,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   234,
     235,   240,   241,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   262,   263,   282,   286,   287,   293,
     299,   305,   311
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
  "'>'", "'<'", "'+'", "'-'", "'*'", "'/'", "'%'", "'('", "')'", "'['",
  "']'", "NUM_10", "NUM_16", "REAL_NUMBER", "REAL_NUMBER_EXPONENT",
  "IDENTIFIER", "CONST_CHAR", "CONST_STRING", "VAL", "ELSE", "IF",
  "ELSE_IF", "FOR", "DO", "WHILE", "MATCH", "CASE", "KW_TRUE", "KW_FALSE",
  "KW_NULL", "EQ", "NEQ", "MORE_OR_EQUAL_OPERATOR",
  "LESS_OR_EQUAL_OPERATOR", "INT_KW", "DOUBLE_KW", "STRING_KW", "CHAR_KW",
  "BOOLEAN_KW", "ANY_KW", "TO", "BY", "GENERATOR_OPERATOR",
  "RIGHT_ARROW_OPERATOR", "ID_COLLECTION", "ARRAY", "LIST", "VECTOR",
  "SET", "';'", "'{'", "'}'", "','", "$accept", "statement_list",
  "statement_list_e", "statement", "if_else_stmt", "if_stmt",
  "else_if_stmt", "else_stmt", "if_condition", "if_condition_list",
  "for_stmt", "for_base_params", "for_params", "for_multy_list",
  "while_stmt", "do_while_stmt", "match", "case", "case_condition",
  "int_literal_list_case", "case_list", "expr_list", "expr", "int_literal",
  "real_literal", "const", "func_call", "massive_list", "massive_list_e",
  "array", "list", "vector", "set", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-167)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-35)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -7,    16,    20,   262,  -167,   262,  -167,  -167,  -167,  -167,
      72,  -167,  -167,     8,  -167,  -167,  -167,    30,    58,    65,
      70,  -167,    63,  -167,  -167,   373,    53,  -167,  -167,  -167,
    -167,  -167,  -167,  -167,   392,   220,   -23,    79,    79,   262,
     262,   262,   262,    46,    78,    82,  -167,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   483,   262,   262,   262,
     262,    56,  -167,  -167,     4,   481,    81,    69,  -167,   102,
      93,    94,    11,    64,  -167,   113,   119,   120,   125,   144,
     139,   107,   153,   529,  -167,  -167,  -167,  -167,  -167,   262,
    -167,   526,   560,   218,   218,   131,   131,  -167,  -167,  -167,
     529,  -167,   569,   569,   218,   218,    81,  -167,   262,    97,
    -167,   -27,     9,   112,   304,  -167,    12,   123,   122,  -167,
    -167,  -167,  -167,  -167,   262,   172,   529,   262,   519,   124,
    -167,   409,   126,    47,   481,    94,    94,    94,   137,     7,
       2,  -167,  -167,   134,   141,  -167,   529,   262,   481,   132,
    -167,     0,   529,     3,   262,    68,   428,   529,  -167,  -167,
     500,  -167,  -167,  -167,  -167,  -167,   184,  -167,  -167,  -167,
     173,   171,   236,   445,   529,   278,  -167,   213,   166,   142,
    -167,   529,   170,  -167,   519,   155,  -167,  -167,   -22,   319,
    -167,  -167,   187,   529,   147,  -167,   194,  -167,   262,   338,
     170,  -167,   464,  -167,  -167,  -167
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,    79,    80,    81,    82,
      60,    86,    85,     0,    87,    88,    89,     0,     0,     0,
       0,    76,    13,    77,    78,     0,    83,    84,    59,    75,
      90,    91,    92,    93,     0,     0,     0,     0,     0,    98,
      98,    98,    98,     0,     0,     0,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    61,    94,     0,    57,     0,     0,    34,     0,
      36,     0,     0,    96,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     6,    22,     9,    10,    11,    12,     0,
      14,    74,    73,    62,    63,    68,    69,    71,    70,    72,
       6,    16,    66,    67,    64,    65,     0,    95,     0,     0,
      55,     0,     0,     0,     0,    26,     0,     0,     0,    37,
      99,   100,   101,   102,     0,     0,     0,     0,     5,     0,
       2,     0,     0,     0,    58,    46,    48,    49,     0,    52,
      44,    40,    56,     0,     0,    35,     0,     0,    25,     0,
      27,     0,     0,     0,     0,     0,     0,     0,     3,    23,
       0,    17,    41,    47,    50,    51,     0,    54,    53,    45,
       0,     0,     0,     0,     0,     0,     7,     0,     0,     0,
       4,     6,    18,    43,    42,    31,    33,    28,    61,     0,
      29,     8,     0,     0,     0,    20,     0,    30,     0,     0,
      19,    32,     0,    38,    21,    39
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -167,   -65,   -99,    17,   -20,   215,  -166,   186,    13,  -167,
      10,   -35,   197,  -167,  -167,  -167,  -167,   -34,  -167,  -167,
     130,   209,    -3,   -44,  -167,  -167,  -167,  -167,   117,  -167,
    -167,  -167,  -167
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,   128,   129,   130,    21,    22,    45,    46,   115,   116,
      23,    68,    69,    72,    87,    88,    24,   110,   138,   139,
     111,    73,    65,    26,    27,    28,    29,    74,    75,    30,
      31,    32,    33
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,   132,    34,    70,   -24,   109,   168,    47,    48,    49,
      50,    51,    52,    53,    54,    55,   195,   143,   107,     1,
       4,    37,   144,    85,     6,     7,   143,   -24,   114,     3,
     141,   144,   117,    66,   204,   -24,    85,   119,   114,    57,
      58,    59,    60,    39,    91,    92,    93,    94,    95,    96,
      97,    98,    99,    86,   102,   103,   104,   105,   176,   145,
      84,   155,   108,    85,    38,   140,    86,    79,   118,   149,
      80,    40,     1,   101,    13,    81,    82,   142,    41,   109,
      85,   172,   194,    42,    61,    35,   131,   175,    43,    79,
      44,    89,    80,    86,     1,   167,    13,    81,    82,   142,
      67,   184,    83,    36,   162,   134,    85,    43,    85,   189,
      86,   148,   106,   109,     6,     7,   113,   112,   135,   -34,
     114,   153,   108,   157,   156,   178,    85,   120,   199,   150,
     136,   137,    85,   121,   122,    85,    86,    85,    86,   123,
      85,    53,    54,    55,   173,   158,    85,   124,   163,   164,
     165,   177,    85,   169,    85,    85,    86,    76,    77,    78,
     125,    85,    86,   126,    85,    86,   127,    86,   146,    85,
      86,   151,   158,    85,   180,   154,    86,   182,   152,    85,
     170,   159,    86,   161,    86,    86,   166,   171,   174,   158,
     185,    86,   158,   186,    86,   202,   192,    44,   193,    86,
     198,   158,   196,    86,   200,    79,   158,   183,    80,    86,
       1,   201,    13,    81,    82,     2,   158,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    51,    52,    53,    54,
      55,    90,     0,     5,    63,    71,   133,     6,     7,     8,
       9,    10,    11,    12,    64,     0,     1,     0,    13,    57,
      58,    59,    60,    14,    15,    16,     0,    79,     0,     0,
      80,     0,     1,     0,    13,    81,    82,     0,   191,     0,
       0,    17,    18,    19,    20,     5,     0,     0,     0,     6,
       7,     8,     9,    10,    11,    12,     0,     0,     1,     0,
      13,   157,     0,   187,     0,    14,    15,    16,     0,    79,
       0,     0,    80,     0,     1,     0,    13,    81,    82,     0,
       0,     0,     0,    17,    18,    19,    20,   147,     0,     0,
       0,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       1,     0,    13,   157,     0,   190,     0,    14,    15,    16,
      79,     0,     0,    80,     0,     1,     0,    13,    81,    82,
       0,     0,     0,     0,     0,    17,    18,    19,    20,    79,
       0,     0,    80,     0,     1,     0,    13,    81,    82,     0,
       0,     0,     0,     0,   157,     0,   197,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     0,    56,     0,     0,
       0,     0,     0,   157,     0,   203,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     0,    62,     0,     0,    57,
      58,    59,    60,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     0,   160,     0,     0,     0,     0,    57,    58,
      59,    60,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     0,   179,     0,     0,    57,    58,    59,    60,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     0,   188,
       0,     0,     0,     0,    57,    58,    59,    60,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     0,   205,     0,
       0,    57,    58,    59,    60,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     0,     0,     0,     0,     0,     0,
      57,    58,    59,    60,    79,     0,     0,    80,     0,     1,
       0,    13,    81,    82,     0,     0,     0,    57,    58,    59,
      60,    79,     0,     0,    80,     0,     1,     0,    13,    81,
      82,    48,    49,    50,    51,    52,    53,    54,    55,   100,
      79,     0,     0,    80,     0,     1,     0,    13,    81,    82,
      79,     0,     0,    80,     0,     1,   181,    13,    81,    82,
       0,     0,    57,    58,    59,    60,    49,    50,    51,    52,
      53,    54,    55,     0,   157,    49,    50,    51,    52,    53,
      54,    55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    57,    58,    59,    60,
       0,     0,     0,     0,     0,     0,     0,    59,    60
};

static const yytype_int16 yycheck[] =
{
       3,   100,     5,    38,    26,    32,     4,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   182,    17,    14,    26,
       0,    13,    22,    43,    17,    18,    17,    49,    26,    13,
      57,    22,    21,    56,   200,    57,    56,    72,    26,    36,
      37,    38,    39,    13,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    43,    57,    58,    59,    60,    55,    50,
      43,   126,    58,    83,    56,   109,    56,    21,    57,    57,
      24,    13,    26,    56,    28,    29,    30,   111,    13,    32,
     100,   146,   181,    13,    31,    13,    89,   152,    25,    21,
      27,    13,    24,    83,    26,   139,    28,    29,    30,   133,
      21,   166,    56,    31,    57,   108,   126,    25,   128,   174,
     100,   114,    56,    32,    17,    18,    14,    48,    21,    26,
      26,   124,    58,    55,   127,    57,   146,    14,   193,   116,
      33,    34,   152,    14,    14,   155,   126,   157,   128,    14,
     160,    10,    11,    12,   147,   128,   166,     3,   135,   136,
     137,   154,   172,   140,   174,   175,   146,    40,    41,    42,
      21,   181,   152,    56,   184,   155,    13,   157,    56,   189,
     160,    48,   155,   193,   157,     3,   166,   160,    56,   199,
      46,    57,   172,    57,   174,   175,    49,    46,    56,   172,
      17,   181,   175,    22,   184,   198,    30,    27,    56,   189,
      13,   184,    47,   193,    57,    21,   189,    23,    24,   199,
      26,    17,    28,    29,    30,     0,   199,     4,     5,     6,
       7,     8,     9,    10,    11,    12,     8,     9,    10,    11,
      12,    45,    -1,    13,    14,    38,   106,    17,    18,    19,
      20,    21,    22,    23,    35,    -1,    26,    -1,    28,    36,
      37,    38,    39,    33,    34,    35,    -1,    21,    -1,    -1,
      24,    -1,    26,    -1,    28,    29,    30,    -1,    55,    -1,
      -1,    51,    52,    53,    54,    13,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    26,    -1,
      28,    55,    -1,    57,    -1,    33,    34,    35,    -1,    21,
      -1,    -1,    24,    -1,    26,    -1,    28,    29,    30,    -1,
      -1,    -1,    -1,    51,    52,    53,    54,    13,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    28,    55,    -1,    57,    -1,    33,    34,    35,
      21,    -1,    -1,    24,    -1,    26,    -1,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    51,    52,    53,    54,    21,
      -1,    -1,    24,    -1,    26,    -1,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    57,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    57,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    -1,    14,    -1,    -1,    36,
      37,    38,    39,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    -1,    14,    -1,    -1,    -1,    -1,    36,    37,
      38,    39,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    14,    -1,    -1,    36,    37,    38,    39,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    -1,    14,
      -1,    -1,    -1,    -1,    36,    37,    38,    39,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    -1,    14,    -1,
      -1,    36,    37,    38,    39,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    37,    38,    39,    21,    -1,    -1,    24,    -1,    26,
      -1,    28,    29,    30,    -1,    -1,    -1,    36,    37,    38,
      39,    21,    -1,    -1,    24,    -1,    26,    -1,    28,    29,
      30,     5,     6,     7,     8,     9,    10,    11,    12,    56,
      21,    -1,    -1,    24,    -1,    26,    -1,    28,    29,    30,
      21,    -1,    -1,    24,    -1,    26,    56,    28,    29,    30,
      -1,    -1,    36,    37,    38,    39,     6,     7,     8,     9,
      10,    11,    12,    -1,    55,     6,     7,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    26,    64,    13,     0,    13,    17,    18,    19,    20,
      21,    22,    23,    28,    33,    34,    35,    51,    52,    53,
      54,    63,    64,    69,    75,    81,    82,    83,    84,    85,
      88,    89,    90,    91,    81,    13,    31,    13,    56,    13,
      13,    13,    13,    25,    27,    65,    66,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    14,    36,    37,    38,
      39,    31,    14,    14,    80,    81,    56,    21,    70,    71,
      70,    71,    72,    80,    86,    87,    87,    87,    87,    21,
      24,    29,    30,    56,    62,    63,    69,    73,    74,    13,
      66,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      56,    62,    81,    81,    81,    81,    56,    14,    58,    32,
      76,    79,    48,    14,    26,    67,    68,    21,    57,    70,
      14,    14,    14,    14,     3,    21,    56,    13,    60,    61,
      62,    81,    61,    79,    81,    21,    33,    34,    77,    78,
      82,    57,    76,    17,    22,    50,    56,    13,    81,    57,
      67,    48,    56,    81,     3,    60,    81,    55,    62,    57,
      14,    57,    57,    67,    67,    67,    49,    82,     4,    67,
      46,    46,    60,    81,    56,    60,    55,    81,    57,    14,
      62,    56,    62,    23,    60,    17,    22,    57,    14,    60,
      57,    55,    30,    56,    61,    65,    47,    57,    13,    60,
      57,    17,    81,    57,    65,    14
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    59,    60,    60,    60,    61,    61,    62,    62,    62,
      62,    62,    62,    63,    63,    63,    64,    64,    65,    65,
      65,    65,    66,    66,    67,    67,    68,    68,    69,    69,
      69,    70,    70,    70,    71,    71,    72,    72,    73,    74,
      75,    75,    76,    76,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    78,    78,    79,    79,    80,    80,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    82,
      82,    83,    83,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    85,    85,    86,    87,    87,    88,
      89,    90,    91
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     3,     1,     0,     4,     5,     1,
       1,     1,     1,     1,     3,     2,     5,     7,     5,     7,
       6,     8,     2,     4,     4,     2,     1,     2,     7,     7,
       8,     5,     7,     5,     1,     3,     1,     2,     7,     8,
       5,     5,     4,     4,     1,     2,     1,     2,     1,     1,
       2,     2,     1,     2,     2,     1,     2,     1,     3,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     4,     1,     1,     0,     4,
       4,     4,     4
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
  case 6: /* statement_list_e: %empty  */
#line 73 "parser.y"
                     { printf("PARSER found statement_list_e - nothing\n"); }
#line 1466 "parser.tab.c"
    break;

  case 7: /* statement: IDENTIFIER '=' expr ';'  */
#line 77 "parser.y"
                              { printf("Assignment:\n"); }
#line 1472 "parser.tab.c"
    break;

  case 8: /* statement: VAL IDENTIFIER '=' expr ';'  */
#line 78 "parser.y"
                                  { printf("Value declaration:\n"); }
#line 1478 "parser.tab.c"
    break;

  case 9: /* statement: if_else_stmt  */
#line 79 "parser.y"
                   { printf("IF_ELSE construction:\n"); }
#line 1484 "parser.tab.c"
    break;

  case 10: /* statement: for_stmt  */
#line 80 "parser.y"
               { printf("FOR_STMT construction:\n"); }
#line 1490 "parser.tab.c"
    break;

  case 11: /* statement: while_stmt  */
#line 81 "parser.y"
                 { printf("WHILE_STMT construction:\n"); }
#line 1496 "parser.tab.c"
    break;

  case 12: /* statement: do_while_stmt  */
#line 82 "parser.y"
                    { printf("DO_WHILE_STMT construction:\n"); }
#line 1502 "parser.tab.c"
    break;

  case 28: /* for_stmt: FOR '(' for_params ')' '{' statement_list '}'  */
#line 127 "parser.y"
                                                        { printf("FOR LOOP\n"); }
#line 1508 "parser.tab.c"
    break;

  case 29: /* for_stmt: FOR '{' for_multy_list '}' '{' statement_list '}'  */
#line 128 "parser.y"
                                                          { printf("FOR MULTY LOOP\n"); }
#line 1514 "parser.tab.c"
    break;

  case 30: /* for_stmt: FOR '{' for_params if_condition_list '}' '{' statement_list '}'  */
#line 129 "parser.y"
                                                                          { printf("FOR LOOP: multy with IF_STMT\n"); }
#line 1520 "parser.tab.c"
    break;

  case 57: /* expr_list: expr  */
#line 203 "parser.y"
                      { printf("PARSER found expr_list - expr\n"); }
#line 1526 "parser.tab.c"
    break;

  case 58: /* expr_list: expr_list ',' expr  */
#line 204 "parser.y"
                          { printf("PARSER found expr_list - expr_list\n"); }
#line 1532 "parser.tab.c"
    break;

  case 59: /* expr: const  */
#line 209 "parser.y"
            {printf("PARSER found expr - const\n"); }
#line 1538 "parser.tab.c"
    break;

  case 60: /* expr: IDENTIFIER  */
#line 210 "parser.y"
                 {printf("PARSER found expr - IDENTIFIER\n"); }
#line 1544 "parser.tab.c"
    break;

  case 61: /* expr: '(' expr ')'  */
#line 211 "parser.y"
                   {printf("PARSER found expr - ( expr )\n"); }
#line 1550 "parser.tab.c"
    break;

  case 62: /* expr: expr '>' expr  */
#line 212 "parser.y"
                    {printf("PARSER found expr - expr > expr\n"); }
#line 1556 "parser.tab.c"
    break;

  case 63: /* expr: expr '<' expr  */
#line 213 "parser.y"
                    {printf("PARSER found expr - expr < expr\n"); }
#line 1562 "parser.tab.c"
    break;

  case 64: /* expr: expr MORE_OR_EQUAL_OPERATOR expr  */
#line 214 "parser.y"
                                       {printf("PARSER found expr - expr >= expr\n"); }
#line 1568 "parser.tab.c"
    break;

  case 65: /* expr: expr LESS_OR_EQUAL_OPERATOR expr  */
#line 215 "parser.y"
                                       {printf("PARSER found expr - expr <= expr\n"); }
#line 1574 "parser.tab.c"
    break;

  case 66: /* expr: expr EQ expr  */
#line 216 "parser.y"
                   {printf("PARSER found expr - expr == expr\n"); }
#line 1580 "parser.tab.c"
    break;

  case 67: /* expr: expr NEQ expr  */
#line 217 "parser.y"
                    {printf("PARSER found expr - expr != expr\n"); }
#line 1586 "parser.tab.c"
    break;

  case 68: /* expr: expr '+' expr  */
#line 218 "parser.y"
                    { printf("PARSER found expr - expr + expr\n"); }
#line 1592 "parser.tab.c"
    break;

  case 69: /* expr: expr '-' expr  */
#line 219 "parser.y"
                    { printf("PARSER found expr - expr - expr\n"); }
#line 1598 "parser.tab.c"
    break;

  case 70: /* expr: expr '/' expr  */
#line 220 "parser.y"
                    { printf("PARSER found expr - expr / expr\n"); }
#line 1604 "parser.tab.c"
    break;

  case 71: /* expr: expr '*' expr  */
#line 221 "parser.y"
                    { printf("PARSER found expr - expr * expr\n"); }
#line 1610 "parser.tab.c"
    break;

  case 72: /* expr: expr '%' expr  */
#line 222 "parser.y"
                    { printf("PARSER found expr - expr % expr\n"); }
#line 1616 "parser.tab.c"
    break;

  case 73: /* expr: expr '&' expr  */
#line 223 "parser.y"
                    { printf("PARSER found expr - expr && expr\n"); }
#line 1622 "parser.tab.c"
    break;

  case 74: /* expr: expr '|' expr  */
#line 224 "parser.y"
                    { printf("PARSER found expr - expr | expr\n"); }
#line 1628 "parser.tab.c"
    break;

  case 75: /* expr: func_call  */
#line 225 "parser.y"
                { printf("PARSER found expr - func_call\n"); }
#line 1634 "parser.tab.c"
    break;

  case 76: /* expr: if_else_stmt  */
#line 226 "parser.y"
                   { printf("PARSER found expr - if_else_stmt\n"); }
#line 1640 "parser.tab.c"
    break;

  case 77: /* expr: for_stmt  */
#line 227 "parser.y"
               { printf("PARSER found expr - for_stmt\n"); }
#line 1646 "parser.tab.c"
    break;

  case 78: /* expr: match  */
#line 228 "parser.y"
            { printf("PARSER found expr - match\n"); }
#line 1652 "parser.tab.c"
    break;

  case 79: /* int_literal: NUM_10  */
#line 234 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 1658 "parser.tab.c"
    break;

  case 80: /* int_literal: NUM_16  */
#line 235 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 1664 "parser.tab.c"
    break;

  case 81: /* real_literal: REAL_NUMBER  */
#line 240 "parser.y"
                  { printf("PARSER found - REAL\n"); }
#line 1670 "parser.tab.c"
    break;

  case 82: /* real_literal: REAL_NUMBER_EXPONENT  */
#line 241 "parser.y"
                           { printf("PARSER found - REAL_EXP\n"); }
#line 1676 "parser.tab.c"
    break;

  case 94: /* func_call: IDENTIFIER '(' ')'  */
#line 262 "parser.y"
                         { printf("Function call: NO PARAMS\n"); }
#line 1682 "parser.tab.c"
    break;

  case 95: /* func_call: IDENTIFIER '(' expr_list ')'  */
#line 263 "parser.y"
                                   { printf("Function call: WITH PARAMS\n"); }
#line 1688 "parser.tab.c"
    break;

  case 99: /* array: ARRAY '(' massive_list_e ')'  */
#line 293 "parser.y"
                                   { printf("PARSER found Array\n"); }
#line 1694 "parser.tab.c"
    break;

  case 100: /* list: LIST '(' massive_list_e ')'  */
#line 299 "parser.y"
                                  { printf("PARSER found List\n"); }
#line 1700 "parser.tab.c"
    break;

  case 101: /* vector: VECTOR '(' massive_list_e ')'  */
#line 305 "parser.y"
                                    { printf("PARSER found Vector\n"); }
#line 1706 "parser.tab.c"
    break;

  case 102: /* set: SET '(' massive_list_e ')'  */
#line 311 "parser.y"
                                 { printf("PARSER found Set\n"); }
#line 1712 "parser.tab.c"
    break;


#line 1716 "parser.tab.c"

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

#line 316 "parser.y"

