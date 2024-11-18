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
  YYSYMBOL_NUM_10 = 13,                    /* NUM_10  */
  YYSYMBOL_NUM_16 = 14,                    /* NUM_16  */
  YYSYMBOL_REAL_NUMBER = 15,               /* REAL_NUMBER  */
  YYSYMBOL_REAL_NUMBER_EXPONENT = 16,      /* REAL_NUMBER_EXPONENT  */
  YYSYMBOL_IDENTIFIER = 17,                /* IDENTIFIER  */
  YYSYMBOL_CONST_CHAR = 18,                /* CONST_CHAR  */
  YYSYMBOL_CONST_STRING = 19,              /* CONST_STRING  */
  YYSYMBOL_VAL = 20,                       /* VAL  */
  YYSYMBOL_ELSE = 21,                      /* ELSE  */
  YYSYMBOL_IF = 22,                        /* IF  */
  YYSYMBOL_ELSE_IF = 23,                   /* ELSE_IF  */
  YYSYMBOL_FOR = 24,                       /* FOR  */
  YYSYMBOL_DO = 25,                        /* DO  */
  YYSYMBOL_WHILE = 26,                     /* WHILE  */
  YYSYMBOL_MATCH = 27,                     /* MATCH  */
  YYSYMBOL_CASE = 28,                      /* CASE  */
  YYSYMBOL_KW_TRUE = 29,                   /* KW_TRUE  */
  YYSYMBOL_KW_FALSE = 30,                  /* KW_FALSE  */
  YYSYMBOL_KW_NULL = 31,                   /* KW_NULL  */
  YYSYMBOL_EQ = 32,                        /* EQ  */
  YYSYMBOL_NEQ = 33,                       /* NEQ  */
  YYSYMBOL_MORE_OR_EQUAL_OPERATOR = 34,    /* MORE_OR_EQUAL_OPERATOR  */
  YYSYMBOL_LESS_OR_EQUAL_OPERATOR = 35,    /* LESS_OR_EQUAL_OPERATOR  */
  YYSYMBOL_INT_KW = 36,                    /* INT_KW  */
  YYSYMBOL_DOUBLE_KW = 37,                 /* DOUBLE_KW  */
  YYSYMBOL_STRING_KW = 38,                 /* STRING_KW  */
  YYSYMBOL_CHAR_KW = 39,                   /* CHAR_KW  */
  YYSYMBOL_BOOLEAN_KW = 40,                /* BOOLEAN_KW  */
  YYSYMBOL_ANY_KW = 41,                    /* ANY_KW  */
  YYSYMBOL_TO = 42,                        /* TO  */
  YYSYMBOL_BY = 43,                        /* BY  */
  YYSYMBOL_GENERATOR_OPERATOR = 44,        /* GENERATOR_OPERATOR  */
  YYSYMBOL_RIGHT_ARROW_OPERATOR = 45,      /* RIGHT_ARROW_OPERATOR  */
  YYSYMBOL_ID_COLLECTION = 46,             /* ID_COLLECTION  */
  YYSYMBOL_ARRAY = 47,                     /* ARRAY  */
  YYSYMBOL_LIST = 48,                      /* LIST  */
  YYSYMBOL_VECTOR = 49,                    /* VECTOR  */
  YYSYMBOL_SET = 50,                       /* SET  */
  YYSYMBOL_51_ = 51,                       /* ';'  */
  YYSYMBOL_52_ = 52,                       /* '('  */
  YYSYMBOL_53_ = 53,                       /* ')'  */
  YYSYMBOL_54_ = 54,                       /* '{'  */
  YYSYMBOL_55_ = 55,                       /* '}'  */
  YYSYMBOL_56_ = 56,                       /* ','  */
  YYSYMBOL_YYACCEPT = 57,                  /* $accept  */
  YYSYMBOL_program = 58,                   /* program  */
  YYSYMBOL_statement_list = 59,            /* statement_list  */
  YYSYMBOL_statement_list_e = 60,          /* statement_list_e  */
  YYSYMBOL_statement = 61,                 /* statement  */
  YYSYMBOL_if_else_stmt = 62,              /* if_else_stmt  */
  YYSYMBOL_if_stmt = 63,                   /* if_stmt  */
  YYSYMBOL_else_if_stmt = 64,              /* else_if_stmt  */
  YYSYMBOL_else_stmt = 65,                 /* else_stmt  */
  YYSYMBOL_if_condition = 66,              /* if_condition  */
  YYSYMBOL_if_condition_list = 67,         /* if_condition_list  */
  YYSYMBOL_for_stmt = 68,                  /* for_stmt  */
  YYSYMBOL_for_base_params = 69,           /* for_base_params  */
  YYSYMBOL_for_params = 70,                /* for_params  */
  YYSYMBOL_for_multy_list = 71,            /* for_multy_list  */
  YYSYMBOL_while_stmt = 72,                /* while_stmt  */
  YYSYMBOL_do_while_stmt = 73,             /* do_while_stmt  */
  YYSYMBOL_expr_list = 74,                 /* expr_list  */
  YYSYMBOL_expr = 75,                      /* expr  */
  YYSYMBOL_int_literal = 76,               /* int_literal  */
  YYSYMBOL_real_literal = 77,              /* real_literal  */
  YYSYMBOL_const = 78,                     /* const  */
  YYSYMBOL_func_call = 79,                 /* func_call  */
  YYSYMBOL_condition = 80,                 /* condition  */
  YYSYMBOL_array = 81,                     /* array  */
  YYSYMBOL_array_list = 82,                /* array_list  */
  YYSYMBOL_array_list_e = 83,              /* array_list_e  */
  YYSYMBOL_list = 84,                      /* list  */
  YYSYMBOL_list_list = 85,                 /* list_list  */
  YYSYMBOL_list_list_e = 86,               /* list_list_e  */
  YYSYMBOL_vector = 87,                    /* vector  */
  YYSYMBOL_vector_list = 88,               /* vector_list  */
  YYSYMBOL_vector_list_e = 89,             /* vector_list_e  */
  YYSYMBOL_set = 90,                       /* set  */
  YYSYMBOL_set_list = 91,                  /* set_list  */
  YYSYMBOL_set_list_e = 92                 /* set_list_e  */
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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   484

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  108
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  208

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
      52,    53,    10,     8,    56,     9,     2,    11,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    51,
       7,     3,     6,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,     4,    55,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    56,    56,    57,    58,    65,    66,    70,    71,    75,
      76,    77,    78,    79,    80,    86,    87,    88,    93,    94,
      95,   100,   101,   102,   103,   104,   109,   110,   111,   117,
     118,   122,   123,   129,   130,   131,   136,   137,   138,   142,
     143,   149,   150,   156,   160,   205,   206,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   233,   234,   239,   240,   245,   246,
     247,   248,   249,   250,   251,   257,   258,   264,   265,   266,
     267,   268,   269,   287,   288,   291,   292,   293,   297,   298,
     304,   305,   309,   310,   311,   315,   316,   322,   326,   327,
     328,   332,   333,   339,   343,   344,   345,   349,   350
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
  "'>'", "'<'", "'+'", "'-'", "'*'", "'/'", "'%'", "NUM_10", "NUM_16",
  "REAL_NUMBER", "REAL_NUMBER_EXPONENT", "IDENTIFIER", "CONST_CHAR",
  "CONST_STRING", "VAL", "ELSE", "IF", "ELSE_IF", "FOR", "DO", "WHILE",
  "MATCH", "CASE", "KW_TRUE", "KW_FALSE", "KW_NULL", "EQ", "NEQ",
  "MORE_OR_EQUAL_OPERATOR", "LESS_OR_EQUAL_OPERATOR", "INT_KW",
  "DOUBLE_KW", "STRING_KW", "CHAR_KW", "BOOLEAN_KW", "ANY_KW", "TO", "BY",
  "GENERATOR_OPERATOR", "RIGHT_ARROW_OPERATOR", "ID_COLLECTION", "ARRAY",
  "LIST", "VECTOR", "SET", "';'", "'('", "')'", "'{'", "'}'", "','",
  "$accept", "program", "statement_list", "statement_list_e", "statement",
  "if_else_stmt", "if_stmt", "else_if_stmt", "else_stmt", "if_condition",
  "if_condition_list", "for_stmt", "for_base_params", "for_params",
  "for_multy_list", "while_stmt", "do_while_stmt", "expr_list", "expr",
  "int_literal", "real_literal", "const", "func_call", "condition",
  "array", "array_list", "array_list_e", "list", "list_list",
  "list_list_e", "vector", "vector_list", "vector_list_e", "set",
  "set_list", "set_list_e", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-142)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-40)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -142,   161,  -142,     2,    33,     1,    47,     8,    13,   445,
    -142,  -142,  -142,    14,  -142,  -142,  -142,   251,    71,   251,
      62,    62,   445,   251,  -142,   110,    24,    63,  -142,  -142,
    -142,  -142,  -142,    28,  -142,  -142,  -142,  -142,  -142,    38,
      44,    52,    55,   251,  -142,    35,  -142,  -142,  -142,  -142,
    -142,  -142,  -142,  -142,  -142,   251,   400,    32,    64,  -142,
      56,    88,    99,     3,   228,  -142,    69,   445,  -142,   251,
    -142,   210,   251,   251,   251,   251,    22,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
    -142,   107,   359,     5,    70,   291,  -142,    16,    79,    72,
    -142,   111,    90,    26,    92,  -142,   -34,   400,    91,  -142,
    -142,    95,   101,  -142,  -142,   106,   104,  -142,  -142,   109,
     121,  -142,  -142,   113,  -142,   409,   419,   187,   187,    77,
      77,  -142,  -142,  -142,   449,   449,   187,   187,  -142,   445,
    -142,   125,   137,  -142,   445,   251,    27,   126,  -142,    59,
     445,   130,   445,  -142,   445,   370,  -142,   251,   251,  -142,
     251,  -142,   251,  -142,   251,  -142,    39,   150,   173,   306,
     139,   445,   325,   251,   338,   138,   445,   177,   400,  -142,
     400,  -142,  -142,  -142,  -142,   445,   159,  -142,  -142,  -142,
     348,  -142,   156,  -142,  -142,    51,  -142,   148,   217,  -142,
    -142,   177,   445,  -142,  -142,  -142,   176,  -142
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     1,     0,     0,     0,     0,     0,     0,     7,
       4,     3,    11,    15,    12,    13,    14,    84,     0,    84,
       0,     0,     0,    84,     6,     0,     0,     0,    17,    64,
      65,    66,    67,    48,    71,    70,    72,    73,    74,     0,
       0,     0,     0,    84,    59,     0,    68,    69,    47,    58,
      57,    60,    61,    62,    63,    84,     0,    57,     0,    39,
       0,    41,     0,     0,     0,     5,    57,     8,    26,    84,
      16,    84,    84,    84,    84,    84,     0,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
       9,     0,     0,     0,     0,    84,    31,     0,     0,     0,
      42,     0,     0,     0,    57,    75,     0,    45,    85,    60,
      88,     0,    92,    61,    95,     0,    98,    62,   101,     0,
     104,    63,   107,     0,    49,    56,    55,    77,    78,    50,
      51,    53,    52,    54,    81,    82,    79,    80,    10,     8,
      18,     0,     0,    40,     0,    84,    57,     0,    32,     0,
       0,     0,     0,    27,     8,     0,    76,    84,    84,    83,
      84,    90,    84,    97,    84,   103,     0,     0,     0,     0,
      57,     0,     0,    84,     0,     0,     8,    21,    46,    60,
      45,    94,   100,   106,    19,     8,    36,    38,    33,    29,
       0,    34,    57,    43,    28,     0,    23,     0,     0,    35,
      44,    22,     8,    20,    37,    24,     0,    25
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -142,  -142,   -19,   -56,     0,    -1,  -142,  -141,   206,   140,
    -142,  -142,    -4,   213,  -142,  -142,  -142,   -59,   133,  -142,
    -142,  -142,  -142,   -17,   -58,  -142,  -142,   -63,    75,  -142,
     -67,    74,  -142,   -71,    78,  -142
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     9,    10,    65,    44,    13,    27,    28,    96,
      97,    14,    59,    60,    63,    15,    16,   112,    56,    46,
      47,    48,    49,    50,    51,   110,   111,    52,   114,   115,
      53,   118,   119,    54,   122,   123
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      12,    11,    57,    64,   121,    17,    66,   117,    12,    24,
     113,   103,   106,   108,   109,   116,   120,    61,   141,   156,
      98,    12,   157,   142,    12,    68,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    25,   196,    26,    95,    77,
      78,    79,    80,    81,    82,    83,    84,    85,     5,   -30,
      18,   143,   104,    19,    86,    87,    88,    89,    99,   100,
     205,     5,    22,    12,    24,    23,    12,    86,    87,    88,
      89,   147,   141,     5,    55,   124,    69,   142,   146,    58,
      71,   153,   -30,   166,    25,    92,    90,    83,    84,    85,
      72,    12,   140,   121,   184,   117,    73,   113,   175,    20,
     179,    21,   154,   116,    74,   120,   201,    75,    93,    94,
     -39,    77,    78,    79,    80,    81,    82,    83,    84,    85,
     195,    95,   102,   149,   144,   169,   150,     3,   170,   197,
       4,   172,     5,   174,     6,     7,     8,   151,    12,    86,
      87,    88,    89,    12,   152,   155,   206,   158,   159,    12,
      45,    12,   190,    12,    12,   177,   192,   160,   138,   161,
     162,     2,   163,   186,    67,   185,   165,   167,    12,    24,
      12,    12,    24,    12,    24,    12,    76,   164,     3,   168,
     171,     4,   173,     5,    12,     6,     7,     8,    91,    12,
      24,   187,   189,   194,   202,    81,    82,    83,    84,    85,
      26,    12,   198,   203,   107,   107,   107,   107,   107,   200,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,    29,    30,    31,    32,    33,    34,    35,
     204,   207,     5,    70,    62,   181,   182,   148,     0,    36,
      37,    38,   183,     0,     0,     3,     0,     0,     4,     0,
       5,     0,     6,     7,     8,     0,     0,    39,    40,    41,
      42,     0,    43,   105,    29,    30,    31,    32,    33,    34,
      35,     0,     0,     5,     0,     0,     0,     0,    76,     0,
      36,    37,    38,   101,     0,     0,     0,     0,     0,     0,
     178,   178,     0,   180,     0,   180,     0,   180,    39,    40,
      41,    42,     0,    43,    29,    30,    31,    32,    33,    34,
      35,     0,     0,     5,     0,     0,     0,     0,     0,     0,
      36,    37,    38,     3,     0,     0,     4,     0,     5,     0,
       6,     7,     8,     0,     0,     0,     0,     0,    39,    40,
      41,    42,     3,   145,     0,     4,     0,     5,     0,     6,
       7,     8,     0,     0,     0,     3,     0,     0,     4,     0,
       5,   188,     6,     7,     8,     3,     0,     0,     4,     0,
       5,     0,     6,     7,     8,     0,     3,     0,     0,     4,
     191,     5,     0,     6,     7,     8,     0,     3,     0,     0,
       4,     0,     5,   193,     6,     7,     8,     0,     0,     0,
       0,     0,     0,   199,    77,    78,    79,    80,    81,    82,
      83,    84,    85,   139,    78,    79,    80,    81,    82,    83,
      84,    85,     0,     0,   176,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,     0,     0,     0,     0,
       0,    86,    87,    88,    89,     0,     0,     0,     0,     0,
       0,    86,    87,    88,    89,    79,    80,    81,    82,    83,
      84,    85,     3,     0,     0,     4,     0,     5,     0,     6,
       7,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,    89
};

