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
  YYSYMBOL_TOKEN_CHAR = 29,                /* TOKEN_CHAR  */
  YYSYMBOL_TOKEN_STRING = 30,              /* TOKEN_STRING  */
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
  YYSYMBOL_APPLY = 64,                     /* APPLY  */
  YYSYMBOL_GENERATOR_OPERATOR = 65,        /* GENERATOR_OPERATOR  */
  YYSYMBOL_RIGHT_ARROW_OPERATOR = 66,      /* RIGHT_ARROW_OPERATOR  */
  YYSYMBOL_ID_COLLECTION = 67,             /* ID_COLLECTION  */
  YYSYMBOL_DEF = 68,                       /* DEF  */
  YYSYMBOL_NEW = 69,                       /* NEW  */
  YYSYMBOL_PROTECTED = 70,                 /* PROTECTED  */
  YYSYMBOL_PRIVATE = 71,                   /* PRIVATE  */
  YYSYMBOL_CLASS = 72,                     /* CLASS  */
  YYSYMBOL_EXTENDS = 73,                   /* EXTENDS  */
  YYSYMBOL_ABSTRACT = 74,                  /* ABSTRACT  */
  YYSYMBOL_NOT = 75,                       /* NOT  */
  YYSYMBOL_CASE_PATTERN = 76,              /* CASE_PATTERN  */
  YYSYMBOL_77_ = 77,                       /* '{'  */
  YYSYMBOL_78_ = 78,                       /* '}'  */
  YYSYMBOL_79_ = 79,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 80,                  /* $accept  */
  YYSYMBOL_program = 81,                   /* program  */
  YYSYMBOL_class = 82,                     /* class  */
  YYSYMBOL_class_header = 83,              /* class_header  */
  YYSYMBOL_abstract_class_header = 84,     /* abstract_class_header  */
  YYSYMBOL_case_class_header = 85,         /* case_class_header  */
  YYSYMBOL_class_params = 86,              /* class_params  */
  YYSYMBOL_class_params_e = 87,            /* class_params_e  */
  YYSYMBOL_create_instance_class = 88,     /* create_instance_class  */
  YYSYMBOL_visibility_modifier = 89,       /* visibility_modifier  */
  YYSYMBOL_inheritance = 90,               /* inheritance  */
  YYSYMBOL_statement_expr_list = 91,       /* statement_expr_list  */
  YYSYMBOL_statement_expr_list_e = 92,     /* statement_expr_list_e  */
  YYSYMBOL_statement = 93,                 /* statement  */
  YYSYMBOL_if_else_expr = 94,              /* if_else_expr  */
  YYSYMBOL_for_expr = 95,                  /* for_expr  */
  YYSYMBOL_generators_and_conditions_parentheses_List = 96, /* generators_and_conditions_parentheses_List  */
  YYSYMBOL_generators_and_conditions_curly_braces_List = 97, /* generators_and_conditions_curly_braces_List  */
  YYSYMBOL_while_expr = 98,                /* while_expr  */
  YYSYMBOL_do_while_expr = 99,             /* do_while_expr  */
  YYSYMBOL_match_expr = 100,               /* match_expr  */
  YYSYMBOL_case_condition = 101,           /* case_condition  */
  YYSYMBOL_case_list = 102,                /* case_list  */
  YYSYMBOL_expr_list_e = 103,              /* expr_list_e  */
  YYSYMBOL_expr_list = 104,                /* expr_list  */
  YYSYMBOL_expr = 105,                     /* expr  */
  YYSYMBOL_const = 106,                    /* const  */
  YYSYMBOL_params = 107,                   /* params  */
  YYSYMBOL_anonymous_func = 108,           /* anonymous_func  */
  YYSYMBOL_func = 109,                     /* func  */
  YYSYMBOL_method_params_list = 110,       /* method_params_list  */
  YYSYMBOL_method = 111,                   /* method  */
  YYSYMBOL_method_arguments_list = 112,    /* method_arguments_list  */
  YYSYMBOL_method_call = 113,              /* method_call  */
  YYSYMBOL_type = 114,                     /* type  */
  YYSYMBOL_type_list_car = 115,            /* type_list_car  */
  YYSYMBOL_type_list = 116,                /* type_list  */
  YYSYMBOL_type_list_simple = 117,         /* type_list_simple  */
  YYSYMBOL_array = 118,                    /* array  */
  YYSYMBOL_array_literal = 119,            /* array_literal  */
  YYSYMBOL_initialized_array = 120,        /* initialized_array  */
  YYSYMBOL_endlList = 121,                 /* endlList  */
  YYSYMBOL_endlOpt = 122,                  /* endlOpt  */
  YYSYMBOL_semicolonList = 123,            /* semicolonList  */
  YYSYMBOL_separator_List = 124,           /* separator_List  */
  YYSYMBOL_separator_List_e = 125          /* separator_List_e  */
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
#define YYLAST   1804

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  178
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  511

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   314


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
       2,     2,     2,     2,     2,     2,     2,     2,    11,    79,
      10,     6,     9,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    21,     2,    22,     2,     2,     2,     2,     2,     2,
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
      17,    18,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   134,   134,   141,   142,   143,   149,   150,   151,   152,
     156,   161,   162,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   186,
     187,   191,   192,   205,   206,   214,   215,   223,   224,   225,
     226,   227,   228,   232,   233,   237,   238,   239,   240,   241,
     242,   243,   244,   254,   255,   256,   264,   265,   266,   267,
     272,   273,   274,   275,   276,   277,   278,   279,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   299,
     303,   309,   314,   315,   321,   322,   323,   333,   334,   339,
     340,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   384,   385,   386,   387,   388,   389,
     390,   391,   397,   398,   399,   400,   401,   406,   410,   411,
     412,   413,   417,   418,   422,   426,   427,   431,   432,   438,
     439,   440,   441,   442,   443,   444,   445,   449,   450,   454,
     455,   459,   470,   471,   475,   476,   480,   489,   490,   495,
     496,   501,   502,   506,   507,   508,   509,   513,   514
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
  "REAL_NUMBER_EXPONENT", "IDENTIFIER", "TOKEN_CHAR", "TOKEN_STRING",
  "NEWLINE", "VAL", "VAR", "ELSE", "IF", "FOR", "DO", "WHILE", "MATCH",
  "CASE", "PRINTLN", "READLINE", "ARRAY", "OVERRIDE", "KW_TRUE",
  "KW_FALSE", "KW_NULL", "EQ", "NEQ", "KW_OR", "KW_AND",
  "MORE_OR_EQUAL_OPERATOR", "LESS_OR_EQUAL_OPERATOR", "INT_KW",
  "DOUBLE_KW", "STRING_KW", "CHAR_KW", "BOOLEAN_KW", "ANY_KW", "UNIT_KW",
  "TO", "BY", "YIELD", "APPLY", "GENERATOR_OPERATOR",
  "RIGHT_ARROW_OPERATOR", "ID_COLLECTION", "DEF", "NEW", "PROTECTED",
  "PRIVATE", "CLASS", "EXTENDS", "ABSTRACT", "NOT", "CASE_PATTERN", "'{'",
  "'}'", "';'", "$accept", "program", "class", "class_header",
  "abstract_class_header", "case_class_header", "class_params",
  "class_params_e", "create_instance_class", "visibility_modifier",
  "inheritance", "statement_expr_list", "statement_expr_list_e",
  "statement", "if_else_expr", "for_expr",
  "generators_and_conditions_parentheses_List",
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

