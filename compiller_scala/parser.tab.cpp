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

#include "./ast.h"
#include "./strbuf.h"

#include "FlexLexer.h"
extern int yylex();
extern int yylineno;
Json *found_classes = NULL;
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



#line 110 "parser.tab.cpp"

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
  YYSYMBOL_11_ = 11,                       /* ':'  */
  YYSYMBOL_12_ = 12,                       /* '+'  */
  YYSYMBOL_13_ = 13,                       /* '-'  */
  YYSYMBOL_14_ = 14,                       /* '*'  */
  YYSYMBOL_15_ = 15,                       /* '/'  */
  YYSYMBOL_16_ = 16,                       /* '%'  */
  YYSYMBOL_UMINUS = 17,                    /* UMINUS  */
  YYSYMBOL_UPLUS = 18,                     /* UPLUS  */
  YYSYMBOL_19_ = 19,                       /* '('  */
  YYSYMBOL_20_ = 20,                       /* ')'  */
  YYSYMBOL_21_ = 21,                       /* '['  */
  YYSYMBOL_22_ = 22,                       /* ']'  */
  YYSYMBOL_23_ = 23,                       /* '.'  */
  YYSYMBOL_NUM_10 = 24,                    /* NUM_10  */
  YYSYMBOL_NUM_16 = 25,                    /* NUM_16  */
  YYSYMBOL_REAL_NUMBER = 26,               /* REAL_NUMBER  */
  YYSYMBOL_REAL_NUMBER_EXPONENT = 27,      /* REAL_NUMBER_EXPONENT  */
  YYSYMBOL_IDENTIFIER = 28,                /* IDENTIFIER  */
  YYSYMBOL_CONST_CHAR = 29,                /* CONST_CHAR  */
  YYSYMBOL_CONST_STRING = 30,              /* CONST_STRING  */
  YYSYMBOL_NEWLINE = 31,                   /* NEWLINE  */
  YYSYMBOL_VAL = 32,                       /* VAL  */
  YYSYMBOL_VAR = 33,                       /* VAR  */
  YYSYMBOL_ELSE = 34,                      /* ELSE  */
  YYSYMBOL_IF = 35,                        /* IF  */
  YYSYMBOL_FOR = 36,                       /* FOR  */
  YYSYMBOL_DO = 37,                        /* DO  */
  YYSYMBOL_WHILE = 38,                     /* WHILE  */
  YYSYMBOL_MATCH = 39,                     /* MATCH  */
  YYSYMBOL_CASE = 40,                      /* CASE  */
  YYSYMBOL_PRINTLN = 41,                   /* PRINTLN  */
  YYSYMBOL_READLINE = 42,                  /* READLINE  */
  YYSYMBOL_ARRAY = 43,                     /* ARRAY  */
  YYSYMBOL_OVERRIDE = 44,                  /* OVERRIDE  */
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
  YYSYMBOL_DEF = 67,                       /* DEF  */
  YYSYMBOL_NEW = 68,                       /* NEW  */
  YYSYMBOL_PROTECTED = 69,                 /* PROTECTED  */
  YYSYMBOL_PRIVATE = 70,                   /* PRIVATE  */
  YYSYMBOL_CLASS = 71,                     /* CLASS  */
  YYSYMBOL_EXTENDS = 72,                   /* EXTENDS  */
  YYSYMBOL_ABSTRACT = 73,                  /* ABSTRACT  */
  YYSYMBOL_NOT = 74,                       /* NOT  */
  YYSYMBOL_CASE_PATTERN = 75,              /* CASE_PATTERN  */
  YYSYMBOL_76_ = 76,                       /* '{'  */
  YYSYMBOL_77_ = 77,                       /* '}'  */
  YYSYMBOL_78_ = 78,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 79,                  /* $accept  */
  YYSYMBOL_program = 80,                   /* program  */
  YYSYMBOL_class = 81,                     /* class  */
  YYSYMBOL_class_header = 82,              /* class_header  */
  YYSYMBOL_abstract_class_header = 83,     /* abstract_class_header  */
  YYSYMBOL_case_class_header = 84,         /* case_class_header  */
  YYSYMBOL_class_params = 85,              /* class_params  */
  YYSYMBOL_class_params_e = 86,            /* class_params_e  */
  YYSYMBOL_create_instance_class = 87,     /* create_instance_class  */
  YYSYMBOL_visibility_modifier = 88,       /* visibility_modifier  */
  YYSYMBOL_inheritance = 89,               /* inheritance  */
  YYSYMBOL_statement_expr_list = 90,       /* statement_expr_list  */
  YYSYMBOL_statement_expr_list_e = 91,     /* statement_expr_list_e  */
  YYSYMBOL_statement = 92,                 /* statement  */
  YYSYMBOL_if_else_expr = 93,              /* if_else_expr  */
  YYSYMBOL_for_expr = 94,                  /* for_expr  */
  YYSYMBOL_generators_and_conditions_parentheses_List = 95, /* generators_and_conditions_parentheses_List  */
  YYSYMBOL_generators_and_conditions_curly_braces_List = 96, /* generators_and_conditions_curly_braces_List  */
  YYSYMBOL_while_expr = 97,                /* while_expr  */
  YYSYMBOL_do_while_expr = 98,             /* do_while_expr  */
  YYSYMBOL_match_expr = 99,                /* match_expr  */
  YYSYMBOL_case_condition = 100,           /* case_condition  */
  YYSYMBOL_case_list = 101,                /* case_list  */
  YYSYMBOL_expr_list_e = 102,              /* expr_list_e  */
  YYSYMBOL_expr_list = 103,                /* expr_list  */
  YYSYMBOL_expr = 104,                     /* expr  */
  YYSYMBOL_const = 105,                    /* const  */
  YYSYMBOL_params = 106,                   /* params  */
  YYSYMBOL_anonymous_func = 107,           /* anonymous_func  */
  YYSYMBOL_func = 108,                     /* func  */
  YYSYMBOL_method_params_list = 109,       /* method_params_list  */
  YYSYMBOL_method = 110,                   /* method  */
  YYSYMBOL_method_arguments_list = 111,    /* method_arguments_list  */
  YYSYMBOL_method_call = 112,              /* method_call  */
  YYSYMBOL_type = 113,                     /* type  */
  YYSYMBOL_type_list_car = 114,            /* type_list_car  */
  YYSYMBOL_type_list = 115,                /* type_list  */
  YYSYMBOL_type_list_simple = 116,         /* type_list_simple  */
  YYSYMBOL_array = 117,                    /* array  */
  YYSYMBOL_array_literal = 118,            /* array_literal  */
  YYSYMBOL_initialized_array = 119,        /* initialized_array  */
  YYSYMBOL_endlList = 120,                 /* endlList  */
  YYSYMBOL_endlOpt = 121,                  /* endlOpt  */
  YYSYMBOL_semicolonList = 122,            /* semicolonList  */
  YYSYMBOL_separator_List = 123,           /* separator_List  */
  YYSYMBOL_separator_List_e = 124          /* separator_List_e  */
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
#define YYLAST   1371

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  182
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  537

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   313


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
       2,     2,     2,     2,     2,     2,     2,    16,     8,     2,
      19,    20,    14,    12,     5,    13,    23,    15,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    11,    78,
      10,     6,     9,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    21,     2,    22,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    76,     7,    77,     2,     2,     2,     2,
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
      17,    18,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   131,   131,   138,   139,   140,   146,   147,   148,   149,
     153,   158,   159,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   183,
     184,   188,   189,   202,   203,   211,   212,   220,   221,   222,
     223,   224,   225,   229,   230,   234,   235,   236,   237,   238,
     239,   240,   241,   251,   252,   253,   261,   262,   263,   264,
     269,   270,   271,   272,   273,   274,   275,   276,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   296,
     300,   306,   311,   312,   318,   319,   320,   330,   331,   336,
     337,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   381,   382,   383,   384,   385,   386,
     387,   388,   394,   395,   396,   397,   398,   403,   407,   408,
     409,   410,   414,   415,   419,   420,   421,   422,   423,   427,
     428,   432,   433,   439,   440,   441,   442,   443,   444,   445,
     446,   450,   451,   455,   456,   460,   471,   472,   476,   477,
     481,   490,   491,   496,   497,   502,   503,   507,   508,   509,
     510,   514,   515
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
  "LOWER_THAN_EXPR", "','", "'='", "'|'", "'&'", "'>'", "'<'", "':'",
  "'+'", "'-'", "'*'", "'/'", "'%'", "UMINUS", "UPLUS", "'('", "')'",
  "'['", "']'", "'.'", "NUM_10", "NUM_16", "REAL_NUMBER",
  "REAL_NUMBER_EXPONENT", "IDENTIFIER", "CONST_CHAR", "CONST_STRING",
  "NEWLINE", "VAL", "VAR", "ELSE", "IF", "FOR", "DO", "WHILE", "MATCH",
  "CASE", "PRINTLN", "READLINE", "ARRAY", "OVERRIDE", "KW_TRUE",
  "KW_FALSE", "KW_NULL", "EQ", "NEQ", "KW_OR", "KW_AND",
  "MORE_OR_EQUAL_OPERATOR", "LESS_OR_EQUAL_OPERATOR", "INT_KW",
  "DOUBLE_KW", "STRING_KW", "CHAR_KW", "BOOLEAN_KW", "ANY_KW", "UNIT_KW",
  "TO", "BY", "YIELD", "GENERATOR_OPERATOR", "RIGHT_ARROW_OPERATOR",
  "ID_COLLECTION", "DEF", "NEW", "PROTECTED", "PRIVATE", "CLASS",
  "EXTENDS", "ABSTRACT", "NOT", "CASE_PATTERN", "'{'", "'}'", "';'",
  "$accept", "program", "class", "class_header", "abstract_class_header",
  "case_class_header", "class_params", "class_params_e",
  "create_instance_class", "visibility_modifier", "inheritance",
  "statement_expr_list", "statement_expr_list_e", "statement",
  "if_else_expr", "for_expr", "generators_and_conditions_parentheses_List",
  "generators_and_conditions_curly_braces_List", "while_expr",
  "do_while_expr", "match_expr", "case_condition", "case_list",
  "expr_list_e", "expr_list", "expr", "const", "params", "anonymous_func",
  "func", "method_params_list", "method", "method_arguments_list",
  "method_call", "type", "type_list_car", "type_list", "type_list_simple",
  "array", "array_literal", "initialized_array", "endlList", "endlOpt",
  "semicolonList", "separator_List", "separator_List_e", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-408)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-175)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,  -408,  -408,    49,  -408,    15,   817,  -408,  -408,  -408,
     942,   942,   978,  -408,  -408,    37,  -408,  -408,   109,   109,
     109,   109,   109,   109,   109,   139,   141,   160,    68,  -408,
    -408,  -408,   109,   109,  -408,  -408,   109,   109,    14,  -408,
      73,   106,   107,  -408,   187,    17,  -408,  -408,  -408,  -408,
    -408,  -408,  1261,  -408,  -408,  -408,  -408,  -408,  -408,  -408,
    -408,   161,   161,   167,  1019,    80,  -408,   942,   166,   172,
     190,   189,   171,   179,   198,     4,   942,   199,   157,   942,
     203,   213,   109,   205,    70,   206,   169,   165,    14,    14,
      14,  -408,   168,  -408,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   215,   109,   109,   109,   109,   109,   109,
     109,   473,  -408,   219,   109,   230,    50,  1261,   227,   942,
    -408,   109,   109,   109,   942,   225,   109,   598,   942,   109,
    1066,  -408,   942,   234,   109,   247,   109,     8,  -408,  -408,
     196,   201,   202,   187,  -408,  1261,   942,   942,   942,   942,
     942,   942,   942,   942,   942,   261,   209,   942,   942,   942,
     942,   942,   942,   473,  -408,  -408,  -408,  -408,  -408,  -408,
    -408,  -408,    13,  -408,   270,   221,  -408,   282,   268,   272,
     942,    51,   100,  1083,   226,    19,   274,   271,  1130,   285,
    -408,   308,   109,   210,   942,   306,     5,  -408,  -408,  -408,
    -408,   379,   503,   307,   307,   301,   301,   161,   161,   161,
     172,   109,    22,    22,  1273,   291,   307,   307,  -408,   309,
     329,   593,   473,   473,   109,   109,  -408,  -408,   116,   109,
     109,   109,   109,   109,    91,   109,   942,    24,   109,   109,
     316,   109,   109,  -408,   257,   109,   109,   310,   109,   317,
     473,    -4,   109,  -408,   296,   276,   473,   109,  -408,  -408,
      16,   942,   942,   942,    28,   942,    29,   942,  -408,   286,
     678,  1261,   284,   942,   289,    41,   -10,   942,   942,   330,
     109,   109,   109,   942,   473,   339,    96,   263,  -408,   334,
     331,   332,   352,   338,     9,   335,   109,   109,   473,  -408,
     333,   593,  1261,  1261,  1261,   351,   109,  1261,   354,   109,
    1150,   593,   109,  1261,   265,  1261,   109,   109,   109,   109,
     109,  1197,  1261,    -4,   942,   473,   264,  1261,   109,  -408,
     109,   109,   310,   358,   362,   367,   156,   318,   353,   368,
     363,   870,   -14,  -408,  -408,   473,   392,   473,   393,   109,
      27,   341,   942,  -408,   340,   737,   342,   942,   906,    79,
    -408,   384,  1261,   109,   109,   109,   399,   942,   473,   152,
     942,   473,   473,   380,   381,   130,  -408,   396,   400,   942,
    -408,   109,   407,   109,  -408,  -408,    18,   391,   109,   394,
     109,   942,   109,   593,  1261,   593,  -408,   357,   109,  1261,
     109,  1261,   109,   942,   318,   408,   942,   473,   109,  1261,
     109,  -408,  1214,   409,   413,   411,   422,   406,   410,   473,
     473,    30,   355,   870,  -408,   395,   109,   942,   109,   942,
     116,   942,  -408,   374,   109,   748,   942,   375,  1261,  -408,
     109,  1261,   109,   942,   434,  -408,   593,   593,   473,   473,
     439,   447,   453,   454,  -408,    17,   109,   109,   458,  1261,
     459,  1261,   116,   593,   593,  -408,   418,  1261,   109,   942,
     461,  1261,   109,  -408,  -408,   465,   466,   473,   473,   593,
     593,   942,   415,   870,   109,   109,  -408,   420,   109,  1303,
    1261,   109,   942,   593,   593,   479,   482,  -408,  -408,  1261,
      17,   109,    36,    36,   109,   593,  -408,   428,   942,  1261,
    -408,  -408,   593,   593,   942,   425,  -408,  -408,   593,   429,
     109,  1261,  -408,  -408,  1261,    17,  -408,   109,   593,   942,
     593,   431,  1261,  -408,   109,   593,  -408
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     182,   177,   178,     0,     2,   181,     0,     1,   179,   180,
       0,     0,   136,   124,   130,    92,   126,   125,   174,   174,
     174,   174,   174,   174,   174,     0,     0,   169,     0,   127,
     128,   129,   174,   174,    34,    33,   174,   174,   182,    51,
       0,     0,     0,   120,     0,   182,    37,   112,   113,   114,
     115,   116,    39,    91,   118,   144,    52,   119,   131,   166,
     167,   111,   110,    92,     0,     0,   171,    88,     0,   151,
     173,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   174,     0,     0,     0,     0,     0,   182,   182,
     182,    38,   181,    43,   174,   174,   174,   174,   174,   174,
     174,   174,   174,     0,   174,   174,   174,   174,   174,   174,
     174,     0,    94,     0,   174,     0,    87,    89,     0,    88,
     172,   174,   174,   174,     0,     0,   174,   174,     0,   174,
       0,   121,    88,     0,   174,    31,   174,   174,    10,   117,
       0,     0,     0,     0,    40,    41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   153,   154,   155,   156,   157,   158,
     159,   161,   132,   160,     0,     0,   149,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,     0,   174,     0,    88,     0,     0,     3,     4,     5,
      42,   107,   106,    95,    96,   101,   102,   104,   103,   105,
     152,   174,    99,   100,   108,   109,    97,    98,   163,     0,
     160,     0,     0,     0,   174,   174,   123,   150,    93,   174,
     174,   174,   174,   174,     0,   174,     0,     0,   174,   174,
       0,   174,   174,   168,     0,   174,   174,   136,   174,     0,
       0,    30,   174,     9,     0,     0,     0,   174,   133,   162,
     134,     0,     0,     0,     0,     0,     0,     0,    62,     0,
       0,    63,     0,     0,     0,   173,     0,     0,     0,     0,
     174,   174,   174,     0,     0,     0,     0,     0,    32,     0,
       0,     0,    29,     0,     0,     0,   174,   174,     0,   164,
       0,     0,   137,    90,    45,     0,   174,    46,     0,   174,
      55,     0,   174,    57,     0,    64,   174,   174,   174,   174,
     174,     0,    79,    30,     0,     0,     0,   141,   174,   142,
     174,   174,   136,     0,     0,     0,     0,     6,     0,     0,
      35,     0,     0,   165,   135,     0,     0,     0,     0,   174,
       0,    60,     0,    67,     0,     0,     0,     0,     0,     0,
      80,     0,   148,   174,   174,   174,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     0,     0,     0,
      83,   174,    82,   174,    81,   175,   174,     0,   174,     0,
     174,     0,   174,     0,    56,     0,    70,     0,   174,    71,
     174,    59,   174,     0,    11,     0,     0,     0,   174,   140,
     174,   143,     0,    14,    13,     0,     0,     0,     0,     0,
       0,   174,     0,     0,   176,     0,   174,     0,   174,     0,
      53,     0,    61,    65,   174,     0,     0,     0,    72,    12,
     174,   147,   174,     0,     0,   170,     0,     0,     0,     0,
       0,     0,    22,    21,    36,   182,   174,   174,     0,    47,
       0,    48,    54,     0,     0,    78,     0,    58,   174,     0,
       0,   139,   174,    16,    15,    18,    17,     0,     0,     0,
       0,     0,     0,     0,   174,   174,    66,    68,   174,     0,
     146,   174,     0,     0,     0,    26,    25,    24,    23,    84,
     182,   174,     0,     0,   174,     0,    75,     0,     0,   138,
      20,    19,     0,     0,     0,     0,    50,    49,     0,    76,
     174,   145,    28,    27,    86,   182,    69,   174,     0,     0,
       0,    73,    85,    77,   174,     0,    74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -408,  -408,  -408,   412,  -408,  -408,  -408,   173,  -408,    -5,
    -322,  -408,    20,   -41,  -408,  -408,  -408,  -408,  -408,  -408,
    -408,  -407,  -408,  -105,  -333,    -6,    31,  -238,  -408,  -408,
     253,  -408,   344,  -408,  -123,   277,  -408,  -161,  -326,  -408,
    -408,  -227,   347,  -408,   456,   -38
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,    39,    40,    41,    42,   292,   293,    43,   294,
     253,    45,     4,    46,    47,    48,   185,   239,    49,    50,
      51,   381,   297,   115,   116,   117,    53,    65,    54,    55,
     248,    56,    69,    57,   171,   172,   219,   173,    58,    59,
      60,    70,   177,   386,     5,     6
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      52,    44,   220,    91,    61,    62,    64,    93,   382,   286,
     -44,    66,   275,     1,   179,   376,   456,     1,     8,   221,
       1,    66,   301,   125,   251,   318,   383,   191,   290,   291,
     120,    96,    97,    66,    98,    99,   100,   101,   102,   235,
     218,   338,   339,  -174,   120,   103,   421,   163,   163,     7,
     454,   144,   272,    66,   236,  -174,    67,   229,    87,   273,
      68,   392,   230,   384,   385,    34,    35,   319,   320,   317,
     127,   305,   308,   130,   109,   110,   501,   252,   222,    27,
     126,   222,   439,   350,    -8,   113,   145,   143,     2,   249,
     382,   -44,     2,     9,   369,     2,   424,   237,   135,   259,
     114,   113,   200,   306,   257,   309,   231,   402,   140,   141,
     142,   232,    66,   136,   403,    13,   329,    14,   183,   268,
      16,    17,   188,    94,    95,    96,    97,   289,    98,    99,
     100,   101,   102,   299,    27,    82,    29,    30,    31,   103,
     201,   202,   203,   204,   205,   206,   207,   208,   209,    88,
     382,   212,   213,   214,   215,   216,   217,   113,    79,   257,
      80,   328,   417,   418,   105,   106,   107,   108,   109,   110,
      66,     8,   411,  -174,   228,   343,   516,   517,   111,  -174,
      10,    11,    89,    90,   103,   118,    67,    12,   373,   374,
      68,   119,    13,   120,    14,   121,    15,    16,    17,   122,
      18,    19,   363,    20,    21,    22,    23,   123,    24,    25,
      26,    27,    28,    29,    30,    31,   245,   124,   128,    18,
      19,   246,   387,   131,   389,    34,    35,    24,   129,   247,
     271,    28,   132,   134,   137,    32,    33,    34,    35,    36,
      36,    37,   139,   155,    38,   410,     9,   174,   413,   414,
     176,   178,   258,   184,    32,   302,   303,   304,    36,   307,
      37,   310,   192,   280,   313,   269,   194,   315,   281,   330,
     364,   321,   322,   197,   331,   365,   247,   327,   198,   199,
      67,   223,   332,   332,   442,   211,   224,   225,   226,    13,
     234,    14,   227,   353,    16,    17,   452,   453,    94,    95,
      96,    97,   238,    98,    99,   100,   101,   102,    27,   240,
      29,    30,    31,   242,   103,   100,   101,   102,   362,    98,
      99,   100,   101,   102,   103,   475,   476,   250,   243,   255,
     103,   375,   344,   257,   256,   277,   296,   288,   285,   105,
     106,   298,   351,   109,   110,   354,   394,   311,   314,   323,
     111,   399,   401,   316,   495,   496,   333,   336,   337,   334,
     335,   409,    71,   340,   412,    72,    73,    74,    75,    76,
      77,    78,   345,   371,    81,   347,   136,   370,   372,    83,
      84,   377,   379,    85,    86,   430,   397,    95,    96,    97,
     252,    98,    99,   100,   101,   102,   378,   438,   388,   390,
     441,   395,   103,   393,   404,   408,   398,   419,   415,   416,
      71,   420,  -174,   426,   440,   446,   428,   481,   434,   447,
     455,   459,   448,   461,   432,   462,   433,   105,   106,   133,
     467,   109,   110,   449,   450,   457,   463,   471,   451,   468,
     472,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     477,   156,   157,   158,   159,   160,   161,   162,   478,   479,
     480,   175,   514,   490,   484,   485,   466,   491,   180,   181,
     182,   493,   494,   186,   187,   499,   189,   473,   474,   488,
     500,   193,   504,   195,   196,   512,   509,   529,   513,   520,
     525,   527,   163,   534,   486,   487,   361,   282,   138,   210,
     260,    92,   521,     0,     0,     0,     0,     0,   524,     0,
     497,   498,    96,    97,     0,    98,    99,   100,   101,   102,
     507,     0,     0,   532,   510,   511,   103,   164,   165,   166,
     167,   168,   169,   170,     0,     0,   519,     0,     0,   244,
       0,     0,     0,   522,   523,     0,     0,     0,     0,   526,
       0,   105,   106,     0,     0,   109,   110,     0,   254,   531,
       0,   533,     0,     0,     0,     0,   536,     0,     0,     0,
       0,   261,   262,     0,     0,     0,   263,   264,   265,   266,
     267,     0,   270,     0,     0,   274,   276,     0,   278,   279,
       0,     0,   283,   284,     0,   287,     0,     0,     0,   295,
       0,    66,     0,     0,   300,    94,    95,    96,    97,     0,
      98,    99,   100,   101,   102,     0,     0,    13,     0,    14,
       0,   103,    16,    17,     0,     0,     0,   324,   325,   326,
       0,     0,     0,     0,     0,     0,    27,   104,    29,    30,
      31,     0,     0,   341,   342,     0,   105,   106,   107,   108,
     109,   110,     0,   346,     0,     0,   348,     0,     0,   352,
       0,   257,     0,   355,   356,   357,   358,   359,     0,     0,
       0,     0,     0,     0,     0,   366,     0,   367,   368,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,   391,    12,     0,     0,
       0,     0,    13,     0,    14,     0,    15,    16,    17,     0,
     405,   406,   407,    20,    21,    22,    23,     0,     0,    25,
      26,    27,     0,    29,    30,    31,     0,     0,   422,     0,
     423,     0,     0,   425,     0,   427,     0,   429,     0,   431,
       0,   312,     0,     0,     0,   435,    33,   436,     0,   437,
       0,     0,     0,     0,    38,   443,     0,   444,     0,     0,
       0,    13,     0,    14,     0,   396,    16,    17,     0,     0,
       0,     0,    13,   458,    14,   460,   465,    16,    17,     0,
      27,   464,    29,    30,    31,     0,     0,   469,     0,   470,
       0,    27,     0,    29,    30,    31,     0,     0,     0,     0,
       0,     0,     0,   482,   483,   257,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   489,   257,     0,     0,   492,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,   502,   503,     0,     0,   505,    12,     0,   508,     0,
       0,    13,     0,    14,     0,    15,    16,    17,   515,    18,
      19,   518,    20,    21,    22,    23,     0,    24,    25,    26,
      27,    28,    29,    30,    31,     0,     0,   528,     0,     0,
       0,     0,     0,     0,   530,     0,     0,     0,     0,     0,
       0,   535,    10,    11,    32,    33,    34,    35,    36,    12,
      37,     0,     0,    38,    13,     0,    14,     0,    15,    16,
      17,     0,     0,     0,     0,    20,    21,    22,    23,     0,
       0,    25,    26,    27,     0,    29,    30,    31,    10,    11,
       0,     0,     0,     0,     0,    12,     0,     0,     0,     0,
      13,     0,    14,     0,    15,    16,    17,     0,    33,     0,
       0,    20,    21,    22,    23,   380,    38,    25,    26,    27,
       0,    29,    30,    31,    10,    11,     0,     0,     0,     0,
       0,    12,     0,     0,     0,     0,    13,     0,    14,   400,
      15,    16,    17,     0,    33,     0,     0,    20,    21,    22,
      23,     0,    38,    25,    26,    27,     0,    29,    30,    31,
      10,    11,     0,     0,     0,     0,     0,    12,     0,     0,
       0,     0,    13,     0,    14,     0,    63,    16,    17,     0,
      33,     0,     0,    20,    21,    22,    23,     0,    38,    25,
      26,    27,     0,    29,    30,    31,    94,    95,    96,    97,
       0,    98,    99,   100,   101,   102,     0,     0,     0,   112,
       0,     0,   103,     0,     0,     0,    33,     0,     0,     0,
       0,     0,     0,     0,    38,     0,     0,     0,   104,     0,
       0,     0,     0,     0,     0,     0,     0,   105,   106,   107,
     108,   109,   110,    94,    95,    96,    97,     0,    98,    99,
     100,   101,   102,     0,     0,     0,   190,     0,     0,   103,
      94,    95,    96,    97,     0,    98,    99,   100,   101,   102,
       0,     0,     0,   233,     0,   104,   103,     0,     0,     0,
       0,     0,     0,     0,   105,   106,   107,   108,   109,   110,
       0,     0,   104,     0,     0,     0,     0,     0,     0,     0,
       0,   105,   106,   107,   108,   109,   110,    94,    95,    96,
      97,     0,    98,    99,   100,   101,   102,     0,     0,     0,
     241,     0,     0,   103,     0,     0,     0,    94,    95,    96,
      97,     0,    98,    99,   100,   101,   102,     0,     0,   104,
       0,     0,     0,   103,     0,     0,     0,     0,   105,   106,
     107,   108,   109,   110,   349,     0,     0,     0,     0,   104,
       0,     0,     0,     0,     0,     0,     0,     0,   105,   106,
     107,   108,   109,   110,    94,    95,    96,    97,     0,    98,
      99,   100,   101,   102,     0,     0,     0,   360,     0,     0,
     103,    94,    95,    96,    97,     0,    98,    99,   100,   101,
     102,     0,     0,     0,   445,     0,   104,   103,     0,     0,
       0,     0,     0,     0,     0,   105,   106,   107,   108,   109,
     110,     0,     0,   104,     0,     0,     0,     0,     0,     0,
       0,     0,   105,   106,   107,   108,   109,   110,    94,    95,
      96,    97,     0,    98,    99,   100,   101,   102,     0,     0,
      94,    95,    96,    97,   103,    98,    99,   100,   101,   102,
       0,     0,     0,     0,     0,     0,   103,     0,     0,     0,
     104,     0,     0,     0,     0,     0,     0,     0,     0,   105,
     106,   107,   108,   109,   110,     0,     0,     0,     0,     0,
       0,   105,   106,     0,   108,   109,   110,    13,     0,    14,
       0,   506,    16,    17,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    29,    30,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   257
};

