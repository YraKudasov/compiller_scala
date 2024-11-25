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
    NEWLINE = 265,                 /* NEWLINE  */
    VAL = 266,                     /* VAL  */
    VAR = 267,                     /* VAR  */
    ELSE = 268,                    /* ELSE  */
    IF = 269,                      /* IF  */
    ELSE_IF = 270,                 /* ELSE_IF  */
    FOR = 271,                     /* FOR  */
    DO = 272,                      /* DO  */
    WHILE = 273,                   /* WHILE  */
    MATCH = 274,                   /* MATCH  */
    CASE = 275,                    /* CASE  */
    KW_TRUE = 276,                 /* KW_TRUE  */
    KW_FALSE = 277,                /* KW_FALSE  */
    KW_NULL = 278,                 /* KW_NULL  */
    EQ = 279,                      /* EQ  */
    NEQ = 280,                     /* NEQ  */
    MORE_OR_EQUAL_OPERATOR = 281,  /* MORE_OR_EQUAL_OPERATOR  */
    LESS_OR_EQUAL_OPERATOR = 282,  /* LESS_OR_EQUAL_OPERATOR  */
    INT_KW = 283,                  /* INT_KW  */
    DOUBLE_KW = 284,               /* DOUBLE_KW  */
    STRING_KW = 285,               /* STRING_KW  */
    CHAR_KW = 286,                 /* CHAR_KW  */
    BOOLEAN_KW = 287,              /* BOOLEAN_KW  */
    ANY_KW = 288,                  /* ANY_KW  */
    TO = 289,                      /* TO  */
    BY = 290,                      /* BY  */
    GENERATOR_OPERATOR = 291,      /* GENERATOR_OPERATOR  */
    RIGHT_ARROW_OPERATOR = 292,    /* RIGHT_ARROW_OPERATOR  */
    ID_COLLECTION = 293,           /* ID_COLLECTION  */
    ARRAY = 294,                   /* ARRAY  */
    LIST = 295,                    /* LIST  */
    VECTOR = 296,                  /* VECTOR  */
    SET = 297                      /* SET  */
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

