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
  YYSYMBOL_22_ = 22,                       /* '.'  */
  YYSYMBOL_NUM_10 = 23,                    /* NUM_10  */
  YYSYMBOL_NUM_16 = 24,                    /* NUM_16  */
  YYSYMBOL_REAL_NUMBER = 25,               /* REAL_NUMBER  */
  YYSYMBOL_REAL_NUMBER_EXPONENT = 26,      /* REAL_NUMBER_EXPONENT  */
  YYSYMBOL_IDENTIFIER = 27,                /* IDENTIFIER  */
  YYSYMBOL_CONST_CHAR = 28,                /* CONST_CHAR  */
  YYSYMBOL_CONST_STRING = 29,              /* CONST_STRING  */
  YYSYMBOL_NEWLINE = 30,                   /* NEWLINE  */
  YYSYMBOL_VAL = 31,                       /* VAL  */
  YYSYMBOL_VAR = 32,                       /* VAR  */
  YYSYMBOL_ELSE = 33,                      /* ELSE  */
  YYSYMBOL_IF = 34,                        /* IF  */
  YYSYMBOL_FOR = 35,                       /* FOR  */
  YYSYMBOL_DO = 36,                        /* DO  */
  YYSYMBOL_WHILE = 37,                     /* WHILE  */
  YYSYMBOL_MATCH = 38,                     /* MATCH  */
  YYSYMBOL_CASE = 39,                      /* CASE  */
  YYSYMBOL_PRINTLN = 40,                   /* PRINTLN  */
  YYSYMBOL_READLINE = 41,                  /* READLINE  */
  YYSYMBOL_ARRAY = 42,                     /* ARRAY  */
  YYSYMBOL_OVERRIDE = 43,                  /* OVERRIDE  */
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
  YYSYMBOL_DEF = 66,                       /* DEF  */
  YYSYMBOL_NEW = 67,                       /* NEW  */
  YYSYMBOL_PROTECTED = 68,                 /* PROTECTED  */
  YYSYMBOL_PRIVATE = 69,                   /* PRIVATE  */
  YYSYMBOL_CLASS = 70,                     /* CLASS  */
  YYSYMBOL_EXTENDS = 71,                   /* EXTENDS  */
  YYSYMBOL_ABSTRACT = 72,                  /* ABSTRACT  */
  YYSYMBOL_NOT = 73,                       /* NOT  */
  YYSYMBOL_CASE_PATTERN = 74,              /* CASE_PATTERN  */
  YYSYMBOL_75_ = 75,                       /* '{'  */
  YYSYMBOL_76_ = 76,                       /* '}'  */
  YYSYMBOL_77_ = 77,                       /* ':'  */
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
#define YYLAST   1333

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  183
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
       2,     2,     2,     2,     2,     2,     2,    15,     8,     2,
      18,    19,    13,    11,     5,    12,    22,    14,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    77,    78,
      10,     6,     9,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    20,     2,    21,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    75,     7,    76,     2,     2,     2,     2,
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
      16,    17,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   122,   122,   129,   130,   131,   135,   136,   137,   138,
     142,   147,   148,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   172,
     173,   177,   178,   191,   192,   200,   201,   209,   210,   211,
     212,   213,   214,   218,   219,   223,   224,   225,   226,   227,
     228,   229,   230,   239,   240,   241,   249,   250,   251,   252,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   286,   290,   296,   301,   302,   308,   309,   310,   320,
     321,   326,   327,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   368,   369,   370,   371,   376,
     377,   378,   379,   380,   381,   382,   388,   389,   390,   391,
     396,   401,   402,   406,   407,   408,   409,   410,   411,   412,
     413,   417,   418,   422,   423,   429,   430,   431,   432,   433,
     434,   435,   439,   440,   444,   445,   449,   460,   461,   465,
     466,   470,   479,   480,   485,   486,   491,   492,   496,   497,
     498,   499,   503,   504
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
  "']'", "'.'", "NUM_10", "NUM_16", "REAL_NUMBER", "REAL_NUMBER_EXPONENT",
  "IDENTIFIER", "CONST_CHAR", "CONST_STRING", "NEWLINE", "VAL", "VAR",
  "ELSE", "IF", "FOR", "DO", "WHILE", "MATCH", "CASE", "PRINTLN",
  "READLINE", "ARRAY", "OVERRIDE", "KW_TRUE", "KW_FALSE", "KW_NULL", "EQ",
  "NEQ", "KW_OR", "KW_AND", "MORE_OR_EQUAL_OPERATOR",
  "LESS_OR_EQUAL_OPERATOR", "INT_KW", "DOUBLE_KW", "STRING_KW", "CHAR_KW",
  "BOOLEAN_KW", "ANY_KW", "UNIT_KW", "TO", "BY", "YIELD",
  "GENERATOR_OPERATOR", "RIGHT_ARROW_OPERATOR", "ID_COLLECTION", "DEF",
  "NEW", "PROTECTED", "PRIVATE", "CLASS", "EXTENDS", "ABSTRACT", "NOT",
  "CASE_PATTERN", "'{'", "'}'", "':'", "';'", "$accept", "program",
  "class", "class_header", "abstract_class_header", "case_class_header",
  "class_params", "class_params_e", "create_instance_class",
  "visibility_modifier", "inheritance", "statement_expr_list",
  "statement_expr_list_e", "statement", "if_else_expr", "for_expr",
  "generators_and_conditions_parentheses_List",
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