static const yytype_int16 yycheck[] =
{
       6,     6,   163,    44,    10,    11,    12,    45,   341,   247,
       0,     3,   239,     3,   119,   337,   423,     3,     3,     6,
       3,     3,     6,    19,    19,    35,    40,   132,    32,    33,
       3,     9,    10,     3,    12,    13,    14,    15,    16,    20,
     163,    32,    33,     6,     3,    23,   379,    19,    19,     0,
      20,    92,    28,     3,    35,     5,    19,     6,    38,    35,
      23,    34,    11,    77,    78,    69,    70,    77,    78,    28,
      76,    43,    43,    79,    52,    53,   483,    72,    65,    43,
      76,    65,   404,   310,    76,     5,    92,    92,    78,   194,
     423,    77,    78,    78,   332,    78,    78,    78,    28,   222,
      20,     5,   143,   264,    68,   266,     6,    28,    88,    89,
      90,    11,     3,    43,    35,    24,    20,    26,   124,    28,
      29,    30,   128,     7,     8,     9,    10,   250,    12,    13,
      14,    15,    16,   256,    43,    67,    45,    46,    47,    23,
     146,   147,   148,   149,   150,   151,   152,   153,   154,    76,
     483,   157,   158,   159,   160,   161,   162,     5,    19,    68,
      19,   284,    32,    33,    48,    49,    50,    51,    52,    53,
       3,     3,    20,     6,   180,   298,   502,   503,    11,    19,
      12,    13,    76,    76,    23,    19,    19,    19,    32,    33,
      23,    19,    24,     3,    26,     6,    28,    29,    30,    28,
      32,    33,   325,    35,    36,    37,    38,    28,    40,    41,
      42,    43,    44,    45,    46,    47,     6,    19,    19,    32,
      33,    11,   345,    20,   347,    69,    70,    40,    71,    19,
     236,    44,    19,    28,    28,    67,    68,    69,    70,    71,
      71,    73,    77,    28,    76,   368,    78,    28,   371,   372,
      20,    24,   221,    28,    67,   261,   262,   263,    71,   265,
      73,   267,    28,     6,   270,   234,    19,   273,    11,     6,
       6,   277,   278,    77,    11,    11,    19,   283,    77,    77,
      19,    11,    19,    19,   407,    76,    65,     5,    20,    24,
      64,    26,    20,    28,    29,    30,   419,   420,     7,     8,
       9,    10,    28,    12,    13,    14,    15,    16,    43,    38,
      45,    46,    47,    28,    23,    14,    15,    16,   324,    12,
      13,    14,    15,    16,    23,   448,   449,    21,    20,    20,
      23,   336,   301,    68,     5,    19,    40,    20,    28,    48,
      49,    65,   311,    52,    53,   314,   352,    61,    64,    19,
      11,   357,   358,    64,   477,   478,    22,     5,    20,    28,
      28,   367,    15,    28,   370,    18,    19,    20,    21,    22,
      23,    24,    21,    11,    27,    21,    43,    19,    11,    32,
      33,    28,    19,    36,    37,   391,   355,     8,     9,    10,
      72,    12,    13,    14,    15,    16,    28,   403,     6,     6,
     406,    61,    23,    62,    20,     6,    64,    11,    28,    28,
      63,    11,     5,    22,     6,     6,    22,   455,    61,     6,
      65,   427,    11,   429,   393,   431,   395,    48,    49,    82,
     436,    52,    53,    11,    28,    40,    62,   443,    28,    64,
       6,    94,    95,    96,    97,    98,    99,   100,   101,   102,
      11,   104,   105,   106,   107,   108,   109,   110,    11,     6,
       6,   114,   500,   469,     6,     6,   435,     6,   121,   122,
     123,     6,     6,   126,   127,   481,   129,   446,   447,    61,
      65,   134,    62,   136,   137,     6,   492,   525,     6,    61,
      65,    62,    19,    62,   463,   464,   323,   244,    86,   155,
     223,    45,   508,    -1,    -1,    -1,    -1,    -1,   514,    -1,
     479,   480,     9,    10,    -1,    12,    13,    14,    15,    16,
     489,    -1,    -1,   529,   493,   494,    23,    54,    55,    56,
      57,    58,    59,    60,    -1,    -1,   505,    -1,    -1,   192,
      -1,    -1,    -1,   512,   513,    -1,    -1,    -1,    -1,   518,
      -1,    48,    49,    -1,    -1,    52,    53,    -1,   211,   528,
      -1,   530,    -1,    -1,    -1,    -1,   535,    -1,    -1,    -1,
      -1,   224,   225,    -1,    -1,    -1,   229,   230,   231,   232,
     233,    -1,   235,    -1,    -1,   238,   239,    -1,   241,   242,
      -1,    -1,   245,   246,    -1,   248,    -1,    -1,    -1,   252,
      -1,     3,    -1,    -1,   257,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    -1,    -1,    24,    -1,    26,
      -1,    23,    29,    30,    -1,    -1,    -1,   280,   281,   282,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    39,    45,    46,
      47,    -1,    -1,   296,   297,    -1,    48,    49,    50,    51,
      52,    53,    -1,   306,    -1,    -1,   309,    -1,    -1,   312,
      -1,    68,    -1,   316,   317,   318,   319,   320,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   328,    -1,   330,   331,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      12,    13,    -1,    -1,    -1,    -1,   349,    19,    -1,    -1,
      -1,    -1,    24,    -1,    26,    -1,    28,    29,    30,    -1,
     363,   364,   365,    35,    36,    37,    38,    -1,    -1,    41,
      42,    43,    -1,    45,    46,    47,    -1,    -1,   381,    -1,
     383,    -1,    -1,   386,    -1,   388,    -1,   390,    -1,   392,
      -1,    63,    -1,    -1,    -1,   398,    68,   400,    -1,   402,
      -1,    -1,    -1,    -1,    76,   408,    -1,   410,    -1,    -1,
      -1,    24,    -1,    26,    -1,    28,    29,    30,    -1,    -1,
      -1,    -1,    24,   426,    26,   428,    28,    29,    30,    -1,
      43,   434,    45,    46,    47,    -1,    -1,   440,    -1,   442,
      -1,    43,    -1,    45,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   456,   457,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   468,    68,    -1,    -1,   472,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      13,   484,   485,    -1,    -1,   488,    19,    -1,   491,    -1,
      -1,    24,    -1,    26,    -1,    28,    29,    30,   501,    32,
      33,   504,    35,    36,    37,    38,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    -1,   520,    -1,    -1,
      -1,    -1,    -1,    -1,   527,    -1,    -1,    -1,    -1,    -1,
      -1,   534,    12,    13,    67,    68,    69,    70,    71,    19,
      73,    -1,    -1,    76,    24,    -1,    26,    -1,    28,    29,
      30,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,    -1,    45,    46,    47,    12,    13,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      24,    -1,    26,    -1,    28,    29,    30,    -1,    68,    -1,
      -1,    35,    36,    37,    38,    75,    76,    41,    42,    43,
      -1,    45,    46,    47,    12,    13,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    24,    -1,    26,    63,
      28,    29,    30,    -1,    68,    -1,    -1,    35,    36,    37,
      38,    -1,    76,    41,    42,    43,    -1,    45,    46,    47,
      12,    13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    24,    -1,    26,    -1,    28,    29,    30,    -1,
      68,    -1,    -1,    35,    36,    37,    38,    -1,    76,    41,
      42,    43,    -1,    45,    46,    47,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    -1,    -1,    -1,    20,
      -1,    -1,    23,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,
       7,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      -1,    -1,    -1,    20,    -1,    39,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,     7,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      20,    -1,    -1,    23,    -1,    -1,    -1,     7,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    -1,    -1,    39,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    34,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,
      23,     7,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    -1,    -1,    -1,    20,    -1,    39,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    -1,    -1,
       7,     8,     9,    10,    23,    12,    13,    14,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    -1,    51,    52,    53,    24,    -1,    26,
      -1,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    78,    80,    91,   123,   124,     0,     3,    78,
      12,    13,    19,    24,    26,    28,    29,    30,    32,    33,
      35,    36,    37,    38,    40,    41,    42,    43,    44,    45,
      46,    47,    67,    68,    69,    70,    71,    73,    76,    81,
      82,    83,    84,    87,    88,    90,    92,    93,    94,    97,
      98,    99,   104,   105,   107,   108,   110,   112,   117,   118,
     119,   104,   104,    28,   104,   106,     3,    19,    23,   111,
     120,   121,   121,   121,   121,   121,   121,   121,   121,    19,
      19,   121,    67,   121,   121,   121,   121,    91,    76,    76,
      76,    92,   123,   124,     7,     8,     9,    10,    12,    13,
      14,    15,    16,    23,    39,    48,    49,    50,    51,    52,
      53,    11,    20,     5,    20,   102,   103,   104,    19,    19,
       3,     6,    28,    28,    19,    19,    76,   104,    19,    71,
     104,    20,    19,   121,    28,    28,    43,    28,    82,    77,
      91,    91,    91,    88,    92,   104,   121,   121,   121,   121,
     121,   121,   121,   121,   121,    28,   121,   121,   121,   121,
     121,   121,   121,    19,    54,    55,    56,    57,    58,    59,
      60,   113,   114,   116,    28,   121,    20,   121,    24,   102,
     121,   121,   121,   104,    28,    95,   121,   121,   104,   121,
      20,   102,    28,   121,    19,   121,   121,    77,    77,    77,
      92,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     111,    76,   104,   104,   104,   104,   104,   104,   113,   115,
     116,     6,    65,    11,    65,     5,    20,    20,   104,     6,
      11,     6,    11,    20,    64,    20,    35,    78,    28,    96,
      38,    20,    28,    20,   121,     6,    11,    19,   109,   102,
      21,    19,    72,    89,   121,    20,     5,    68,   105,   113,
     114,   121,   121,   121,   121,   121,   121,   121,    28,   105,
     121,   104,    28,    35,   121,   120,   121,    19,   121,   121,
       6,    11,   109,   121,   121,    28,   106,   121,    20,   113,
      32,    33,    85,    86,    88,   121,    40,   101,    65,   113,
     121,     6,   104,   104,   104,    43,   116,   104,    43,   116,
     104,    61,    63,   104,    64,   104,    64,    28,    35,    77,
      78,   104,   104,    19,   121,   121,   121,   104,   113,    20,
       6,    11,    19,    22,    28,    28,     5,    20,    32,    33,
      28,   121,   121,   113,   105,    21,   121,    21,   121,    34,
     120,   105,   121,    28,   105,   121,   121,   121,   121,   121,
      20,    86,   104,   113,     6,    11,   121,   121,   121,   106,
      19,    11,    11,    32,    33,    88,    89,    28,    28,    19,
      75,   100,   103,    40,    77,    78,   122,   113,     6,   113,
       6,   121,    34,    62,   104,    61,    28,   105,    64,   104,
      63,   104,    28,    35,    20,   121,   121,   121,     6,   104,
     113,    20,   104,   113,   113,    28,    28,    32,    33,    11,
      11,   103,   121,   121,    78,   121,    22,   121,    22,   121,
     104,   121,   105,   105,    61,   121,   121,   121,   104,    89,
       6,   104,   113,   121,   121,    20,     6,     6,    11,    11,
      28,    28,   113,   113,    20,    65,   100,    40,   121,   104,
     121,   104,   104,    62,   121,    28,   105,   104,    64,   121,
     121,   104,     6,   105,   105,   113,   113,    11,    11,     6,
       6,   124,   121,   121,     6,     6,   105,   105,    61,   121,
     104,     6,   121,     6,     6,   113,   113,   105,   105,   104,
      65,   100,   121,   121,    62,   121,    28,   105,   121,   104,
     105,   105,     6,     6,   124,   121,   117,   117,   121,   105,
      61,   104,   105,   105,   104,    65,   105,    62,   121,   124,
     121,   105,   104,   105,    62,   121,   105
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    79,    80,    81,    81,    81,    82,    82,    82,    82,
      83,    84,    84,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    86,
      86,    87,    87,    88,    88,    89,    89,    90,    90,    90,
      90,    90,    90,    91,    91,    92,    92,    92,    92,    92,
      92,    92,    92,    93,    93,    93,    94,    94,    94,    94,
      95,    95,    95,    95,    95,    95,    95,    95,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    97,
      98,    99,   100,   100,   101,   101,   101,   102,   102,   103,
     103,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   105,   105,   105,   105,   105,   105,
     105,   105,   106,   106,   106,   106,   106,   107,   108,   108,
     108,   108,   109,   109,   110,   110,   110,   110,   110,   111,
     111,   112,   112,   113,   113,   113,   113,   113,   113,   113,
     113,   114,   114,   115,   115,   116,   117,   117,   118,   118,
     119,   120,   120,   121,   121,   122,   122,   123,   123,   123,
     123,   124,   124
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     4,     4,     4,     7,     8,     3,     5,
       3,     9,    10,     4,     4,     6,     6,     6,     6,     8,
       8,     5,     5,     7,     7,     7,     7,     9,     9,     1,
       0,     3,     6,     1,     1,     3,     6,     1,     2,     1,
       3,     3,     4,     3,     0,     7,     7,    11,    11,    14,
      14,     1,     1,    10,    11,     7,     9,     7,    11,     9,
       5,     7,     3,     3,     4,     7,     9,     5,     8,    11,
       5,     5,     6,    12,    15,     9,    10,    13,     7,     7,
       8,     8,     1,     1,     7,    11,     9,     1,     0,     1,
       5,     1,     1,     5,     3,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       2,     2,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     3,     4,     5,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     5,     5,     7,     0,     7,    13,    11,
       9,     7,     3,     5,     1,    14,    12,    10,     8,     3,
       4,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     5,     1,     1,     5,     1,
      10,     1,     2,     1,     0,     1,     2,     1,     1,     2,
       2,     1,     0
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
  case 2: /* program: statement_expr_list_e  */
#line 131 "parser.y"
                            {(yyval.tree) = (yyvsp[0].tree); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2118 "parser.tab.cpp"
    break;

  case 3: /* class: class_header '{' statement_expr_list_e '}'  */
#line 138 "parser.y"
                                                 { (yyval.tree) = mk_class((yyvsp[-3].tree),(yyvsp[-1].tree)); }
#line 2124 "parser.tab.cpp"
    break;

  case 6: /* class_header: CLASS endlOpt IDENTIFIER endlOpt '(' class_params_e ')'  */
#line 146 "parser.y"
                                                              { (yyval.tree) = mk_class_header(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-1].tree)); }