#line 177 "parser.tab.c"

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
  YYSYMBOL_NEWLINE = 24,                   /* NEWLINE  */
  YYSYMBOL_VAL = 25,                       /* VAL  */
  YYSYMBOL_VAR = 26,                       /* VAR  */
  YYSYMBOL_ELSE = 27,                      /* ELSE  */
  YYSYMBOL_IF = 28,                        /* IF  */
  YYSYMBOL_ELSE_IF = 29,                   /* ELSE_IF  */
  YYSYMBOL_FOR = 30,                       /* FOR  */
  YYSYMBOL_DO = 31,                        /* DO  */
  YYSYMBOL_WHILE = 32,                     /* WHILE  */
  YYSYMBOL_MATCH = 33,                     /* MATCH  */
  YYSYMBOL_CASE = 34,                      /* CASE  */
  YYSYMBOL_KW_TRUE = 35,                   /* KW_TRUE  */
  YYSYMBOL_KW_FALSE = 36,                  /* KW_FALSE  */
  YYSYMBOL_KW_NULL = 37,                   /* KW_NULL  */
  YYSYMBOL_EQ = 38,                        /* EQ  */
  YYSYMBOL_NEQ = 39,                       /* NEQ  */
  YYSYMBOL_MORE_OR_EQUAL_OPERATOR = 40,    /* MORE_OR_EQUAL_OPERATOR  */
  YYSYMBOL_LESS_OR_EQUAL_OPERATOR = 41,    /* LESS_OR_EQUAL_OPERATOR  */
  YYSYMBOL_INT_KW = 42,                    /* INT_KW  */
  YYSYMBOL_DOUBLE_KW = 43,                 /* DOUBLE_KW  */
  YYSYMBOL_STRING_KW = 44,                 /* STRING_KW  */
  YYSYMBOL_CHAR_KW = 45,                   /* CHAR_KW  */
  YYSYMBOL_BOOLEAN_KW = 46,                /* BOOLEAN_KW  */
  YYSYMBOL_ANY_KW = 47,                    /* ANY_KW  */
  YYSYMBOL_TO = 48,                        /* TO  */
  YYSYMBOL_BY = 49,                        /* BY  */
  YYSYMBOL_GENERATOR_OPERATOR = 50,        /* GENERATOR_OPERATOR  */
  YYSYMBOL_RIGHT_ARROW_OPERATOR = 51,      /* RIGHT_ARROW_OPERATOR  */
  YYSYMBOL_ID_COLLECTION = 52,             /* ID_COLLECTION  */
  YYSYMBOL_ARRAY = 53,                     /* ARRAY  */
  YYSYMBOL_LIST = 54,                      /* LIST  */
  YYSYMBOL_VECTOR = 55,                    /* VECTOR  */
  YYSYMBOL_SET = 56,                       /* SET  */
  YYSYMBOL_57_ = 57,                       /* ';'  */
  YYSYMBOL_58_ = 58,                       /* '{'  */
  YYSYMBOL_59_ = 59,                       /* '}'  */
  YYSYMBOL_60_ = 60,                       /* ','  */
  YYSYMBOL_YYACCEPT = 61,                  /* $accept  */
  YYSYMBOL_program = 62,                   /* program  */
  YYSYMBOL_statement_list = 63,            /* statement_list  */
  YYSYMBOL_statement_list_e = 64,          /* statement_list_e  */
  YYSYMBOL_statement = 65,                 /* statement  */
  YYSYMBOL_if_else_stmt = 66,              /* if_else_stmt  */
  YYSYMBOL_else_stmt = 67,                 /* else_stmt  */
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
  YYSYMBOL_expr_list_e = 80,               /* expr_list_e  */
  YYSYMBOL_expr_list = 81,                 /* expr_list  */
  YYSYMBOL_expr = 82,                      /* expr  */
  YYSYMBOL_num_const = 83,                 /* num_const  */
  YYSYMBOL_const = 84,                     /* const  */
  YYSYMBOL_func_call = 85,                 /* func_call  */
  YYSYMBOL_array = 86,                     /* array  */
  YYSYMBOL_list = 87,                      /* list  */
  YYSYMBOL_vector = 88,                    /* vector  */
  YYSYMBOL_set = 89                        /* set  */
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
#define YYFINAL  53
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   454

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  187

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   297


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
      13,    14,    10,     8,    60,     9,     2,    11,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    57,
       7,     3,     6,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    15,     2,    16,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,     4,    59,     2,     2,     2,     2,
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
      49,    50,    51,    52,    53,    54,    55,    56
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    59,    59,    66,    67,    68,    69,    73,    74,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    93,    97,
     102,   103,   109,   110,   111,   116,   117,   118,   122,   123,
     129,   130,   136,   140,   144,   145,   149,   150,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   166,   167,   171,
     172,   179,   180,   185,   186,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   216,   217,   218,   219,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   240,
     241,   262,   268,   274,   280
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
  "IDENTIFIER", "CONST_CHAR", "CONST_STRING", "NEWLINE", "VAL", "VAR",
  "ELSE", "IF", "ELSE_IF", "FOR", "DO", "WHILE", "MATCH", "CASE",
  "KW_TRUE", "KW_FALSE", "KW_NULL", "EQ", "NEQ", "MORE_OR_EQUAL_OPERATOR",
  "LESS_OR_EQUAL_OPERATOR", "INT_KW", "DOUBLE_KW", "STRING_KW", "CHAR_KW",
  "BOOLEAN_KW", "ANY_KW", "TO", "BY", "GENERATOR_OPERATOR",
  "RIGHT_ARROW_OPERATOR", "ID_COLLECTION", "ARRAY", "LIST", "VECTOR",
  "SET", "';'", "'{'", "'}'", "','", "$accept", "program",
  "statement_list", "statement_list_e", "statement", "if_else_stmt",
  "else_stmt", "if_condition_list", "for_stmt", "for_base_params",
  "for_params", "for_multy_list", "while_stmt", "do_while_stmt", "match",
  "case", "case_condition", "int_literal_list_case", "case_list",
  "expr_list_e", "expr_list", "expr", "num_const", "const", "func_call",
  "array", "list", "vector", "set", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-82)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-29)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     360,    55,    -8,    -1,   200,    -9,    -6,    47,   360,    75,
     360,   -82,     9,   -82,   -82,   -82,   -82,   -82,   200,     8,
      89,    91,   200,   -82,   -82,   -82,   -82,   -10,   -82,   -82,
     -82,   -82,   -82,    82,    86,    88,   102,   -82,   -82,   -82,
      72,    84,   -82,   -82,   -82,   -82,   -82,   -82,   100,   100,
     360,   200,    67,   -82,    10,   -82,   -82,   368,   -82,   -12,
     368,   200,   200,   308,    73,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   107,    83,    93,   -82,   130,   117,   121,    -4,
     213,   319,   -82,   -82,   -82,   -82,   200,   368,   368,   -82,
     122,   144,    99,   146,   154,   155,   388,   404,    97,    97,
      61,    61,   -82,   -82,   -82,   413,   413,    97,    97,   360,
     -82,   122,     2,   360,   200,    11,   123,   360,   -82,   142,
     120,   368,   119,   -82,   -22,   -82,   -82,   -82,   -82,   -82,
      -2,   127,   132,   -82,   -82,   368,   200,   360,    52,   -82,
     168,   360,   156,   157,   158,   136,   145,    14,   -82,   -82,
     -82,   174,   170,   368,   -82,   200,   252,   200,   200,   200,
     236,   -82,   -82,   200,   147,   -82,   330,   -82,   368,   368,
     368,   -82,   360,   368,   176,   -82,   -82
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       8,     0,     0,     0,     0,     0,     0,     0,     8,     0,
       7,     2,     0,    12,    13,    14,    15,    16,     0,     0,
       0,     0,     0,    75,    76,    77,    78,    56,    81,    80,
      82,    83,    84,     0,     0,     0,     0,    72,    73,    74,
       0,    79,    55,    71,    85,    86,    87,    88,     0,     0,
       0,     0,     0,     1,     0,     4,     3,     9,    89,     0,
      53,     0,     0,     0,     0,    52,    52,    52,    52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,    30,     0,     0,
       0,     0,    17,     6,     5,    90,     0,    10,    11,    57,
       0,     0,    51,     0,     0,     0,    70,    69,    58,    59,
      64,    65,    67,    66,    68,    62,    63,    60,    61,     0,
      18,     0,     0,     0,     0,     0,     0,     0,    31,     0,
       0,    54,     0,    49,     0,    91,    92,    93,    94,    19,
       0,     0,     0,    29,    22,    20,     0,     0,     0,    23,
       0,     0,    40,    42,    43,     0,    46,    38,    34,    50,
      35,     0,     0,    21,    24,     0,     0,     0,     0,     0,
       0,    48,    47,     0,    25,    27,     0,    32,    41,    44,
      45,    37,    36,    39,     0,    33,    26
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -82,   -82,   -35,   186,    -5,     0,   -82,   -82,     1,   -42,
     161,   -82,   -82,   -82,   -82,   -81,   -82,   -82,    74,    20,
     192,   128,   -67,   -82,     6,   -82,   -82,   -82,   -82
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     9,    10,    11,    12,    37,   120,   125,    38,    85,
      86,    89,    15,    16,    39,   133,   155,   156,   134,   101,
     102,    60,    41,    42,    43,    44,    45,    46,    47
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    14,    95,    19,    48,    54,    17,    87,    13,    14,
      13,    14,   132,    20,    17,    90,    17,   126,   172,   141,
      21,    22,    58,    64,   142,    23,    24,    25,    26,    27,
      28,    29,   132,    55,    93,    82,     4,   158,     5,   146,
      13,    14,   173,    30,    31,    32,    17,   128,    96,    49,
      13,    14,    50,   159,   143,   127,    17,   160,    18,   159,
      51,    33,    34,    35,    36,   157,    56,    94,    19,   141,
     147,    75,    76,    77,   142,    53,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    54,   103,   104,   105,   171,
      13,    14,    61,     1,    62,    65,    17,     2,     3,    66,
       4,    67,     5,     6,     7,    73,    74,    75,    76,    77,
      78,    79,    80,    81,   139,    68,   166,    83,   144,    13,
      14,    84,   149,    13,    14,    17,    92,    13,    14,    17,
       8,   100,    40,    17,   119,   182,    23,    24,    25,    26,
     152,   121,   164,   122,   123,   -28,    57,    13,    14,   124,
      63,    13,    14,    17,   153,   154,   132,    17,   135,    96,
     136,    54,    23,    24,    25,    26,    13,    14,   137,   138,
      13,    14,    17,   148,   150,   161,    17,    54,   151,    91,
     162,   165,    13,    14,   167,   168,   169,   170,    17,    97,
      98,   174,   175,   186,    52,   140,   184,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
      88,    59,     0,    22,     0,     0,     0,    23,    24,    25,
      26,    27,    28,    29,   131,     0,     0,     0,     4,     0,
       5,     0,     0,     0,     1,    30,    31,    32,     2,     3,
       0,     4,     0,     5,     6,     7,     0,     0,     0,     0,
       0,     0,   145,    33,    34,    35,    36,     1,     0,   181,
       0,     2,     3,     0,     4,     0,     5,     6,     7,     0,
       0,     8,   129,     1,   163,     0,     0,     2,     3,     0,
       4,     0,     5,     6,     7,     0,     0,     0,     0,     0,
       0,     0,     0,   176,     8,   178,   179,   180,     0,     0,
       0,   183,     0,     0,     0,     0,     0,     0,     0,     0,
       8,   177,    69,    70,    71,    72,    73,    74,    75,    76,
      77,     0,    99,    69,    70,    71,    72,    73,    74,    75,
      76,    77,     0,   130,    69,    70,    71,    72,    73,    74,
      75,    76,    77,     0,   185,     0,    78,    79,    80,    81,
       0,     0,     0,     0,     0,     0,     0,    78,    79,    80,
      81,     0,     0,     0,     0,     0,     0,     0,    78,    79,
      80,    81,    69,    70,    71,    72,    73,    74,    75,    76,
      77,     1,     0,     0,     0,     2,     3,     0,     4,     0,
       5,     6,     7,    70,    71,    72,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,    78,    79,    80,    81,
      71,    72,    73,    74,    75,    76,    77,     0,     8,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,    79,    80,    81,     0,     0,     0,     0,
       0,     0,     0,    80,    81
};

