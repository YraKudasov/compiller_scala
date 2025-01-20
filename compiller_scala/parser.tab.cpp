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



#line 106 "parser.tab.cpp"

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
  YYSYMBOL_81_ = 81,                       /* '.'  */
  YYSYMBOL_82_ = 82,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 83,                  /* $accept  */
  YYSYMBOL_program = 84,                   /* program  */
  YYSYMBOL_instance_class = 85,            /* instance_class  */
  YYSYMBOL_visibility_modifier = 86,       /* visibility_modifier  */
  YYSYMBOL_statement_expr_list = 87,       /* statement_expr_list  */
  YYSYMBOL_statement_expr_list_e = 88,     /* statement_expr_list_e  */
  YYSYMBOL_statement = 89,                 /* statement  */
  YYSYMBOL_if_else_expr = 90,              /* if_else_expr  */
  YYSYMBOL_if_condition_list = 91,         /* if_condition_list  */
  YYSYMBOL_for_expr = 92,                  /* for_expr  */
  YYSYMBOL_for_params = 93,                /* for_params  */
  YYSYMBOL_for_multy_list = 94,            /* for_multy_list  */
  YYSYMBOL_while_expr = 95,                /* while_expr  */
  YYSYMBOL_do_while_expr = 96,             /* do_while_expr  */
  YYSYMBOL_match_expr = 97,                /* match_expr  */
  YYSYMBOL_case_condition = 98,            /* case_condition  */
  YYSYMBOL_literal_list_case = 99,         /* literal_list_case  */
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
#define YYLAST   1246

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  153
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  437

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
      18,    19,    13,    11,     5,    12,    81,    14,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    80,    82,
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
       0,    95,    95,   139,   140,   144,   145,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   174,   175,   179,   180,
     181,   182,   183,   192,   193,   194,   199,   200,   201,   208,
     209,   210,   211,   216,   217,   222,   223,   229,   233,   239,
     240,   245,   246,   247,   248,   252,   253,   257,   258,   259,
     260,   261,   262,   268,   269,   270,   274,   278,   285,   286,
     291,   292,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   335,   336,   337,   338,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     360,   364,   365,   366,   367,   371,   376,   377,   381,   382,
     383,   384,   385,   386,   387,   388,   393,   394,   395,   401,
     402,   403,   404,   405,   406,   407,   411,   412,   418,   419,
     423,   436,   437,   441,   445,   452,   458,   464,   472,   473,
     478,   479,   484,   485
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
  "PRIVATE", "CLASS", "EXTENDS", "ABSTRACT", "'{'", "'}'", "':'", "'.'",
  "';'", "$accept", "program", "instance_class", "visibility_modifier",
  "statement_expr_list", "statement_expr_list_e", "statement",
  "if_else_expr", "if_condition_list", "for_expr", "for_params",
  "for_multy_list", "while_expr", "do_while_expr", "match_expr",
  "case_condition", "literal_list_case", "case_list", "try_expr", "catch",
  "finally", "expr_list_e", "expr_list", "expr", "num_const", "const",
  "func_call", "params", "func", "method_params_list", "method",
  "method_call", "type", "type_list_car", "type_list", "type_list_simple",
  "array", "array_literal", "initialized_array", "list", "vector", "set",
  "endlList", "endlOpt", "semicolonList", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-352)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-152)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     110,  -352,    31,  -352,    52,   824,  -352,  -352,  1012,  1012,
    1074,  -352,  -352,  -352,  -352,    39,  -352,  -352,    53,    53,
      53,    53,    53,    53,    33,    75,    97,   103,    82,  -352,
    -352,  -352,   139,   165,   171,    53,    26,  -352,  -352,    10,
    -352,    89,    53,  -352,  -352,  -352,  -352,  -352,  -352,  -352,
    1192,  -352,     9,  -352,  -352,  -352,  -352,  -352,  -352,  -352,
    -352,  -352,  -352,  -352,  -352,    14,   545,   179,  1012,    69,
     187,   188,   199,   200,  1012,   210,  1012,  1012,   220,  1012,
      53,  1012,  1012,  1012,   215,   225,   219,   168,  -352,   473,
     173,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,   224,   216,   151,   177,
     234,   205,   264,    44,  1192,    53,    53,    53,    53,  1012,
     259,   281,  1012,    28,   614,  -352,   279,   260,   280,   282,
     294,    53,   151,   305,  -352,    89,  -352,  1192,  -352,     5,
    1012,  1012,  1012,  1012,  1012,  1012,  1012,  1012,  1012,  1012,
    1012,  1012,  1012,  1012,  1012,  -352,    53,  -352,  -352,  -352,
    -352,  -352,  -352,  -352,  -352,   246,   274,   245,  1012,  -352,
     309,  1012,   248,    18,    19,   669,   262,   295,    47,   302,
    1116,   163,  -352,  -352,    53,  -352,  -352,  -352,    15,   323,
    1012,  -352,  -352,   824,   166,   212,   267,   267,   254,   254,
    -352,  -352,  -352,    50,    50,   296,   115,   267,   267,   265,
     151,   326,   151,  1192,    53,  1192,    53,    53,    53,    53,
      53,    53,   365,    53,   113,    53,   173,   334,    53,   275,
     288,   316,  -352,    16,    53,   332,    53,   152,   340,   356,
      89,  -352,  1192,    53,  -352,  1012,    20,  1012,   339,  1012,
     360,  1012,   360,  1012,   335,   318,  1012,    53,   -15,   888,
       5,  1012,  1012,   339,  1012,  -352,    53,    53,   152,  1012,
     301,   181,   151,   332,    21,  1012,  -352,  -352,   339,   363,
     365,  1192,    53,    53,  1192,   136,    53,  1192,    53,   354,
     365,  1192,   950,    53,     5,    53,  1192,   259,  1164,  -352,
      13,   223,  1012,   151,    22,  1192,  -352,    53,   182,    53,
      53,  1177,    53,  -352,  -352,   293,     6,  -352,   375,   391,
     392,   397,    53,   130,   341,    53,  1192,  1012,   364,  1012,
    -352,  -352,  -352,    -8,  -352,  1192,    53,    53,    53,   399,
    -352,  1012,   151,  -352,    30,   128,    53,    45,   128,    53,
    -352,     5,   342,   151,    53,    53,  1012,    53,   365,  1012,
    1192,  1012,  1192,   400,  1012,   151,    53,  1192,    53,  -352,
     377,   350,   412,   387,   293,   383,   151,  -352,  1012,  1012,
    -352,  1012,  -352,  1192,  1192,    53,  1192,    53,  1012,   416,
      53,    53,    53,    53,    53,    53,  -352,  1192,  1192,  -352,
    1012,   417,  1192,    53,  1012,   762,   365,  1012,   358,   293,
    1192,    53,  1012,  1192,  1192,     5,  -352,  1192,    53,    53,
    1012,  1192,  1012,   762,   361,  1192,  1192,  1192,     5,    53,
    1012,   762,  1192,  1192,     5,  1012,  1192
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     151,   148,     0,     2,   150,     0,     1,   149,     0,     0,
     114,    96,    97,    98,    99,    63,   102,   101,   151,   151,
     151,   151,   151,   151,     0,     0,     0,     0,     0,   103,
     104,   105,     0,     0,     0,   151,   151,     6,     5,   151,
      93,     0,   151,     7,    84,    85,    86,    87,    89,    88,
       9,   100,    62,    83,    91,    22,    92,   106,   141,   142,
     107,   108,   109,    82,    81,    63,     0,     0,    59,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    59,
     151,    59,    59,    59,     0,     0,     0,     0,     8,   150,
      16,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,     0,     0,     0,    65,
       0,     0,     0,    58,    60,   151,   151,   151,   151,     0,
       0,   151,     0,     0,     0,    94,     0,     0,     0,     0,
       0,   151,     0,     3,    90,     0,    13,    14,   152,   151,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   128,   151,   129,   130,   131,
     132,   133,   134,   135,   136,   111,     0,     0,     0,   110,
       0,     0,     0,     0,     0,     0,     0,    35,   151,     0,
       0,     0,    95,   143,   151,   145,   146,   147,     0,     0,
      59,    15,   153,     0,    78,    77,    66,    67,    72,    73,
      75,    74,    76,    70,    71,    79,    80,    68,    69,     0,
       0,   127,     0,   115,   151,    64,   151,   151,   151,   151,
     151,   151,     0,   151,   151,   151,     0,     0,   151,     0,
       0,    53,    54,     0,   151,   114,   151,   151,     0,     0,
       0,    10,    11,   151,   137,    59,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   151,     0,     0,
     151,     0,     0,     0,     0,    55,   151,   151,   151,     0,
       0,     0,     0,   114,     0,     0,     4,    12,     0,     0,
       0,    61,   151,   151,    18,     0,   151,    19,   151,    23,
       0,    26,     0,   151,   151,   151,    31,     0,     0,    37,
     151,     0,     0,     0,     0,   121,   116,   151,     0,   151,
     151,     0,   151,   126,   113,     0,     0,   138,     0,     0,
       0,     0,   151,     0,    33,   151,    32,     0,     0,     0,
      36,    38,    56,     0,    57,   125,   151,   151,   151,     0,
     117,     0,     0,   144,     0,    42,   151,    44,    45,   151,
      39,   151,     0,     0,   151,   151,     0,   151,     0,     0,
      27,     0,    29,     0,     0,     0,   151,   120,   151,    40,
       0,     0,     0,     0,     0,     0,     0,   139,     0,     0,
      24,     0,    34,    30,    28,   151,   124,   151,     0,     0,
     151,   151,   151,   151,   151,   151,   140,    20,    21,    25,
       0,     0,   119,   151,     0,     0,     0,     0,     0,     0,
     123,   151,     0,    43,    48,   151,    46,    41,   151,   151,
       0,   118,     0,     0,     0,   122,    47,    51,   151,   151,
       0,     0,    49,    52,   151,     0,    50
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -352,  -352,  -352,   -88,  -352,   389,   -35,  -352,  -352,  -352,
     134,  -352,  -352,  -352,  -352,  -351,  -352,  -107,  -352,  -352,
     201,   -72,  -352,    -5,  -352,  -207,  -352,  -182,  -352,   203,
    -352,  -352,  -113,   226,  -352,  -100,  -352,  -352,  -352,  -352,
    -352,  -352,   -40,   349,   -76
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,    40,    41,    42,     3,    43,    44,   224,    45,
     177,   178,    46,    47,    48,   346,   347,   283,    49,   231,
     232,   112,   113,   114,    51,    52,    53,    67,    54,   237,
      55,    56,   164,   165,   318,   286,    57,    58,    59,    60,
      61,    62,     4,     5,   351
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      50,   135,    89,    63,    64,    66,    88,   126,     1,   128,
     129,   130,     1,     1,   139,   255,     1,     1,   293,   189,
    -151,   234,   266,   394,   217,   219,   280,   309,   337,     1,
     349,     6,    68,   235,   235,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   349,  -151,  -151,     1,     1,  -151,
       1,  -151,  -151,   271,   136,     7,     1,    68,   419,    93,
      94,    95,    96,    97,    98,    99,   225,   138,   349,   121,
      85,   123,   124,   314,   138,   115,  -151,   100,   101,   102,
     103,   104,   105,   324,   137,   350,   210,   192,   138,   -17,
     106,   308,   332,    77,   108,   236,   267,   244,   218,   220,
     191,   310,   338,   104,   105,   240,   116,   181,   348,   369,
     -17,    76,   138,     1,   175,    78,     1,   180,   239,    18,
      19,    79,    91,    92,    93,    94,    95,    96,    97,    98,
      99,     1,   257,     7,    28,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     260,   382,   288,    80,   285,     1,   300,    81,   241,   307,
      35,  -151,   357,   213,   100,   101,   215,   348,   104,   105,
     273,   312,   317,   279,    92,    93,    94,    95,    96,    97,
      98,    99,   294,    82,   110,   319,   110,   110,   242,    83,
     336,   157,   158,   159,   160,   161,   162,   163,   111,   416,
     306,   340,   348,   229,   230,   277,   157,   158,   159,   160,
     161,   162,   163,   117,   118,   100,   101,   119,   120,   104,
     105,    93,    94,    95,    96,    97,    98,    99,   122,   368,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   125,
     377,   131,   281,   132,   284,   133,   287,   134,   289,   323,
     155,   291,   387,   156,   296,   138,   298,   299,   166,   301,
     167,   100,   101,   396,   305,   104,   105,    97,    98,    99,
     311,   168,   100,   101,   102,   103,   104,   105,    95,    96,
      97,    98,    99,   169,     1,   176,   184,   326,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   335,   183,   185,
     211,   186,   334,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   210,   187,   214,    11,    12,    13,    14,   345,
      16,    17,   360,   190,   362,   212,   216,   222,   223,   415,
     100,   101,   102,   103,   104,   105,   367,    27,   227,    29,
      30,    31,   238,   243,   245,   100,   101,   428,   103,   104,
     105,   380,   261,   263,   383,   434,   384,   230,   270,   386,
     275,    32,    33,    34,    69,   254,   264,    70,    71,    72,
      73,    74,    75,   397,   398,   276,   399,   282,   285,    85,
     290,   108,   313,   402,    84,    86,   322,    11,    12,    13,
      14,    90,    16,    17,   352,   410,   353,   361,   354,   413,
     414,   107,   417,   355,   358,   366,   385,   421,   376,    27,
     390,    29,    30,    31,    69,   425,   391,   426,   427,   392,
     393,   395,   403,   411,   418,   432,   433,   429,    87,   127,
     436,   330,   265,    32,    33,    34,   268,   254,   246,     0,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,     0,     0,     0,     0,     0,
       0,     0,   170,     0,   171,   172,   173,   174,     0,     0,
     179,     0,     0,     0,     0,     0,     7,     0,     0,     0,
     188,     0,     0,     0,     8,     9,     0,     0,   193,     0,
       0,    10,     0,     0,     0,    11,    12,    13,    14,    15,
      16,    17,     0,    18,    19,   209,    20,    21,    22,    23,
       0,     0,    24,     0,     0,    25,    26,    27,    28,    29,
      30,    31,     0,     0,     0,     0,     0,   226,     0,     0,
       0,     0,     0,   233,     0,     0,     0,     0,     0,     0,
       0,    32,    33,    34,    35,    36,    37,    38,     0,     0,
       0,    39,    91,    92,    93,    94,    95,    96,    97,    98,
      99,     0,     0,   247,   109,   248,   249,   250,   251,   252,
     253,     0,   256,   258,   259,     0,     0,   262,     0,     0,
       0,     0,     0,   269,     0,   272,   274,     0,     0,     0,
       0,     0,   278,     0,   100,   101,   102,   103,   104,   105,
       0,     0,     0,     0,     0,     0,   292,     0,     0,   297,
       0,     0,     0,     0,     0,   302,   303,   304,     0,     0,
       0,    91,    92,    93,    94,    95,    96,    97,    98,    99,
       0,   315,   316,   182,     0,   320,     0,   321,     0,     0,
       0,     0,   327,   328,   329,     0,     0,     0,     0,   333,
       0,     0,     0,     0,     0,     0,   339,     0,   341,   342,
       0,   344,     0,   100,   101,   102,   103,   104,   105,     0,
       0,   356,     0,     0,   359,     0,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   363,   364,   365,   221,     0,
       0,     0,     0,     0,   370,   371,   372,   373,   374,     0,
     375,     0,     0,   378,   379,     0,   381,     0,     0,     0,
       0,     0,     0,     0,     0,   388,     0,   389,   100,   101,
     102,   103,   104,   105,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   400,     0,   401,     0,     0,   404,
     405,   406,   407,   408,   409,     0,     0,     0,     0,     0,
       0,     0,   412,     0,     0,     0,     0,     0,     0,     0,
     420,     0,     0,     0,   422,     0,     0,   423,   424,     0,
       0,     0,     0,     8,     9,     0,     0,   430,   431,     0,
      10,     0,     0,   435,    11,    12,    13,    14,    15,    16,
      17,     0,     0,     0,     0,    20,    21,    22,    23,     0,
       0,    24,     0,     0,    25,    26,    27,     0,    29,    30,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,    34,     0,    36,     8,     9,     0,     0,     0,
      39,     0,    10,     0,   138,     0,    11,    12,    13,    14,
      15,    16,    17,     0,    18,    19,     0,    20,    21,    22,
      23,     0,     0,    24,     0,     0,    25,    26,    27,    28,
      29,    30,    31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    33,    34,    35,    36,    37,    38,     8,
       9,     0,    39,     0,     0,     0,    10,     0,     0,     0,
      11,    12,    13,    14,    15,    16,    17,     0,     0,     0,
       0,    20,    21,    22,    23,     0,     0,    24,     0,     0,
      25,    26,    27,     0,    29,    30,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   295,     0,     0,     0,    32,    33,    34,     0,
      36,     8,     9,     0,     0,     0,    39,     0,    10,     0,
       0,     0,    11,    12,    13,    14,    15,    16,    17,     0,
       0,     0,     0,    20,    21,    22,    23,     0,     0,    24,
       0,     0,    25,    26,    27,     0,    29,    30,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   325,     0,     0,     0,    32,    33,
      34,     0,    36,     8,     9,     0,     0,     0,    39,     0,
      10,     0,     0,     0,    11,    12,    13,    14,    15,    16,
      17,     0,     0,     0,     0,    20,    21,    22,    23,     0,
       0,    24,     0,     0,    25,    26,    27,     0,    29,    30,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,    34,     0,    36,     8,     9,     0,     0,     0,
      39,     0,    10,     0,     0,     0,    11,    12,    13,    14,
      65,    16,    17,     0,     0,     0,     0,    20,    21,    22,
      23,     0,     0,    24,     0,     0,    25,    26,    27,     0,
      29,    30,    31,    91,    92,    93,    94,    95,    96,    97,
      98,    99,     0,     0,     0,   228,     0,     0,     0,     0,
       0,     0,    32,    33,    34,     0,    36,     0,     0,     0,
       0,     0,    39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,   101,   102,   103,   104,
     105,    91,    92,    93,    94,    95,    96,    97,    98,    99,
       0,     0,     0,   331,    91,    92,    93,    94,    95,    96,
      97,    98,    99,     0,     0,     0,     0,     0,   343,    91,
      92,    93,    94,    95,    96,    97,    98,    99,     0,     0,
       0,     0,     0,   100,   101,   102,   103,   104,   105,     0,
       0,     0,     0,     0,     0,     0,   100,   101,   102,   103,
     104,   105,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,   101,   102,   103,   104,   105
};

