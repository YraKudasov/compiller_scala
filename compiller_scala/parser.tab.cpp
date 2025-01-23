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
  YYSYMBOL_case = 101,                     /* case  */
  YYSYMBOL_case_list = 102,                /* case_list  */
  YYSYMBOL_expr_list_e = 103,              /* expr_list_e  */
  YYSYMBOL_expr_list = 104,                /* expr_list  */
  YYSYMBOL_expr = 105,                     /* expr  */
  YYSYMBOL_num_const = 106,                /* num_const  */
  YYSYMBOL_const = 107,                    /* const  */
  YYSYMBOL_params = 108,                   /* params  */
  YYSYMBOL_anonymous_func = 109,           /* anonymous_func  */
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
#define YYLAST   1363

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  185
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  547

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
     280,   286,   290,   296,   301,   302,   306,   310,   311,   312,
     322,   323,   328,   329,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   371,   372,   373,
     374,   379,   380,   381,   382,   383,   384,   385,   391,   392,
     393,   394,   399,   404,   405,   409,   410,   411,   412,   413,
     414,   415,   416,   420,   421,   425,   426,   432,   433,   434,
     435,   436,   437,   438,   442,   443,   447,   448,   452,   463,
     464,   468,   469,   473,   482,   483,   488,   489,   494,   495,
     499,   500,   501,   502,   506,   507
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
  "do_while_expr", "match_expr", "case_condition", "case", "case_list",
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

