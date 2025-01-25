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
#define YYLAST   1832

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

#define YYPACT_NINF (-412)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-175)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,  -412,  -412,    67,  -412,    18,   171,  -412,  -412,  -412,
     927,   927,   963,  -412,  -412,   157,  -412,  -412,    29,    29,
      29,    29,    29,    29,    29,    41,    55,   131,    95,  -412,
    -412,  -412,    29,    29,  -412,  -412,    29,    29,    32,  -412,
     103,   112,   117,  -412,   154,    25,  -412,  -412,  -412,  -412,
    -412,  -412,  1696,  -412,  -412,  -412,  -412,  -412,  -412,  -412,
    -412,   182,   182,   339,   600,    48,  -412,   927,   201,   204,
     207,   223,   203,   205,   213,    -1,   927,   215,   166,   927,
     226,   224,    29,   232,    72,   234,   180,   177,    32,    32,
      32,  -412,   559,  -412,    29,    29,    29,    29,    29,    29,
      29,    29,    29,   235,    29,    29,    29,    29,    29,    29,
      29,   231,  -412,   248,    29,   255,    75,  1696,   256,   927,
    -412,    29,    29,    29,   927,   251,    29,  1454,   927,    29,
    1501,  -412,   927,   253,    29,   273,    29,     8,  -412,  -412,
     217,   229,   236,   154,  -412,  1696,   927,   927,   927,   927,
     927,   927,   927,   927,   927,   281,   233,   927,   927,   927,
     927,   927,   927,   231,  -412,  -412,  -412,  -412,  -412,  -412,
    -412,  -412,    23,  -412,   306,   257,  -412,   315,   301,   303,
     927,    51,   106,  1518,   274,    30,   311,   309,  1565,   316,
    -412,   328,    29,   247,   927,   332,    39,  -412,  -412,  -412,
    -412,  1767,  1779,   378,   378,   390,   390,   182,   182,   182,
     204,    29,   497,   497,  1708,  1755,   378,   378,  -412,   336,
     352,   269,   231,   231,    29,    29,  -412,  -412,   116,    29,
      29,    29,    29,    29,   999,    29,   927,   161,    29,    29,
     341,    29,    29,  -412,   259,    29,    29,   335,    29,   345,
     231,   241,    29,  -412,   326,   302,   231,    29,  -412,  -412,
      40,   927,   927,   927,    33,   927,   138,   927,    14,  1303,
     398,  1696,   312,   927,   313,    16,    36,   927,   927,   359,
      29,    29,    29,   927,   231,   370,   153,   368,  -412,   361,
     356,   358,   391,   375,   127,   371,    29,    29,   231,  -412,
     355,   269,  1696,  1696,  1696,   381,    29,  1696,   382,    29,
    1585,   927,    29,  1696,  1035,  1696,    29,    29,    29,    29,
      29,  1632,  1696,   241,   927,   231,   369,  1696,    29,  -412,
      29,    29,   335,   388,   397,   403,   271,   337,   387,   392,
     399,   763,    94,  -412,  -412,   231,   410,   231,   413,    29,
      21,   320,   927,    19,  1320,  1071,   367,   927,   856,   191,
    -412,   412,  1696,    29,    29,    29,   436,   927,   231,   165,
     927,   231,   231,   418,   419,   145,  -412,   427,   437,   927,
    -412,    29,   444,    29,  -412,  -412,    38,   438,    29,   440,
      29,   927,    29,   269,  1696,   927,    24,  1370,    29,  1696,
      29,  1696,    29,   927,   337,   461,   927,   231,    29,  1696,
      29,  -412,  1649,   464,   465,   462,   466,   448,   450,   231,
     231,    28,   407,   763,  -412,   439,    29,   927,    29,   927,
     116,   927,  -412,   683,    29,  1107,   927,   416,  1696,  -412,
      29,  1696,    29,   927,   475,  -412,   269,   269,   231,   231,
     473,   474,   481,   482,  -412,    25,    29,    29,   483,  1696,
     484,  1696,   116,   269,   927,    58,  1387,  1696,    29,   927,
     485,  1696,    29,  -412,  -412,   486,   487,   231,   231,   269,
     269,   927,   429,   763,    29,    29,  -412,  1184,    29,  1143,
    1696,    29,   927,   269,   269,   489,   490,  -412,  -412,  1696,
      25,    29,   -17,   -17,    29,   927,    60,  1437,   927,  1696,
    -412,  -412,   269,   269,   927,   433,  -412,  -412,   269,  1235,
      29,  1696,  -412,  -412,  1696,    25,  -412,    29,   927,   927,
     269,  1252,  1696,  -412,    29,   269,  -412
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
     134,     0,     0,     0,     0,     0,     0,     0,    92,     0,
       0,    63,     0,     0,     0,   173,     0,     0,     0,     0,
     174,   174,   174,     0,     0,     0,     0,     0,    32,     0,
       0,     0,    29,     0,     0,     0,   174,   174,     0,   164,
       0,     0,   137,    90,    45,     0,   174,    46,     0,   174,
      55,     0,   174,    57,     0,    64,   174,   174,   174,   174,
     174,     0,    79,    30,     0,     0,     0,   141,   174,   142,
     174,   174,   136,     0,     0,     0,     0,     6,     0,     0,
      35,     0,     0,   165,   135,     0,     0,     0,     0,   174,
       0,    60,     0,    92,     0,     0,     0,     0,     0,     0,
      80,     0,   148,   174,   174,   174,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     0,     0,     0,
      83,   174,    82,   174,    81,   175,   174,     0,   174,     0,
     174,     0,   174,     0,    56,     0,    92,     0,   174,    71,
     174,    59,   174,     0,    11,     0,     0,     0,   174,   140,
     174,   143,     0,    14,    13,     0,     0,     0,     0,     0,
       0,   174,     0,     0,   176,     0,   174,     0,   174,     0,
      53,     0,    61,    65,   174,     0,     0,     0,    72,    12,
     174,   147,   174,     0,     0,   170,     0,     0,     0,     0,
       0,     0,    22,    21,    36,   182,   174,   174,     0,    47,
       0,    48,    54,     0,     0,    92,     0,    58,   174,     0,
       0,   139,   174,    16,    15,    18,    17,     0,     0,     0,
       0,     0,     0,     0,   174,   174,    66,    68,   174,     0,
     146,   174,     0,     0,     0,    26,    25,    24,    23,    84,
     182,   174,     0,     0,   174,     0,    92,     0,     0,   138,
      20,    19,     0,     0,     0,     0,    50,    49,     0,    76,
     174,   145,    28,    27,    86,   182,    69,   174,     0,     0,
       0,    73,    85,    77,   174,     0,    74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -412,  -412,  -412,   411,  -412,  -412,  -412,   178,  -412,    -5,
    -322,  -412,    31,   -36,  -412,  -412,  -412,  -412,  -412,  -412,
    -412,  -411,  -412,   -96,  -334,    -6,  -211,  -238,  -412,  -412,
     260,  -412,   348,  -412,  -123,   277,  -412,  -160,  -311,  -412,
    -412,  -225,   432,  -412,   460,   -43
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,    39,    40,    41,    42,   292,   293,    43,   294,
     253,    45,     4,    46,    47,    48,   185,   239,    49,    50,
      51,   381,   297,   115,   116,   117,    53,    65,    54,    55,
     248,    56,    69,    57,   171,   172,   219,   173,    58,    59,
      60,    70,    71,   386,     5,     6
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      52,    44,    93,   220,    61,    62,    64,   382,    91,   286,
     258,    66,   456,   -44,   275,   376,     1,    66,   125,   120,
    -174,     8,    66,   179,   120,  -174,    27,    66,     1,   221,
    -174,    66,    66,    67,   -62,     1,   191,    68,    67,   -67,
     218,    66,    68,    67,   317,   421,   301,    68,   454,   -62,
     235,   257,   163,   113,   -67,   392,   144,   229,   251,   -70,
      79,    66,   230,    66,  -174,   236,  -174,     7,   114,    87,
     127,   318,   501,   130,    80,   126,   305,    67,    66,    67,
    -174,    68,   439,    68,    -8,   350,   145,   143,   222,   382,
     344,     2,   -62,   -78,   369,   -75,     9,   -67,   249,   259,
     135,   -70,   -70,     2,   306,   222,   309,   200,   237,   -44,
       2,   252,   231,   319,   320,   136,   424,   232,   183,   140,
     141,   142,   188,    94,    95,    96,    97,   289,    98,    99,
     100,   101,   102,   299,   383,   -78,   -78,   -75,   -75,   103,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   382,
    -174,   212,   213,   214,   215,   216,   217,   163,   113,   338,
     339,   328,    82,  -174,   105,   106,   107,   108,   109,   110,
     113,   384,   385,   329,   228,   343,    67,   417,   418,    88,
      68,   308,   432,    10,    11,   411,    18,    19,    89,   272,
      12,   516,   517,    90,    24,    13,   273,    14,    28,    15,
      16,    17,   363,    18,    19,   103,    20,    21,    22,    23,
     120,    24,    25,    26,    27,    28,    29,    30,    31,   402,
     118,    32,   387,   119,   389,    36,   403,    37,   269,   121,
     271,   122,   124,   123,   128,   473,   474,   129,    32,    33,
      34,    35,    36,   132,    37,   410,   131,    38,   413,   414,
     163,    36,   486,   245,   139,   302,   303,   304,   246,   307,
     134,   310,   137,   155,   313,   280,   247,   315,   497,   498,
     281,   321,   322,   290,   291,   176,   174,   327,   247,   184,
     178,   192,   510,   511,   442,   164,   165,   166,   167,   168,
     169,   170,   194,    13,   197,    14,   452,   453,    16,    17,
      67,   522,   523,   373,   374,   351,   198,   526,   354,   211,
      34,    35,    27,   199,    29,    30,    31,   223,   362,   533,
     225,   226,   224,   227,   536,   475,   476,    94,    95,    96,
      97,   375,    98,    99,   100,   101,   102,   257,   234,   238,
      34,    35,    66,   103,   242,  -174,   394,   240,   243,   397,
     111,   399,   401,   250,   495,   496,   255,   256,    67,   104,
     277,   409,    68,   285,   412,   288,   296,   298,   105,   106,
     107,   108,   109,   110,   330,   364,   314,   316,   323,   331,
     365,   111,   393,   333,   334,   430,   335,   332,   332,   433,
      98,    99,   100,   101,   102,   337,   336,   438,   136,   340,
     441,   103,   345,   347,   100,   101,   102,   370,   371,   252,
      10,    11,   481,   103,   372,   377,   388,    12,   379,   390,
     378,   459,    13,   461,    14,   462,    15,    16,    17,   466,
     467,   398,   404,    20,    21,    22,    23,   471,   419,    25,
      26,    27,   408,    29,    30,    31,   415,   416,   420,  -174,
      72,    73,    74,    75,    76,    77,    78,   514,   487,    81,
     426,   312,   428,   490,    83,    84,    33,   440,    85,    86,
     446,   447,   455,   448,    38,   499,   450,   449,   451,   457,
     468,   472,   529,   507,   477,   478,   509,   479,   480,   484,
     485,   491,   493,   494,   500,   512,   513,   138,   525,   519,
     260,   361,   521,   210,   282,    92,    96,    97,   524,    98,
      99,   100,   101,   102,   133,     0,     0,     0,     0,     0,
     103,     0,   531,   532,     0,     0,   146,   147,   148,   149,
     150,   151,   152,   153,   154,     0,   156,   157,   158,   159,
     160,   161,   162,     0,     0,     0,   175,     0,   177,   109,
     110,     0,     0,   180,   181,   182,     0,     0,   186,   187,
       0,   189,     8,     0,     0,     0,   193,     0,   195,   196,
       0,    10,    11,     0,     0,     0,     0,     0,    12,     0,
       0,     0,     0,    13,     0,    14,     0,    15,    16,    17,
       0,    18,    19,     0,    20,    21,    22,    23,     0,    24,
      25,    26,    27,    28,    29,    30,    31,    94,    95,    96,
      97,     0,    98,    99,   100,   101,   102,     0,     0,     0,
     112,     0,     0,   103,   244,     0,    32,    33,    34,    35,
      36,     0,    37,     0,     0,    38,     0,     9,     0,   104,
       0,     0,     0,   254,     0,     0,     0,     0,   105,   106,
     107,   108,   109,   110,     0,     0,   261,   262,     0,     0,
       0,   263,   264,   265,   266,   267,     0,   270,     0,     0,
     274,   276,     0,   278,   279,     0,     0,   283,   284,     0,
     287,     0,     0,     0,   295,     0,     0,     0,     0,   300,
      94,    95,    96,    97,     0,    98,    99,   100,   101,   102,
       0,     0,     0,     0,     0,     0,   103,     0,     0,     0,
       0,     0,   324,   325,   326,     0,     0,     0,     0,     0,
       0,     0,   104,     0,     0,     0,     0,     0,   341,   342,
       0,   105,   106,   107,   108,   109,   110,     0,   346,     0,
       0,   348,     0,     0,   352,   463,     0,     0,   355,   356,
     357,   358,   359,     0,     0,     0,     0,     0,     0,     0,
     366,     0,   367,   368,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,   391,    12,     0,     0,     0,     0,    13,     0,    14,
       0,    15,    16,    17,     0,   405,   406,   407,    20,    21,
      22,    23,     0,     0,    25,    26,    27,     0,    29,    30,
      31,     0,     0,   422,   177,   423,     0,     0,   425,     0,
     427,     0,   429,     0,   431,     0,     0,     0,     0,     0,
     435,    33,   436,     0,   437,     0,     0,     0,   380,    38,
     443,     0,   444,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   177,     0,     0,     0,     0,   458,     0,
     460,     0,     0,     0,     0,     0,   464,     0,    10,    11,
       0,     0,   469,     0,   470,    12,     0,     0,     0,     0,
      13,     0,    14,     0,    15,    16,    17,     0,   482,   483,
       0,    20,    21,    22,    23,     0,     0,    25,    26,    27,
     489,    29,    30,    31,   492,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   502,   503,     0,   400,
     505,     0,     0,   508,    33,     0,     0,     0,     0,     0,
       0,     0,    38,   515,     0,     0,   518,     0,     0,    10,
      11,     0,     0,     0,     0,     0,    12,     0,     0,     0,
       0,    13,   528,    14,     0,    15,    16,    17,     0,   530,
       0,     0,    20,    21,    22,    23,   535,     0,    25,    26,
      27,     0,    29,    30,    31,    10,    11,     0,     0,     0,
       0,     0,    12,     0,     0,     0,     0,    13,     0,    14,
       0,    63,    16,    17,     0,    33,     0,     0,    20,    21,
      22,    23,     0,    38,    25,    26,    27,     0,    29,    30,
      31,    10,    11,     0,     0,     0,     0,     0,    12,     0,
       0,     0,     0,    13,     0,    14,     0,   268,    16,    17,
       0,    33,     0,     0,    20,    21,    22,    23,     0,    38,
      25,    26,    27,     0,    29,    30,    31,    10,    11,     0,
       0,     0,     0,     0,    12,     0,     0,     0,     0,    13,
       0,    14,     0,   353,    16,    17,     0,    33,     0,     0,
      20,    21,    22,    23,     0,    38,    25,    26,    27,     0,
      29,    30,    31,    10,    11,     0,     0,     0,     0,     0,
      12,     0,     0,     0,     0,    13,     0,    14,     0,   396,
      16,    17,     0,    33,     0,     0,    20,    21,    22,    23,
       0,    38,    25,    26,    27,     0,    29,    30,    31,    10,
      11,     0,     0,     0,     0,     0,    12,     0,     0,     0,
       0,    13,     0,    14,     0,   465,    16,    17,     0,    33,
       0,     0,    20,    21,    22,    23,     0,    38,    25,    26,
      27,     0,    29,    30,    31,    10,    11,     0,     0,     0,
       0,     0,    12,     0,     0,     0,     0,    13,     0,    14,
       0,   506,    16,    17,     0,    33,     0,     0,    20,    21,
      22,    23,     0,    38,    25,    26,    27,     0,    29,    30,
      31,    94,    95,    96,    97,     0,    98,    99,   100,   101,
     102,     0,     0,     0,     0,     0,     0,   103,     0,     0,
       0,    33,     0,     0,     0,     0,     0,     0,     0,    38,
       0,     0,     0,   104,     0,     0,     0,     0,     0,     0,
       0,     0,   105,   106,   107,   108,   109,   110,     0,     0,
       0,     0,    94,    95,    96,    97,   504,    98,    99,   100,
     101,   102,     0,     0,     0,     0,     0,     0,   103,    94,
      95,    96,    97,     0,    98,    99,   100,   101,   102,     0,
       0,     0,     0,     0,   104,   103,     0,     0,     0,     0,
       0,     0,     0,   105,   106,   107,   108,   109,   110,     0,
       0,   104,     0,     0,     0,     0,     0,   527,     0,     0,
     105,   106,   107,   108,   109,   110,     0,     0,     0,     0,
      94,    95,    96,    97,   534,    98,    99,   100,   101,   102,
       0,     0,     0,     0,     0,     0,   103,    94,    95,    96,
      97,     0,    98,    99,   100,   101,   102,     0,     0,     0,
       0,     0,   104,   103,     0,     0,     0,     0,     0,     0,
       0,   105,   106,   107,   108,   109,   110,     0,     0,   104,
       0,     0,     0,     0,   311,     0,     0,     0,   105,   106,
     107,   108,   109,   110,     0,     0,     0,    94,    95,    96,
      97,   395,    98,    99,   100,   101,   102,     0,     0,     0,
       0,     0,     0,   103,    94,    95,    96,    97,     0,    98,
      99,   100,   101,   102,     0,     0,     0,     0,     0,   104,
     103,     0,     0,     0,     0,     0,     0,     0,   105,   106,
     107,   108,   109,   110,     0,     0,   104,     0,     0,     0,
       0,   434,     0,     0,     0,   105,   106,   107,   108,   109,
     110,     0,     0,     0,    94,    95,    96,    97,   488,    98,
      99,   100,   101,   102,     0,     0,     0,    66,     0,     0,
     103,    94,    95,    96,    97,     0,    98,    99,   100,   101,
     102,     0,     0,     0,     0,     0,   104,   103,     0,     0,
       0,     0,     0,     0,     0,   105,   106,   107,   108,   109,
     110,     0,     0,   104,     0,     0,     0,     0,   520,     0,
       0,     0,   105,   106,   107,   108,   109,   110,    94,    95,
      96,    97,     0,    98,    99,   100,   101,   102,     0,     0,
       0,   190,     0,     0,   103,    94,    95,    96,    97,     0,
      98,    99,   100,   101,   102,     0,     0,     0,   233,     0,
     104,   103,     0,     0,     0,     0,     0,     0,     0,   105,
     106,   107,   108,   109,   110,     0,     0,   104,     0,     0,
       0,     0,     0,     0,     0,     0,   105,   106,   107,   108,
     109,   110,    94,    95,    96,    97,     0,    98,    99,   100,
     101,   102,     0,     0,     0,   241,     0,     0,   103,     0,
       0,     0,    94,    95,    96,    97,     0,    98,    99,   100,
     101,   102,     0,     0,   104,     0,     0,     0,   103,     0,
       0,     0,     0,   105,   106,   107,   108,   109,   110,   349,
       0,     0,     0,     0,   104,     0,     0,     0,     0,     0,
       0,     0,     0,   105,   106,   107,   108,   109,   110,    94,
      95,    96,    97,     0,    98,    99,   100,   101,   102,     0,
       0,     0,   360,     0,     0,   103,    94,    95,    96,    97,
       0,    98,    99,   100,   101,   102,     0,     0,     0,   445,
       0,   104,   103,     0,     0,     0,     0,     0,     0,     0,
     105,   106,   107,   108,   109,   110,     0,     0,   104,     0,
       0,     0,     0,     0,     0,     0,     0,   105,   106,   107,
     108,   109,   110,    94,    95,    96,    97,     0,    98,    99,
     100,   101,   102,     0,     0,    94,    95,    96,    97,   103,
      98,    99,   100,   101,   102,     0,     0,     0,     0,     0,
       0,   103,     0,     0,     0,   104,     0,     0,     0,     0,
       0,     0,     0,     0,   105,   106,   107,   108,   109,   110,
       0,     0,     0,     0,     0,     0,   105,   106,     0,   108,
     109,   110,    94,    95,    96,    97,     0,    98,    99,   100,
     101,   102,     0,     0,     0,    95,    96,    97,   103,    98,
      99,   100,   101,   102,     0,     0,     0,     0,    96,    97,
     103,    98,    99,   100,   101,   102,     0,     0,     0,     0,
       0,     0,   103,   105,   106,     0,     0,   109,   110,     0,
       0,     0,     0,     0,     0,   105,   106,     0,     0,   109,
     110,     0,     0,     0,     0,     0,     0,   105,   106,     0,
       0,   109,   110
};