#define YYPACT_NINF (-444)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-176)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,  -444,  -444,    54,  -444,     9,   837,  -444,  -444,  -444,
     432,   432,   935,  -444,  -444,  -444,  -444,    34,  -444,  -444,
      60,    60,    60,    60,    60,    60,    60,    49,    86,   102,
      65,  -444,  -444,  -444,    60,    60,  -444,  -444,    60,    60,
    -444,    -5,    62,    63,  -444,   618,    11,  -444,  -444,  -444,
    -444,  -444,  -444,  1179,  -444,  -444,  -444,  -444,  -444,  -444,
    -444,  -444,  -444,  -444,    14,   975,    43,  -444,   432,    92,
     130,   154,   163,   151,   159,   170,    32,   432,   186,   135,
     432,   188,   199,    60,   191,    31,   194,   152,     0,     0,
       0,  -444,   775,  -444,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
     307,  -444,   204,    60,   216,    52,  1179,   213,   231,   432,
    -444,    60,    60,    60,   432,   131,    60,   627,   432,    60,
     996,  -444,   432,   224,    60,   237,    60,    23,  -444,   181,
     182,   193,   618,  -444,  1179,   432,   432,   432,   432,   432,
     432,   432,   432,   432,   185,   432,   432,   432,   432,   432,
     432,  -444,  -444,  -444,  -444,  -444,  -444,  -444,  -444,   198,
     189,   207,  -444,   275,   264,   130,   265,   432,    19,    29,
    1042,   222,   432,     4,   143,   251,  1057,   262,  -444,   271,
      60,    15,   432,   276,     1,  -444,  -444,  -444,  -444,  1027,
    1072,   214,   214,   146,   146,  -444,  -444,  -444,    60,   230,
     230,   559,   548,   214,   214,   307,   307,    60,    60,  -444,
    -444,  1225,    60,    60,    60,    60,    60,    88,  1179,    60,
     432,   160,    60,    60,    60,   279,    60,    60,  -444,    24,
      60,   272,    60,    60,   281,   307,    94,    60,  -444,   259,
    -444,    21,   432,   432,   432,    26,   432,    33,   432,  -444,
      60,   241,   729,  1179,   240,   432,   242,   432,   100,   -12,
     432,   432,   288,    60,    60,    60,   432,   233,   184,   307,
      25,  -444,   286,   285,   287,   308,   289,    77,   290,    60,
      60,  1266,  1179,  1179,  1179,   157,   295,    60,  1179,   298,
      60,  1103,   277,  1266,    60,  1179,   249,  1179,    60,  1179,
      60,    60,    60,    60,  1118,  1179,    94,   432,   307,    28,
    1179,  -444,    60,    60,   272,    60,   302,   245,   246,   104,
     260,   309,   310,   316,   156,    45,  -444,  -444,   321,   330,
     307,   338,   307,   339,    60,    36,   294,   432,  -444,   297,
     325,   311,   432,   890,   172,  -444,   353,  1179,    60,    60,
      60,   352,   432,   190,   307,   432,   307,   307,   346,   348,
      97,  -444,   299,   300,   432,  -444,    60,   373,    60,  -444,
    -444,    12,   315,   307,   359,    60,   360,    60,   432,    60,
    1266,  1179,  1266,  -444,   323,    60,  1179,    60,  1179,    60,
     432,   260,   378,   432,   307,    60,  1179,  -444,    60,  1164,
     379,   380,   312,   313,   361,   364,   307,   307,    42,   329,
     156,  -444,   356,   307,  -444,    60,   432,    60,   432,  1225,
     432,  -444,   335,    60,  1218,   432,   351,  1179,  -444,    60,
    1179,    60,   432,   409,  -444,  1266,  1266,   307,   307,   341,
     342,   415,   417,  -444,    11,    60,    60,  -444,   422,  1179,
     426,  1179,  1225,  1266,  1266,  -444,   374,  1179,    60,   432,
     429,  1179,    60,  -444,  -444,   431,   433,   307,   307,  1266,
    1266,   432,   381,   156,    60,    60,  -444,   385,    60,  1242,
    1179,    60,   432,  1266,  1266,   436,   441,  -444,  -444,  1179,
      11,    60,   -14,   -14,    60,  1266,  -444,   388,   432,  1179,
    -444,  -444,  1266,  1266,   432,   387,  -444,  -444,  1266,   391,
      60,  1179,  -444,  -444,  1179,    11,  -444,    60,  1266,   432,
    1266,   392,  1179,  -444,    60,  1266,  -444
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     183,   178,   179,     0,     2,   182,     0,     1,   180,   181,
       0,     0,   139,   125,   126,   127,   128,    94,   131,   130,
     175,   175,   175,   175,   175,   175,   175,     0,     0,   170,
       0,   132,   133,   134,   175,   175,    34,    33,   175,   175,
      51,     0,     0,     0,   121,     0,   183,    37,   114,   115,
     116,   117,   118,    39,   129,    93,   119,    52,   120,   135,
     167,   168,   113,   112,    94,     0,     0,   172,    90,     0,
     153,   174,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   175,     0,     0,     0,     0,   183,   183,
     183,    38,   182,    43,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   175,   175,   175,
       0,    96,     0,   175,     0,    89,    91,     0,     0,    90,
     173,   175,   175,   175,     0,     0,   175,   175,     0,   175,
       0,   122,    90,     0,   175,    31,   175,   175,    10,     0,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   155,   156,   157,   158,   159,   160,   161,   162,   136,
       0,     0,   151,     0,     0,   154,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   123,     0,
     175,     0,    90,     0,     0,     3,     4,     5,    42,   109,
     108,    97,    98,   103,   104,   106,   105,   107,   175,   101,
     102,   110,   111,    99,   100,     0,     0,   175,   175,   124,
     152,    95,   175,   175,   175,   175,   175,     0,    60,   175,
       0,     0,   175,   175,   175,     0,   175,   175,   169,     0,
     175,   139,   175,   175,     0,     0,    30,   175,     9,     0,
     163,   137,     0,     0,     0,     0,     0,     0,     0,    63,
     175,     0,     0,    64,     0,     0,     0,     0,   174,     0,
       0,     0,     0,   175,   175,   175,     0,     0,     0,     0,
       0,    32,     0,     0,     0,    29,     0,     0,     0,   175,
     175,     0,   140,    92,    45,     0,     0,   175,    46,     0,
     175,    55,     0,     0,   175,    57,     0,    65,   175,    69,
     175,   175,   175,   175,     0,    81,    30,     0,     0,     0,
     146,   141,   175,   175,   139,   175,     0,     0,     0,     0,
       6,     0,     0,    35,     0,     0,   138,   164,     0,     0,
       0,     0,     0,     0,   175,     0,    61,     0,    68,     0,
       0,     0,     0,     0,     0,    82,     0,   150,   175,   175,
     175,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     0,     0,     0,    85,   175,    84,   175,    83,
     176,   175,     0,     0,     0,   175,     0,   175,     0,   175,
       0,    56,     0,    72,     0,   175,    73,   175,    59,   175,
       0,    11,     0,     0,     0,   175,   145,   142,   175,     0,
      14,    13,     0,     0,     0,     0,     0,     0,   175,     0,
       0,   177,     0,     0,   165,   175,     0,   175,     0,    53,
       0,    62,    66,   175,     0,     0,     0,    74,    12,   175,
     149,   175,     0,     0,   171,     0,     0,     0,     0,     0,
       0,    22,    21,    36,   183,   175,   175,   166,     0,    47,
       0,    48,    54,     0,     0,    80,     0,    58,   175,     0,
       0,   144,   175,    16,    15,    18,    17,     0,     0,     0,
       0,     0,     0,     0,   175,   175,    67,    70,   175,     0,
     148,   175,     0,     0,     0,    26,    25,    24,    23,    86,
     183,   175,     0,     0,   175,     0,    77,     0,     0,   143,
      20,    19,     0,     0,     0,     0,    50,    49,     0,    78,
     175,   147,    28,    27,    88,   183,    71,   175,     0,     0,
       0,    75,    87,    79,   175,     0,    76
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -444,  -444,  -444,   362,  -444,  -444,  -444,   138,  -444,     3,
    -301,  -444,   144,   -43,  -444,  -444,  -444,  -444,  -444,  -444,
    -444,  -402,  -444,   -95,  -327,    -6,  -444,  -226,  -230,  -444,
     225,  -444,   347,  -444,   303,   254,  -444,  -216,  -443,  -444,
    -444,  -218,   304,  -444,   425,   -38
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,    40,    41,    42,    43,   285,   286,    44,   287,
     248,    46,     4,    47,    48,    49,   183,   234,    50,    51,
      52,   376,   290,   114,   115,   116,    54,    55,    66,    56,
     243,    57,    70,    58,   168,   169,   338,   297,    59,    60,
      61,    71,   173,   381,     5,     6
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      53,   261,    91,     1,    62,    63,    65,   377,    93,    45,
     -44,   278,     8,     1,     1,    67,   268,    67,   455,   246,
    -175,   240,   311,   229,   176,   222,    67,   291,    29,   371,
     273,   323,    68,   241,   359,   224,    69,   189,   230,   120,
    -175,   300,   241,   324,   295,    67,   324,   418,   112,   143,
     125,   295,    68,   260,     7,    67,    69,  -175,   135,   516,
     517,   453,   113,    67,   312,   336,   313,    80,   296,   389,
      88,   127,   247,   136,   130,   299,   -44,   346,     2,   339,
     349,   501,   231,   345,   378,   215,   144,     9,     2,     2,
     421,   110,   242,   377,   363,   142,   223,   244,    -8,   198,
     438,   274,   325,   120,    81,   360,   225,   126,   331,   332,
     117,    13,    14,    15,    16,   259,    18,    19,   180,   118,
    -175,   379,   186,   380,   394,   283,   284,   310,   414,   415,
      29,    83,    31,    32,    33,   368,   369,    89,    90,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   119,   209,
     210,   211,   212,   213,   214,   260,   377,   120,   181,   100,
     101,   102,    36,    37,   431,   182,   432,    10,    11,   121,
     232,   221,    36,    37,    12,   295,   228,   233,   122,    13,
      14,    15,    16,    17,    18,    19,   123,   264,   124,   112,
      22,    23,    24,    25,   265,   112,    27,    28,    29,   399,
      31,    32,    33,   321,   128,   129,   400,   131,   466,   407,
     161,   162,   163,   164,   165,   166,   167,   132,   134,   473,
     474,   137,    38,    35,   263,    98,    99,   100,   101,   102,
     375,   170,   139,   140,   141,   172,   174,   486,   487,    96,
      97,    98,    99,   100,   101,   102,   292,   293,   294,    68,
     298,   190,   301,   497,   498,   192,   305,   195,   196,   307,
     208,   309,   215,   507,   314,   315,   216,   510,   511,   197,
     320,   217,    13,    14,    15,    16,   348,    18,    19,   519,
     218,   108,   109,   219,   220,   227,   522,   523,   235,   237,
     238,    29,   526,    31,    32,    33,   245,   270,   289,   277,
     281,   303,   531,   306,   533,   308,   316,   326,   330,   536,
     110,   357,   327,   329,   328,   340,   260,   333,   342,   136,
     365,    72,   366,   367,    73,    74,    75,    76,    77,    78,
      79,   247,   370,    82,   374,   383,   372,   373,    84,    85,
     382,   391,    86,    87,   385,   387,   396,   398,    13,    14,
      15,    16,   393,    18,    19,   390,   406,   392,   405,   409,
     161,   162,   163,   164,   165,   166,   167,    29,    72,    31,
      32,    33,   401,   412,   395,   413,   416,   417,  -175,   423,
     425,   427,   429,   433,   439,   445,   446,   133,   449,   447,
     448,   450,   260,   454,   437,   456,   463,   440,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   468,   472,   481,   171,   477,   478,
     459,   479,   461,   480,   462,   177,   178,   179,   484,   467,
     184,   185,   485,   187,   488,   491,   471,   493,   191,   494,
     193,   194,   512,    10,    11,   500,   504,   513,   520,   138,
      12,   525,   527,   534,   356,    13,    14,    15,    16,    17,
      18,    19,   514,   490,   275,   175,    22,    23,    24,    25,
     251,    92,    27,    28,    29,   499,    31,    32,    33,     0,
       0,     0,     0,     0,     0,     0,   509,   529,     0,     0,
       0,     0,     0,     0,   239,     0,     0,     0,     0,    35,
       0,     0,   521,     0,     0,     0,     0,     0,   524,     0,
       0,     0,   249,     0,     0,     0,     0,     0,   250,     0,
       0,   252,   253,   532,     0,     0,   254,   255,   256,   257,
     258,     0,     0,   262,     0,     0,   266,   267,   269,     0,
     271,   272,     0,     0,   276,     0,   279,   280,   282,     0,
       0,   288,     0,     0,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   302,     0,    94,    95,    96,    97,
      98,    99,   100,   101,   102,     0,     0,   317,   318,   319,
       0,     0,   322,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   334,   335,   104,   105,     0,   337,   108,
     109,   341,     0,     0,   343,     0,   104,   105,   347,   107,
     108,   109,   350,     0,   351,   352,   353,   354,     0,     0,
       0,   358,     0,     0,     0,     0,   361,   362,     0,   364,
      67,     0,     0,     0,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   384,     0,   386,     0,     0,   388,    20,
      21,     0,     0,     0,     0,     0,     0,    26,     0,     0,
       0,    30,   402,   403,   404,   103,     0,   408,     0,   410,
     411,     0,     0,     0,   104,   105,   106,   107,   108,   109,
     419,     0,   420,     0,    34,   422,   424,     0,    38,   426,
      39,   428,     0,   430,     0,     0,     0,     0,     0,   434,
       0,   435,     0,   436,     0,     0,     0,   441,     0,   442,
       0,     0,   443,     0,     0,     0,     0,     0,     0,   451,
     452,     0,     0,     0,     0,     0,   457,     0,     0,   458,
       0,   460,     0,     0,     0,     0,     0,   464,     0,     0,
      10,    11,     0,   469,     0,   470,     0,    12,     0,     0,
     475,   476,    13,    14,    15,    16,    17,    18,    19,   482,
     483,     0,     0,    22,    23,    24,    25,     0,     0,    27,
      28,    29,   489,    31,    32,    33,   492,     0,     8,     0,
     495,   496,     0,     0,     0,     0,    10,    11,   502,   503,
       0,   304,   505,    12,     0,   508,    35,     0,    13,    14,
      15,    16,    17,    18,    19,   515,    20,    21,   518,    22,
      23,    24,    25,     0,    26,    27,    28,    29,    30,    31,
      32,    33,     0,     0,   528,     0,     0,     0,     0,     0,
       0,   530,     0,     0,     0,     0,     0,     0,   535,     0,
       0,    34,    35,    36,    37,    38,     0,    39,    10,    11,
       0,     0,     0,     9,     0,    12,     0,     0,     0,     0,
      13,    14,    15,    16,    17,    18,    19,     0,    20,    21,
       0,    22,    23,    24,    25,     0,    26,    27,    28,    29,
      30,    31,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,    34,    35,    36,    37,    38,    12,    39,
       0,     0,     0,    13,    14,    15,    16,    17,    18,    19,
       0,     0,     0,     0,    22,    23,    24,    25,     0,     0,
      27,    28,    29,     0,    31,    32,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,   397,    12,     0,     0,     0,    35,    13,    14,
      15,    16,    64,    18,    19,     0,     0,     0,     0,    22,
      23,    24,    25,     0,     0,    27,    28,    29,     0,    31,
      32,    33,    94,    95,    96,    97,    98,    99,   100,   101,
     102,     0,     0,     0,   111,     0,     0,     0,     0,     0,
       0,     0,    35,    94,    95,    96,    97,    98,    99,   100,
     101,   102,     0,   103,     0,   188,     0,     0,     0,     0,
       0,     0,   104,   105,   106,   107,   108,   109,     0,     0,
       0,     0,     0,     0,   103,    95,    96,    97,    98,    99,
     100,   101,   102,   104,   105,   106,   107,   108,   109,    94,
      95,    96,    97,    98,    99,   100,   101,   102,     0,     0,
       0,   226,     0,     0,    94,    95,    96,    97,    98,    99,
     100,   101,   102,     0,   104,   105,   236,     0,   108,   109,
     103,    96,    97,    98,    99,   100,   101,   102,     0,   104,
     105,   106,   107,   108,   109,   103,     0,     0,     0,     0,
       0,     0,     0,     0,   104,   105,   106,   107,   108,   109,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   104,
     105,     0,     0,   108,   109,    94,    95,    96,    97,    98,
      99,   100,   101,   102,     0,     0,   344,   355,     0,     0,
       0,   103,     0,     0,     0,     0,     0,     0,     0,     0,
     104,   105,   106,   107,   108,   109,   103,     0,     0,     0,
       0,     0,     0,     0,     0,   104,   105,   106,   107,   108,
     109,    94,    95,    96,    97,    98,    99,   100,   101,   102,
       0,     0,     0,   444,     0,     0,    94,    95,    96,    97,
      98,    99,   100,   101,   102,     0,     0,     0,     0,     0,
       0,     0,   103,     0,     0,     0,     0,     0,     0,     0,
       0,   104,   105,   106,   107,   108,   109,   103,     0,     0,
       0,     0,     0,     0,     0,     0,   104,   105,   106,   107,
     108,   109,    94,    95,    96,    97,    98,    99,   100,   101,
     102,    13,    14,    15,    16,   465,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      29,     0,    31,    32,    33,    13,    14,    15,    16,   506,
      18,    19,   104,   105,   106,   107,   108,   109,     0,     0,
       0,     0,     0,     0,    29,   260,    31,    32,    33,    13,
      14,    15,    16,     0,    18,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    29,   260,
      31,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   260
};