#define YYPACT_NINF (-366)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-171)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,  -366,  -366,    25,  -366,    16,   795,  -366,  -366,  -366,
     679,   679,   849,  -366,  -366,   270,  -366,  -366,    43,    43,
      43,    43,    43,    43,    43,    51,    54,    94,  -366,  -366,
    -366,    43,    43,  -366,  -366,    43,    43,     8,  -366,     2,
      42,    88,  -366,    96,    23,  -366,  -366,  -366,  -366,  -366,
    -366,  1668,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
     112,   112,   277,  1409,   207,  -366,   679,   119,   156,   208,
     216,   200,   204,   217,    34,   679,   230,   182,   679,   236,
     250,   244,   138,   247,   214,   209,     8,     8,     8,  -366,
     741,  -366,    43,    43,    43,    43,    43,    43,    43,    43,
      43,   262,    43,    43,    43,    43,    43,    43,    43,   161,
    -366,   266,    43,   275,    57,  1668,   278,   679,  -366,    43,
      43,    43,   679,   271,    43,  1362,   679,    43,  1426,  -366,
     679,    43,   283,    43,     6,  -366,  -366,   225,   226,   227,
      96,  -366,  1668,   679,   679,   679,   679,   679,   679,   679,
     679,   679,   287,   231,   679,   679,   679,   679,   679,   679,
     161,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,    44,
    -366,   296,   243,  -366,   305,   679,   300,   679,   111,   193,
    1473,   263,     3,   301,   297,  1490,   306,  -366,   313,   148,
     679,   316,    24,  -366,  -366,  -366,  -366,  1751,   229,   339,
     339,   309,   309,   112,   112,   112,   156,    43,   496,   496,
    1727,  1739,   339,   339,  -366,   318,   335,   131,   161,   161,
      43,    43,  1537,  -366,  1680,    43,    43,    43,    43,    43,
     886,    43,   679,   157,    43,    43,   324,    43,    43,  -366,
      43,    43,   317,    43,   326,   161,    -4,    43,  -366,   304,
     282,   161,    43,  -366,  -366,    46,   679,   679,  -366,   679,
      38,   679,   115,   679,    12,  1211,   160,  1668,   284,   679,
     291,   118,    30,   679,   679,   338,   679,   161,   347,   220,
     260,  -366,   337,   332,   333,   358,   344,   130,   340,    43,
      43,   161,  -366,   322,   131,  1668,  1668,  1668,   345,    43,
    1668,   346,    43,  1557,   679,    43,  1680,   923,  1668,    43,
      43,    43,    43,    43,  1604,  1668,    -4,  1668,    43,  -366,
      43,    43,   317,   350,   359,   361,   176,   303,   349,   351,
     355,   533,    52,  -366,  -366,   161,   372,   161,   374,    43,
      60,   442,   679,    14,  1228,   960,   319,   679,   607,   159,
    -366,   362,   375,   679,   161,   228,   679,   161,   161,   357,
     368,   202,  -366,   399,   400,   679,  -366,    43,   381,    43,
    -366,  -366,    27,   396,    43,   401,    43,   679,    43,   679,
    1680,   679,    21,  1278,    43,  1668,    43,  1680,    43,   679,
     303,    43,  1668,    43,  -366,  1621,   415,   418,   414,   416,
     402,   403,   161,   161,    58,   366,   533,  -366,   393,    43,
     679,    43,   679,  1680,   679,  1668,  1075,    43,   997,   679,
     369,  1668,  -366,   679,   429,  -366,   131,   131,   161,   161,
     425,   428,   434,   435,  -366,    23,    43,    43,   436,  1668,
     437,  1668,  1680,   679,   679,    36,  1295,  1680,    43,  1668,
      43,  -366,  -366,   438,   439,   161,   161,   131,   131,   679,
     382,   533,    43,    43,  1668,  1092,    43,  1034,   679,   131,
     131,   441,   453,  -366,  -366,  1668,    23,    43,   113,   113,
      43,   679,    45,  1345,  1668,  -366,  -366,   131,   131,   679,
     394,  -366,  -366,   679,  1143,    43,  -366,  -366,  1668,    23,
    1668,    43,   679,   679,   679,  1160,  1668,  1668,    43,   679,
    1668
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     178,   173,   174,     0,     2,   177,     0,     1,   175,   176,
       0,     0,   136,   124,   130,    92,   126,   125,   170,   170,
     170,   170,   170,   170,   170,     0,     0,   165,   127,   128,
     129,   170,   170,    34,    33,   170,   170,   178,    51,     0,
       0,     0,   120,     0,   178,    37,   112,   113,   114,   115,
     116,    39,    91,   118,   144,    52,   119,   131,   162,   163,
     111,   110,    92,     0,     0,   167,    88,     0,   147,   169,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   178,   178,   178,    38,
     177,    43,   170,   170,   170,   170,   170,   170,   170,   170,
     170,     0,   170,   170,   170,   170,   170,   170,   170,     0,
      94,     0,   170,     0,    87,    89,     0,    88,   168,   170,
     170,   170,     0,     0,   170,   170,     0,   170,     0,   121,
      88,   170,    31,   170,   170,    10,   117,     0,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   149,   150,   151,   152,   153,   154,   155,   157,   132,
     156,     0,     0,   145,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   122,     0,     0,
      88,     0,     0,     3,     4,     5,    42,   107,   106,    95,
      96,   101,   102,   104,   103,   105,   148,   170,    99,   100,
     108,   109,    97,    98,   159,     0,   156,     0,     0,     0,
     170,   170,     0,   146,    93,   170,   170,   170,   170,   170,
       0,   170,     0,     0,   170,   170,     0,   170,   170,   164,
     170,   170,   136,   170,     0,     0,    30,   170,     9,     0,
       0,     0,   170,   133,   158,   134,     0,     0,   123,     0,
       0,     0,     0,     0,    92,     0,     0,    63,     0,     0,
       0,   169,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,     0,     0,     0,    29,     0,     0,     0,   170,
     170,     0,   160,     0,     0,   137,    90,    45,     0,   170,
      46,     0,   170,    55,     0,   170,    57,     0,    64,   170,
     170,   170,   170,   170,     0,    79,    30,   141,   170,   142,
     170,   170,   136,     0,     0,     0,     0,     6,     0,     0,
      35,     0,     0,   161,   135,     0,     0,     0,     0,   170,
       0,    60,     0,    92,     0,     0,     0,     0,     0,     0,
      80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     0,     0,     0,    83,   170,    82,   170,
      81,   171,   170,     0,   170,     0,   170,     0,   170,     0,
      56,     0,    92,     0,   170,    71,   170,    59,   170,     0,
      11,   170,   140,   170,   143,     0,    14,    13,     0,     0,
       0,     0,     0,     0,   170,     0,     0,   172,     0,   170,
       0,   170,     0,    53,     0,    61,    65,   170,     0,     0,
       0,    72,    12,     0,     0,   166,     0,     0,     0,     0,
       0,     0,    22,    21,    36,   178,   170,   170,     0,    47,
       0,    48,    54,     0,     0,    92,     0,    58,   170,   139,
     170,    16,    15,    18,    17,     0,     0,     0,     0,     0,
       0,     0,   170,   170,    66,    68,   170,     0,     0,     0,
       0,    26,    25,    24,    23,    84,   178,   170,     0,     0,
     170,     0,    92,     0,   138,    20,    19,     0,     0,     0,
       0,    50,    49,     0,    76,   170,    28,    27,    86,   178,
      69,   170,     0,     0,     0,    73,    85,    77,   170,     0,
      74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -366,  -366,  -366,   379,  -366,  -366,  -366,   150,  -366,    -5,
    -315,  -366,    39,   -36,  -366,  -366,  -366,  -366,  -366,  -366,
    -366,  -365,  -366,   -72,  -329,    -6,  -196,  -234,  -366,  -366,
    -366,  -366,   312,  -366,  -144,   248,  -366,  -157,  -214,  -366,
    -366,  -213,   295,  -366,   424,   -30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,    38,    39,    40,    41,   285,   286,    42,   287,
     248,    44,     4,    45,    46,    47,   182,   235,    48,    49,
      50,   367,   290,   113,   114,   115,    52,    64,    53,    54,
     243,    55,    68,    56,   168,   169,   215,   170,    57,    58,
      59,    69,    70,   372,     5,     6
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      51,    43,   368,   216,    60,    61,    63,    89,   279,    65,
     -44,     1,   362,     1,    91,    65,   214,    65,  -170,     8,
    -170,   253,   271,   231,  -171,     7,     1,  -170,   283,   284,
      65,    66,   -62,    66,   -67,    67,   404,    67,   232,  -171,
      66,   436,  -170,   246,    67,   176,    65,   -62,  -171,   -67,
     217,  -170,   294,   123,   141,    66,   -70,   160,   188,    67,
      65,    65,  -170,   118,    66,   311,    33,    34,    67,   125,
      78,   -78,   128,    79,   254,   422,    85,   368,   434,    86,
     -75,   298,   233,    -8,   142,   140,   -44,     2,   355,     2,
     340,   -62,   369,   -67,   378,     9,   477,   247,   334,   -70,
     -70,   282,     2,   299,   196,   302,   407,   292,   312,   313,
     218,   124,   218,  -170,   -78,   -78,   180,   225,   244,    87,
     185,   118,   226,   -75,   -75,   137,   138,   139,    18,    19,
     370,   371,   368,   318,   160,   101,    24,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   310,   333,   208,   209,
     210,   211,   212,   213,   240,    13,    27,    14,   301,   241,
      16,    17,   328,   329,    31,    88,   132,   242,    35,   222,
      36,   224,    10,    11,    27,   117,    28,    29,    30,    12,
     160,   133,   252,   116,    13,   268,    14,   388,    15,    16,
      17,   373,   269,   375,   389,    20,    21,    22,    23,   227,
     252,    25,    26,    27,   228,    28,    29,    30,   359,   360,
     393,   118,   111,   396,   397,   161,   162,   163,   164,   165,
     166,   167,   119,   305,   265,   111,   267,   112,   120,    32,
     451,   452,   121,   111,   400,   401,   122,    37,    94,    95,
     319,    96,    97,    98,    99,   100,    33,    34,   394,   126,
     295,   296,   101,   297,   127,   300,   129,   303,   432,   433,
     306,   473,   474,   308,   491,   492,   320,   314,   315,   130,
     317,   321,   131,   485,   486,   134,  -170,   103,   104,   322,
      65,   107,   108,  -170,   453,   454,    35,   136,   109,    66,
     152,   496,   497,    67,   171,   173,    66,   175,   341,   181,
      67,   344,   190,   193,   194,   195,    66,   219,   207,   220,
     221,   471,   472,    71,    72,    73,    74,    75,    76,    77,
     223,   361,    80,    98,    99,   100,    81,    82,   230,   234,
      83,    84,   101,   239,   238,   236,   380,   245,   250,   383,
     251,   385,   387,   273,   289,   278,   281,   392,   291,   307,
     395,    96,    97,    98,    99,   100,   309,   316,   109,   323,
     324,   325,   101,   326,   327,   133,   335,   337,   330,   356,
     357,   413,   358,   415,   365,   416,   247,   363,   374,   364,
     376,   391,   390,   421,   384,   398,  -170,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   399,   153,   154,   155,
     156,   157,   158,   159,   439,   459,   441,   172,   442,   174,
     402,   403,   446,   447,   177,   178,   179,   449,   409,   183,
     184,   426,   186,   411,   427,   428,   189,   429,   191,   192,
     430,   431,   435,   437,   448,   450,   455,   464,   465,   456,
     457,   458,   462,   463,   469,   470,   489,   487,   476,    92,
      93,    94,    95,   475,    96,    97,    98,    99,   100,   488,
     499,   483,   484,   135,   206,   101,   351,   255,    90,   503,
       0,     0,     0,     0,     0,   494,     0,     0,     0,     0,
       0,   102,     0,   498,     0,     0,     0,   500,     0,     0,
     103,   104,   105,   106,   107,   108,   505,   506,   507,     0,
       0,     0,   249,   510,   379,    94,    95,     0,    96,    97,
      98,    99,   100,     0,     0,   256,   257,     0,     0,   101,
     259,   260,   261,   262,   263,     0,   266,     0,     0,   270,
     272,     0,   274,   275,     0,   276,   277,     0,   280,     0,
       0,     0,   288,     0,     0,    10,    11,   293,   107,   108,
       0,     0,    12,     0,     0,     0,     0,    13,     0,    14,
       0,    15,    16,    17,     0,     0,     0,     0,    20,    21,
      22,    23,     0,     0,    25,    26,    27,     0,    28,    29,
      30,     0,     0,     0,   331,   332,     0,     0,     0,     0,
       0,     0,     0,     0,   336,     0,     0,   338,     0,     0,
     342,     0,    32,     0,   345,   346,   347,   348,   349,   366,
      37,     0,     0,   352,     0,   353,   354,     0,     0,    10,
      11,     0,     0,     0,     0,     0,    12,     0,     0,     0,
       0,    13,     0,    14,   377,    15,    16,    17,     0,     0,
       0,     0,    20,    21,    22,    23,     0,     0,    25,    26,
      27,     0,    28,    29,    30,     0,     0,     0,     0,     0,
       0,     0,   405,   174,   406,     0,     0,   408,     0,   410,
     386,   412,     0,   414,     0,     0,    32,     0,     0,   418,
       0,   419,     0,   420,    37,     0,   423,     0,   424,     0,
       0,    10,    11,     0,     0,     0,     0,     0,    12,   174,
       0,     0,     0,    13,   438,    14,   440,    15,    16,    17,
       0,     0,   444,     0,    20,    21,    22,    23,     0,     0,
      25,    26,    27,     0,    28,    29,    30,     0,     0,     0,
       0,   460,   461,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   467,     8,   468,     0,     0,    32,     0,
       0,     0,     0,    10,    11,     0,    37,   478,   479,     0,
      12,   481,     0,     0,     0,    13,     0,    14,     0,    15,
      16,    17,   490,    18,    19,   493,    20,    21,    22,    23,
       0,    24,    25,    26,    27,     0,    28,    29,    30,     0,
     502,     0,     0,     0,     0,     0,   504,     0,     0,     0,
       0,     0,     0,   509,     0,     0,     0,    10,    11,    31,
      32,    33,    34,    35,    12,    36,     0,     0,    37,    13,
       9,    14,     0,    15,    16,    17,     0,    18,    19,     0,
      20,    21,    22,    23,     0,    24,    25,    26,    27,     0,
      28,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,    31,    32,    33,    34,    35,    12,    36,
       0,     0,    37,    13,     0,    14,     0,    62,    16,    17,
       0,     0,     0,     0,    20,    21,    22,    23,     0,     0,
      25,    26,    27,     0,    28,    29,    30,     0,    10,    11,
       0,     0,     0,     0,     0,    12,     0,     0,     0,     0,
      13,     0,    14,     0,   264,    16,    17,     0,    32,     0,
       0,    20,    21,    22,    23,     0,    37,    25,    26,    27,
       0,    28,    29,    30,     0,    10,    11,     0,     0,     0,
       0,     0,    12,     0,     0,     0,     0,    13,     0,    14,
       0,   343,    16,    17,     0,    32,     0,     0,    20,    21,
      22,    23,     0,    37,    25,    26,    27,     0,    28,    29,
      30,     0,    10,    11,     0,     0,     0,     0,     0,    12,
       0,     0,     0,     0,    13,     0,    14,     0,   382,    16,
      17,     0,    32,     0,     0,    20,    21,    22,    23,     0,
      37,    25,    26,    27,     0,    28,    29,    30,     0,    10,
      11,     0,     0,     0,     0,     0,    12,     0,     0,     0,
       0,    13,     0,    14,     0,   445,    16,    17,     0,    32,
       0,     0,    20,    21,    22,    23,     0,    37,    25,    26,
      27,     0,    28,    29,    30,     0,    10,    11,     0,     0,
       0,     0,     0,    12,     0,     0,     0,     0,    13,     0,
      14,     0,   482,    16,    17,     0,    32,     0,     0,    20,
      21,    22,    23,     0,    37,    25,    26,    27,     0,    28,
      29,    30,    92,    93,    94,    95,     0,    96,    97,    98,
      99,   100,     0,     0,     0,     0,     0,     0,   101,    92,
      93,    94,    95,    32,    96,    97,    98,    99,   100,     0,
       0,    37,     0,     0,   102,   101,     0,     0,     0,     0,
       0,     0,     0,   103,   104,   105,   106,   107,   108,     0,
       0,   102,     0,     0,     0,     0,     0,   443,     0,     0,
     103,   104,   105,   106,   107,   108,     0,     0,     0,     0,
      92,    93,    94,    95,   480,    96,    97,    98,    99,   100,
       0,     0,     0,     0,     0,     0,   101,    92,    93,    94,
      95,     0,    96,    97,    98,    99,   100,     0,     0,     0,
       0,     0,   102,   101,     0,     0,     0,     0,     0,     0,
       0,   103,   104,   105,   106,   107,   108,     0,     0,   102,
       0,     0,     0,     0,     0,   501,     0,     0,   103,   104,
     105,   106,   107,   108,     0,     0,     0,     0,    92,    93,
      94,    95,   508,    96,    97,    98,    99,   100,     0,     0,
       0,     0,     0,     0,   101,    92,    93,    94,    95,     0,
      96,    97,    98,    99,   100,     0,     0,     0,     0,     0,
     102,   101,     0,     0,     0,     0,     0,     0,     0,   103,
     104,   105,   106,   107,   108,     0,     0,   102,     0,     0,
       0,     0,   304,     0,     0,     0,   103,   104,   105,   106,
     107,   108,     0,     0,     0,    92,    93,    94,    95,   381,
      96,    97,    98,    99,   100,     0,     0,     0,     0,     0,
       0,   101,    92,    93,    94,    95,     0,    96,    97,    98,
      99,   100,     0,     0,     0,     0,     0,   102,   101,     0,
       0,     0,     0,     0,     0,     0,   103,   104,   105,   106,
     107,   108,     0,     0,   102,     0,     0,     0,     0,   417,
       0,     0,     0,   103,   104,   105,   106,   107,   108,     0,
       0,     0,    92,    93,    94,    95,   466,    96,    97,    98,
      99,   100,     0,     0,     0,    65,     0,     0,   101,    92,
      93,    94,    95,     0,    96,    97,    98,    99,   100,     0,
       0,     0,     0,     0,   102,   101,     0,     0,     0,     0,
       0,     0,     0,   103,   104,   105,   106,   107,   108,     0,
       0,   102,     0,     0,     0,     0,   495,     0,     0,     0,
     103,   104,   105,   106,   107,   108,    92,    93,    94,    95,
       0,    96,    97,    98,    99,   100,     0,     0,     0,   110,
       0,     0,   101,    92,    93,    94,    95,     0,    96,    97,
      98,    99,   100,     0,     0,     0,   187,     0,   102,   101,
       0,     0,     0,     0,     0,     0,     0,   103,   104,   105,
     106,   107,   108,     0,     0,   102,     0,     0,     0,     0,
       0,     0,     0,     0,   103,   104,   105,   106,   107,   108,
      92,    93,    94,    95,     0,    96,    97,    98,    99,   100,
       0,     0,     0,   229,     0,     0,   101,    92,    93,    94,
      95,     0,    96,    97,    98,    99,   100,     0,     0,     0,
     237,     0,   102,   101,     0,     0,     0,     0,     0,     0,
       0,   103,   104,   105,   106,   107,   108,     0,     0,   102,
       0,     0,     0,     0,     0,     0,     0,     0,   103,   104,
     105,   106,   107,   108,    92,    93,    94,    95,     0,    96,
      97,    98,    99,   100,     0,     0,     0,   258,     0,     0,
     101,     0,     0,     0,    92,    93,    94,    95,     0,    96,
      97,    98,    99,   100,     0,     0,   102,     0,     0,     0,
     101,     0,     0,     0,     0,   103,   104,   105,   106,   107,
     108,   339,     0,     0,     0,     0,   102,     0,     0,     0,
       0,     0,     0,     0,     0,   103,   104,   105,   106,   107,
     108,    92,    93,    94,    95,     0,    96,    97,    98,    99,
     100,     0,     0,     0,   350,     0,     0,   101,    92,    93,
      94,    95,     0,    96,    97,    98,    99,   100,     0,     0,
       0,   425,     0,   102,   101,     0,     0,     0,     0,     0,
       0,     0,   103,   104,   105,   106,   107,   108,     0,     0,
     102,     0,     0,     0,     0,     0,     0,     0,     0,   103,
     104,   105,   106,   107,   108,    92,    93,    94,    95,     0,
      96,    97,    98,    99,   100,     0,     0,    92,    93,    94,
      95,   101,    96,    97,    98,    99,   100,     0,     0,     0,
       0,     0,     0,   101,     0,     0,     0,   102,     0,     0,
       0,     0,     0,     0,     0,     0,   103,   104,   105,   106,
     107,   108,     0,     0,     0,     0,     0,     0,   103,   104,
     105,   106,   107,   108,    92,    93,    94,    95,     0,    96,
      97,    98,    99,   100,     0,     0,    92,    93,    94,    95,
     101,    96,    97,    98,    99,   100,     0,     0,     0,    93,
      94,    95,   101,    96,    97,    98,    99,   100,     0,     0,
       0,     0,     0,     0,   101,   103,   104,     0,   106,   107,
     108,     0,     0,     0,     0,     0,     0,   103,   104,     0,
       0,   107,   108,     0,     0,     0,     0,     0,     0,   103,
     104,     0,     0,   107,   108
};