static const yytype_int16 yycheck[] =
{
       6,     6,    45,   163,    10,    11,    12,   341,    44,   247,
     221,     3,   423,     0,   239,   337,     3,     3,    19,     3,
       6,     3,     3,   119,     3,     6,    43,     3,     3,     6,
       6,     3,     3,    19,    20,     3,   132,    23,    19,    20,
     163,     3,    23,    19,    28,   379,     6,    23,    20,    35,
      20,    68,    19,     5,    35,    34,    92,     6,    19,    35,
      19,     3,    11,     3,     6,    35,     6,     0,    20,    38,
      76,    35,   483,    79,    19,    76,    43,    19,     3,    19,
       5,    23,   404,    23,    76,   310,    92,    92,    65,   423,
     301,    78,    78,    35,   332,    35,    78,    78,   194,   222,
      28,    77,    78,    78,   264,    65,   266,   143,    78,    77,
      78,    72,     6,    77,    78,    43,    78,    11,   124,    88,
      89,    90,   128,     7,     8,     9,    10,   250,    12,    13,
      14,    15,    16,   256,    40,    77,    78,    77,    78,    23,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   483,
      19,   157,   158,   159,   160,   161,   162,    19,     5,    32,
      33,   284,    67,     6,    48,    49,    50,    51,    52,    53,
       5,    77,    78,    20,   180,   298,    19,    32,    33,    76,
      23,    43,   393,    12,    13,    20,    32,    33,    76,    28,
      19,   502,   503,    76,    40,    24,    35,    26,    44,    28,
      29,    30,   325,    32,    33,    23,    35,    36,    37,    38,
       3,    40,    41,    42,    43,    44,    45,    46,    47,    28,
      19,    67,   345,    19,   347,    71,    35,    73,   234,     6,
     236,    28,    19,    28,    19,   446,   447,    71,    67,    68,
      69,    70,    71,    19,    73,   368,    20,    76,   371,   372,
      19,    71,   463,     6,    77,   261,   262,   263,    11,   265,
      28,   267,    28,    28,   270,     6,    19,   273,   479,   480,
      11,   277,   278,    32,    33,    20,    28,   283,    19,    28,
      24,    28,   493,   494,   407,    54,    55,    56,    57,    58,
      59,    60,    19,    24,    77,    26,   419,   420,    29,    30,
      19,   512,   513,    32,    33,   311,    77,   518,   314,    76,
      69,    70,    43,    77,    45,    46,    47,    11,   324,   530,
       5,    20,    65,    20,   535,   448,   449,     7,     8,     9,
      10,   336,    12,    13,    14,    15,    16,    68,    64,    28,
      69,    70,     3,    23,    28,     6,   352,    38,    20,   355,
      11,   357,   358,    21,   477,   478,    20,     5,    19,    39,
      19,   367,    23,    28,   370,    20,    40,    65,    48,    49,
      50,    51,    52,    53,     6,     6,    64,    64,    19,    11,
      11,    11,    62,    22,    28,   391,    28,    19,    19,   395,
      12,    13,    14,    15,    16,    20,     5,   403,    43,    28,
     406,    23,    21,    21,    14,    15,    16,    19,    11,    72,
      12,    13,   455,    23,    11,    28,     6,    19,    19,     6,
      28,   427,    24,   429,    26,   431,    28,    29,    30,   435,
     436,    64,    20,    35,    36,    37,    38,   443,    11,    41,
      42,    43,     6,    45,    46,    47,    28,    28,    11,     5,
      18,    19,    20,    21,    22,    23,    24,   500,   464,    27,
      22,    63,    22,   469,    32,    33,    68,     6,    36,    37,
       6,     6,    65,    11,    76,   481,    28,    11,    28,    40,
      64,     6,   525,   489,    11,    11,   492,     6,     6,     6,
       6,     6,     6,     6,    65,     6,     6,    86,    65,   505,
     223,   323,   508,   155,   244,    45,     9,    10,   514,    12,
      13,    14,    15,    16,    82,    -1,    -1,    -1,    -1,    -1,
      23,    -1,   528,   529,    -1,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,   102,    -1,   104,   105,   106,   107,
     108,   109,   110,    -1,    -1,    -1,   114,    -1,   116,    52,
      53,    -1,    -1,   121,   122,   123,    -1,    -1,   126,   127,
      -1,   129,     3,    -1,    -1,    -1,   134,    -1,   136,   137,
      -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    24,    -1,    26,    -1,    28,    29,    30,
      -1,    32,    33,    -1,    35,    36,    37,    38,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,     7,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      20,    -1,    -1,    23,   192,    -1,    67,    68,    69,    70,
      71,    -1,    73,    -1,    -1,    76,    -1,    78,    -1,    39,
      -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    -1,    -1,   224,   225,    -1,    -1,
      -1,   229,   230,   231,   232,   233,    -1,   235,    -1,    -1,
     238,   239,    -1,   241,   242,    -1,    -1,   245,   246,    -1,
     248,    -1,    -1,    -1,   252,    -1,    -1,    -1,    -1,   257,
       7,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,   280,   281,   282,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,   296,   297,
      -1,    48,    49,    50,    51,    52,    53,    -1,   306,    -1,
      -1,   309,    -1,    -1,   312,    62,    -1,    -1,   316,   317,
     318,   319,   320,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     328,    -1,   330,   331,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    -1,
      -1,   349,    19,    -1,    -1,    -1,    -1,    24,    -1,    26,
      -1,    28,    29,    30,    -1,   363,   364,   365,    35,    36,
      37,    38,    -1,    -1,    41,    42,    43,    -1,    45,    46,
      47,    -1,    -1,   381,   382,   383,    -1,    -1,   386,    -1,
     388,    -1,   390,    -1,   392,    -1,    -1,    -1,    -1,    -1,
     398,    68,   400,    -1,   402,    -1,    -1,    -1,    75,    76,
     408,    -1,   410,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   421,    -1,    -1,    -1,    -1,   426,    -1,
     428,    -1,    -1,    -1,    -1,    -1,   434,    -1,    12,    13,
      -1,    -1,   440,    -1,   442,    19,    -1,    -1,    -1,    -1,
      24,    -1,    26,    -1,    28,    29,    30,    -1,   456,   457,
      -1,    35,    36,    37,    38,    -1,    -1,    41,    42,    43,
     468,    45,    46,    47,   472,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   484,   485,    -1,    63,
     488,    -1,    -1,   491,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,   501,    -1,    -1,   504,    -1,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    24,   520,    26,    -1,    28,    29,    30,    -1,   527,
      -1,    -1,    35,    36,    37,    38,   534,    -1,    41,    42,
      43,    -1,    45,    46,    47,    12,    13,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    24,    -1,    26,
      -1,    28,    29,    30,    -1,    68,    -1,    -1,    35,    36,
      37,    38,    -1,    76,    41,    42,    43,    -1,    45,    46,
      47,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    24,    -1,    26,    -1,    28,    29,    30,
      -1,    68,    -1,    -1,    35,    36,    37,    38,    -1,    76,
      41,    42,    43,    -1,    45,    46,    47,    12,    13,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    24,
      -1,    26,    -1,    28,    29,    30,    -1,    68,    -1,    -1,
      35,    36,    37,    38,    -1,    76,    41,    42,    43,    -1,
      45,    46,    47,    12,    13,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    24,    -1,    26,    -1,    28,
      29,    30,    -1,    68,    -1,    -1,    35,    36,    37,    38,
      -1,    76,    41,    42,    43,    -1,    45,    46,    47,    12,
      13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    24,    -1,    26,    -1,    28,    29,    30,    -1,    68,
      -1,    -1,    35,    36,    37,    38,    -1,    76,    41,    42,
      43,    -1,    45,    46,    47,    12,    13,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    24,    -1,    26,
      -1,    28,    29,    30,    -1,    68,    -1,    -1,    35,    36,
      37,    38,    -1,    76,    41,    42,    43,    -1,    45,    46,
      47,     7,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    -1,     7,     8,     9,    10,    62,    12,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,     7,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    39,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      48,    49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,
       7,     8,     9,    10,    62,    12,    13,    14,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    23,     7,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    39,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    -1,    -1,    -1,     7,     8,     9,
      10,    61,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    23,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,    39,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    -1,    -1,    -1,     7,     8,     9,    10,    61,    12,
      13,    14,    15,    16,    -1,    -1,    -1,     3,    -1,    -1,
      23,     7,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    -1,    -1,    -1,    -1,    -1,    39,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    -1,    -1,    39,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    20,    -1,    -1,    23,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    -1,    -1,    -1,    20,    -1,
      39,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,    -1,
      -1,    -1,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    -1,    -1,    39,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,    34,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,     7,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    -1,
      -1,    -1,    20,    -1,    -1,    23,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    -1,    -1,    -1,    20,
      -1,    39,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    -1,    -1,     7,     8,     9,    10,    23,
      12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    51,
      52,    53,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    -1,    -1,    -1,     8,     9,    10,    23,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,     9,    10,
      23,    12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    48,    49,    -1,    -1,    52,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    52,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      -1,    52,    53
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
     114,   121,   121,   121,   121,   121,   121,   121,    28,   104,
     121,   104,    28,    35,   121,   120,   121,    19,   121,   121,
       6,    11,   109,   121,   121,    28,   106,   121,    20,   113,
      32,    33,    85,    86,    88,   121,    40,   101,    65,   113,
     121,     6,   104,   104,   104,    43,   116,   104,    43,   116,
     104,    61,    63,   104,    64,   104,    64,    28,    35,    77,
      78,   104,   104,    19,   121,   121,   121,   104,   113,    20,
       6,    11,    19,    22,    28,    28,     5,    20,    32,    33,
      28,   121,   121,   113,   105,    21,   121,    21,   121,    34,
     120,   104,   121,    28,   104,   121,   121,   121,   121,   121,
      20,    86,   104,   113,     6,    11,   121,   121,   121,   106,
      19,    11,    11,    32,    33,    88,    89,    28,    28,    19,
      75,   100,   103,    40,    77,    78,   122,   113,     6,   113,
       6,   121,    34,    62,   104,    61,    28,   104,    64,   104,
      63,   104,    28,    35,    20,   121,   121,   121,     6,   104,
     113,    20,   104,   113,   113,    28,    28,    32,    33,    11,
      11,   103,   121,   121,    78,   121,    22,   121,    22,   121,
     104,   121,   105,   104,    61,   121,   121,   121,   104,    89,
       6,   104,   113,   121,   121,    20,     6,     6,    11,    11,
      28,    28,   113,   113,    20,    65,   100,    40,   121,   104,
     121,   104,   104,    62,   121,    28,   104,   104,    64,   121,
     121,   104,     6,   105,   105,   113,   113,    11,    11,     6,
       6,   124,   121,   121,     6,     6,   105,   104,    61,   121,
     104,     6,   121,     6,     6,   113,   113,   105,   105,   104,
      65,   100,   121,   121,    62,   121,    28,   104,   121,   104,
     105,   105,     6,     6,   124,   121,   117,   117,   121,   104,
      61,   104,   105,   105,   104,    65,   105,    62,   121,   124,
     121,   104,   104,   105,    62,   121,   105
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
#line 2210 "parser.tab.cpp"
    break;

  case 3: /* class: class_header '{' statement_expr_list_e '}'  */
#line 138 "parser.y"
                                                 { (yyval.tree) = mk_class((yyvsp[-3].tree),(yyvsp[-1].tree)); }
#line 2216 "parser.tab.cpp"
    break;

  case 6: /* class_header: CLASS endlOpt IDENTIFIER endlOpt '(' class_params_e ')'  */
#line 146 "parser.y"
                                                              { (yyval.tree) = mk_class_header(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-1].tree)); }
