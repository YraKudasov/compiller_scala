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
  YYSYMBOL_81_ = 81,                       /* ';'  */
  YYSYMBOL_82___ = 82,                     /* '_'  */
  YYSYMBOL_83_ = 83,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 84,                  /* $accept  */
  YYSYMBOL_program = 85,                   /* program  */
  YYSYMBOL_create_instance_class = 86,     /* create_instance_class  */
  YYSYMBOL_instance_case_class_in_case = 87, /* instance_case_class_in_case  */
  YYSYMBOL_visibility_modifier = 88,       /* visibility_modifier  */
  YYSYMBOL_statement_expr_list = 89,       /* statement_expr_list  */
  YYSYMBOL_statement_expr_list_e = 90,     /* statement_expr_list_e  */
  YYSYMBOL_statement = 91,                 /* statement  */
  YYSYMBOL_if_else_expr = 92,              /* if_else_expr  */
  YYSYMBOL_for_expr = 93,                  /* for_expr  */
  YYSYMBOL_generators_and_conditions_parentheses_List = 94, /* generators_and_conditions_parentheses_List  */
  YYSYMBOL_generators_and_conditions_curly_braces_List = 95, /* generators_and_conditions_curly_braces_List  */
  YYSYMBOL_while_expr = 96,                /* while_expr  */
  YYSYMBOL_do_while_expr = 97,             /* do_while_expr  */
  YYSYMBOL_match_expr = 98,                /* match_expr  */
  YYSYMBOL_case_condition = 99,            /* case_condition  */
  YYSYMBOL_case_list = 100,                /* case_list  */
  YYSYMBOL_literal_list_case = 101,        /* literal_list_case  */
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
  YYSYMBOL_method_params_list = 113,       /* method_params_list  */
  YYSYMBOL_method = 114,                   /* method  */
  YYSYMBOL_method_call = 115,              /* method_call  */
  YYSYMBOL_type = 116,                     /* type  */
  YYSYMBOL_type_list_car = 117,            /* type_list_car  */
  YYSYMBOL_type_list = 118,                /* type_list  */
  YYSYMBOL_type_list_simple = 119,         /* type_list_simple  */
  YYSYMBOL_array = 120,                    /* array  */
  YYSYMBOL_array_literal = 121,            /* array_literal  */
  YYSYMBOL_initialized_array = 122,        /* initialized_array  */
  YYSYMBOL_list = 123,                     /* list  */
  YYSYMBOL_vector = 124,                   /* vector  */
  YYSYMBOL_set = 125,                      /* set  */
  YYSYMBOL_endlList = 126,                 /* endlList  */
  YYSYMBOL_endlOpt = 127,                  /* endlOpt  */
  YYSYMBOL_semicolonList = 128,            /* semicolonList  */
  YYSYMBOL_separator_List = 129,           /* separator_List  */
  YYSYMBOL_separator_List_e = 130          /* separator_List_e  */
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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1330

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  169
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  489

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
      18,    19,    13,    11,     5,    12,    83,    14,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    80,    81,
      10,     6,     9,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    20,     2,    21,     2,    82,     2,     2,     2,     2,
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
       0,    95,    95,   150,   151,   160,   164,   165,   182,   183,
     184,   185,   186,   187,   191,   192,   196,   197,   198,   199,
     200,   209,   210,   211,   225,   226,   227,   228,   239,   240,
     241,   242,   243,   244,   245,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   263,   267,   273,   274,   278,   279,
     280,   281,   282,   283,   284,   288,   289,   290,   291,   292,
     293,   297,   298,   304,   305,   306,   310,   314,   321,   322,
     327,   328,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   371,   372,   373,   374,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     395,   399,   400,   401,   402,   406,   411,   412,   416,   417,
     418,   419,   420,   421,   422,   423,   428,   429,   430,   436,
     437,   438,   439,   440,   441,   442,   446,   447,   453,   454,
     458,   469,   470,   474,   478,   485,   491,   497,   505,   506,
     511,   512,   517,   518,   522,   523,   524,   525,   529,   530
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
  "PRIVATE", "CLASS", "EXTENDS", "ABSTRACT", "'{'", "'}'", "':'", "';'",
  "'_'", "'.'", "$accept", "program", "create_instance_class",
  "instance_case_class_in_case", "visibility_modifier",
  "statement_expr_list", "statement_expr_list_e", "statement",
  "if_else_expr", "for_expr", "generators_and_conditions_parentheses_List",
  "generators_and_conditions_curly_braces_List", "while_expr",
  "do_while_expr", "match_expr", "case_condition", "case_list",
  "literal_list_case", "try_expr", "catch", "finally", "expr_list_e",
  "expr_list", "expr", "num_const", "const", "func_call", "params", "func",
  "method_params_list", "method", "method_call", "type", "type_list_car",
  "type_list", "type_list_simple", "array", "array_literal",
  "initialized_array", "list", "vector", "set", "endlList", "endlOpt",
  "semicolonList", "separator_List", "separator_List_e", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-365)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-162)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,  -365,  -365,    65,  -365,    17,   853,  -365,  -365,  -365,
    1041,  1041,  1103,  -365,  -365,  -365,  -365,   173,  -365,  -365,
      66,    66,    66,    66,    66,    66,    38,   108,   119,   152,
     111,  -365,  -365,  -365,   234,   260,   264,    66,   114,  -365,
    -365,    16,  -365,   157,    21,  -365,  -365,  -365,  -365,  -365,
    -365,  -365,  1267,  -365,   -19,  -365,  -365,  -365,  -365,  -365,
    -365,  -365,  -365,  -365,  -365,  -365,  -365,    25,   307,   228,
    -365,  1041,   252,   197,   239,   259,   268,    49,  1041,   305,
    1041,  1041,   306,  1041,    66,  1041,  1041,  1041,   302,   311,
     304,   245,  -365,    11,  -365,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
     308,   296,   233,   262,   309,   277,   327,   278,  1267,  -365,
      66,    66,    66,    66,  1041,   237,    66,   542,  1041,   288,
     772,  -365,   334,   328,   336,   344,   345,    66,   233,   347,
    -365,   157,  -365,  1267,  1041,  1041,  1041,  1041,  1041,  1041,
    1041,  1041,  1041,  1041,  1041,  1041,  1041,  1041,  1041,  -365,
      66,  -365,  -365,  -365,  -365,  -365,  -365,  -365,  -365,   300,
     348,   299,  1041,  -365,   371,  1041,   303,    24,    26,  1145,
     313,  1041,    82,   241,   346,  1193,   153,  -365,  -365,    66,
    -365,  -365,  -365,    43,   361,  1041,  -365,   450,   424,   357,
     357,   217,   217,  -365,  -365,  -365,   186,   186,   633,  1276,
     357,   357,   310,   233,   365,   233,  1267,    66,  1267,    66,
      66,    66,    66,    66,    66,   137,  1267,    66,  1041,   247,
      66,    66,    66,   366,    66,   314,   316,   354,  -365,    45,
      66,   359,    66,   224,   367,   370,    66,  -365,  1041,    62,
    1041,   358,  1041,   368,  1041,   368,  1041,   353,   337,   917,
    1267,   335,  1041,   338,  1041,    68,    97,  1041,  1041,   358,
    1041,  -365,    66,    66,   224,  1041,   321,   232,   233,   359,
      34,  1041,  -365,   358,   383,   137,  1267,    66,    66,  1267,
     156,    66,  1267,    66,   373,   137,    66,  1267,   137,  1267,
      66,  1267,    66,    66,    66,    66,  1206,  -365,    -2,   298,
    1041,   233,    54,  1267,  -365,    66,   249,    66,    66,  1219,
      66,  -365,  -365,    85,   139,  -365,   387,   402,   408,   409,
      66,   187,   355,  1041,   360,   137,   351,  1041,   979,   251,
    -365,  -365,    40,  -365,  1267,    66,    66,    66,   411,  -365,
    1041,   233,  -365,   142,     0,  -365,  -365,    66,    14,    87,
      66,  -365,  -365,    22,   363,   233,    66,    66,  1041,    66,
     137,  1267,   137,   362,    66,  1267,    66,  1267,    66,  1041,
     413,  1041,   233,    66,  1267,    66,  -365,    55,   374,   414,
     394,    85,  -365,   382,   233,  -365,  1041,  1041,  -365,  1041,
    -365,   380,    66,   137,  1041,   379,  1267,    66,  1267,    66,
    1041,   425,  1041,    66,    66,    66,    66,    66,    66,    66,
    -365,  1267,  1267,  -365,   137,   137,   384,  1267,    66,  1041,
     439,  1267,    66,   428,  1041,   137,   495,   137,  1041,   385,
      85,  -365,   386,    66,   137,  1267,    66,  1041,  -365,  1267,
    -365,  1267,    22,  -365,  1267,    66,    66,    66,   137,   390,
    1041,  1267,  1041,   495,   389,   137,   403,    66,  1267,  1267,
    1267,    22,    66,  -365,    66,   137,  1041,   495,   137,   404,
    1267,  1267,    22,  -365,    66,  1041,   137,  1267,  -365
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     169,   164,   165,     0,     2,   168,     0,     1,   166,   167,
       0,     0,   124,   106,   107,   108,   109,    73,   112,   111,
     161,   161,   161,   161,   161,   161,     0,     0,     0,     0,
       0,   113,   114,   115,     0,     0,     0,   161,   161,     7,
       6,   169,   103,     0,   169,     8,    94,    95,    96,    97,
      99,    98,    10,   110,    72,    93,   101,    20,   102,   116,
     151,   152,   117,   118,   119,    92,    91,    73,     0,     0,
     158,    69,   160,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    69,   161,    69,    69,    69,     0,     0,
       0,     0,     9,   168,    14,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
       0,     0,     0,    75,     0,     0,     0,    68,    70,   159,
     161,   161,   161,   161,     0,     0,   161,   161,     0,     0,
       0,   104,     0,     0,     0,     0,     0,   161,     0,     3,
     100,     0,    11,    12,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   138,
     161,   139,   140,   141,   142,   143,   144,   145,   146,   121,
       0,     0,     0,   120,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   105,   153,   161,
     155,   156,   157,     0,     0,    69,    13,    88,    87,    76,
      77,    82,    83,    85,    84,    86,    80,    81,    89,    90,
      78,    79,     0,     0,   137,     0,   125,   161,    74,   161,
     161,   161,   161,   161,   161,     0,    28,   161,     0,     0,
     161,   161,   161,     0,   161,     0,     0,    63,    64,     0,
     161,   124,   161,   161,     0,     0,   161,   147,    69,   122,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,     0,     0,     0,     0,   160,     0,     0,     0,     0,
       0,    65,   161,   161,   161,     0,     0,     0,     0,   124,
       0,     0,     4,     0,     0,     0,    71,   161,   161,    16,
       0,   161,    17,   161,    21,     0,   161,    25,     0,    32,
     161,    35,   161,   161,   161,   161,     0,    44,   161,     0,
       0,     0,     0,   131,   126,   161,     0,   161,   161,     0,
     161,   136,   123,     0,     0,   148,     0,     0,     0,     0,
     161,     0,    29,     0,     0,     0,     0,     0,     0,     0,
      45,    66,     0,    67,   135,   161,   161,   161,     0,   127,
       0,     0,   154,     0,   161,    54,    52,   161,    51,    61,
     161,    46,   162,   161,     0,     0,   161,   161,     0,   161,
       0,    24,     0,     0,   161,    38,   161,    27,   161,     0,
       0,     0,     0,   161,   130,   161,    47,     0,     0,     0,
       0,     0,   163,     0,     0,   149,     0,     0,    22,     0,
      30,    33,   161,     0,     0,     0,    39,   161,   134,   161,
       0,     0,    69,   161,   161,   161,   161,   161,   161,   161,
     150,    18,    19,    23,     0,     0,     0,    26,   161,     0,
       0,   129,   161,     0,     0,     0,     0,     0,     0,     0,
       0,    34,    36,   161,     0,   133,   161,     0,     5,    50,
      53,    56,   161,    62,    48,   161,   161,   161,     0,     0,
       0,   128,     0,     0,     0,     0,    42,   161,   132,    55,
      59,   161,   161,    37,   161,     0,     0,     0,     0,    40,
      57,    60,   161,    43,   161,     0,     0,    58,    41
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -365,  -365,  -365,  -365,   375,  -365,   407,   -41,  -365,  -365,
    -365,  -365,  -365,  -365,  -365,  -364,   -12,  -365,  -365,  -365,
     213,   -76,  -365,    -6,  -365,  -199,  -365,   -55,  -365,   214,
    -365,  -365,  -122,   254,  -365,  -242,  -365,  -365,  -365,  -365,
    -365,  -365,  -224,   388,  -228,   431,   432
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,    42,   356,    43,    44,     4,    45,    46,    47,
     182,   232,    48,    49,    50,   357,   288,   358,    51,   237,
     238,   116,   117,   118,    53,    54,    55,    69,    56,   243,
      57,    58,   168,   169,   326,   291,    59,    60,    61,    62,
      63,    64,    72,    73,   363,     5,     6
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      52,    70,    92,    70,    65,    66,    68,   132,   265,   134,
     135,   136,   -15,   293,     8,     1,   194,    70,  -161,     1,
       8,  -161,    10,    11,     1,    70,   258,   418,    70,    12,
     220,  -161,   222,    13,    14,    15,    16,    17,    18,    19,
     317,    20,    21,    71,    22,    23,    24,    25,   327,   240,
      26,   272,   142,    27,    28,    29,    30,    31,    32,    33,
     346,   241,  -161,   241,   110,     7,   -49,   125,   285,    70,
     331,   119,   127,   412,   129,   130,   456,   341,   360,    34,
      35,    36,    37,    38,    39,    40,   322,   143,   413,    41,
      70,   247,     9,     2,   302,   -15,   332,     2,     9,   334,
     196,   227,     2,   392,   221,   112,   223,    13,    14,    15,
      16,   354,    18,    19,   318,   228,    80,    70,   179,   245,
    -161,   362,   185,   242,   359,   273,    81,   126,   213,    29,
     303,    31,    32,    33,   347,   414,   373,    82,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,    34,    35,    36,   315,   257,    89,    13,
      14,    15,    16,   229,    18,    19,   216,   355,   325,   218,
      83,   400,   284,   401,   290,   226,   304,   360,   305,  -161,
     360,    29,    84,    31,    32,    33,   277,    20,    21,   345,
     119,    71,   359,   235,   236,    97,    98,    99,   100,   101,
     102,   103,    30,   120,   426,    34,    35,    36,   452,   257,
    -161,   161,   162,   163,   164,   165,   166,   167,   361,   369,
     362,   386,   260,   362,   316,   441,   442,    70,    37,   385,
     101,   102,   103,   114,   121,   471,   450,   114,   453,   108,
     109,   359,   279,   395,   286,   459,   289,   115,   292,   482,
     294,   314,    85,   297,   114,   119,   299,   308,   301,   466,
     409,   306,   307,   180,   309,   122,   473,   230,   349,   313,
     181,   320,   420,   261,   231,   319,   479,   378,    86,   483,
     262,    70,    87,  -161,   379,   123,   124,   488,   161,   162,
     163,   164,   165,   166,   167,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   344,    95,    96,    97,    98,    99,
     100,   101,   102,   103,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   128,   140,   131,   113,   371,   137,   138,
     139,   375,   377,   160,   159,   171,   433,   104,   105,   106,
     107,   108,   109,   172,   384,   170,   173,   104,   105,   106,
     107,   108,   109,   188,   189,   190,   104,   105,   106,   107,
     108,   109,   398,   191,   192,   195,   213,   186,    99,   100,
     101,   102,   103,   406,   214,   408,   217,   343,   225,   215,
     244,   219,   233,   248,   267,   276,   290,   281,   246,   282,
     421,   422,   269,   423,   270,   236,   287,    89,   427,   295,
     298,   112,   321,   300,   431,   330,   364,   365,    74,    75,
      76,    77,    78,    79,   366,   367,   374,   383,   370,   407,
     419,   416,   372,   445,   402,    88,    90,   417,   449,   394,
     451,   432,   454,    97,    98,    99,   100,   101,   102,   103,
     415,   461,   111,   424,   428,   446,   443,   448,    91,   457,
     271,   455,   467,   274,   468,   472,   469,   470,    96,    97,
      98,    99,   100,   101,   102,   103,   474,   484,   141,   249,
     480,   481,   133,   104,   105,    93,    94,   108,   109,   487,
       0,     0,     0,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,     0,   104,
     105,     0,     0,   108,   109,   174,    10,    11,   175,   176,
     177,   178,     0,    12,   183,   184,     0,    13,    14,    15,
      16,    17,    18,    19,     0,   193,     0,     0,    22,    23,
      24,    25,     0,     0,    26,     0,     0,    27,    28,    29,
       0,    31,    32,    33,     0,    70,     0,     0,   212,    95,
      96,    97,    98,    99,   100,   101,   102,   103,     0,     0,
       0,     0,     0,    34,    35,    36,     0,    38,     0,     0,
       0,     0,     0,    41,     0,     0,   362,   239,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   104,   105,   106,   107,   108,   109,     0,     0,     0,
       0,     0,     0,     0,     0,   250,     0,   251,   252,   253,
     254,   255,   256,     0,     0,   259,     0,     0,   263,   264,
     266,     0,   268,     0,     0,     0,     0,     0,   275,     0,
     278,   280,     0,     0,   283,     0,     0,     0,     0,     0,
      95,    96,    97,    98,    99,   100,   101,   102,   103,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     310,   311,   312,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   323,   324,     0,     0,   328,
       0,   329,   104,   105,   333,   107,   108,   109,   335,     0,
     336,   337,   338,   339,     0,     0,   342,     0,     0,     0,
       0,     0,     0,   348,     0,   350,   351,     0,   353,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   368,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   380,   381,   382,     0,     0,     0,     0,
       0,     0,   387,     0,     0,   388,   389,   390,   391,     0,
       0,   393,     0,     0,   396,   397,     0,   399,     0,     0,
       0,     0,   403,     0,   404,     0,   405,     0,     0,     0,
       0,   410,     0,   411,     0,     0,     0,     0,     0,    95,
      96,    97,    98,    99,   100,   101,   102,   103,     0,     0,
     425,   187,     0,     0,     0,   429,     0,   430,     0,     0,
       0,   434,   435,   436,   437,   438,   439,   440,     0,     0,
       0,     0,     0,     0,     0,     0,   444,     0,     0,     0,
     447,   104,   105,   106,   107,   108,   109,     0,     0,     0,
       0,   458,     0,     0,   460,     0,     0,     0,     0,     0,
     462,     0,     0,   463,   464,   465,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   475,     0,     0,     0,   476,
     477,     0,   478,     0,    10,    11,     0,     0,     0,     0,
     485,    12,   486,     0,     0,    13,    14,    15,    16,    17,
      18,    19,     0,    20,    21,     0,    22,    23,    24,    25,
       0,     0,    26,     0,     0,    27,    28,    29,    30,    31,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,    35,    36,    37,    38,    39,    40,    10,    11,
       0,    41,     0,     0,     0,    12,     0,     0,     0,    13,
      14,    15,    16,    17,    18,    19,     0,     0,     0,     0,
      22,    23,    24,    25,     0,     0,    26,     0,     0,    27,
      28,    29,     0,    31,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   296,     0,     0,     0,    34,    35,    36,     0,    38,
      10,    11,     0,     0,     0,    41,     0,    12,     0,     0,
       0,    13,    14,    15,    16,    17,    18,    19,     0,     0,
       0,     0,    22,    23,    24,    25,     0,     0,    26,     0,
       0,    27,    28,    29,     0,    31,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   376,     0,     0,     0,    34,    35,    36,
       0,    38,    10,    11,     0,     0,     0,    41,     0,    12,
       0,     0,     0,    13,    14,    15,    16,    17,    18,    19,
       0,     0,     0,     0,    22,    23,    24,    25,     0,     0,
      26,     0,     0,    27,    28,    29,     0,    31,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    34,
      35,    36,     0,    38,    10,    11,     0,     0,     0,    41,
       0,    12,     0,     0,     0,    13,    14,    15,    16,    67,
      18,    19,     0,     0,     0,     0,    22,    23,    24,    25,
       0,     0,    26,     0,     0,    27,    28,    29,     0,    31,
      32,    33,    95,    96,    97,    98,    99,   100,   101,   102,
     103,     0,     0,     0,   224,     0,     0,     0,     0,     0,
       0,    34,    35,    36,     0,    38,     0,     0,     0,     0,
       0,    41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   104,   105,   106,   107,   108,   109,
      95,    96,    97,    98,    99,   100,   101,   102,   103,     0,
       0,     0,   234,    95,    96,    97,    98,    99,   100,   101,
     102,   103,     0,     0,     0,   340,    95,    96,    97,    98,
      99,   100,   101,   102,   103,     0,     0,     0,     0,     0,
     352,     0,   104,   105,   106,   107,   108,   109,     0,     0,
       0,     0,     0,     0,     0,   104,   105,   106,   107,   108,
     109,     0,     0,     0,     0,     0,     0,     0,   104,   105,
     106,   107,   108,   109,    95,    96,    97,    98,    99,   100,
     101,   102,   103,    95,    96,    97,    98,    99,   100,   101,
     102,   103,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   104,   105,   106,   107,
     108,   109,     0,     0,     0,   104,   105,     0,     0,   108,
     109
};

