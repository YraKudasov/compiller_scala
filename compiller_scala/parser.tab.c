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
    VAR = 266,                     /* VAR  */
    ELSE = 267,                    /* ELSE  */
    IF = 268,                      /* IF  */
    ELSE_IF = 269,                 /* ELSE_IF  */
    FOR = 270,                     /* FOR  */
    DO = 271,                      /* DO  */
    WHILE = 272,                   /* WHILE  */
    MATCH = 273,                   /* MATCH  */
    CASE = 274,                    /* CASE  */
    KW_TRUE = 275,                 /* KW_TRUE  */
    KW_FALSE = 276,                /* KW_FALSE  */
    KW_NULL = 277,                 /* KW_NULL  */
    EQ = 278,                      /* EQ  */
    NEQ = 279,                     /* NEQ  */
    MORE_OR_EQUAL_OPERATOR = 280,  /* MORE_OR_EQUAL_OPERATOR  */
    LESS_OR_EQUAL_OPERATOR = 281,  /* LESS_OR_EQUAL_OPERATOR  */
    INT_KW = 282,                  /* INT_KW  */
    DOUBLE_KW = 283,               /* DOUBLE_KW  */
    STRING_KW = 284,               /* STRING_KW  */
    CHAR_KW = 285,                 /* CHAR_KW  */
    BOOLEAN_KW = 286,              /* BOOLEAN_KW  */
    ANY_KW = 287,                  /* ANY_KW  */
    TO = 288,                      /* TO  */
    BY = 289,                      /* BY  */
    GENERATOR_OPERATOR = 290,      /* GENERATOR_OPERATOR  */
    RIGHT_ARROW_OPERATOR = 291,    /* RIGHT_ARROW_OPERATOR  */
    ID_COLLECTION = 292,           /* ID_COLLECTION  */
    ARRAY = 293,                   /* ARRAY  */
    LIST = 294,                    /* LIST  */
    VECTOR = 295,                  /* VECTOR  */
    SET = 296                      /* SET  */
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

