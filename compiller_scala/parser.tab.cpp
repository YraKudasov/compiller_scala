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
  YYSYMBOL_if_condition_list = 90,         /* if_condition_list  */
  YYSYMBOL_for_expr = 91,                  /* for_expr  */
  YYSYMBOL_for_params = 92,                /* for_params  */
  YYSYMBOL_for_multy_list = 93,            /* for_multy_list  */
  YYSYMBOL_while_expr = 94,                /* while_expr  */
  YYSYMBOL_do_while_expr = 95,             /* do_while_expr  */
  YYSYMBOL_match_expr = 96,                /* match_expr  */
  YYSYMBOL_case_condition = 97,            /* case_condition  */
  YYSYMBOL_int_literal_list_case = 98,     /* int_literal_list_case  */
  YYSYMBOL_case_list = 99,                 /* case_list  */
  YYSYMBOL_try_expr = 100,                 /* try_expr  */
  YYSYMBOL_catch = 101,                    /* catch  */
  YYSYMBOL_finally = 102,                  /* finally  */
  YYSYMBOL_expr_list_e = 103,              /* expr_list_e  */
  YYSYMBOL_expr_list = 104,                /* expr_list  */
  YYSYMBOL_expr = 105,                     /* expr  */
  YYSYMBOL_num_const = 106,                /* num_const  */
  YYSYMBOL_const = 107,                    /* const  */
  YYSYMBOL_func_call = 108,                /* func_call  */
  YYSYMBOL_params = 109,                   /* params  */
  YYSYMBOL_func = 110,                     /* func  */
  YYSYMBOL_method_params_list_e = 111,     /* method_params_list_e  */
  YYSYMBOL_method_params_list = 112,       /* method_params_list  */
  YYSYMBOL_method = 113,                   /* method  */
  YYSYMBOL_method_call = 114,              /* method_call  */
  YYSYMBOL_type = 115,                     /* type  */
  YYSYMBOL_type_list_car = 116,            /* type_list_car  */
  YYSYMBOL_type_list = 117,                /* type_list  */
  YYSYMBOL_type_list_simple = 118,         /* type_list_simple  */
  YYSYMBOL_array = 119,                    /* array  */
  YYSYMBOL_list = 120,                     /* list  */
  YYSYMBOL_vector = 121,                   /* vector  */
  YYSYMBOL_set = 122,                      /* set  */
  YYSYMBOL_endlList = 123,                 /* endlList  */
  YYSYMBOL_endlOpt = 124,                  /* endlOpt  */
  YYSYMBOL_semicolonList = 125             /* semicolonList  */
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
#define YYLAST   980

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  145
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  348

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
       2,     2,     2,     2,     2,     2,     2,    15,     8,     2,
      18,    19,    13,    11,     5,    12,    81,    14,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    79,    80,
      10,     6,     9,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    20,     2,    21,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    77,     7,    78,     2,     2,     2,     2,
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
      70,    71,    72,    73,    74,    75,    76
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    95,    95,   125,   126,   130,   131,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   158,   159,   163,   164,
     165,   166,   167,   176,   177,   178,   183,   184,   185,   192,
     193,   194,   195,   200,   201,   206,   207,   213,   217,   221,
     222,   227,   228,   229,   230,   234,   235,   239,   240,   241,
     242,   248,   249,   250,   254,   258,   265,   266,   271,   272,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   316,   317,   318,   319,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   341,
     345,   346,   347,   348,   352,   357,   358,   362,   363,   367,
     368,   373,   374,   375,   381,   382,   383,   384,   385,   386,
     387,   391,   392,   398,   399,   403,   416,   422,   428,   434,
     442,   443,   448,   449,   454,   455
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
  "FINALLY", "PRINT", "READLINE", "KW_TRUE", "KW_FALSE", "KW_NULL", "EQ",
  "NEQ", "KW_OR", "KW_AND", "MORE_OR_EQUAL_OPERATOR",
  "LESS_OR_EQUAL_OPERATOR", "INT_KW", "DOUBLE_KW", "STRING_KW", "CHAR_KW",
  "BOOLEAN_KW", "ANY_KW", "UNIT_KW", "TO", "BY", "YIELD",
  "GENERATOR_OPERATOR", "RIGHT_ARROW_OPERATOR", "ID_COLLECTION", "ARRAY",
  "LIST", "VECTOR", "SET", "DEF", "NEW", "PROTECTED", "PRIVATE", "CLASS",
  "CLASS_ID", "EXTENDS", "'{'", "'}'", "':'", "';'", "'.'", "$accept",
  "program", "instance_class", "visibility_modifier",
  "statement_expr_list", "statement_expr_list_e", "statement",
  "if_else_expr", "if_condition_list", "for_expr", "for_params",
  "for_multy_list", "while_expr", "do_while_expr", "match_expr",
  "case_condition", "int_literal_list_case", "case_list", "try_expr",
  "catch", "finally", "expr_list_e", "expr_list", "expr", "num_const",
  "const", "func_call", "params", "func", "method_params_list_e",
  "method_params_list", "method", "method_call", "type", "type_list_car",
  "type_list", "type_list_simple", "array", "list", "vector", "set",
  "endlList", "endlOpt", "semicolonList", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-232)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-144)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      43,  -232,    31,  -232,    42,   439,  -232,  -232,   635,   635,
     696,  -232,  -232,  -232,  -232,    38,  -232,  -232,    45,    45,
      45,    45,    45,    45,   -36,    32,    61,  -232,  -232,  -232,
      65,    80,    86,    95,    60,   -23,  -232,  -232,  -232,    14,
    -232,    23,    45,  -232,  -232,  -232,  -232,  -232,  -232,  -232,
     907,  -232,   -12,  -232,  -232,  -232,  -232,  -232,  -232,  -232,
    -232,  -232,  -232,    10,   792,    21,   635,    47,   113,    74,
     100,   109,   110,   635,   111,   635,   635,   112,   635,   635,
     635,   635,   129,   139,    52,  -232,   319,    83,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    85,   138,   148,    96,   140,   103,   159,
      34,   907,   142,    45,    45,    45,   635,   155,   740,   635,
     182,   815,  -232,   164,   165,   166,   167,   172,     9,   169,
     635,  -232,    23,  -232,   907,  -232,    11,   635,   635,   635,
     635,   635,   635,   635,   635,   635,   635,   635,   635,   635,
     635,   635,   142,  -232,  -232,  -232,  -232,  -232,  -232,  -232,
    -232,  -232,   135,   188,   136,   635,  -232,   211,   375,    -6,
     635,    15,    16,   838,   154,   186,    82,   184,   861,    76,
    -232,  -232,  -232,  -232,  -232,   149,    30,   635,   148,   172,
     208,  -232,  -232,   439,   915,   928,    94,    94,   108,   108,
    -232,  -232,  -232,    51,    51,   161,   229,    94,    94,    -2,
     148,   217,   148,   907,    45,   213,   190,   245,   223,  -232,
     375,  -232,  -232,   907,    45,    45,    45,    45,    45,   752,
      45,    93,    45,    83,   240,    45,   191,   193,   220,  -232,
    -232,   907,   257,    68,  -232,    23,  -232,   907,  -232,  -232,
     635,    13,   635,   635,   635,   752,   635,   207,   635,   254,
     635,   254,   635,   214,   635,    45,   -13,   513,    11,   635,
     635,   142,   635,  -232,   635,  -232,  -232,   256,   752,   907,
     907,   907,  -232,   907,   635,   907,    97,    45,   907,    45,
     241,   752,   907,   574,    45,    11,    45,   907,   155,   884,
    -232,     4,   359,   907,  -232,  -232,   907,  -232,   259,   277,
     278,   279,    45,    26,   222,    45,   907,   635,   253,   635,
    -232,  -232,  -232,  -232,   225,   148,    45,    45,   635,    45,
     752,   635,   907,   635,   907,   148,  -232,   635,   635,  -232,
     635,  -232,   907,   907,  -232,   907,   907,  -232
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     143,   140,     0,     2,   142,     0,     1,   141,     0,     0,
     113,    95,    96,    97,    98,    61,   101,   100,   143,   143,
     143,   143,   143,   143,     0,     0,     0,   102,   103,   104,
       0,     0,     0,     0,     0,     0,     6,     5,    62,   143,
      92,     0,   143,     7,    83,    84,    85,    86,    88,    87,
       9,    99,    60,    82,    90,    22,    91,   105,   106,   107,
     108,    81,    80,    61,     0,     0,    57,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    57,    57,
      57,    57,   116,     3,     0,     8,   142,    16,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,     0,     0,     0,    64,     0,     0,     0,
      56,    58,     0,   143,   143,   143,     0,     0,   143,     0,
       0,     0,    93,     0,     0,     0,     0,   113,     0,   115,
      57,    89,     0,    13,    14,   144,   143,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   110,     0,     0,     0,   109,     0,     0,     0,
       0,     0,     0,     0,     0,    35,   143,     0,     0,     0,
      94,   136,   137,   138,   139,     0,     0,     0,     0,   113,
       0,    15,   145,     0,    77,    76,    65,    66,    71,    72,
      74,    73,    75,    69,    70,    78,    79,    67,    68,     0,
       0,   122,     0,   114,   143,    42,     0,    44,    45,    49,
       0,    39,    50,    63,   143,   143,   143,   143,   143,     0,
     143,   143,   143,     0,     0,   143,     0,     0,    51,    52,
     117,   120,     0,     0,     4,     0,    10,    11,    40,   132,
      57,   111,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   143,     0,     0,   143,     0,
       0,     0,     0,    53,     0,   118,    12,     0,     0,    59,
      43,    47,    46,    41,     0,    18,     0,   143,    19,   143,
      23,     0,    26,     0,   143,   143,   143,    31,     0,     0,
      37,     0,     0,   119,   121,   112,    48,   133,     0,     0,
       0,     0,   143,     0,    33,   143,    32,     0,     0,     0,
      36,    38,    54,    55,     0,     0,   143,   143,     0,   143,
       0,     0,    27,     0,    29,     0,   134,     0,     0,    24,
       0,    34,    30,    28,   135,    20,    21,    25
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -232,  -232,  -232,   -75,  -232,   248,   -35,  -232,  -232,  -232,
      -8,  -232,  -232,  -232,  -232,    87,  -232,  -151,  -232,  -232,
      70,   -71,  -232,    -5,  -232,  -130,  -232,  -109,  -232,  -232,
    -232,  -232,  -232,  -176,    98,  -232,  -231,  -232,  -232,  -232,
    -232,   -40,   203,  -209
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,    40,    41,    42,     3,    43,    44,   231,    45,
     175,   176,    46,    47,    48,   216,   217,   169,    49,   238,
     239,   109,   110,   111,    51,    52,    53,    65,    54,   128,
     129,    55,    56,   161,   162,   308,   287,    57,    58,    59,
      60,     4,     5,   136
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      50,   209,    86,    61,    62,    64,    85,   123,   124,   125,
     126,   132,   242,     1,     1,   187,  -143,     1,   186,   278,
     294,   224,   226,   219,   268,   103,   107,   219,    66,     7,
     289,     6,   220,   219,   249,   107,   220,     1,   218,  -143,
     108,    75,   220,   -17,  -143,     7,     1,    67,     1,   240,
      76,   133,    83,    18,    19,   309,    66,   295,   329,   190,
      90,    91,    92,    93,    94,    95,    96,   135,   118,   104,
     120,   121,   221,   107,   222,    67,   248,   210,   222,    77,
     243,   134,   322,    78,   222,     1,    82,   275,   188,   105,
     218,   192,   -17,    34,   225,   227,     1,   191,    79,   263,
     114,   232,   101,   102,    80,    92,    93,    94,    95,    96,
     307,   173,   265,    81,   178,   286,   236,   237,   245,   113,
     301,    94,    95,    96,   112,   282,   115,   116,   117,   119,
     131,   122,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   127,   305,   336,
     154,   155,   156,   157,   158,   159,   160,   130,   246,   344,
     213,   314,   152,   135,   153,   223,   164,   165,    88,    89,
      90,    91,    92,    93,    94,    95,    96,   163,   166,   277,
     168,   174,   241,   181,   182,   183,   184,   189,   247,    88,
      89,    90,    91,    92,    93,    94,    95,    96,   185,   210,
     341,   154,   155,   156,   157,   158,   159,   160,    97,    98,
     276,   100,   101,   102,   211,   212,   214,   229,    68,   230,
     234,    69,    70,    71,    72,    73,    74,   244,   105,    97,
      98,    99,   100,   101,   102,   250,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    87,   253,   279,   280,   281,
     313,   283,   255,   285,   254,   288,   256,   290,   269,   292,
     179,   237,   297,   274,   299,   300,    68,   302,   271,   303,
     272,   284,   286,   312,   291,   304,    97,    98,   324,   306,
     101,   102,   325,   330,   326,   327,   333,    84,   316,   335,
     320,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,     0,   257,   273,     0,
     251,     0,   332,   167,   334,     0,   170,   171,   172,     0,
       0,   177,     7,   339,     0,     0,   342,     0,   343,     0,
       8,     9,   345,   346,     0,   347,     0,    10,     0,   193,
       0,    11,    12,    13,    14,    15,    16,    17,     0,    18,
      19,     0,    20,    21,    22,    23,     0,     0,    24,     0,
       0,    25,    26,    27,    28,    29,    88,    89,    90,    91,
      92,    93,    94,    95,    96,     0,     0,     0,     0,   233,
       0,     0,     0,     0,     0,    30,    31,    32,    33,    34,
      35,    36,    37,     0,    38,     0,    39,    11,    12,    13,
      14,   215,    16,    17,     0,     0,    97,    98,    99,   100,
     101,   102,     0,     0,     0,     0,     0,   252,     0,    27,
      28,    29,     0,     0,     0,     0,     0,   258,   259,   260,
     261,   262,     0,   264,   266,   267,     0,   323,   270,     0,
       0,    30,    31,    32,    33,     0,     0,     0,     0,     0,
       8,     9,     0,     0,     0,     0,     0,    10,     0,     0,
       0,    11,    12,    13,    14,    15,    16,    17,   293,    18,
      19,   298,    20,    21,    22,    23,     0,     0,    24,     0,
       0,    25,    26,    27,    28,    29,     0,     0,     0,     0,
     310,     0,   311,     0,     0,     0,     0,   317,   318,   319,
       0,     0,     0,     0,     0,    30,    31,    32,    33,    34,
      35,    36,    37,     0,    38,   328,    39,     0,   331,     0,
       0,     0,     0,     0,     8,     9,     0,     0,     0,   337,
     338,    10,   340,     0,     0,    11,    12,    13,    14,    15,
      16,    17,     0,     0,     0,     0,    20,    21,    22,    23,
       0,     0,    24,     0,     0,    25,    26,    27,    28,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   296,     0,     0,     0,    30,
      31,    32,    33,     0,    35,     8,     9,     0,    38,     0,
      39,     0,    10,     0,     0,     0,    11,    12,    13,    14,
      15,    16,    17,     0,     0,     0,     0,    20,    21,    22,
      23,     0,     0,    24,     0,     0,    25,    26,    27,    28,
      29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   315,     0,     0,     0,
      30,    31,    32,    33,     0,    35,     8,     9,     0,    38,
       0,    39,     0,    10,     0,     0,     0,    11,    12,    13,
      14,    15,    16,    17,     0,     0,     0,     0,    20,    21,
      22,    23,     0,     0,    24,     0,     0,    25,    26,    27,
      28,    29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,    31,    32,    33,     0,    35,     8,     9,     0,
      38,     0,    39,     0,    10,     0,     0,     0,    11,    12,
      13,    14,    63,    16,    17,     0,     0,     0,     0,    20,
      21,    22,    23,     0,     0,    24,     0,     0,    25,    26,
      27,    28,    29,     1,     0,     0,     0,    88,    89,    90,
      91,    92,    93,    94,    95,    96,     0,     0,     0,     0,
       0,     0,    30,    31,    32,    33,     0,    35,     0,     0,
       0,    38,     0,    39,    11,    12,    13,    14,     0,    16,
      17,     0,     0,     0,     0,     0,     0,    97,    98,    99,
     100,   101,   102,     0,     0,     0,    27,    28,    29,    88,
      89,    90,    91,    92,    93,    94,    95,    96,     0,     0,
       0,   106,     0,     0,     0,     0,     0,     0,    30,    31,
      32,    33,    88,    89,    90,    91,    92,    93,    94,    95,
      96,     0,     0,     0,   180,     0,     0,     0,     0,    97,
      98,    99,   100,   101,   102,    88,    89,    90,    91,    92,
      93,    94,    95,    96,     0,     0,     0,   228,     0,     0,
       0,     0,    97,    98,    99,   100,   101,   102,    88,    89,
      90,    91,    92,    93,    94,    95,    96,     0,     0,     0,
     235,     0,     0,     0,     0,    97,    98,    99,   100,   101,
     102,    88,    89,    90,    91,    92,    93,    94,    95,    96,
       0,     0,     0,   321,     0,     0,     0,     0,    97,    98,
      99,   100,   101,   102,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,    90,    91,    92,
      93,    94,    95,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    97,    98,    99,   100,   101,   102,
       0,     0,    97,    98,     0,     0,   101,   102,     0,     0,
       0,     0,     0,     0,     0,    97,    98,     0,     0,   101,
     102
};