static const yytype_int16 yycheck[] =
{
       5,    89,    42,     8,     9,    10,    41,    79,     3,    81,
      82,    83,     3,     3,    90,   222,     3,     3,    33,   132,
       6,     6,     6,   374,     6,     6,     6,     6,     6,     3,
      38,     0,    18,    18,    18,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    38,     6,    37,     3,     3,     5,
       3,    37,     7,   235,    89,     3,     3,    18,   409,     9,
      10,    11,    12,    13,    14,    15,    19,    82,    38,    74,
      44,    76,    77,   280,    82,     6,    37,    49,    50,    51,
      52,    53,    54,   290,    89,    79,    66,    82,    82,    79,
      81,   273,    79,    18,    80,    80,    80,   210,    80,    80,
     135,    80,    80,    53,    54,   193,    37,    79,   315,    79,
       0,    78,    82,     3,   119,    18,     3,   122,   190,    30,
      31,    18,     7,     8,     9,    10,    11,    12,    13,    14,
      15,     3,    19,     3,    45,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     226,   358,   252,    71,    18,     3,   263,    18,   193,   272,
      71,    33,    32,   168,    49,    50,   171,   374,    53,    54,
      18,   278,   285,   245,     8,     9,    10,    11,    12,    13,
      14,    15,   258,    18,     5,   285,     5,     5,   193,    18,
     303,    55,    56,    57,    58,    59,    60,    61,    19,   406,
      19,    19,   409,    40,    41,   240,    55,    56,    57,    58,
      59,    60,    61,    26,    26,    49,    50,    18,    18,    53,
      54,     9,    10,    11,    12,    13,    14,    15,    18,   342,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    19,
     353,    26,   247,    18,   249,    26,   251,    79,   253,   289,
      26,   256,   365,    37,   259,    82,   261,   262,    81,   264,
      26,    49,    50,   376,   269,    53,    54,    13,    14,    15,
     275,    66,    49,    50,    51,    52,    53,    54,    11,    12,
      13,    14,    15,    19,     3,    26,    26,   292,     7,     8,
       9,    10,    11,    12,    13,    14,    15,   302,    19,    19,
      26,    19,    79,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    66,    19,     5,    22,    23,    24,    25,    26,
      27,    28,   327,    18,   329,    80,    78,    65,    33,   405,
      49,    50,    51,    52,    53,    54,   341,    44,    36,    46,
      47,    48,    19,    78,    18,    49,    50,   423,    52,    53,
      54,   356,    18,    78,   359,   431,   361,    41,    26,   364,
      20,    68,    69,    70,    15,    72,    78,    18,    19,    20,
      21,    22,    23,   378,   379,    19,   381,    38,    18,    44,
      62,    80,    19,   388,    35,    36,    32,    22,    23,    24,
      25,    42,    27,    28,    19,   400,     5,    33,     6,   404,
     405,    52,   407,     6,    63,     6,     6,   412,    66,    44,
      33,    46,    47,    48,    65,   420,    66,   422,   423,     7,
      33,    38,     6,     6,    66,   430,   431,    66,    39,    80,
     435,   297,   231,    68,    69,    70,   233,    72,   212,    -1,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,    -1,   115,   116,   117,   118,    -1,    -1,
     121,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,
     131,    -1,    -1,    -1,    11,    12,    -1,    -1,   139,    -1,
      -1,    18,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    -1,    30,    31,   156,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    42,    43,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,   178,    -1,    -1,
      -1,    -1,    -1,   184,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    74,    -1,    -1,
      -1,    78,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,   214,    19,   216,   217,   218,   219,   220,
     221,    -1,   223,   224,   225,    -1,    -1,   228,    -1,    -1,
      -1,    -1,    -1,   234,    -1,   236,   237,    -1,    -1,    -1,
      -1,    -1,   243,    -1,    49,    50,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,   260,
      -1,    -1,    -1,    -1,    -1,   266,   267,   268,    -1,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,   282,   283,    19,    -1,   286,    -1,   288,    -1,    -1,
      -1,    -1,   293,   294,   295,    -1,    -1,    -1,    -1,   300,
      -1,    -1,    -1,    -1,    -1,    -1,   307,    -1,   309,   310,
      -1,   312,    -1,    49,    50,    51,    52,    53,    54,    -1,
      -1,   322,    -1,    -1,   325,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,   336,   337,   338,    19,    -1,
      -1,    -1,    -1,    -1,   345,   346,   347,   348,   349,    -1,
     351,    -1,    -1,   354,   355,    -1,   357,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   366,    -1,   368,    49,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   385,    -1,   387,    -1,    -1,   390,
     391,   392,   393,   394,   395,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   403,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     411,    -1,    -1,    -1,   415,    -1,    -1,   418,   419,    -1,
      -1,    -1,    -1,    11,    12,    -1,    -1,   428,   429,    -1,
      18,    -1,    -1,   434,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    42,    43,    44,    -1,    46,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    69,    70,    -1,    72,    11,    12,    -1,    -1,    -1,
      78,    -1,    18,    -1,    82,    -1,    22,    23,    24,    25,
      26,    27,    28,    -1,    30,    31,    -1,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    42,    43,    44,    45,
      46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    69,    70,    71,    72,    73,    74,    11,
      12,    -1,    78,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      42,    43,    44,    -1,    46,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    68,    69,    70,    -1,
      72,    11,    12,    -1,    -1,    -1,    78,    -1,    18,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    42,    43,    44,    -1,    46,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    68,    69,
      70,    -1,    72,    11,    12,    -1,    -1,    -1,    78,    -1,
      18,    -1,    -1,    -1,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    42,    43,    44,    -1,    46,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    69,    70,    -1,    72,    11,    12,    -1,    -1,    -1,
      78,    -1,    18,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    42,    43,    44,    -1,
      46,    47,    48,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    69,    70,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,
      54,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    -1,    19,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    -1,    -1,    -1,    21,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    54
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    84,    88,   125,   126,     0,     3,    11,    12,
      18,    22,    23,    24,    25,    26,    27,    28,    30,    31,
      33,    34,    35,    36,    39,    42,    43,    44,    45,    46,
      47,    48,    68,    69,    70,    71,    72,    73,    74,    78,
      85,    86,    87,    89,    90,    92,    95,    96,    97,   101,
     106,   107,   108,   109,   111,   113,   114,   119,   120,   121,
     122,   123,   124,   106,   106,    26,   106,   110,    18,   126,
     126,   126,   126,   126,   126,   126,    78,    18,    18,    18,
      71,    18,    18,    18,   126,    44,   126,    88,    89,   125,
     126,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      49,    50,    51,    52,    53,    54,    81,   126,    80,    19,
       5,    19,   104,   105,   106,     6,    37,    26,    26,    18,
      18,   106,    18,   106,   106,    19,   104,   126,   104,   104,
     104,    26,    18,    26,    79,    86,    89,   106,    82,   127,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,    26,    37,    55,    56,    57,
      58,    59,    60,    61,   115,   116,    81,    26,    66,    19,
     126,   126,   126,   126,   126,   106,    26,    93,    94,   126,
     106,    79,    19,    19,    26,    19,    19,    19,   126,   115,
      18,    89,    82,   126,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   126,
      66,    26,    80,   106,     5,   106,    78,     6,    80,     6,
      80,    19,    65,    33,    91,    19,   126,    36,    19,    40,
      41,   102,   103,   126,     6,    18,    80,   112,    19,   104,
      86,    89,   106,    78,   115,    18,   116,   126,   126,   126,
     126,   126,   126,   126,    72,   108,   126,    19,   126,   126,
     127,    18,   126,    78,    78,   103,     6,    80,   112,   126,
      26,   110,   126,    18,   126,    20,    19,    89,   126,   104,
       6,   106,    38,   100,   106,    18,   118,   106,   118,   106,
      62,   106,   126,    33,   127,    64,   106,   126,   106,   106,
     100,   106,   126,   126,   126,   106,    19,   115,   110,     6,
      80,   106,   100,    19,   108,   126,   126,   115,   117,   118,
     126,   126,    32,   125,   108,    64,   106,   126,   126,   126,
      93,    19,    79,   126,    79,   106,   115,     6,    80,   126,
      19,   126,   126,    21,   126,    26,    98,    99,   108,    38,
      79,   127,    19,     5,     6,     6,   126,    32,    63,   126,
     106,    33,   106,   126,   126,   126,     6,   106,   115,    79,
     126,   126,   126,   126,   126,   126,    66,   115,   126,   126,
     106,   126,   108,   106,   106,     6,   106,   115,   126,   126,
      33,    66,     7,    33,    98,    38,   115,   106,   106,   106,
     126,   126,   106,     6,   126,   126,   126,   126,   126,   126,
     106,     6,   126,   106,   106,   127,   108,   106,    66,    98,
     126,   106,   126,   126,   126,   106,   106,   106,   127,    66,
     126,   126,   106,   106,   127,   126,   106
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    83,    84,    85,    85,    86,    86,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    88,    88,    89,    89,
      89,    89,    89,    90,    90,    90,    91,    91,    91,    92,
      92,    92,    92,    93,    93,    94,    94,    95,    96,    97,
      97,    98,    98,    98,    98,    99,    99,   100,   100,   100,
     100,   100,   100,   101,   101,   101,   102,   103,   104,   104,
     105,   105,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   107,   107,   107,   107,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     109,   110,   110,   110,   110,   111,   112,   112,   113,   113,
     113,   113,   113,   113,   113,   113,   114,   114,   114,   115,
     115,   115,   115,   115,   115,   115,   116,   116,   117,   117,
     118,   119,   119,   120,   121,   122,   123,   124,   125,   125,
     126,   126,   127,   127
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     6,     1,     1,     1,     2,     1,
       5,     5,     6,     3,     3,     4,     3,     0,     7,     7,
      11,    11,     1,     7,    10,    11,     3,     5,     6,     9,
      10,     7,     8,     5,     7,     1,     5,     7,     8,     9,
       9,     5,     1,     5,     1,     1,     5,     9,     7,    11,
      13,     9,    11,     5,     5,     6,     4,     4,     1,     0,
       1,     5,     1,     1,     5,     3,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     3,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     3,     5,     7,     0,     5,     3,     4,    13,    11,
       9,     7,    14,    12,    10,     8,     8,     5,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       5,     1,     1,     4,     8,     4,     4,     4,     1,     2,
       1,     0,     1,     2
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
#line 162 "parser.y"
                { printf("Add first statement :\n"); }
#line 2050 "parser.tab.cpp"
    break;

  case 8: /* statement_expr_list: visibility_modifier statement  */
#line 163 "parser.y"
                                    { printf("Add first visibility_modifier statement :\n"); }
#line 2056 "parser.tab.cpp"
    break;

  case 9: /* statement_expr_list: expr  */
#line 164 "parser.y"
           { printf("Add first statement :\n"); }
#line 2062 "parser.tab.cpp"
    break;

  case 10: /* statement_expr_list: statement_expr_list endlOpt semicolonList endlOpt statement  */
#line 165 "parser.y"
                                                                   { printf("Add new statement to statement_expr_list :\n"); }
#line 2068 "parser.tab.cpp"
    break;

  case 11: /* statement_expr_list: statement_expr_list endlOpt semicolonList endlOpt expr  */
#line 166 "parser.y"
                                                              { printf("Add new expr to statement_expr_list :\n"); }
#line 2074 "parser.tab.cpp"
    break;

  case 12: /* statement_expr_list: statement_expr_list endlOpt semicolonList endlOpt visibility_modifier statement  */
#line 167 "parser.y"
                                                                                       { printf("Add new visibility_modifier to statement_expr_list :\n"); }
#line 2080 "parser.tab.cpp"
    break;

  case 13: /* statement_expr_list: statement_expr_list endlList statement  */
#line 168 "parser.y"
                                              { printf("Add new statement to statement_expr_list :\n"); }
#line 2086 "parser.tab.cpp"
    break;

  case 14: /* statement_expr_list: statement_expr_list endlList expr  */
#line 169 "parser.y"
                                         { printf("Add new expr to statement_expr_list :\n"); }
#line 2092 "parser.tab.cpp"
    break;

  case 15: /* statement_expr_list: statement_expr_list endlList visibility_modifier statement  */
#line 170 "parser.y"
                                                                  { printf("Add new visibility_modifier to statement_expr_list :\n"); }
#line 2098 "parser.tab.cpp"
    break;

  case 17: /* statement_expr_list_e: %empty  */
#line 175 "parser.y"
                     { printf("PARSER found statement_list_e - nothing\n"); }
#line 2104 "parser.tab.cpp"
    break;

  case 18: /* statement: VAL endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 179 "parser.y"
                                                       { printf("implicit value declaration:\n"); }
#line 2110 "parser.tab.cpp"
    break;

  case 19: /* statement: VAR endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 180 "parser.y"
                                                       { printf("implicit variable declaration:\n"); }
#line 2116 "parser.tab.cpp"
    break;

  case 20: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 181 "parser.y"
                                                                                           { printf("explicit value declaration:\n"); }
#line 2122 "parser.tab.cpp"
    break;

  case 21: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 182 "parser.y"
                                                                                           { printf("explicit variable declaration:\n"); }
#line 2128 "parser.tab.cpp"
    break;

  case 22: /* statement: method  */
#line 183 "parser.y"
             { printf("Method:\n"); }
#line 2134 "parser.tab.cpp"
    break;

  case 23: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr  */
#line 192 "parser.y"
                                                      { printf("IF-CONSTR\n"); }
#line 2140 "parser.tab.cpp"
    break;

  case 24: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr ELSE endlOpt expr  */
#line 193 "parser.y"
                                                                          { printf("IF_ELSE-CONSTR\n"); }
#line 2146 "parser.tab.cpp"
    break;

  case 25: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr endlList ELSE endlOpt expr  */
#line 194 "parser.y"
                                                                                   { printf("IF_ELSE-CONSTR\n"); }
#line 2152 "parser.tab.cpp"
    break;

  case 29: /* for_expr: FOR endlOpt '(' for_multy_list ')' endlOpt YIELD endlOpt expr  */
#line 208 "parser.y"
                                                                                              { printf("FOR MULTY LOOP\n"); }
#line 2158 "parser.tab.cpp"
    break;

  case 30: /* for_expr: FOR endlOpt '(' for_params if_condition_list ')' endlOpt YIELD endlOpt expr  */
#line 209 "parser.y"
                                                                                                            { printf("FOR LOOP: multy with IF_STMT\n"); }
#line 2164 "parser.tab.cpp"
    break;

  case 31: /* for_expr: FOR endlOpt '(' for_multy_list ')' endlOpt expr  */
#line 210 "parser.y"
                                                                                { printf("FOR MULTY LOOP\n"); }
#line 2170 "parser.tab.cpp"
    break;

  case 32: /* for_expr: FOR endlOpt '(' for_params if_condition_list ')' endlOpt expr  */
#line 211 "parser.y"
                                                                                               { printf("FOR LOOP: multy with IF_STMT\n"); }
#line 2176 "parser.tab.cpp"
    break;

  case 58: /* expr_list_e: expr_list  */
#line 285 "parser.y"
                   { printf("PARSER found expr_list - expr_list\n"); }
#line 2182 "parser.tab.cpp"
    break;

  case 59: /* expr_list_e: %empty  */
#line 286 "parser.y"
                     { printf("PARSER found expr_list - nothing\n"); }
#line 2188 "parser.tab.cpp"
    break;

  case 60: /* expr_list: expr  */
#line 291 "parser.y"
                      { printf("PARSER found expr_list - expr\n"); }
#line 2194 "parser.tab.cpp"
    break;

  case 61: /* expr_list: expr_list endlOpt ',' endlOpt expr  */
#line 292 "parser.y"
                                          { printf("PARSER found expr_list - expr_list\n"); }
#line 2200 "parser.tab.cpp"
    break;

  case 62: /* expr: const  */
#line 297 "parser.y"
            {printf("PARSER found expr - const\n"); }
#line 2206 "parser.tab.cpp"
    break;

  case 63: /* expr: IDENTIFIER  */
#line 298 "parser.y"
                                       {printf("PARSER found expr - IDENTIFIER\n"); }
#line 2212 "parser.tab.cpp"
    break;

  case 64: /* expr: IDENTIFIER endlOpt '=' endlOpt expr  */
#line 299 "parser.y"
                                          { printf("Assignment:\n"); }
#line 2218 "parser.tab.cpp"
    break;

  case 65: /* expr: '(' expr ')'  */
#line 300 "parser.y"
                   { printf("PARSER found expr - ( expr ) \n"); }
#line 2224 "parser.tab.cpp"
    break;

  case 66: /* expr: expr '>' endlOpt expr  */
#line 301 "parser.y"
                            {printf("PARSER found expr - expr > expr\n"); }
#line 2230 "parser.tab.cpp"
    break;

  case 67: /* expr: expr '<' endlOpt expr  */
#line 302 "parser.y"
                            {printf("PARSER found expr - expr < expr\n"); }
#line 2236 "parser.tab.cpp"
    break;

  case 68: /* expr: expr MORE_OR_EQUAL_OPERATOR endlOpt expr  */
#line 303 "parser.y"
                                               {printf("PARSER found expr - expr >= expr\n"); }
#line 2242 "parser.tab.cpp"
    break;

  case 69: /* expr: expr LESS_OR_EQUAL_OPERATOR endlOpt expr  */
#line 304 "parser.y"
                                               {printf("PARSER found expr - expr <= expr\n"); }
#line 2248 "parser.tab.cpp"
    break;

  case 70: /* expr: expr EQ endlOpt expr  */
#line 305 "parser.y"
                           {printf("PARSER found expr - expr == expr\n"); }
#line 2254 "parser.tab.cpp"
    break;

  case 71: /* expr: expr NEQ endlOpt expr  */
#line 306 "parser.y"
                            {printf("PARSER found expr - expr != expr\n"); }
#line 2260 "parser.tab.cpp"
    break;

  case 72: /* expr: expr '+' endlOpt expr  */
#line 307 "parser.y"
                            { printf("PARSER found expr - expr + expr\n"); }
#line 2266 "parser.tab.cpp"
    break;

  case 73: /* expr: expr '-' endlOpt expr  */
#line 308 "parser.y"
                            { printf("PARSER found expr - expr - expr\n"); }
#line 2272 "parser.tab.cpp"
    break;

  case 74: /* expr: expr '/' endlOpt expr  */
#line 309 "parser.y"
                            { printf("PARSER found expr - expr / expr\n"); }
#line 2278 "parser.tab.cpp"
    break;

  case 75: /* expr: expr '*' endlOpt expr  */
#line 310 "parser.y"
                            { printf("PARSER found expr - expr * expr\n"); }
#line 2284 "parser.tab.cpp"
    break;

  case 76: /* expr: expr '%' endlOpt expr  */
#line 311 "parser.y"
                            { printf("PARSER found expr - expr % expr\n"); }
#line 2290 "parser.tab.cpp"
    break;

  case 77: /* expr: expr '&' endlOpt expr  */
#line 312 "parser.y"
                            { printf("PARSER found expr - expr && expr\n"); }
#line 2296 "parser.tab.cpp"
    break;

  case 78: /* expr: expr '|' endlOpt expr  */
#line 313 "parser.y"
                            { printf("PARSER found expr - expr | expr\n"); }
#line 2302 "parser.tab.cpp"
    break;

  case 79: /* expr: expr KW_OR endlOpt expr  */
#line 314 "parser.y"
                              { printf("PARSER found expr - expr || expr\n"); }
#line 2308 "parser.tab.cpp"
    break;

  case 80: /* expr: expr KW_AND endlOpt expr  */
#line 315 "parser.y"
                               { printf("PARSER found expr - expr && expr\n"); }
#line 2314 "parser.tab.cpp"
    break;

  case 81: /* expr: '-' expr  */
#line 316 "parser.y"
                             { printf("PARSER found expr - UMINUS\n"); }
#line 2320 "parser.tab.cpp"
    break;

  case 82: /* expr: '+' expr  */
#line 317 "parser.y"
                            { printf("PARSER found expr - UPLUS\n"); }
#line 2326 "parser.tab.cpp"
    break;

  case 83: /* expr: func_call  */
#line 318 "parser.y"
                { printf("PARSER found expr - func_call\n"); }
#line 2332 "parser.tab.cpp"
    break;

  case 84: /* expr: if_else_expr  */
#line 319 "parser.y"
                                        { printf("PARSER found expr - if_else_expr\n"); }
#line 2338 "parser.tab.cpp"
    break;

  case 85: /* expr: for_expr  */
#line 320 "parser.y"
               { printf("PARSER found expr - for_expr\n"); }
#line 2344 "parser.tab.cpp"
    break;

  case 86: /* expr: while_expr  */
#line 321 "parser.y"
                 { printf("PARSER found expr - while_expr\n"); }
#line 2350 "parser.tab.cpp"
    break;

  case 87: /* expr: do_while_expr  */
#line 322 "parser.y"
                    { printf("PARSER found expr - do_while_expr\n"); }
#line 2356 "parser.tab.cpp"
    break;

  case 88: /* expr: try_expr  */
#line 323 "parser.y"
               { printf("PARSER found expr - try_expr\n"); }
#line 2362 "parser.tab.cpp"
    break;

  case 89: /* expr: match_expr  */
#line 324 "parser.y"
                 { printf("PARSER found expr - match_expr\n"); }
#line 2368 "parser.tab.cpp"
    break;

  case 90: /* expr: '{' statement_expr_list_e '}'  */
#line 325 "parser.y"
                                     { printf("PARSER found expr -  { statement_expr_list_e }\n"); }
#line 2374 "parser.tab.cpp"
    break;

  case 91: /* expr: func  */
#line 326 "parser.y"
           { printf("Function:\n"); }
#line 2380 "parser.tab.cpp"
    break;

  case 92: /* expr: method_call  */
#line 327 "parser.y"
                  { printf("method_call:\n"); }
#line 2386 "parser.tab.cpp"
    break;

  case 93: /* expr: instance_class  */
#line 328 "parser.y"
                     { printf("instance_class:\n"); }
#line 2392 "parser.tab.cpp"
    break;

  case 94: /* expr: READLINE '(' ')'  */
#line 329 "parser.y"
                     { printf("readLine:\n"); }
#line 2398 "parser.tab.cpp"
    break;

  case 95: /* expr: PRINT '(' expr ')'  */
#line 330 "parser.y"
                        { printf("print:\n"); }
#line 2404 "parser.tab.cpp"
    break;

  case 96: /* num_const: NUM_10  */
#line 335 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 2410 "parser.tab.cpp"
    break;

  case 97: /* num_const: NUM_16  */
#line 336 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 2416 "parser.tab.cpp"
    break;

  case 98: /* num_const: REAL_NUMBER  */
#line 337 "parser.y"
                  { printf("PARSER found - REAL\n"); }
#line 2422 "parser.tab.cpp"
    break;

  case 99: /* num_const: REAL_NUMBER_EXPONENT  */
#line 338 "parser.y"
                           { printf("PARSER found - REAL_EXP\n"); }
#line 2428 "parser.tab.cpp"
    break;

  case 110: /* func_call: IDENTIFIER '(' expr_list_e ')'  */
#line 360 "parser.y"
                                     { printf("Function call: WITH PARAMS\n"); }
#line 2434 "parser.tab.cpp"
    break;

  case 143: /* array_literal: ARRAY '(' expr_list_e ')'  */
#line 441 "parser.y"
                                { printf("PARSER found Array\n"); }
#line 2440 "parser.tab.cpp"
    break;

  case 145: /* list: LIST '(' expr_list_e ')'  */
#line 452 "parser.y"
                               { printf("PARSER found List\n"); }
#line 2446 "parser.tab.cpp"
    break;

  case 146: /* vector: VECTOR '(' expr_list_e ')'  */
#line 458 "parser.y"
                                 { printf("PARSER found Vector\n"); }
#line 2452 "parser.tab.cpp"
    break;

  case 147: /* set: SET '(' expr_list_e ')'  */
#line 464 "parser.y"
                              { printf("PARSER found Set\n"); }
#line 2458 "parser.tab.cpp"
    break;

  case 148: /* endlList: ENDL  */
#line 472 "parser.y"
                    { printf("PARSER found ENDL\n"); }
#line 2464 "parser.tab.cpp"
    break;

  case 149: /* endlList: endlList ENDL  */
#line 473 "parser.y"
                    { printf("PARSER found endlList\n"); }
#line 2470 "parser.tab.cpp"
    break;

  case 150: /* endlOpt: endlList  */
#line 478 "parser.y"
               { printf("PARSER found endlOpt\n"); }
#line 2476 "parser.tab.cpp"
    break;

  case 152: /* semicolonList: ';'  */
#line 484 "parser.y"
                   { printf("PARSER found SEMICOLON\n"); }
#line 2482 "parser.tab.cpp"
    break;

  case 153: /* semicolonList: semicolonList ';'  */
#line 485 "parser.y"
                        { printf("PARSER found semicolonList\n"); }
#line 2488 "parser.tab.cpp"
    break;


#line 2492 "parser.tab.cpp"

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

#line 494 "parser.y"