#line 176 "parser.tab.c"

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
  YYSYMBOL_VAR = 25,                       /* VAR  */
  YYSYMBOL_ELSE = 26,                      /* ELSE  */
  YYSYMBOL_IF = 27,                        /* IF  */
  YYSYMBOL_ELSE_IF = 28,                   /* ELSE_IF  */
  YYSYMBOL_FOR = 29,                       /* FOR  */
  YYSYMBOL_DO = 30,                        /* DO  */
  YYSYMBOL_WHILE = 31,                     /* WHILE  */
  YYSYMBOL_MATCH = 32,                     /* MATCH  */
  YYSYMBOL_CASE = 33,                      /* CASE  */
  YYSYMBOL_KW_TRUE = 34,                   /* KW_TRUE  */
  YYSYMBOL_KW_FALSE = 35,                  /* KW_FALSE  */
  YYSYMBOL_KW_NULL = 36,                   /* KW_NULL  */
  YYSYMBOL_EQ = 37,                        /* EQ  */
  YYSYMBOL_NEQ = 38,                       /* NEQ  */
  YYSYMBOL_MORE_OR_EQUAL_OPERATOR = 39,    /* MORE_OR_EQUAL_OPERATOR  */
  YYSYMBOL_LESS_OR_EQUAL_OPERATOR = 40,    /* LESS_OR_EQUAL_OPERATOR  */
  YYSYMBOL_INT_KW = 41,                    /* INT_KW  */
  YYSYMBOL_DOUBLE_KW = 42,                 /* DOUBLE_KW  */
  YYSYMBOL_STRING_KW = 43,                 /* STRING_KW  */
  YYSYMBOL_CHAR_KW = 44,                   /* CHAR_KW  */
  YYSYMBOL_BOOLEAN_KW = 45,                /* BOOLEAN_KW  */
  YYSYMBOL_ANY_KW = 46,                    /* ANY_KW  */
  YYSYMBOL_TO = 47,                        /* TO  */
  YYSYMBOL_BY = 48,                        /* BY  */
  YYSYMBOL_GENERATOR_OPERATOR = 49,        /* GENERATOR_OPERATOR  */
  YYSYMBOL_RIGHT_ARROW_OPERATOR = 50,      /* RIGHT_ARROW_OPERATOR  */
  YYSYMBOL_ID_COLLECTION = 51,             /* ID_COLLECTION  */
  YYSYMBOL_ARRAY = 52,                     /* ARRAY  */
  YYSYMBOL_LIST = 53,                      /* LIST  */
  YYSYMBOL_VECTOR = 54,                    /* VECTOR  */
  YYSYMBOL_SET = 55,                       /* SET  */
  YYSYMBOL_56_ = 56,                       /* ';'  */
  YYSYMBOL_57_ = 57,                       /* '{'  */
  YYSYMBOL_58_ = 58,                       /* '}'  */
  YYSYMBOL_59_ = 59,                       /* ','  */
  YYSYMBOL_YYACCEPT = 60,                  /* $accept  */
  YYSYMBOL_program = 61,                   /* program  */
  YYSYMBOL_statement_list = 62,            /* statement_list  */
  YYSYMBOL_statement_list_e = 63,          /* statement_list_e  */
  YYSYMBOL_statement = 64,                 /* statement  */
  YYSYMBOL_if_else_stmt = 65,              /* if_else_stmt  */
  YYSYMBOL_else_stmt = 66,                 /* else_stmt  */
  YYSYMBOL_if_condition_list = 67,         /* if_condition_list  */
  YYSYMBOL_for_stmt = 68,                  /* for_stmt  */
  YYSYMBOL_for_base_params = 69,           /* for_base_params  */
  YYSYMBOL_for_params = 70,                /* for_params  */
  YYSYMBOL_for_multy_list = 71,            /* for_multy_list  */
  YYSYMBOL_while_stmt = 72,                /* while_stmt  */
  YYSYMBOL_do_while_stmt = 73,             /* do_while_stmt  */
  YYSYMBOL_match = 74,                     /* match  */
  YYSYMBOL_case = 75,                      /* case  */
  YYSYMBOL_case_condition = 76,            /* case_condition  */
  YYSYMBOL_int_literal_list_case = 77,     /* int_literal_list_case  */
  YYSYMBOL_case_list = 78,                 /* case_list  */
  YYSYMBOL_expr_list = 79,                 /* expr_list  */
  YYSYMBOL_expr = 80,                      /* expr  */
  YYSYMBOL_int_literal = 81,               /* int_literal  */
  YYSYMBOL_real_literal = 82,              /* real_literal  */
  YYSYMBOL_const = 83,                     /* const  */
  YYSYMBOL_func_call = 84,                 /* func_call  */
  YYSYMBOL_massive_list = 85,              /* massive_list  */
  YYSYMBOL_massive_list_e = 86,            /* massive_list_e  */
  YYSYMBOL_array = 87,                     /* array  */
  YYSYMBOL_list = 88,                      /* list  */
  YYSYMBOL_vector = 89,                    /* vector  */
  YYSYMBOL_set = 90                        /* set  */
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
#define YYFINAL  52
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   569

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  195

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   296


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
      13,    14,    10,     8,    59,     9,     2,    11,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    56,
       7,     3,     6,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    15,     2,    16,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,     4,    58,     2,     2,     2,     2,
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
      49,    50,    51,    52,    53,    54,    55
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    58,    58,    65,    66,    67,    71,    72,    76,    77,
      78,    79,    80,    81,    82,    83,    90,    94,    99,   100,
     106,   107,   108,   113,   114,   115,   119,   120,   126,   127,
     133,   137,   141,   142,   146,   147,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   163,   164,   168,   169,   182,
     183,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   213,   214,   219,   220,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   241,   242,   261,   265,
     266,   272,   278,   284,   290
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
  "IDENTIFIER", "CONST_CHAR", "CONST_STRING", "VAL", "VAR", "ELSE", "IF",
  "ELSE_IF", "FOR", "DO", "WHILE", "MATCH", "CASE", "KW_TRUE", "KW_FALSE",
  "KW_NULL", "EQ", "NEQ", "MORE_OR_EQUAL_OPERATOR",
  "LESS_OR_EQUAL_OPERATOR", "INT_KW", "DOUBLE_KW", "STRING_KW", "CHAR_KW",
  "BOOLEAN_KW", "ANY_KW", "TO", "BY", "GENERATOR_OPERATOR",
  "RIGHT_ARROW_OPERATOR", "ID_COLLECTION", "ARRAY", "LIST", "VECTOR",
  "SET", "';'", "'{'", "'}'", "','", "$accept", "program",
  "statement_list", "statement_list_e", "statement", "if_else_stmt",
  "else_stmt", "if_condition_list", "for_stmt", "for_base_params",
  "for_params", "for_multy_list", "while_stmt", "do_while_stmt", "match",
  "case", "case_condition", "int_literal_list_case", "case_list",
  "expr_list", "expr", "int_literal", "real_literal", "const", "func_call",
  "massive_list", "massive_list_e", "array", "list", "vector", "set", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-100)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-27)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     106,     4,     7,    18,   321,    -9,     1,    74,   106,    85,
     487,  -100,  -100,  -100,  -100,  -100,  -100,   321,    98,   100,
     321,  -100,  -100,  -100,  -100,    13,  -100,  -100,  -100,  -100,
    -100,   101,   103,   105,   107,  -100,  -100,  -100,   223,    81,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,   104,   104,   106,
     321,    76,  -100,   106,  -100,    72,   321,   321,   430,   255,
      75,   321,   321,   321,   321,   321,   321,   321,   321,   321,
     321,   321,   321,   321,   321,   321,   321,   321,   115,    87,
      99,  -100,   133,   122,   124,   -18,     6,   449,  -100,  -100,
    -100,    84,   293,  -100,  -100,   -12,   486,   121,    96,  -100,
     142,   144,   147,   157,   522,   529,   186,   186,    45,    45,
    -100,  -100,  -100,    60,    60,   186,   186,   106,  -100,   121,
      -8,   116,   321,   -14,   123,   118,  -100,   145,   126,  -100,
    -100,  -100,   321,   125,  -100,   -17,  -100,  -100,  -100,  -100,
    -100,    -4,   131,   137,  -100,   106,   486,   321,   128,   -11,
     106,   175,   106,   486,   164,   173,   177,   152,    56,   111,
    -100,  -100,  -100,   190,   187,   337,   486,   106,   356,   321,
     375,   321,   321,   321,    -6,  -100,  -100,   321,   160,  -100,
    -100,   394,  -100,   467,  -100,   486,   486,   486,  -100,   487,
     486,   193,  -100,  -100,  -100
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       7,     0,     0,     0,     0,     0,     0,     0,     7,     0,
       6,     2,     3,    11,    12,    13,    14,     0,     0,     0,
       0,    71,    72,    73,    74,    52,    78,    77,    79,    80,
      81,     0,     0,     0,     0,    68,    69,    70,     0,    75,
      76,    51,    67,    82,    83,    84,    85,     0,     0,     0,
       0,     0,     1,     0,     4,     0,     0,     0,     0,     0,
       0,    90,    90,    90,    90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    28,     0,     0,     0,     0,    15,     5,
       8,     0,     0,    53,    86,     0,    49,     0,    88,    89,
       0,     0,     0,     0,    66,    65,    54,    55,    60,    61,
      63,    62,    64,    58,    59,    56,    57,     0,    16,     0,
       0,     0,     0,     0,     0,     0,    29,     0,     0,     9,
      10,    87,     0,     0,    47,     0,    91,    92,    93,    94,
      17,     0,     0,     0,    27,     0,    18,     0,     0,     0,
       0,     0,     0,    50,    38,    40,    41,     0,    44,    36,
      32,    48,    33,     0,     0,     0,    19,     0,     0,     0,
       0,     0,     0,     0,     0,    46,    45,     0,    23,    25,
      20,     0,    21,     0,    30,    39,    42,    43,    35,    34,
      37,     0,    22,    31,    24
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -100,  -100,   -48,   204,    22,     0,  -100,  -100,    12,   -43,
     165,  -100,  -100,  -100,  -100,   -89,  -100,  -100,   117,   178,
     149,   -99,  -100,  -100,  -100,  -100,    43,  -100,  -100,  -100,
    -100
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     9,    10,    11,    12,    35,   118,   123,    36,    81,
      82,    85,    15,    16,    37,   134,   157,   158,   135,    98,
      96,    39,    40,    41,    42,    99,   100,    43,    44,    45,
      46
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    86,   131,   124,    47,    83,   142,    17,    13,   142,
      13,   143,    14,   147,   143,     1,   133,   188,     2,     3,
      14,     4,    14,     5,     6,     7,    59,     1,    18,   133,
       2,     3,    54,     4,   159,     5,     6,     7,    13,    19,
     125,   160,   126,   144,   148,    60,   161,   132,    48,    13,
      14,     8,   161,    13,   162,    71,    72,    73,    49,   175,
      78,    14,    53,     8,   127,    14,    67,    68,    69,    70,
      71,    72,    73,    21,    22,    89,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    52,    13,    50,    65,    66,
      67,    68,    69,    70,    71,    72,    73,   165,    14,    76,
      77,    56,   168,    57,   170,   101,   102,   103,    54,    74,
      75,    76,    77,    79,    61,   176,    62,    13,    63,   181,
      64,    74,    75,    76,    77,    80,   189,     1,    90,    14,
       2,     3,    97,     4,    88,     5,     6,     7,   177,   140,
     129,   117,    21,    22,   119,    13,   154,   121,   120,   -26,
      13,   122,    13,    38,   133,   132,   136,    14,   137,   155,
     156,   138,    14,     8,    14,    13,    55,    13,    13,    58,
      13,   139,   149,   145,    13,   150,   151,    14,   163,    14,
      14,    13,    14,   152,   164,   167,    14,    54,   169,    13,
      54,   171,    54,    14,    69,    70,    71,    72,    73,    87,
     172,    14,   174,    54,   173,    91,    92,   178,   191,   179,
     194,    54,    51,    84,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    65,    66,    67,
      68,    69,    70,    71,    72,    73,   141,    95,     0,     0,
       0,     0,     0,     0,     1,     0,     0,     2,     3,     0,
       4,     0,     5,     6,     7,     0,     0,     0,     0,     0,
      74,    75,    76,    77,     0,     0,     0,     0,    20,    94,
       0,   146,    21,    22,    23,    24,    25,    26,    27,     0,
       8,   153,     4,     0,     5,     0,     0,     0,     0,    28,
      29,    30,     0,     0,     0,     0,   166,    65,    66,    67,
      68,    69,    70,    71,    72,    73,     0,    31,    32,    33,
      34,     0,     0,     0,     0,     0,     0,     0,   183,     0,
     185,   186,   187,     0,     0,     0,   190,     0,     0,     0,
      74,    75,    76,    77,    20,     0,     0,     0,    21,    22,
      23,    24,    25,    26,    27,     0,     0,     0,     4,   130,
       5,     0,     0,     0,     0,    28,    29,    30,     1,     0,
       0,     2,     3,     0,     4,     0,     5,     6,     7,     0,
       0,     0,     0,    31,    32,    33,    34,     1,     0,     0,
       2,     3,     0,     4,     0,     5,     6,     7,     0,     0,
       0,     0,     0,    53,     8,   180,     1,     0,     0,     2,
       3,     0,     4,     0,     5,     6,     7,     0,     0,     0,
       0,     0,    53,     8,   182,     1,     0,     0,     2,     3,
       0,     4,     0,     5,     6,     7,     0,     0,     0,     0,
       0,    53,     8,   184,    65,    66,    67,    68,    69,    70,
      71,    72,    73,     0,    93,     0,     0,     0,     0,     0,
      53,     8,   192,    65,    66,    67,    68,    69,    70,    71,
      72,    73,     0,   128,     0,     0,     0,    74,    75,    76,
      77,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       0,   193,     0,     0,     0,     0,    74,    75,    76,    77,
      65,    66,    67,    68,    69,    70,    71,    72,    73,     0,
       0,     0,     0,     0,    74,    75,    76,    77,     1,     0,
       0,     2,     3,     0,     4,     0,     5,     6,     7,     0,
       0,     0,     0,    74,    75,    76,    77,    66,    67,    68,
      69,    70,    71,    72,    73,    67,    68,    69,    70,    71,
      72,    73,     0,    53,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
      75,    76,    77,     0,     0,     0,    74,    75,    76,    77
};