static const yytype_int16 yycheck[] =
{
       6,   227,    45,     3,    10,    11,    12,   334,    46,     6,
       0,   241,     3,     3,     3,     3,   234,     3,   420,    18,
       6,     6,    34,    19,   119,     6,     3,     6,    42,   330,
       6,     6,    18,    18,     6,     6,    22,   132,    34,     3,
       6,   257,    18,    18,    18,     3,    18,   374,     5,    92,
      18,    18,    18,    67,     0,     3,    22,     5,    27,   502,
     503,    19,    19,     3,    76,   291,    78,    18,    42,    33,
      75,    77,    71,    42,    80,    42,    76,   303,    78,   295,
     306,   483,    78,   301,    39,    64,    92,    78,    78,    78,
      78,    77,    77,   420,   324,    92,    77,   192,    75,   142,
     401,    77,    77,     3,    18,    77,    77,    75,    31,    32,
      18,    23,    24,    25,    26,    27,    28,    29,   124,    27,
      18,    76,   128,    78,   350,    31,    32,    27,    31,    32,
      42,    66,    44,    45,    46,    31,    32,    75,    75,   145,
     146,   147,   148,   149,   150,   151,   152,   153,    18,   155,
     156,   157,   158,   159,   160,    67,   483,     3,    27,    13,
      14,    15,    68,    69,   390,    34,   392,    11,    12,     6,
      27,   177,    68,    69,    18,    18,   182,    34,    27,    23,
      24,    25,    26,    27,    28,    29,    27,    27,    18,     5,
      34,    35,    36,    37,    34,     5,    40,    41,    42,    27,
      44,    45,    46,    19,    18,    70,    34,    19,   434,    19,
      53,    54,    55,    56,    57,    58,    59,    18,    27,   445,
     446,    27,    70,    67,   230,    11,    12,    13,    14,    15,
      74,    27,    88,    89,    90,    19,    23,   463,   464,     9,
      10,    11,    12,    13,    14,    15,   252,   253,   254,    18,
     256,    27,   258,   479,   480,    18,   262,    76,    76,   265,
      75,   267,    64,   489,   270,   271,    77,   493,   494,    76,
     276,    64,    23,    24,    25,    26,    27,    28,    29,   505,
       5,    51,    52,    19,    19,    63,   512,   513,    37,    27,
      19,    42,   518,    44,    45,    46,    20,    18,    39,    27,
      19,    60,   528,    63,   530,    63,    18,    21,    19,   535,
      77,   317,    27,     5,    27,    20,    67,    27,    20,    42,
      18,    17,    77,    77,    20,    21,    22,    23,    24,    25,
      26,    71,   329,    29,    18,     5,    27,    27,    34,    35,
      19,   347,    38,    39,     6,     6,   352,   353,    23,    24,
      25,    26,    27,    28,    29,    61,   362,    60,     6,   365,
      53,    54,    55,    56,    57,    58,    59,    42,    64,    44,
      45,    46,    19,    27,    63,    27,    77,    77,     5,    64,
      21,    21,   388,    60,     6,     6,     6,    83,    27,    77,
      77,    27,    67,    64,   400,    39,    61,   403,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,    63,     6,   454,   113,    77,    77,
     426,     6,   428,     6,   430,   121,   122,   123,     6,   435,
     126,   127,     6,   129,    60,     6,   442,     6,   134,     6,
     136,   137,     6,    11,    12,    64,    61,     6,    60,    87,
      18,    64,    61,    61,   316,    23,    24,    25,    26,    27,
      28,    29,   500,   469,   239,   118,    34,    35,    36,    37,
     216,    46,    40,    41,    42,   481,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   492,   525,    -1,    -1,
      -1,    -1,    -1,    -1,   190,    -1,    -1,    -1,    -1,    67,
      -1,    -1,   508,    -1,    -1,    -1,    -1,    -1,   514,    -1,
      -1,    -1,   208,    -1,    -1,    -1,    -1,    -1,   215,    -1,
      -1,   217,   218,   529,    -1,    -1,   222,   223,   224,   225,
     226,    -1,    -1,   229,    -1,    -1,   232,   233,   234,    -1,
     236,   237,    -1,    -1,   240,    -1,   242,   243,   245,    -1,
      -1,   247,    -1,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,   260,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,   273,   274,   275,
      -1,    -1,   279,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   289,   290,    47,    48,    -1,   295,    51,
      52,   297,    -1,    -1,   300,    -1,    47,    48,   304,    50,
      51,    52,   308,    -1,   310,   311,   312,   313,    -1,    -1,
      -1,   318,    -1,    -1,    -1,    -1,   322,   323,    -1,   325,
       3,    -1,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,   340,    -1,   342,    -1,    -1,   344,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,   358,   359,   360,    38,    -1,   364,    -1,   366,
     367,    -1,    -1,    -1,    47,    48,    49,    50,    51,    52,
     376,    -1,   378,    -1,    66,   381,   383,    -1,    70,   385,
      72,   387,    -1,   389,    -1,    -1,    -1,    -1,    -1,   395,
      -1,   397,    -1,   399,    -1,    -1,    -1,   404,    -1,   405,
      -1,    -1,   408,    -1,    -1,    -1,    -1,    -1,    -1,   416,
     417,    -1,    -1,    -1,    -1,    -1,   423,    -1,    -1,   425,
      -1,   427,    -1,    -1,    -1,    -1,    -1,   433,    -1,    -1,
      11,    12,    -1,   439,    -1,   441,    -1,    18,    -1,    -1,
     447,   448,    23,    24,    25,    26,    27,    28,    29,   455,
     456,    -1,    -1,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,   468,    44,    45,    46,   472,    -1,     3,    -1,
     477,   478,    -1,    -1,    -1,    -1,    11,    12,   484,   485,
      -1,    62,   488,    18,    -1,   491,    67,    -1,    23,    24,
      25,    26,    27,    28,    29,   501,    31,    32,   504,    34,
      35,    36,    37,    -1,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    -1,   520,    -1,    -1,    -1,    -1,    -1,
      -1,   527,    -1,    -1,    -1,    -1,    -1,    -1,   534,    -1,
      -1,    66,    67,    68,    69,    70,    -1,    72,    11,    12,
      -1,    -1,    -1,    78,    -1,    18,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    11,    12,    66,    67,    68,    69,    70,    18,    72,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    -1,    -1,
      40,    41,    42,    -1,    44,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    11,    12,    -1,    -1,
      -1,    -1,    62,    18,    -1,    -1,    -1,    67,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    -1,    -1,    40,    41,    42,    -1,    44,
      45,    46,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    38,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    49,    50,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    38,     8,     9,    10,    11,    12,
      13,    14,    15,    47,    48,    49,    50,    51,    52,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    -1,
      -1,    19,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    47,    48,    19,    -1,    51,    52,
      38,     9,    10,    11,    12,    13,    14,    15,    -1,    47,
      48,    49,    50,    51,    52,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,    52,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    47,
      48,    -1,    -1,    51,    52,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    33,    19,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    -1,    19,    -1,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    52,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    44,    45,    46,    23,    24,    25,    26,    27,
      28,    29,    47,    48,    49,    50,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    67,    44,    45,    46,    23,
      24,    25,    26,    -1,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    67,
      44,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    78,    80,    91,   123,   124,     0,     3,    78,
      11,    12,    18,    23,    24,    25,    26,    27,    28,    29,
      31,    32,    34,    35,    36,    37,    39,    40,    41,    42,
      43,    44,    45,    46,    66,    67,    68,    69,    70,    72,
      81,    82,    83,    84,    87,    88,    90,    92,    93,    94,
      97,    98,    99,   104,   105,   106,   108,   110,   112,   117,
     118,   119,   104,   104,    27,   104,   107,     3,    18,    22,
     111,   120,   121,   121,   121,   121,   121,   121,   121,   121,
      18,    18,   121,    66,   121,   121,   121,   121,    75,    75,
      75,    92,   123,   124,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    38,    47,    48,    49,    50,    51,    52,
      77,    19,     5,    19,   102,   103,   104,    18,    27,    18,
       3,     6,    27,    27,    18,    18,    75,   104,    18,    70,
     104,    19,    18,   121,    27,    27,    42,    27,    82,    91,
      91,    91,    88,    92,   104,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,    53,    54,    55,    56,    57,    58,    59,   113,   114,
      27,   121,    19,   121,    23,   111,   102,   121,   121,   121,
     104,    27,    34,    95,   121,   121,   104,   121,    19,   102,
      27,   121,    18,   121,   121,    76,    76,    76,    92,   104,
     104,   104,   104,   104,   104,   104,   104,   104,    75,   104,
     104,   104,   104,   104,   104,    64,    77,    64,     5,    19,
      19,   104,     6,    77,     6,    77,    19,    63,   104,    19,
      34,    78,    27,    34,    96,    37,    19,    27,    19,   121,
       6,    18,    77,   109,   102,    20,    18,    71,    89,   121,
     113,   114,   121,   121,   121,   121,   121,   121,   121,    27,
      67,   106,   121,   104,    27,    34,   121,   121,   120,   121,
      18,   121,   121,     6,    77,   109,   121,    27,   107,   121,
     121,    19,   113,    31,    32,    85,    86,    88,   121,    39,
     101,     6,   104,   104,   104,    18,    42,   116,   104,    42,
     116,   104,   121,    60,    62,   104,    63,   104,    63,   104,
      27,    34,    76,    78,   104,   104,    18,   121,   121,   121,
     104,    19,   113,     6,    18,    77,    21,    27,    27,     5,
      19,    31,    32,    27,   121,   121,   106,   113,   115,   116,
      20,   121,    20,   121,    33,   120,   106,   121,    27,   106,
     121,   121,   121,   121,   121,    19,    86,   104,   113,     6,
      77,   121,   121,   107,   121,    18,    77,    77,    31,    32,
      88,    89,    27,    27,    18,    74,   100,   103,    39,    76,
      78,   122,    19,     5,   113,     6,   113,     6,   121,    33,
      61,   104,    60,    27,   106,    63,   104,    62,   104,    27,
      34,    19,   121,   121,   121,     6,   104,    19,   113,   104,
     113,   113,    27,    27,    31,    32,    77,    77,   103,   121,
     121,    78,   121,    64,   113,    21,   121,    21,   121,   104,
     121,   106,   106,    60,   121,   121,   121,   104,    89,     6,
     104,   113,   121,   121,    19,     6,     6,    77,    77,    27,
      27,   113,   113,    19,    64,   100,    39,   113,   121,   104,
     121,   104,   104,    61,   121,    27,   106,   104,    63,   121,
     121,   104,     6,   106,   106,   113,   113,    77,    77,     6,
       6,   124,   121,   121,     6,     6,   106,   106,    60,   121,
     104,     6,   121,     6,     6,   113,   113,   106,   106,   104,
      64,   100,   121,   121,    61,   121,    27,   106,   121,   104,
     106,   106,     6,     6,   124,   121,   117,   117,   121,   106,
      60,   104,   106,   106,   104,    64,   106,    61,   121,   124,
     121,   106,   104,   106,    61,   121,   106
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
      95,    95,    95,    95,    95,    95,    95,    95,    95,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    97,    98,    99,   100,   100,   101,   101,   101,   102,
     102,   103,   103,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   105,   105,   105,   105,   106,
     106,   106,   106,   106,   106,   106,   107,   107,   107,   107,
     108,   109,   109,   110,   110,   110,   110,   110,   110,   110,
     110,   111,   111,   112,   112,   113,   113,   113,   113,   113,
     113,   113,   114,   114,   115,   115,   116,   117,   117,   118,
     118,   119,   120,   120,   121,   121,   122,   122,   123,   123,
     123,   123,   124,   124
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
       2,     5,     7,     3,     3,     4,     7,     9,     5,     3,
       8,    11,     5,     5,     6,    12,    15,     9,    10,    13,
       7,     7,     8,     8,     1,     1,     7,    11,     9,     1,
       0,     1,     5,     1,     1,     5,     3,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     5,     7,     0,
       7,     3,     5,    13,    11,     9,     7,    14,    12,    10,
       8,     3,     4,     2,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     3,     5,     1,     1,     5,
       1,    10,     1,     2,     1,     0,     1,     2,     1,     1,
       2,     2,     1,     0
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
#line 209 "parser.y"
                { printf("Add first statement :\n"); }
#line 2111 "parser.tab.cpp"
    break;

  case 38: /* statement_expr_list: visibility_modifier statement  */
#line 210 "parser.y"
                                    { printf("Add first visibility_modifier statement :\n"); }
#line 2117 "parser.tab.cpp"
    break;

  case 39: /* statement_expr_list: expr  */
#line 211 "parser.y"
           { printf("Add first statement :\n"); }
#line 2123 "parser.tab.cpp"
    break;

  case 40: /* statement_expr_list: statement_expr_list separator_List statement  */
#line 212 "parser.y"
                                                    { printf("Add new statement to statement_expr_list :\n"); }
#line 2129 "parser.tab.cpp"
    break;

  case 41: /* statement_expr_list: statement_expr_list separator_List expr  */
#line 213 "parser.y"
                                               { printf("Add new expr to statement_expr_list :\n"); }
#line 2135 "parser.tab.cpp"
    break;

  case 42: /* statement_expr_list: statement_expr_list separator_List visibility_modifier statement  */
#line 214 "parser.y"
                                                                        { printf("Add new visibility_modifier to statement_expr_list :\n"); }
#line 2141 "parser.tab.cpp"
    break;

  case 44: /* statement_expr_list_e: %empty  */
#line 219 "parser.y"
                     { printf("PARSER found statement_list_e - nothing\n"); }
#line 2147 "parser.tab.cpp"
    break;

  case 45: /* statement: VAL endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 223 "parser.y"
                                                       { printf("implicit value declaration:\n"); }
#line 2153 "parser.tab.cpp"
    break;

  case 46: /* statement: VAR endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 224 "parser.y"
                                                       { printf("implicit variable declaration:\n"); }
#line 2159 "parser.tab.cpp"
    break;

  case 47: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 225 "parser.y"
                                                                                           { printf("explicit value declaration:\n"); }
#line 2165 "parser.tab.cpp"
    break;

  case 48: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 226 "parser.y"
                                                                                           { printf("explicit variable declaration:\n"); }
#line 2171 "parser.tab.cpp"
    break;

  case 49: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt ARRAY '[' type ']' endlOpt '=' endlOpt array  */
#line 227 "parser.y"
                                                                                              { printf("explicit array declaration:\n"); }
#line 2177 "parser.tab.cpp"
    break;

  case 50: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt ARRAY '[' type ']' endlOpt '=' endlOpt array  */
#line 228 "parser.y"
                                                                                              { printf("explicit array declaration:\n"); }
#line 2183 "parser.tab.cpp"
    break;

  case 51: /* statement: class  */
#line 229 "parser.y"
            { printf("Class:\n"); }
#line 2189 "parser.tab.cpp"
    break;

  case 52: /* statement: method  */
#line 230 "parser.y"
             { printf("Method:\n"); }
#line 2195 "parser.tab.cpp"
    break;

  case 53: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr ELSE endlOpt expr  */
#line 239 "parser.y"
                                                                           { (yyval.tree) = mk_if_else_expr((yyvsp[-6].tree), (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2201 "parser.tab.cpp"
    break;

  case 54: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr endlList ELSE endlOpt expr  */
#line 240 "parser.y"
                                                                                    { (yyval.tree) = mk_if_else_expr((yyvsp[-7].tree), (yyvsp[-4].tree), (yyvsp[0].tree)); }
#line 2207 "parser.tab.cpp"
    break;

  case 55: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr  */
#line 241 "parser.y"
                                                      { (yyval.tree) = mk_if_expr((yyvsp[-3].tree), (yyvsp[0].tree));}
#line 2213 "parser.tab.cpp"
    break;

  case 56: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt YIELD endlOpt expr  */
#line 249 "parser.y"
                                                                                                                          { printf("FOR in parentheses\n"); }
#line 2219 "parser.tab.cpp"
    break;

  case 57: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt expr  */
#line 250 "parser.y"
                                                                                                            { printf("FOR in parentheses\n"); }
#line 2225 "parser.tab.cpp"
    break;

  case 58: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt YIELD endlOpt expr  */
#line 251 "parser.y"
                                                                                                                                           { printf("FOR in curly_braces\n"); }
#line 2231 "parser.tab.cpp"
    break;

  case 59: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt expr  */
#line 252 "parser.y"
                                                                                                                             { printf("FOR in curly_braces\n"); }
#line 2237 "parser.tab.cpp"
    break;

  case 81: /* while_expr: WHILE endlOpt '(' expr ')' endlOpt expr  */
#line 286 "parser.y"
                                                              { (yyval.tree) = mk_while_expr((yyvsp[-3].tree),(yyvsp[0].tree)); }
#line 2243 "parser.tab.cpp"
    break;

  case 82: /* do_while_expr: DO endlOpt expr endlOpt WHILE '(' expr ')'  */
#line 290 "parser.y"
                                                                 { (yyval.tree) = mk_do_while_expr((yyvsp[-5].tree),(yyvsp[-1].tree)); }
#line 2249 "parser.tab.cpp"
    break;

  case 83: /* match_expr: expr MATCH endlOpt '{' endlOpt case_list endlOpt '}'  */
#line 296 "parser.y"
                                                              {(yyval.tree) = mk_match_expr((yyvsp[-7].tree),(yyvsp[-2].tree));}
#line 2255 "parser.tab.cpp"
    break;

  case 84: /* case_condition: expr_list  */
#line 301 "parser.y"
                                          {(yyval.tree) = add_case_condition((yyvsp[0].tree));}
#line 2261 "parser.tab.cpp"
    break;

  case 85: /* case_condition: CASE_PATTERN  */
#line 302 "parser.y"
                       {(yyval.tree) = add_case_condition((yyvsp[0].tree));}
#line 2267 "parser.tab.cpp"
    break;

  case 86: /* case_list: CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 308 "parser.y"
                                                                                         {(yyval.tree) = mk_list();(yyval.tree) = add_alt_case((yyval.tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2273 "parser.tab.cpp"
    break;

  case 87: /* case_list: case_list endlOpt semicolonList endlOpt CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 309 "parser.y"
                                                                                                                                 {(yyval.tree) = add_alt_case((yyvsp[-10].tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2279 "parser.tab.cpp"
    break;

  case 88: /* case_list: case_list endlOpt CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 310 "parser.y"
                                                                                                           {(yyval.tree) = add_alt_case((yyvsp[-8].tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2285 "parser.tab.cpp"
    break;

  case 89: /* expr_list_e: expr_list  */
#line 320 "parser.y"
                   { printf("PARSER found expr_list - expr_list\n"); }
#line 2291 "parser.tab.cpp"
    break;

  case 90: /* expr_list_e: %empty  */
#line 321 "parser.y"
                     {  (yyval.tree) = mk_list(); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2297 "parser.tab.cpp"
    break;

  case 91: /* expr_list: expr  */
#line 326 "parser.y"
                      { (yyval.tree) = add_to_list(mk_list(), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2303 "parser.tab.cpp"
    break;

  case 92: /* expr_list: expr_list endlOpt ',' endlOpt expr  */
#line 327 "parser.y"
                                          { (yyval.tree) = add_to_list((yyvsp[-4].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2309 "parser.tab.cpp"
    break;

  case 93: /* expr: const  */
#line 332 "parser.y"
                                  {printf("PARSER found expr - const\n"); }
#line 2315 "parser.tab.cpp"
    break;

  case 94: /* expr: IDENTIFIER  */
#line 333 "parser.y"
                                       {(yyval.tree) = mk_ident_lit((yyvsp[0].str_value)); }
#line 2321 "parser.tab.cpp"
    break;

  case 95: /* expr: IDENTIFIER endlOpt '=' endlOpt expr  */
#line 334 "parser.y"
                                          { printf("Assignment:\n"); }
#line 2327 "parser.tab.cpp"
    break;

  case 96: /* expr: '(' expr ')'  */
#line 335 "parser.y"
                   { printf("PARSER found expr - ( expr ) \n"); }
#line 2333 "parser.tab.cpp"
    break;

  case 97: /* expr: expr '>' endlOpt expr  */
#line 336 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) ">", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2339 "parser.tab.cpp"
    break;

  case 98: /* expr: expr '<' endlOpt expr  */
#line 337 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "<", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2345 "parser.tab.cpp"
    break;

  case 99: /* expr: expr MORE_OR_EQUAL_OPERATOR endlOpt expr  */
#line 338 "parser.y"
                                               { (yyval.tree) = mk_bin_op((char*) ">=", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2351 "parser.tab.cpp"
    break;

  case 100: /* expr: expr LESS_OR_EQUAL_OPERATOR endlOpt expr  */
#line 339 "parser.y"
                                               { (yyval.tree) = mk_bin_op((char*) "<=", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2357 "parser.tab.cpp"
    break;

  case 101: /* expr: expr EQ endlOpt expr  */
#line 340 "parser.y"
                           { (yyval.tree) = mk_bin_op((char*) "==", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2363 "parser.tab.cpp"
    break;

  case 102: /* expr: expr NEQ endlOpt expr  */
#line 341 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "!=", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2369 "parser.tab.cpp"
    break;

  case 103: /* expr: expr '+' endlOpt expr  */
#line 342 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "+", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2375 "parser.tab.cpp"
    break;

  case 104: /* expr: expr '-' endlOpt expr  */
#line 343 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "-", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2381 "parser.tab.cpp"
    break;

  case 105: /* expr: expr '/' endlOpt expr  */
#line 344 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "/", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2387 "parser.tab.cpp"
    break;

  case 106: /* expr: expr '*' endlOpt expr  */
#line 345 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "*", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2393 "parser.tab.cpp"
    break;

  case 107: /* expr: expr '%' endlOpt expr  */
#line 346 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "%", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2399 "parser.tab.cpp"
    break;

  case 108: /* expr: expr '&' endlOpt expr  */
#line 347 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "&", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2405 "parser.tab.cpp"
    break;

  case 109: /* expr: expr '|' endlOpt expr  */
#line 348 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "|", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2411 "parser.tab.cpp"
    break;

  case 110: /* expr: expr KW_OR endlOpt expr  */
#line 349 "parser.y"
                              { (yyval.tree) = mk_bin_op((char*) "||", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2417 "parser.tab.cpp"
    break;

  case 111: /* expr: expr KW_AND endlOpt expr  */
#line 350 "parser.y"
                               { (yyval.tree) = mk_bin_op((char*) "&&", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2423 "parser.tab.cpp"
    break;

  case 112: /* expr: '-' expr  */
#line 351 "parser.y"
                             { (yyval.tree) = mk_unary_op("unary_minus_op", (yyvsp[0].tree));found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2429 "parser.tab.cpp"
    break;

  case 113: /* expr: '+' expr  */
#line 352 "parser.y"
                            { (yyval.tree) = mk_unary_op("unary_plus_op", (yyvsp[0].tree));found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2435 "parser.tab.cpp"
    break;

  case 114: /* expr: if_else_expr  */
#line 353 "parser.y"
                   {(yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2441 "parser.tab.cpp"
    break;

  case 115: /* expr: for_expr  */
#line 354 "parser.y"
               { printf("PARSER found expr - for_expr\n"); }
#line 2447 "parser.tab.cpp"
    break;

  case 116: /* expr: while_expr  */
#line 355 "parser.y"
                 {(yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2453 "parser.tab.cpp"
    break;

  case 117: /* expr: do_while_expr  */
#line 356 "parser.y"
                    {(yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2459 "parser.tab.cpp"
    break;

  case 118: /* expr: match_expr  */
#line 357 "parser.y"
                 {(yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2465 "parser.tab.cpp"
    break;

  case 119: /* expr: anonymous_func  */
#line 358 "parser.y"
                     { printf("Function:\n"); }
#line 2471 "parser.tab.cpp"
    break;

  case 120: /* expr: method_call  */
#line 359 "parser.y"
                  { printf("method_call:\n"); }
#line 2477 "parser.tab.cpp"
    break;

  case 121: /* expr: create_instance_class  */
#line 360 "parser.y"
                            { printf("instance_class:\n"); }
#line 2483 "parser.tab.cpp"
    break;

  case 122: /* expr: READLINE '(' ')'  */
#line 361 "parser.y"
                     { printf("readLine:\n"); }
#line 2489 "parser.tab.cpp"
    break;

  case 123: /* expr: PRINTLN '(' expr ')'  */
#line 362 "parser.y"
                          { printf("print:\n"); }
#line 2495 "parser.tab.cpp"
    break;

  case 124: /* expr: IDENTIFIER '.' '(' NUM_10 ')'  */
#line 363 "parser.y"
                                    { printf("array_call:\n"); }
#line 2501 "parser.tab.cpp"
    break;

  case 125: /* num_const: NUM_10  */
#line 368 "parser.y"
             { (yyval.tree) = mk_int_const((yyvsp[0].int_value)); }
#line 2507 "parser.tab.cpp"
    break;

  case 126: /* num_const: NUM_16  */
#line 369 "parser.y"
             { (yyval.tree) = mk_int_const((yyvsp[0].int_value)); }
#line 2513 "parser.tab.cpp"
    break;

  case 127: /* num_const: REAL_NUMBER  */
#line 370 "parser.y"
                  { (yyval.tree) = mk_real_const((yyvsp[0].real_value)); }
#line 2519 "parser.tab.cpp"
    break;

  case 128: /* num_const: REAL_NUMBER_EXPONENT  */
#line 371 "parser.y"
                           { (yyval.tree) = mk_real_const((yyvsp[0].real_value)); }
#line 2525 "parser.tab.cpp"
    break;

  case 130: /* const: CONST_STRING  */
#line 377 "parser.y"
                   { (yyval.tree) = mk_string_const((yyvsp[0].str_value)); }
#line 2531 "parser.tab.cpp"
    break;

  case 131: /* const: CONST_CHAR  */
#line 378 "parser.y"
                 { (yyval.tree) = mk_char_const((yyvsp[0].str_value)); }
#line 2537 "parser.tab.cpp"
    break;

  case 132: /* const: KW_TRUE  */
#line 379 "parser.y"
              { (yyval.tree) = mk_boolean_const(true); }
#line 2543 "parser.tab.cpp"
    break;

  case 133: /* const: KW_FALSE  */
#line 380 "parser.y"
               { (yyval.tree) = mk_boolean_const(false); }
#line 2549 "parser.tab.cpp"
    break;

  case 134: /* const: KW_NULL  */
#line 381 "parser.y"
              { (yyval.tree) = mk_null_const(); }
#line 2555 "parser.tab.cpp"
    break;

  case 135: /* const: array  */
#line 382 "parser.y"
            { (yyval.tree) = mk_array_const((yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2561 "parser.tab.cpp"
    break;

  case 155: /* type: INT_KW  */
#line 429 "parser.y"
             { (yyval.tree) = mk_integer_type(); }
#line 2567 "parser.tab.cpp"
    break;

  case 156: /* type: DOUBLE_KW  */
#line 430 "parser.y"
                { (yyval.tree) = mk_real_type(); }
#line 2573 "parser.tab.cpp"
    break;

  case 157: /* type: STRING_KW  */
#line 431 "parser.y"
                { (yyval.tree) = mk_string_type(); }
#line 2579 "parser.tab.cpp"
    break;

  case 158: /* type: CHAR_KW  */
#line 432 "parser.y"
              { (yyval.tree) = mk_char_type(); }
#line 2585 "parser.tab.cpp"
    break;

  case 159: /* type: BOOLEAN_KW  */
#line 433 "parser.y"
                 { (yyval.tree) = mk_boolean_type(); }
#line 2591 "parser.tab.cpp"
    break;

  case 160: /* type: ANY_KW  */
#line 434 "parser.y"
             { (yyval.tree) = mk_any_type(); }
#line 2597 "parser.tab.cpp"
    break;

  case 161: /* type: UNIT_KW  */
#line 435 "parser.y"
              { (yyval.tree) = mk_unit_type(); }
#line 2603 "parser.tab.cpp"
    break;

  case 162: /* type_list_car: type  */
#line 439 "parser.y"
           { (yyval.tree) = mk_list(); (yyval.tree) = add_to_list((yyval.tree), (yyvsp[0].tree)); }
#line 2609 "parser.tab.cpp"
    break;

  case 163: /* type_list_car: type_list_car RIGHT_ARROW_OPERATOR type  */
#line 440 "parser.y"
                                              { (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 2615 "parser.tab.cpp"
    break;

  case 164: /* type_list: type  */
#line 444 "parser.y"
           { (yyval.tree) = mk_list(); (yyval.tree) = add_to_list((yyval.tree), (yyvsp[0].tree)); }
#line 2621 "parser.tab.cpp"
    break;

  case 165: /* type_list: type_list_simple ',' type  */
#line 445 "parser.y"
                                { (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 2627 "parser.tab.cpp"
    break;

  case 166: /* type_list_simple: '(' type_list ')' RIGHT_ARROW_OPERATOR type  */
#line 449 "parser.y"
                                                 { (yyval.tree) = add_to_list((yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2633 "parser.tab.cpp"
    break;

  case 167: /* array: array_literal  */
#line 460 "parser.y"
                     {(yyval.tree) = mk_array_literal((yyvsp[0].tree)); }
#line 2639 "parser.tab.cpp"
    break;

  case 168: /* array: initialized_array  */
#line 461 "parser.y"
                         {(yyval.tree) = mk_initialized_array((yyvsp[0].tree));}
#line 2645 "parser.tab.cpp"
    break;

  case 169: /* array_literal: ARRAY endlOpt '(' expr_list_e ')'  */
#line 465 "parser.y"
                                        {  (yyval.tree) = mk_array_with_expr_list((yyvsp[-1].tree)); }
#line 2651 "parser.tab.cpp"
    break;

  case 170: /* array_literal: ARRAY  */
#line 466 "parser.y"
                                   { (yyval.tree) = mk_empty_array(); }
#line 2657 "parser.tab.cpp"
    break;

  case 171: /* initialized_array: NEW endlOpt ARRAY endlOpt '[' type ']' '(' expr ')'  */
#line 470 "parser.y"
                                                           { (yyval.tree) = mk_initialized_array_with_type_and_expr((yyvsp[-4].tree), (yyvsp[-1].tree));}
#line 2663 "parser.tab.cpp"
    break;

  case 172: /* endlList: ENDL  */
#line 479 "parser.y"
                    { printf("PARSER found ENDL\n"); }
#line 2669 "parser.tab.cpp"
    break;

  case 173: /* endlList: endlList ENDL  */
#line 480 "parser.y"
                    { printf("PARSER found endlList\n"); }
#line 2675 "parser.tab.cpp"
    break;

  case 174: /* endlOpt: endlList  */
#line 485 "parser.y"
               { printf("PARSER found endlOpt\n"); }
#line 2681 "parser.tab.cpp"
    break;

  case 176: /* semicolonList: ';'  */
#line 491 "parser.y"
                   { printf("PARSER found SEMICOLON\n"); }
#line 2687 "parser.tab.cpp"
    break;

  case 177: /* semicolonList: semicolonList ';'  */
#line 492 "parser.y"
                        { printf("PARSER found semicolonList\n"); }
#line 2693 "parser.tab.cpp"
    break;

  case 178: /* separator_List: ENDL  */
#line 496 "parser.y"
            { printf("PARSER found ENDL\n"); }
#line 2699 "parser.tab.cpp"
    break;

  case 179: /* separator_List: ';'  */
#line 497 "parser.y"
            { printf("PARSER found SEMICOLON\n"); }
#line 2705 "parser.tab.cpp"
    break;

  case 180: /* separator_List: separator_List ENDL  */
#line 498 "parser.y"
                            { printf("PARSER add ENDL to separator_List\n"); }
#line 2711 "parser.tab.cpp"
    break;

  case 181: /* separator_List: separator_List ';'  */
#line 499 "parser.y"
                           { printf("PARSER add ; to separator_List\n"); }
#line 2717 "parser.tab.cpp"
    break;


#line 2721 "parser.tab.cpp"

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

#line 506 "parser.y"