static const yytype_int16 yycheck[] =
{
       6,     6,   331,   160,    10,    11,    12,    43,   242,     3,
       0,     3,   327,     3,    44,     3,   160,     3,     6,     3,
       6,   217,   235,    20,     3,     0,     3,     6,    32,    33,
       3,    19,    20,    19,    20,    23,   365,    23,    35,     3,
      19,   406,     6,    19,    23,   117,     3,    35,     3,    35,
       6,     6,     6,    19,    90,    19,    35,    19,   130,    23,
       3,     3,     5,     3,    19,    35,    70,    71,    23,    75,
      19,    35,    78,    19,   218,   390,    37,   406,    20,    77,
      35,    43,    79,    77,    90,    90,    78,    79,   322,    79,
     303,    79,    40,    79,    34,    79,   461,    73,   294,    78,
      79,   245,    79,   260,   140,   262,    79,   251,    78,    79,
      66,    77,    66,    19,    78,    79,   122,     6,   190,    77,
     126,     3,    11,    78,    79,    86,    87,    88,    32,    33,
      78,    79,   461,   277,    19,    23,    40,   143,   144,   145,
     146,   147,   148,   149,   150,   151,    28,   291,   154,   155,
     156,   157,   158,   159,     6,    24,    43,    26,    43,    11,
      29,    30,    32,    33,    68,    77,    28,    19,    72,   175,
      74,   177,    12,    13,    43,    19,    45,    46,    47,    19,
      19,    43,    69,    64,    24,    28,    26,    28,    28,    29,
      30,   335,    35,   337,    35,    35,    36,    37,    38,     6,
      69,    41,    42,    43,    11,    45,    46,    47,    32,    33,
     354,     3,     5,   357,   358,    54,    55,    56,    57,    58,
      59,    60,     6,    63,   230,     5,   232,    20,    28,    69,
     426,   427,    28,     5,    32,    33,    19,    77,     9,    10,
      20,    12,    13,    14,    15,    16,    70,    71,    20,    19,
     256,   257,    23,   259,    72,   261,    20,   263,   402,   403,
     266,   457,   458,   269,   478,   479,     6,   273,   274,    19,
     276,    11,    28,   469,   470,    28,     6,    48,    49,    19,
       3,    52,    53,     6,   428,   429,    72,    78,    11,    19,
      28,   487,   488,    23,    28,    20,    19,    19,   304,    28,
      23,   307,    19,    78,    78,    78,    19,    11,    77,    66,
       5,   455,   456,    18,    19,    20,    21,    22,    23,    24,
      20,   326,    27,    14,    15,    16,    31,    32,    65,    28,
      35,    36,    23,    20,    28,    38,   342,    21,    20,   345,
       5,   347,   348,    19,    40,    28,    20,   353,    66,    65,
     356,    12,    13,    14,    15,    16,    65,    19,    11,    22,
      28,    28,    23,     5,    20,    43,    21,    21,    28,    19,
      11,   377,    11,   379,    19,   381,    73,    28,     6,    28,
       6,     6,    20,   389,    65,    28,     5,    92,    93,    94,
      95,    96,    97,    98,    99,   100,    28,   102,   103,   104,
     105,   106,   107,   108,   410,   435,   412,   112,   414,   114,
      11,    11,   418,   419,   119,   120,   121,   423,    22,   124,
     125,     6,   127,    22,     6,    11,   131,    11,   133,   134,
      28,    28,    66,    40,    65,     6,    11,   443,   444,    11,
       6,     6,     6,     6,     6,     6,   476,     6,    66,     7,
       8,     9,    10,   459,    12,    13,    14,    15,    16,     6,
      66,   467,   468,    84,   152,    23,   316,   219,    44,   499,
      -1,    -1,    -1,    -1,    -1,   481,    -1,    -1,    -1,    -1,
      -1,    39,    -1,   489,    -1,    -1,    -1,   493,    -1,    -1,
      48,    49,    50,    51,    52,    53,   502,   503,   504,    -1,
      -1,    -1,   207,   509,    62,     9,    10,    -1,    12,    13,
      14,    15,    16,    -1,    -1,   220,   221,    -1,    -1,    23,
     225,   226,   227,   228,   229,    -1,   231,    -1,    -1,   234,
     235,    -1,   237,   238,    -1,   240,   241,    -1,   243,    -1,
      -1,    -1,   247,    -1,    -1,    12,    13,   252,    52,    53,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    24,    -1,    26,
      -1,    28,    29,    30,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    -1,    -1,    41,    42,    43,    -1,    45,    46,
      47,    -1,    -1,    -1,   289,   290,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   299,    -1,    -1,   302,    -1,    -1,
     305,    -1,    69,    -1,   309,   310,   311,   312,   313,    76,
      77,    -1,    -1,   318,    -1,   320,   321,    -1,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    24,    -1,    26,   339,    28,    29,    30,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    -1,    -1,    41,    42,
      43,    -1,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   367,   368,   369,    -1,    -1,   372,    -1,   374,
      63,   376,    -1,   378,    -1,    -1,    69,    -1,    -1,   384,
      -1,   386,    -1,   388,    77,    -1,   391,    -1,   393,    -1,
      -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,   404,
      -1,    -1,    -1,    24,   409,    26,   411,    28,    29,    30,
      -1,    -1,   417,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    42,    43,    -1,    45,    46,    47,    -1,    -1,    -1,
      -1,   436,   437,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   448,     3,   450,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    12,    13,    -1,    77,   462,   463,    -1,
      19,   466,    -1,    -1,    -1,    24,    -1,    26,    -1,    28,
      29,    30,   477,    32,    33,   480,    35,    36,    37,    38,
      -1,    40,    41,    42,    43,    -1,    45,    46,    47,    -1,
     495,    -1,    -1,    -1,    -1,    -1,   501,    -1,    -1,    -1,
      -1,    -1,    -1,   508,    -1,    -1,    -1,    12,    13,    68,
      69,    70,    71,    72,    19,    74,    -1,    -1,    77,    24,
      79,    26,    -1,    28,    29,    30,    -1,    32,    33,    -1,
      35,    36,    37,    38,    -1,    40,    41,    42,    43,    -1,
      45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    12,    13,    68,    69,    70,    71,    72,    19,    74,
      -1,    -1,    77,    24,    -1,    26,    -1,    28,    29,    30,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    42,    43,    -1,    45,    46,    47,    -1,    12,    13,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      24,    -1,    26,    -1,    28,    29,    30,    -1,    69,    -1,
      -1,    35,    36,    37,    38,    -1,    77,    41,    42,    43,
      -1,    45,    46,    47,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    24,    -1,    26,
      -1,    28,    29,    30,    -1,    69,    -1,    -1,    35,    36,
      37,    38,    -1,    77,    41,    42,    43,    -1,    45,    46,
      47,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    24,    -1,    26,    -1,    28,    29,
      30,    -1,    69,    -1,    -1,    35,    36,    37,    38,    -1,
      77,    41,    42,    43,    -1,    45,    46,    47,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    24,    -1,    26,    -1,    28,    29,    30,    -1,    69,
      -1,    -1,    35,    36,    37,    38,    -1,    77,    41,    42,
      43,    -1,    45,    46,    47,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    24,    -1,
      26,    -1,    28,    29,    30,    -1,    69,    -1,    -1,    35,
      36,    37,    38,    -1,    77,    41,    42,    43,    -1,    45,
      46,    47,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,     7,
       8,     9,    10,    69,    12,    13,    14,    15,    16,    -1,
      -1,    77,    -1,    -1,    39,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      48,    49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,
       7,     8,     9,    10,    62,    12,    13,    14,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    23,     7,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    39,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    48,    49,
      50,    51,    52,    53,    -1,    -1,    -1,    -1,     7,     8,
       9,    10,    62,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    23,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      39,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    61,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,     7,     8,     9,    10,    61,
      12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    23,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    39,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    -1,    -1,    39,    -1,    -1,    -1,    -1,    61,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,     7,     8,     9,    10,    61,    12,    13,    14,
      15,    16,    -1,    -1,    -1,     3,    -1,    -1,    23,     7,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    39,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    -1,    -1,    -1,    20,
      -1,    -1,    23,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    -1,    -1,    -1,    20,    -1,    39,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
       7,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      -1,    -1,    -1,    20,    -1,    -1,    23,     7,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      20,    -1,    39,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    -1,    -1,    39,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    34,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,     7,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    -1,    -1,    -1,    20,    -1,    -1,    23,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    20,    -1,    39,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    -1,    -1,     7,     8,     9,
      10,    23,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    -1,    -1,     7,     8,     9,    10,
      23,    12,    13,    14,    15,    16,    -1,    -1,    -1,     8,
       9,    10,    23,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    48,    49,    -1,    51,    52,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      -1,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    52,    53
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    79,    81,    92,   124,   125,     0,     3,    79,
      12,    13,    19,    24,    26,    28,    29,    30,    32,    33,
      35,    36,    37,    38,    40,    41,    42,    43,    45,    46,
      47,    68,    69,    70,    71,    72,    74,    77,    82,    83,
      84,    85,    88,    89,    91,    93,    94,    95,    98,    99,
     100,   105,   106,   108,   109,   111,   113,   118,   119,   120,
     105,   105,    28,   105,   107,     3,    19,    23,   112,   121,
     122,   122,   122,   122,   122,   122,   122,   122,    19,    19,
     122,   122,   122,   122,   122,    92,    77,    77,    77,    93,
     124,   125,     7,     8,     9,    10,    12,    13,    14,    15,
      16,    23,    39,    48,    49,    50,    51,    52,    53,    11,
      20,     5,    20,   103,   104,   105,    64,    19,     3,     6,
      28,    28,    19,    19,    77,   105,    19,    72,   105,    20,
      19,    28,    28,    43,    28,    83,    78,    92,    92,    92,
      89,    93,   105,   122,   122,   122,   122,   122,   122,   122,
     122,   122,    28,   122,   122,   122,   122,   122,   122,   122,
      19,    54,    55,    56,    57,    58,    59,    60,   114,   115,
     117,    28,   122,    20,   122,    19,   103,   122,   122,   122,
     105,    28,    96,   122,   122,   105,   122,    20,   103,   122,
      19,   122,   122,    78,    78,    78,    93,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   112,    77,   105,   105,
     105,   105,   105,   105,   114,   116,   117,     6,    66,    11,
      66,     5,   105,    20,   105,     6,    11,     6,    11,    20,
      65,    20,    35,    79,    28,    97,    38,    20,    28,    20,
       6,    11,    19,   110,   103,    21,    19,    73,    90,   122,
      20,     5,    69,   106,   114,   115,   122,   122,    20,   122,
     122,   122,   122,   122,    28,   105,   122,   105,    28,    35,
     122,   121,   122,    19,   122,   122,   122,   122,    28,   107,
     122,    20,   114,    32,    33,    86,    87,    89,   122,    40,
     102,    66,   114,   122,     6,   105,   105,   105,    43,   117,
     105,    43,   117,   105,    61,    63,   105,    65,   105,    65,
      28,    35,    78,    79,   105,   105,    19,   105,   114,    20,
       6,    11,    19,    22,    28,    28,     5,    20,    32,    33,
      28,   122,   122,   114,   106,    21,   122,    21,   122,    34,
     121,   105,   122,    28,   105,   122,   122,   122,   122,   122,
      20,    87,   122,   122,   122,   107,    19,    11,    11,    32,
      33,    89,    90,    28,    28,    19,    76,   101,   104,    40,
      78,    79,   123,   114,     6,   114,     6,   122,    34,    62,
     105,    61,    28,   105,    65,   105,    63,   105,    28,    35,
      20,     6,   105,   114,    20,   105,   114,   114,    28,    28,
      32,    33,    11,    11,   104,   122,   122,    79,   122,    22,
     122,    22,   122,   105,   122,   105,   105,    61,   122,   122,
     122,   105,    90,   122,   122,    20,     6,     6,    11,    11,
      28,    28,   114,   114,    20,    66,   101,    40,   122,   105,
     122,   105,   105,    62,   122,    28,   105,   105,    65,   105,
       6,   106,   106,   114,   114,    11,    11,     6,     6,   125,
     122,   122,     6,     6,   105,   105,    61,   122,   122,     6,
       6,   114,   114,   106,   106,   105,    66,   101,   122,   122,
      62,   122,    28,   105,   105,   106,   106,     6,     6,   125,
     122,   118,   118,   122,   105,    61,   106,   106,   105,    66,
     105,    62,   122,   125,   122,   105,   105,   105,    62,   122,
     105
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    80,    81,    82,    82,    82,    83,    83,    83,    83,
      84,    85,    85,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    87,
      87,    88,    88,    89,    89,    90,    90,    91,    91,    91,
      91,    91,    91,    92,    92,    93,    93,    93,    93,    93,
      93,    93,    93,    94,    94,    94,    95,    95,    95,    95,
      96,    96,    96,    96,    96,    96,    96,    96,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    98,
      99,   100,   101,   101,   102,   102,   102,   103,   103,   104,
     104,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   106,   106,   106,   106,   106,   106,
     106,   106,   107,   107,   107,   107,   107,   108,   109,   109,
     109,   109,   110,   110,   111,   112,   112,   113,   113,   114,
     114,   114,   114,   114,   114,   114,   114,   115,   115,   116,
     116,   117,   118,   118,   119,   119,   120,   121,   121,   122,
     122,   123,   123,   124,   124,   124,   124,   125,   125
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
       1,     3,     4,     6,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     5,     5,     7,     0,     7,    13,    11,
       9,     7,     3,     5,     1,     3,     4,     2,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       3,     5,     1,     1,     5,     1,    10,     1,     2,     1,
       0,     1,     2,     1,     1,     2,     2,     1,     0
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
#line 134 "parser.y"
                            {(yyval.tree) = (yyvsp[0].tree); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2197 "parser.tab.cpp"
    break;

  case 3: /* class: class_header '{' statement_expr_list_e '}'  */
#line 141 "parser.y"
                                                 { (yyval.tree) = mk_class((yyvsp[-3].tree),(yyvsp[-1].tree)); }
#line 2203 "parser.tab.cpp"
    break;

  case 6: /* class_header: CLASS endlOpt IDENTIFIER endlOpt '(' class_params_e ')'  */
#line 149 "parser.y"
                                                              { (yyval.tree) = mk_class_header(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-1].tree)); }