static const yytype_int16 yycheck[] =
{
       0,     0,    14,    13,    13,    10,     0,    49,     8,     8,
      10,    10,    34,    21,     8,    50,    10,    21,     4,    17,
      21,    13,    14,    33,    22,    17,    18,    19,    20,    21,
      22,    23,    34,    24,    24,    40,    28,    59,    30,    28,
      40,    40,    28,    35,    36,    37,    40,    89,    60,    58,
      50,    50,    58,   134,    52,    59,    50,    59,     3,   140,
      13,    53,    54,    55,    56,   132,    57,    57,    13,    17,
      59,    10,    11,    12,    22,     0,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    90,    66,    67,    68,   156,
      90,    90,     3,    21,     3,    13,    90,    25,    26,    13,
      28,    13,    30,    31,    32,     8,     9,    10,    11,    12,
      38,    39,    40,    41,   119,    13,   151,    33,   123,   119,
     119,    21,   127,   123,   123,   119,    59,   127,   127,   123,
      58,    58,     4,   127,    27,   170,    17,    18,    19,    20,
      21,    58,   147,    50,    14,    28,    18,   147,   147,    28,
      22,   151,   151,   147,    35,    36,    34,   151,    14,    60,
      14,   166,    17,    18,    19,    20,   166,   166,    14,    14,
     170,   170,   166,    50,    32,    48,   170,   182,    58,    51,
      48,    13,   182,   182,    28,    28,    28,    51,   182,    61,
      62,    17,    22,    17,     8,   121,    49,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      49,    19,    -1,    13,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    23,    96,    -1,    -1,    -1,    28,    -1,
      30,    -1,    -1,    -1,    21,    35,    36,    37,    25,    26,
      -1,    28,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,   124,    53,    54,    55,    56,    21,    -1,    23,
      -1,    25,    26,    -1,    28,    -1,    30,    31,    32,    -1,
      -1,    58,    59,    21,   146,    -1,    -1,    25,    26,    -1,
      28,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   165,    58,   167,   168,   169,    -1,    -1,
      -1,   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    59,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    14,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    -1,    14,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,    14,    -1,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    21,    -1,    -1,    -1,    25,    26,    -1,    28,    -1,
      30,    31,    32,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,
       6,     7,     8,     9,    10,    11,    12,    -1,    58,     6,
       7,     8,     9,    10,    11,    12,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    21,    25,    26,    28,    30,    31,    32,    58,    62,
      63,    64,    65,    66,    69,    73,    74,    85,     3,    13,
      21,    21,    13,    17,    18,    19,    20,    21,    22,    23,
      35,    36,    37,    53,    54,    55,    56,    66,    69,    75,
      82,    83,    84,    85,    86,    87,    88,    89,    13,    58,
      58,    13,    64,     0,    65,    24,    57,    82,    14,    81,
      82,     3,     3,    82,    33,    13,    13,    13,    13,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    38,    39,
      40,    41,    65,    33,    21,    70,    71,    70,    71,    72,
      63,    82,    59,    24,    57,    14,    60,    82,    82,    14,
      58,    80,    81,    80,    80,    80,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    27,
      67,    58,    50,    14,    28,    68,    21,    59,    70,    59,
      14,    82,    34,    76,    79,    14,    14,    14,    14,    65,
      79,    17,    22,    52,    65,    82,    28,    59,    50,    65,
      32,    58,    21,    35,    36,    77,    78,    83,    59,    76,
      59,    48,    48,    82,    65,    13,    63,    28,    28,    28,
      51,    83,     4,    28,    17,    22,    82,    59,    82,    82,
      82,    23,    63,    82,    49,    14,    17
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    61,    62,    63,    63,    63,    63,    64,    64,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    66,    67,
      68,    68,    69,    69,    69,    70,    70,    70,    71,    71,
      72,    72,    73,    74,    75,    75,    76,    76,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    78,    78,    79,
      79,    80,    80,    81,    81,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    83,    83,    83,    83,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    85,
      85,    86,    87,    88,    89
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     3,     3,     1,     0,     3,
       4,     4,     1,     1,     1,     1,     1,     3,     4,     2,
       2,     3,     5,     5,     6,     5,     7,     5,     1,     3,
       1,     2,     7,     8,     5,     5,     4,     4,     1,     3,
       1,     3,     1,     1,     3,     3,     1,     2,     2,     1,
       2,     1,     0,     1,     3,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       4,     4,     4,     4,     4
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
  case 8: /* statement_list_e: %empty  */
#line 74 "parser.y"
                     { printf("PARSER found statement_list_e - nothing\n"); }
#line 1424 "parser.tab.c"
    break;

  case 9: /* statement: IDENTIFIER '=' expr  */
#line 78 "parser.y"
                          { printf("Assignment:\n"); }
#line 1430 "parser.tab.c"
    break;

  case 10: /* statement: VAL IDENTIFIER '=' expr  */
#line 79 "parser.y"
                               { printf("Value declaration:\n"); }
#line 1436 "parser.tab.c"
    break;

  case 11: /* statement: VAR IDENTIFIER '=' expr  */
#line 80 "parser.y"
                               { printf("Variable declaration:\n"); }
#line 1442 "parser.tab.c"
    break;

  case 12: /* statement: if_else_stmt  */
#line 81 "parser.y"
                   { printf("IF_ELSE construction:\n"); }
#line 1448 "parser.tab.c"
    break;

  case 13: /* statement: for_stmt  */
#line 82 "parser.y"
               { printf("FOR_STMT construction:\n"); }
#line 1454 "parser.tab.c"
    break;

  case 14: /* statement: while_stmt  */
#line 83 "parser.y"
                 { printf("WHILE_STMT construction:\n"); }
#line 1460 "parser.tab.c"
    break;

  case 15: /* statement: do_while_stmt  */
#line 84 "parser.y"
                    { printf("DO_WHILE_STMT construction:\n"); }
#line 1466 "parser.tab.c"
    break;

  case 16: /* statement: func_call  */
#line 85 "parser.y"
                { printf("FUNC_CALL construction:\n"); }
#line 1472 "parser.tab.c"
    break;

  case 22: /* for_stmt: FOR '(' for_params ')' statement  */
#line 109 "parser.y"
                                           { printf("FOR LOOP\n"); }
#line 1478 "parser.tab.c"
    break;

  case 23: /* for_stmt: FOR '{' for_multy_list '}' statement  */
#line 110 "parser.y"
                                             { printf("FOR MULTY LOOP\n"); }
#line 1484 "parser.tab.c"
    break;

  case 24: /* for_stmt: FOR '{' for_params if_condition_list '}' statement  */
#line 111 "parser.y"
                                                             { printf("FOR LOOP: multy with IF_STMT\n"); }
#line 1490 "parser.tab.c"
    break;

  case 51: /* expr_list_e: expr_list  */
#line 179 "parser.y"
                   { printf("PARSER found expr_list - expr_list\n"); }
#line 1496 "parser.tab.c"
    break;

  case 52: /* expr_list_e: %empty  */
#line 180 "parser.y"
                     { printf("PARSER found expr_list - nothing\n"); }
#line 1502 "parser.tab.c"
    break;

  case 53: /* expr_list: expr  */
#line 185 "parser.y"
                      { printf("PARSER found expr_list - expr\n"); }
#line 1508 "parser.tab.c"
    break;

  case 54: /* expr_list: expr_list ',' expr  */
#line 186 "parser.y"
                          { printf("PARSER found expr_list - expr_list\n"); }
#line 1514 "parser.tab.c"
    break;

  case 55: /* expr: const  */
#line 191 "parser.y"
            {printf("PARSER found expr - const\n"); }
#line 1520 "parser.tab.c"
    break;

  case 56: /* expr: IDENTIFIER  */
#line 192 "parser.y"
                 {printf("PARSER found expr - IDENTIFIER\n"); }
#line 1526 "parser.tab.c"
    break;

  case 57: /* expr: '(' expr ')'  */
#line 193 "parser.y"
                   {printf("PARSER found expr - ( expr )\n"); }
#line 1532 "parser.tab.c"
    break;

  case 58: /* expr: expr '>' expr  */
#line 194 "parser.y"
                    {printf("PARSER found expr - expr > expr\n"); }
#line 1538 "parser.tab.c"
    break;

  case 59: /* expr: expr '<' expr  */
#line 195 "parser.y"
                    {printf("PARSER found expr - expr < expr\n"); }
#line 1544 "parser.tab.c"
    break;

  case 60: /* expr: expr MORE_OR_EQUAL_OPERATOR expr  */
#line 196 "parser.y"
                                       {printf("PARSER found expr - expr >= expr\n"); }
#line 1550 "parser.tab.c"
    break;

  case 61: /* expr: expr LESS_OR_EQUAL_OPERATOR expr  */
#line 197 "parser.y"
                                       {printf("PARSER found expr - expr <= expr\n"); }
#line 1556 "parser.tab.c"
    break;

  case 62: /* expr: expr EQ expr  */
#line 198 "parser.y"
                   {printf("PARSER found expr - expr == expr\n"); }
#line 1562 "parser.tab.c"
    break;

  case 63: /* expr: expr NEQ expr  */
#line 199 "parser.y"
                    {printf("PARSER found expr - expr != expr\n"); }
#line 1568 "parser.tab.c"
    break;

  case 64: /* expr: expr '+' expr  */
#line 200 "parser.y"
                    { printf("PARSER found expr - expr + expr\n"); }
#line 1574 "parser.tab.c"
    break;

  case 65: /* expr: expr '-' expr  */
#line 201 "parser.y"
                    { printf("PARSER found expr - expr - expr\n"); }
#line 1580 "parser.tab.c"
    break;

  case 66: /* expr: expr '/' expr  */
#line 202 "parser.y"
                    { printf("PARSER found expr - expr / expr\n"); }
#line 1586 "parser.tab.c"
    break;

  case 67: /* expr: expr '*' expr  */
#line 203 "parser.y"
                    { printf("PARSER found expr - expr * expr\n"); }
#line 1592 "parser.tab.c"
    break;

  case 68: /* expr: expr '%' expr  */
#line 204 "parser.y"
                    { printf("PARSER found expr - expr % expr\n"); }
#line 1598 "parser.tab.c"
    break;

  case 69: /* expr: expr '&' expr  */
#line 205 "parser.y"
                    { printf("PARSER found expr - expr && expr\n"); }
#line 1604 "parser.tab.c"
    break;

  case 70: /* expr: expr '|' expr  */
#line 206 "parser.y"
                    { printf("PARSER found expr - expr | expr\n"); }
#line 1610 "parser.tab.c"
    break;

  case 71: /* expr: func_call  */
#line 207 "parser.y"
                { printf("PARSER found expr - func_call\n"); }
#line 1616 "parser.tab.c"
    break;

  case 72: /* expr: if_else_stmt  */
#line 208 "parser.y"
                   { printf("PARSER found expr - if_else_stmt\n"); }
#line 1622 "parser.tab.c"
    break;

  case 73: /* expr: for_stmt  */
#line 209 "parser.y"
               { printf("PARSER found expr - for_stmt\n"); }
#line 1628 "parser.tab.c"
    break;

  case 74: /* expr: match  */
#line 210 "parser.y"
            { printf("PARSER found expr - match\n"); }
#line 1634 "parser.tab.c"
    break;

  case 75: /* num_const: NUM_10  */
#line 216 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 1640 "parser.tab.c"
    break;

  case 76: /* num_const: NUM_16  */
#line 217 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 1646 "parser.tab.c"
    break;

  case 77: /* num_const: REAL_NUMBER  */
#line 218 "parser.y"
                  { printf("PARSER found - REAL\n"); }
#line 1652 "parser.tab.c"
    break;

  case 78: /* num_const: REAL_NUMBER_EXPONENT  */
#line 219 "parser.y"
                           { printf("PARSER found - REAL_EXP\n"); }
#line 1658 "parser.tab.c"
    break;

  case 89: /* func_call: IDENTIFIER '(' ')'  */
#line 240 "parser.y"
                         { printf("Function call: NO PARAMS\n"); }
#line 1664 "parser.tab.c"
    break;

  case 90: /* func_call: IDENTIFIER '(' expr_list ')'  */
#line 241 "parser.y"
                                   { printf("Function call: WITH PARAMS\n"); }
#line 1670 "parser.tab.c"
    break;

  case 91: /* array: ARRAY '(' expr_list_e ')'  */
#line 262 "parser.y"
                                { printf("PARSER found Array\n"); }
#line 1676 "parser.tab.c"
    break;

  case 92: /* list: LIST '(' expr_list_e ')'  */
#line 268 "parser.y"
                               { printf("PARSER found List\n"); }
#line 1682 "parser.tab.c"
    break;

  case 93: /* vector: VECTOR '(' expr_list_e ')'  */
#line 274 "parser.y"
                                 { printf("PARSER found Vector\n"); }
#line 1688 "parser.tab.c"
    break;

  case 94: /* set: SET '(' expr_list_e ')'  */
#line 280 "parser.y"
                              { printf("PARSER found Set\n"); }
#line 1694 "parser.tab.c"
    break;


#line 1698 "parser.tab.c"

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

#line 285 "parser.y"

