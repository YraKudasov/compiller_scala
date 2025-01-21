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
  YYSYMBOL_create_instance_class = 85,     /* create_instance_class  */
  YYSYMBOL_instance_case_class_in_case = 86, /* instance_case_class_in_case  */
  YYSYMBOL_visibility_modifier = 87,       /* visibility_modifier  */
  YYSYMBOL_statement_expr_list = 88,       /* statement_expr_list  */
  YYSYMBOL_statement_expr_list_e = 89,     /* statement_expr_list_e  */
  YYSYMBOL_statement = 90,                 /* statement  */
  YYSYMBOL_if_else_expr = 91,              /* if_else_expr  */
  YYSYMBOL_for_expr = 92,                  /* for_expr  */
  YYSYMBOL_generators_and_conditions_parentheses_List = 93, /* generators_and_conditions_parentheses_List  */
  YYSYMBOL_generators_and_conditions_curly_braces_List = 94, /* generators_and_conditions_curly_braces_List  */
  YYSYMBOL_while_expr = 95,                /* while_expr  */
  YYSYMBOL_do_while_expr = 96,             /* do_while_expr  */
  YYSYMBOL_match_expr = 97,                /* match_expr  */
  YYSYMBOL_case_condition = 98,            /* case_condition  */
  YYSYMBOL_case_list = 99,                 /* case_list  */
  YYSYMBOL_literal_list_case = 100,        /* literal_list_case  */
  YYSYMBOL_try_expr = 101,                 /* try_expr  */
  YYSYMBOL_catch = 102,                    /* catch  */
  YYSYMBOL_finally = 103,                  /* finally  */
  YYSYMBOL_expr_list_e = 104,              /* expr_list_e  */
  YYSYMBOL_expr_list = 105,                /* expr_list  */
  YYSYMBOL_expr = 106,                     /* expr  */
  YYSYMBOL_num_const = 107,                /* num_const  */
  YYSYMBOL_const = 108,                    /* const  */
  YYSYMBOL_params = 109,                   /* params  */
  YYSYMBOL_anonymous_func = 110,           /* anonymous_func  */
  YYSYMBOL_method_params_list = 111,       /* method_params_list  */
  YYSYMBOL_method = 112,                   /* method  */
  YYSYMBOL_method_arguments_list = 113,    /* method_arguments_list  */
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
  YYSYMBOL_semicolonList = 127,            /* semicolonList  */
  YYSYMBOL_separator_List = 128,           /* separator_List  */
  YYSYMBOL_separator_List_e = 129          /* separator_List_e  */
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
#define YYLAST   1324

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  164
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  480

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
       0,    95,   150,   151,   160,   164,   165,   182,   183,   184,
     185,   186,   187,   191,   192,   196,   197,   198,   199,   200,
     209,   210,   211,   219,   220,   221,   222,   233,   234,   235,
     236,   237,   238,   239,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   257,   261,   267,   268,   273,   274,   275,
     276,   277,   278,   279,   283,   284,   285,   290,   291,   298,
     299,   300,   304,   308,   315,   316,   321,   322,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   364,   365,   366,   367,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   387,   388,   389,   390,   395,
     400,   401,   405,   406,   407,   408,   409,   410,   411,   412,
     416,   417,   421,   422,   428,   429,   430,   431,   432,   433,
     434,   438,   439,   445,   446,   450,   461,   462,   466,   470,
     477,   483,   489,   497,   498,   503,   504,   509,   510,   514,
     515,   516,   517,   521,   522
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
  "'_'", "'.'", "$accept", "create_instance_class",
  "instance_case_class_in_case", "visibility_modifier",
  "statement_expr_list", "statement_expr_list_e", "statement",
  "if_else_expr", "for_expr", "generators_and_conditions_parentheses_List",
  "generators_and_conditions_curly_braces_List", "while_expr",
  "do_while_expr", "match_expr", "case_condition", "case_list",
  "literal_list_case", "try_expr", "catch", "finally", "expr_list_e",
  "expr_list", "expr", "num_const", "const", "params", "anonymous_func",
  "method_params_list", "method", "method_arguments_list", "method_call",
  "type", "type_list_car", "type_list", "type_list_simple", "array",
  "array_literal", "initialized_array", "list", "vector", "set",
  "endlList", "endlOpt", "semicolonList", "separator_List",
  "separator_List_e", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-333)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-157)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -29,    69,   164,  -333,    76,   645,  -333,    16,  -333,  -333,
    -333,  -333,  -333,     3,  -333,  -333,    27,  -333,  -333,  -333,
      81,    92,   142,   124,  -333,  -333,    69,   174,  -333,   168,
    -333,  -333,  -333,  -333,  -333,  -333,    69,  -333,     2,    -2,
     963,   963,   963,   963,   196,   150,   218,   199,   645,  -333,
     189,   963,    69,    69,   963,   963,  1025,     5,    69,    69,
      69,    69,   171,   232,   234,    46,     1,  -333,  -333,  -333,
    -333,  -333,  -333,  -333,   235,   207,  1241,   214,  -333,  -333,
     236,   239,   242,   240,    10,    69,    69,    69,    69,   243,
     963,  1052,  -333,  -333,    26,  1097,    42,   963,   244,   241,
      34,   248,   -16,   963,   250,   963,   963,   252,   246,  -333,
    -333,   190,    11,   739,  -333,   270,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,   251,  -333,  -333,  -333,  -333,  -333,  -333,  -333,  -333,
    -333,  -333,   258,   963,  1052,   963,   212,   645,  -333,  1241,
    -333,   240,  -333,   253,    69,   261,   271,   963,    69,    69,
     963,   133,    69,   471,   963,   134,  1118,  -333,   272,  -333,
    -333,  -333,    69,    69,   220,    69,  -333,  -333,    36,    10,
    -333,  1241,  -333,    69,   963,   963,   963,   963,   963,   963,
     963,   963,   963,   963,   963,   963,   963,   963,   963,    69,
     273,  1241,  -333,  1241,    10,    69,  -333,   226,   223,   238,
    -333,   241,   283,   963,   227,  1145,   245,   963,    22,   137,
     277,  1166,   198,  -333,   963,   280,   282,    69,   288,  -333,
     837,  -333,   963,  1270,   180,   194,   194,   222,   222,  -333,
    -333,  -333,   125,   125,   789,  1262,   194,   194,   231,   963,
     963,   254,   240,   240,    69,  -333,  1241,    69,    69,  1052,
    1241,    69,   963,   143,    69,    69,    69,   299,    69,   260,
     264,   278,  -333,   302,    69,    69,   297,    69,    36,  -333,
    1241,  1241,    69,  1193,  1241,    10,  -333,     9,   963,   -29,
     963,   266,   587,  1241,   265,   963,   279,   963,   147,   -11,
     963,   963,   -29,   963,  -333,  -333,    24,    33,    69,    15,
    -333,   -29,  -333,   963,  1052,  1241,    69,   304,  1052,    69,
    1241,  1052,  1241,    69,  1241,    69,    69,    69,    69,  1214,
    -333,    17,   233,    69,    69,    69,    69,    18,    69,   303,
      69,    69,    69,  1241,  -333,    73,    69,    45,   268,   963,
     285,  1052,   284,   963,   901,   170,  -333,  -333,  -333,   963,
     330,   963,   330,    69,    69,    69,   963,   275,    95,   240,
      28,   118,  -333,   963,    69,  1052,  1241,  1052,   289,    69,
    1241,    69,  1241,    69,   963,  1241,   162,    69,  1241,    69,
     963,   240,    32,  1241,  -333,    69,    69,   303,    69,  -333,
    -333,   963,  -333,   287,    69,  1052,   963,   291,  1241,  -333,
     333,   348,   351,   352,  1241,    69,    69,    69,   354,   963,
     146,   240,  -333,  1052,  1052,   305,  1241,    69,   295,   240,
      69,    69,   359,   963,   240,    69,  1241,  -333,    69,  -333,
     306,    69,  1052,   240,  -333,   963,   963,    69,  1241,    69,
     963,   360,    69,  1052,   308,  -333,  1241,  1241,   963,   365,
    1241,    69,  1052,   309,    69,  1241,    69,   963,  -333,    69,
    1052,   963,  1241,  1052,   311,  1241,  -333,    69,  1052,  -333
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   156,   156,   153,   155,     0,     1,     0,   154,   101,
     102,   103,   104,   156,   107,   106,     0,   108,   109,   110,
       0,     0,     0,     0,    53,    51,   156,    50,   105,    57,
     111,   146,   147,   112,   113,   114,   156,   157,   156,     0,
      65,    65,    65,    65,     0,     0,     0,     0,     0,   158,
       0,    65,   156,   156,     0,     0,   118,    69,   156,   156,
     156,   156,     0,     0,     0,   156,   164,    98,    89,    90,
      91,    92,    94,    93,     0,    64,    66,    68,    96,    97,
       0,     0,     0,     0,   164,   156,   156,   156,   156,     0,
       0,     0,    88,    87,    69,     0,     0,    65,     0,   132,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   159,
     160,     0,   163,     0,   148,     0,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,     0,   150,   151,   152,   134,   135,   136,   137,   138,
     139,   140,     0,     0,     0,     0,     0,     0,     4,    49,
      52,     0,    71,     0,   156,     0,     0,    65,   156,   156,
       0,     0,   156,   156,     0,     0,     0,    99,     2,    95,
     161,   162,   156,   156,     0,   156,     6,     5,     0,   164,
       7,     9,    19,   156,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   156,
       0,    54,    58,    47,   164,   156,   141,   115,     0,     0,
     130,   133,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,    65,     0,     0,   156,     0,     8,
     163,    13,     0,    84,    83,    72,    73,    78,    79,    81,
      80,    82,    76,    77,    85,    86,    74,    75,     0,     0,
       0,     0,     0,     0,   156,   131,    70,   156,   156,     0,
      27,   156,     0,     0,   156,   156,   156,     0,   156,     0,
       0,    59,    60,     0,   156,   156,     0,   156,     0,    10,
      11,    67,   156,     0,    56,   164,   142,   116,     0,     0,
       0,     0,     0,    30,     0,     0,     0,     0,   155,     0,
       0,     0,     0,     0,    61,     3,     0,     0,   156,     0,
      12,     0,   149,     0,     0,   119,   156,    20,     0,   156,
      24,     0,    31,   156,    34,   156,   156,   156,   156,     0,
      43,   156,     0,   156,   156,   156,   156,     0,   156,   118,
     156,   156,   156,    55,   117,     0,   156,     0,    28,     0,
       0,     0,     0,     0,     0,     0,    44,    62,    63,     0,
       0,     0,     0,   156,   156,   156,     0,     0,     0,     0,
       0,     0,    45,     0,   156,     0,    23,     0,     0,   156,
      37,   156,    26,   156,     0,    15,     0,   156,    16,   156,
       0,     0,     0,   125,   120,   156,   156,   118,   156,    46,
      21,     0,    29,    32,   156,     0,     0,     0,    38,   143,
       0,     0,     0,     0,   129,   156,   156,   156,     0,     0,
       0,     0,    22,     0,     0,     0,    25,   156,     0,     0,
     156,   156,     0,     0,     0,   156,   124,   121,   156,    33,
      35,   156,     0,     0,   144,     0,     0,   156,   128,   156,
       0,     0,   156,     0,     0,   145,    17,    18,     0,     0,
     123,   156,     0,    41,   156,   127,   156,     0,    36,   156,
       0,     0,   122,     0,    39,   126,    42,   156,     0,    40
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -333,  -333,  -333,   145,  -333,  -333,  -177,  -333,  -333,  -333,
    -333,  -333,  -333,  -333,   -45,   -87,  -333,  -333,  -333,   105,
     -24,  -333,   387,  -333,    84,  -332,  -333,    40,  -333,   225,
    -333,   -75,   126,  -333,  -231,  -333,  -333,  -333,  -333,  -333,
    -333,  -223,    -1,  -333,   204,   -74
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    67,    25,   178,   179,   111,   180,    68,    69,   218,
     266,    70,    71,    72,    26,     2,    27,    73,   271,   272,
      74,    75,    76,    28,    77,    96,    78,   341,   182,    99,
      79,   206,   207,   410,   387,    30,    31,    32,    33,    34,
      35,     4,     7,    38,   112,   113
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       5,   229,   161,    87,   109,     3,   -48,   368,   142,     1,
     143,  -156,    39,   109,   170,   314,    51,    80,    81,    82,
       3,   338,   326,    97,   363,    45,    46,    89,    47,     3,
     333,    52,  -156,   339,   396,    48,   339,    50,   416,   335,
     158,   261,  -156,   298,    97,    40,   397,   153,     8,     3,
     397,    90,    91,   279,    36,   262,   100,   101,   102,   103,
     104,   154,   162,  -156,   108,   420,   172,   173,   327,   -48,
     328,   159,     3,   155,   115,   252,   131,   374,    53,     8,
     -14,   174,   110,    49,   144,   145,   146,   147,    98,    29,
      44,   110,   171,   100,   347,   340,   357,    37,   364,    41,
     153,   310,   205,   263,   334,   231,   151,   175,   398,    98,
      42,    36,   417,   336,   394,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     250,   389,    29,   212,   118,   119,   120,   121,   122,   123,
     124,   116,   117,   118,   119,   120,   121,   122,   123,   124,
       8,   153,   372,   209,    37,   411,    36,   213,   214,   216,
      43,   219,   220,   264,     6,   437,   217,     3,    44,   294,
     265,   225,   226,   325,   228,   150,   295,   286,   129,   130,
     386,  -156,   232,   125,   126,   127,   128,   129,   130,   118,
     119,   120,   121,   122,   123,   124,   383,   399,   248,    37,
     273,  -156,   316,   384,   251,   120,   121,   122,   123,   124,
       3,   313,  -156,   222,    83,   331,    84,   135,   136,   137,
     138,   139,   140,   141,   342,    85,   276,    88,   202,   125,
     126,    29,    86,   129,   130,   122,   123,   124,   269,   270,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   105,
     106,  -156,   107,   288,   114,   132,   289,   290,   133,   157,
     292,   134,   148,   296,   297,   299,   160,   301,   164,   169,
     156,   167,   168,   306,   307,   183,   309,   200,   204,   208,
     210,   311,   125,   126,   127,   128,   129,   130,   199,    97,
     224,   227,   252,   249,   395,   135,   136,   137,   138,   139,
     140,   141,   255,   253,   254,   257,   274,   337,   275,   282,
     259,   409,   358,   267,   277,   345,   415,   300,   349,   270,
     285,   305,   351,   308,   352,   353,   354,   355,   318,   367,
     321,   375,   359,   360,   361,   362,   346,   366,   302,   369,
     370,   371,   303,   291,   323,   373,   438,   377,   386,   379,
     423,   404,   428,   429,   444,   151,   427,   430,   431,   449,
     435,   443,   390,   391,   392,   447,   461,   441,   455,   452,
     464,   466,   469,   401,   477,   278,   304,   365,   405,   287,
     406,   211,   407,   230,     0,     0,   412,     0,   413,     0,
       0,     0,     0,     0,   418,   419,     0,   421,   344,     0,
       0,     0,   348,   424,     0,   350,     0,     0,     0,     0,
       0,     0,     0,     0,   432,   433,   434,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   442,     0,     0,   445,
     446,     0,     0,     0,   450,   378,     0,   451,     0,     0,
     453,    92,    93,    95,     0,     0,   458,     0,   459,     0,
       0,   462,     0,     0,     0,     0,     0,     0,     0,   402,
     467,   403,     0,   470,     0,   471,     0,     0,   473,     0,
       0,     0,     0,     0,     3,     0,   478,   149,   116,   117,
     118,   119,   120,   121,   122,   123,   124,     0,     0,   425,
     163,     0,   165,   166,     0,     0,     0,     0,     0,     0,
     181,     0,     0,     0,     0,     0,     0,   439,   440,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     125,   126,   127,   128,   129,   130,   454,     0,     0,     0,
     201,     0,   203,     0,     0,     0,     0,   463,     0,     0,
       0,     0,     0,     0,     0,     0,   468,   215,     0,     0,
       0,   221,     0,     0,   474,     0,     0,   476,     0,     0,
       0,     0,   479,     0,     0,     0,     0,     0,     0,     0,
       0,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    54,    55,
     256,     0,     0,     0,   260,    56,     0,     0,     0,     9,
      10,    11,    12,    57,    14,    15,     0,   280,     0,   281,
      58,    59,    60,    61,     0,     0,    62,     0,     0,    63,
      64,    16,     0,    17,    18,    19,   283,   284,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   293,
       0,   319,     0,     0,     0,    20,    21,    22,     0,    65,
       0,     0,     0,     0,     0,    66,     0,     9,    10,    11,
      12,    13,    14,    15,     0,   315,     0,   317,     0,   320,
       0,     0,   322,     0,   324,     0,     0,   329,   330,    16,
     332,    17,    18,    19,     0,     0,     0,     0,     0,     0,
     343,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    20,    21,    22,     0,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     0,     0,
       0,     0,     0,     0,     0,     0,   376,     0,     0,     0,
     380,   382,     0,     0,     0,     0,   385,     0,   388,     0,
      54,    55,     0,   393,     0,     0,     0,    56,     0,     0,
     400,     9,    10,    11,    12,    57,    14,    15,     0,   172,
     173,   408,    58,    59,    60,    61,     0,   414,    62,     0,
       0,    63,    64,    16,   174,    17,    18,    19,   422,     0,
       0,     0,     0,   426,     0,     0,   116,   117,   118,   119,
     120,   121,   122,   123,   124,     0,   436,    20,    21,    22,
     175,    65,   176,   177,     0,     0,     0,    66,     0,     0,
     448,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   456,   457,     0,     0,     0,   460,   125,   126,
     170,   128,   129,   130,     0,   465,     0,     0,    54,    55,
       0,     0,     0,     0,   472,    56,     0,     0,   475,     9,
      10,    11,    12,    57,    14,    15,     0,   172,   173,     0,
      58,    59,    60,    61,     0,     0,    62,     0,     0,    63,
      64,    16,   174,    17,    18,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,    21,    22,   175,    65,
     176,   177,    54,    55,     0,    66,     0,     0,   171,    56,
       0,     0,     0,     9,    10,    11,    12,    57,    14,    15,
       0,     0,     0,     0,    58,    59,    60,    61,     0,     0,
      62,     0,     0,    63,    64,    16,     0,    17,    18,    19,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   381,     0,     0,     0,    20,
      21,    22,     0,    65,    54,    55,     0,     0,     0,    66,
       0,    56,     0,     0,     0,     9,    10,    11,    12,    57,
      14,    15,     0,     0,     0,     0,    58,    59,    60,    61,
       0,     0,    62,     0,     0,    63,    64,    16,     0,    17,
      18,    19,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    20,    21,    22,     0,    65,    54,    55,     0,     0,
       0,    66,     0,    56,     0,     0,     0,     9,    10,    11,
      12,    94,    14,    15,     0,     0,     0,     0,    58,    59,
      60,    61,     0,     0,    62,     0,     0,    63,    64,    16,
       0,    17,    18,    19,     9,    10,    11,    12,     0,    14,
      15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    20,    21,    22,    16,    65,    17,    18,
      19,     0,     0,    66,   116,   117,   118,   119,   120,   121,
     122,   123,   124,     0,     0,     0,   152,     0,     0,     0,
      20,    21,    22,     0,    23,   116,   117,   118,   119,   120,
     121,   122,   123,   124,     0,     0,     0,   223,     0,     0,
       0,     0,     0,     0,     0,     0,   125,   126,   127,   128,
     129,   130,   116,   117,   118,   119,   120,   121,   122,   123,
     124,     0,     0,     0,   258,     0,     0,   125,   126,   127,
     128,   129,   130,   116,   117,   118,   119,   120,   121,   122,
     123,   124,     0,     0,     0,   268,     0,     0,     0,     0,
       0,     0,     0,     0,   125,   126,   127,   128,   129,   130,
     116,   117,   118,   119,   120,   121,   122,   123,   124,     0,
       0,     0,     0,     0,   312,   125,   126,   127,   128,   129,
     130,   116,   117,   118,   119,   120,   121,   122,   123,   124,
       0,     0,     0,   356,     0,     0,     0,     0,     0,     0,
       0,     0,   125,   126,   127,   128,   129,   130,   116,   117,
     118,   119,   120,   121,   122,   123,   124,     0,     0,     0,
       0,     0,     0,   125,   126,   127,   128,   129,   130,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   117,   118,
     119,   120,   121,   122,   123,   124,     0,     0,     0,     0,
     125,   126,   127,   128,   129,   130,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   125,   126,     0,     0,   129,   130,     0,     0,   125,
     126,     0,     0,   129,   130
};