#line 2130 "parser.tab.cpp"
    break;

  case 7: /* class_header: CLASS endlOpt IDENTIFIER endlOpt '(' class_params_e ')' inheritance  */
#line 147 "parser.y"
                                                                         { (yyval.tree) = mk_class_header_inheritance(mk_ident_lit((yyvsp[-5].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 2136 "parser.tab.cpp"
    break;

  case 8: /* class_header: CLASS endlOpt IDENTIFIER  */
#line 148 "parser.y"
                               { (yyval.tree) = mk_class_header_identifierOnly(mk_ident_lit((yyvsp[0].str_value))); }
#line 2142 "parser.tab.cpp"
    break;

  case 9: /* class_header: CLASS endlOpt IDENTIFIER endlOpt inheritance  */
#line 149 "parser.y"
                                                   { (yyval.tree) = mk_class_header_inheritance_identifier(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree)); }
#line 2148 "parser.tab.cpp"
    break;

  case 13: /* class_params: VAR IDENTIFIER ':' type  */
#line 164 "parser.y"
                              { (yyval.tree) = add_to_list(mk_list(),mk_class_params_var(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2154 "parser.tab.cpp"
    break;

  case 14: /* class_params: VAL IDENTIFIER ':' type  */
#line 165 "parser.y"
                              { (yyval.tree) = add_to_list(mk_list(),mk_class_params_val(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2160 "parser.tab.cpp"
    break;

  case 15: /* class_params: VAR IDENTIFIER ':' type '=' const  */
#line 166 "parser.y"
                                        { (yyval.tree) = add_to_list(mk_list(),mk_class_params_var_const(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2166 "parser.tab.cpp"
    break;

  case 16: /* class_params: VAL IDENTIFIER ':' type '=' const  */
#line 167 "parser.y"
                                        { (yyval.tree) = add_to_list(mk_list(),mk_class_params_val_const(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2172 "parser.tab.cpp"
    break;

  case 17: /* class_params: class_params ',' VAR IDENTIFIER ':' type  */
#line 168 "parser.y"
                                               { (yyval.tree) = add_to_list((yyvsp[-5].tree),mk_class_params_var(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2178 "parser.tab.cpp"
    break;

  case 18: /* class_params: class_params ',' VAL IDENTIFIER ':' type  */
#line 169 "parser.y"
                                               { (yyval.tree) = add_to_list((yyvsp[-5].tree),mk_class_params_var(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2184 "parser.tab.cpp"
    break;

  case 19: /* class_params: class_params ',' VAR IDENTIFIER ':' type '=' const  */
#line 170 "parser.y"
                                                         { (yyval.tree) = add_to_list((yyvsp[-7].tree),mk_class_params_var_const(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2190 "parser.tab.cpp"
    break;

  case 20: /* class_params: class_params ',' VAL IDENTIFIER ':' type '=' const  */
#line 171 "parser.y"
                                                         { (yyval.tree) = add_to_list((yyvsp[-7].tree),mk_class_params_val_const(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2196 "parser.tab.cpp"
    break;

  case 21: /* class_params: visibility_modifier VAR IDENTIFIER ':' type  */
#line 172 "parser.y"
                                                   { (yyval.tree) = add_to_list(mk_list(),mk_class_params_var_vis_mod((yyvsp[-4].tree),mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2202 "parser.tab.cpp"
    break;

  case 22: /* class_params: visibility_modifier VAL IDENTIFIER ':' type  */
#line 173 "parser.y"
                                                   { (yyval.tree) = add_to_list(mk_list(),mk_class_params_val_vis_mod((yyvsp[-4].tree),mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2208 "parser.tab.cpp"
    break;

  case 23: /* class_params: visibility_modifier VAR IDENTIFIER ':' type '=' const  */
#line 174 "parser.y"
                                                            { (yyval.tree) = add_to_list(mk_list(),mk_class_params_var_const_vis_mod((yyvsp[-6].tree),mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2214 "parser.tab.cpp"
    break;

  case 24: /* class_params: visibility_modifier VAL IDENTIFIER ':' type '=' const  */
#line 175 "parser.y"
                                                            { (yyval.tree) = add_to_list(mk_list(),mk_class_params_val_const_vis_mod((yyvsp[-6].tree),mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2220 "parser.tab.cpp"
    break;

  case 25: /* class_params: class_params ',' visibility_modifier VAR IDENTIFIER ':' type  */
#line 176 "parser.y"
                                                                   { (yyval.tree) = add_to_list((yyvsp[-6].tree),mk_class_params_var_vis_mod((yyvsp[-4].tree),mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2226 "parser.tab.cpp"
    break;

  case 26: /* class_params: class_params ',' visibility_modifier VAL IDENTIFIER ':' type  */
#line 177 "parser.y"
                                                                   { (yyval.tree) = add_to_list((yyvsp[-6].tree),mk_class_params_val_vis_mod((yyvsp[-4].tree),mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2232 "parser.tab.cpp"
    break;

  case 27: /* class_params: class_params ',' visibility_modifier VAR IDENTIFIER ':' type '=' const  */
#line 178 "parser.y"
                                                                             { (yyval.tree) = add_to_list((yyvsp[-8].tree),mk_class_params_var_const_vis_mod((yyvsp[-6].tree),mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2238 "parser.tab.cpp"
    break;

  case 28: /* class_params: class_params ',' visibility_modifier VAL IDENTIFIER ':' type '=' const  */
#line 179 "parser.y"
                                                                             { (yyval.tree) = add_to_list((yyvsp[-8].tree),mk_class_params_var_const_vis_mod((yyvsp[-6].tree),mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2244 "parser.tab.cpp"
    break;

  case 29: /* class_params_e: class_params  */
#line 183 "parser.y"
                   {(yyval.tree) = (yyvsp[0].tree);}
#line 2250 "parser.tab.cpp"
    break;

  case 30: /* class_params_e: %empty  */
#line 184 "parser.y"
                    { (yyval.tree) = mk_empty();}
#line 2256 "parser.tab.cpp"
    break;

  case 33: /* visibility_modifier: PRIVATE  */
#line 202 "parser.y"
               {(yyval.tree) = mk_visibility_modifier((char*)"private");}
#line 2262 "parser.tab.cpp"
    break;

  case 34: /* visibility_modifier: PROTECTED  */
#line 203 "parser.y"
                {(yyval.tree) = mk_visibility_modifier((char*)"protected");}
#line 2268 "parser.tab.cpp"
    break;

  case 35: /* inheritance: EXTENDS endlOpt IDENTIFIER  */
#line 211 "parser.y"
                                 { (yyval.tree) = mk_inheritance(mk_ident_lit((yyvsp[0].str_value)));}
#line 2274 "parser.tab.cpp"
    break;

  case 36: /* inheritance: EXTENDS endlOpt IDENTIFIER '(' expr_list ')'  */
#line 212 "parser.y"
                                                 { (yyval.tree) = mk_inheritance_expr(mk_ident_lit((yyvsp[-3].str_value)),(yyvsp[-1].tree));}
#line 2280 "parser.tab.cpp"
    break;

  case 37: /* statement_expr_list: statement  */
#line 220 "parser.y"
                { (yyval.tree) = add_to_list(mk_list(),(yyvsp[0].tree));}
#line 2286 "parser.tab.cpp"
    break;

  case 38: /* statement_expr_list: visibility_modifier statement  */
#line 221 "parser.y"
                                   { (yyval.tree) = add_to_list(mk_list(), mk_visibility_modifier_stmt((yyvsp[-1].tree), (yyvsp[0].tree)));}
#line 2292 "parser.tab.cpp"
    break;

  case 39: /* statement_expr_list: expr  */
#line 222 "parser.y"
           { (yyval.tree) = add_to_list(mk_list(),(yyvsp[0].tree));}
#line 2298 "parser.tab.cpp"
    break;

  case 40: /* statement_expr_list: statement_expr_list separator_List statement  */
#line 223 "parser.y"
                                                    {  (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 2304 "parser.tab.cpp"
    break;

  case 41: /* statement_expr_list: statement_expr_list separator_List expr  */
#line 224 "parser.y"
                                               {   (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree));  }
#line 2310 "parser.tab.cpp"
    break;

  case 42: /* statement_expr_list: statement_expr_list separator_List visibility_modifier statement  */
#line 225 "parser.y"
                                                                        { (yyval.tree) = add_to_list((yyvsp[-3].tree), mk_visibility_modifier_stmt((yyvsp[-1].tree), (yyvsp[0].tree))); }
#line 2316 "parser.tab.cpp"
    break;

  case 43: /* statement_expr_list_e: separator_List_e statement_expr_list separator_List_e  */
#line 229 "parser.y"
                                                            {(yyval.tree) = mk_stmt_expr_list((yyvsp[-1].tree));}
#line 2322 "parser.tab.cpp"
    break;

  case 44: /* statement_expr_list_e: %empty  */
#line 230 "parser.y"
                     { (yyval.tree) = mk_empty();}
#line 2328 "parser.tab.cpp"
    break;

  case 45: /* statement: VAL endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 234 "parser.y"
                                                       {(yyval.tree) = mk_declaration_val(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[0].tree));}
#line 2334 "parser.tab.cpp"
    break;

  case 46: /* statement: VAR endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 235 "parser.y"
                                                       {(yyval.tree) = mk_declaration_var(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[0].tree));}
#line 2340 "parser.tab.cpp"
    break;

  case 47: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 236 "parser.y"
                                                                                           {(yyval.tree) = mk_declaration_val_type(mk_ident_lit((yyvsp[-8].str_value)),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2346 "parser.tab.cpp"
    break;

  case 48: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 237 "parser.y"
                                                                                           {(yyval.tree) = mk_declaration_var_type(mk_ident_lit((yyvsp[-8].str_value)),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2352 "parser.tab.cpp"
    break;

  case 49: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt ARRAY '[' type ']' endlOpt '=' endlOpt array  */
#line 238 "parser.y"
                                                                                              {(yyval.tree) = mk_declaration_var_array(mk_ident_lit((yyvsp[-11].str_value)),(yyvsp[-5].tree),(yyvsp[0].tree));}
#line 2358 "parser.tab.cpp"
    break;

  case 50: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt ARRAY '[' type ']' endlOpt '=' endlOpt array  */
#line 239 "parser.y"
                                                                                              {(yyval.tree) = mk_declaration_val_array(mk_ident_lit((yyvsp[-11].str_value)),(yyvsp[-5].tree),(yyvsp[0].tree));}
#line 2364 "parser.tab.cpp"
    break;

  case 51: /* statement: class  */
#line 240 "parser.y"
            { printf("Class:\n"); }
#line 2370 "parser.tab.cpp"
    break;

  case 52: /* statement: method  */
#line 241 "parser.y"
             {(yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); }
#line 2376 "parser.tab.cpp"
    break;

  case 53: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr ELSE endlOpt expr  */
#line 251 "parser.y"
                                                                           { (yyval.tree) = mk_if_else_expr((yyvsp[-6].tree), (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2382 "parser.tab.cpp"
    break;

  case 54: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr endlList ELSE endlOpt expr  */
#line 252 "parser.y"
                                                                                    { (yyval.tree) = mk_if_else_expr((yyvsp[-7].tree), (yyvsp[-4].tree), (yyvsp[0].tree)); }
#line 2388 "parser.tab.cpp"
    break;

  case 55: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr  */
#line 253 "parser.y"
                                                      { (yyval.tree) = mk_if_expr((yyvsp[-3].tree), (yyvsp[0].tree));}
#line 2394 "parser.tab.cpp"
    break;

  case 56: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt YIELD endlOpt expr  */
#line 261 "parser.y"
                                                                                                                          { (yyval.tree) = mk_for_expr((yyvsp[-5].tree), (yyvsp[0].tree));  }
#line 2400 "parser.tab.cpp"
    break;

  case 57: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt expr  */
#line 262 "parser.y"
                                                                                                             { (yyval.tree) = mk_for_expr((yyvsp[-3].tree), (yyvsp[0].tree));  }
#line 2406 "parser.tab.cpp"
    break;

  case 58: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt YIELD endlOpt expr  */
#line 263 "parser.y"
                                                                                                                                           { (yyval.tree) = mk_for_expr((yyvsp[-6].tree), (yyvsp[0].tree));  }
#line 2412 "parser.tab.cpp"
    break;

  case 59: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt expr  */
#line 264 "parser.y"
                                                                                                                              { (yyval.tree) = mk_for_expr((yyvsp[-4].tree), (yyvsp[0].tree));  }
#line 2418 "parser.tab.cpp"
    break;

  case 60: /* generators_and_conditions_parentheses_List: IDENTIFIER GENERATOR_OPERATOR const TO const  */
#line 269 "parser.y"
                                                        {(yyval.tree) = add_to_list(mk_list(),  mk_generator_without_by(mk_ident_lit((yyvsp[-4].str_value)), (yyvsp[-2].tree), (yyvsp[0].tree))); }
#line 2424 "parser.tab.cpp"
    break;

  case 61: /* generators_and_conditions_parentheses_List: IDENTIFIER GENERATOR_OPERATOR const TO const BY const  */
#line 270 "parser.y"
                                                                {(yyval.tree) = add_to_list(mk_list(),  mk_generator_with_by(mk_ident_lit((yyvsp[-6].str_value)), (yyvsp[-4].tree), (yyvsp[-2].tree), (yyvsp[0].tree))); }
#line 2430 "parser.tab.cpp"
    break;

  case 62: /* generators_and_conditions_parentheses_List: IDENTIFIER GENERATOR_OPERATOR IDENTIFIER  */
#line 271 "parser.y"
                                                   {(yyval.tree) = add_to_list(mk_list(), mk_generator_without_to_and_by(mk_ident_lit((yyvsp[-2].str_value)),mk_ident_lit((yyvsp[0].str_value)))); }
#line 2436 "parser.tab.cpp"
    break;

  case 63: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List IF expr  */
#line 272 "parser.y"
                                                             { (yyval.tree) = add_to_list((yyvsp[-2].tree), mk_if_cond((yyvsp[0].tree))); }
#line 2442 "parser.tab.cpp"
    break;

  case 64: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List ';' IF expr  */
#line 273 "parser.y"
                                                                 { (yyval.tree) = add_to_list((yyvsp[-3].tree), mk_if_cond((yyvsp[0].tree))); }
#line 2448 "parser.tab.cpp"
    break;

  case 65: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List ';' IDENTIFIER GENERATOR_OPERATOR const TO const  */
#line 274 "parser.y"
                                                                                                      { (yyval.tree) = add_to_list((yyvsp[-6].tree), mk_generator_without_by(mk_ident_lit((yyvsp[-4].str_value)), (yyvsp[-2].tree), (yyvsp[0].tree)));}
#line 2454 "parser.tab.cpp"
    break;

  case 66: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List ';' IDENTIFIER GENERATOR_OPERATOR const TO const BY const  */
#line 275 "parser.y"
                                                                                                               { (yyval.tree) = add_to_list((yyvsp[-8].tree), mk_generator_with_by(mk_ident_lit((yyvsp[-6].str_value)), (yyvsp[-4].tree), (yyvsp[-2].tree), (yyvsp[0].tree)));}
#line 2460 "parser.tab.cpp"
    break;

  case 67: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List ';' IDENTIFIER GENERATOR_OPERATOR IDENTIFIER  */
#line 276 "parser.y"
                                                                                                  { (yyval.tree) = add_to_list((yyvsp[-4].tree), mk_generator_without_to_and_by(mk_ident_lit((yyvsp[-2].str_value)), mk_ident_lit((yyvsp[0].str_value)))); }
#line 2466 "parser.tab.cpp"
    break;

  case 68: /* generators_and_conditions_curly_braces_List: IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt const TO endlOpt const  */
#line 280 "parser.y"
                                                                               {(yyval.tree) = add_to_list(mk_list(),  mk_generator_without_by(mk_ident_lit((yyvsp[-7].str_value)), (yyvsp[-3].tree), (yyvsp[0].tree))); }
#line 2472 "parser.tab.cpp"
    break;

  case 69: /* generators_and_conditions_curly_braces_List: IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt const TO endlOpt const BY endlOpt const  */
#line 281 "parser.y"
                                                                                                {(yyval.tree) = add_to_list(mk_list(),  mk_generator_with_by(mk_ident_lit((yyvsp[-10].str_value)), (yyvsp[-6].tree), (yyvsp[-3].tree), (yyvsp[0].tree)));}
#line 2478 "parser.tab.cpp"
    break;

  case 70: /* generators_and_conditions_curly_braces_List: IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt IDENTIFIER  */
#line 282 "parser.y"
                                                                   {(yyval.tree) = add_to_list(mk_list(), mk_generator_without_to_and_by(mk_ident_lit((yyvsp[-4].str_value)),mk_ident_lit((yyvsp[0].str_value)))); }
#line 2484 "parser.tab.cpp"
    break;

  case 71: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlOpt IF endlOpt expr  */
#line 283 "parser.y"
                                                                              { (yyval.tree) = add_to_list((yyvsp[-4].tree), mk_if_cond((yyvsp[0].tree)));}
#line 2490 "parser.tab.cpp"
    break;

  case 72: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlOpt ';' endlOpt IF expr  */
#line 284 "parser.y"
                                                                                  { (yyval.tree) = add_to_list((yyvsp[-5].tree), mk_if_cond((yyvsp[0].tree))); }
#line 2496 "parser.tab.cpp"
    break;

  case 73: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlOpt ';' endlOpt IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt const TO endlOpt const  */
#line 285 "parser.y"
                                                                                                                                               { (yyval.tree) = add_to_list((yyvsp[-11].tree), mk_generator_without_by(mk_ident_lit((yyvsp[-7].str_value)), (yyvsp[-3].tree), (yyvsp[0].tree))); }
#line 2502 "parser.tab.cpp"
    break;

  case 74: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlOpt ';' endlOpt IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt const TO endlOpt const BY endlOpt const  */
#line 286 "parser.y"
                                                                                                                                                                { (yyval.tree) = add_to_list((yyvsp[-14].tree), mk_generator_with_by(mk_ident_lit((yyvsp[-10].str_value)), (yyvsp[-6].tree), (yyvsp[-3].tree), (yyvsp[0].tree))); }
#line 2508 "parser.tab.cpp"
    break;

  case 75: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlOpt ';' endlOpt IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt IDENTIFIER  */
#line 287 "parser.y"
                                                                                                                                   { (yyval.tree) = add_to_list((yyvsp[-8].tree), mk_generator_without_to_and_by(mk_ident_lit((yyvsp[-4].str_value)), mk_ident_lit((yyvsp[0].str_value))));}
#line 2514 "parser.tab.cpp"
    break;

  case 76: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlList IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt const TO endlOpt const  */
#line 288 "parser.y"
                                                                                                                                    {(yyval.tree) = add_to_list(mk_list(),  mk_generator_without_by(mk_ident_lit((yyvsp[-7].str_value)), (yyvsp[-3].tree), (yyvsp[0].tree)));}
#line 2520 "parser.tab.cpp"
    break;

  case 77: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlList IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt const TO endlOpt const BY endlOpt const  */
#line 289 "parser.y"
                                                                                                                                                     {(yyval.tree) = add_to_list(mk_list(),  mk_generator_with_by(mk_ident_lit((yyvsp[-10].str_value)), (yyvsp[-6].tree), (yyvsp[-3].tree), (yyvsp[0].tree))); }
#line 2526 "parser.tab.cpp"
    break;

  case 78: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlList IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt IDENTIFIER  */
#line 290 "parser.y"
                                                                                                                        {(yyval.tree) = add_to_list(mk_list(), mk_generator_without_to_and_by(mk_ident_lit((yyvsp[-4].str_value)),mk_ident_lit((yyvsp[0].str_value)))); }
#line 2532 "parser.tab.cpp"
    break;

  case 79: /* while_expr: WHILE endlOpt '(' expr ')' endlOpt expr  */
#line 296 "parser.y"
                                                              { (yyval.tree) = mk_while_expr((yyvsp[-3].tree),(yyvsp[0].tree)); }
#line 2538 "parser.tab.cpp"
    break;

  case 80: /* do_while_expr: DO endlOpt expr endlOpt WHILE '(' expr ')'  */
#line 300 "parser.y"
                                                                 { (yyval.tree) = mk_do_while_expr((yyvsp[-5].tree),(yyvsp[-1].tree)); }
#line 2544 "parser.tab.cpp"
    break;

  case 81: /* match_expr: expr MATCH endlOpt '{' endlOpt case_list endlOpt '}'  */
#line 306 "parser.y"
                                                              {(yyval.tree) = mk_match_expr((yyvsp[-7].tree),(yyvsp[-2].tree));}
#line 2550 "parser.tab.cpp"
    break;

  case 82: /* case_condition: expr_list  */
#line 311 "parser.y"
                                          {(yyval.tree) = add_case_condition((yyvsp[0].tree));}
#line 2556 "parser.tab.cpp"
    break;

  case 83: /* case_condition: CASE_PATTERN  */
#line 312 "parser.y"
                       {(yyval.tree) = add_case_condition((yyvsp[0].tree));}
#line 2562 "parser.tab.cpp"
    break;

  case 84: /* case_list: CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 318 "parser.y"
                                                                                         {(yyval.tree) = mk_list();(yyval.tree) = add_alt_case((yyval.tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2568 "parser.tab.cpp"
    break;

  case 85: /* case_list: case_list endlOpt semicolonList endlOpt CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 319 "parser.y"
                                                                                                                                 {(yyval.tree) = add_alt_case((yyvsp[-10].tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2574 "parser.tab.cpp"
    break;

  case 86: /* case_list: case_list endlOpt CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 320 "parser.y"
                                                                                                           {(yyval.tree) = add_alt_case((yyvsp[-8].tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2580 "parser.tab.cpp"
    break;

  case 87: /* expr_list_e: expr_list  */
#line 330 "parser.y"
                   { printf("PARSER found expr_list - expr_list\n"); }
#line 2586 "parser.tab.cpp"
    break;

  case 88: /* expr_list_e: %empty  */
#line 331 "parser.y"
                     {  (yyval.tree) = mk_list();}
#line 2592 "parser.tab.cpp"
    break;

  case 89: /* expr_list: expr  */
#line 336 "parser.y"
                      { (yyval.tree) = add_to_list(mk_list(), (yyvsp[0].tree));}
#line 2598 "parser.tab.cpp"
    break;

  case 90: /* expr_list: expr_list endlOpt ',' endlOpt expr  */
#line 337 "parser.y"
                                          { (yyval.tree) = add_to_list((yyvsp[-4].tree), (yyvsp[0].tree)); }
#line 2604 "parser.tab.cpp"
    break;

  case 91: /* expr: const  */
#line 342 "parser.y"
             {printf("PARSER found expr - const\n"); }
#line 2610 "parser.tab.cpp"
    break;

  case 92: /* expr: IDENTIFIER  */
#line 343 "parser.y"
                                       {(yyval.tree) = mk_ident_lit((yyvsp[0].str_value)); }
#line 2616 "parser.tab.cpp"
    break;

  case 93: /* expr: IDENTIFIER endlOpt '=' endlOpt expr  */
#line 344 "parser.y"
                                          { printf("Assignment:\n"); }
#line 2622 "parser.tab.cpp"
    break;

  case 94: /* expr: '(' expr ')'  */
#line 345 "parser.y"
                   { printf("PARSER found expr - ( expr ) \n"); }
#line 2628 "parser.tab.cpp"
    break;

  case 95: /* expr: expr '>' endlOpt expr  */
#line 346 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) ">", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2634 "parser.tab.cpp"
    break;

  case 96: /* expr: expr '<' endlOpt expr  */
#line 347 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "<", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2640 "parser.tab.cpp"
    break;

  case 97: /* expr: expr MORE_OR_EQUAL_OPERATOR endlOpt expr  */
#line 348 "parser.y"
                                               { (yyval.tree) = mk_bin_op((char*) ">=", (yyvsp[-3].tree), (yyvsp[0].tree));  }
#line 2646 "parser.tab.cpp"
    break;

  case 98: /* expr: expr LESS_OR_EQUAL_OPERATOR endlOpt expr  */
#line 349 "parser.y"
                                               { (yyval.tree) = mk_bin_op((char*) "<=", (yyvsp[-3].tree), (yyvsp[0].tree));  }
#line 2652 "parser.tab.cpp"
    break;

  case 99: /* expr: expr EQ endlOpt expr  */
#line 350 "parser.y"
                           { (yyval.tree) = mk_bin_op((char*) "==", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2658 "parser.tab.cpp"
    break;

  case 100: /* expr: expr NEQ endlOpt expr  */
#line 351 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "!=", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2664 "parser.tab.cpp"
    break;

  case 101: /* expr: expr '+' endlOpt expr  */
#line 352 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "+", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2670 "parser.tab.cpp"
    break;

  case 102: /* expr: expr '-' endlOpt expr  */
#line 353 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "-", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2676 "parser.tab.cpp"
    break;

  case 103: /* expr: expr '/' endlOpt expr  */
#line 354 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "/", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2682 "parser.tab.cpp"
    break;

  case 104: /* expr: expr '*' endlOpt expr  */
#line 355 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "*", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2688 "parser.tab.cpp"
    break;

  case 105: /* expr: expr '%' endlOpt expr  */
#line 356 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "%", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2694 "parser.tab.cpp"
    break;

  case 106: /* expr: expr '&' endlOpt expr  */
#line 357 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "&", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2700 "parser.tab.cpp"
    break;

  case 107: /* expr: expr '|' endlOpt expr  */
#line 358 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "|", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2706 "parser.tab.cpp"
    break;

  case 108: /* expr: expr KW_OR endlOpt expr  */
#line 359 "parser.y"
                              { (yyval.tree) = mk_bin_op((char*) "||", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2712 "parser.tab.cpp"
    break;

  case 109: /* expr: expr KW_AND endlOpt expr  */
#line 360 "parser.y"
                               { (yyval.tree) = mk_bin_op((char*) "&&", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2718 "parser.tab.cpp"
    break;

  case 110: /* expr: '-' expr  */
#line 361 "parser.y"
                             { (yyval.tree) = mk_unary_op("unary_minus_op", (yyvsp[0].tree)); }
#line 2724 "parser.tab.cpp"
    break;

  case 111: /* expr: '+' expr  */
#line 362 "parser.y"
                            { (yyval.tree) = mk_unary_op("unary_plus_op", (yyvsp[0].tree)); }
#line 2730 "parser.tab.cpp"
    break;

  case 112: /* expr: if_else_expr  */
#line 363 "parser.y"
                   {(yyval.tree)=(yyvsp[0].tree);}
#line 2736 "parser.tab.cpp"
    break;

  case 113: /* expr: for_expr  */
#line 364 "parser.y"
               { printf("PARSER found expr - for_expr\n"); }
#line 2742 "parser.tab.cpp"
    break;

  case 114: /* expr: while_expr  */
#line 365 "parser.y"
                 {(yyval.tree)=(yyvsp[0].tree);}
#line 2748 "parser.tab.cpp"
    break;

  case 115: /* expr: do_while_expr  */
#line 366 "parser.y"
                    {(yyval.tree)=(yyvsp[0].tree);}
#line 2754 "parser.tab.cpp"
    break;

  case 116: /* expr: match_expr  */
#line 367 "parser.y"
                 {(yyval.tree)=(yyvsp[0].tree);}
#line 2760 "parser.tab.cpp"
    break;

  case 117: /* expr: '{' statement_expr_list_e '}'  */
#line 368 "parser.y"
                                    { (yyval.tree) = (yyvsp[-1].tree); }
#line 2766 "parser.tab.cpp"
    break;

  case 118: /* expr: anonymous_func  */
#line 369 "parser.y"
                     { (yyval.tree)=(yyvsp[0].tree); }
#line 2772 "parser.tab.cpp"
    break;

  case 119: /* expr: method_call  */
#line 370 "parser.y"
                  { (yyval.tree)=(yyvsp[0].tree); }
#line 2778 "parser.tab.cpp"
    break;

  case 120: /* expr: create_instance_class  */
#line 371 "parser.y"
                            { (yyval.tree) = (yyvsp[0].tree); }
#line 2784 "parser.tab.cpp"
    break;

  case 121: /* expr: READLINE '(' ')'  */
#line 372 "parser.y"
                     { printf("readLine:\n"); }
#line 2790 "parser.tab.cpp"
    break;

  case 122: /* expr: PRINTLN '(' expr ')'  */
#line 373 "parser.y"
                          { printf("print:\n"); }
#line 2796 "parser.tab.cpp"
    break;

  case 123: /* expr: IDENTIFIER '.' '(' NUM_10 ')'  */
#line 374 "parser.y"
                                    { printf("array_call:\n"); }
#line 2802 "parser.tab.cpp"
    break;

  case 124: /* const: NUM_10  */
#line 381 "parser.y"
             { (yyval.tree) = mk_int_const((yyvsp[0].int_value)); }
#line 2808 "parser.tab.cpp"
    break;

  case 125: /* const: CONST_STRING  */
#line 382 "parser.y"
                   { (yyval.tree) = mk_string_const((yyvsp[0].str_value)); }
#line 2814 "parser.tab.cpp"
    break;

  case 126: /* const: CONST_CHAR  */
#line 383 "parser.y"
                 { (yyval.tree) = mk_char_const((yyvsp[0].str_value)); }
#line 2820 "parser.tab.cpp"
    break;

  case 127: /* const: KW_TRUE  */
#line 384 "parser.y"
              { (yyval.tree) = mk_boolean_const(true); }
#line 2826 "parser.tab.cpp"
    break;

  case 128: /* const: KW_FALSE  */
#line 385 "parser.y"
               { (yyval.tree) = mk_boolean_const(false); }
#line 2832 "parser.tab.cpp"
    break;

  case 129: /* const: KW_NULL  */
#line 386 "parser.y"
              { (yyval.tree) = mk_null_const(); }
#line 2838 "parser.tab.cpp"
    break;

  case 130: /* const: REAL_NUMBER  */
#line 387 "parser.y"
                  { (yyval.tree) = mk_real_const((yyvsp[0].real_value)); }
#line 2844 "parser.tab.cpp"
    break;

  case 131: /* const: array  */
#line 388 "parser.y"
            { (yyval.tree) = mk_array_const((yyvsp[0].tree)); }
#line 2850 "parser.tab.cpp"
    break;

  case 132: /* params: IDENTIFIER ':' type_list_car  */
#line 394 "parser.y"
                                    {  (yyval.tree) = add_to_list(mk_list(), mk_method_params(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree)));  }
#line 2856 "parser.tab.cpp"
    break;

  case 133: /* params: IDENTIFIER ':' type_list_car '=' const  */
#line 395 "parser.y"
                                              {  (yyval.tree) = add_to_list(mk_list(), mk_method_params_value(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2862 "parser.tab.cpp"
    break;

  case 134: /* params: params ',' IDENTIFIER ':' type_list_car  */
#line 396 "parser.y"
                                               {  (yyval.tree) = add_to_list((yyvsp[-4].tree), mk_method_params(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2868 "parser.tab.cpp"
    break;

  case 135: /* params: params ',' IDENTIFIER ':' type_list_car '=' const  */
#line 397 "parser.y"
                                                         {  (yyval.tree) = add_to_list((yyvsp[-6].tree), mk_method_params_value(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2874 "parser.tab.cpp"
    break;

  case 137: /* anonymous_func: '(' params ')' endlOpt RIGHT_ARROW_OPERATOR endlOpt expr  */
#line 403 "parser.y"
                                                                                   { (yyval.tree) = mk_anonym_func((yyvsp[-5].tree),(yyvsp[0].tree));}
#line 2880 "parser.tab.cpp"
    break;

  case 138: /* func: DEF endlOpt IDENTIFIER endlOpt method_params_list endlOpt ':' endlOpt type endlOpt '=' endlOpt expr  */
#line 407 "parser.y"
                                                                                                          { (yyval.tree) = mk_method_declaration(mk_ident_lit((yyvsp[-10].str_value)),(yyvsp[-8].tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2886 "parser.tab.cpp"
    break;

  case 139: /* func: DEF endlOpt IDENTIFIER endlOpt ':' endlOpt type endlOpt '=' endlOpt expr  */
#line 408 "parser.y"
                                                                               { (yyval.tree) = mk_method_declaration_typeOnly(mk_ident_lit((yyvsp[-8].str_value)),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2892 "parser.tab.cpp"
    break;

  case 140: /* func: DEF endlOpt IDENTIFIER endlOpt method_params_list endlOpt '=' endlOpt expr  */
#line 409 "parser.y"
                                                                                 { (yyval.tree) = mk_method_declaration_paramsOnly(mk_ident_lit((yyvsp[-6].str_value)),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2898 "parser.tab.cpp"
    break;

  case 141: /* func: DEF endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 410 "parser.y"
                                                      { (yyval.tree) = mk_method_declaration_bodyOnly(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[0].tree));}
#line 2904 "parser.tab.cpp"
    break;

  case 142: /* method_params_list: '(' params ')'  */
#line 414 "parser.y"
                   { (yyval.tree) = (yyvsp[-1].tree); }
#line 2910 "parser.tab.cpp"
    break;

  case 143: /* method_params_list: method_params_list endlOpt '(' params ')'  */
#line 415 "parser.y"
                                              { (yyval.tree) = mk_list(); (yyval.tree) = add_to_list((yyvsp[-4].tree),(yyvsp[-1].tree));}
#line 2916 "parser.tab.cpp"
    break;

  case 144: /* method: func  */
#line 419 "parser.y"
           { (yyval.tree) = (yyvsp[0].tree); }
#line 2922 "parser.tab.cpp"
    break;

  case 149: /* method_arguments_list: '(' expr_list_e ')'  */
#line 427 "parser.y"
                        {(yyval.tree) = (yyvsp[-1].tree);}
#line 2928 "parser.tab.cpp"
    break;

  case 150: /* method_arguments_list: method_arguments_list '(' expr_list_e ')'  */
#line 428 "parser.y"
                                              {(yyval.tree) = mk_list(); add_to_list((yyvsp[-3].tree),mk_method_arguments_list((yyvsp[-1].tree)));}
#line 2934 "parser.tab.cpp"
    break;

  case 151: /* method_call: IDENTIFIER method_arguments_list  */
#line 432 "parser.y"
                                       { (yyval.tree) = mk_method_call((yyvsp[-1].str_value),(yyvsp[0].tree));}
#line 2940 "parser.tab.cpp"
    break;

  case 152: /* method_call: expr '.' IDENTIFIER method_arguments_list  */
#line 433 "parser.y"
                                                { (yyval.tree) = mk_method_call_identifier(mk_ident_lit((yyvsp[-3].tree)),mk_ident_lit((yyvsp[-1].str_value)),(yyvsp[0].tree));}
#line 2946 "parser.tab.cpp"
    break;

  case 153: /* type: INT_KW  */
#line 439 "parser.y"
             { (yyval.tree) = mk_integer_type(); }
#line 2952 "parser.tab.cpp"
    break;

  case 154: /* type: DOUBLE_KW  */
#line 440 "parser.y"
                { (yyval.tree) = mk_real_type(); }
#line 2958 "parser.tab.cpp"
    break;

  case 155: /* type: STRING_KW  */
#line 441 "parser.y"
                { (yyval.tree) = mk_string_type(); }
#line 2964 "parser.tab.cpp"
    break;

  case 156: /* type: CHAR_KW  */
#line 442 "parser.y"
              { (yyval.tree) = mk_char_type(); }
#line 2970 "parser.tab.cpp"
    break;

  case 157: /* type: BOOLEAN_KW  */
#line 443 "parser.y"
                 { (yyval.tree) = mk_boolean_type(); }
#line 2976 "parser.tab.cpp"
    break;

  case 158: /* type: ANY_KW  */
#line 444 "parser.y"
             { (yyval.tree) = mk_any_type(); }
#line 2982 "parser.tab.cpp"
    break;

  case 159: /* type: UNIT_KW  */
#line 445 "parser.y"
              { (yyval.tree) = mk_unit_type(); }
#line 2988 "parser.tab.cpp"
    break;

  case 160: /* type: type_list_simple  */
#line 446 "parser.y"
                       { (yyval.tree) = (yyvsp[0].tree);}
#line 2994 "parser.tab.cpp"
    break;

  case 161: /* type_list_car: type  */
#line 450 "parser.y"
           { (yyval.tree) = mk_list(); (yyval.tree) = add_to_list((yyval.tree), (yyvsp[0].tree));  }
#line 3000 "parser.tab.cpp"
    break;

  case 162: /* type_list_car: type_list_car RIGHT_ARROW_OPERATOR type  */
#line 451 "parser.y"
                                              { (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 3006 "parser.tab.cpp"
    break;

  case 163: /* type_list: type  */
#line 455 "parser.y"
           { (yyval.tree) = mk_list(); (yyval.tree) = add_to_list((yyval.tree), (yyvsp[0].tree)); }
#line 3012 "parser.tab.cpp"
    break;

  case 164: /* type_list: type_list_simple ',' type  */
#line 456 "parser.y"
                                { (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 3018 "parser.tab.cpp"
    break;

  case 165: /* type_list_simple: '(' type_list ')' RIGHT_ARROW_OPERATOR type  */
#line 460 "parser.y"
                                                 { (yyval.tree) = add_to_list((yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 3024 "parser.tab.cpp"
    break;

  case 166: /* array: array_literal  */
#line 471 "parser.y"
                     {(yyval.tree) = (yyvsp[0].tree); }
#line 3030 "parser.tab.cpp"
    break;

  case 167: /* array: initialized_array  */
#line 472 "parser.y"
                         {(yyval.tree) = mk_initialized_array((yyvsp[0].tree));}
#line 3036 "parser.tab.cpp"
    break;

  case 168: /* array_literal: ARRAY endlOpt '(' expr_list_e ')'  */
#line 476 "parser.y"
                                        {  (yyval.tree) = mk_array_literal((yyvsp[-1].tree)); }
#line 3042 "parser.tab.cpp"
    break;

  case 169: /* array_literal: ARRAY  */
#line 477 "parser.y"
                                   { (yyval.tree) = mk_empty_array(); }
#line 3048 "parser.tab.cpp"
    break;

  case 170: /* initialized_array: NEW endlOpt ARRAY endlOpt '[' type ']' '(' expr ')'  */
#line 481 "parser.y"
                                                           { (yyval.tree) = mk_initialized_array_with_type_and_expr((yyvsp[-4].tree), (yyvsp[-1].tree));}
#line 3054 "parser.tab.cpp"
    break;

  case 171: /* endlList: ENDL  */
#line 490 "parser.y"
                    { printf("PARSER found ENDL\n"); }
#line 3060 "parser.tab.cpp"
    break;

  case 172: /* endlList: endlList ENDL  */
#line 491 "parser.y"
                    { printf("PARSER found endlList\n"); }
#line 3066 "parser.tab.cpp"
    break;

  case 173: /* endlOpt: endlList  */
#line 496 "parser.y"
               { printf("PARSER found endlOpt\n"); }
#line 3072 "parser.tab.cpp"
    break;

  case 175: /* semicolonList: ';'  */
#line 502 "parser.y"
                   { printf("PARSER found SEMICOLON\n"); }
#line 3078 "parser.tab.cpp"
    break;

  case 176: /* semicolonList: semicolonList ';'  */
#line 503 "parser.y"
                        { printf("PARSER found semicolonList\n"); }
#line 3084 "parser.tab.cpp"
    break;

  case 177: /* separator_List: ENDL  */
#line 507 "parser.y"
            { printf("PARSER found ENDL\n"); }
#line 3090 "parser.tab.cpp"
    break;

  case 178: /* separator_List: ';'  */
#line 508 "parser.y"
            { printf("PARSER found SEMICOLON\n"); }
#line 3096 "parser.tab.cpp"
    break;

  case 179: /* separator_List: separator_List ENDL  */
#line 509 "parser.y"
                            { printf("PARSER add ENDL to separator_List\n"); }
#line 3102 "parser.tab.cpp"
    break;

  case 180: /* separator_List: separator_List ';'  */
#line 510 "parser.y"
                           { printf("PARSER add ; to separator_List\n"); }
#line 3108 "parser.tab.cpp"
    break;


#line 3112 "parser.tab.cpp"

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

#line 517 "parser.y"