static const yytype_int16 yycheck[] =
{
       1,     1,    19,    22,    75,     3,    23,    74,     9,     9,
      73,    67,    71,    72,    72,    74,    75,    21,    13,    53,
      17,    22,    56,    18,    25,    25,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    21,   177,    23,    22,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    22,    22,
      17,    46,    69,    52,    32,    33,    34,    35,    55,    63,
     201,    22,    54,    64,    64,    52,    67,    32,    33,    34,
      35,    55,    13,    22,     3,    53,    52,    18,    95,    17,
      52,    55,    55,   139,    21,    53,    51,    10,    11,    12,
      52,    92,    92,   164,    55,   162,    52,   160,   154,    52,
     158,    54,   103,   162,    52,   164,    55,    52,    44,    53,
      22,     4,     5,     6,     7,     8,     9,    10,    11,    12,
     176,    22,    53,    44,    54,   144,    54,    17,   145,   185,
      20,   150,    22,   152,    24,    25,    26,    26,   139,    32,
      33,    34,    35,   144,    54,    53,   202,    56,    53,   150,
      17,   152,   171,   154,   155,   155,   173,    56,    51,    53,
      56,     0,    53,    13,    54,   166,    53,    42,   169,   169,
     171,   172,   172,   174,   174,   176,    43,    56,    17,    42,
      54,    20,    52,    22,   185,    24,    25,    26,    55,   190,
     190,    18,    53,    55,   195,     8,     9,    10,    11,    12,
      23,   202,    43,    55,    71,    72,    73,    74,    75,    53,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    13,    14,    15,    16,    17,    18,    19,
      13,    55,    22,    27,    21,   160,   162,    97,    -1,    29,
      30,    31,   164,    -1,    -1,    17,    -1,    -1,    20,    -1,
      22,    -1,    24,    25,    26,    -1,    -1,    47,    48,    49,
      50,    -1,    52,    53,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    -1,    -1,    -1,    -1,   145,    -1,
      29,    30,    31,    55,    -1,    -1,    -1,    -1,    -1,    -1,
     157,   158,    -1,   160,    -1,   162,    -1,   164,    47,    48,
      49,    50,    -1,    52,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,    17,    -1,    -1,    20,    -1,    22,    -1,
      24,    25,    26,    -1,    -1,    -1,    -1,    -1,    47,    48,
      49,    50,    17,    52,    -1,    20,    -1,    22,    -1,    24,
      25,    26,    -1,    -1,    -1,    17,    -1,    -1,    20,    -1,
      22,    55,    24,    25,    26,    17,    -1,    -1,    20,    -1,
      22,    -1,    24,    25,    26,    -1,    17,    -1,    -1,    20,
      55,    22,    -1,    24,    25,    26,    -1,    17,    -1,    -1,
      20,    -1,    22,    55,    24,    25,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    55,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    54,     5,     6,     7,     8,     9,    10,
      11,    12,    -1,    -1,    54,     6,     7,     8,     9,    10,
      11,    12,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,     6,     7,     8,     9,    10,
      11,    12,    17,    -1,    -1,    20,    -1,    22,    -1,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    58,     0,    17,    20,    22,    24,    25,    26,    59,
      60,    61,    62,    63,    68,    72,    73,     3,    17,    52,
      52,    54,    54,    52,    61,    21,    23,    64,    65,    13,
      14,    15,    16,    17,    18,    19,    29,    30,    31,    47,
      48,    49,    50,    52,    62,    75,    76,    77,    78,    79,
      80,    81,    84,    87,    90,     3,    75,    80,    17,    69,
      70,    69,    70,    71,    59,    61,    80,    54,    61,    52,
      65,    52,    52,    52,    52,    52,    75,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    32,    33,    34,    35,
      51,    75,    53,    44,    53,    22,    66,    67,    17,    55,
      69,    55,    53,    60,    80,    53,    74,    75,    74,    81,
      82,    83,    74,    84,    85,    86,    74,    87,    88,    89,
      74,    90,    91,    92,    53,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    51,    54,
      61,    13,    18,    46,    54,    52,    80,    55,    66,    44,
      54,    26,    54,    55,    62,    53,    53,    56,    56,    53,
      56,    53,    56,    53,    56,    53,    60,    42,    42,    59,
      80,    54,    59,    52,    59,    60,    54,    61,    75,    81,
      75,    85,    88,    91,    55,    62,    13,    18,    55,    53,
      59,    55,    80,    55,    55,    60,    64,    60,    43,    55,
      53,    55,    62,    55,    13,    64,    60,    55
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    57,    58,    58,    58,    59,    59,    60,    60,    61,
      61,    61,    61,    61,    61,    62,    62,    62,    63,    63,
      63,    64,    64,    64,    64,    64,    65,    65,    65,    66,
      66,    67,    67,    68,    68,    68,    69,    69,    69,    70,
      70,    71,    71,    72,    73,    74,    74,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    76,    76,    77,    77,    78,    78,
      78,    78,    78,    78,    78,    79,    79,    80,    80,    80,
      80,    80,    80,    81,    81,    82,    82,    82,    83,    83,
      84,    84,    85,    85,    85,    86,    86,    87,    88,    88,
      88,    89,    89,    90,    91,    91,    91,    92,    92
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     1,     2,     1,     0,     4,
       5,     1,     1,     1,     1,     1,     3,     2,     5,     7,
       9,     5,     7,     6,     8,     9,     2,     4,     6,     4,
       2,     1,     2,     7,     7,     8,     5,     7,     5,     1,
       3,     1,     2,     7,     8,     1,     3,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     3,     3,
       3,     3,     3,     4,     0,     1,     1,     3,     1,     0,
       4,     0,     1,     1,     3,     1,     0,     4,     1,     1,
       3,     1,     0,     4,     1,     1,     3,     1,     0
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
  case 9: /* statement: IDENTIFIER '=' expr ';'  */
#line 75 "parser.y"
                              { printf("Assignment:\n"); }
#line 1443 "parser.tab.c"
    break;

  case 10: /* statement: VAL IDENTIFIER '=' expr ';'  */
#line 76 "parser.y"
                                  { printf("Value declaration:\n"); }
#line 1449 "parser.tab.c"
    break;

  case 11: /* statement: if_else_stmt  */
#line 77 "parser.y"
                   { printf("IF_ELSE construction:\n"); }
#line 1455 "parser.tab.c"
    break;

  case 12: /* statement: for_stmt  */
#line 78 "parser.y"
               { printf("FOR_STMT construction:\n"); }
#line 1461 "parser.tab.c"
    break;

  case 13: /* statement: while_stmt  */
#line 79 "parser.y"
                 { printf("WHILE_STMT construction:\n"); }
#line 1467 "parser.tab.c"
    break;

  case 14: /* statement: do_while_stmt  */
#line 80 "parser.y"
                    { printf("DO_WHILE_STMT construction:\n"); }
#line 1473 "parser.tab.c"
    break;

  case 33: /* for_stmt: FOR '(' for_params ')' '{' statement_list '}'  */
#line 129 "parser.y"
                                                        { printf("FOR LOOP\n"); }
#line 1479 "parser.tab.c"
    break;

  case 34: /* for_stmt: FOR '{' for_multy_list '}' '{' statement_list '}'  */
#line 130 "parser.y"
                                                          { printf("FOR MULTY LOOP\n"); }
#line 1485 "parser.tab.c"
    break;

  case 35: /* for_stmt: FOR '{' for_params if_condition_list '}' '{' statement_list '}'  */
#line 131 "parser.y"
                                                                          { printf("FOR LOOP: multy with IF_STMT\n"); }
#line 1491 "parser.tab.c"
    break;

  case 45: /* expr_list: expr  */
#line 205 "parser.y"
                      { printf("PARSER found expr_list - expr\n"); }
#line 1497 "parser.tab.c"
    break;

  case 46: /* expr_list: expr_list ',' expr  */
#line 206 "parser.y"
                          { printf("PARSER found expr_list - expr_list\n"); }
#line 1503 "parser.tab.c"
    break;

  case 50: /* expr: expr '+' expr  */
#line 214 "parser.y"
                    { printf("PARSER found expr - expr + expr\n"); }
#line 1509 "parser.tab.c"
    break;

  case 51: /* expr: expr '-' expr  */
#line 215 "parser.y"
                    { printf("PARSER found expr - expr - expr\n"); }
#line 1515 "parser.tab.c"
    break;

  case 52: /* expr: expr '/' expr  */
#line 216 "parser.y"
                    { printf("PARSER found expr - expr / expr\n"); }
#line 1521 "parser.tab.c"
    break;

  case 53: /* expr: expr '*' expr  */
#line 217 "parser.y"
                    { printf("PARSER found expr - expr * expr\n"); }
#line 1527 "parser.tab.c"
    break;

  case 54: /* expr: expr '%' expr  */
#line 218 "parser.y"
                    { printf("PARSER found expr - expr % expr\n"); }
#line 1533 "parser.tab.c"
    break;

  case 55: /* expr: expr '&' expr  */
#line 219 "parser.y"
                    { printf("PARSER found expr - expr && expr\n"); }
#line 1539 "parser.tab.c"
    break;

  case 56: /* expr: expr '|' expr  */
#line 220 "parser.y"
                    { printf("PARSER found expr - expr | expr\n"); }
#line 1545 "parser.tab.c"
    break;

  case 57: /* expr: condition  */
#line 221 "parser.y"
                { printf("PARSER found expr - condition\n"); }
#line 1551 "parser.tab.c"
    break;

  case 58: /* expr: func_call  */
#line 222 "parser.y"
                { printf("PARSER found expr - func_call\n"); }
#line 1557 "parser.tab.c"
    break;

  case 59: /* expr: if_else_stmt  */
#line 223 "parser.y"
                   { printf("PARSER found expr - if_else_stmt\n"); }
#line 1563 "parser.tab.c"
    break;

  case 64: /* int_literal: NUM_10  */
#line 233 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 1569 "parser.tab.c"
    break;

  case 65: /* int_literal: NUM_16  */
#line 234 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 1575 "parser.tab.c"
    break;

  case 66: /* real_literal: REAL_NUMBER  */
#line 239 "parser.y"
                  { printf("PARSER found - REAL\n"); }
#line 1581 "parser.tab.c"
    break;

  case 67: /* real_literal: REAL_NUMBER_EXPONENT  */
#line 240 "parser.y"
                           { printf("PARSER found - REAL_EXP\n"); }
#line 1587 "parser.tab.c"
    break;

  case 75: /* func_call: IDENTIFIER '(' ')'  */
#line 257 "parser.y"
                         { printf("Function call: NO PARAMS\n"); }
#line 1593 "parser.tab.c"
    break;

  case 76: /* func_call: IDENTIFIER '(' expr_list ')'  */
#line 258 "parser.y"
                                   { printf("Function call: WITH PARAMS\n"); }
#line 1599 "parser.tab.c"
    break;

  case 77: /* condition: expr '>' expr  */
#line 264 "parser.y"
                    {printf("PARSER found expr - expr > expr\n"); }
#line 1605 "parser.tab.c"
    break;

  case 78: /* condition: expr '<' expr  */
#line 265 "parser.y"
                    {printf("PARSER found expr - expr < expr\n"); }
#line 1611 "parser.tab.c"
    break;

  case 79: /* condition: expr MORE_OR_EQUAL_OPERATOR expr  */
#line 266 "parser.y"
                                       {printf("PARSER found expr - expr >= expr\n"); }
#line 1617 "parser.tab.c"
    break;

  case 80: /* condition: expr LESS_OR_EQUAL_OPERATOR expr  */
#line 267 "parser.y"
                                       {printf("PARSER found expr - expr <= expr\n"); }
#line 1623 "parser.tab.c"
    break;

  case 81: /* condition: expr EQ expr  */
#line 268 "parser.y"
                   {printf("PARSER found expr - expr == expr\n"); }
#line 1629 "parser.tab.c"
    break;

  case 82: /* condition: expr NEQ expr  */
#line 269 "parser.y"
                    {printf("PARSER found expr - expr != expr\n"); }
#line 1635 "parser.tab.c"
    break;

  case 83: /* array: ARRAY '(' array_list_e ')'  */
#line 287 "parser.y"
                                 { printf("PARSER found Array\n"); }
#line 1641 "parser.tab.c"
    break;

  case 90: /* list: LIST '(' list_list_e ')'  */
#line 304 "parser.y"
                               { printf("PARSER found List\n"); }
#line 1647 "parser.tab.c"
    break;

  case 97: /* vector: VECTOR '(' vector_list_e ')'  */
#line 322 "parser.y"
                                   { printf("PARSER found Vector\n"); }
#line 1653 "parser.tab.c"
    break;

  case 103: /* set: SET '(' set_list_e ')'  */
#line 339 "parser.y"
                             { printf("PARSER found Set\n"); }
#line 1659 "parser.tab.c"
    break;


#line 1663 "parser.tab.c"

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

#line 353 "parser.y"