#define YYPACT_NINF (-454)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-178)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       9,  -454,  -454,    48,  -454,    12,   918,  -454,  -454,  -454,
     971,   971,  1007,  -454,  -454,  -454,  -454,    31,  -454,  -454,
      49,    49,    49,    49,    49,    49,    49,    45,    63,    83,
      54,  -454,  -454,  -454,    49,    49,  -454,  -454,    49,    49,
    -454,    35,    58,    67,  -454,   154,    16,  -454,  -454,  -454,
    -454,  -454,  -454,  -454,  1241,  -454,  -454,  -454,  -454,  -454,
    -454,  -454,  -454,    49,  -454,  -454,    21,   293,    50,  -454,
     971,    24,   152,   178,   166,   156,   165,   180,     4,   971,
     194,   338,   971,   195,   207,    49,   200,    82,   201,   159,
       8,     8,     8,    49,  -454,   571,  -454,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,   690,   332,  -454,   205,    49,   212,   120,
    1241,   213,   217,   971,  -454,    49,    49,    49,   971,   137,
      49,   196,   971,    49,  -454,    49,   120,  1047,  -454,   971,
     210,    49,   221,    49,    10,  -454,   164,   176,   177,   172,
     154,  -454,  1241,   971,   971,   971,   971,   971,   971,   971,
     971,   971,   179,   971,   971,   971,   971,   971,   971,  -454,
    -454,  -454,  -454,  -454,  -454,  -454,  -454,   191,   182,   197,
    -454,   236,   246,   152,   253,   971,    25,    29,  1068,   215,
     971,     2,   148,   239,  1114,   252,   209,  -454,   261,    49,
      22,   971,   262,     0,  -454,  -454,  -454,  -454,   469,   126,
     409,   409,   204,   204,  -454,  -454,  -454,    49,   276,   276,
    1259,   614,   409,   409,   332,   332,    49,    49,  -454,  -454,
    1250,    49,    49,    49,    49,    49,   371,  1241,    49,   971,
     153,    49,    49,    49,   274,    49,    49,    16,  -454,    26,
      49,   269,    49,    49,   280,   332,    97,    49,  -454,   271,
    -454,    11,   971,   971,   971,    32,   971,    40,   971,  -454,
      49,   251,   755,  1241,   250,   971,   255,   971,    94,   -11,
     971,   971,   296,   971,    49,    49,    49,   971,   238,   125,
     332,    27,  -454,   299,   294,   302,   321,   311,   114,   306,
      49,    49,   825,  1241,  1241,  1241,    60,   315,    49,  1241,
     316,    49,  1134,   304,   825,    49,  1241,  1044,  1241,    49,
    1241,    49,    49,    49,    49,  1180,  1241,    97,  1250,   971,
     332,    28,  1241,  -454,    49,    49,   269,    49,   320,   270,
     275,   100,   277,   324,   327,   337,   690,   -14,  -454,  -454,
     341,   352,   332,   363,   332,   364,    49,    44,   340,   971,
    -454,   333,  1111,   313,   971,   872,   161,  -454,   362,  1241,
      49,    49,    49,   396,   971,   171,   332,   971,   332,   332,
     376,   379,   169,  -454,   334,   348,   971,    49,    49,  -454,
    -454,    17,   345,   332,   389,    49,   393,    49,   971,    49,
     825,  1241,   825,  -454,   358,    49,  1241,    49,  1241,    49,
     971,   277,   420,   971,   332,    49,  1241,  -454,    49,  1195,
     421,   422,   354,   356,   402,   408,   332,   332,    51,   372,
     690,  -454,   398,   332,  -454,    49,   971,    49,   971,  1250,
     971,  -454,   380,    49,  1289,   971,   377,  1241,  -454,    49,
    1241,    49,   971,   436,  -454,   825,   825,   332,   332,   366,
     367,   439,   441,  -454,    16,    49,    49,  -454,   442,  1241,
     443,  1241,  1250,   825,   825,  -454,   390,  1241,    49,   971,
     445,  1241,    49,  -454,  -454,   446,   447,   332,   332,   825,
     825,   971,   391,   690,    49,    49,  -454,   395,    49,  1296,
    1241,    49,   971,   825,   825,   458,   461,  -454,  -454,  1241,
      16,    49,    -1,    -1,    49,   825,  -454,   410,   971,  1241,
    -454,  -454,   825,   825,   971,   404,  -454,  -454,   825,   413,
      49,  1241,  -454,  -454,  1241,    16,  -454,    49,   825,   971,
     825,   425,  1241,  -454,    49,   825,  -454
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     185,   180,   181,     0,     2,   184,     0,     1,   182,   183,
       0,     0,   141,   127,   128,   129,   130,    95,   133,   132,
     177,   177,   177,   177,   177,   177,   177,     0,     0,   172,
       0,   134,   135,   136,   177,   177,    34,    33,   177,   177,
      51,     0,     0,     0,   123,     0,   185,    37,   115,   116,
     117,   118,   119,   120,    39,   131,    94,   121,    52,   122,
     137,   169,   170,   177,   114,   113,    95,     0,     0,   174,
      91,     0,   155,   176,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   177,     0,     0,     0,     0,
     185,   185,   185,   177,    38,   184,    43,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,     0,     0,    97,     0,   177,     0,    90,
      92,     0,     0,    91,   175,   177,   177,   177,     0,     0,
     177,   177,     0,   177,    85,   177,    84,     0,   124,    91,
       0,   177,    31,   177,   177,    10,     0,     0,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   157,
     158,   159,   160,   161,   162,   163,   164,   138,     0,     0,
     153,     0,     0,   156,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   125,     0,   177,
       0,    91,     0,     0,     3,     4,     5,    42,   110,   109,
      98,    99,   104,   105,   107,   106,   108,   177,   102,   103,
     111,   112,   100,   101,     0,     0,   177,   177,   126,   154,
      96,   177,   177,   177,   177,   177,     0,    60,   177,     0,
       0,   177,   177,   177,     0,   177,   177,   185,   171,     0,
     177,   141,   177,   177,     0,     0,    30,   177,     9,     0,
     165,   139,     0,     0,     0,     0,     0,     0,     0,    63,
     177,     0,     0,    64,     0,     0,     0,     0,   176,     0,
       0,     0,     0,     0,   177,   177,   177,     0,     0,     0,
       0,     0,    32,     0,     0,     0,    29,     0,     0,     0,
     177,   177,     0,   142,    93,    45,     0,     0,   177,    46,
       0,   177,    55,     0,     0,   177,    57,     0,    65,   177,
      69,   177,   177,   177,   177,     0,    81,    30,    86,     0,
       0,     0,   148,   143,   177,   177,   141,   177,     0,     0,
       0,     0,     6,     0,     0,    35,     0,     0,   140,   166,
       0,     0,     0,     0,     0,     0,   177,     0,    61,     0,
      68,     0,     0,     0,     0,     0,     0,    82,     0,   152,
     177,   177,   177,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     0,     0,     0,   177,   177,    83,
     178,   177,     0,     0,     0,   177,     0,   177,     0,   177,
       0,    56,     0,    72,     0,   177,    73,   177,    59,   177,
       0,    11,     0,     0,     0,   177,   147,   144,   177,     0,
      14,    13,     0,     0,     0,     0,     0,     0,   177,     0,
       0,   179,     0,     0,   167,   177,     0,   177,     0,    53,
       0,    62,    66,   177,     0,     0,     0,    74,    12,   177,
     151,   177,     0,     0,   173,     0,     0,     0,     0,     0,
       0,    22,    21,    36,   185,   177,   177,   168,     0,    47,
       0,    48,    54,     0,     0,    80,     0,    58,   177,     0,
       0,   146,   177,    16,    15,    18,    17,     0,     0,     0,
       0,     0,     0,     0,   177,   177,    67,    70,   177,     0,
     150,   177,     0,     0,     0,    26,    25,    24,    23,    87,
     185,   177,     0,     0,   177,     0,    77,     0,     0,   145,
      20,    19,     0,     0,     0,     0,    50,    49,     0,    78,
     177,   149,    28,    27,    89,   185,    71,   177,     0,     0,
       0,    75,    88,    79,   177,     0,    76
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -454,  -454,  -454,   399,  -454,  -454,  -454,   142,  -454,    -4,
    -328,  -454,   131,   -38,  -454,  -454,  -454,  -454,  -454,  -454,
    -454,  -330,  -454,  -454,  -113,   -67,    -6,  -454,  -206,  -243,
    -454,   240,  -454,   365,  -454,  -163,   266,  -454,  -238,  -453,
    -454,  -454,  -205,   437,  -454,   448,   -45
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,    40,    41,    42,    43,   296,   297,    44,   298,
     258,    46,     4,    47,    48,    49,   191,   243,    50,    51,
      52,   135,    53,   301,   118,   136,   120,    55,    56,    68,
      57,   253,    58,    72,    59,   176,   177,   350,   308,    60,
      61,    62,    73,   181,   391,     5,     6
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      54,    96,    45,   119,    64,    65,    67,    94,   289,   -44,
     184,     1,     1,    69,   383,     8,   387,   302,   256,     1,
      69,   238,   129,   322,    69,   388,   198,  -177,   250,   311,
     271,   231,   284,   335,   371,   233,   239,  -177,   278,    70,
     251,    29,   121,    71,   251,   336,   336,   124,     7,    70,
     306,   122,    69,    71,    69,   116,   119,   151,   306,   526,
     527,   260,   389,    82,   390,   323,   270,   324,   351,   117,
     463,   257,   119,   131,   307,   224,   137,   399,   306,   130,
     240,    83,   310,   448,   -44,    -8,     2,     2,   254,   152,
       9,   150,   293,   375,     2,   431,   348,   124,   114,   252,
     465,  -177,   232,   285,   337,   372,   234,   357,   358,   142,
      90,   361,   207,   169,   170,   171,   172,   173,   174,   175,
      85,   321,   188,    69,   143,  -177,   194,   334,   294,   295,
     116,   380,   381,    91,   119,    99,   100,   101,   102,   103,
     104,   105,    92,   349,   333,   343,   344,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   404,   218,   219,   220,
     221,   222,   223,   511,   189,    36,    37,   370,    36,    37,
     123,   190,   125,   107,   108,   241,   116,   111,   112,   230,
     274,   124,   242,   126,   237,    20,    21,   275,   409,   394,
     417,   396,   127,    93,   441,   410,   442,    30,   128,    69,
     424,   425,   283,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   132,   418,   138,   420,   421,   103,   104,   105,
      34,   146,   147,   148,    38,   139,    39,   141,   144,    38,
     434,   180,   178,   273,   106,    70,   182,   199,   476,   201,
     204,   227,   133,   107,   108,   109,   110,   111,   112,   483,
     484,   451,   205,   206,   217,   224,   303,   304,   305,   225,
     309,   226,   312,   461,   462,   228,   316,   496,   497,   318,
     467,   320,   229,   247,   325,   326,   244,   328,   236,   246,
     248,   332,   255,   507,   508,    99,   100,   101,   102,   103,
     104,   105,   280,   517,   485,   486,   288,   520,   521,   292,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   529,
     300,   314,   115,   317,   327,   114,   532,   533,   319,   428,
     338,   339,   536,   369,   505,   506,   341,   111,   112,   340,
     342,   106,   541,   345,   543,   352,   354,   382,   377,   546,
     107,   108,   109,   110,   111,   112,   143,   378,   257,    10,
      11,   384,   379,   401,   385,   386,    12,   393,   406,   408,
     392,    13,    14,    15,    16,    17,    18,    19,   416,   395,
     397,   419,    22,    23,    24,    25,   405,    63,    27,    28,
      29,   411,    31,    32,    33,   169,   170,   171,   172,   173,
     174,   175,   439,   402,    13,    14,    15,    16,   269,    18,
      19,   400,   415,   422,   447,    35,   423,   450,   133,   433,
     435,   426,   134,    29,   437,    31,    32,    33,   443,   491,
     101,   102,   103,   104,   105,   427,   449,   455,   456,   459,
     469,   457,   471,   458,   472,   460,   464,   466,   270,   477,
     478,   473,   482,   487,   488,   489,   481,   490,   494,   495,
     498,   501,   503,   504,    74,   510,   514,    75,    76,    77,
      78,    79,    80,    81,   522,   524,    84,   523,   535,   368,
     530,    86,    87,   500,   537,    88,    89,    98,    99,   100,
     101,   102,   103,   104,   105,   509,   544,   183,   145,   286,
     539,   261,     0,     0,    95,     0,   519,     0,     0,     0,
     113,     0,     0,    74,     0,     0,     0,     0,     0,     0,
       0,     0,   531,     0,     0,     0,   107,   108,   534,     0,
     111,   112,   140,     0,     0,     0,     0,     0,     0,     0,
     149,     0,     0,   542,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
       0,     0,     0,     0,   179,     0,     0,     0,     0,     0,
       0,     0,   185,   186,   187,     0,     0,   192,   193,     0,
     195,     0,   196,     0,     8,     0,     0,     0,   200,     0,
     202,   203,    10,    11,     0,     0,     0,     0,     0,    12,
       0,     0,     0,     0,    13,    14,    15,    16,    17,    18,
      19,     0,    20,    21,     0,    22,    23,    24,    25,     0,
      26,    27,    28,    29,    30,    31,    32,    33,     0,     0,
       0,    97,    98,    99,   100,   101,   102,   103,   104,   105,
       0,     0,     0,     0,     0,     0,   249,    34,    35,    36,
      37,    38,     0,    39,     0,     0,     0,     0,     0,     9,
       0,     0,     0,     0,   259,     0,     0,     0,     0,     0,
       0,   107,   108,   262,   263,   111,   112,     0,   264,   265,
     266,   267,   268,     0,     0,   272,     0,     0,   276,   277,
     279,     0,   281,   282,     0,     0,     0,   287,     0,   290,
     291,     0,     0,     0,   299,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,   313,    12,     0,
       0,     0,     0,    13,    14,    15,    16,    17,    18,    19,
       0,   329,   330,   331,    22,    23,    24,    25,     0,    63,
      27,    28,    29,     0,    31,    32,    33,   346,   347,     0,
       0,     0,     0,     0,     0,   353,     0,     0,   355,     0,
       0,     0,   359,     0,     0,     0,   362,    35,   363,   364,
     365,   366,     0,     0,   134,     0,    10,    11,     0,     0,
       0,   373,   374,    12,   376,     0,     0,     0,    13,    14,
      15,    16,    17,    18,    19,     0,     0,     0,     0,    22,
      23,    24,    25,   398,    63,    27,    28,    29,     0,    31,
      32,    33,     0,     0,     0,     0,     0,   412,   413,   414,
       0,     0,     0,     0,     0,     0,     0,   315,     0,     0,
       0,     0,    35,     0,   429,   430,     0,     0,   432,     0,
       0,     0,   436,     0,   438,     0,   440,     0,     0,     0,
       0,     0,   444,     0,   445,     0,   446,     0,    13,    14,
      15,    16,   452,    18,    19,   453,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,     0,    31,
      32,    33,   468,     0,   470,     0,     0,     0,     0,     0,
     474,     0,     0,    10,    11,     0,   479,     0,   480,     0,
      12,     0,   270,     0,     0,    13,    14,    15,    16,    17,
      18,    19,   492,   493,     0,     0,    22,    23,    24,    25,
       0,    63,    27,    28,    29,   499,    31,    32,    33,   502,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,   512,   513,     0,   407,   515,    12,     0,   518,    35,
       0,    13,    14,    15,    16,    17,    18,    19,   525,    20,
      21,   528,    22,    23,    24,    25,     0,    26,    27,    28,
      29,    30,    31,    32,    33,     0,     0,   538,     0,     0,
       0,     0,     0,     0,   540,     0,     0,     0,     0,     0,
       0,   545,    10,    11,    34,    35,    36,    37,    38,    12,
      39,     0,     0,     0,    13,    14,    15,    16,    17,    18,
      19,     0,     0,     0,     0,    22,    23,    24,    25,     0,
      63,    27,    28,    29,     0,    31,    32,    33,    10,    11,
       0,     0,     0,     0,     0,    12,     0,     0,     0,     0,
      13,    14,    15,    16,    66,    18,    19,     0,    35,     0,
       0,    22,    23,    24,    25,     0,    63,    27,    28,    29,
       0,    31,    32,    33,    97,    98,    99,   100,   101,   102,
     103,   104,   105,     0,     0,     0,   197,    13,    14,    15,
      16,   360,    18,    19,    35,    97,    98,    99,   100,   101,
     102,   103,   104,   105,     0,   106,    29,   235,    31,    32,
      33,     0,     0,     0,   107,   108,   109,   110,   111,   112,
       0,     0,     0,     0,     0,     0,   106,     0,     0,     0,
       0,   270,     0,     0,     0,   107,   108,   109,   110,   111,
     112,    97,    98,    99,   100,   101,   102,   103,   104,   105,
       0,     0,     0,   245,    13,    14,    15,    16,   403,    18,
      19,    97,    98,    99,   100,   101,   102,   103,   104,   105,
       0,     0,   106,    29,     0,    31,    32,    33,     0,     0,
       0,   107,   108,   109,   110,   111,   112,   356,     0,     0,
       0,     0,   106,     0,     0,     0,     0,     0,   270,     0,
       0,   107,   108,   109,   110,   111,   112,    97,    98,    99,
     100,   101,   102,   103,   104,   105,     0,     0,     0,   367,
       0,     0,    97,    98,    99,   100,   101,   102,   103,   104,
     105,     0,     0,     0,   454,     0,     0,     0,   106,     0,
       0,     0,     0,     0,     0,     0,     0,   107,   108,   109,
     110,   111,   112,   106,     0,     0,     0,     0,     0,     0,
       0,     0,   107,   108,   109,   110,   111,   112,    97,    98,
      99,   100,   101,   102,   103,   104,   105,    97,    98,    99,
     100,   101,   102,   103,   104,   105,    97,    98,    99,   100,
     101,   102,   103,   104,   105,     0,     0,     0,     0,   106,
       0,     0,     0,     0,     0,     0,     0,     0,   107,   108,
     109,   110,   111,   112,     0,     0,     0,   107,   108,   109,
     110,   111,   112,     0,     0,     0,   107,   108,     0,   110,
     111,   112,    13,    14,    15,    16,   475,    18,    19,    13,
      14,    15,    16,   516,    18,    19,     0,     0,     0,     0,
       0,    29,     0,    31,    32,    33,     0,     0,    29,     0,
      31,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   270,     0,     0,     0,
       0,     0,     0,   270
};