static const yytype_int16 yycheck[] =
{
       5,   152,    42,     8,     9,    10,    41,    78,    79,    80,
      81,    86,   188,     3,     3,     6,     6,     3,   127,     6,
      33,     6,     6,    29,   233,    37,     5,    29,    18,     3,
     261,     0,    38,    29,   210,     5,    38,     3,   168,     5,
      19,    77,    38,     0,     6,     3,     3,    37,     3,    19,
      18,    86,    75,    30,    31,   286,    18,   266,    32,   130,
       9,    10,    11,    12,    13,    14,    15,    80,    73,    81,
      75,    76,    78,     5,    80,    37,    78,    64,    80,    18,
     189,    86,    78,    18,    80,     3,    26,    19,    79,    79,
     220,    80,    78,    70,    79,    79,     3,   132,    18,   229,
      26,    19,    51,    52,    18,    11,    12,    13,    14,    15,
     286,   116,    19,    18,   119,    18,    40,    41,   193,     6,
     271,    13,    14,    15,    77,   255,    26,    18,    18,    18,
      78,    19,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,    18,   278,   325,
      53,    54,    55,    56,    57,    58,    59,    18,   193,   335,
     165,   291,    77,    80,    26,   170,    26,    64,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    81,    19,   250,
      38,    26,   187,    19,    19,    19,    19,    18,   193,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    26,    64,
     330,    53,    54,    55,    56,    57,    58,    59,    47,    48,
     245,    50,    51,    52,    26,    79,     5,    63,    15,    33,
      36,    18,    19,    20,    21,    22,    23,    19,    79,    47,
      48,    49,    50,    51,    52,    18,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    42,    33,   252,   253,   254,
     290,   256,     7,   258,    64,   260,    33,   262,    18,   264,
      78,    41,   267,     6,   269,   270,    63,   272,    77,   274,
      77,    64,    18,    32,    60,    19,    47,    48,    19,   284,
      51,    52,     5,    61,     6,     6,    33,    39,   293,    64,
     298,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,    -1,   220,   238,    -1,
     212,    -1,   317,   110,   319,    -1,   113,   114,   115,    -1,
      -1,   118,     3,   328,    -1,    -1,   331,    -1,   333,    -1,
      11,    12,   337,   338,    -1,   340,    -1,    18,    -1,   136,
      -1,    22,    23,    24,    25,    26,    27,    28,    -1,    30,
      31,    -1,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    42,    43,    44,    45,    46,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    -1,    -1,   176,
      -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,
      71,    72,    73,    -1,    75,    -1,    77,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    47,    48,    49,    50,
      51,    52,    -1,    -1,    -1,    -1,    -1,   214,    -1,    44,
      45,    46,    -1,    -1,    -1,    -1,    -1,   224,   225,   226,
     227,   228,    -1,   230,   231,   232,    -1,    78,   235,    -1,
      -1,    66,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,   265,    30,
      31,   268,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,
     287,    -1,   289,    -1,    -1,    -1,    -1,   294,   295,   296,
      -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,
      71,    72,    73,    -1,    75,   312,    77,    -1,   315,    -1,
      -1,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,   326,
     327,    18,   329,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    42,    43,    44,    45,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      67,    68,    69,    -1,    71,    11,    12,    -1,    75,    -1,
      77,    -1,    18,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    42,    43,    44,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      66,    67,    68,    69,    -1,    71,    11,    12,    -1,    75,
      -1,    77,    -1,    18,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    42,    43,    44,
      45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    68,    69,    -1,    71,    11,    12,    -1,
      75,    -1,    77,    -1,    18,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    42,    43,
      44,    45,    46,     3,    -1,    -1,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    67,    68,    69,    -1,    71,    -1,    -1,
      -1,    75,    -1,    77,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    -1,    -1,    -1,    44,    45,    46,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      68,    69,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    52,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    47,    48,    49,    50,    51,    52,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    47,    48,
      49,    50,    51,    52,     7,     8,     9,    10,    11,    12,
      13,    14,    15,     8,     9,    10,    11,    12,    13,    14,
      15,    47,    48,    49,    50,    51,    52,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,    52,
      -1,    -1,    47,    48,    -1,    -1,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    -1,    51,
      52
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    83,    87,   123,   124,     0,     3,    11,    12,
      18,    22,    23,    24,    25,    26,    27,    28,    30,    31,
      33,    34,    35,    36,    39,    42,    43,    44,    45,    46,
      66,    67,    68,    69,    70,    71,    72,    73,    75,    77,
      84,    85,    86,    88,    89,    91,    94,    95,    96,   100,
     105,   106,   107,   108,   110,   113,   114,   119,   120,   121,
     122,   105,   105,    26,   105,   109,    18,    37,   124,   124,
     124,   124,   124,   124,   124,    77,    18,    18,    18,    18,
      18,    18,    26,    75,    87,    88,   123,   124,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    47,    48,    49,
      50,    51,    52,    37,    81,    79,    19,     5,    19,   103,
     104,   105,    77,     6,    26,    26,    18,    18,   105,    18,
     105,   105,    19,   103,   103,   103,   103,    18,   111,   112,
      18,    78,    85,    88,   105,    80,   125,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,    77,    26,    53,    54,    55,    56,    57,    58,
      59,   115,   116,    81,    26,    64,    19,   124,    38,    99,
     124,   124,   124,   105,    26,    92,    93,   124,   105,    78,
      19,    19,    19,    19,    19,    26,   109,     6,    79,    18,
     103,    88,    80,   124,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,    99,
      64,    26,    79,   105,     5,    26,    97,    98,   107,    29,
      38,    78,    80,   105,     6,    79,     6,    79,    19,    63,
      33,    90,    19,   124,    36,    19,    40,    41,   101,   102,
      19,   105,   115,   109,    19,    85,    88,   105,    78,   115,
      18,   116,   124,    33,    64,     7,    33,    97,   124,   124,
     124,   124,   124,   107,   124,    19,   124,   124,   125,    18,
     124,    77,    77,   102,     6,    19,    88,   103,     6,   105,
     105,   105,   107,   105,    64,   105,    18,   118,   105,   118,
     105,    60,   105,   124,    33,   125,    62,   105,   124,   105,
     105,    99,   105,   105,    19,   107,   105,   115,   117,   118,
     124,   124,    32,   123,   107,    62,   105,   124,   124,   124,
      92,    19,    78,    78,    19,     5,     6,     6,   124,    32,
      61,   124,   105,    33,   105,    64,   115,   124,   124,   105,
     124,   107,   105,   105,   115,   105,   105,   105
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    82,    83,    84,    84,    85,    85,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    87,    87,    88,    88,
      88,    88,    88,    89,    89,    89,    90,    90,    90,    91,
      91,    91,    91,    92,    92,    93,    93,    94,    95,    96,
      96,    97,    97,    97,    97,    98,    98,    99,    99,    99,
      99,   100,   100,   100,   101,   102,   103,   103,   104,   104,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   106,   106,   106,   106,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   108,
     109,   109,   109,   109,   110,   111,   111,   112,   112,   113,
     113,   114,   114,   114,   115,   115,   115,   115,   115,   115,
     115,   116,   116,   117,   117,   118,   119,   120,   121,   122,
     123,   123,   124,   124,   125,   125
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     5,     1,     1,     1,     2,     1,
       5,     5,     6,     3,     3,     4,     3,     0,     7,     7,
      11,    11,     1,     7,    10,    11,     3,     5,     6,     9,
      10,     7,     8,     5,     7,     1,     5,     7,     8,     5,
       5,     3,     1,     3,     1,     1,     3,     4,     5,     2,
       2,     5,     5,     6,     4,     4,     1,     0,     1,     5,
       1,     1,     1,     5,     3,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     3,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       3,     5,     7,     0,     5,     1,     0,     3,     4,     7,
       5,     8,     5,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     5,     4,     4,     4,     4,
       1,     2,     1,     0,     1,     2
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
#line 146 "parser.y"
                { printf("Add first statement :\n"); }
#line 1966 "parser.tab.cpp"
    break;

  case 8: /* statement_expr_list: visibility_modifier statement  */
#line 147 "parser.y"
                                    { printf("Add first visibility_modifier statement :\n"); }
#line 1972 "parser.tab.cpp"
    break;

  case 9: /* statement_expr_list: expr  */
#line 148 "parser.y"
           { printf("Add first statement :\n"); }
#line 1978 "parser.tab.cpp"
    break;

  case 10: /* statement_expr_list: statement_expr_list endlOpt semicolonList endlOpt statement  */
#line 149 "parser.y"
                                                                   { printf("Add new statement to statement_expr_list :\n"); }
#line 1984 "parser.tab.cpp"
    break;

  case 11: /* statement_expr_list: statement_expr_list endlOpt semicolonList endlOpt expr  */
#line 150 "parser.y"
                                                              { printf("Add new expr to statement_expr_list :\n"); }
#line 1990 "parser.tab.cpp"
    break;

  case 12: /* statement_expr_list: statement_expr_list endlOpt semicolonList endlOpt visibility_modifier statement  */
#line 151 "parser.y"
                                                                                       { printf("Add new visibility_modifier to statement_expr_list :\n"); }
#line 1996 "parser.tab.cpp"
    break;

  case 13: /* statement_expr_list: statement_expr_list endlList statement  */
#line 152 "parser.y"
                                              { printf("Add new statement to statement_expr_list :\n"); }
#line 2002 "parser.tab.cpp"
    break;

  case 14: /* statement_expr_list: statement_expr_list endlList expr  */
#line 153 "parser.y"
                                         { printf("Add new expr to statement_expr_list :\n"); }
#line 2008 "parser.tab.cpp"
    break;

  case 15: /* statement_expr_list: statement_expr_list endlList visibility_modifier statement  */
#line 154 "parser.y"
                                                                  { printf("Add new visibility_modifier to statement_expr_list :\n"); }
#line 2014 "parser.tab.cpp"
    break;

  case 17: /* statement_expr_list_e: %empty  */
#line 159 "parser.y"
                     { printf("PARSER found statement_list_e - nothing\n"); }
#line 2020 "parser.tab.cpp"
    break;

  case 18: /* statement: VAL endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 163 "parser.y"
                                                       { printf("implicit value declaration:\n"); }
#line 2026 "parser.tab.cpp"
    break;

  case 19: /* statement: VAR endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 164 "parser.y"
                                                       { printf("implicit variable declaration:\n"); }
#line 2032 "parser.tab.cpp"
    break;

  case 20: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 165 "parser.y"
                                                                                           { printf("explicit value declaration:\n"); }
#line 2038 "parser.tab.cpp"
    break;

  case 21: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 166 "parser.y"
                                                                                           { printf("explicit variable declaration:\n"); }
#line 2044 "parser.tab.cpp"
    break;

  case 22: /* statement: method  */
#line 167 "parser.y"
             { printf("Method:\n"); }
#line 2050 "parser.tab.cpp"
    break;

  case 23: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr  */
#line 176 "parser.y"
                                                      { printf("IF-CONSTR\n"); }
#line 2056 "parser.tab.cpp"
    break;

  case 24: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr ELSE endlOpt expr  */
#line 177 "parser.y"
                                                                          { printf("IF_ELSE-CONSTR\n"); }
#line 2062 "parser.tab.cpp"
    break;

  case 25: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr endlList ELSE endlOpt expr  */
#line 178 "parser.y"
                                                                                   { printf("IF_ELSE-CONSTR\n"); }
#line 2068 "parser.tab.cpp"
    break;

  case 29: /* for_expr: FOR endlOpt '(' for_multy_list ')' endlOpt YIELD endlOpt expr  */
#line 192 "parser.y"
                                                                                              { printf("FOR MULTY LOOP\n"); }
#line 2074 "parser.tab.cpp"
    break;

  case 30: /* for_expr: FOR endlOpt '(' for_params if_condition_list ')' endlOpt YIELD endlOpt expr  */
#line 193 "parser.y"
                                                                                                            { printf("FOR LOOP: multy with IF_STMT\n"); }
#line 2080 "parser.tab.cpp"
    break;

  case 31: /* for_expr: FOR endlOpt '(' for_multy_list ')' endlOpt expr  */
#line 194 "parser.y"
                                                                                { printf("FOR MULTY LOOP\n"); }
#line 2086 "parser.tab.cpp"
    break;

  case 32: /* for_expr: FOR endlOpt '(' for_params if_condition_list ')' endlOpt expr  */
#line 195 "parser.y"
                                                                                               { printf("FOR LOOP: multy with IF_STMT\n"); }
#line 2092 "parser.tab.cpp"
    break;

  case 56: /* expr_list_e: expr_list  */
#line 265 "parser.y"
                   { printf("PARSER found expr_list - expr_list\n"); }
#line 2098 "parser.tab.cpp"
    break;

  case 57: /* expr_list_e: %empty  */
#line 266 "parser.y"
                     { printf("PARSER found expr_list - nothing\n"); }
#line 2104 "parser.tab.cpp"
    break;

  case 58: /* expr_list: expr  */
#line 271 "parser.y"
                      { printf("PARSER found expr_list - expr\n"); }
#line 2110 "parser.tab.cpp"
    break;

  case 59: /* expr_list: expr_list endlOpt ',' endlOpt expr  */
#line 272 "parser.y"
                                          { printf("PARSER found expr_list - expr_list\n"); }
#line 2116 "parser.tab.cpp"
    break;

  case 60: /* expr: const  */
#line 277 "parser.y"
            {printf("PARSER found expr - const\n"); }
#line 2122 "parser.tab.cpp"
    break;

  case 61: /* expr: IDENTIFIER  */
#line 278 "parser.y"
                                       {printf("PARSER found expr - IDENTIFIER\n"); }
#line 2128 "parser.tab.cpp"
    break;

  case 62: /* expr: CLASS_ID  */
#line 279 "parser.y"
               {printf("PARSER found expr - CLASS_ID\n"); }
#line 2134 "parser.tab.cpp"
    break;

  case 63: /* expr: IDENTIFIER endlOpt '=' endlOpt expr  */
#line 280 "parser.y"
                                          { printf("Assignment:\n"); }
#line 2140 "parser.tab.cpp"
    break;

  case 64: /* expr: '(' expr ')'  */
#line 281 "parser.y"
                   { printf("PARSER found expr - ( expr ) \n"); }
#line 2146 "parser.tab.cpp"
    break;

  case 65: /* expr: expr '>' endlOpt expr  */
#line 282 "parser.y"
                            {printf("PARSER found expr - expr > expr\n"); }
#line 2152 "parser.tab.cpp"
    break;

  case 66: /* expr: expr '<' endlOpt expr  */
#line 283 "parser.y"
                            {printf("PARSER found expr - expr < expr\n"); }
#line 2158 "parser.tab.cpp"
    break;

  case 67: /* expr: expr MORE_OR_EQUAL_OPERATOR endlOpt expr  */
#line 284 "parser.y"
                                               {printf("PARSER found expr - expr >= expr\n"); }
#line 2164 "parser.tab.cpp"
    break;

  case 68: /* expr: expr LESS_OR_EQUAL_OPERATOR endlOpt expr  */
#line 285 "parser.y"
                                               {printf("PARSER found expr - expr <= expr\n"); }
#line 2170 "parser.tab.cpp"
    break;

  case 69: /* expr: expr EQ endlOpt expr  */
#line 286 "parser.y"
                           {printf("PARSER found expr - expr == expr\n"); }
#line 2176 "parser.tab.cpp"
    break;

  case 70: /* expr: expr NEQ endlOpt expr  */
#line 287 "parser.y"
                            {printf("PARSER found expr - expr != expr\n"); }
#line 2182 "parser.tab.cpp"
    break;

  case 71: /* expr: expr '+' endlOpt expr  */
#line 288 "parser.y"
                            { printf("PARSER found expr - expr + expr\n"); }
#line 2188 "parser.tab.cpp"
    break;

  case 72: /* expr: expr '-' endlOpt expr  */
#line 289 "parser.y"
                            { printf("PARSER found expr - expr - expr\n"); }
#line 2194 "parser.tab.cpp"
    break;

  case 73: /* expr: expr '/' endlOpt expr  */
#line 290 "parser.y"
                            { printf("PARSER found expr - expr / expr\n"); }
#line 2200 "parser.tab.cpp"
    break;

  case 74: /* expr: expr '*' endlOpt expr  */
#line 291 "parser.y"
                            { printf("PARSER found expr - expr * expr\n"); }
#line 2206 "parser.tab.cpp"
    break;

  case 75: /* expr: expr '%' endlOpt expr  */
#line 292 "parser.y"
                            { printf("PARSER found expr - expr % expr\n"); }
#line 2212 "parser.tab.cpp"
    break;

  case 76: /* expr: expr '&' endlOpt expr  */
#line 293 "parser.y"
                            { printf("PARSER found expr - expr && expr\n"); }
#line 2218 "parser.tab.cpp"
    break;

  case 77: /* expr: expr '|' endlOpt expr  */
#line 294 "parser.y"
                            { printf("PARSER found expr - expr | expr\n"); }
#line 2224 "parser.tab.cpp"
    break;

  case 78: /* expr: expr KW_OR endlOpt expr  */
#line 295 "parser.y"
                              { printf("PARSER found expr - expr || expr\n"); }
#line 2230 "parser.tab.cpp"
    break;

  case 79: /* expr: expr KW_AND endlOpt expr  */
#line 296 "parser.y"
                               { printf("PARSER found expr - expr && expr\n"); }
#line 2236 "parser.tab.cpp"
    break;

  case 80: /* expr: '-' expr  */
#line 297 "parser.y"
                             { printf("PARSER found expr - UMINUS\n"); }
#line 2242 "parser.tab.cpp"
    break;

  case 81: /* expr: '+' expr  */
#line 298 "parser.y"
                            { printf("PARSER found expr - UPLUS\n"); }
#line 2248 "parser.tab.cpp"
    break;

  case 82: /* expr: func_call  */
#line 299 "parser.y"
                { printf("PARSER found expr - func_call\n"); }
#line 2254 "parser.tab.cpp"
    break;

  case 83: /* expr: if_else_expr  */
#line 300 "parser.y"
                                        { printf("PARSER found expr - if_else_expr\n"); }
#line 2260 "parser.tab.cpp"
    break;

  case 84: /* expr: for_expr  */
#line 301 "parser.y"
               { printf("PARSER found expr - for_expr\n"); }
#line 2266 "parser.tab.cpp"
    break;

  case 85: /* expr: while_expr  */
#line 302 "parser.y"
                 { printf("PARSER found expr - while_expr\n"); }
#line 2272 "parser.tab.cpp"
    break;

  case 86: /* expr: do_while_expr  */
#line 303 "parser.y"
                    { printf("PARSER found expr - do_while_expr\n"); }
#line 2278 "parser.tab.cpp"
    break;

  case 87: /* expr: try_expr  */
#line 304 "parser.y"
               { printf("PARSER found expr - try_expr\n"); }
#line 2284 "parser.tab.cpp"
    break;

  case 88: /* expr: match_expr  */
#line 305 "parser.y"
                 { printf("PARSER found expr - match_expr\n"); }
#line 2290 "parser.tab.cpp"
    break;

  case 89: /* expr: '{' statement_expr_list_e '}'  */
#line 306 "parser.y"
                                     { printf("PARSER found expr -  { statement_expr_list_e }\n"); }
#line 2296 "parser.tab.cpp"
    break;

  case 90: /* expr: func  */
#line 307 "parser.y"
           { printf("Function:\n"); }
#line 2302 "parser.tab.cpp"
    break;

  case 91: /* expr: method_call  */
#line 308 "parser.y"
                  { printf("method_call:\n"); }
#line 2308 "parser.tab.cpp"
    break;

  case 92: /* expr: instance_class  */
#line 309 "parser.y"
                     { printf("instance_class:\n"); }
#line 2314 "parser.tab.cpp"
    break;

  case 93: /* expr: READLINE '(' ')'  */
#line 310 "parser.y"
                     { printf("readLine:\n"); }
#line 2320 "parser.tab.cpp"
    break;

  case 94: /* expr: PRINT '(' expr ')'  */
#line 311 "parser.y"
                        { printf("print:\n"); }
#line 2326 "parser.tab.cpp"
    break;

  case 95: /* num_const: NUM_10  */
#line 316 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 2332 "parser.tab.cpp"
    break;

  case 96: /* num_const: NUM_16  */
#line 317 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 2338 "parser.tab.cpp"
    break;

  case 97: /* num_const: REAL_NUMBER  */
#line 318 "parser.y"
                  { printf("PARSER found - REAL\n"); }
#line 2344 "parser.tab.cpp"
    break;

  case 98: /* num_const: REAL_NUMBER_EXPONENT  */
#line 319 "parser.y"
                           { printf("PARSER found - REAL_EXP\n"); }
#line 2350 "parser.tab.cpp"
    break;

  case 109: /* func_call: IDENTIFIER '(' expr_list_e ')'  */
#line 341 "parser.y"
                                     { printf("Function call: WITH PARAMS\n"); }
#line 2356 "parser.tab.cpp"
    break;

  case 136: /* array: ARRAY '(' expr_list_e ')'  */
#line 416 "parser.y"
                                { printf("PARSER found Array\n"); }
#line 2362 "parser.tab.cpp"
    break;

  case 137: /* list: LIST '(' expr_list_e ')'  */
#line 422 "parser.y"
                               { printf("PARSER found List\n"); }
#line 2368 "parser.tab.cpp"
    break;

  case 138: /* vector: VECTOR '(' expr_list_e ')'  */
#line 428 "parser.y"
                                 { printf("PARSER found Vector\n"); }
#line 2374 "parser.tab.cpp"
    break;

  case 139: /* set: SET '(' expr_list_e ')'  */
#line 434 "parser.y"
                              { printf("PARSER found Set\n"); }
#line 2380 "parser.tab.cpp"
    break;

  case 140: /* endlList: ENDL  */
#line 442 "parser.y"
                    { printf("PARSER found ENDL\n"); }
#line 2386 "parser.tab.cpp"
    break;

  case 141: /* endlList: endlList ENDL  */
#line 443 "parser.y"
                    { printf("PARSER found endlList\n"); }
#line 2392 "parser.tab.cpp"
    break;

  case 142: /* endlOpt: endlList  */
#line 448 "parser.y"
               { printf("PARSER found endlOpt\n"); }
#line 2398 "parser.tab.cpp"
    break;

  case 144: /* semicolonList: ';'  */
#line 454 "parser.y"
                   { printf("PARSER found SEMICOLON\n"); }
#line 2404 "parser.tab.cpp"
    break;

  case 145: /* semicolonList: semicolonList ';'  */
#line 455 "parser.y"
                        { printf("PARSER found semicolonList\n"); }
#line 2410 "parser.tab.cpp"
    break;


#line 2414 "parser.tab.cpp"

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

#line 458 "parser.y"