static const yytype_int16 yycheck[] =
{
       0,    49,    14,    21,    13,    48,    17,     3,     8,    17,
      10,    22,     0,    27,    22,    21,    33,    23,    24,    25,
       8,    27,    10,    29,    30,    31,    13,    21,    21,    33,
      24,    25,    10,    27,   133,    29,    30,    31,    38,    21,
      58,    58,    85,    51,    58,    32,   135,    59,    57,    49,
      38,    57,   141,    53,    58,    10,    11,    12,    57,   158,
      38,    49,    56,    57,    58,    53,     6,     7,     8,     9,
      10,    11,    12,    17,    18,    53,     4,     5,     6,     7,
       8,     9,    10,    11,    12,     0,    86,    13,     4,     5,
       6,     7,     8,     9,    10,    11,    12,   145,    86,    39,
      40,     3,   150,     3,   152,    62,    63,    64,    86,    37,
      38,    39,    40,    32,    13,     4,    13,   117,    13,   167,
      13,    37,    38,    39,    40,    21,   174,    21,    56,   117,
      24,    25,    57,    27,    58,    29,    30,    31,    27,   117,
      56,    26,    17,    18,    57,   145,    21,    14,    49,    27,
     150,    27,   152,     4,    33,    59,    14,   145,    14,    34,
      35,    14,   150,    57,   152,   165,    17,   167,   168,    20,
     170,    14,    49,    57,   174,    57,    31,   165,    47,   167,
     168,   181,   170,    57,    47,    57,   174,   165,    13,   189,
     168,    27,   170,   181,     8,     9,    10,    11,    12,    50,
      27,   189,    50,   181,    27,    56,    57,    17,    48,    22,
      17,   189,     8,    48,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   119,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,
      27,    -1,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    39,    40,    -1,    -1,    -1,    -1,    13,    14,
      -1,   122,    17,    18,    19,    20,    21,    22,    23,    -1,
      57,   132,    27,    -1,    29,    -1,    -1,    -1,    -1,    34,
      35,    36,    -1,    -1,    -1,    -1,   147,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,
     171,   172,   173,    -1,    -1,    -1,   177,    -1,    -1,    -1,
      37,    38,    39,    40,    13,    -1,    -1,    -1,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    27,    56,
      29,    -1,    -1,    -1,    -1,    34,    35,    36,    21,    -1,
      -1,    24,    25,    -1,    27,    -1,    29,    30,    31,    -1,
      -1,    -1,    -1,    52,    53,    54,    55,    21,    -1,    -1,
      24,    25,    -1,    27,    -1,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,    56,    57,    58,    21,    -1,    -1,    24,
      25,    -1,    27,    -1,    29,    30,    31,    -1,    -1,    -1,
      -1,    -1,    56,    57,    58,    21,    -1,    -1,    24,    25,
      -1,    27,    -1,    29,    30,    31,    -1,    -1,    -1,    -1,
      -1,    56,    57,    58,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,
      56,    57,    58,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    -1,    14,    -1,    -1,    -1,    37,    38,    39,
      40,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    14,    -1,    -1,    -1,    -1,    37,    38,    39,    40,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    37,    38,    39,    40,    21,    -1,
      -1,    24,    25,    -1,    27,    -1,    29,    30,    31,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,     5,     6,     7,
       8,     9,    10,    11,    12,     6,     7,     8,     9,    10,
      11,    12,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    -1,    -1,    -1,    37,    38,    39,    40
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    21,    24,    25,    27,    29,    30,    31,    57,    61,
      62,    63,    64,    65,    68,    72,    73,     3,    21,    21,
      13,    17,    18,    19,    20,    21,    22,    23,    34,    35,
      36,    52,    53,    54,    55,    65,    68,    74,    80,    81,
      82,    83,    84,    87,    88,    89,    90,    13,    57,    57,
      13,    63,     0,    56,    64,    80,     3,     3,    80,    13,
      32,    13,    13,    13,    13,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    37,    38,    39,    40,    64,    32,
      21,    69,    70,    69,    70,    71,    62,    80,    58,    64,
      56,    80,    80,    14,    14,    79,    80,    57,    79,    85,
      86,    86,    86,    86,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    26,    66,    57,
      49,    14,    27,    67,    21,    58,    69,    58,    14,    56,
      56,    14,    59,    33,    75,    78,    14,    14,    14,    14,
      64,    78,    17,    22,    51,    57,    80,    27,    58,    49,
      57,    31,    57,    80,    21,    34,    35,    76,    77,    81,
      58,    75,    58,    47,    47,    62,    80,    57,    62,    13,
      62,    27,    27,    27,    50,    81,     4,    27,    17,    22,
      58,    62,    58,    80,    58,    80,    80,    80,    23,    62,
      80,    48,    58,    14,    17
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    61,    62,    62,    62,    63,    63,    64,    64,
      64,    64,    64,    64,    64,    64,    65,    66,    67,    67,
      68,    68,    68,    69,    69,    69,    70,    70,    71,    71,
      72,    73,    74,    74,    75,    75,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    77,    77,    78,    78,    79,
      79,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    81,    81,    82,    82,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    84,    84,    85,    86,
      86,    87,    88,    89,    90
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     3,     1,     0,     4,     5,
       5,     1,     1,     1,     1,     3,     4,     2,     2,     3,
       7,     7,     8,     5,     7,     5,     1,     3,     1,     2,
       7,     8,     5,     5,     4,     4,     1,     3,     1,     3,
       1,     1,     3,     3,     1,     2,     2,     1,     2,     1,
       3,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     1,     1,
       0,     4,     4,     4,     4
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
  case 7: /* statement_list_e: %empty  */
#line 72 "parser.y"
                     { printf("PARSER found statement_list_e - nothing\n"); }
#line 1451 "parser.tab.c"
    break;

  case 8: /* statement: IDENTIFIER '=' expr ';'  */
#line 76 "parser.y"
                              { printf("Assignment:\n"); }
#line 1457 "parser.tab.c"
    break;

  case 9: /* statement: VAL IDENTIFIER '=' expr ';'  */
#line 77 "parser.y"
                                  { printf("Value declaration:\n"); }
#line 1463 "parser.tab.c"
    break;

  case 10: /* statement: VAR IDENTIFIER '=' expr ';'  */
#line 78 "parser.y"
                                  { printf("Variable declaration:\n"); }
#line 1469 "parser.tab.c"
    break;

  case 11: /* statement: if_else_stmt  */
#line 79 "parser.y"
                   { printf("IF_ELSE construction:\n"); }
#line 1475 "parser.tab.c"
    break;

  case 12: /* statement: for_stmt  */
#line 80 "parser.y"
               { printf("FOR_STMT construction:\n"); }
#line 1481 "parser.tab.c"
    break;

  case 13: /* statement: while_stmt  */
#line 81 "parser.y"
                 { printf("WHILE_STMT construction:\n"); }
#line 1487 "parser.tab.c"
    break;

  case 14: /* statement: do_while_stmt  */
#line 82 "parser.y"
                    { printf("DO_WHILE_STMT construction:\n"); }
#line 1493 "parser.tab.c"
    break;

  case 20: /* for_stmt: FOR '(' for_params ')' '{' statement_list '}'  */
#line 106 "parser.y"
                                                        { printf("FOR LOOP\n"); }
#line 1499 "parser.tab.c"
    break;

  case 21: /* for_stmt: FOR '{' for_multy_list '}' '{' statement_list '}'  */
#line 107 "parser.y"
                                                          { printf("FOR MULTY LOOP\n"); }
#line 1505 "parser.tab.c"
    break;

  case 22: /* for_stmt: FOR '{' for_params if_condition_list '}' '{' statement_list '}'  */
#line 108 "parser.y"
                                                                          { printf("FOR LOOP: multy with IF_STMT\n"); }
#line 1511 "parser.tab.c"
    break;

  case 49: /* expr_list: expr  */
#line 182 "parser.y"
                      { printf("PARSER found expr_list - expr\n"); }
#line 1517 "parser.tab.c"
    break;

  case 50: /* expr_list: expr_list ',' expr  */
#line 183 "parser.y"
                          { printf("PARSER found expr_list - expr_list\n"); }
#line 1523 "parser.tab.c"
    break;

  case 51: /* expr: const  */
#line 188 "parser.y"
            {printf("PARSER found expr - const\n"); }
#line 1529 "parser.tab.c"
    break;

  case 52: /* expr: IDENTIFIER  */
#line 189 "parser.y"
                 {printf("PARSER found expr - IDENTIFIER\n"); }
#line 1535 "parser.tab.c"
    break;

  case 53: /* expr: '(' expr ')'  */
#line 190 "parser.y"
                   {printf("PARSER found expr - ( expr )\n"); }
#line 1541 "parser.tab.c"
    break;

  case 54: /* expr: expr '>' expr  */
#line 191 "parser.y"
                    {printf("PARSER found expr - expr > expr\n"); }
#line 1547 "parser.tab.c"
    break;

  case 55: /* expr: expr '<' expr  */
#line 192 "parser.y"
                    {printf("PARSER found expr - expr < expr\n"); }
#line 1553 "parser.tab.c"
    break;

  case 56: /* expr: expr MORE_OR_EQUAL_OPERATOR expr  */
#line 193 "parser.y"
                                       {printf("PARSER found expr - expr >= expr\n"); }
#line 1559 "parser.tab.c"
    break;

  case 57: /* expr: expr LESS_OR_EQUAL_OPERATOR expr  */
#line 194 "parser.y"
                                       {printf("PARSER found expr - expr <= expr\n"); }
#line 1565 "parser.tab.c"
    break;

  case 58: /* expr: expr EQ expr  */
#line 195 "parser.y"
                   {printf("PARSER found expr - expr == expr\n"); }
#line 1571 "parser.tab.c"
    break;

  case 59: /* expr: expr NEQ expr  */
#line 196 "parser.y"
                    {printf("PARSER found expr - expr != expr\n"); }
#line 1577 "parser.tab.c"
    break;

  case 60: /* expr: expr '+' expr  */
#line 197 "parser.y"
                    { printf("PARSER found expr - expr + expr\n"); }
#line 1583 "parser.tab.c"
    break;

  case 61: /* expr: expr '-' expr  */
#line 198 "parser.y"
                    { printf("PARSER found expr - expr - expr\n"); }
#line 1589 "parser.tab.c"
    break;

  case 62: /* expr: expr '/' expr  */
#line 199 "parser.y"
                    { printf("PARSER found expr - expr / expr\n"); }
#line 1595 "parser.tab.c"
    break;

  case 63: /* expr: expr '*' expr  */
#line 200 "parser.y"
                    { printf("PARSER found expr - expr * expr\n"); }
#line 1601 "parser.tab.c"
    break;

  case 64: /* expr: expr '%' expr  */
#line 201 "parser.y"
                    { printf("PARSER found expr - expr % expr\n"); }
#line 1607 "parser.tab.c"
    break;

  case 65: /* expr: expr '&' expr  */
#line 202 "parser.y"
                    { printf("PARSER found expr - expr && expr\n"); }
#line 1613 "parser.tab.c"
    break;

  case 66: /* expr: expr '|' expr  */
#line 203 "parser.y"
                    { printf("PARSER found expr - expr | expr\n"); }
#line 1619 "parser.tab.c"
    break;

  case 67: /* expr: func_call  */
#line 204 "parser.y"
                { printf("PARSER found expr - func_call\n"); }
#line 1625 "parser.tab.c"
    break;

  case 68: /* expr: if_else_stmt  */
#line 205 "parser.y"
                   { printf("PARSER found expr - if_else_stmt\n"); }
#line 1631 "parser.tab.c"
    break;

  case 69: /* expr: for_stmt  */
#line 206 "parser.y"
               { printf("PARSER found expr - for_stmt\n"); }
#line 1637 "parser.tab.c"
    break;

  case 70: /* expr: match  */
#line 207 "parser.y"
            { printf("PARSER found expr - match\n"); }
#line 1643 "parser.tab.c"
    break;

  case 71: /* int_literal: NUM_10  */
#line 213 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 1649 "parser.tab.c"
    break;

  case 72: /* int_literal: NUM_16  */
#line 214 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 1655 "parser.tab.c"
    break;

  case 73: /* real_literal: REAL_NUMBER  */
#line 219 "parser.y"
                  { printf("PARSER found - REAL\n"); }
#line 1661 "parser.tab.c"
    break;

  case 74: /* real_literal: REAL_NUMBER_EXPONENT  */
#line 220 "parser.y"
                           { printf("PARSER found - REAL_EXP\n"); }
#line 1667 "parser.tab.c"
    break;

  case 86: /* func_call: IDENTIFIER '(' ')'  */
#line 241 "parser.y"
                         { printf("Function call: NO PARAMS\n"); }
#line 1673 "parser.tab.c"
    break;

  case 87: /* func_call: IDENTIFIER '(' expr_list ')'  */
#line 242 "parser.y"
                                   { printf("Function call: WITH PARAMS\n"); }
#line 1679 "parser.tab.c"
    break;

  case 91: /* array: ARRAY '(' massive_list_e ')'  */
#line 272 "parser.y"
                                   { printf("PARSER found Array\n"); }
#line 1685 "parser.tab.c"
    break;

  case 92: /* list: LIST '(' massive_list_e ')'  */
#line 278 "parser.y"
                                  { printf("PARSER found List\n"); }
#line 1691 "parser.tab.c"
    break;

  case 93: /* vector: VECTOR '(' massive_list_e ')'  */
#line 284 "parser.y"
                                    { printf("PARSER found Vector\n"); }
#line 1697 "parser.tab.c"
    break;

  case 94: /* set: SET '(' massive_list_e ')'  */
#line 290 "parser.y"
                                 { printf("PARSER found Set\n"); }
#line 1703 "parser.tab.c"
    break;


#line 1707 "parser.tab.c"

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

#line 295 "parser.y"