static const yytype_int16 yycheck[] =
{
       1,   178,    18,    48,     3,     3,     3,   339,    83,    38,
      84,     6,    13,     3,     3,     6,    18,    41,    42,    43,
       3,     6,    33,    18,     6,    26,    27,    51,    29,     3,
       6,    33,     6,    18,     6,    36,    18,    38,     6,     6,
       6,    19,    37,   266,    18,    18,    18,     5,     3,     3,
      18,    52,    53,   230,    38,    33,    57,    58,    59,    60,
      61,    19,    78,    37,    65,   397,    30,    31,    79,    66,
      81,    37,     3,    97,    75,    66,    77,    32,    80,     3,
      79,    45,    81,    81,    85,    86,    87,    88,    83,     5,
      44,    81,    81,    94,   317,    80,    79,    81,    80,    18,
       5,   278,   147,    81,    80,   179,    80,    71,    80,    83,
      18,    38,    80,    80,    19,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     204,   362,    48,   157,     9,    10,    11,    12,    13,    14,
      15,     7,     8,     9,    10,    11,    12,    13,    14,    15,
       3,     5,    79,   154,    81,   386,    38,   158,   159,    26,
      18,   162,   163,    26,     0,    19,    33,     3,    44,    26,
      33,   172,   173,    26,   175,    91,    33,   252,    53,    54,
      18,     7,   183,    49,    50,    51,    52,    53,    54,     9,
      10,    11,    12,    13,    14,    15,    26,    79,   199,    81,
     224,    33,   289,    33,   205,    11,    12,    13,    14,    15,
       3,   285,     5,    79,    18,   302,    66,    55,    56,    57,
      58,    59,    60,    61,   311,     7,   227,    38,   144,    49,
      50,   147,    33,    53,    54,    13,    14,    15,    40,    41,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    78,
      18,    37,    18,   254,    19,    19,   257,   258,    19,    18,
     261,    19,    19,   264,   265,   266,    18,   268,    18,    79,
      26,    19,    26,   274,   275,     5,   277,    19,    66,    26,
      19,   282,    49,    50,    51,    52,    53,    54,    37,    18,
      18,    71,    66,    20,   369,    55,    56,    57,    58,    59,
      60,    61,    19,    80,    66,    78,    26,   308,    26,    78,
      65,   386,    79,    36,    26,   316,   391,    18,   319,    41,
      66,    19,   323,    26,   325,   326,   327,   328,    62,    26,
      65,    63,   333,   334,   335,   336,    32,   338,    78,   340,
     341,   342,    78,   259,    65,   346,   421,    62,    18,    65,
      63,    62,    19,     5,   429,    80,    65,     6,     6,   434,
       6,    66,   363,   364,   365,     6,     6,    62,   443,    63,
      62,     6,    63,   374,    63,   230,   271,   337,   379,   253,
     381,   156,   383,   179,    -1,    -1,   387,    -1,   389,    -1,
      -1,    -1,    -1,    -1,   395,   396,    -1,   398,   314,    -1,
      -1,    -1,   318,   404,    -1,   321,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   415,   416,   417,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   427,    -1,    -1,   430,
     431,    -1,    -1,    -1,   435,   351,    -1,   438,    -1,    -1,
     441,    54,    55,    56,    -1,    -1,   447,    -1,   449,    -1,
      -1,   452,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   375,
     461,   377,    -1,   464,    -1,   466,    -1,    -1,   469,    -1,
      -1,    -1,    -1,    -1,     3,    -1,   477,    90,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,   405,
     103,    -1,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,    -1,    -1,    -1,    -1,    -1,   423,   424,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    51,    52,    53,    54,   442,    -1,    -1,    -1,
     143,    -1,   145,    -1,    -1,    -1,    -1,   453,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   462,   160,    -1,    -1,
      -1,   164,    -1,    -1,   470,    -1,    -1,   473,    -1,    -1,
      -1,    -1,   478,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    12,
     213,    -1,    -1,    -1,   217,    18,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    -1,   230,    -1,   232,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    42,
      43,    44,    -1,    46,    47,    48,   249,   250,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   262,
      -1,    64,    -1,    -1,    -1,    68,    69,    70,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    22,    23,    24,
      25,    26,    27,    28,    -1,   288,    -1,   290,    -1,   292,
      -1,    -1,   295,    -1,   297,    -1,    -1,   300,   301,    44,
     303,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
     313,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    69,    70,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   349,    -1,    -1,    -1,
     353,   354,    -1,    -1,    -1,    -1,   359,    -1,   361,    -1,
      11,    12,    -1,   366,    -1,    -1,    -1,    18,    -1,    -1,
     373,    22,    23,    24,    25,    26,    27,    28,    -1,    30,
      31,   384,    33,    34,    35,    36,    -1,   390,    39,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,   401,    -1,
      -1,    -1,    -1,   406,    -1,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,   419,    68,    69,    70,
      71,    72,    73,    74,    -1,    -1,    -1,    78,    -1,    -1,
     433,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   445,   446,    -1,    -1,    -1,   450,    49,    50,
       3,    52,    53,    54,    -1,   458,    -1,    -1,    11,    12,
      -1,    -1,    -1,    -1,   467,    18,    -1,    -1,   471,    22,
      23,    24,    25,    26,    27,    28,    -1,    30,    31,    -1,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,
      73,    74,    11,    12,    -1,    78,    -1,    -1,    81,    18,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    42,    43,    44,    -1,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    68,
      69,    70,    -1,    72,    11,    12,    -1,    -1,    -1,    78,
      -1,    18,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    42,    43,    44,    -1,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    69,    70,    -1,    72,    11,    12,    -1,    -1,
      -1,    78,    -1,    18,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    42,    43,    44,
      -1,    46,    47,    48,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    69,    70,    44,    72,    46,    47,
      48,    -1,    -1,    78,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      68,    69,    70,    -1,    72,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    54,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    -1,    19,    -1,    -1,    49,    50,    51,
      52,    53,    54,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,    54,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    -1,    -1,    -1,    21,    49,    50,    51,    52,    53,
      54,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    51,    52,    53,    54,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    54,     7,
       8,     9,    10,    11,    12,    13,    14,    15,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    -1,    -1,
      49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    -1,    53,    54,    -1,    -1,    49,
      50,    -1,    -1,    53,    54
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    38,    99,     3,   125,   126,     0,   126,     3,    22,
      23,    24,    25,    26,    27,    28,    44,    46,    47,    48,
      68,    69,    70,    72,    82,    86,    98,   100,   107,   108,
     119,   120,   121,   122,   123,   124,    38,    81,   127,   126,
      18,    18,    18,    18,    44,   126,   126,   126,   126,    81,
     126,    18,    33,    80,    11,    12,    18,    26,    33,    34,
      35,    36,    39,    42,    43,    72,    78,    85,    91,    92,
      95,    96,    97,   101,   104,   105,   106,   108,   110,   114,
     104,   104,   104,    18,    66,     7,    33,    98,    38,   104,
     126,   126,   106,   106,    26,   106,   109,    18,    83,   113,
     126,   126,   126,   126,   126,    78,    18,    18,   126,     3,
      81,    89,   128,   129,    19,   126,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    49,    50,    51,    52,    53,
      54,   126,    19,    19,    19,    55,    56,    57,    58,    59,
      60,    61,   115,   129,   126,   126,   126,   126,    19,   106,
     108,    80,    19,     5,    19,   104,    26,    18,     6,    37,
      18,    18,    78,   106,    18,   106,   106,    19,    26,    79,
       3,    81,    30,    31,    45,    71,    73,    74,    87,    88,
      90,   106,   112,     5,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,    37,
      19,   106,   108,   106,    66,    98,   115,   116,    26,   126,
      19,   113,   104,   126,   126,   106,    26,    33,    93,   126,
     126,   106,    79,    19,    18,   126,   126,    71,   126,    90,
     128,   129,   126,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   126,    20,
     129,   126,    66,    80,    66,    19,   106,    78,    19,    65,
     106,    19,    33,    81,    26,    33,    94,    36,    19,    40,
      41,   102,   103,   104,    26,    26,   126,    26,    87,    90,
     106,   106,    78,   106,   106,    66,   115,   116,   126,   126,
     126,   108,   126,   106,    26,    33,   126,   126,   125,   126,
      18,   126,    78,    78,   103,    19,   126,   126,    26,   126,
      90,   126,    21,   129,     6,   106,    99,   106,    62,    64,
     106,    65,   106,    65,   106,    26,    33,    79,    81,   106,
     106,    99,   106,     6,    80,     6,    80,   126,     6,    18,
      80,   111,    99,   106,   108,   126,    32,   125,   108,   126,
     108,   126,   126,   126,   126,   126,    19,    79,    79,   126,
     126,   126,   126,     6,    80,   111,   126,    26,   109,   126,
     126,   126,    79,   126,    32,    63,   106,    62,   108,    65,
     106,    64,   106,    26,    33,   106,    18,   118,   106,   118,
     126,   126,   126,   106,    19,   115,     6,    18,    80,    79,
     106,   126,   108,   108,    62,   126,   126,   126,   106,   115,
     117,   118,   126,   126,   106,   115,     6,    80,   126,   126,
     109,   126,   106,    63,   126,   108,   106,    65,    19,     5,
       6,     6,   126,   126,   126,     6,   106,    19,   115,   108,
     108,    62,   126,    66,   115,   126,   126,     6,   106,   115,
     126,   126,    63,   126,   108,   115,   106,   106,   126,   126,
     106,     6,   126,   108,    62,   106,     6,   126,   108,    63,
     126,   126,   106,   126,   108,   106,   108,    63,   126,   108
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    84,    85,    85,    86,    87,    87,    88,    88,    88,
      88,    88,    88,    89,    89,    90,    90,    90,    90,    90,
      91,    91,    91,    92,    92,    92,    92,    93,    93,    93,
      93,    93,    93,    93,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    95,    96,    97,    97,    98,    98,    98,
      98,    98,    98,    98,    99,    99,    99,   100,   100,   101,
     101,   101,   102,   103,   104,   104,   105,   105,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   107,   107,   107,   107,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   109,   109,   109,   109,   110,
     111,   111,   112,   112,   112,   112,   112,   112,   112,   112,
     113,   113,   114,   114,   115,   115,   115,   115,   115,   115,
     115,   116,   116,   117,   117,   118,   119,   119,   120,   121,
     122,   123,   124,   125,   125,   126,   126,   127,   127,   128,
     128,   128,   128,   129,   129
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     6,     5,     1,     1,     1,     2,     1,
       3,     3,     4,     3,     0,     7,     7,    11,    11,     1,
       7,    10,    11,     9,     7,    11,     9,     2,     5,     7,
       3,     4,     7,     9,     3,     8,    11,     5,     6,    12,
      15,    10,    13,     7,     8,     9,     9,     5,     1,     5,
       1,     1,     5,     1,     7,    11,     9,     1,     5,     5,
       5,     6,     4,     4,     1,     0,     1,     5,     1,     1,
       5,     3,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     2,     2,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     3,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     5,     7,     0,     7,
       3,     5,    13,    11,     9,     7,    14,    12,    10,     8,
       3,     4,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     5,     1,     1,     4,     8,
       4,     4,     4,     1,     2,     1,     0,     1,     2,     1,
       1,     2,     2,     1,     0
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
#line 182 "parser.y"
                { printf("Add first statement :\n"); }
#line 2086 "parser.tab.cpp"
    break;

  case 8: /* statement_expr_list: visibility_modifier statement  */
#line 183 "parser.y"
                                    { printf("Add first visibility_modifier statement :\n"); }
#line 2092 "parser.tab.cpp"
    break;

  case 9: /* statement_expr_list: expr  */
#line 184 "parser.y"
           { printf("Add first statement :\n"); }
#line 2098 "parser.tab.cpp"
    break;

  case 10: /* statement_expr_list: statement_expr_list separator_List statement  */
#line 185 "parser.y"
                                                    { printf("Add new statement to statement_expr_list :\n"); }
#line 2104 "parser.tab.cpp"
    break;

  case 11: /* statement_expr_list: statement_expr_list separator_List expr  */
#line 186 "parser.y"
                                               { printf("Add new expr to statement_expr_list :\n"); }
#line 2110 "parser.tab.cpp"
    break;

  case 12: /* statement_expr_list: statement_expr_list separator_List visibility_modifier statement  */
#line 187 "parser.y"
                                                                        { printf("Add new visibility_modifier to statement_expr_list :\n"); }
#line 2116 "parser.tab.cpp"
    break;

  case 14: /* statement_expr_list_e: %empty  */
#line 192 "parser.y"
                     { printf("PARSER found statement_list_e - nothing\n"); }
#line 2122 "parser.tab.cpp"
    break;

  case 15: /* statement: VAL endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 196 "parser.y"
                                                       { printf("implicit value declaration:\n"); }
#line 2128 "parser.tab.cpp"
    break;

  case 16: /* statement: VAR endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 197 "parser.y"
                                                       { printf("implicit variable declaration:\n"); }
#line 2134 "parser.tab.cpp"
    break;

  case 17: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 198 "parser.y"
                                                                                           { printf("explicit value declaration:\n"); }
#line 2140 "parser.tab.cpp"
    break;

  case 18: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 199 "parser.y"
                                                                                           { printf("explicit variable declaration:\n"); }
#line 2146 "parser.tab.cpp"
    break;

  case 19: /* statement: method  */
#line 200 "parser.y"
             { printf("Method:\n"); }
#line 2152 "parser.tab.cpp"
    break;

  case 20: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr  */
#line 209 "parser.y"
                                                      { printf("IF-CONSTR\n"); }
#line 2158 "parser.tab.cpp"
    break;

  case 21: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr ELSE endlOpt expr  */
#line 210 "parser.y"
                                                                          { printf("IF_ELSE-CONSTR\n"); }
#line 2164 "parser.tab.cpp"
    break;

  case 22: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr endlList ELSE endlOpt expr  */
#line 211 "parser.y"
                                                                                   { printf("IF_ELSE-CONSTR\n"); }
#line 2170 "parser.tab.cpp"
    break;

  case 23: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt YIELD endlOpt expr  */
#line 219 "parser.y"
                                                                                                                          { printf("FOR in parentheses\n"); }
#line 2176 "parser.tab.cpp"
    break;

  case 24: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt expr  */
#line 220 "parser.y"
                                                                                                            { printf("FOR in parentheses\n"); }
#line 2182 "parser.tab.cpp"
    break;

  case 25: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt YIELD endlOpt expr  */
#line 221 "parser.y"
                                                                                                                                           { printf("FOR in curly_braces\n"); }
#line 2188 "parser.tab.cpp"
    break;

  case 26: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt expr  */
#line 222 "parser.y"
                                                                                                                             { printf("FOR in curly_braces\n"); }
#line 2194 "parser.tab.cpp"
    break;

  case 64: /* expr_list_e: expr_list  */
#line 315 "parser.y"
                   { printf("PARSER found expr_list - expr_list\n"); }
#line 2200 "parser.tab.cpp"
    break;

  case 65: /* expr_list_e: %empty  */
#line 316 "parser.y"
                     { printf("PARSER found expr_list - nothing\n"); }
#line 2206 "parser.tab.cpp"
    break;

  case 66: /* expr_list: expr  */
#line 321 "parser.y"
                      { printf("PARSER found expr_list - expr\n"); }
#line 2212 "parser.tab.cpp"
    break;

  case 67: /* expr_list: expr_list endlOpt ',' endlOpt expr  */
#line 322 "parser.y"
                                          { printf("PARSER found expr_list - expr_list\n"); }
#line 2218 "parser.tab.cpp"
    break;

  case 68: /* expr: const  */
#line 327 "parser.y"
                                  {printf("PARSER found expr - const\n"); }
#line 2224 "parser.tab.cpp"
    break;

  case 69: /* expr: IDENTIFIER  */
#line 328 "parser.y"
                                       {printf("PARSER found expr - IDENTIFIER\n"); }
#line 2230 "parser.tab.cpp"
    break;

  case 70: /* expr: IDENTIFIER endlOpt '=' endlOpt expr  */
#line 329 "parser.y"
                                          { printf("Assignment:\n"); }
#line 2236 "parser.tab.cpp"
    break;

  case 71: /* expr: '(' expr ')'  */
#line 330 "parser.y"
                   { printf("PARSER found expr - ( expr ) \n"); }
#line 2242 "parser.tab.cpp"
    break;

  case 72: /* expr: expr '>' endlOpt expr  */
#line 331 "parser.y"
                            {printf("PARSER found expr - expr > expr\n"); }
#line 2248 "parser.tab.cpp"
    break;

  case 73: /* expr: expr '<' endlOpt expr  */
#line 332 "parser.y"
                            {printf("PARSER found expr - expr < expr\n"); }
#line 2254 "parser.tab.cpp"
    break;

  case 74: /* expr: expr MORE_OR_EQUAL_OPERATOR endlOpt expr  */
#line 333 "parser.y"
                                               {printf("PARSER found expr - expr >= expr\n"); }
#line 2260 "parser.tab.cpp"
    break;

  case 75: /* expr: expr LESS_OR_EQUAL_OPERATOR endlOpt expr  */
#line 334 "parser.y"
                                               {printf("PARSER found expr - expr <= expr\n"); }
#line 2266 "parser.tab.cpp"
    break;

  case 76: /* expr: expr EQ endlOpt expr  */
#line 335 "parser.y"
                           {printf("PARSER found expr - expr == expr\n"); }
#line 2272 "parser.tab.cpp"
    break;

  case 77: /* expr: expr NEQ endlOpt expr  */
#line 336 "parser.y"
                            {printf("PARSER found expr - expr != expr\n"); }
#line 2278 "parser.tab.cpp"
    break;

  case 78: /* expr: expr '+' endlOpt expr  */
#line 337 "parser.y"
                            { printf("PARSER found expr - expr + expr\n"); }
#line 2284 "parser.tab.cpp"
    break;

  case 79: /* expr: expr '-' endlOpt expr  */
#line 338 "parser.y"
                            { printf("PARSER found expr - expr - expr\n"); }
#line 2290 "parser.tab.cpp"
    break;

  case 80: /* expr: expr '/' endlOpt expr  */
#line 339 "parser.y"
                            { printf("PARSER found expr - expr / expr\n"); }
#line 2296 "parser.tab.cpp"
    break;

  case 81: /* expr: expr '*' endlOpt expr  */
#line 340 "parser.y"
                            { printf("PARSER found expr - expr * expr\n"); }
#line 2302 "parser.tab.cpp"
    break;

  case 82: /* expr: expr '%' endlOpt expr  */
#line 341 "parser.y"
                            { printf("PARSER found expr - expr % expr\n"); }
#line 2308 "parser.tab.cpp"
    break;

  case 83: /* expr: expr '&' endlOpt expr  */
#line 342 "parser.y"
                            { printf("PARSER found expr - expr && expr\n"); }
#line 2314 "parser.tab.cpp"
    break;

  case 84: /* expr: expr '|' endlOpt expr  */
#line 343 "parser.y"
                            { printf("PARSER found expr - expr | expr\n"); }
#line 2320 "parser.tab.cpp"
    break;

  case 85: /* expr: expr KW_OR endlOpt expr  */
#line 344 "parser.y"
                              { printf("PARSER found expr - expr || expr\n"); }
#line 2326 "parser.tab.cpp"
    break;

  case 86: /* expr: expr KW_AND endlOpt expr  */
#line 345 "parser.y"
                               { printf("PARSER found expr - expr && expr\n"); }
#line 2332 "parser.tab.cpp"
    break;

  case 87: /* expr: '-' expr  */
#line 346 "parser.y"
                             { printf("PARSER found expr - UMINUS\n"); }
#line 2338 "parser.tab.cpp"
    break;

  case 88: /* expr: '+' expr  */
#line 347 "parser.y"
                            { printf("PARSER found expr - UPLUS\n"); }
#line 2344 "parser.tab.cpp"
    break;

  case 89: /* expr: if_else_expr  */
#line 348 "parser.y"
                                        { printf("PARSER found expr - if_else_expr\n"); }
#line 2350 "parser.tab.cpp"
    break;

  case 90: /* expr: for_expr  */
#line 349 "parser.y"
               { printf("PARSER found expr - for_expr\n"); }
#line 2356 "parser.tab.cpp"
    break;

  case 91: /* expr: while_expr  */
#line 350 "parser.y"
                 { printf("PARSER found expr - while_expr\n"); }
#line 2362 "parser.tab.cpp"
    break;

  case 92: /* expr: do_while_expr  */
#line 351 "parser.y"
                    { printf("PARSER found expr - do_while_expr\n"); }
#line 2368 "parser.tab.cpp"
    break;

  case 93: /* expr: try_expr  */
#line 352 "parser.y"
               { printf("PARSER found expr - try_expr\n"); }
#line 2374 "parser.tab.cpp"
    break;

  case 94: /* expr: match_expr  */
#line 353 "parser.y"
                 { printf("PARSER found expr - match_expr\n"); }
#line 2380 "parser.tab.cpp"
    break;

  case 95: /* expr: '{' statement_expr_list_e '}'  */
#line 354 "parser.y"
                                     { printf("PARSER found expr -  { statement_expr_list_e }\n"); }
#line 2386 "parser.tab.cpp"
    break;

  case 96: /* expr: anonymous_func  */
#line 355 "parser.y"
                     { printf("Function:\n"); }
#line 2392 "parser.tab.cpp"
    break;

  case 97: /* expr: method_call  */
#line 356 "parser.y"
                  { printf("method_call:\n"); }
#line 2398 "parser.tab.cpp"
    break;

  case 98: /* expr: create_instance_class  */
#line 357 "parser.y"
                            { printf("instance_class:\n"); }
#line 2404 "parser.tab.cpp"
    break;

  case 99: /* expr: READLINE '(' ')'  */
#line 358 "parser.y"
                     { printf("readLine:\n"); }
#line 2410 "parser.tab.cpp"
    break;

  case 100: /* expr: PRINT '(' expr ')'  */
#line 359 "parser.y"
                        { printf("print:\n"); }
#line 2416 "parser.tab.cpp"
    break;

  case 101: /* num_const: NUM_10  */
#line 364 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 2422 "parser.tab.cpp"
    break;

  case 102: /* num_const: NUM_16  */
#line 365 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 2428 "parser.tab.cpp"
    break;

  case 103: /* num_const: REAL_NUMBER  */
#line 366 "parser.y"
                  { printf("PARSER found - REAL\n"); }
#line 2434 "parser.tab.cpp"
    break;

  case 104: /* num_const: REAL_NUMBER_EXPONENT  */
#line 367 "parser.y"
                           { printf("PARSER found - REAL_EXP\n"); }
#line 2440 "parser.tab.cpp"
    break;

  case 148: /* array_literal: ARRAY '(' expr_list_e ')'  */
#line 466 "parser.y"
                                { printf("PARSER found Array\n"); }
#line 2446 "parser.tab.cpp"
    break;

  case 150: /* list: LIST '(' expr_list_e ')'  */
#line 477 "parser.y"
                               { printf("PARSER found List\n"); }
#line 2452 "parser.tab.cpp"
    break;

  case 151: /* vector: VECTOR '(' expr_list_e ')'  */
#line 483 "parser.y"
                                 { printf("PARSER found Vector\n"); }
#line 2458 "parser.tab.cpp"
    break;

  case 152: /* set: SET '(' expr_list_e ')'  */
#line 489 "parser.y"
                              { printf("PARSER found Set\n"); }
#line 2464 "parser.tab.cpp"
    break;

  case 153: /* endlList: ENDL  */
#line 497 "parser.y"
                    { printf("PARSER found ENDL\n"); }
#line 2470 "parser.tab.cpp"
    break;

  case 154: /* endlList: endlList ENDL  */
#line 498 "parser.y"
                    { printf("PARSER found endlList\n"); }
#line 2476 "parser.tab.cpp"
    break;

  case 155: /* endlOpt: endlList  */
#line 503 "parser.y"
               { printf("PARSER found endlOpt\n"); }
#line 2482 "parser.tab.cpp"
    break;

  case 157: /* semicolonList: ';'  */
#line 509 "parser.y"
                   { printf("PARSER found SEMICOLON\n"); }
#line 2488 "parser.tab.cpp"
    break;

  case 158: /* semicolonList: semicolonList ';'  */
#line 510 "parser.y"
                        { printf("PARSER found semicolonList\n"); }
#line 2494 "parser.tab.cpp"
    break;

  case 159: /* separator_List: ENDL  */
#line 514 "parser.y"
            { printf("PARSER found ENDL\n"); }
#line 2500 "parser.tab.cpp"
    break;

  case 160: /* separator_List: ';'  */
#line 515 "parser.y"
            { printf("PARSER found SEMICOLON\n"); }
#line 2506 "parser.tab.cpp"
    break;

  case 161: /* separator_List: separator_List ENDL  */
#line 516 "parser.y"
                            { printf("PARSER add ENDL to separator_List\n"); }
#line 2512 "parser.tab.cpp"
    break;

  case 162: /* separator_List: separator_List ';'  */
#line 517 "parser.y"
                           { printf("PARSER add ; to separator_List\n"); }
#line 2518 "parser.tab.cpp"
    break;


#line 2522 "parser.tab.cpp"

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

#line 524 "parser.y"

