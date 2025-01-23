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
  YYSYMBOL_num_const = 105,                /* num_const  */
  YYSYMBOL_const = 106,                    /* const  */
  YYSYMBOL_params = 107,                   /* params  */
  YYSYMBOL_anonymous_func = 108,           /* anonymous_func  */
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
#define YYLAST   1283

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  182
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  535

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
       0,   125,   125,   132,   133,   134,   138,   139,   140,   141,
     145,   150,   151,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   175,
     176,   180,   181,   194,   195,   203,   204,   212,   213,   214,
     215,   216,   217,   221,   222,   226,   227,   228,   229,   230,
     231,   232,   233,   242,   243,   244,   252,   253,   254,   255,
     260,   261,   262,   263,   264,   265,   266,   267,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   287,
     291,   297,   302,   303,   309,   310,   311,   321,   322,   327,
     328,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   370,   371,   372,   373,   378,   379,
     380,   381,   382,   383,   384,   390,   391,   392,   393,   398,
     403,   404,   408,   409,   410,   411,   412,   413,   414,   415,
     419,   420,   424,   425,   431,   432,   433,   434,   435,   436,
     437,   441,   442,   446,   447,   451,   462,   463,   467,   468,
     472,   481,   482,   487,   488,   493,   494,   498,   499,   500,
     501,   505,   506
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
  "expr_list_e", "expr_list", "expr", "num_const", "const", "params",
  "anonymous_func", "method_params_list", "method",
  "method_arguments_list", "method_call", "type", "type_list_car",
  "type_list", "type_list_simple", "array", "array_literal",
  "initialized_array", "endlList", "endlOpt", "semicolonList",
  "separator_List", "separator_List_e", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-404)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-175)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       9,  -404,  -404,    25,  -404,     8,   808,  -404,  -404,  -404,
     951,   951,   987,  -404,  -404,  -404,  -404,   158,  -404,  -404,
      36,    36,    36,    36,    36,    36,    36,    17,    48,    61,
     -23,  -404,  -404,  -404,    36,    36,  -404,  -404,    36,    36,
       4,  -404,    43,    75,   115,  -404,   182,    14,  -404,  -404,
    -404,  -404,  -404,  -404,  1168,  -404,  -404,  -404,  -404,  -404,
    -404,  -404,  -404,  -404,  -404,    35,   504,   109,  -404,   951,
     216,   191,   214,   218,   185,   223,   235,     1,   951,   239,
     194,   951,   240,   252,    36,   250,   137,   267,   209,   213,
       4,     4,     4,  -404,   160,  -404,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,   248,  -404,   271,    36,   294,   272,  1168,   274,
     301,   951,  -404,    36,    36,    36,   951,   293,    36,   416,
     951,    36,   661,  -404,   951,   296,    36,   306,    36,    19,
    -404,  -404,   245,   249,   256,   182,  -404,  1168,   951,   951,
     951,   951,   951,   951,   951,   951,   951,   258,   951,   951,
     951,   951,   951,   951,  -404,  -404,  -404,  -404,  -404,  -404,
    -404,  -404,   273,   324,   275,  -404,   331,   317,   191,   321,
     951,   112,   210,  1028,   279,    20,   314,   309,  1044,   320,
    -404,   329,    36,   226,   951,   332,    -3,  -404,  -404,  -404,
    -404,   758,   426,   316,   316,   278,   278,  -404,  -404,  -404,
      36,    47,    47,   395,   303,   316,   316,   248,   248,    36,
      36,  -404,  -404,   118,    36,    36,    36,    36,    36,     2,
      36,   951,    87,    36,    36,   355,    36,    36,  -404,   251,
      36,    36,   322,    36,   356,   248,   106,    36,  -404,   335,
    -404,    18,   951,   951,   951,    78,   951,   117,   951,  -404,
      36,   318,   861,  1168,   319,   951,   325,    40,   -12,   951,
     951,   359,    36,    36,    36,   951,   248,   370,   189,   255,
    -404,   360,   366,   368,   379,   377,   108,   371,    36,    36,
    1215,  1168,  1168,  1168,    52,   367,    36,  1168,   391,    36,
    1091,   372,  1215,    36,  1168,   678,  1168,    36,    36,    36,
      36,    36,  1106,  1168,   106,   951,   248,   270,  1168,    36,
    -404,    36,    36,   322,   394,   403,   405,   150,   345,   393,
     409,   414,   586,    39,  -404,  -404,   425,   444,   248,   445,
     248,   447,    36,    30,   388,   951,  -404,   396,   709,   392,
     951,   906,   206,  -404,   438,  1168,    36,    36,    36,   453,
     951,   248,   203,   951,   248,   248,   432,   434,   207,  -404,
     452,   459,   951,  -404,    36,   466,    36,  -404,  -404,    15,
     411,   248,   458,    36,   461,    36,   951,    36,  1215,  1168,
    1215,  -404,   424,    36,  1168,    36,  1168,    36,   951,   345,
     485,   951,   248,    36,  1168,    36,  -404,  1153,   487,   488,
     486,   490,   476,   479,   248,   248,    32,   443,   586,  -404,
     470,   248,  -404,    36,   951,    36,   951,   118,   951,  -404,
     463,    36,  1184,   951,   451,  1168,  -404,    36,  1168,    36,
     951,   517,  -404,  1215,  1215,   248,   248,   515,   518,   522,
     524,  -404,    14,    36,    36,  -404,   525,  1168,   526,  1168,
     118,  1215,  1215,  -404,   472,  1168,    36,   951,   531,  1168,
      36,  -404,  -404,   532,   533,   248,   248,  1215,  1215,   951,
     475,   586,    36,    36,  -404,   480,    36,  1208,  1168,    36,
     951,  1215,  1215,   535,   538,  -404,  -404,  1168,    14,    36,
      33,    33,    36,  1215,  -404,   484,   951,  1168,  -404,  -404,
    1215,  1215,   951,   481,  -404,  -404,  1215,   497,    36,  1168,
    -404,  -404,  1168,    14,  -404,    36,  1215,   951,  1215,   498,
    1168,  -404,    36,  1215,  -404
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     182,   177,   178,     0,     2,   181,     0,     1,   179,   180,
       0,     0,   138,   124,   125,   126,   127,    92,   130,   129,
     174,   174,   174,   174,   174,   174,   174,     0,     0,   169,
       0,   131,   132,   133,   174,   174,    34,    33,   174,   174,
     182,    51,     0,     0,     0,   120,     0,   182,    37,   112,
     113,   114,   115,   116,    39,   128,    91,   118,    52,   119,
     134,   166,   167,   111,   110,    92,     0,     0,   171,    88,
       0,   152,   173,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   174,     0,     0,     0,     0,     0,
     182,   182,   182,    38,   181,    43,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,     0,    94,     0,   174,     0,    87,    89,     0,
       0,    88,   172,   174,   174,   174,     0,     0,   174,   174,
       0,   174,     0,   121,    88,     0,   174,    31,   174,   174,
      10,   117,     0,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   154,   155,   156,   157,   158,   159,
     160,   161,   135,     0,     0,   150,     0,     0,   153,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,     0,   174,     0,    88,     0,     0,     3,     4,     5,
      42,   107,   106,    95,    96,   101,   102,   104,   103,   105,
     174,    99,   100,   108,   109,    97,    98,     0,     0,   174,
     174,   123,   151,    93,   174,   174,   174,   174,   174,     0,
     174,     0,     0,   174,   174,     0,   174,   174,   168,     0,
     174,   174,   138,   174,     0,     0,    30,   174,     9,     0,
     162,   136,     0,     0,     0,     0,     0,     0,     0,    62,
     174,     0,     0,    63,     0,     0,     0,   173,     0,     0,
       0,     0,   174,   174,   174,     0,     0,     0,     0,     0,
      32,     0,     0,     0,    29,     0,     0,     0,   174,   174,
       0,   139,    90,    45,     0,     0,   174,    46,     0,   174,
      55,     0,     0,   174,    57,     0,    64,   174,   174,   174,
     174,   174,     0,    79,    30,     0,     0,     0,   145,   174,
     140,   174,   174,   138,     0,     0,     0,     0,     6,     0,
       0,    35,     0,     0,   137,   163,     0,     0,     0,     0,
       0,     0,   174,     0,    60,     0,    67,     0,     0,     0,
       0,     0,     0,    80,     0,   149,   174,   174,   174,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       0,     0,     0,    83,   174,    82,   174,    81,   175,   174,
       0,     0,     0,   174,     0,   174,     0,   174,     0,    56,
       0,    70,     0,   174,    71,   174,    59,   174,     0,    11,
       0,     0,     0,   174,   144,   174,   141,     0,    14,    13,
       0,     0,     0,     0,     0,     0,   174,     0,     0,   176,
       0,     0,   164,   174,     0,   174,     0,    53,     0,    61,
      65,   174,     0,     0,     0,    72,    12,   174,   148,   174,
       0,     0,   170,     0,     0,     0,     0,     0,     0,    22,
      21,    36,   182,   174,   174,   165,     0,    47,     0,    48,
      54,     0,     0,    78,     0,    58,   174,     0,     0,   143,
     174,    16,    15,    18,    17,     0,     0,     0,     0,     0,
       0,     0,   174,   174,    66,    68,   174,     0,   147,   174,
       0,     0,     0,    26,    25,    24,    23,    84,   182,   174,
       0,     0,   174,     0,    75,     0,     0,   142,    20,    19,
       0,     0,     0,     0,    50,    49,     0,    76,   174,   146,
      28,    27,    86,   182,    69,   174,     0,     0,     0,    73,
      85,    77,   174,     0,    74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -404,  -404,  -404,   460,  -404,  -404,  -404,   233,  -404,    -4,
    -315,  -404,    13,   -43,  -404,  -404,  -404,  -404,  -404,  -404,
    -404,  -403,  -404,  -100,  -322,    -6,  -404,   298,  -234,  -404,
     310,  -404,   442,  -404,  -203,   346,  -404,  -220,  -233,  -404,
    -404,  -215,   262,  -404,   516,   -46
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,    41,    42,    43,    44,   284,   285,    45,   286,
     248,    47,     4,    48,    49,    50,   185,   234,    51,    52,
      53,   374,   289,   116,   117,   118,    55,    56,    67,    57,
     243,    58,    71,    59,   171,   172,   336,   296,    60,    61,
      62,    72,   176,   379,     5,     6
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      54,    95,    46,    93,    63,    64,    66,     1,   278,   -44,
     375,     8,     1,   369,   250,   453,   246,     1,    68,   267,
     127,   179,    68,   309,   290,     7,    13,    14,    15,    16,
     259,    18,    19,   122,   191,    68,    81,   299,    68,    68,
     230,  -174,   281,   122,    84,    29,   112,    31,    32,    33,
     416,   146,   451,    89,    69,   231,    98,    99,    70,   100,
     101,   102,   103,   104,   387,   310,   311,    82,   308,   247,
     260,   294,   129,   319,   337,   132,    29,   128,   499,   376,
    -174,   -44,     2,   217,   436,   343,     9,     2,   147,   362,
     145,   335,     2,   419,   244,    -8,   375,   294,   232,   110,
     111,   260,   200,   142,   143,   144,   164,   165,   166,   167,
     168,   169,   170,   356,   114,   264,   377,   378,   224,    90,
     183,   295,   265,   225,   188,    96,    97,    98,    99,   115,
     100,   101,   102,   103,   104,   382,   294,   384,   282,   283,
     329,   330,   201,   202,   203,   204,   205,   206,   207,   208,
     209,    91,   211,   212,   213,   214,   215,   216,   405,   375,
     298,   408,   409,     8,  -174,   137,   106,   107,   108,   109,
     110,   111,    10,    11,   223,    36,    37,    69,   422,    12,
     138,    70,   366,   367,    13,    14,    15,    16,    17,    18,
      19,    92,    20,    21,   114,    22,    23,    24,    25,   439,
      26,    27,    28,    29,    30,    31,    32,    33,   114,   320,
     121,   449,   450,   124,    20,    21,   226,   122,   455,    36,
      37,   227,    26,   406,   123,   263,    30,    34,    35,    36,
      37,    38,   240,    39,   397,   119,    40,   241,     9,   412,
     413,   398,   473,   474,   120,   242,   291,   292,   293,    34,
     297,   125,   300,    38,   126,    39,   304,   272,   130,   306,
     133,   321,   273,   312,   313,   131,   322,   514,   515,   318,
     242,   134,   493,   494,   323,    68,   357,  -174,   136,    73,
      38,   358,    74,    75,    76,    77,    78,    79,    80,   323,
     141,    83,   102,   103,   104,   139,    85,    86,   177,   173,
      87,    88,   164,   165,   166,   167,   168,   169,   170,   355,
      96,    97,    98,    99,   175,   100,   101,   102,   103,   104,
      69,   184,   197,   368,   192,   194,   198,    73,   100,   101,
     102,   103,   104,   199,   210,   218,   220,   221,   217,   389,
     219,   222,   233,   229,   394,   396,   135,   235,   237,   238,
     277,   106,   107,   245,   404,   110,   111,   407,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   269,   288,   280,   174,   314,   302,
     427,   112,   324,   305,   327,   180,   181,   182,   338,   307,
     186,   187,   435,   189,   325,   438,   326,   328,   193,   331,
     195,   196,    96,    97,    98,    99,   479,   100,   101,   102,
     103,   104,   340,   363,   364,   138,   365,   247,   457,    68,
     459,   370,   460,    96,    97,    98,    99,   465,   100,   101,
     102,   103,   104,   372,   469,    98,    99,   371,   100,   101,
     102,   103,   104,   106,   107,   380,   109,   110,   111,   381,
     388,   383,   512,   385,   239,   105,   393,   390,   399,   403,
     410,   488,   411,   414,   106,   107,   108,   109,   110,   111,
     415,  -174,   249,   497,   106,   107,   421,   527,   110,   111,
     423,   252,   253,   425,   507,   431,   254,   255,   256,   257,
     258,   437,   262,   443,   444,   266,   268,   445,   270,   271,
     519,   446,   275,   276,   447,   279,   522,   448,   452,   287,
     454,    96,    97,    98,    99,   466,   100,   101,   102,   103,
     104,   530,   301,   470,   113,   461,   475,   261,   477,   476,
     478,   482,   483,   486,   315,   316,   317,   489,   491,   492,
     498,   510,   502,   105,   511,   518,   523,   354,   140,   274,
     332,   333,   106,   107,   108,   109,   110,   111,   339,   525,
     532,   341,   178,    94,   251,   345,     0,     0,     0,   348,
     349,   350,   351,   352,     0,     0,     0,     0,     0,     0,
       0,   359,     0,   360,   361,     0,     0,     0,   334,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
     344,     0,     0,   347,   386,    12,     0,     0,     0,     0,
      13,    14,    15,    16,    17,    18,    19,     0,   400,   401,
     402,    22,    23,    24,    25,     0,     0,    27,    28,    29,
       0,    31,    32,    33,     0,     0,   417,     0,   418,     0,
       0,   420,     0,     0,     0,   424,   392,   426,     0,   428,
       0,     0,     0,     0,    35,   432,     0,   433,     0,   434,
       0,   373,    40,     0,     0,   440,     0,   441,    96,    97,
      98,    99,     0,   100,   101,   102,   103,   104,     0,     0,
       0,   190,     0,     0,     0,   456,   429,   458,   430,     0,
       0,     0,     0,   462,     0,     0,     0,     0,     0,   467,
     105,   468,    13,    14,    15,    16,   346,    18,    19,   106,
     107,   108,   109,   110,   111,   480,   481,     0,     0,     0,
       0,    29,     0,    31,    32,    33,     0,     0,   487,     0,
     464,     0,   490,    13,    14,    15,    16,   391,    18,    19,
       0,   471,   472,     0,   500,   501,   260,     0,   503,     0,
       0,   506,    29,     0,    31,    32,    33,     0,     0,   484,
     485,   513,     0,     0,   516,     0,    97,    98,    99,     0,
     100,   101,   102,   103,   104,   495,   496,   260,     0,     0,
     526,     0,     0,     0,     0,   505,     0,   528,     0,   508,
     509,     0,     0,     0,   533,     0,     0,     0,     0,     0,
       0,   517,     0,     0,     0,     0,   106,   107,   520,   521,
     110,   111,     0,     0,   524,     0,     0,     0,     0,     0,
      10,    11,     0,     0,   529,     0,   531,    12,     0,     0,
       0,   534,    13,    14,    15,    16,    17,    18,    19,     0,
      20,    21,     0,    22,    23,    24,    25,     0,    26,    27,
      28,    29,    30,    31,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,    34,    35,    36,    37,    38,
      12,    39,     0,     0,    40,    13,    14,    15,    16,    17,
      18,    19,     0,     0,     0,     0,    22,    23,    24,    25,
       0,     0,    27,    28,    29,     0,    31,    32,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,   303,    12,     0,     0,     0,    35,
      13,    14,    15,    16,    17,    18,    19,    40,     0,     0,
       0,    22,    23,    24,    25,     0,     0,    27,    28,    29,
       0,    31,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,   395,
      12,     0,     0,     0,    35,    13,    14,    15,    16,    17,
      18,    19,    40,     0,     0,     0,    22,    23,    24,    25,
       0,     0,    27,    28,    29,     0,    31,    32,    33,    10,
      11,     0,     0,     0,     0,     0,    12,     0,     0,     0,
       0,    13,    14,    15,    16,    65,    18,    19,     0,    35,
       0,     0,    22,    23,    24,    25,     0,    40,    27,    28,
      29,     0,    31,    32,    33,    96,    97,    98,    99,     0,
     100,   101,   102,   103,   104,     0,     0,     0,   228,     0,
       0,    96,    97,    98,    99,    35,   100,   101,   102,   103,
     104,     0,     0,    40,   236,     0,     0,   105,     0,     0,
       0,     0,     0,     0,     0,     0,   106,   107,   108,   109,
     110,   111,     0,   105,     0,     0,     0,     0,     0,     0,
       0,     0,   106,   107,   108,   109,   110,   111,    96,    97,
      98,    99,     0,   100,   101,   102,   103,   104,     0,     0,
       0,     0,     0,    96,    97,    98,    99,     0,   100,   101,
     102,   103,   104,     0,     0,   342,   353,     0,     0,     0,
     105,     0,     0,     0,     0,     0,     0,     0,     0,   106,
     107,   108,   109,   110,   111,   105,     0,     0,     0,     0,
       0,     0,     0,     0,   106,   107,   108,   109,   110,   111,
      96,    97,    98,    99,     0,   100,   101,   102,   103,   104,
       0,     0,     0,   442,     0,    96,    97,    98,    99,     0,
     100,   101,   102,   103,   104,     0,     0,     0,     0,     0,
       0,     0,   105,     0,     0,     0,     0,     0,     0,     0,
       0,   106,   107,   108,   109,   110,   111,   105,    13,    14,
      15,    16,   463,    18,    19,     0,   106,   107,   108,   109,
     110,   111,     0,     0,     0,     0,     0,    29,     0,    31,
      32,    33,    13,    14,    15,    16,   504,    18,    19,    13,
      14,    15,    16,     0,    18,    19,     0,     0,     0,     0,
       0,    29,   260,    31,    32,    33,     0,     0,    29,     0,
      31,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   260,     0,     0,     0,
       0,     0,     0,   260
};