#line 2222 "parser.tab.cpp"
    break;

  case 7: /* class_header: CLASS endlOpt IDENTIFIER endlOpt '(' class_params_e ')' inheritance  */
#line 147 "parser.y"
                                                                         { (yyval.tree) = mk_class_header_inheritance(mk_ident_lit((yyvsp[-5].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 2228 "parser.tab.cpp"
    break;

  case 8: /* class_header: CLASS endlOpt IDENTIFIER  */
#line 148 "parser.y"
                               { (yyval.tree) = mk_class_header_identifierOnly(mk_ident_lit((yyvsp[0].str_value))); }
#line 2234 "parser.tab.cpp"
    break;

  case 9: /* class_header: CLASS endlOpt IDENTIFIER endlOpt inheritance  */
#line 149 "parser.y"
                                                   { (yyval.tree) = mk_class_header_inheritance_identifier(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree)); }
#line 2240 "parser.tab.cpp"
    break;

  case 13: /* class_params: VAR IDENTIFIER ':' type  */
#line 164 "parser.y"
                              { (yyval.tree) = add_to_list(mk_list(),mk_class_params_var(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2246 "parser.tab.cpp"
    break;

  case 14: /* class_params: VAL IDENTIFIER ':' type  */
#line 165 "parser.y"
                              { (yyval.tree) = add_to_list(mk_list(),mk_class_params_val(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2252 "parser.tab.cpp"
    break;

  case 15: /* class_params: VAR IDENTIFIER ':' type '=' const  */
#line 166 "parser.y"
                                        { (yyval.tree) = add_to_list(mk_list(),mk_class_params_var_const(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2258 "parser.tab.cpp"
    break;

  case 16: /* class_params: VAL IDENTIFIER ':' type '=' const  */
#line 167 "parser.y"
                                        { (yyval.tree) = add_to_list(mk_list(),mk_class_params_val_const(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2264 "parser.tab.cpp"
    break;

  case 17: /* class_params: class_params ',' VAR IDENTIFIER ':' type  */
#line 168 "parser.y"
                                               { (yyval.tree) = add_to_list((yyvsp[-5].tree),mk_class_params_var(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2270 "parser.tab.cpp"
    break;

  case 18: /* class_params: class_params ',' VAL IDENTIFIER ':' type  */
#line 169 "parser.y"
                                               { (yyval.tree) = add_to_list((yyvsp[-5].tree),mk_class_params_var(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2276 "parser.tab.cpp"
    break;

  case 19: /* class_params: class_params ',' VAR IDENTIFIER ':' type '=' const  */
#line 170 "parser.y"
                                                         { (yyval.tree) = add_to_list((yyvsp[-7].tree),mk_class_params_var_const(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2282 "parser.tab.cpp"
    break;

  case 20: /* class_params: class_params ',' VAL IDENTIFIER ':' type '=' const  */
#line 171 "parser.y"
                                                         { (yyval.tree) = add_to_list((yyvsp[-7].tree),mk_class_params_val_const(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2288 "parser.tab.cpp"
    break;

  case 21: /* class_params: visibility_modifier VAR IDENTIFIER ':' type  */
#line 172 "parser.y"
                                                   { (yyval.tree) = add_to_list(mk_list(),mk_class_params_var_vis_mod((yyvsp[-4].tree),mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2294 "parser.tab.cpp"
    break;

  case 22: /* class_params: visibility_modifier VAL IDENTIFIER ':' type  */
#line 173 "parser.y"
                                                   { (yyval.tree) = add_to_list(mk_list(),mk_class_params_val_vis_mod((yyvsp[-4].tree),mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2300 "parser.tab.cpp"
    break;

  case 23: /* class_params: visibility_modifier VAR IDENTIFIER ':' type '=' const  */
#line 174 "parser.y"
                                                            { (yyval.tree) = add_to_list(mk_list(),mk_class_params_var_const_vis_mod((yyvsp[-6].tree),mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2306 "parser.tab.cpp"
    break;

  case 24: /* class_params: visibility_modifier VAL IDENTIFIER ':' type '=' const  */
#line 175 "parser.y"
                                                            { (yyval.tree) = add_to_list(mk_list(),mk_class_params_val_const_vis_mod((yyvsp[-6].tree),mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2312 "parser.tab.cpp"
    break;

  case 25: /* class_params: class_params ',' visibility_modifier VAR IDENTIFIER ':' type  */
#line 176 "parser.y"
                                                                   { (yyval.tree) = add_to_list((yyvsp[-6].tree),mk_class_params_var_vis_mod((yyvsp[-4].tree),mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2318 "parser.tab.cpp"
    break;

  case 26: /* class_params: class_params ',' visibility_modifier VAL IDENTIFIER ':' type  */
#line 177 "parser.y"
                                                                   { (yyval.tree) = add_to_list((yyvsp[-6].tree),mk_class_params_val_vis_mod((yyvsp[-4].tree),mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2324 "parser.tab.cpp"
    break;

  case 27: /* class_params: class_params ',' visibility_modifier VAR IDENTIFIER ':' type '=' const  */
#line 178 "parser.y"
                                                                             { (yyval.tree) = add_to_list((yyvsp[-8].tree),mk_class_params_var_const_vis_mod((yyvsp[-6].tree),mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2330 "parser.tab.cpp"
    break;

  case 28: /* class_params: class_params ',' visibility_modifier VAL IDENTIFIER ':' type '=' const  */
#line 179 "parser.y"
                                                                             { (yyval.tree) = add_to_list((yyvsp[-8].tree),mk_class_params_var_const_vis_mod((yyvsp[-6].tree),mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2336 "parser.tab.cpp"
    break;

  case 29: /* class_params_e: class_params  */
#line 183 "parser.y"
                   {(yyval.tree) = (yyvsp[0].tree);}
#line 2342 "parser.tab.cpp"
    break;

  case 30: /* class_params_e: %empty  */
#line 184 "parser.y"
                    { (yyval.tree) = mk_empty();}
#line 2348 "parser.tab.cpp"
    break;

  case 33: /* visibility_modifier: PRIVATE  */
#line 202 "parser.y"
               {(yyval.tree) = mk_visibility_modifier((char*)"private");}
#line 2354 "parser.tab.cpp"
    break;

  case 34: /* visibility_modifier: PROTECTED  */
#line 203 "parser.y"
                {(yyval.tree) = mk_visibility_modifier((char*)"protected");}
#line 2360 "parser.tab.cpp"
    break;

  case 35: /* inheritance: EXTENDS endlOpt IDENTIFIER  */
#line 211 "parser.y"
                                 { (yyval.tree) = mk_inheritance(mk_ident_lit((yyvsp[0].str_value)));}
#line 2366 "parser.tab.cpp"
    break;

  case 36: /* inheritance: EXTENDS endlOpt IDENTIFIER '(' expr_list ')'  */
#line 212 "parser.y"
                                                 { (yyval.tree) = mk_inheritance_expr(mk_ident_lit((yyvsp[-3].str_value)),(yyvsp[-1].tree));}
#line 2372 "parser.tab.cpp"
    break;

  case 37: /* statement_expr_list: statement  */
#line 220 "parser.y"
                { (yyval.tree) = add_to_list(mk_list(),(yyvsp[0].tree));}
#line 2378 "parser.tab.cpp"
    break;

  case 38: /* statement_expr_list: visibility_modifier statement  */
#line 221 "parser.y"
                                   { (yyval.tree) = add_to_list(mk_list(), mk_visibility_modifier_stmt((yyvsp[-1].tree), (yyvsp[0].tree)));}
#line 2384 "parser.tab.cpp"
    break;

  case 39: /* statement_expr_list: expr  */
#line 222 "parser.y"
           { (yyval.tree) = add_to_list(mk_list(),(yyvsp[0].tree));}
#line 2390 "parser.tab.cpp"
    break;

  case 40: /* statement_expr_list: statement_expr_list separator_List statement  */
#line 223 "parser.y"
                                                    {  (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 2396 "parser.tab.cpp"
    break;

  case 41: /* statement_expr_list: statement_expr_list separator_List expr  */
#line 224 "parser.y"
                                               {   (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree));  }
#line 2402 "parser.tab.cpp"
    break;

  case 42: /* statement_expr_list: statement_expr_list separator_List visibility_modifier statement  */
#line 225 "parser.y"
                                                                        { (yyval.tree) = add_to_list((yyvsp[-3].tree), mk_visibility_modifier_stmt((yyvsp[-1].tree), (yyvsp[0].tree))); }
#line 2408 "parser.tab.cpp"
    break;

  case 43: /* statement_expr_list_e: separator_List_e statement_expr_list separator_List_e  */
#line 229 "parser.y"
                                                            {(yyval.tree) = mk_stmt_expr_list((yyvsp[-1].tree));}
#line 2414 "parser.tab.cpp"
    break;

  case 44: /* statement_expr_list_e: %empty  */
#line 230 "parser.y"
                     { (yyval.tree) = mk_empty();}
#line 2420 "parser.tab.cpp"
    break;

  case 45: /* statement: VAL endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 234 "parser.y"
                                                       {(yyval.tree) = mk_declaration_val(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[0].tree));}
#line 2426 "parser.tab.cpp"
    break;

  case 46: /* statement: VAR endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 235 "parser.y"
                                                       {(yyval.tree) = mk_declaration_var(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[0].tree));}
#line 2432 "parser.tab.cpp"
    break;

  case 47: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 236 "parser.y"
                                                                                           {(yyval.tree) = mk_declaration_val_type(mk_ident_lit((yyvsp[-8].str_value)),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2438 "parser.tab.cpp"
    break;

  case 48: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 237 "parser.y"
                                                                                           {(yyval.tree) = mk_declaration_var_type(mk_ident_lit((yyvsp[-8].str_value)),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2444 "parser.tab.cpp"
    break;

  case 49: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt ARRAY '[' type ']' endlOpt '=' endlOpt array  */
#line 238 "parser.y"
                                                                                              {(yyval.tree) = mk_declaration_var_array(mk_ident_lit((yyvsp[-11].str_value)),(yyvsp[-5].tree),(yyvsp[0].tree));}
#line 2450 "parser.tab.cpp"
    break;

  case 50: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt ARRAY '[' type ']' endlOpt '=' endlOpt array  */
#line 239 "parser.y"
                                                                                              {(yyval.tree) = mk_declaration_val_array(mk_ident_lit((yyvsp[-11].str_value)),(yyvsp[-5].tree),(yyvsp[0].tree));}
#line 2456 "parser.tab.cpp"
    break;

  case 51: /* statement: class  */
#line 240 "parser.y"
            { printf("Class:\n"); }
#line 2462 "parser.tab.cpp"
    break;

  case 52: /* statement: method  */
#line 241 "parser.y"
             {(yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); }
#line 2468 "parser.tab.cpp"
    break;

  case 53: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr ELSE endlOpt expr  */
#line 251 "parser.y"
                                                                           { (yyval.tree) = mk_if_else_expr((yyvsp[-6].tree), (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2474 "parser.tab.cpp"
    break;

  case 54: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr endlList ELSE endlOpt expr  */
#line 252 "parser.y"
                                                                                    { (yyval.tree) = mk_if_else_expr((yyvsp[-7].tree), (yyvsp[-4].tree), (yyvsp[0].tree)); }
#line 2480 "parser.tab.cpp"
    break;

  case 55: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr  */
#line 253 "parser.y"
                                                      { (yyval.tree) = mk_if_expr((yyvsp[-3].tree), (yyvsp[0].tree));}
#line 2486 "parser.tab.cpp"
    break;

  case 56: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt YIELD endlOpt expr  */
#line 261 "parser.y"
                                                                                                                          { (yyval.tree) = mk_for_expr((yyvsp[-5].tree), (yyvsp[0].tree));  }
#line 2492 "parser.tab.cpp"
    break;

  case 57: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt expr  */
#line 262 "parser.y"
                                                                                                             { (yyval.tree) = mk_for_expr((yyvsp[-3].tree), (yyvsp[0].tree));  }
#line 2498 "parser.tab.cpp"
    break;

  case 58: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt YIELD endlOpt expr  */
#line 263 "parser.y"
                                                                                                                                           { (yyval.tree) = mk_for_expr((yyvsp[-6].tree), (yyvsp[0].tree));  }
#line 2504 "parser.tab.cpp"
    break;

  case 59: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt expr  */
#line 264 "parser.y"
                                                                                                                              { (yyval.tree) = mk_for_expr((yyvsp[-4].tree), (yyvsp[0].tree));  }
#line 2510 "parser.tab.cpp"
    break;

  case 60: /* generators_and_conditions_parentheses_List: IDENTIFIER GENERATOR_OPERATOR expr TO expr  */
#line 269 "parser.y"
                                                      {(yyval.tree) = add_to_list(mk_list(),  mk_generator_without_by(mk_ident_lit((yyvsp[-4].str_value)), (yyvsp[-2].tree), (yyvsp[0].tree))); }
#line 2516 "parser.tab.cpp"
    break;

  case 61: /* generators_and_conditions_parentheses_List: IDENTIFIER GENERATOR_OPERATOR expr TO expr BY const  */
#line 270 "parser.y"
                                                              {(yyval.tree) = add_to_list(mk_list(),  mk_generator_with_by(mk_ident_lit((yyvsp[-6].str_value)), (yyvsp[-4].tree), (yyvsp[-2].tree), (yyvsp[0].tree))); }
#line 2522 "parser.tab.cpp"
    break;

  case 62: /* generators_and_conditions_parentheses_List: IDENTIFIER GENERATOR_OPERATOR IDENTIFIER  */
#line 271 "parser.y"
                                                   {(yyval.tree) = add_to_list(mk_list(), mk_generator_without_to_and_by(mk_ident_lit((yyvsp[-2].str_value)),mk_ident_lit((yyvsp[0].str_value)))); }
#line 2528 "parser.tab.cpp"
    break;

  case 63: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List IF expr  */
#line 272 "parser.y"
                                                             { (yyval.tree) = add_to_list((yyvsp[-2].tree), mk_if_cond((yyvsp[0].tree))); }
#line 2534 "parser.tab.cpp"
    break;

  case 64: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List ';' IF expr  */
#line 273 "parser.y"
                                                                 { (yyval.tree) = add_to_list((yyvsp[-3].tree), mk_if_cond((yyvsp[0].tree))); }
#line 2540 "parser.tab.cpp"
    break;

  case 65: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List ';' IDENTIFIER GENERATOR_OPERATOR expr TO expr  */
#line 274 "parser.y"
                                                                                                    { (yyval.tree) = add_to_list((yyvsp[-6].tree), mk_generator_without_by(mk_ident_lit((yyvsp[-4].str_value)), (yyvsp[-2].tree), (yyvsp[0].tree)));}
#line 2546 "parser.tab.cpp"
    break;

  case 66: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List ';' IDENTIFIER GENERATOR_OPERATOR expr TO expr BY const  */
#line 275 "parser.y"
                                                                                                             { (yyval.tree) = add_to_list((yyvsp[-8].tree), mk_generator_with_by(mk_ident_lit((yyvsp[-6].str_value)), (yyvsp[-4].tree), (yyvsp[-2].tree), (yyvsp[0].tree)));}
#line 2552 "parser.tab.cpp"
    break;

  case 67: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List ';' IDENTIFIER GENERATOR_OPERATOR IDENTIFIER  */
#line 276 "parser.y"
                                                                                                  { (yyval.tree) = add_to_list((yyvsp[-4].tree), mk_generator_without_to_and_by(mk_ident_lit((yyvsp[-2].str_value)), mk_ident_lit((yyvsp[0].str_value)))); }
#line 2558 "parser.tab.cpp"
    break;

  case 68: /* generators_and_conditions_curly_braces_List: IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt expr TO endlOpt expr  */
#line 280 "parser.y"
                                                                             {(yyval.tree) = add_to_list(mk_list(),  mk_generator_without_by(mk_ident_lit((yyvsp[-7].str_value)), (yyvsp[-3].tree), (yyvsp[0].tree))); }
#line 2564 "parser.tab.cpp"
    break;

  case 69: /* generators_and_conditions_curly_braces_List: IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt expr TO endlOpt expr BY endlOpt const  */
#line 281 "parser.y"
                                                                                              {(yyval.tree) = add_to_list(mk_list(),  mk_generator_with_by(mk_ident_lit((yyvsp[-10].str_value)), (yyvsp[-6].tree), (yyvsp[-3].tree), (yyvsp[0].tree)));}
#line 2570 "parser.tab.cpp"
    break;

  case 70: /* generators_and_conditions_curly_braces_List: IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt IDENTIFIER  */
#line 282 "parser.y"
                                                                   {(yyval.tree) = add_to_list(mk_list(), mk_generator_without_to_and_by(mk_ident_lit((yyvsp[-4].str_value)),mk_ident_lit((yyvsp[0].str_value)))); }
#line 2576 "parser.tab.cpp"
    break;

  case 71: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlOpt IF endlOpt expr  */
#line 283 "parser.y"
                                                                              { (yyval.tree) = add_to_list((yyvsp[-4].tree), mk_if_cond((yyvsp[0].tree)));}
#line 2582 "parser.tab.cpp"
    break;

  case 72: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlOpt ';' endlOpt IF expr  */
#line 284 "parser.y"
                                                                                  { (yyval.tree) = add_to_list((yyvsp[-5].tree), mk_if_cond((yyvsp[0].tree))); }
#line 2588 "parser.tab.cpp"
    break;

  case 73: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlOpt ';' endlOpt IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt expr TO endlOpt expr  */
#line 285 "parser.y"
                                                                                                                                             { (yyval.tree) = add_to_list((yyvsp[-11].tree), mk_generator_without_by(mk_ident_lit((yyvsp[-7].str_value)), (yyvsp[-3].tree), (yyvsp[0].tree))); }
#line 2594 "parser.tab.cpp"
    break;

  case 74: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlOpt ';' endlOpt IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt expr TO endlOpt expr BY endlOpt const  */
#line 286 "parser.y"
                                                                                                                                                              { (yyval.tree) = add_to_list((yyvsp[-14].tree), mk_generator_with_by(mk_ident_lit((yyvsp[-10].str_value)), (yyvsp[-6].tree), (yyvsp[-3].tree), (yyvsp[0].tree))); }
#line 2600 "parser.tab.cpp"
    break;

  case 75: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlOpt ';' endlOpt IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt IDENTIFIER  */
#line 287 "parser.y"
                                                                                                                                   { (yyval.tree) = add_to_list((yyvsp[-8].tree), mk_generator_without_to_and_by(mk_ident_lit((yyvsp[-4].str_value)), mk_ident_lit((yyvsp[0].str_value))));}
#line 2606 "parser.tab.cpp"
    break;

  case 76: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlList IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt expr TO endlOpt expr  */
#line 288 "parser.y"
                                                                                                                                  {(yyval.tree) = add_to_list(mk_list(),  mk_generator_without_by(mk_ident_lit((yyvsp[-7].str_value)), (yyvsp[-3].tree), (yyvsp[0].tree)));}
#line 2612 "parser.tab.cpp"
    break;

  case 77: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlList IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt expr TO endlOpt expr BY endlOpt const  */
#line 289 "parser.y"
                                                                                                                                                   {(yyval.tree) = add_to_list(mk_list(),  mk_generator_with_by(mk_ident_lit((yyvsp[-10].str_value)), (yyvsp[-6].tree), (yyvsp[-3].tree), (yyvsp[0].tree))); }
#line 2618 "parser.tab.cpp"
    break;

  case 78: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlList IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt IDENTIFIER  */
#line 290 "parser.y"
                                                                                                                        {(yyval.tree) = add_to_list(mk_list(), mk_generator_without_to_and_by(mk_ident_lit((yyvsp[-4].str_value)),mk_ident_lit((yyvsp[0].str_value)))); }
#line 2624 "parser.tab.cpp"
    break;

  case 79: /* while_expr: WHILE endlOpt '(' expr ')' endlOpt expr  */
#line 296 "parser.y"
                                                              { (yyval.tree) = mk_while_expr((yyvsp[-3].tree),(yyvsp[0].tree)); }
#line 2630 "parser.tab.cpp"
    break;

  case 80: /* do_while_expr: DO endlOpt expr endlOpt WHILE '(' expr ')'  */
#line 300 "parser.y"
                                                                 { (yyval.tree) = mk_do_while_expr((yyvsp[-5].tree),(yyvsp[-1].tree)); }
#line 2636 "parser.tab.cpp"
    break;

  case 81: /* match_expr: expr MATCH endlOpt '{' endlOpt case_list endlOpt '}'  */
#line 306 "parser.y"
                                                              {(yyval.tree) = mk_match_expr((yyvsp[-7].tree),(yyvsp[-2].tree));}
#line 2642 "parser.tab.cpp"
    break;

  case 82: /* case_condition: expr_list  */
#line 311 "parser.y"
                                          {(yyval.tree) = add_case_condition((yyvsp[0].tree));}
#line 2648 "parser.tab.cpp"
    break;

  case 83: /* case_condition: CASE_PATTERN  */
#line 312 "parser.y"
                       {(yyval.tree) = add_case_condition((yyvsp[0].tree));}
#line 2654 "parser.tab.cpp"
    break;

  case 84: /* case_list: CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 318 "parser.y"
                                                                                         {(yyval.tree) = mk_list();(yyval.tree) = add_alt_case((yyval.tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2660 "parser.tab.cpp"
    break;

  case 85: /* case_list: case_list endlOpt semicolonList endlOpt CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 319 "parser.y"
                                                                                                                                 {(yyval.tree) = add_alt_case((yyvsp[-10].tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2666 "parser.tab.cpp"
    break;

  case 86: /* case_list: case_list endlOpt CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 320 "parser.y"
                                                                                                           {(yyval.tree) = add_alt_case((yyvsp[-8].tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2672 "parser.tab.cpp"
    break;

  case 87: /* expr_list_e: expr_list  */
#line 330 "parser.y"
                   { printf("PARSER found expr_list - expr_list\n"); }
#line 2678 "parser.tab.cpp"
    break;

  case 88: /* expr_list_e: %empty  */
#line 331 "parser.y"
                     {  (yyval.tree) = mk_list();}
#line 2684 "parser.tab.cpp"
    break;

  case 89: /* expr_list: expr  */
#line 336 "parser.y"
                      { (yyval.tree) = add_to_list(mk_list(), (yyvsp[0].tree));}
#line 2690 "parser.tab.cpp"
    break;

  case 90: /* expr_list: expr_list endlOpt ',' endlOpt expr  */
#line 337 "parser.y"
                                          { (yyval.tree) = add_to_list((yyvsp[-4].tree), (yyvsp[0].tree)); }
#line 2696 "parser.tab.cpp"
    break;

  case 91: /* expr: const  */
#line 342 "parser.y"
             {printf("PARSER found expr - const\n"); }
#line 2702 "parser.tab.cpp"
    break;

  case 92: /* expr: IDENTIFIER  */
#line 343 "parser.y"
                                       {(yyval.tree) = mk_ident_lit((yyvsp[0].str_value)); }
#line 2708 "parser.tab.cpp"
    break;

  case 93: /* expr: IDENTIFIER endlOpt '=' endlOpt expr  */
#line 344 "parser.y"
                                          { printf("Assignment:\n"); }
#line 2714 "parser.tab.cpp"
    break;

  case 94: /* expr: '(' expr ')'  */
#line 345 "parser.y"
                   { printf("PARSER found expr - ( expr ) \n"); }
#line 2720 "parser.tab.cpp"
    break;

  case 95: /* expr: expr '>' endlOpt expr  */
#line 346 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) ">", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2726 "parser.tab.cpp"
    break;

  case 96: /* expr: expr '<' endlOpt expr  */
#line 347 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "<", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2732 "parser.tab.cpp"
    break;

  case 97: /* expr: expr MORE_OR_EQUAL_OPERATOR endlOpt expr  */
#line 348 "parser.y"
                                               { (yyval.tree) = mk_bin_op((char*) ">=", (yyvsp[-3].tree), (yyvsp[0].tree));  }
#line 2738 "parser.tab.cpp"
    break;

  case 98: /* expr: expr LESS_OR_EQUAL_OPERATOR endlOpt expr  */
#line 349 "parser.y"
                                               { (yyval.tree) = mk_bin_op((char*) "<=", (yyvsp[-3].tree), (yyvsp[0].tree));  }
#line 2744 "parser.tab.cpp"
    break;

  case 99: /* expr: expr EQ endlOpt expr  */
#line 350 "parser.y"
                           { (yyval.tree) = mk_bin_op((char*) "==", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2750 "parser.tab.cpp"
    break;

  case 100: /* expr: expr NEQ endlOpt expr  */
#line 351 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "!=", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2756 "parser.tab.cpp"
    break;

  case 101: /* expr: expr '+' endlOpt expr  */
#line 352 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "+", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2762 "parser.tab.cpp"
    break;

  case 102: /* expr: expr '-' endlOpt expr  */
#line 353 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "-", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2768 "parser.tab.cpp"
    break;

  case 103: /* expr: expr '/' endlOpt expr  */
#line 354 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "/", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2774 "parser.tab.cpp"
    break;

  case 104: /* expr: expr '*' endlOpt expr  */
#line 355 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "*", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2780 "parser.tab.cpp"
    break;

  case 105: /* expr: expr '%' endlOpt expr  */
#line 356 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "%", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2786 "parser.tab.cpp"
    break;

  case 106: /* expr: expr '&' endlOpt expr  */
#line 357 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "&", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2792 "parser.tab.cpp"
    break;

  case 107: /* expr: expr '|' endlOpt expr  */
#line 358 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "|", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2798 "parser.tab.cpp"
    break;

  case 108: /* expr: expr KW_OR endlOpt expr  */
#line 359 "parser.y"
                              { (yyval.tree) = mk_bin_op((char*) "||", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2804 "parser.tab.cpp"
    break;

  case 109: /* expr: expr KW_AND endlOpt expr  */
#line 360 "parser.y"
                               { (yyval.tree) = mk_bin_op((char*) "&&", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2810 "parser.tab.cpp"
    break;

  case 110: /* expr: '-' expr  */
#line 361 "parser.y"
                             { (yyval.tree) = mk_unary_op("unary_minus_op", (yyvsp[0].tree)); }
#line 2816 "parser.tab.cpp"
    break;

  case 111: /* expr: '+' expr  */
#line 362 "parser.y"
                            { (yyval.tree) = mk_unary_op("unary_plus_op", (yyvsp[0].tree)); }
#line 2822 "parser.tab.cpp"
    break;

  case 112: /* expr: if_else_expr  */
#line 363 "parser.y"
                   {(yyval.tree)=(yyvsp[0].tree);}
#line 2828 "parser.tab.cpp"
    break;

  case 113: /* expr: for_expr  */
#line 364 "parser.y"
               { printf("PARSER found expr - for_expr\n"); }
#line 2834 "parser.tab.cpp"
    break;

  case 114: /* expr: while_expr  */
#line 365 "parser.y"
                 {(yyval.tree)=(yyvsp[0].tree);}
#line 2840 "parser.tab.cpp"
    break;

  case 115: /* expr: do_while_expr  */
#line 366 "parser.y"
                    {(yyval.tree)=(yyvsp[0].tree);}
#line 2846 "parser.tab.cpp"
    break;

  case 116: /* expr: match_expr  */
#line 367 "parser.y"
                 {(yyval.tree)=(yyvsp[0].tree);}
#line 2852 "parser.tab.cpp"
    break;

  case 117: /* expr: '{' statement_expr_list_e '}'  */
#line 368 "parser.y"
                                    { (yyval.tree) = (yyvsp[-1].tree); }
#line 2858 "parser.tab.cpp"
    break;

  case 118: /* expr: anonymous_func  */
#line 369 "parser.y"
                     { (yyval.tree)=(yyvsp[0].tree); }
#line 2864 "parser.tab.cpp"
    break;

  case 119: /* expr: method_call  */
#line 370 "parser.y"
                  { (yyval.tree)=(yyvsp[0].tree); }
#line 2870 "parser.tab.cpp"
    break;

  case 120: /* expr: create_instance_class  */
#line 371 "parser.y"
                            { (yyval.tree) = (yyvsp[0].tree); }
#line 2876 "parser.tab.cpp"
    break;

  case 121: /* expr: READLINE '(' ')'  */
#line 372 "parser.y"
                     { printf("readLine:\n"); }
#line 2882 "parser.tab.cpp"
    break;

  case 122: /* expr: PRINTLN '(' expr ')'  */
#line 373 "parser.y"
                          { printf("print:\n"); }
#line 2888 "parser.tab.cpp"
    break;

  case 123: /* expr: IDENTIFIER '.' '(' NUM_10 ')'  */
#line 374 "parser.y"
                                    { printf("array_call:\n"); }
#line 2894 "parser.tab.cpp"
    break;

  case 124: /* const: NUM_10  */
#line 381 "parser.y"
             { (yyval.tree) = mk_int_const((yyvsp[0].int_value)); }
#line 2900 "parser.tab.cpp"
    break;

  case 125: /* const: CONST_STRING  */
#line 382 "parser.y"
                   { (yyval.tree) = mk_string_const((yyvsp[0].str_value)); }
#line 2906 "parser.tab.cpp"
    break;

  case 126: /* const: CONST_CHAR  */
#line 383 "parser.y"
                 { (yyval.tree) = mk_char_const((yyvsp[0].str_value)); }
#line 2912 "parser.tab.cpp"
    break;

  case 127: /* const: KW_TRUE  */
#line 384 "parser.y"
              { (yyval.tree) = mk_boolean_const(true); }
#line 2918 "parser.tab.cpp"
    break;

  case 128: /* const: KW_FALSE  */
#line 385 "parser.y"
               { (yyval.tree) = mk_boolean_const(false); }
#line 2924 "parser.tab.cpp"
    break;

  case 129: /* const: KW_NULL  */
#line 386 "parser.y"
              { (yyval.tree) = mk_null_const(); }
#line 2930 "parser.tab.cpp"
    break;

  case 130: /* const: REAL_NUMBER  */
#line 387 "parser.y"
                  { (yyval.tree) = mk_real_const((yyvsp[0].real_value)); }
#line 2936 "parser.tab.cpp"
    break;

  case 131: /* const: array  */
#line 388 "parser.y"
            { (yyval.tree) = mk_array_const((yyvsp[0].tree)); }
#line 2942 "parser.tab.cpp"
    break;

  case 132: /* params: IDENTIFIER ':' type_list_car  */
#line 394 "parser.y"
                                    {  (yyval.tree) = add_to_list(mk_list(), mk_method_params(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree)));  }
#line 2948 "parser.tab.cpp"
    break;

  case 133: /* params: IDENTIFIER ':' type_list_car '=' const  */
#line 395 "parser.y"
                                              {  (yyval.tree) = add_to_list(mk_list(), mk_method_params_value(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2954 "parser.tab.cpp"
    break;

  case 134: /* params: params ',' IDENTIFIER ':' type_list_car  */
#line 396 "parser.y"
                                               {  (yyval.tree) = add_to_list((yyvsp[-4].tree), mk_method_params(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2960 "parser.tab.cpp"
    break;

  case 135: /* params: params ',' IDENTIFIER ':' type_list_car '=' const  */
#line 397 "parser.y"
                                                         {  (yyval.tree) = add_to_list((yyvsp[-6].tree), mk_method_params_value(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2966 "parser.tab.cpp"
    break;

  case 137: /* anonymous_func: '(' params ')' endlOpt RIGHT_ARROW_OPERATOR endlOpt expr  */
#line 403 "parser.y"
                                                                                   { (yyval.tree) = mk_anonym_func((yyvsp[-5].tree),(yyvsp[0].tree));}
#line 2972 "parser.tab.cpp"
    break;

  case 138: /* func: DEF endlOpt IDENTIFIER endlOpt method_params_list endlOpt ':' endlOpt type endlOpt '=' endlOpt expr  */
#line 407 "parser.y"
                                                                                                          { (yyval.tree) = mk_method_declaration(mk_ident_lit((yyvsp[-10].str_value)),(yyvsp[-8].tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2978 "parser.tab.cpp"
    break;

  case 139: /* func: DEF endlOpt IDENTIFIER endlOpt ':' endlOpt type endlOpt '=' endlOpt expr  */
#line 408 "parser.y"
                                                                               { (yyval.tree) = mk_method_declaration_typeOnly(mk_ident_lit((yyvsp[-8].str_value)),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2984 "parser.tab.cpp"
    break;

  case 140: /* func: DEF endlOpt IDENTIFIER endlOpt method_params_list endlOpt '=' endlOpt expr  */
#line 409 "parser.y"
                                                                                 { (yyval.tree) = mk_method_declaration_paramsOnly(mk_ident_lit((yyvsp[-6].str_value)),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2990 "parser.tab.cpp"
    break;

  case 141: /* func: DEF endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 410 "parser.y"
                                                      { (yyval.tree) = mk_method_declaration_bodyOnly(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[0].tree));}
#line 2996 "parser.tab.cpp"
    break;

  case 142: /* method_params_list: '(' params ')'  */
#line 414 "parser.y"
                   { (yyval.tree) = (yyvsp[-1].tree); }
#line 3002 "parser.tab.cpp"
    break;

  case 143: /* method_params_list: method_params_list endlOpt '(' params ')'  */
#line 415 "parser.y"
                                              { (yyval.tree) = mk_list(); (yyval.tree) = add_to_list((yyvsp[-4].tree),(yyvsp[-1].tree));}
#line 3008 "parser.tab.cpp"
    break;

  case 144: /* method: func  */
#line 419 "parser.y"
           { (yyval.tree) = (yyvsp[0].tree); }
#line 3014 "parser.tab.cpp"
    break;

  case 149: /* method_arguments_list: '(' expr_list_e ')'  */
#line 427 "parser.y"
                        {(yyval.tree) = (yyvsp[-1].tree);}
#line 3020 "parser.tab.cpp"
    break;

  case 150: /* method_arguments_list: method_arguments_list '(' expr_list_e ')'  */
#line 428 "parser.y"
                                              {(yyval.tree) = mk_list(); add_to_list((yyvsp[-3].tree),mk_method_arguments_list((yyvsp[-1].tree)));}
#line 3026 "parser.tab.cpp"
    break;

  case 151: /* method_call: IDENTIFIER method_arguments_list  */
#line 432 "parser.y"
                                       { (yyval.tree) = mk_method_call((yyvsp[-1].str_value),(yyvsp[0].tree));}
#line 3032 "parser.tab.cpp"
    break;

  case 152: /* method_call: expr '.' IDENTIFIER method_arguments_list  */
#line 433 "parser.y"
                                                { (yyval.tree) = mk_method_call_identifier(mk_ident_lit((yyvsp[-3].tree)),mk_ident_lit((yyvsp[-1].str_value)),(yyvsp[0].tree));}
#line 3038 "parser.tab.cpp"
    break;

  case 153: /* type: INT_KW  */
#line 439 "parser.y"
             { (yyval.tree) = mk_integer_type(); }
#line 3044 "parser.tab.cpp"
    break;

  case 154: /* type: DOUBLE_KW  */
#line 440 "parser.y"
                { (yyval.tree) = mk_real_type(); }
#line 3050 "parser.tab.cpp"
    break;

  case 155: /* type: STRING_KW  */
#line 441 "parser.y"
                { (yyval.tree) = mk_string_type(); }
#line 3056 "parser.tab.cpp"
    break;

  case 156: /* type: CHAR_KW  */
#line 442 "parser.y"
              { (yyval.tree) = mk_char_type(); }
#line 3062 "parser.tab.cpp"
    break;

  case 157: /* type: BOOLEAN_KW  */
#line 443 "parser.y"
                 { (yyval.tree) = mk_boolean_type(); }
#line 3068 "parser.tab.cpp"
    break;

  case 158: /* type: ANY_KW  */
#line 444 "parser.y"
             { (yyval.tree) = mk_any_type(); }
#line 3074 "parser.tab.cpp"
    break;

  case 159: /* type: UNIT_KW  */
#line 445 "parser.y"
              { (yyval.tree) = mk_unit_type(); }
#line 3080 "parser.tab.cpp"
    break;

  case 160: /* type: type_list_simple  */
#line 446 "parser.y"
                       { (yyval.tree) = (yyvsp[0].tree);}
#line 3086 "parser.tab.cpp"
    break;

  case 161: /* type_list_car: type  */
#line 450 "parser.y"
           { (yyval.tree) = mk_list(); (yyval.tree) = add_to_list((yyval.tree), (yyvsp[0].tree));  }
#line 3092 "parser.tab.cpp"
    break;

  case 162: /* type_list_car: type_list_car RIGHT_ARROW_OPERATOR type  */
#line 451 "parser.y"
                                              { (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 3098 "parser.tab.cpp"
    break;

  case 163: /* type_list: type  */
#line 455 "parser.y"
           { (yyval.tree) = mk_list(); (yyval.tree) = add_to_list((yyval.tree), (yyvsp[0].tree)); }
#line 3104 "parser.tab.cpp"
    break;

  case 164: /* type_list: type_list_simple ',' type  */
#line 456 "parser.y"
                                { (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 3110 "parser.tab.cpp"
    break;

  case 165: /* type_list_simple: '(' type_list ')' RIGHT_ARROW_OPERATOR type  */
#line 460 "parser.y"
                                                 { (yyval.tree) = add_to_list((yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 3116 "parser.tab.cpp"
    break;

  case 166: /* array: array_literal  */
#line 471 "parser.y"
                     {(yyval.tree) = (yyvsp[0].tree); }
#line 3122 "parser.tab.cpp"
    break;

  case 167: /* array: initialized_array  */
#line 472 "parser.y"
                         {(yyval.tree) = mk_initialized_array((yyvsp[0].tree));}
#line 3128 "parser.tab.cpp"
    break;

  case 168: /* array_literal: ARRAY endlOpt '(' expr_list_e ')'  */
#line 476 "parser.y"
                                        {  (yyval.tree) = mk_array_literal((yyvsp[-1].tree)); }
#line 3134 "parser.tab.cpp"
    break;

  case 169: /* array_literal: ARRAY  */
#line 477 "parser.y"
                                   { (yyval.tree) = mk_empty_array(); }
#line 3140 "parser.tab.cpp"
    break;

  case 170: /* initialized_array: NEW endlOpt ARRAY endlOpt '[' type ']' '(' expr ')'  */
#line 481 "parser.y"
                                                           { (yyval.tree) = mk_initialized_array_with_type_and_expr((yyvsp[-4].tree), (yyvsp[-1].tree));}
#line 3146 "parser.tab.cpp"
    break;

  case 171: /* endlList: ENDL  */
#line 490 "parser.y"
                    { printf("PARSER found ENDL\n"); }
#line 3152 "parser.tab.cpp"
    break;

  case 172: /* endlList: endlList ENDL  */
#line 491 "parser.y"
                    { printf("PARSER found endlList\n"); }
#line 3158 "parser.tab.cpp"
    break;

  case 173: /* endlOpt: endlList  */
#line 496 "parser.y"
               { printf("PARSER found endlOpt\n"); }
#line 3164 "parser.tab.cpp"
    break;

  case 175: /* semicolonList: ';'  */
#line 502 "parser.y"
                   { printf("PARSER found SEMICOLON\n"); }
#line 3170 "parser.tab.cpp"
    break;

  case 176: /* semicolonList: semicolonList ';'  */
#line 503 "parser.y"
                        { printf("PARSER found semicolonList\n"); }
#line 3176 "parser.tab.cpp"
    break;

  case 177: /* separator_List: ENDL  */
#line 507 "parser.y"
            { printf("PARSER found ENDL\n"); }
#line 3182 "parser.tab.cpp"
    break;

  case 178: /* separator_List: ';'  */
#line 508 "parser.y"
            { printf("PARSER found SEMICOLON\n"); }
#line 3188 "parser.tab.cpp"
    break;

  case 179: /* separator_List: separator_List ENDL  */
#line 509 "parser.y"
                            { printf("PARSER add ENDL to separator_List\n"); }
#line 3194 "parser.tab.cpp"
    break;

  case 180: /* separator_List: separator_List ';'  */
#line 510 "parser.y"
                           { printf("PARSER add ; to separator_List\n"); }
#line 3200 "parser.tab.cpp"
    break;


#line 3204 "parser.tab.cpp"

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