#line 2209 "parser.tab.cpp"
    break;

  case 7: /* class_header: CLASS endlOpt IDENTIFIER endlOpt '(' class_params_e ')' inheritance  */
#line 150 "parser.y"
                                                                         { (yyval.tree) = mk_class_header_inheritance(mk_ident_lit((yyvsp[-5].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 2215 "parser.tab.cpp"
    break;

  case 8: /* class_header: CLASS endlOpt IDENTIFIER  */
#line 151 "parser.y"
                               { (yyval.tree) = mk_class_header_identifierOnly(mk_ident_lit((yyvsp[0].str_value))); }
#line 2221 "parser.tab.cpp"
    break;

  case 9: /* class_header: CLASS endlOpt IDENTIFIER endlOpt inheritance  */
#line 152 "parser.y"
                                                   { (yyval.tree) = mk_class_header_inheritance_identifier(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree)); }
#line 2227 "parser.tab.cpp"
    break;

  case 13: /* class_params: VAR IDENTIFIER ':' type  */
#line 167 "parser.y"
                              { (yyval.tree) = add_to_list(mk_list(),mk_class_params_var(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2233 "parser.tab.cpp"
    break;

  case 14: /* class_params: VAL IDENTIFIER ':' type  */
#line 168 "parser.y"
                              { (yyval.tree) = add_to_list(mk_list(),mk_class_params_val(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2239 "parser.tab.cpp"
    break;

  case 15: /* class_params: VAR IDENTIFIER ':' type '=' const  */
#line 169 "parser.y"
                                        { (yyval.tree) = add_to_list(mk_list(),mk_class_params_var_const(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2245 "parser.tab.cpp"
    break;

  case 16: /* class_params: VAL IDENTIFIER ':' type '=' const  */
#line 170 "parser.y"
                                        { (yyval.tree) = add_to_list(mk_list(),mk_class_params_val_const(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2251 "parser.tab.cpp"
    break;

  case 17: /* class_params: class_params ',' VAR IDENTIFIER ':' type  */
#line 171 "parser.y"
                                               { (yyval.tree) = add_to_list((yyvsp[-5].tree),mk_class_params_var(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2257 "parser.tab.cpp"
    break;

  case 18: /* class_params: class_params ',' VAL IDENTIFIER ':' type  */
#line 172 "parser.y"
                                               { (yyval.tree) = add_to_list((yyvsp[-5].tree),mk_class_params_var(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2263 "parser.tab.cpp"
    break;

  case 19: /* class_params: class_params ',' VAR IDENTIFIER ':' type '=' const  */
#line 173 "parser.y"
                                                         { (yyval.tree) = add_to_list((yyvsp[-7].tree),mk_class_params_var_const(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2269 "parser.tab.cpp"
    break;

  case 20: /* class_params: class_params ',' VAL IDENTIFIER ':' type '=' const  */
#line 174 "parser.y"
                                                         { (yyval.tree) = add_to_list((yyvsp[-7].tree),mk_class_params_val_const(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2275 "parser.tab.cpp"
    break;

  case 21: /* class_params: visibility_modifier VAR IDENTIFIER ':' type  */
#line 175 "parser.y"
                                                   { (yyval.tree) = add_to_list(mk_list(),mk_class_params_var_vis_mod((yyvsp[-4].tree),mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2281 "parser.tab.cpp"
    break;

  case 22: /* class_params: visibility_modifier VAL IDENTIFIER ':' type  */
#line 176 "parser.y"
                                                   { (yyval.tree) = add_to_list(mk_list(),mk_class_params_val_vis_mod((yyvsp[-4].tree),mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2287 "parser.tab.cpp"
    break;

  case 23: /* class_params: visibility_modifier VAR IDENTIFIER ':' type '=' const  */
#line 177 "parser.y"
                                                            { (yyval.tree) = add_to_list(mk_list(),mk_class_params_var_const_vis_mod((yyvsp[-6].tree),mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2293 "parser.tab.cpp"
    break;

  case 24: /* class_params: visibility_modifier VAL IDENTIFIER ':' type '=' const  */
#line 178 "parser.y"
                                                            { (yyval.tree) = add_to_list(mk_list(),mk_class_params_val_const_vis_mod((yyvsp[-6].tree),mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2299 "parser.tab.cpp"
    break;

  case 25: /* class_params: class_params ',' visibility_modifier VAR IDENTIFIER ':' type  */
#line 179 "parser.y"
                                                                   { (yyval.tree) = add_to_list((yyvsp[-6].tree),mk_class_params_var_vis_mod((yyvsp[-4].tree),mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2305 "parser.tab.cpp"
    break;

  case 26: /* class_params: class_params ',' visibility_modifier VAL IDENTIFIER ':' type  */
#line 180 "parser.y"
                                                                   { (yyval.tree) = add_to_list((yyvsp[-6].tree),mk_class_params_val_vis_mod((yyvsp[-4].tree),mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2311 "parser.tab.cpp"
    break;

  case 27: /* class_params: class_params ',' visibility_modifier VAR IDENTIFIER ':' type '=' const  */
#line 181 "parser.y"
                                                                             { (yyval.tree) = add_to_list((yyvsp[-8].tree),mk_class_params_var_const_vis_mod((yyvsp[-6].tree),mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2317 "parser.tab.cpp"
    break;

  case 28: /* class_params: class_params ',' visibility_modifier VAL IDENTIFIER ':' type '=' const  */
#line 182 "parser.y"
                                                                             { (yyval.tree) = add_to_list((yyvsp[-8].tree),mk_class_params_var_const_vis_mod((yyvsp[-6].tree),mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2323 "parser.tab.cpp"
    break;

  case 29: /* class_params_e: class_params  */
#line 186 "parser.y"
                   {(yyval.tree) = (yyvsp[0].tree);}
#line 2329 "parser.tab.cpp"
    break;

  case 30: /* class_params_e: %empty  */
#line 187 "parser.y"
                    { (yyval.tree) = mk_empty();}
#line 2335 "parser.tab.cpp"
    break;

  case 33: /* visibility_modifier: PRIVATE  */
#line 205 "parser.y"
               {(yyval.tree) = mk_visibility_modifier((char*)"private");}
#line 2341 "parser.tab.cpp"
    break;

  case 34: /* visibility_modifier: PROTECTED  */
#line 206 "parser.y"
                {(yyval.tree) = mk_visibility_modifier((char*)"protected");}
#line 2347 "parser.tab.cpp"
    break;

  case 35: /* inheritance: EXTENDS endlOpt IDENTIFIER  */
#line 214 "parser.y"
                                 { (yyval.tree) = mk_inheritance(mk_ident_lit((yyvsp[0].str_value)));}
#line 2353 "parser.tab.cpp"
    break;

  case 36: /* inheritance: EXTENDS endlOpt IDENTIFIER '(' expr_list ')'  */
#line 215 "parser.y"
                                                 { (yyval.tree) = mk_inheritance_expr(mk_ident_lit((yyvsp[-3].str_value)),(yyvsp[-1].tree));}
#line 2359 "parser.tab.cpp"
    break;

  case 37: /* statement_expr_list: statement  */
#line 223 "parser.y"
                { (yyval.tree) = add_to_list(mk_list(),(yyvsp[0].tree));}
#line 2365 "parser.tab.cpp"
    break;

  case 38: /* statement_expr_list: visibility_modifier statement  */
#line 224 "parser.y"
                                   { (yyval.tree) = add_to_list(mk_list(), mk_visibility_modifier_stmt((yyvsp[-1].tree), (yyvsp[0].tree)));}
#line 2371 "parser.tab.cpp"
    break;

  case 39: /* statement_expr_list: expr  */
#line 225 "parser.y"
           { (yyval.tree) = add_to_list(mk_list(),(yyvsp[0].tree));}
#line 2377 "parser.tab.cpp"
    break;

  case 40: /* statement_expr_list: statement_expr_list separator_List statement  */
#line 226 "parser.y"
                                                    {  (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 2383 "parser.tab.cpp"
    break;

  case 41: /* statement_expr_list: statement_expr_list separator_List expr  */
#line 227 "parser.y"
                                               {   (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree));  }
#line 2389 "parser.tab.cpp"
    break;

  case 42: /* statement_expr_list: statement_expr_list separator_List visibility_modifier statement  */
#line 228 "parser.y"
                                                                        { (yyval.tree) = add_to_list((yyvsp[-3].tree), mk_visibility_modifier_stmt((yyvsp[-1].tree), (yyvsp[0].tree))); }
#line 2395 "parser.tab.cpp"
    break;

  case 43: /* statement_expr_list_e: separator_List_e statement_expr_list separator_List_e  */
#line 232 "parser.y"
                                                            {(yyval.tree) = mk_stmt_expr_list((yyvsp[-1].tree));}
#line 2401 "parser.tab.cpp"
    break;

  case 44: /* statement_expr_list_e: %empty  */
#line 233 "parser.y"
                     { (yyval.tree) = mk_empty();}
#line 2407 "parser.tab.cpp"
    break;

  case 45: /* statement: VAL endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 237 "parser.y"
                                                       {(yyval.tree) = mk_declaration_val(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[0].tree));}
#line 2413 "parser.tab.cpp"
    break;

  case 46: /* statement: VAR endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 238 "parser.y"
                                                       {(yyval.tree) = mk_declaration_var(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[0].tree));}
#line 2419 "parser.tab.cpp"
    break;

  case 47: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 239 "parser.y"
                                                                                           {(yyval.tree) = mk_declaration_val_type(mk_ident_lit((yyvsp[-8].str_value)),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2425 "parser.tab.cpp"
    break;

  case 48: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 240 "parser.y"
                                                                                           {(yyval.tree) = mk_declaration_var_type(mk_ident_lit((yyvsp[-8].str_value)),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2431 "parser.tab.cpp"
    break;

  case 49: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt ARRAY '[' type ']' endlOpt '=' endlOpt array  */
#line 241 "parser.y"
                                                                                              {(yyval.tree) = mk_declaration_var_array(mk_ident_lit((yyvsp[-11].str_value)),(yyvsp[-5].tree),(yyvsp[0].tree));}
#line 2437 "parser.tab.cpp"
    break;

  case 50: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt ARRAY '[' type ']' endlOpt '=' endlOpt array  */
#line 242 "parser.y"
                                                                                              {(yyval.tree) = mk_declaration_val_array(mk_ident_lit((yyvsp[-11].str_value)),(yyvsp[-5].tree),(yyvsp[0].tree));}
#line 2443 "parser.tab.cpp"
    break;

  case 51: /* statement: class  */
#line 243 "parser.y"
            { printf("Class:\n"); }
#line 2449 "parser.tab.cpp"
    break;

  case 52: /* statement: method  */
#line 244 "parser.y"
             {(yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); }
#line 2455 "parser.tab.cpp"
    break;

  case 53: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr ELSE endlOpt expr  */
#line 254 "parser.y"
                                                                           { (yyval.tree) = mk_if_else_expr((yyvsp[-6].tree), (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2461 "parser.tab.cpp"
    break;

  case 54: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr endlList ELSE endlOpt expr  */
#line 255 "parser.y"
                                                                                    { (yyval.tree) = mk_if_else_expr((yyvsp[-7].tree), (yyvsp[-4].tree), (yyvsp[0].tree)); }
#line 2467 "parser.tab.cpp"
    break;

  case 55: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr  */
#line 256 "parser.y"
                                                      { (yyval.tree) = mk_if_expr((yyvsp[-3].tree), (yyvsp[0].tree));}
#line 2473 "parser.tab.cpp"
    break;

  case 56: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt YIELD endlOpt expr  */
#line 264 "parser.y"
                                                                                                              { (yyval.tree) = mk_for_expr((yyvsp[-5].tree), (yyvsp[0].tree));  }
#line 2479 "parser.tab.cpp"
    break;

  case 57: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt expr  */
#line 265 "parser.y"
                                                                                                 { (yyval.tree) = mk_for_expr((yyvsp[-3].tree), (yyvsp[0].tree));  }
#line 2485 "parser.tab.cpp"
    break;

  case 58: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt YIELD endlOpt expr  */
#line 266 "parser.y"
                                                                                                                                { (yyval.tree) = mk_for_expr((yyvsp[-6].tree), (yyvsp[0].tree));  }
#line 2491 "parser.tab.cpp"
    break;

  case 59: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt expr  */
#line 267 "parser.y"
                                                                                                                  { (yyval.tree) = mk_for_expr((yyvsp[-4].tree), (yyvsp[0].tree));  }
#line 2497 "parser.tab.cpp"
    break;

  case 60: /* generators_and_conditions_parentheses_List: IDENTIFIER GENERATOR_OPERATOR expr TO expr  */
#line 272 "parser.y"
                                                      {(yyval.tree) = add_to_list(mk_list(),  mk_generator_without_by(mk_ident_lit((yyvsp[-4].str_value)), (yyvsp[-2].tree), (yyvsp[0].tree))); }
#line 2503 "parser.tab.cpp"
    break;

  case 61: /* generators_and_conditions_parentheses_List: IDENTIFIER GENERATOR_OPERATOR expr TO expr BY expr  */
#line 273 "parser.y"
                                                             {(yyval.tree) = add_to_list(mk_list(),  mk_generator_with_by(mk_ident_lit((yyvsp[-6].str_value)), (yyvsp[-4].tree), (yyvsp[-2].tree), (yyvsp[0].tree))); }
#line 2509 "parser.tab.cpp"
    break;

  case 62: /* generators_and_conditions_parentheses_List: IDENTIFIER GENERATOR_OPERATOR IDENTIFIER  */
#line 274 "parser.y"
                                                   {(yyval.tree) = add_to_list(mk_list(), mk_generator_without_to_and_by(mk_ident_lit((yyvsp[-2].str_value)),mk_ident_lit((yyvsp[0].str_value)))); }
#line 2515 "parser.tab.cpp"
    break;

  case 63: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List IF expr  */
#line 275 "parser.y"
                                                             { (yyval.tree) = add_to_list((yyvsp[-2].tree), mk_if_cond((yyvsp[0].tree))); }
#line 2521 "parser.tab.cpp"
    break;

  case 64: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List ';' IF expr  */
#line 276 "parser.y"
                                                                 { (yyval.tree) = add_to_list((yyvsp[-3].tree), mk_if_cond((yyvsp[0].tree))); }
#line 2527 "parser.tab.cpp"
    break;

  case 65: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List ';' IDENTIFIER GENERATOR_OPERATOR expr TO expr  */
#line 277 "parser.y"
                                                                                                    { (yyval.tree) = add_to_list((yyvsp[-6].tree), mk_generator_without_by(mk_ident_lit((yyvsp[-4].str_value)), (yyvsp[-2].tree), (yyvsp[0].tree)));}
#line 2533 "parser.tab.cpp"
    break;

  case 66: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List ';' IDENTIFIER GENERATOR_OPERATOR expr TO expr BY expr  */
#line 278 "parser.y"
                                                                                                            { (yyval.tree) = add_to_list((yyvsp[-8].tree), mk_generator_with_by(mk_ident_lit((yyvsp[-6].str_value)), (yyvsp[-4].tree), (yyvsp[-2].tree), (yyvsp[0].tree)));}
#line 2539 "parser.tab.cpp"
    break;

  case 67: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List ';' IDENTIFIER GENERATOR_OPERATOR IDENTIFIER  */
#line 279 "parser.y"
                                                                                                  { (yyval.tree) = add_to_list((yyvsp[-4].tree), mk_generator_without_to_and_by(mk_ident_lit((yyvsp[-2].str_value)), mk_ident_lit((yyvsp[0].str_value)))); }
#line 2545 "parser.tab.cpp"
    break;

  case 68: /* generators_and_conditions_curly_braces_List: IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt expr TO endlOpt expr  */
#line 283 "parser.y"
                                                                              {(yyval.tree) = add_to_list(mk_list(),  mk_generator_without_by(mk_ident_lit((yyvsp[-7].str_value)), (yyvsp[-3].tree), (yyvsp[0].tree))); }
#line 2551 "parser.tab.cpp"
    break;

  case 69: /* generators_and_conditions_curly_braces_List: IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt expr TO endlOpt expr BY endlOpt expr  */
#line 284 "parser.y"
                                                                                              {(yyval.tree) = add_to_list(mk_list(),  mk_generator_with_by(mk_ident_lit((yyvsp[-10].str_value)), (yyvsp[-6].tree), (yyvsp[-3].tree), (yyvsp[0].tree)));}
#line 2557 "parser.tab.cpp"
    break;

  case 70: /* generators_and_conditions_curly_braces_List: IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt IDENTIFIER  */
#line 285 "parser.y"
                                                                              {(yyval.tree) = add_to_list(mk_list(), mk_generator_without_to_and_by(mk_ident_lit((yyvsp[-4].str_value)),mk_ident_lit((yyvsp[0].str_value)))); }
#line 2563 "parser.tab.cpp"
    break;

  case 71: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlOpt IF endlOpt expr  */
#line 286 "parser.y"
                                                                              { (yyval.tree) = add_to_list((yyvsp[-4].tree), mk_if_cond((yyvsp[0].tree)));}
#line 2569 "parser.tab.cpp"
    break;

  case 72: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlOpt ';' endlOpt IF expr  */
#line 287 "parser.y"
                                                                                   { (yyval.tree) = add_to_list((yyvsp[-5].tree), mk_if_cond((yyvsp[0].tree))); }
#line 2575 "parser.tab.cpp"
    break;

  case 73: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlOpt ';' endlOpt IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt expr TO endlOpt expr  */
#line 288 "parser.y"
                                                                                                                                              { (yyval.tree) = add_to_list((yyvsp[-11].tree), mk_generator_without_by(mk_ident_lit((yyvsp[-7].str_value)), (yyvsp[-3].tree), (yyvsp[0].tree))); }
#line 2581 "parser.tab.cpp"
    break;

  case 74: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlOpt ';' endlOpt IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt expr TO endlOpt expr BY endlOpt expr  */
#line 289 "parser.y"
                                                                                                                                                              { (yyval.tree) = add_to_list((yyvsp[-14].tree), mk_generator_with_by(mk_ident_lit((yyvsp[-10].str_value)), (yyvsp[-6].tree), (yyvsp[-3].tree), (yyvsp[0].tree))); }
#line 2587 "parser.tab.cpp"
    break;

  case 75: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlOpt ';' endlOpt IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt IDENTIFIER  */
#line 290 "parser.y"
                                                                                                                                              { (yyval.tree) = add_to_list((yyvsp[-8].tree), mk_generator_without_to_and_by(mk_ident_lit((yyvsp[-4].str_value)), mk_ident_lit((yyvsp[0].str_value))));}
#line 2593 "parser.tab.cpp"
    break;

  case 76: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlList IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt expr TO endlOpt expr  */
#line 291 "parser.y"
                                                                                                                                   {(yyval.tree) = add_to_list((yyvsp[-9].tree),  mk_generator_without_by(mk_ident_lit((yyvsp[-7].str_value)), (yyvsp[-3].tree), (yyvsp[0].tree)));}
#line 2599 "parser.tab.cpp"
    break;

  case 77: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlList IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt expr TO endlOpt expr BY endlOpt expr  */
#line 292 "parser.y"
                                                                                                                                                   {(yyval.tree) = add_to_list((yyvsp[-12].tree),  mk_generator_with_by(mk_ident_lit((yyvsp[-10].str_value)), (yyvsp[-6].tree), (yyvsp[-3].tree), (yyvsp[0].tree))); }
#line 2605 "parser.tab.cpp"
    break;

  case 78: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlList IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt IDENTIFIER  */
#line 293 "parser.y"
                                                                                                                                   {(yyval.tree) = add_to_list((yyvsp[-6].tree), mk_generator_without_to_and_by(mk_ident_lit((yyvsp[-4].str_value)),mk_ident_lit((yyvsp[0].str_value)))); }
#line 2611 "parser.tab.cpp"
    break;

  case 79: /* while_expr: WHILE endlOpt '(' expr ')' endlOpt expr  */
#line 299 "parser.y"
                                                              { (yyval.tree) = mk_while_expr((yyvsp[-3].tree),(yyvsp[0].tree)); }
#line 2617 "parser.tab.cpp"
    break;

  case 80: /* do_while_expr: DO endlOpt expr endlOpt WHILE '(' expr ')'  */
#line 303 "parser.y"
                                                                 { (yyval.tree) = mk_do_while_expr((yyvsp[-5].tree),(yyvsp[-1].tree)); }
#line 2623 "parser.tab.cpp"
    break;

  case 81: /* match_expr: expr MATCH endlOpt '{' endlOpt case_list endlOpt '}'  */
#line 309 "parser.y"
                                                              {(yyval.tree) = mk_match_expr((yyvsp[-7].tree),(yyvsp[-2].tree));}
#line 2629 "parser.tab.cpp"
    break;

  case 82: /* case_condition: expr_list  */
#line 314 "parser.y"
                                          {(yyval.tree) = add_case_condition((yyvsp[0].tree));}
#line 2635 "parser.tab.cpp"
    break;

  case 83: /* case_condition: CASE_PATTERN  */
#line 315 "parser.y"
                       {(yyval.tree) = add_case_condition((yyvsp[0].tree));}
#line 2641 "parser.tab.cpp"
    break;

  case 84: /* case_list: CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 321 "parser.y"
                                                                                         {(yyval.tree) = mk_list();(yyval.tree) = add_alt_case((yyval.tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2647 "parser.tab.cpp"
    break;

  case 85: /* case_list: case_list endlOpt semicolonList endlOpt CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 322 "parser.y"
                                                                                                                                 {(yyval.tree) = add_alt_case((yyvsp[-10].tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2653 "parser.tab.cpp"
    break;

  case 86: /* case_list: case_list endlOpt CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 323 "parser.y"
                                                                                                           {(yyval.tree) = add_alt_case((yyvsp[-8].tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2659 "parser.tab.cpp"
    break;

  case 87: /* expr_list_e: expr_list  */
#line 333 "parser.y"
                   { (yyval.tree) = (yyvsp[0].tree); }
#line 2665 "parser.tab.cpp"
    break;

  case 88: /* expr_list_e: %empty  */
#line 334 "parser.y"
                     {  (yyval.tree) = mk_list();}
#line 2671 "parser.tab.cpp"
    break;

  case 89: /* expr_list: expr  */
#line 339 "parser.y"
                      { (yyval.tree) = add_to_list(mk_list(), (yyvsp[0].tree));}
#line 2677 "parser.tab.cpp"
    break;

  case 90: /* expr_list: expr_list endlOpt ',' endlOpt expr  */
#line 340 "parser.y"
                                          { (yyval.tree) = add_to_list((yyvsp[-4].tree), (yyvsp[0].tree)); }
#line 2683 "parser.tab.cpp"
    break;

  case 91: /* expr: const  */
#line 345 "parser.y"
             { (yyval.tree) = (yyvsp[0].tree); }
#line 2689 "parser.tab.cpp"
    break;

  case 92: /* expr: IDENTIFIER  */
#line 346 "parser.y"
                                       {(yyval.tree) = mk_ident_lit((yyvsp[0].str_value)); }
#line 2695 "parser.tab.cpp"
    break;

  case 93: /* expr: IDENTIFIER endlOpt '=' endlOpt expr  */
#line 347 "parser.y"
                                           { printf("Assignment:\n"); }
#line 2701 "parser.tab.cpp"
    break;

  case 94: /* expr: '(' expr ')'  */
#line 348 "parser.y"
                   { printf("PARSER found expr - ( expr ) \n"); }
#line 2707 "parser.tab.cpp"
    break;

  case 95: /* expr: expr '>' endlOpt expr  */
#line 349 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) ">", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2713 "parser.tab.cpp"
    break;

  case 96: /* expr: expr '<' endlOpt expr  */
#line 350 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "<", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2719 "parser.tab.cpp"
    break;

  case 97: /* expr: expr MORE_OR_EQUAL_OPERATOR endlOpt expr  */
#line 351 "parser.y"
                                               { (yyval.tree) = mk_bin_op((char*) ">=", (yyvsp[-3].tree), (yyvsp[0].tree));  }
#line 2725 "parser.tab.cpp"
    break;

  case 98: /* expr: expr LESS_OR_EQUAL_OPERATOR endlOpt expr  */
#line 352 "parser.y"
                                               { (yyval.tree) = mk_bin_op((char*) "<=", (yyvsp[-3].tree), (yyvsp[0].tree));  }
#line 2731 "parser.tab.cpp"
    break;

  case 99: /* expr: expr EQ endlOpt expr  */
#line 353 "parser.y"
                           { (yyval.tree) = mk_bin_op((char*) "==", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2737 "parser.tab.cpp"
    break;

  case 100: /* expr: expr NEQ endlOpt expr  */
#line 354 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "!=", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2743 "parser.tab.cpp"
    break;

  case 101: /* expr: expr '+' endlOpt expr  */
#line 355 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "+", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2749 "parser.tab.cpp"
    break;

  case 102: /* expr: expr '-' endlOpt expr  */
#line 356 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "-", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2755 "parser.tab.cpp"
    break;

  case 103: /* expr: expr '/' endlOpt expr  */
#line 357 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "/", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2761 "parser.tab.cpp"
    break;

  case 104: /* expr: expr '*' endlOpt expr  */
#line 358 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "*", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2767 "parser.tab.cpp"
    break;

  case 105: /* expr: expr '%' endlOpt expr  */
#line 359 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "%", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2773 "parser.tab.cpp"
    break;

  case 106: /* expr: expr '&' endlOpt expr  */
#line 360 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "&", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2779 "parser.tab.cpp"
    break;

  case 107: /* expr: expr '|' endlOpt expr  */
#line 361 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "|", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2785 "parser.tab.cpp"
    break;

  case 108: /* expr: expr KW_OR endlOpt expr  */
#line 362 "parser.y"
                              { (yyval.tree) = mk_bin_op((char*) "||", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2791 "parser.tab.cpp"
    break;

  case 109: /* expr: expr KW_AND endlOpt expr  */
#line 363 "parser.y"
                               { (yyval.tree) = mk_bin_op((char*) "&&", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2797 "parser.tab.cpp"
    break;

  case 110: /* expr: '-' expr  */
#line 364 "parser.y"
                             { (yyval.tree) = mk_unary_op("unary_minus_op", (yyvsp[0].tree)); }
#line 2803 "parser.tab.cpp"
    break;

  case 111: /* expr: '+' expr  */
#line 365 "parser.y"
                            { (yyval.tree) = mk_unary_op("unary_plus_op", (yyvsp[0].tree)); }
#line 2809 "parser.tab.cpp"
    break;

  case 112: /* expr: if_else_expr  */
#line 366 "parser.y"
                   {(yyval.tree)=(yyvsp[0].tree);}
#line 2815 "parser.tab.cpp"
    break;

  case 113: /* expr: for_expr  */
#line 367 "parser.y"
               { (yyval.tree) = (yyvsp[0].tree); }
#line 2821 "parser.tab.cpp"
    break;

  case 114: /* expr: while_expr  */
#line 368 "parser.y"
                 {(yyval.tree)=(yyvsp[0].tree);}
#line 2827 "parser.tab.cpp"
    break;

  case 115: /* expr: do_while_expr  */
#line 369 "parser.y"
                    {(yyval.tree)=(yyvsp[0].tree);}
#line 2833 "parser.tab.cpp"
    break;

  case 116: /* expr: match_expr  */
#line 370 "parser.y"
                 {(yyval.tree)=(yyvsp[0].tree);}
#line 2839 "parser.tab.cpp"
    break;

  case 117: /* expr: '{' statement_expr_list_e '}'  */
#line 371 "parser.y"
                                    { (yyval.tree) = (yyvsp[-1].tree); }
#line 2845 "parser.tab.cpp"
    break;

  case 118: /* expr: anonymous_func  */
#line 372 "parser.y"
                     { (yyval.tree)=(yyvsp[0].tree); }
#line 2851 "parser.tab.cpp"
    break;

  case 119: /* expr: method_call  */
#line 373 "parser.y"
                  { (yyval.tree)=(yyvsp[0].tree); }
#line 2857 "parser.tab.cpp"
    break;

  case 120: /* expr: create_instance_class  */
#line 374 "parser.y"
                            { (yyval.tree) = (yyvsp[0].tree); }
#line 2863 "parser.tab.cpp"
    break;

  case 121: /* expr: READLINE '(' ')'  */
#line 375 "parser.y"
                     { printf("readLine:\n"); }
#line 2869 "parser.tab.cpp"
    break;

  case 122: /* expr: PRINTLN '(' expr ')'  */
#line 376 "parser.y"
                          { printf("print:\n"); }
#line 2875 "parser.tab.cpp"
    break;

  case 123: /* expr: IDENTIFIER '.' APPLY '(' expr ')'  */
#line 377 "parser.y"
                                        { (yyval.tree) = mk_array_call(mk_ident_lit((yyvsp[-5].str_value)),(yyvsp[-1].tree)); }
#line 2881 "parser.tab.cpp"
    break;

  case 124: /* const: NUM_10  */
#line 384 "parser.y"
             { (yyval.tree) = mk_int_const((yyvsp[0].int_value)); }
#line 2887 "parser.tab.cpp"
    break;

  case 125: /* const: TOKEN_STRING  */
#line 385 "parser.y"
                   { (yyval.tree) = mk_string_const((yyvsp[0].str_value)); }
#line 2893 "parser.tab.cpp"
    break;

  case 126: /* const: TOKEN_CHAR  */
#line 386 "parser.y"
                 { (yyval.tree) = mk_char_const((yyvsp[0].str_value)); }
#line 2899 "parser.tab.cpp"
    break;

  case 127: /* const: KW_TRUE  */
#line 387 "parser.y"
              { (yyval.tree) = mk_boolean_const(true); }
#line 2905 "parser.tab.cpp"
    break;

  case 128: /* const: KW_FALSE  */
#line 388 "parser.y"
               { (yyval.tree) = mk_boolean_const(false); }
#line 2911 "parser.tab.cpp"
    break;

  case 129: /* const: KW_NULL  */
#line 389 "parser.y"
              { (yyval.tree) = mk_null_const(); }
#line 2917 "parser.tab.cpp"
    break;

  case 130: /* const: REAL_NUMBER  */
#line 390 "parser.y"
                  { (yyval.tree) = mk_real_const((yyvsp[0].real_value)); }
#line 2923 "parser.tab.cpp"
    break;

  case 131: /* const: array  */
#line 391 "parser.y"
            { (yyval.tree) = mk_array_const((yyvsp[0].tree)); }
#line 2929 "parser.tab.cpp"
    break;

  case 132: /* params: IDENTIFIER ':' type_list_car  */
#line 397 "parser.y"
                                    {  (yyval.tree) = add_to_list(mk_list(), mk_method_params(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree)));  }
#line 2935 "parser.tab.cpp"
    break;

  case 133: /* params: IDENTIFIER ':' type_list_car '=' const  */
#line 398 "parser.y"
                                              {  (yyval.tree) = add_to_list(mk_list(), mk_method_params_value(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2941 "parser.tab.cpp"
    break;

  case 134: /* params: params ',' IDENTIFIER ':' type_list_car  */
#line 399 "parser.y"
                                               {  (yyval.tree) = add_to_list((yyvsp[-4].tree), mk_method_params(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2947 "parser.tab.cpp"
    break;

  case 135: /* params: params ',' IDENTIFIER ':' type_list_car '=' const  */
#line 400 "parser.y"
                                                         {  (yyval.tree) = add_to_list((yyvsp[-6].tree), mk_method_params_value(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2953 "parser.tab.cpp"
    break;

  case 137: /* anonymous_func: '(' params ')' endlOpt RIGHT_ARROW_OPERATOR endlOpt expr  */
#line 406 "parser.y"
                                                                                   { (yyval.tree) = mk_anonym_func((yyvsp[-5].tree),(yyvsp[0].tree));}
#line 2959 "parser.tab.cpp"
    break;

  case 138: /* func: DEF endlOpt IDENTIFIER endlOpt method_params_list endlOpt ':' endlOpt type endlOpt '=' endlOpt expr  */
#line 410 "parser.y"
                                                                                                          { (yyval.tree) = mk_method_declaration(mk_ident_lit((yyvsp[-10].str_value)),(yyvsp[-8].tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2965 "parser.tab.cpp"
    break;

  case 139: /* func: DEF endlOpt IDENTIFIER endlOpt ':' endlOpt type endlOpt '=' endlOpt expr  */
#line 411 "parser.y"
                                                                               { (yyval.tree) = mk_method_declaration_typeOnly(mk_ident_lit((yyvsp[-8].str_value)),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2971 "parser.tab.cpp"
    break;

  case 140: /* func: DEF endlOpt IDENTIFIER endlOpt method_params_list endlOpt '=' endlOpt expr  */
#line 412 "parser.y"
                                                                                 { (yyval.tree) = mk_method_declaration_paramsOnly(mk_ident_lit((yyvsp[-6].str_value)),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2977 "parser.tab.cpp"
    break;

  case 141: /* func: DEF endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 413 "parser.y"
                                                      { (yyval.tree) = mk_method_declaration_bodyOnly(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[0].tree));}
#line 2983 "parser.tab.cpp"
    break;

  case 142: /* method_params_list: '(' params ')'  */
#line 417 "parser.y"
                   { (yyval.tree) = (yyvsp[-1].tree); }
#line 2989 "parser.tab.cpp"
    break;

  case 143: /* method_params_list: method_params_list endlOpt '(' params ')'  */
#line 418 "parser.y"
                                              { (yyval.tree) = mk_list(); (yyval.tree) = add_to_list((yyvsp[-4].tree),(yyvsp[-1].tree));}
#line 2995 "parser.tab.cpp"
    break;

  case 144: /* method: func  */
#line 422 "parser.y"
           { (yyval.tree) = (yyvsp[0].tree); }
#line 3001 "parser.tab.cpp"
    break;

  case 145: /* method_arguments_list: '(' expr_list_e ')'  */
#line 426 "parser.y"
                        {(yyval.tree) = (yyvsp[-1].tree);}
#line 3007 "parser.tab.cpp"
    break;

  case 146: /* method_arguments_list: method_arguments_list '(' expr_list_e ')'  */
#line 427 "parser.y"
                                              {(yyval.tree) = mk_list(); add_to_list((yyvsp[-3].tree),mk_method_arguments_list((yyvsp[-1].tree)));}
#line 3013 "parser.tab.cpp"
    break;

  case 147: /* method_call: IDENTIFIER method_arguments_list  */
#line 431 "parser.y"
                                       { (yyval.tree) = mk_method_call(mk_ident_lit((yyvsp[-1].str_value)),(yyvsp[0].tree));}
#line 3019 "parser.tab.cpp"
    break;

  case 148: /* method_call: expr '.' IDENTIFIER method_arguments_list  */
#line 432 "parser.y"
                                                { (yyval.tree) = mk_method_call_identifier((yyvsp[-3].tree),mk_ident_lit((yyvsp[-1].str_value)),(yyvsp[0].tree));}
#line 3025 "parser.tab.cpp"
    break;

  case 149: /* type: INT_KW  */
#line 438 "parser.y"
             { (yyval.tree) = mk_integer_type(); }
#line 3031 "parser.tab.cpp"
    break;

  case 150: /* type: DOUBLE_KW  */
#line 439 "parser.y"
                { (yyval.tree) = mk_real_type(); }
#line 3037 "parser.tab.cpp"
    break;

  case 151: /* type: STRING_KW  */
#line 440 "parser.y"
                { (yyval.tree) = mk_string_type(); }
#line 3043 "parser.tab.cpp"
    break;

  case 152: /* type: CHAR_KW  */
#line 441 "parser.y"
              { (yyval.tree) = mk_char_type(); }
#line 3049 "parser.tab.cpp"
    break;

  case 153: /* type: BOOLEAN_KW  */
#line 442 "parser.y"
                 { (yyval.tree) = mk_boolean_type(); }
#line 3055 "parser.tab.cpp"
    break;

  case 154: /* type: ANY_KW  */
#line 443 "parser.y"
             { (yyval.tree) = mk_any_type(); }
#line 3061 "parser.tab.cpp"
    break;

  case 155: /* type: UNIT_KW  */
#line 444 "parser.y"
              { (yyval.tree) = mk_unit_type(); }
#line 3067 "parser.tab.cpp"
    break;

  case 156: /* type: type_list_simple  */
#line 445 "parser.y"
                       { (yyval.tree) = (yyvsp[0].tree);}
#line 3073 "parser.tab.cpp"
    break;

  case 157: /* type_list_car: type  */
#line 449 "parser.y"
           { (yyval.tree) = mk_list(); (yyval.tree) = add_to_list((yyval.tree), (yyvsp[0].tree));  }
#line 3079 "parser.tab.cpp"
    break;

  case 158: /* type_list_car: type_list_car RIGHT_ARROW_OPERATOR type  */
#line 450 "parser.y"
                                              { (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 3085 "parser.tab.cpp"
    break;

  case 159: /* type_list: type  */
#line 454 "parser.y"
           { (yyval.tree) = mk_list(); (yyval.tree) = add_to_list((yyval.tree), (yyvsp[0].tree)); }
#line 3091 "parser.tab.cpp"
    break;

  case 160: /* type_list: type_list_simple ',' type  */
#line 455 "parser.y"
                                { (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 3097 "parser.tab.cpp"
    break;

  case 161: /* type_list_simple: '(' type_list ')' RIGHT_ARROW_OPERATOR type  */
#line 459 "parser.y"
                                                 { (yyval.tree) = add_to_list((yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 3103 "parser.tab.cpp"
    break;

  case 162: /* array: array_literal  */
#line 470 "parser.y"
                     {(yyval.tree) = (yyvsp[0].tree); }
#line 3109 "parser.tab.cpp"
    break;

  case 163: /* array: initialized_array  */
#line 471 "parser.y"
                         {(yyval.tree) = mk_initialized_array((yyvsp[0].tree));}
#line 3115 "parser.tab.cpp"
    break;

  case 164: /* array_literal: ARRAY endlOpt '(' expr_list_e ')'  */
#line 475 "parser.y"
                                        {  (yyval.tree) = mk_array_literal((yyvsp[-1].tree)); }
#line 3121 "parser.tab.cpp"
    break;

  case 165: /* array_literal: ARRAY  */
#line 476 "parser.y"
                                   { (yyval.tree) = mk_empty_array(); }
#line 3127 "parser.tab.cpp"
    break;

  case 166: /* initialized_array: NEW endlOpt ARRAY endlOpt '[' type ']' '(' expr ')'  */
#line 480 "parser.y"
                                                           { (yyval.tree) = mk_initialized_array_with_type_and_expr((yyvsp[-4].tree), (yyvsp[-1].tree));}
#line 3133 "parser.tab.cpp"
    break;

  case 167: /* endlList: ENDL  */
#line 489 "parser.y"
                    { printf("PARSER found ENDL\n"); }
#line 3139 "parser.tab.cpp"
    break;

  case 168: /* endlList: endlList ENDL  */
#line 490 "parser.y"
                    { printf("PARSER found endlList\n"); }
#line 3145 "parser.tab.cpp"
    break;

  case 169: /* endlOpt: endlList  */
#line 495 "parser.y"
               { printf("PARSER found endlOpt\n"); }
#line 3151 "parser.tab.cpp"
    break;

  case 171: /* semicolonList: ';'  */
#line 501 "parser.y"
                   { printf("PARSER found SEMICOLON\n"); }
#line 3157 "parser.tab.cpp"
    break;

  case 172: /* semicolonList: semicolonList ';'  */
#line 502 "parser.y"
                        { printf("PARSER found semicolonList\n"); }
#line 3163 "parser.tab.cpp"
    break;

  case 173: /* separator_List: ENDL  */
#line 506 "parser.y"
            { printf("PARSER found ENDL\n"); }
#line 3169 "parser.tab.cpp"
    break;

  case 174: /* separator_List: ';'  */
#line 507 "parser.y"
            { printf("PARSER found SEMICOLON\n"); }
#line 3175 "parser.tab.cpp"
    break;

  case 175: /* separator_List: separator_List ENDL  */
#line 508 "parser.y"
                            { printf("PARSER add ENDL to separator_List\n"); }
#line 3181 "parser.tab.cpp"
    break;

  case 176: /* separator_List: separator_List ';'  */
#line 509 "parser.y"
                           { printf("PARSER add ; to separator_List\n"); }
#line 3187 "parser.tab.cpp"
    break;


#line 3191 "parser.tab.cpp"

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

#line 516 "parser.y"