static const yytype_int16 yycheck[] =
{
       6,    46,     6,    70,    10,    11,    12,    45,   251,     0,
     123,     3,     3,     3,   342,     3,   346,     6,    18,     3,
       3,    19,    18,    34,     3,    39,   139,     6,     6,   267,
     236,     6,     6,     6,     6,     6,    34,     6,   243,    18,
      18,    42,    18,    22,    18,    18,    18,     3,     0,    18,
      18,    27,     3,    22,     3,     5,   123,    95,    18,   512,
     513,   224,    76,    18,    78,    76,    67,    78,   306,    19,
      19,    71,   139,    79,    42,    64,    82,    33,    18,    75,
      78,    18,    42,   411,    76,    75,    78,    78,   201,    95,
      78,    95,   255,   336,    78,    78,   302,     3,    77,    77,
     430,    18,    77,    77,    77,    77,    77,   312,   314,    27,
      75,   317,   150,    53,    54,    55,    56,    57,    58,    59,
      66,    27,   128,     3,    42,     5,   132,   290,    31,    32,
       5,    31,    32,    75,   201,     9,    10,    11,    12,    13,
      14,    15,    75,   306,    19,    31,    32,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   362,   163,   164,   165,
     166,   167,   168,   493,    27,    68,    69,   330,    68,    69,
      18,    34,     6,    47,    48,    27,     5,    51,    52,   185,
      27,     3,    34,    27,   190,    31,    32,    34,    27,   352,
      19,   354,    27,    39,   400,    34,   402,    43,    18,     3,
      31,    32,   247,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    18,   376,    19,   378,   379,    13,    14,    15,
      66,    90,    91,    92,    70,    18,    72,    27,    27,    70,
     393,    19,    27,   239,    38,    18,    23,    27,   444,    18,
      76,     5,    70,    47,    48,    49,    50,    51,    52,   455,
     456,   414,    76,    76,    75,    64,   262,   263,   264,    77,
     266,    64,   268,   426,   427,    19,   272,   473,   474,   275,
     433,   277,    19,    64,   280,   281,    37,   283,    63,    27,
      19,   287,    20,   489,   490,     9,    10,    11,    12,    13,
      14,    15,    18,   499,   457,   458,    27,   503,   504,    19,
       7,     8,     9,    10,    11,    12,    13,    14,    15,   515,
      39,    60,    19,    63,    18,    77,   522,   523,    63,   386,
      21,    27,   528,   329,   487,   488,     5,    51,    52,    27,
      19,    38,   538,    27,   540,    20,    20,   341,    18,   545,
      47,    48,    49,    50,    51,    52,    42,    77,    71,    11,
      12,    27,    77,   359,    27,    18,    18,     5,   364,   365,
      19,    23,    24,    25,    26,    27,    28,    29,   374,     6,
       6,   377,    34,    35,    36,    37,    63,    39,    40,    41,
      42,    19,    44,    45,    46,    53,    54,    55,    56,    57,
      58,    59,   398,    60,    23,    24,    25,    26,    27,    28,
      29,    61,     6,    27,   410,    67,    27,   413,    70,    64,
      21,    77,    74,    42,    21,    44,    45,    46,    60,   464,
      11,    12,    13,    14,    15,    77,     6,     6,     6,    27,
     436,    77,   438,    77,   440,    27,    64,    39,    67,   445,
      63,    61,     6,    77,    77,     6,   452,     6,     6,     6,
      60,     6,     6,     6,    17,    64,    61,    20,    21,    22,
      23,    24,    25,    26,     6,   510,    29,     6,    64,   327,
      60,    34,    35,   479,    61,    38,    39,     8,     9,    10,
      11,    12,    13,    14,    15,   491,    61,   122,    89,   249,
     535,   225,    -1,    -1,    46,    -1,   502,    -1,    -1,    -1,
      63,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   518,    -1,    -1,    -1,    47,    48,   524,    -1,
      51,    52,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    -1,   539,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
      -1,    -1,    -1,    -1,   117,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   125,   126,   127,    -1,    -1,   130,   131,    -1,
     133,    -1,   135,    -1,     3,    -1,    -1,    -1,   141,    -1,
     143,   144,    11,    12,    -1,    -1,    -1,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    -1,    31,    32,    -1,    34,    35,    36,    37,    -1,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    -1,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    -1,    -1,    -1,    -1,   199,    66,    67,    68,
      69,    70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,   226,   227,    51,    52,    -1,   231,   232,
     233,   234,   235,    -1,    -1,   238,    -1,    -1,   241,   242,
     243,    -1,   245,   246,    -1,    -1,    -1,   250,    -1,   252,
     253,    -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,
      -1,    11,    12,    -1,    -1,    -1,    -1,   270,    18,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      -1,   284,   285,   286,    34,    35,    36,    37,    -1,    39,
      40,    41,    42,    -1,    44,    45,    46,   300,   301,    -1,
      -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,   311,    -1,
      -1,    -1,   315,    -1,    -1,    -1,   319,    67,   321,   322,
     323,   324,    -1,    -1,    74,    -1,    11,    12,    -1,    -1,
      -1,   334,   335,    18,   337,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,   356,    39,    40,    41,    42,    -1,    44,
      45,    46,    -1,    -1,    -1,    -1,    -1,   370,   371,   372,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    67,    -1,   387,   388,    -1,    -1,   391,    -1,
      -1,    -1,   395,    -1,   397,    -1,   399,    -1,    -1,    -1,
      -1,    -1,   405,    -1,   407,    -1,   409,    -1,    23,    24,
      25,    26,   415,    28,    29,   418,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,
      45,    46,   435,    -1,   437,    -1,    -1,    -1,    -1,    -1,
     443,    -1,    -1,    11,    12,    -1,   449,    -1,   451,    -1,
      18,    -1,    67,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,   465,   466,    -1,    -1,    34,    35,    36,    37,
      -1,    39,    40,    41,    42,   478,    44,    45,    46,   482,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,
      12,   494,   495,    -1,    62,   498,    18,    -1,   501,    67,
      -1,    23,    24,    25,    26,    27,    28,    29,   511,    31,
      32,   514,    34,    35,    36,    37,    -1,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    -1,   530,    -1,    -1,
      -1,    -1,    -1,    -1,   537,    -1,    -1,    -1,    -1,    -1,
      -1,   544,    11,    12,    66,    67,    68,    69,    70,    18,
      72,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    -1,
      39,    40,    41,    42,    -1,    44,    45,    46,    11,    12,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    -1,    67,    -1,
      -1,    34,    35,    36,    37,    -1,    39,    40,    41,    42,
      -1,    44,    45,    46,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    -1,    19,    23,    24,    25,
      26,    27,    28,    29,    67,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    38,    42,    19,    44,    45,
      46,    -1,    -1,    -1,    47,    48,    49,    50,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    -1,    19,    23,    24,    25,    26,    27,    28,
      29,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    38,    42,    -1,    44,    45,    46,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    33,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    47,    48,    49,    50,    51,    52,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    -1,    19,
      -1,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    49,    50,    51,    52,     7,     8,
       9,    10,    11,    12,    13,    14,    15,     7,     8,     9,
      10,    11,    12,    13,    14,    15,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
      49,    50,    51,    52,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    -1,    -1,    -1,    47,    48,    -1,    50,
      51,    52,    23,    24,    25,    26,    27,    28,    29,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    44,    45,    46,    -1,    -1,    42,    -1,
      44,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    67
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    78,    80,    91,   124,   125,     0,     3,    78,
      11,    12,    18,    23,    24,    25,    26,    27,    28,    29,
      31,    32,    34,    35,    36,    37,    39,    40,    41,    42,
      43,    44,    45,    46,    66,    67,    68,    69,    70,    72,
      81,    82,    83,    84,    87,    88,    90,    92,    93,    94,
      97,    98,    99,   101,   105,   106,   107,   109,   111,   113,
     118,   119,   120,    39,   105,   105,    27,   105,   108,     3,
      18,    22,   112,   121,   122,   122,   122,   122,   122,   122,
     122,   122,    18,    18,   122,    66,   122,   122,   122,   122,
      75,    75,    75,    39,    92,   124,   125,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    38,    47,    48,    49,
      50,    51,    52,   122,    77,    19,     5,    19,   103,   104,
     105,    18,    27,    18,     3,     6,    27,    27,    18,    18,
      75,   105,    18,    70,    74,   100,   104,   105,    19,    18,
     122,    27,    27,    42,    27,    82,    91,    91,    91,   122,
      88,    92,   105,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,    53,
      54,    55,    56,    57,    58,    59,   114,   115,    27,   122,
      19,   122,    23,   112,   103,   122,   122,   122,   105,    27,
      34,    95,   122,   122,   105,   122,   122,    19,   103,    27,
     122,    18,   122,   122,    76,    76,    76,    92,   105,   105,
     105,   105,   105,   105,   105,   105,   105,    75,   105,   105,
     105,   105,   105,   105,    64,    77,    64,     5,    19,    19,
     105,     6,    77,     6,    77,    19,    63,   105,    19,    34,
      78,    27,    34,    96,    37,    19,    27,    64,    19,   122,
       6,    18,    77,   110,   103,    20,    18,    71,    89,   122,
     114,   115,   122,   122,   122,   122,   122,   122,   122,    27,
      67,   107,   122,   105,    27,    34,   122,   122,   121,   122,
      18,   122,   122,   125,     6,    77,   110,   122,    27,   108,
     122,   122,    19,   114,    31,    32,    85,    86,    88,   122,
      39,   102,     6,   105,   105,   105,    18,    42,   117,   105,
      42,   117,   105,   122,    60,    62,   105,    63,   105,    63,
     105,    27,    34,    76,    78,   105,   105,    18,   105,   122,
     122,   122,   105,    19,   114,     6,    18,    77,    21,    27,
      27,     5,    19,    31,    32,    27,   122,   122,   107,   114,
     116,   117,    20,   122,    20,   122,    33,   121,   107,   122,
      27,   107,   122,   122,   122,   122,   122,    19,    86,   105,
     114,     6,    77,   122,   122,   108,   122,    18,    77,    77,
      31,    32,    88,    89,    27,    27,    18,   100,    39,    76,
      78,   123,    19,     5,   114,     6,   114,     6,   122,    33,
      61,   105,    60,    27,   107,    63,   105,    62,   105,    27,
      34,    19,   122,   122,   122,     6,   105,    19,   114,   105,
     114,   114,    27,    27,    31,    32,    77,    77,   104,   122,
     122,    78,   122,    64,   114,    21,   122,    21,   122,   105,
     122,   107,   107,    60,   122,   122,   122,   105,    89,     6,
     105,   114,   122,   122,    19,     6,     6,    77,    77,    27,
      27,   114,   114,    19,    64,   100,    39,   114,   122,   105,
     122,   105,   105,    61,   122,    27,   107,   105,    63,   122,
     122,   105,     6,   107,   107,   114,   114,    77,    77,     6,
       6,   125,   122,   122,     6,     6,   107,   107,    60,   122,
     105,     6,   122,     6,     6,   114,   114,   107,   107,   105,
      64,   100,   122,   122,    61,   122,    27,   107,   122,   105,
     107,   107,     6,     6,   125,   122,   118,   118,   122,   107,
      60,   105,   107,   107,   105,    64,   107,    61,   122,   125,
     122,   107,   105,   107,    61,   122,   107
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
      96,    97,    98,    99,   100,   100,   101,   102,   102,   102,
     103,   103,   104,   104,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   106,   106,   106,
     106,   107,   107,   107,   107,   107,   107,   107,   108,   108,
     108,   108,   109,   110,   110,   111,   111,   111,   111,   111,
     111,   111,   111,   112,   112,   113,   113,   114,   114,   114,
     114,   114,   114,   114,   115,   115,   116,   116,   117,   118,
     118,   119,   119,   120,   121,   121,   122,   122,   123,   123,
     124,   124,   124,   124,   125,   125
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
       7,     7,     8,     8,     1,     1,     7,     7,    11,     9,
       1,     0,     1,     5,     1,     1,     5,     3,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     4,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     5,
       7,     0,     7,     3,     5,    13,    11,     9,     7,    14,
      12,    10,     8,     3,     4,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     3,     5,     1,
       1,     5,     1,    10,     1,     2,     1,     0,     1,     2,
       1,     1,     2,     2,     1,     0
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
#line 2121 "parser.tab.cpp"
    break;

  case 38: /* statement_expr_list: visibility_modifier statement  */
#line 210 "parser.y"
                                    { printf("Add first visibility_modifier statement :\n"); }
#line 2127 "parser.tab.cpp"
    break;

  case 39: /* statement_expr_list: expr  */
#line 211 "parser.y"
           { printf("Add first statement :\n"); }
#line 2133 "parser.tab.cpp"
    break;

  case 40: /* statement_expr_list: statement_expr_list separator_List statement  */
#line 212 "parser.y"
                                                    { printf("Add new statement to statement_expr_list :\n"); }
#line 2139 "parser.tab.cpp"
    break;

  case 41: /* statement_expr_list: statement_expr_list separator_List expr  */
#line 213 "parser.y"
                                               { printf("Add new expr to statement_expr_list :\n"); }
#line 2145 "parser.tab.cpp"
    break;

  case 42: /* statement_expr_list: statement_expr_list separator_List visibility_modifier statement  */
#line 214 "parser.y"
                                                                        { printf("Add new visibility_modifier to statement_expr_list :\n"); }
#line 2151 "parser.tab.cpp"
    break;

  case 44: /* statement_expr_list_e: %empty  */
#line 219 "parser.y"
                     { printf("PARSER found statement_list_e - nothing\n"); }
#line 2157 "parser.tab.cpp"
    break;

  case 45: /* statement: VAL endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 223 "parser.y"
                                                       { printf("implicit value declaration:\n"); }
#line 2163 "parser.tab.cpp"
    break;

  case 46: /* statement: VAR endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 224 "parser.y"
                                                       { printf("implicit variable declaration:\n"); }
#line 2169 "parser.tab.cpp"
    break;

  case 47: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 225 "parser.y"
                                                                                           { printf("explicit value declaration:\n"); }
#line 2175 "parser.tab.cpp"
    break;

  case 48: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 226 "parser.y"
                                                                                           { printf("explicit variable declaration:\n"); }
#line 2181 "parser.tab.cpp"
    break;

  case 49: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt ARRAY '[' type ']' endlOpt '=' endlOpt array  */
#line 227 "parser.y"
                                                                                              { printf("explicit array declaration:\n"); }
#line 2187 "parser.tab.cpp"
    break;

  case 50: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt ARRAY '[' type ']' endlOpt '=' endlOpt array  */
#line 228 "parser.y"
                                                                                              { printf("explicit array declaration:\n"); }
#line 2193 "parser.tab.cpp"
    break;

  case 51: /* statement: class  */
#line 229 "parser.y"
            { printf("Class:\n"); }
#line 2199 "parser.tab.cpp"
    break;

  case 52: /* statement: method  */
#line 230 "parser.y"
             { printf("Method:\n"); }
#line 2205 "parser.tab.cpp"
    break;

  case 53: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr ELSE endlOpt expr  */
#line 239 "parser.y"
                                                                           { (yyval.tree) = mk_if_else_expr((yyvsp[-6].tree), (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2211 "parser.tab.cpp"
    break;

  case 54: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr endlList ELSE endlOpt expr  */
#line 240 "parser.y"
                                                                                    { (yyval.tree) = mk_if_else_expr((yyvsp[-7].tree), (yyvsp[-4].tree), (yyvsp[0].tree)); }
#line 2217 "parser.tab.cpp"
    break;

  case 55: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr  */
#line 241 "parser.y"
                                                      { (yyval.tree) = mk_if_expr((yyvsp[-3].tree), (yyvsp[0].tree));}
#line 2223 "parser.tab.cpp"
    break;

  case 56: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt YIELD endlOpt expr  */
#line 249 "parser.y"
                                                                                                                          { printf("FOR in parentheses\n"); }
#line 2229 "parser.tab.cpp"
    break;

  case 57: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt expr  */
#line 250 "parser.y"
                                                                                                            { printf("FOR in parentheses\n"); }
#line 2235 "parser.tab.cpp"
    break;

  case 58: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt YIELD endlOpt expr  */
#line 251 "parser.y"
                                                                                                                                           { printf("FOR in curly_braces\n"); }
#line 2241 "parser.tab.cpp"
    break;

  case 59: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt expr  */
#line 252 "parser.y"
                                                                                                                             { printf("FOR in curly_braces\n"); }
#line 2247 "parser.tab.cpp"
    break;

  case 81: /* while_expr: WHILE endlOpt '(' expr ')' endlOpt expr  */
#line 286 "parser.y"
                                                              { (yyval.tree) = mk_while_expr((yyvsp[-3].tree),(yyvsp[0].tree)); }
#line 2253 "parser.tab.cpp"
    break;

  case 82: /* do_while_expr: DO endlOpt expr endlOpt WHILE '(' expr ')'  */
#line 290 "parser.y"
                                                                 { (yyval.tree) = mk_do_while_expr((yyvsp[-5].tree),(yyvsp[-1].tree)); }
#line 2259 "parser.tab.cpp"
    break;

  case 83: /* match_expr: expr MATCH endlOpt '{' endlOpt case_list endlOpt '}'  */
#line 296 "parser.y"
                                                              {(yyval.tree) = mk_match_expr((yyvsp[-7].tree),(yyvsp[-2].tree));}
#line 2265 "parser.tab.cpp"
    break;

  case 84: /* case_condition: expr_list  */
#line 301 "parser.y"
                    {(yyval.tree) = add_case_condition((yyvsp[0].tree));}
#line 2271 "parser.tab.cpp"
    break;

  case 85: /* case_condition: CASE_PATTERN  */
#line 302 "parser.y"
                       {(yyval.tree) = add_case_condition((yyvsp[0].tree));}
#line 2277 "parser.tab.cpp"
    break;

  case 86: /* case: CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 306 "parser.y"
                                                                                         {(yyval.tree) = mk_case_expr((yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2283 "parser.tab.cpp"
    break;

  case 87: /* case_list: CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 310 "parser.y"
                                                                                         {(yyval.tree) = mk_list();(yyval.tree) = add_alt_case((yyval.tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2289 "parser.tab.cpp"
    break;

  case 88: /* case_list: case_list endlOpt semicolonList endlOpt CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 311 "parser.y"
                                                                                                                                 {(yyval.tree) = add_alt_case((yyvsp[-10].tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2295 "parser.tab.cpp"
    break;

  case 89: /* case_list: case_list endlOpt CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 312 "parser.y"
                                                                                                           {(yyval.tree) = add_alt_case((yyvsp[-8].tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2301 "parser.tab.cpp"
    break;

  case 90: /* expr_list_e: expr_list  */
#line 322 "parser.y"
                   { printf("PARSER found expr_list - expr_list\n"); }
#line 2307 "parser.tab.cpp"
    break;

  case 91: /* expr_list_e: %empty  */
#line 323 "parser.y"
                     {  (yyval.tree) = mk_list(); }
#line 2313 "parser.tab.cpp"
    break;

  case 92: /* expr_list: expr  */
#line 328 "parser.y"
                      { (yyval.tree) = add_to_list(mk_list(), (yyvsp[0].tree)); }
#line 2319 "parser.tab.cpp"
    break;

  case 93: /* expr_list: expr_list endlOpt ',' endlOpt expr  */
#line 329 "parser.y"
                                          { (yyval.tree) = add_to_list((yyvsp[-4].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2325 "parser.tab.cpp"
    break;

  case 94: /* expr: const  */
#line 334 "parser.y"
                                  {printf("PARSER found expr - const\n"); }
#line 2331 "parser.tab.cpp"
    break;

  case 95: /* expr: IDENTIFIER  */
#line 335 "parser.y"
                                       {(yyval.tree) = mk_ident_lit((yyvsp[0].str_value)); }
#line 2337 "parser.tab.cpp"
    break;

  case 96: /* expr: IDENTIFIER endlOpt '=' endlOpt expr  */
#line 336 "parser.y"
                                          { printf("Assignment:\n"); }
#line 2343 "parser.tab.cpp"
    break;

  case 97: /* expr: '(' expr ')'  */
#line 337 "parser.y"
                   { printf("PARSER found expr - ( expr ) \n"); }
#line 2349 "parser.tab.cpp"
    break;

  case 98: /* expr: expr '>' endlOpt expr  */
#line 338 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) ">", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2355 "parser.tab.cpp"
    break;

  case 99: /* expr: expr '<' endlOpt expr  */
#line 339 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "<", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2361 "parser.tab.cpp"
    break;

  case 100: /* expr: expr MORE_OR_EQUAL_OPERATOR endlOpt expr  */
#line 340 "parser.y"
                                               { (yyval.tree) = mk_bin_op((char*) ">=", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2367 "parser.tab.cpp"
    break;

  case 101: /* expr: expr LESS_OR_EQUAL_OPERATOR endlOpt expr  */
#line 341 "parser.y"
                                               { (yyval.tree) = mk_bin_op((char*) "<=", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2373 "parser.tab.cpp"
    break;

  case 102: /* expr: expr EQ endlOpt expr  */
#line 342 "parser.y"
                           { (yyval.tree) = mk_bin_op((char*) "==", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2379 "parser.tab.cpp"
    break;

  case 103: /* expr: expr NEQ endlOpt expr  */
#line 343 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "!=", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2385 "parser.tab.cpp"
    break;

  case 104: /* expr: expr '+' endlOpt expr  */
#line 344 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "+", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2391 "parser.tab.cpp"
    break;

  case 105: /* expr: expr '-' endlOpt expr  */
#line 345 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "-", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2397 "parser.tab.cpp"
    break;

  case 106: /* expr: expr '/' endlOpt expr  */
#line 346 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "/", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2403 "parser.tab.cpp"
    break;

  case 107: /* expr: expr '*' endlOpt expr  */
#line 347 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "*", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2409 "parser.tab.cpp"
    break;

  case 108: /* expr: expr '%' endlOpt expr  */
#line 348 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "%", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2415 "parser.tab.cpp"
    break;

  case 109: /* expr: expr '&' endlOpt expr  */
#line 349 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "&", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2421 "parser.tab.cpp"
    break;

  case 110: /* expr: expr '|' endlOpt expr  */
#line 350 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "|", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2427 "parser.tab.cpp"
    break;

  case 111: /* expr: expr KW_OR endlOpt expr  */
#line 351 "parser.y"
                              { (yyval.tree) = mk_bin_op((char*) "||", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2433 "parser.tab.cpp"
    break;

  case 112: /* expr: expr KW_AND endlOpt expr  */
#line 352 "parser.y"
                               { (yyval.tree) = mk_bin_op((char*) "&&", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2439 "parser.tab.cpp"
    break;

  case 113: /* expr: '-' expr  */
#line 353 "parser.y"
                             { (yyval.tree) = mk_unary_op("unary_minus_op", (yyvsp[0].tree));found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2445 "parser.tab.cpp"
    break;

  case 114: /* expr: '+' expr  */
#line 354 "parser.y"
                            { (yyval.tree) = mk_unary_op("unary_plus_op", (yyvsp[0].tree));found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2451 "parser.tab.cpp"
    break;

  case 115: /* expr: if_else_expr  */
#line 355 "parser.y"
                   {(yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2457 "parser.tab.cpp"
    break;

  case 116: /* expr: for_expr  */
#line 356 "parser.y"
               { printf("PARSER found expr - for_expr\n"); }
#line 2463 "parser.tab.cpp"
    break;

  case 117: /* expr: while_expr  */
#line 357 "parser.y"
                 {(yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2469 "parser.tab.cpp"
    break;

  case 118: /* expr: do_while_expr  */
#line 358 "parser.y"
                    {(yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2475 "parser.tab.cpp"
    break;

  case 119: /* expr: match_expr  */
#line 359 "parser.y"
                 {(yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2481 "parser.tab.cpp"
    break;

  case 120: /* expr: case  */
#line 360 "parser.y"
           {(yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2487 "parser.tab.cpp"
    break;

  case 121: /* expr: anonymous_func  */
#line 361 "parser.y"
                     { printf("Function:\n"); }
#line 2493 "parser.tab.cpp"
    break;

  case 122: /* expr: method_call  */
#line 362 "parser.y"
                  { printf("method_call:\n"); }
#line 2499 "parser.tab.cpp"
    break;

  case 123: /* expr: create_instance_class  */
#line 363 "parser.y"
                            { printf("instance_class:\n"); }
#line 2505 "parser.tab.cpp"
    break;

  case 124: /* expr: READLINE '(' ')'  */
#line 364 "parser.y"
                     { printf("readLine:\n"); }
#line 2511 "parser.tab.cpp"
    break;

  case 125: /* expr: PRINTLN '(' expr ')'  */
#line 365 "parser.y"
                          { printf("print:\n"); }
#line 2517 "parser.tab.cpp"
    break;

  case 126: /* expr: IDENTIFIER '.' '(' NUM_10 ')'  */
#line 366 "parser.y"
                                    { printf("array_call:\n"); }
#line 2523 "parser.tab.cpp"
    break;

  case 127: /* num_const: NUM_10  */
#line 371 "parser.y"
             { (yyval.tree) = mk_int_const((yyvsp[0].int_value)); }
#line 2529 "parser.tab.cpp"
    break;

  case 128: /* num_const: NUM_16  */
#line 372 "parser.y"
             { (yyval.tree) = mk_int_const((yyvsp[0].int_value)); }
#line 2535 "parser.tab.cpp"
    break;

  case 129: /* num_const: REAL_NUMBER  */
#line 373 "parser.y"
                  { (yyval.tree) = mk_real_const((yyvsp[0].real_value)); }
#line 2541 "parser.tab.cpp"
    break;

  case 130: /* num_const: REAL_NUMBER_EXPONENT  */
#line 374 "parser.y"
                           { (yyval.tree) = mk_real_const((yyvsp[0].real_value)); }
#line 2547 "parser.tab.cpp"
    break;

  case 132: /* const: CONST_STRING  */
#line 380 "parser.y"
                   { (yyval.tree) = mk_string_const((yyvsp[0].str_value)); }
#line 2553 "parser.tab.cpp"
    break;

  case 133: /* const: CONST_CHAR  */
#line 381 "parser.y"
                 { (yyval.tree) = mk_char_const((yyvsp[0].str_value)); }
#line 2559 "parser.tab.cpp"
    break;

  case 134: /* const: KW_TRUE  */
#line 382 "parser.y"
              { (yyval.tree) = mk_boolean_const(true); }
#line 2565 "parser.tab.cpp"
    break;

  case 135: /* const: KW_FALSE  */
#line 383 "parser.y"
               { (yyval.tree) = mk_boolean_const(false); }
#line 2571 "parser.tab.cpp"
    break;

  case 136: /* const: KW_NULL  */
#line 384 "parser.y"
              { (yyval.tree) = mk_null_const(); }
#line 2577 "parser.tab.cpp"
    break;

  case 137: /* const: array  */
#line 385 "parser.y"
            { (yyval.tree) = mk_array_const((yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2583 "parser.tab.cpp"
    break;

  case 157: /* type: INT_KW  */
#line 432 "parser.y"
             { (yyval.tree) = mk_integer_type(); }
#line 2589 "parser.tab.cpp"
    break;

  case 158: /* type: DOUBLE_KW  */
#line 433 "parser.y"
                { (yyval.tree) = mk_real_type(); }
#line 2595 "parser.tab.cpp"
    break;

  case 159: /* type: STRING_KW  */
#line 434 "parser.y"
                { (yyval.tree) = mk_string_type(); }
#line 2601 "parser.tab.cpp"
    break;

  case 160: /* type: CHAR_KW  */
#line 435 "parser.y"
              { (yyval.tree) = mk_char_type(); }
#line 2607 "parser.tab.cpp"
    break;

  case 161: /* type: BOOLEAN_KW  */
#line 436 "parser.y"
                 { (yyval.tree) = mk_boolean_type(); }
#line 2613 "parser.tab.cpp"
    break;

  case 162: /* type: ANY_KW  */
#line 437 "parser.y"
             { (yyval.tree) = mk_any_type(); }
#line 2619 "parser.tab.cpp"
    break;

  case 163: /* type: UNIT_KW  */
#line 438 "parser.y"
              { (yyval.tree) = mk_unit_type(); }
#line 2625 "parser.tab.cpp"
    break;

  case 164: /* type_list_car: type  */
#line 442 "parser.y"
           { (yyval.tree) = mk_list(); (yyval.tree) = add_to_list((yyval.tree), (yyvsp[0].tree)); }
#line 2631 "parser.tab.cpp"
    break;

  case 165: /* type_list_car: type_list_car RIGHT_ARROW_OPERATOR type  */
#line 443 "parser.y"
                                              { (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 2637 "parser.tab.cpp"
    break;

  case 166: /* type_list: type  */
#line 447 "parser.y"
           { (yyval.tree) = mk_list(); (yyval.tree) = add_to_list((yyval.tree), (yyvsp[0].tree)); }
#line 2643 "parser.tab.cpp"
    break;

  case 167: /* type_list: type_list_simple ',' type  */
#line 448 "parser.y"
                                { (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 2649 "parser.tab.cpp"
    break;

  case 168: /* type_list_simple: '(' type_list ')' RIGHT_ARROW_OPERATOR type  */
#line 452 "parser.y"
                                                 { (yyval.tree) = add_to_list((yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2655 "parser.tab.cpp"
    break;

  case 169: /* array: array_literal  */
#line 463 "parser.y"
                     {(yyval.tree) = mk_array_literal((yyvsp[0].tree)); }
#line 2661 "parser.tab.cpp"
    break;

  case 170: /* array: initialized_array  */
#line 464 "parser.y"
                         {(yyval.tree) = mk_initialized_array((yyvsp[0].tree));}
#line 2667 "parser.tab.cpp"
    break;

  case 171: /* array_literal: ARRAY endlOpt '(' expr_list_e ')'  */
#line 468 "parser.y"
                                        {  (yyval.tree) = mk_array_with_expr_list((yyvsp[-1].tree)); }
#line 2673 "parser.tab.cpp"
    break;

  case 172: /* array_literal: ARRAY  */
#line 469 "parser.y"
                                   { (yyval.tree) = mk_empty_array(); }
#line 2679 "parser.tab.cpp"
    break;

  case 173: /* initialized_array: NEW endlOpt ARRAY endlOpt '[' type ']' '(' expr ')'  */
#line 473 "parser.y"
                                                           { (yyval.tree) = mk_initialized_array_with_type_and_expr((yyvsp[-4].tree), (yyvsp[-1].tree));}
#line 2685 "parser.tab.cpp"
    break;

  case 174: /* endlList: ENDL  */
#line 482 "parser.y"
                    { printf("PARSER found ENDL\n"); }
#line 2691 "parser.tab.cpp"
    break;

  case 175: /* endlList: endlList ENDL  */
#line 483 "parser.y"
                    { printf("PARSER found endlList\n"); }
#line 2697 "parser.tab.cpp"
    break;

  case 176: /* endlOpt: endlList  */
#line 488 "parser.y"
               { printf("PARSER found endlOpt\n"); }
#line 2703 "parser.tab.cpp"
    break;

  case 178: /* semicolonList: ';'  */
#line 494 "parser.y"
                   { printf("PARSER found SEMICOLON\n"); }
#line 2709 "parser.tab.cpp"
    break;

  case 179: /* semicolonList: semicolonList ';'  */
#line 495 "parser.y"
                        { printf("PARSER found semicolonList\n"); }
#line 2715 "parser.tab.cpp"
    break;

  case 180: /* separator_List: ENDL  */
#line 499 "parser.y"
            { printf("PARSER found ENDL\n"); }
#line 2721 "parser.tab.cpp"
    break;

  case 181: /* separator_List: ';'  */
#line 500 "parser.y"
            { printf("PARSER found SEMICOLON\n"); }
#line 2727 "parser.tab.cpp"
    break;

  case 182: /* separator_List: separator_List ENDL  */
#line 501 "parser.y"
                            { printf("PARSER add ENDL to separator_List\n"); }
#line 2733 "parser.tab.cpp"
    break;

  case 183: /* separator_List: separator_List ';'  */
#line 502 "parser.y"
                           { printf("PARSER add ; to separator_List\n"); }
#line 2739 "parser.tab.cpp"
    break;


#line 2743 "parser.tab.cpp"

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

#line 509 "parser.y"