static const yytype_int16 yycheck[] =
{
       6,    47,     6,    46,    10,    11,    12,     3,   242,     0,
     332,     3,     3,   328,   217,   418,    19,     3,     3,   234,
      19,   121,     3,    35,     6,     0,    24,    25,    26,    27,
      28,    29,    30,     3,   134,     3,    19,   257,     3,     3,
      20,     6,   245,     3,    67,    43,    11,    45,    46,    47,
     372,    94,    20,    40,    19,    35,     9,    10,    23,    12,
      13,    14,    15,    16,    34,    77,    78,    19,    28,    72,
      68,    19,    78,   276,   294,    81,    43,    76,   481,    40,
      19,    77,    78,    65,   399,   300,    78,    78,    94,   323,
      94,   294,    78,    78,   194,    76,   418,    19,    78,    52,
      53,    68,   145,    90,    91,    92,    54,    55,    56,    57,
      58,    59,    60,   316,     5,    28,    77,    78,     6,    76,
     126,    43,    35,    11,   130,     7,     8,     9,    10,    20,
      12,    13,    14,    15,    16,   338,    19,   340,    32,    33,
      32,    33,   148,   149,   150,   151,   152,   153,   154,   155,
     156,    76,   158,   159,   160,   161,   162,   163,   361,   481,
      43,   364,   365,     3,     6,    28,    48,    49,    50,    51,
      52,    53,    12,    13,   180,    69,    70,    19,   381,    19,
      43,    23,    32,    33,    24,    25,    26,    27,    28,    29,
      30,    76,    32,    33,     5,    35,    36,    37,    38,   402,
      40,    41,    42,    43,    44,    45,    46,    47,     5,    20,
      19,   414,   415,    28,    32,    33,     6,     3,   421,    69,
      70,    11,    40,    20,     6,   231,    44,    67,    68,    69,
      70,    71,     6,    73,    28,    19,    76,    11,    78,    32,
      33,    35,   445,   446,    28,    19,   252,   253,   254,    67,
     256,    28,   258,    71,    19,    73,   262,     6,    19,   265,
      20,     6,    11,   269,   270,    71,    11,   500,   501,   275,
      19,    19,   475,   476,    19,     3,     6,     5,    28,    17,
      71,    11,    20,    21,    22,    23,    24,    25,    26,    19,
      77,    29,    14,    15,    16,    28,    34,    35,    24,    28,
      38,    39,    54,    55,    56,    57,    58,    59,    60,   315,
       7,     8,     9,    10,    20,    12,    13,    14,    15,    16,
      19,    28,    77,   327,    28,    19,    77,    65,    12,    13,
      14,    15,    16,    77,    76,    11,     5,    20,    65,   345,
      65,    20,    28,    64,   350,   351,    84,    38,    28,    20,
      28,    48,    49,    21,   360,    52,    53,   363,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,    19,    40,    20,   115,    19,    61,
     386,    11,    22,    64,     5,   123,   124,   125,    21,    64,
     128,   129,   398,   131,    28,   401,    28,    20,   136,    28,
     138,   139,     7,     8,     9,    10,   452,    12,    13,    14,
      15,    16,    21,    19,    11,    43,    11,    72,   424,     3,
     426,    28,   428,     7,     8,     9,    10,   433,    12,    13,
      14,    15,    16,    19,   440,     9,    10,    28,    12,    13,
      14,    15,    16,    48,    49,    20,    51,    52,    53,     5,
      62,     6,   498,     6,   192,    39,    64,    61,    20,     6,
      28,   467,    28,    11,    48,    49,    50,    51,    52,    53,
      11,     5,   210,   479,    48,    49,    65,   523,    52,    53,
      22,   219,   220,    22,   490,    61,   224,   225,   226,   227,
     228,     6,   230,     6,     6,   233,   234,    11,   236,   237,
     506,    11,   240,   241,    28,   243,   512,    28,    65,   247,
      40,     7,     8,     9,    10,    64,    12,    13,    14,    15,
      16,   527,   260,     6,    20,    62,    11,   229,     6,    11,
       6,     6,     6,    61,   272,   273,   274,     6,     6,     6,
      65,     6,    62,    39,     6,    61,    65,   314,    88,   239,
     288,   289,    48,    49,    50,    51,    52,    53,   296,    62,
      62,   299,   120,    47,   218,   303,    -1,    -1,    -1,   307,
     308,   309,   310,   311,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   319,    -1,   321,   322,    -1,    -1,    -1,   290,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    13,
     302,    -1,    -1,   305,   342,    19,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    -1,   356,   357,
     358,    35,    36,    37,    38,    -1,    -1,    41,    42,    43,
      -1,    45,    46,    47,    -1,    -1,   374,    -1,   376,    -1,
      -1,   379,    -1,    -1,    -1,   383,   348,   385,    -1,   387,
      -1,    -1,    -1,    -1,    68,   393,    -1,   395,    -1,   397,
      -1,    75,    76,    -1,    -1,   403,    -1,   405,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    20,    -1,    -1,    -1,   423,   388,   425,   390,    -1,
      -1,    -1,    -1,   431,    -1,    -1,    -1,    -1,    -1,   437,
      39,   439,    24,    25,    26,    27,    28,    29,    30,    48,
      49,    50,    51,    52,    53,   453,   454,    -1,    -1,    -1,
      -1,    43,    -1,    45,    46,    47,    -1,    -1,   466,    -1,
     432,    -1,   470,    24,    25,    26,    27,    28,    29,    30,
      -1,   443,   444,    -1,   482,   483,    68,    -1,   486,    -1,
      -1,   489,    43,    -1,    45,    46,    47,    -1,    -1,   461,
     462,   499,    -1,    -1,   502,    -1,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,   477,   478,    68,    -1,    -1,
     518,    -1,    -1,    -1,    -1,   487,    -1,   525,    -1,   491,
     492,    -1,    -1,    -1,   532,    -1,    -1,    -1,    -1,    -1,
      -1,   503,    -1,    -1,    -1,    -1,    48,    49,   510,   511,
      52,    53,    -1,    -1,   516,    -1,    -1,    -1,    -1,    -1,
      12,    13,    -1,    -1,   526,    -1,   528,    19,    -1,    -1,
      -1,   533,    24,    25,    26,    27,    28,    29,    30,    -1,
      32,    33,    -1,    35,    36,    37,    38,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    12,    13,    67,    68,    69,    70,    71,
      19,    73,    -1,    -1,    76,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      -1,    -1,    41,    42,    43,    -1,    45,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    13,
      -1,    -1,    -1,    -1,    63,    19,    -1,    -1,    -1,    68,
      24,    25,    26,    27,    28,    29,    30,    76,    -1,    -1,
      -1,    35,    36,    37,    38,    -1,    -1,    41,    42,    43,
      -1,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,    63,
      19,    -1,    -1,    -1,    68,    24,    25,    26,    27,    28,
      29,    30,    76,    -1,    -1,    -1,    35,    36,    37,    38,
      -1,    -1,    41,    42,    43,    -1,    45,    46,    47,    12,
      13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    -1,    68,
      -1,    -1,    35,    36,    37,    38,    -1,    76,    41,    42,
      43,    -1,    45,    46,    47,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    -1,    -1,    -1,    20,    -1,
      -1,     7,     8,     9,    10,    68,    12,    13,    14,    15,
      16,    -1,    -1,    76,    20,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,    -1,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    -1,    -1,    34,    20,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
       7,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      -1,    -1,    -1,    20,    -1,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    39,    24,    25,
      26,    27,    28,    29,    30,    -1,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,
      46,    47,    24,    25,    26,    27,    28,    29,    30,    24,
      25,    26,    27,    -1,    29,    30,    -1,    -1,    -1,    -1,
      -1,    43,    68,    45,    46,    47,    -1,    -1,    43,    -1,
      45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    68
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    78,    80,    91,   123,   124,     0,     3,    78,
      12,    13,    19,    24,    25,    26,    27,    28,    29,    30,
      32,    33,    35,    36,    37,    38,    40,    41,    42,    43,
      44,    45,    46,    47,    67,    68,    69,    70,    71,    73,
      76,    81,    82,    83,    84,    87,    88,    90,    92,    93,
      94,    97,    98,    99,   104,   105,   106,   108,   110,   112,
     117,   118,   119,   104,   104,    28,   104,   107,     3,    19,
      23,   111,   120,   121,   121,   121,   121,   121,   121,   121,
     121,    19,    19,   121,    67,   121,   121,   121,   121,    91,
      76,    76,    76,    92,   123,   124,     7,     8,     9,    10,
      12,    13,    14,    15,    16,    39,    48,    49,    50,    51,
      52,    53,    11,    20,     5,    20,   102,   103,   104,    19,
      28,    19,     3,     6,    28,    28,    19,    19,    76,   104,
      19,    71,   104,    20,    19,   121,    28,    28,    43,    28,
      82,    77,    91,    91,    91,    88,    92,   104,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,    54,    55,    56,    57,    58,    59,
      60,   113,   114,    28,   121,    20,   121,    24,   111,   102,
     121,   121,   121,   104,    28,    95,   121,   121,   104,   121,
      20,   102,    28,   121,    19,   121,   121,    77,    77,    77,
      92,   104,   104,   104,   104,   104,   104,   104,   104,   104,
      76,   104,   104,   104,   104,   104,   104,    65,    11,    65,
       5,    20,    20,   104,     6,    11,     6,    11,    20,    64,
      20,    35,    78,    28,    96,    38,    20,    28,    20,   121,
       6,    11,    19,   109,   102,    21,    19,    72,    89,   121,
     113,   114,   121,   121,   121,   121,   121,   121,   121,    28,
      68,   106,   121,   104,    28,    35,   121,   120,   121,    19,
     121,   121,     6,    11,   109,   121,   121,    28,   107,   121,
      20,   113,    32,    33,    85,    86,    88,   121,    40,   101,
       6,   104,   104,   104,    19,    43,   116,   104,    43,   116,
     104,   121,    61,    63,   104,    64,   104,    64,    28,    35,
      77,    78,   104,   104,    19,   121,   121,   121,   104,   113,
      20,     6,    11,    19,    22,    28,    28,     5,    20,    32,
      33,    28,   121,   121,   106,   113,   115,   116,    21,   121,
      21,   121,    34,   120,   106,   121,    28,   106,   121,   121,
     121,   121,   121,    20,    86,   104,   113,     6,    11,   121,
     121,   121,   107,    19,    11,    11,    32,    33,    88,    89,
      28,    28,    19,    75,   100,   103,    40,    77,    78,   122,
      20,     5,   113,     6,   113,     6,   121,    34,    62,   104,
      61,    28,   106,    64,   104,    63,   104,    28,    35,    20,
     121,   121,   121,     6,   104,   113,    20,   104,   113,   113,
      28,    28,    32,    33,    11,    11,   103,   121,   121,    78,
     121,    65,   113,    22,   121,    22,   121,   104,   121,   106,
     106,    61,   121,   121,   121,   104,    89,     6,   104,   113,
     121,   121,    20,     6,     6,    11,    11,    28,    28,   113,
     113,    20,    65,   100,    40,   113,   121,   104,   121,   104,
     104,    62,   121,    28,   106,   104,    64,   121,   121,   104,
       6,   106,   106,   113,   113,    11,    11,     6,     6,   124,
     121,   121,     6,     6,   106,   106,    61,   121,   104,     6,
     121,     6,     6,   113,   113,   106,   106,   104,    65,   100,
     121,   121,    62,   121,    28,   106,   121,   104,   106,   106,
       6,     6,   124,   121,   117,   117,   121,   106,    61,   104,
     106,   106,   104,    65,   106,    62,   121,   124,   121,   106,
     104,   106,    62,   121,   106
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
     104,   104,   104,   104,   105,   105,   105,   105,   106,   106,
     106,   106,   106,   106,   106,   107,   107,   107,   107,   108,
     109,   109,   110,   110,   110,   110,   110,   110,   110,   110,
     111,   111,   112,   112,   113,   113,   113,   113,   113,   113,
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
       1,     1,     1,     1,     1,     3,     5,     7,     0,     7,
       3,     5,    13,    11,     9,     7,    14,    12,    10,     8,
       3,     4,     2,     4,     1,     1,     1,     1,     1,     1,
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
  case 37: /* statement_expr_list: statement  */
#line 212 "parser.y"
                { printf("Add first statement :\n"); }
#line 2101 "parser.tab.cpp"
    break;

  case 38: /* statement_expr_list: visibility_modifier statement  */
#line 213 "parser.y"
                                    { printf("Add first visibility_modifier statement :\n"); }
#line 2107 "parser.tab.cpp"
    break;

  case 39: /* statement_expr_list: expr  */
#line 214 "parser.y"
           { printf("Add first statement :\n"); }
#line 2113 "parser.tab.cpp"
    break;

  case 40: /* statement_expr_list: statement_expr_list separator_List statement  */
#line 215 "parser.y"
                                                    { printf("Add new statement to statement_expr_list :\n"); }
#line 2119 "parser.tab.cpp"
    break;

  case 41: /* statement_expr_list: statement_expr_list separator_List expr  */
#line 216 "parser.y"
                                               { printf("Add new expr to statement_expr_list :\n"); }
#line 2125 "parser.tab.cpp"
    break;

  case 42: /* statement_expr_list: statement_expr_list separator_List visibility_modifier statement  */
#line 217 "parser.y"
                                                                        { printf("Add new visibility_modifier to statement_expr_list :\n"); }
#line 2131 "parser.tab.cpp"
    break;

  case 44: /* statement_expr_list_e: %empty  */
#line 222 "parser.y"
                     { printf("PARSER found statement_list_e - nothing\n"); }
#line 2137 "parser.tab.cpp"
    break;

  case 45: /* statement: VAL endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 226 "parser.y"
                                                       { (yyval.tree) = mk_declaration_expr(mk_ident_lit((yyvsp[-4].str_value)), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2143 "parser.tab.cpp"
    break;

  case 46: /* statement: VAR endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 227 "parser.y"
                                                       { printf("implicit variable declaration:\n"); }
#line 2149 "parser.tab.cpp"
    break;

  case 47: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 228 "parser.y"
                                                                                           { printf("explicit value declaration:\n"); }
#line 2155 "parser.tab.cpp"
    break;

  case 48: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 229 "parser.y"
                                                                                           { printf("explicit variable declaration:\n"); }
#line 2161 "parser.tab.cpp"
    break;

  case 49: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt ARRAY '[' type ']' endlOpt '=' endlOpt array  */
#line 230 "parser.y"
                                                                                              { printf("explicit array declaration:\n"); }
#line 2167 "parser.tab.cpp"
    break;

  case 50: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt ARRAY '[' type ']' endlOpt '=' endlOpt array  */
#line 231 "parser.y"
                                                                                              { printf("explicit array declaration:\n"); }
#line 2173 "parser.tab.cpp"
    break;

  case 51: /* statement: class  */
#line 232 "parser.y"
            { printf("Class:\n"); }
#line 2179 "parser.tab.cpp"
    break;

  case 52: /* statement: method  */
#line 233 "parser.y"
             { printf("Method:\n"); }
#line 2185 "parser.tab.cpp"
    break;

  case 53: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr ELSE endlOpt expr  */
#line 242 "parser.y"
                                                                           { (yyval.tree) = mk_if_else_expr((yyvsp[-6].tree), (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2191 "parser.tab.cpp"
    break;

  case 54: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr endlList ELSE endlOpt expr  */
#line 243 "parser.y"
                                                                                    { (yyval.tree) = mk_if_else_expr((yyvsp[-7].tree), (yyvsp[-4].tree), (yyvsp[0].tree)); }
#line 2197 "parser.tab.cpp"
    break;

  case 55: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr  */
#line 244 "parser.y"
                                                      { (yyval.tree) = mk_if_expr((yyvsp[-3].tree), (yyvsp[0].tree));}
#line 2203 "parser.tab.cpp"
    break;

  case 56: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt YIELD endlOpt expr  */
#line 252 "parser.y"
                                                                                                                          { printf("FOR in parentheses\n"); }
#line 2209 "parser.tab.cpp"
    break;

  case 57: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt expr  */
#line 253 "parser.y"
                                                                                                            { printf("FOR in parentheses\n"); }
#line 2215 "parser.tab.cpp"
    break;

  case 58: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt YIELD endlOpt expr  */
#line 254 "parser.y"
                                                                                                                                           { printf("FOR in curly_braces\n"); }
#line 2221 "parser.tab.cpp"
    break;

  case 59: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt expr  */
#line 255 "parser.y"
                                                                                                                             { printf("FOR in curly_braces\n"); }
#line 2227 "parser.tab.cpp"
    break;

  case 60: /* generators_and_conditions_parentheses_List: IDENTIFIER GENERATOR_OPERATOR const TO const  */
#line 260 "parser.y"
                                                        {(yyval.tree) = add_to_list(mk_list(),  mk_generator_without_by(mk_ident_lit((yyvsp[-4].str_value)), (yyvsp[-2].tree), (yyvsp[0].tree))); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2233 "parser.tab.cpp"
    break;

  case 61: /* generators_and_conditions_parentheses_List: IDENTIFIER GENERATOR_OPERATOR const TO const BY const  */
#line 261 "parser.y"
                                                                {(yyval.tree) = add_to_list(mk_list(),  mk_generator_with_by(mk_ident_lit((yyvsp[-6].str_value)), (yyvsp[-4].tree), (yyvsp[-2].tree), (yyvsp[0].tree))); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2239 "parser.tab.cpp"
    break;

  case 62: /* generators_and_conditions_parentheses_List: IDENTIFIER GENERATOR_OPERATOR IDENTIFIER  */
#line 262 "parser.y"
                                                   {(yyval.tree) = add_to_list(mk_list(), mk_generator_without_to_and_by(mk_ident_lit((yyvsp[-2].str_value)),mk_ident_lit((yyvsp[0].str_value)))); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2245 "parser.tab.cpp"
    break;

  case 63: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List IF expr  */
#line 263 "parser.y"
                                                             { (yyval.tree) = add_to_list((yyvsp[-2].tree), mk_if_cond((yyvsp[0].tree))); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2251 "parser.tab.cpp"
    break;

  case 64: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List ';' IF expr  */
#line 264 "parser.y"
                                                                 { (yyval.tree) = add_to_list((yyvsp[-3].tree), mk_if_cond((yyvsp[0].tree))); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2257 "parser.tab.cpp"
    break;

  case 65: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List ';' IDENTIFIER GENERATOR_OPERATOR const TO const  */
#line 265 "parser.y"
                                                                                                      { (yyval.tree) = add_to_list((yyvsp[-6].tree), mk_generator_without_by(mk_ident_lit((yyvsp[-4].str_value)), (yyvsp[-2].tree), (yyvsp[0].tree))); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2263 "parser.tab.cpp"
    break;

  case 66: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List ';' IDENTIFIER GENERATOR_OPERATOR const TO const BY const  */
#line 266 "parser.y"
                                                                                                               { (yyval.tree) = add_to_list((yyvsp[-8].tree), mk_generator_with_by(mk_ident_lit((yyvsp[-6].str_value)), (yyvsp[-4].tree), (yyvsp[-2].tree), (yyvsp[0].tree))); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2269 "parser.tab.cpp"
    break;

  case 67: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List ';' IDENTIFIER GENERATOR_OPERATOR IDENTIFIER  */
#line 267 "parser.y"
                                                                                                  { (yyval.tree) = add_to_list((yyvsp[-4].tree), mk_generator_without_to_and_by(mk_ident_lit((yyvsp[-2].str_value)), mk_ident_lit((yyvsp[0].str_value)))); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2275 "parser.tab.cpp"
    break;

  case 79: /* while_expr: WHILE endlOpt '(' expr ')' endlOpt expr  */
#line 287 "parser.y"
                                                              { (yyval.tree) = mk_while_expr((yyvsp[-3].tree),(yyvsp[0].tree)); }
#line 2281 "parser.tab.cpp"
    break;

  case 80: /* do_while_expr: DO endlOpt expr endlOpt WHILE '(' expr ')'  */
#line 291 "parser.y"
                                                                 { (yyval.tree) = mk_do_while_expr((yyvsp[-5].tree),(yyvsp[-1].tree)); }
#line 2287 "parser.tab.cpp"
    break;

  case 81: /* match_expr: expr MATCH endlOpt '{' endlOpt case_list endlOpt '}'  */
#line 297 "parser.y"
                                                              {(yyval.tree) = mk_match_expr((yyvsp[-7].tree),(yyvsp[-2].tree));}
#line 2293 "parser.tab.cpp"
    break;

  case 82: /* case_condition: expr_list  */
#line 302 "parser.y"
                                          {(yyval.tree) = add_case_condition((yyvsp[0].tree));}
#line 2299 "parser.tab.cpp"
    break;

  case 83: /* case_condition: CASE_PATTERN  */
#line 303 "parser.y"
                       {(yyval.tree) = add_case_condition((yyvsp[0].tree));}
#line 2305 "parser.tab.cpp"
    break;

  case 84: /* case_list: CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 309 "parser.y"
                                                                                         {(yyval.tree) = mk_list();(yyval.tree) = add_alt_case((yyval.tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2311 "parser.tab.cpp"
    break;

  case 85: /* case_list: case_list endlOpt semicolonList endlOpt CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 310 "parser.y"
                                                                                                                                 {(yyval.tree) = add_alt_case((yyvsp[-10].tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2317 "parser.tab.cpp"
    break;

  case 86: /* case_list: case_list endlOpt CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 311 "parser.y"
                                                                                                           {(yyval.tree) = add_alt_case((yyvsp[-8].tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2323 "parser.tab.cpp"
    break;

  case 87: /* expr_list_e: expr_list  */
#line 321 "parser.y"
                   { printf("PARSER found expr_list - expr_list\n"); }
#line 2329 "parser.tab.cpp"
    break;

  case 88: /* expr_list_e: %empty  */
#line 322 "parser.y"
                     {  (yyval.tree) = mk_list(); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2335 "parser.tab.cpp"
    break;

  case 89: /* expr_list: expr  */
#line 327 "parser.y"
                      { (yyval.tree) = add_to_list(mk_list(), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2341 "parser.tab.cpp"
    break;

  case 90: /* expr_list: expr_list endlOpt ',' endlOpt expr  */
#line 328 "parser.y"
                                          { (yyval.tree) = add_to_list((yyvsp[-4].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2347 "parser.tab.cpp"
    break;

  case 91: /* expr: const  */
#line 333 "parser.y"
                                  {printf("PARSER found expr - const\n"); }
#line 2353 "parser.tab.cpp"
    break;

  case 92: /* expr: IDENTIFIER  */
#line 334 "parser.y"
                                       {(yyval.tree) = mk_ident_lit((yyvsp[0].str_value)); }
#line 2359 "parser.tab.cpp"
    break;

  case 93: /* expr: IDENTIFIER endlOpt '=' endlOpt expr  */
#line 335 "parser.y"
                                          { (yyval.tree) = mk_bin_op((char*) "=", mk_ident_lit((yyvsp[-4].str_value)), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2365 "parser.tab.cpp"
    break;

  case 94: /* expr: '(' expr ')'  */
#line 336 "parser.y"
                   { printf("PARSER found expr - ( expr ) \n"); }
#line 2371 "parser.tab.cpp"
    break;

  case 95: /* expr: expr '>' endlOpt expr  */
#line 337 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) ">", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2377 "parser.tab.cpp"
    break;

  case 96: /* expr: expr '<' endlOpt expr  */
#line 338 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "<", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2383 "parser.tab.cpp"
    break;

  case 97: /* expr: expr MORE_OR_EQUAL_OPERATOR endlOpt expr  */
#line 339 "parser.y"
                                               { (yyval.tree) = mk_bin_op((char*) ">=", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2389 "parser.tab.cpp"
    break;

  case 98: /* expr: expr LESS_OR_EQUAL_OPERATOR endlOpt expr  */
#line 340 "parser.y"
                                               { (yyval.tree) = mk_bin_op((char*) "<=", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2395 "parser.tab.cpp"
    break;

  case 99: /* expr: expr EQ endlOpt expr  */
#line 341 "parser.y"
                           { (yyval.tree) = mk_bin_op((char*) "==", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2401 "parser.tab.cpp"
    break;

  case 100: /* expr: expr NEQ endlOpt expr  */
#line 342 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "!=", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2407 "parser.tab.cpp"
    break;

  case 101: /* expr: expr '+' endlOpt expr  */
#line 343 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "+", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2413 "parser.tab.cpp"
    break;

  case 102: /* expr: expr '-' endlOpt expr  */
#line 344 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "-", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2419 "parser.tab.cpp"
    break;

  case 103: /* expr: expr '/' endlOpt expr  */
#line 345 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "/", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2425 "parser.tab.cpp"
    break;

  case 104: /* expr: expr '*' endlOpt expr  */
#line 346 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "*", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2431 "parser.tab.cpp"
    break;

  case 105: /* expr: expr '%' endlOpt expr  */
#line 347 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "%", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2437 "parser.tab.cpp"
    break;

  case 106: /* expr: expr '&' endlOpt expr  */
#line 348 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "&", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2443 "parser.tab.cpp"
    break;

  case 107: /* expr: expr '|' endlOpt expr  */
#line 349 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "|", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2449 "parser.tab.cpp"
    break;

  case 108: /* expr: expr KW_OR endlOpt expr  */
#line 350 "parser.y"
                              { (yyval.tree) = mk_bin_op((char*) "||", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2455 "parser.tab.cpp"
    break;

  case 109: /* expr: expr KW_AND endlOpt expr  */
#line 351 "parser.y"
                               { (yyval.tree) = mk_bin_op((char*) "&&", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2461 "parser.tab.cpp"
    break;

  case 110: /* expr: '-' expr  */
#line 352 "parser.y"
                             { (yyval.tree) = mk_unary_op("unary_minus_op", (yyvsp[0].tree));found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2467 "parser.tab.cpp"
    break;

  case 111: /* expr: '+' expr  */
#line 353 "parser.y"
                            { (yyval.tree) = mk_unary_op("unary_plus_op", (yyvsp[0].tree));found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2473 "parser.tab.cpp"
    break;

  case 112: /* expr: if_else_expr  */
#line 354 "parser.y"
                   {(yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2479 "parser.tab.cpp"
    break;

  case 113: /* expr: for_expr  */
#line 355 "parser.y"
               { printf("PARSER found expr - for_expr\n"); }
#line 2485 "parser.tab.cpp"
    break;

  case 114: /* expr: while_expr  */
#line 356 "parser.y"
                 {(yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2491 "parser.tab.cpp"
    break;

  case 115: /* expr: do_while_expr  */
#line 357 "parser.y"
                    {(yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2497 "parser.tab.cpp"
    break;

  case 116: /* expr: match_expr  */
#line 358 "parser.y"
                 {(yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2503 "parser.tab.cpp"
    break;

  case 117: /* expr: '{' statement_expr_list_e '}'  */
#line 359 "parser.y"
                                    { printf("  { statement_expr_list_e }\n"); }
#line 2509 "parser.tab.cpp"
    break;

  case 118: /* expr: anonymous_func  */
#line 360 "parser.y"
                     { printf("Function:\n"); }
#line 2515 "parser.tab.cpp"
    break;

  case 119: /* expr: method_call  */
#line 361 "parser.y"
                  { printf("method_call:\n"); }
#line 2521 "parser.tab.cpp"
    break;

  case 120: /* expr: create_instance_class  */
#line 362 "parser.y"
                            { printf("instance_class:\n"); }
#line 2527 "parser.tab.cpp"
    break;

  case 121: /* expr: READLINE '(' ')'  */
#line 363 "parser.y"
                     { printf("readLine:\n"); }
#line 2533 "parser.tab.cpp"
    break;

  case 122: /* expr: PRINTLN '(' expr ')'  */
#line 364 "parser.y"
                          { printf("print:\n"); }
#line 2539 "parser.tab.cpp"
    break;

  case 123: /* expr: IDENTIFIER '.' '(' NUM_10 ')'  */
#line 365 "parser.y"
                                    { printf("array_call:\n"); }
#line 2545 "parser.tab.cpp"
    break;

  case 124: /* num_const: NUM_10  */
#line 370 "parser.y"
             { (yyval.tree) = mk_int_const((yyvsp[0].int_value)); }
#line 2551 "parser.tab.cpp"
    break;

  case 125: /* num_const: NUM_16  */
#line 371 "parser.y"
             { (yyval.tree) = mk_int_const((yyvsp[0].int_value)); }
#line 2557 "parser.tab.cpp"
    break;

  case 126: /* num_const: REAL_NUMBER  */
#line 372 "parser.y"
                  { (yyval.tree) = mk_real_const((yyvsp[0].real_value)); }
#line 2563 "parser.tab.cpp"
    break;

  case 127: /* num_const: REAL_NUMBER_EXPONENT  */
#line 373 "parser.y"
                           { (yyval.tree) = mk_real_const((yyvsp[0].real_value)); }
#line 2569 "parser.tab.cpp"
    break;

  case 129: /* const: CONST_STRING  */
#line 379 "parser.y"
                   { (yyval.tree) = mk_string_const((yyvsp[0].str_value)); }
#line 2575 "parser.tab.cpp"
    break;

  case 130: /* const: CONST_CHAR  */
#line 380 "parser.y"
                 { (yyval.tree) = mk_char_const((yyvsp[0].str_value)); }
#line 2581 "parser.tab.cpp"
    break;

  case 131: /* const: KW_TRUE  */
#line 381 "parser.y"
              { (yyval.tree) = mk_boolean_const(true); }
#line 2587 "parser.tab.cpp"
    break;

  case 132: /* const: KW_FALSE  */
#line 382 "parser.y"
               { (yyval.tree) = mk_boolean_const(false); }
#line 2593 "parser.tab.cpp"
    break;

  case 133: /* const: KW_NULL  */
#line 383 "parser.y"
              { (yyval.tree) = mk_null_const(); }
#line 2599 "parser.tab.cpp"
    break;

  case 134: /* const: array  */
#line 384 "parser.y"
            { (yyval.tree) = mk_array_const((yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2605 "parser.tab.cpp"
    break;

  case 140: /* method_params_list: '(' params ')'  */
#line 403 "parser.y"
                   { printf("PARSER found method params list\n"); }
#line 2611 "parser.tab.cpp"
    break;

  case 154: /* type: INT_KW  */
#line 431 "parser.y"
             { (yyval.tree) = mk_integer_type(); }
#line 2617 "parser.tab.cpp"
    break;

  case 155: /* type: DOUBLE_KW  */
#line 432 "parser.y"
                { (yyval.tree) = mk_real_type(); }
#line 2623 "parser.tab.cpp"
    break;

  case 156: /* type: STRING_KW  */
#line 433 "parser.y"
                { (yyval.tree) = mk_string_type(); }
#line 2629 "parser.tab.cpp"
    break;

  case 157: /* type: CHAR_KW  */
#line 434 "parser.y"
              { (yyval.tree) = mk_char_type(); }
#line 2635 "parser.tab.cpp"
    break;

  case 158: /* type: BOOLEAN_KW  */
#line 435 "parser.y"
                 { (yyval.tree) = mk_boolean_type(); }
#line 2641 "parser.tab.cpp"
    break;

  case 159: /* type: ANY_KW  */
#line 436 "parser.y"
             { (yyval.tree) = mk_any_type(); }
#line 2647 "parser.tab.cpp"
    break;

  case 160: /* type: UNIT_KW  */
#line 437 "parser.y"
              { (yyval.tree) = mk_unit_type(); }
#line 2653 "parser.tab.cpp"
    break;

  case 161: /* type_list_car: type  */
#line 441 "parser.y"
           { (yyval.tree) = mk_list(); (yyval.tree) = add_to_list((yyval.tree), (yyvsp[0].tree)); }
#line 2659 "parser.tab.cpp"
    break;

  case 162: /* type_list_car: type_list_car RIGHT_ARROW_OPERATOR type  */
#line 442 "parser.y"
                                              { (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 2665 "parser.tab.cpp"
    break;

  case 163: /* type_list: type  */
#line 446 "parser.y"
           { (yyval.tree) = mk_list(); (yyval.tree) = add_to_list((yyval.tree), (yyvsp[0].tree)); }
#line 2671 "parser.tab.cpp"
    break;

  case 164: /* type_list: type_list_simple ',' type  */
#line 447 "parser.y"
                                { (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 2677 "parser.tab.cpp"
    break;

  case 165: /* type_list_simple: '(' type_list ')' RIGHT_ARROW_OPERATOR type  */
#line 451 "parser.y"
                                                 { (yyval.tree) = add_to_list((yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2683 "parser.tab.cpp"
    break;

  case 166: /* array: array_literal  */
#line 462 "parser.y"
                     {(yyval.tree) = mk_array_literal((yyvsp[0].tree)); }
#line 2689 "parser.tab.cpp"
    break;

  case 167: /* array: initialized_array  */
#line 463 "parser.y"
                         {(yyval.tree) = mk_initialized_array((yyvsp[0].tree));}
#line 2695 "parser.tab.cpp"
    break;

  case 168: /* array_literal: ARRAY endlOpt '(' expr_list_e ')'  */
#line 467 "parser.y"
                                        {  (yyval.tree) = mk_array_with_expr_list((yyvsp[-1].tree)); }
#line 2701 "parser.tab.cpp"
    break;

  case 169: /* array_literal: ARRAY  */
#line 468 "parser.y"
                                   { (yyval.tree) = mk_empty_array(); }
#line 2707 "parser.tab.cpp"
    break;

  case 170: /* initialized_array: NEW endlOpt ARRAY endlOpt '[' type ']' '(' expr ')'  */
#line 472 "parser.y"
                                                           { (yyval.tree) = mk_initialized_array_with_type_and_expr((yyvsp[-4].tree), (yyvsp[-1].tree));}
#line 2713 "parser.tab.cpp"
    break;

  case 171: /* endlList: ENDL  */
#line 481 "parser.y"
                    { printf("PARSER found ENDL\n"); }
#line 2719 "parser.tab.cpp"
    break;

  case 172: /* endlList: endlList ENDL  */
#line 482 "parser.y"
                    { printf("PARSER found endlList\n"); }
#line 2725 "parser.tab.cpp"
    break;

  case 173: /* endlOpt: endlList  */
#line 487 "parser.y"
               { printf("PARSER found endlOpt\n"); }
#line 2731 "parser.tab.cpp"
    break;

  case 175: /* semicolonList: ';'  */
#line 493 "parser.y"
                   { printf("PARSER found SEMICOLON\n"); }
#line 2737 "parser.tab.cpp"
    break;

  case 176: /* semicolonList: semicolonList ';'  */
#line 494 "parser.y"
                        { printf("PARSER found semicolonList\n"); }
#line 2743 "parser.tab.cpp"
    break;

  case 177: /* separator_List: ENDL  */
#line 498 "parser.y"
            { printf("PARSER found ENDL\n"); }
#line 2749 "parser.tab.cpp"
    break;

  case 178: /* separator_List: ';'  */
#line 499 "parser.y"
            { printf("PARSER found SEMICOLON\n"); }
#line 2755 "parser.tab.cpp"
    break;

  case 179: /* separator_List: separator_List ENDL  */
#line 500 "parser.y"
                            { printf("PARSER add ENDL to separator_List\n"); }
#line 2761 "parser.tab.cpp"
    break;

  case 180: /* separator_List: separator_List ';'  */
#line 501 "parser.y"
                           { printf("PARSER add ; to separator_List\n"); }
#line 2767 "parser.tab.cpp"
    break;


#line 2771 "parser.tab.cpp"

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

#line 508 "parser.y"