static const yytype_int16 yycheck[] =
{
       6,     3,    43,     3,    10,    11,    12,    83,   232,    85,
      86,    87,     0,   255,     3,     3,   138,     3,    37,     3,
       3,     7,    11,    12,     3,     3,   225,   391,     3,    18,
       6,     6,     6,    22,    23,    24,    25,    26,    27,    28,
       6,    30,    31,    18,    33,    34,    35,    36,   290,     6,
      39,     6,    93,    42,    43,    44,    45,    46,    47,    48,
       6,    18,    37,    18,    83,     0,    66,    18,     6,     3,
     294,     3,    78,    18,    80,    81,   440,    79,    38,    68,
      69,    70,    71,    72,    73,    74,   285,    93,    33,    78,
       3,   213,    81,    81,    26,    79,   295,    81,    81,   298,
     141,    19,    81,    81,    80,    80,    80,    22,    23,    24,
      25,    26,    27,    28,    80,    33,    78,     3,   124,   195,
      33,    81,   128,    80,   323,    80,    18,    78,    66,    44,
      33,    46,    47,    48,    80,    80,   335,    18,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,    68,    69,    70,   278,    72,    44,    22,
      23,    24,    25,    81,    27,    28,   172,    82,   290,   175,
      18,   370,   248,   372,    18,   181,    79,    38,    81,     6,
      38,    44,    71,    46,    47,    48,   241,    30,    31,   311,
       3,    18,   391,    40,    41,     9,    10,    11,    12,    13,
      14,    15,    45,     6,   403,    68,    69,    70,   436,    72,
      37,    55,    56,    57,    58,    59,    60,    61,    79,    32,
      81,    79,   228,    81,   279,   424,   425,     3,    71,   351,
      13,    14,    15,     5,    37,   463,   435,     5,   437,    53,
      54,   440,    18,   365,   250,   444,   252,    19,   254,   477,
     256,    19,    18,   259,     5,     3,   262,   269,   264,   458,
     382,   267,   268,    26,   270,    26,   465,    26,    19,   275,
      33,   283,   394,    26,    33,   281,   475,    26,    18,   478,
      33,     3,    18,     5,    33,    26,    18,   486,    55,    56,
      57,    58,    59,    60,    61,     7,     8,     9,    10,    11,
      12,    13,    14,    15,   310,     7,     8,     9,    10,    11,
      12,    13,    14,    15,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    18,    79,    19,    19,   333,    26,    18,
      26,   337,   338,    37,    26,    26,   412,    49,    50,    51,
      52,    53,    54,    66,   350,    83,    19,    49,    50,    51,
      52,    53,    54,    19,    26,    19,    49,    50,    51,    52,
      53,    54,   368,    19,    19,    18,    66,    79,    11,    12,
      13,    14,    15,   379,    26,   381,     5,    79,    65,    80,
      19,    78,    36,    18,    18,    26,    18,    20,    78,    19,
     396,   397,    78,   399,    78,    41,    38,    44,   404,    62,
      65,    80,    19,    65,   410,    32,    19,     5,    20,    21,
      22,    23,    24,    25,     6,     6,    65,     6,    63,     6,
      38,     7,    62,   429,    62,    37,    38,    33,   434,    66,
     436,     6,   438,     9,    10,    11,    12,    13,    14,    15,
      66,   447,    54,    63,    65,     6,    62,    19,    41,    63,
     237,    66,    62,   239,   460,    66,   462,   463,     8,     9,
      10,    11,    12,    13,    14,    15,    63,    63,    93,   215,
     476,   477,    84,    49,    50,    44,    44,    53,    54,   485,
      -1,    -1,    -1,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    -1,    49,
      50,    -1,    -1,    53,    54,   117,    11,    12,   120,   121,
     122,   123,    -1,    18,   126,   127,    -1,    22,    23,    24,
      25,    26,    27,    28,    -1,   137,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    42,    43,    44,
      -1,    46,    47,    48,    -1,     3,    -1,    -1,   160,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    -1,
      -1,    -1,    -1,    68,    69,    70,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    81,   189,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   217,    -1,   219,   220,   221,
     222,   223,   224,    -1,    -1,   227,    -1,    -1,   230,   231,
     232,    -1,   234,    -1,    -1,    -1,    -1,    -1,   240,    -1,
     242,   243,    -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     272,   273,   274,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   287,   288,    -1,    -1,   291,
      -1,   293,    49,    50,   296,    52,    53,    54,   300,    -1,
     302,   303,   304,   305,    -1,    -1,   308,    -1,    -1,    -1,
      -1,    -1,    -1,   315,    -1,   317,   318,    -1,   320,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   330,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   345,   346,   347,    -1,    -1,    -1,    -1,
      -1,    -1,   354,    -1,    -1,   357,   358,   359,   360,    -1,
      -1,   363,    -1,    -1,   366,   367,    -1,   369,    -1,    -1,
      -1,    -1,   374,    -1,   376,    -1,   378,    -1,    -1,    -1,
      -1,   383,    -1,   385,    -1,    -1,    -1,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    -1,
     402,    19,    -1,    -1,    -1,   407,    -1,   409,    -1,    -1,
      -1,   413,   414,   415,   416,   417,   418,   419,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   428,    -1,    -1,    -1,
     432,    49,    50,    51,    52,    53,    54,    -1,    -1,    -1,
      -1,   443,    -1,    -1,   446,    -1,    -1,    -1,    -1,    -1,
     452,    -1,    -1,   455,   456,   457,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   467,    -1,    -1,    -1,   471,
     472,    -1,   474,    -1,    11,    12,    -1,    -1,    -1,    -1,
     482,    18,   484,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    -1,    30,    31,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    42,    43,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    74,    11,    12,
      -1,    78,    -1,    -1,    -1,    18,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    42,
      43,    44,    -1,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    68,    69,    70,    -1,    72,
      11,    12,    -1,    -1,    -1,    78,    -1,    18,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    42,    43,    44,    -1,    46,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    68,    69,    70,
      -1,    72,    11,    12,    -1,    -1,    -1,    78,    -1,    18,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    42,    43,    44,    -1,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      69,    70,    -1,    72,    11,    12,    -1,    -1,    -1,    78,
      -1,    18,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    42,    43,    44,    -1,    46,
      47,    48,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    69,    70,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,    54,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    -1,    19,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    -1,    19,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    -1,    -1,    -1,
      21,    -1,    49,    50,    51,    52,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      51,    52,    53,    54,     7,     8,     9,    10,    11,    12,
      13,    14,    15,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    54,    -1,    -1,    -1,    49,    50,    -1,    -1,    53,
      54
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    81,    85,    90,   129,   130,     0,     3,    81,
      11,    12,    18,    22,    23,    24,    25,    26,    27,    28,
      30,    31,    33,    34,    35,    36,    39,    42,    43,    44,
      45,    46,    47,    48,    68,    69,    70,    71,    72,    73,
      74,    78,    86,    88,    89,    91,    92,    93,    96,    97,
      98,   102,   107,   108,   109,   110,   112,   114,   115,   120,
     121,   122,   123,   124,   125,   107,   107,    26,   107,   111,
       3,    18,   126,   127,   127,   127,   127,   127,   127,   127,
      78,    18,    18,    18,    71,    18,    18,    18,   127,    44,
     127,    90,    91,   129,   130,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    49,    50,    51,    52,    53,    54,
      83,   127,    80,    19,     5,    19,   105,   106,   107,     3,
       6,    37,    26,    26,    18,    18,    78,   107,    18,   107,
     107,    19,   105,   127,   105,   105,   105,    26,    18,    26,
      79,    88,    91,   107,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,    26,
      37,    55,    56,    57,    58,    59,    60,    61,   116,   117,
      83,    26,    66,    19,   127,   127,   127,   127,   127,   107,
      26,    33,    94,   127,   127,   107,    79,    19,    19,    26,
      19,    19,    19,   127,   116,    18,    91,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   127,    66,    26,    80,   107,     5,   107,    78,
       6,    80,     6,    80,    19,    65,   107,    19,    33,    81,
      26,    33,    95,    36,    19,    40,    41,   103,   104,   127,
       6,    18,    80,   113,    19,   105,    78,   116,    18,   117,
     127,   127,   127,   127,   127,   127,   127,    72,   109,   127,
     107,    26,    33,   127,   127,   126,   127,    18,   127,    78,
      78,   104,     6,    80,   113,   127,    26,   111,   127,    18,
     127,    20,    19,   127,   105,     6,   107,    38,   100,   107,
      18,   119,   107,   119,   107,    62,    64,   107,    65,   107,
      65,   107,    26,    33,    79,    81,   107,   107,   100,   107,
     127,   127,   127,   107,    19,   116,   111,     6,    80,   107,
     100,    19,   109,   127,   127,   116,   118,   119,   127,   127,
      32,   126,   109,   127,   109,   127,   127,   127,   127,   127,
      19,    79,   127,    79,   107,   116,     6,    80,   127,    19,
     127,   127,    21,   127,    26,    82,    87,    99,   101,   109,
      38,    79,    81,   128,    19,     5,     6,     6,   127,    32,
      63,   107,    62,   109,    65,   107,    64,   107,    26,    33,
     127,   127,   127,     6,   107,   116,    79,   127,   127,   127,
     127,   127,    81,   127,    66,   116,   127,   127,   107,   127,
     109,   109,    62,   127,   127,   127,   107,     6,   107,   116,
     127,   127,    18,    33,    80,    66,     7,    33,    99,    38,
     116,   107,   107,   107,    63,   127,   109,   107,    65,   127,
     127,   107,     6,   105,   127,   127,   127,   127,   127,   127,
     127,   109,   109,    62,   127,   107,     6,   127,    19,   107,
     109,   107,   128,   109,   107,    66,    99,    63,   127,   109,
     127,   107,   127,   127,   127,   127,   109,    62,   107,   107,
     107,   128,    66,   109,    63,   127,   127,   127,   127,   109,
     107,   107,   128,   109,    63,   127,   127,   107,   109
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    84,    85,    86,    86,    87,    88,    88,    89,    89,
      89,    89,    89,    89,    90,    90,    91,    91,    91,    91,
      91,    92,    92,    92,    93,    93,    93,    93,    94,    94,
      94,    94,    94,    94,    94,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    96,    97,    98,    98,    99,    99,
      99,    99,    99,    99,    99,   100,   100,   100,   100,   100,
     100,   101,   101,   102,   102,   102,   103,   104,   105,   105,
     106,   106,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   108,   108,   108,   108,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     110,   111,   111,   111,   111,   112,   113,   113,   114,   114,
     114,   114,   114,   114,   114,   114,   115,   115,   115,   116,
     116,   116,   116,   116,   116,   116,   117,   117,   118,   118,
     119,   120,   120,   121,   122,   123,   124,   125,   126,   126,
     127,   127,   128,   128,   129,   129,   129,   129,   130,   130
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     6,     5,     1,     1,     1,     2,
       1,     3,     3,     4,     3,     0,     7,     7,    11,    11,
       1,     7,    10,    11,     9,     7,    11,     9,     2,     5,
       7,     3,     4,     7,     9,     3,     8,    11,     5,     6,
      12,    15,    10,    13,     7,     8,     9,     9,     5,     1,
       5,     1,     1,     5,     1,     9,     7,    11,    13,     9,
      11,     1,     5,     5,     5,     6,     4,     4,     1,     0,
       1,     5,     1,     1,     5,     3,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     3,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     3,     5,     7,     0,     5,     3,     4,    13,    11,
       9,     7,    14,    12,    10,     8,     8,     5,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       5,     1,     1,     4,     8,     4,     4,     4,     1,     2,
       1,     0,     1,     2,     1,     1,     2,     2,     1,     0
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
  case 8: /* statement_expr_list: statement  */
#line 182 "parser.y"
                { printf("Add first statement :\n"); }
#line 2091 "parser.tab.cpp"
    break;

  case 9: /* statement_expr_list: visibility_modifier statement  */
#line 183 "parser.y"
                                    { printf("Add first visibility_modifier statement :\n"); }
#line 2097 "parser.tab.cpp"
    break;

  case 10: /* statement_expr_list: expr  */
#line 184 "parser.y"
           { printf("Add first statement :\n"); }
#line 2103 "parser.tab.cpp"
    break;

  case 11: /* statement_expr_list: statement_expr_list separator_List statement  */
#line 185 "parser.y"
                                                    { printf("Add new statement to statement_expr_list :\n"); }
#line 2109 "parser.tab.cpp"
    break;

  case 12: /* statement_expr_list: statement_expr_list separator_List expr  */
#line 186 "parser.y"
                                               { printf("Add new expr to statement_expr_list :\n"); }
#line 2115 "parser.tab.cpp"
    break;

  case 13: /* statement_expr_list: statement_expr_list separator_List visibility_modifier statement  */
#line 187 "parser.y"
                                                                        { printf("Add new visibility_modifier to statement_expr_list :\n"); }
#line 2121 "parser.tab.cpp"
    break;

  case 15: /* statement_expr_list_e: %empty  */
#line 192 "parser.y"
                     { printf("PARSER found statement_list_e - nothing\n"); }
#line 2127 "parser.tab.cpp"
    break;

  case 16: /* statement: VAL endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 196 "parser.y"
                                                       { printf("implicit value declaration:\n"); }
#line 2133 "parser.tab.cpp"
    break;

  case 17: /* statement: VAR endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 197 "parser.y"
                                                       { printf("implicit variable declaration:\n"); }
#line 2139 "parser.tab.cpp"
    break;

  case 18: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 198 "parser.y"
                                                                                           { printf("explicit value declaration:\n"); }
#line 2145 "parser.tab.cpp"
    break;

  case 19: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 199 "parser.y"
                                                                                           { printf("explicit variable declaration:\n"); }
#line 2151 "parser.tab.cpp"
    break;

  case 20: /* statement: method  */
#line 200 "parser.y"
             { printf("Method:\n"); }
#line 2157 "parser.tab.cpp"
    break;

  case 21: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr  */
#line 209 "parser.y"
                                                      { printf("IF-CONSTR\n"); }
#line 2163 "parser.tab.cpp"
    break;

  case 22: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr ELSE endlOpt expr  */
#line 210 "parser.y"
                                                                          { printf("IF_ELSE-CONSTR\n"); }
#line 2169 "parser.tab.cpp"
    break;

  case 23: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr endlList ELSE endlOpt expr  */
#line 211 "parser.y"
                                                                                   { printf("IF_ELSE-CONSTR\n"); }
#line 2175 "parser.tab.cpp"
    break;

  case 24: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt YIELD endlOpt expr  */
#line 225 "parser.y"
                                                                                                                          { printf("FOR in parentheses\n"); }
#line 2181 "parser.tab.cpp"
    break;

  case 25: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt expr  */
#line 226 "parser.y"
                                                                                                            { printf("FOR in parentheses\n"); }
#line 2187 "parser.tab.cpp"
    break;

  case 26: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt YIELD endlOpt expr  */
#line 227 "parser.y"
                                                                                                                                           { printf("FOR in curly_braces\n"); }
#line 2193 "parser.tab.cpp"
    break;

  case 27: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt expr  */
#line 228 "parser.y"
                                                                                                                             { printf("FOR in curly_braces\n"); }
#line 2199 "parser.tab.cpp"
    break;

  case 68: /* expr_list_e: expr_list  */
#line 321 "parser.y"
                   { printf("PARSER found expr_list - expr_list\n"); }
#line 2205 "parser.tab.cpp"
    break;

  case 69: /* expr_list_e: %empty  */
#line 322 "parser.y"
                     { printf("PARSER found expr_list - nothing\n"); }
#line 2211 "parser.tab.cpp"
    break;

  case 70: /* expr_list: expr  */
#line 327 "parser.y"
                      { printf("PARSER found expr_list - expr\n"); }
#line 2217 "parser.tab.cpp"
    break;

  case 71: /* expr_list: expr_list endlOpt ',' endlOpt expr  */
#line 328 "parser.y"
                                          { printf("PARSER found expr_list - expr_list\n"); }
#line 2223 "parser.tab.cpp"
    break;

  case 72: /* expr: const  */
#line 333 "parser.y"
                                  {printf("PARSER found expr - const\n"); }
#line 2229 "parser.tab.cpp"
    break;

  case 73: /* expr: IDENTIFIER  */
#line 334 "parser.y"
                                       {printf("PARSER found expr - IDENTIFIER\n"); }
#line 2235 "parser.tab.cpp"
    break;

  case 74: /* expr: IDENTIFIER endlOpt '=' endlOpt expr  */
#line 335 "parser.y"
                                          { printf("Assignment:\n"); }
#line 2241 "parser.tab.cpp"
    break;

  case 75: /* expr: '(' expr ')'  */
#line 336 "parser.y"
                   { printf("PARSER found expr - ( expr ) \n"); }
#line 2247 "parser.tab.cpp"
    break;

  case 76: /* expr: expr '>' endlOpt expr  */
#line 337 "parser.y"
                            {printf("PARSER found expr - expr > expr\n"); }
#line 2253 "parser.tab.cpp"
    break;

  case 77: /* expr: expr '<' endlOpt expr  */
#line 338 "parser.y"
                            {printf("PARSER found expr - expr < expr\n"); }
#line 2259 "parser.tab.cpp"
    break;

  case 78: /* expr: expr MORE_OR_EQUAL_OPERATOR endlOpt expr  */
#line 339 "parser.y"
                                               {printf("PARSER found expr - expr >= expr\n"); }
#line 2265 "parser.tab.cpp"
    break;

  case 79: /* expr: expr LESS_OR_EQUAL_OPERATOR endlOpt expr  */
#line 340 "parser.y"
                                               {printf("PARSER found expr - expr <= expr\n"); }
#line 2271 "parser.tab.cpp"
    break;

  case 80: /* expr: expr EQ endlOpt expr  */
#line 341 "parser.y"
                           {printf("PARSER found expr - expr == expr\n"); }
#line 2277 "parser.tab.cpp"
    break;

  case 81: /* expr: expr NEQ endlOpt expr  */
#line 342 "parser.y"
                            {printf("PARSER found expr - expr != expr\n"); }
#line 2283 "parser.tab.cpp"
    break;

  case 82: /* expr: expr '+' endlOpt expr  */
#line 343 "parser.y"
                            { printf("PARSER found expr - expr + expr\n"); }
#line 2289 "parser.tab.cpp"
    break;

  case 83: /* expr: expr '-' endlOpt expr  */
#line 344 "parser.y"
                            { printf("PARSER found expr - expr - expr\n"); }
#line 2295 "parser.tab.cpp"
    break;

  case 84: /* expr: expr '/' endlOpt expr  */
#line 345 "parser.y"
                            { printf("PARSER found expr - expr / expr\n"); }
#line 2301 "parser.tab.cpp"
    break;

  case 85: /* expr: expr '*' endlOpt expr  */
#line 346 "parser.y"
                            { printf("PARSER found expr - expr * expr\n"); }
#line 2307 "parser.tab.cpp"
    break;

  case 86: /* expr: expr '%' endlOpt expr  */
#line 347 "parser.y"
                            { printf("PARSER found expr - expr % expr\n"); }
#line 2313 "parser.tab.cpp"
    break;

  case 87: /* expr: expr '&' endlOpt expr  */
#line 348 "parser.y"
                            { printf("PARSER found expr - expr && expr\n"); }
#line 2319 "parser.tab.cpp"
    break;

  case 88: /* expr: expr '|' endlOpt expr  */
#line 349 "parser.y"
                            { printf("PARSER found expr - expr | expr\n"); }
#line 2325 "parser.tab.cpp"
    break;

  case 89: /* expr: expr KW_OR endlOpt expr  */
#line 350 "parser.y"
                              { printf("PARSER found expr - expr || expr\n"); }
#line 2331 "parser.tab.cpp"
    break;

  case 90: /* expr: expr KW_AND endlOpt expr  */
#line 351 "parser.y"
                               { printf("PARSER found expr - expr && expr\n"); }
#line 2337 "parser.tab.cpp"
    break;

  case 91: /* expr: '-' expr  */
#line 352 "parser.y"
                             { printf("PARSER found expr - UMINUS\n"); }
#line 2343 "parser.tab.cpp"
    break;

  case 92: /* expr: '+' expr  */
#line 353 "parser.y"
                            { printf("PARSER found expr - UPLUS\n"); }
#line 2349 "parser.tab.cpp"
    break;

  case 93: /* expr: func_call  */
#line 354 "parser.y"
                { printf("PARSER found expr - func_call\n"); }
#line 2355 "parser.tab.cpp"
    break;

  case 94: /* expr: if_else_expr  */
#line 355 "parser.y"
                                        { printf("PARSER found expr - if_else_expr\n"); }
#line 2361 "parser.tab.cpp"
    break;

  case 95: /* expr: for_expr  */
#line 356 "parser.y"
               { printf("PARSER found expr - for_expr\n"); }
#line 2367 "parser.tab.cpp"
    break;

  case 96: /* expr: while_expr  */
#line 357 "parser.y"
                 { printf("PARSER found expr - while_expr\n"); }
#line 2373 "parser.tab.cpp"
    break;

  case 97: /* expr: do_while_expr  */
#line 358 "parser.y"
                    { printf("PARSER found expr - do_while_expr\n"); }
#line 2379 "parser.tab.cpp"
    break;

  case 98: /* expr: try_expr  */
#line 359 "parser.y"
               { printf("PARSER found expr - try_expr\n"); }
#line 2385 "parser.tab.cpp"
    break;

  case 99: /* expr: match_expr  */
#line 360 "parser.y"
                 { printf("PARSER found expr - match_expr\n"); }
#line 2391 "parser.tab.cpp"
    break;

  case 100: /* expr: '{' statement_expr_list_e '}'  */
#line 361 "parser.y"
                                     { printf("PARSER found expr -  { statement_expr_list_e }\n"); }
#line 2397 "parser.tab.cpp"
    break;

  case 101: /* expr: func  */
#line 362 "parser.y"
           { printf("Function:\n"); }
#line 2403 "parser.tab.cpp"
    break;

  case 102: /* expr: method_call  */
#line 363 "parser.y"
                  { printf("method_call:\n"); }
#line 2409 "parser.tab.cpp"
    break;

  case 103: /* expr: create_instance_class  */
#line 364 "parser.y"
                            { printf("instance_class:\n"); }
#line 2415 "parser.tab.cpp"
    break;

  case 104: /* expr: READLINE '(' ')'  */
#line 365 "parser.y"
                     { printf("readLine:\n"); }
#line 2421 "parser.tab.cpp"
    break;

  case 105: /* expr: PRINT '(' expr ')'  */
#line 366 "parser.y"
                        { printf("print:\n"); }
#line 2427 "parser.tab.cpp"
    break;

  case 106: /* num_const: NUM_10  */
#line 371 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 2433 "parser.tab.cpp"
    break;

  case 107: /* num_const: NUM_16  */
#line 372 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 2439 "parser.tab.cpp"
    break;

  case 108: /* num_const: REAL_NUMBER  */
#line 373 "parser.y"
                  { printf("PARSER found - REAL\n"); }
#line 2445 "parser.tab.cpp"
    break;

  case 109: /* num_const: REAL_NUMBER_EXPONENT  */
#line 374 "parser.y"
                           { printf("PARSER found - REAL_EXP\n"); }
#line 2451 "parser.tab.cpp"
    break;

  case 120: /* func_call: IDENTIFIER '(' expr_list_e ')'  */
#line 395 "parser.y"
                                     { printf("Function call: WITH PARAMS\n"); }
#line 2457 "parser.tab.cpp"
    break;

  case 153: /* array_literal: ARRAY '(' expr_list_e ')'  */
#line 474 "parser.y"
                                { printf("PARSER found Array\n"); }
#line 2463 "parser.tab.cpp"
    break;

  case 155: /* list: LIST '(' expr_list_e ')'  */
#line 485 "parser.y"
                               { printf("PARSER found List\n"); }
#line 2469 "parser.tab.cpp"
    break;

  case 156: /* vector: VECTOR '(' expr_list_e ')'  */
#line 491 "parser.y"
                                 { printf("PARSER found Vector\n"); }
#line 2475 "parser.tab.cpp"
    break;

  case 157: /* set: SET '(' expr_list_e ')'  */
#line 497 "parser.y"
                              { printf("PARSER found Set\n"); }
#line 2481 "parser.tab.cpp"
    break;

  case 158: /* endlList: ENDL  */
#line 505 "parser.y"
                    { printf("PARSER found ENDL\n"); }
#line 2487 "parser.tab.cpp"
    break;

  case 159: /* endlList: endlList ENDL  */
#line 506 "parser.y"
                    { printf("PARSER found endlList\n"); }
#line 2493 "parser.tab.cpp"
    break;

  case 160: /* endlOpt: endlList  */
#line 511 "parser.y"
               { printf("PARSER found endlOpt\n"); }
#line 2499 "parser.tab.cpp"
    break;

  case 162: /* semicolonList: ';'  */
#line 517 "parser.y"
                   { printf("PARSER found SEMICOLON\n"); }
#line 2505 "parser.tab.cpp"
    break;

  case 163: /* semicolonList: semicolonList ';'  */
#line 518 "parser.y"
                        { printf("PARSER found semicolonList\n"); }
#line 2511 "parser.tab.cpp"
    break;

  case 164: /* separator_List: ENDL  */
#line 522 "parser.y"
            { printf("PARSER found ENDL\n"); }
#line 2517 "parser.tab.cpp"
    break;

  case 165: /* separator_List: ';'  */
#line 523 "parser.y"
            { printf("PARSER found SEMICOLON\n"); }
#line 2523 "parser.tab.cpp"
    break;

  case 166: /* separator_List: separator_List ENDL  */
#line 524 "parser.y"
                            { printf("PARSER add ENDL to separator_List\n"); }
#line 2529 "parser.tab.cpp"
    break;

  case 167: /* separator_List: separator_List ';'  */
#line 525 "parser.y"
                           { printf("PARSER add ; to separator_List\n"); }
#line 2535 "parser.tab.cpp"
    break;


#line 2539 "parser.tab.cpp"

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

#line 532 "parser.y"

