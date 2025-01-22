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
  YYSYMBOL_PRINTLN = 42,                   /* PRINTLN  */
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
#define YYFINAL  74
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1399

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
       0,   102,   157,   158,   167,   171,   172,   189,   190,   191,
     192,   193,   194,   198,   199,   203,   204,   205,   206,   207,
     216,   217,   218,   226,   227,   228,   229,   240,   241,   242,
     243,   244,   245,   246,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   264,   268,   274,   275,   280,   281,   282,
     283,   284,   285,   286,   290,   291,   292,   297,   298,   305,
     306,   307,   311,   315,   322,   323,   328,   329,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   371,   372,   373,   374,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   394,   395,   396,   397,   402,
     407,   408,   412,   413,   414,   415,   416,   417,   418,   419,
     423,   424,   428,   429,   435,   436,   437,   438,   439,   440,
     441,   445,   446,   452,   453,   457,   468,   469,   473,   477,
     485,   491,   497,   505,   506,   511,   512,   517,   518,   522,
     523,   524,   525,   529,   530
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
  "FINALLY", "PRINTLN", "READLINE", "ARRAY", "OVERRIDE", "KW_TRUE",
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

#define YYPACT_NINF (-345)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-157)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1046,  1046,  1046,  1108,  -345,  -345,  -345,  -345,    15,  -345,
    -345,    44,    44,    44,    44,   -27,    36,    45,    54,  -345,
    -345,  -345,    63,    98,   101,    68,    13,  -345,  -345,  -345,
    -345,  -345,  -345,  -345,   586,  -345,    20,  -345,  -345,  -345,
    -345,  -345,  -345,  -345,  -345,  -345,  -345,     8,  1180,    31,
    -345,  1046,   104,   129,   124,    37,   143,     1,  1046,   147,
    1046,  1046,   144,  1046,  1046,  1046,  1046,   149,   151,  -345,
    -345,    99,     9,   858,  -345,    44,    44,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    44,    44,    44,    44,
     146,   148,  -345,   154,    44,   162,    61,  1324,   164,  1046,
    -345,    44,    44,  1046,    29,    44,   769,  1046,   141,  1201,
    -345,   167,   168,   170,   197,   148,   199,  -345,  -345,  -345,
      44,    44,   172,    44,  -345,  -345,    39,    12,  -345,  1324,
    -345,  1046,  1046,  1046,  1046,  1046,  1046,  1046,  1046,  1046,
    1046,  1046,  1046,  1046,  1046,  1046,    44,  -345,  -345,  -345,
    -345,  -345,  -345,  -345,  -345,   169,   166,   182,  -345,   247,
     129,   238,  1046,   180,  1228,   194,  1046,     5,    91,   224,
    1249,    81,  -345,  -345,  -345,  -345,  -345,   242,  1046,   236,
     243,    44,   244,  -345,   507,  -345,   554,   316,   219,   219,
     145,   145,  -345,  -345,  -345,   187,   187,  1345,   161,   219,
     219,   193,   148,   148,    44,    44,  -345,  1324,    44,    44,
    1135,  1324,    44,  1046,    92,    44,    44,    44,   255,    44,
     196,   204,   246,  -345,   264,   266,    44,    44,   262,    44,
      39,  -345,  1324,    44,  -345,    42,  1046,  1046,   251,  1046,
     248,   228,   922,  1324,   229,  1046,   230,  1046,   120,    -4,
    1046,  1046,   251,  1046,  -345,  1046,  -345,    24,    25,    44,
      16,  -345,   251,  1135,  1324,  1324,    44,    44,   265,  1135,
      44,  1324,  1135,  1324,    44,  1324,    44,    44,    44,    44,
    1276,  -345,    10,   214,  1297,    44,    44,    44,    44,    19,
      44,   270,    44,    44,    44,  -345,   334,    -3,    44,    50,
     235,  1046,   237,  1135,   239,  1046,   984,   131,  -345,  -345,
       4,  -345,  -345,  1046,   282,  1046,   282,    44,    44,    44,
    1046,   223,   109,   148,    21,    30,    17,  -345,  -345,    44,
     301,   276,    44,  -345,  -345,    14,  1046,    44,  1135,  1324,
    1135,   249,    44,  1324,    44,  1324,    44,  1046,  1324,   220,
      44,  1324,    44,  1046,   148,    22,  1324,  -345,    44,    44,
     270,    44,  -345,    26,   250,   303,   279,   334,  -345,   281,
    -345,  1046,  -345,   259,    44,  1135,  1046,   258,  1324,  -345,
     295,   327,   332,   333,  1324,    44,    44,    44,   335,  1046,
     110,   148,  1046,    44,    44,    12,    44,    44,    44,    44,
    -345,  1135,  1135,   271,  1324,    44,   277,   148,    44,    44,
     339,  1046,   148,    44,  1324,  -345,    44,   329,  1046,  1135,
    1046,  1135,  1046,   280,   334,  -345,   286,    44,  1135,   148,
    -345,  1046,  1046,    44,  1324,    44,  1046,   344,  -345,  1324,
    -345,  1324,  -345,  1324,    12,    44,    44,  1135,   289,  -345,
    1324,  1324,  1046,   346,  1324,    44,  1046,   288,  1135,   292,
      44,  1324,    44,  1046,  1324,    12,  -345,    44,  1135,  1046,
    1324,  1046,  1135,   304,  1324,  1324,  -345,    44,  1135,  -345
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,   118,   101,   102,   103,   104,    69,   107,
     106,   156,   156,   156,   156,     0,     0,     0,     0,   108,
     109,   110,     0,     0,     0,   156,   164,    98,    89,    90,
      91,    92,    94,    93,     0,   105,    68,    96,    97,   111,
     146,   147,   112,   113,   114,    88,    87,    69,     0,     0,
     153,    65,     0,   132,   155,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    65,    65,    65,     0,     0,   159,
     160,     0,   163,     0,     1,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
       0,     0,    71,     0,   156,     0,    64,    66,     0,    65,
     154,   156,   156,     0,     0,   156,   156,     0,     0,     0,
      99,     0,     0,     0,     0,     0,     2,    95,   161,   162,
     156,   156,     0,   156,     6,     5,     0,   164,     7,     9,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   156,   134,   135,   136,
     137,   138,   139,   140,   141,   115,     0,     0,   130,     0,
     133,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,   148,   150,   151,   152,     0,    65,     0,
       0,   156,     0,     8,   163,    13,    84,    83,    72,    73,
      78,    79,    81,    80,    82,    76,    77,    85,    86,    74,
      75,     0,     0,     0,   156,   156,   131,    70,   156,   156,
       0,    27,   156,     0,     0,   156,   156,   156,     0,   156,
       0,     0,    59,    60,     0,     0,   156,   156,     0,   156,
       0,    10,    11,   156,   142,   116,     0,     0,     0,     0,
       0,     0,     0,    30,     0,     0,     0,     0,   155,     0,
       0,     0,     0,     0,    61,     0,     3,     0,     0,   156,
       0,    12,     0,     0,   119,    67,   156,   156,    20,     0,
     156,    24,     0,    31,   156,    34,   156,   156,   156,   156,
       0,    43,   156,     0,     0,   156,   156,   156,   156,     0,
     156,   118,   156,   156,   156,   117,     0,     0,   156,     0,
      28,     0,     0,     0,     0,     0,     0,     0,    44,    62,
       0,    63,   149,     0,     0,     0,     0,   156,   156,   156,
       0,     0,     0,     0,     0,     0,   156,    53,    51,   156,
      50,    57,   156,    45,   157,   156,     0,   156,     0,    23,
       0,     0,   156,    37,   156,    26,   156,     0,    15,     0,
     156,    16,   156,     0,     0,     0,   125,   120,   156,   156,
     118,   156,    46,     0,     0,     0,     0,     0,   158,     0,
      21,     0,    29,    32,   156,     0,     0,     0,    38,   143,
       0,     0,     0,     0,   129,   156,   156,   156,     0,     0,
       0,     0,    65,   156,   156,   164,   156,   156,   156,   156,
      22,     0,     0,     0,    25,   156,     0,     0,   156,   156,
       0,     0,     0,   156,   124,   121,   156,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    35,   156,     0,     0,
     144,     0,     0,   156,   128,   156,     0,     0,     4,    49,
      52,    54,    58,    47,   164,   156,   156,     0,     0,   145,
      17,    18,     0,     0,   123,   156,     0,     0,     0,    41,
     156,   127,   156,     0,    56,   164,    36,   156,     0,     0,
     122,     0,     0,    39,   126,    55,    42,   156,     0,    40
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -345,  -345,  -345,   184,  -345,  -345,  -117,  -345,  -345,  -345,
    -345,  -345,  -345,  -345,  -344,  -206,  -345,  -345,  -345,   142,
     -58,  -345,     0,  -345,   -84,  -273,  -345,    83,  -345,   275,
    -345,  -105,   174,  -345,  -284,  -345,  -345,  -345,  -345,  -345,
    -345,  -168,   401,  -345,   252,  -123
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    27,   328,   126,   127,    71,   128,    28,    29,   167,
     217,    30,    31,    32,   329,   267,   330,    33,   222,   223,
      95,    96,    97,    35,    36,    49,    37,   293,   130,    53,
      38,   154,   155,   380,   350,    39,    40,    41,    42,    43,
      44,    54,    55,   335,    72,    73
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      34,    45,    46,    48,   185,   111,   112,   113,   114,   183,
     177,    50,   118,    50,  -156,    69,    69,    50,   322,   104,
     -48,  -156,   290,   398,   212,   317,    51,   359,   386,   277,
     285,   287,   352,    51,   291,   332,    93,   291,   213,   360,
     360,   161,   332,   101,   392,  -156,   282,    50,   263,   248,
      94,    60,  -156,   100,    61,   165,   294,  -156,   106,   393,
     108,   109,   166,    62,    50,   381,  -156,   231,   332,   120,
     121,    50,    63,   129,   102,   278,   333,   279,   334,   105,
     445,    64,   337,   -48,   122,   334,   214,   390,    91,   309,
     119,    52,   -14,    70,    70,   368,   292,   234,    52,   318,
     299,   361,   387,   164,   286,   288,   394,   170,   202,   362,
     123,   334,    67,   261,    93,    93,    65,   215,   244,    66,
     225,   220,   221,   100,   216,   245,   241,   100,   357,   415,
      98,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   276,    99,    75,    76,
      77,    78,    79,    80,    81,    82,    83,   346,    81,    82,
      83,   103,   207,   110,   347,   107,   211,   115,    75,    76,
      77,    78,    79,    80,    81,    82,    83,   116,   117,   295,
     156,   158,    51,   146,   232,   300,   173,   174,   302,   175,
      84,    85,    86,    87,    88,    89,    77,    78,    79,    80,
      81,    82,    83,   147,   148,   149,   150,   151,   152,   153,
      84,    85,   331,   243,    88,    89,   176,   178,   358,   341,
     171,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      79,    80,    81,    82,    83,   202,   264,   265,   349,   268,
      88,    89,   271,   181,   379,   273,   203,   275,   204,   385,
     280,   281,   205,   283,   372,   284,   373,   206,   208,   210,
     218,   224,   226,    84,    85,    86,    87,    88,    89,   227,
     229,   233,   420,   250,   252,   147,   148,   149,   150,   151,
     152,   153,   253,   331,   255,   256,   416,   221,   259,   266,
     269,   403,    67,   311,   272,   274,   321,   298,   338,   340,
     349,   339,   430,    91,   342,   343,   345,   435,  -156,  -156,
     396,   374,   397,   348,   406,   351,   395,   425,   426,   399,
     356,   456,   401,   405,   449,    77,    78,    79,    80,    81,
      82,    83,   407,   427,   417,   440,   370,   442,   408,   409,
     331,   413,   471,   429,   448,   433,   444,   378,   438,   446,
     455,   460,   462,   384,   465,   467,     4,     5,     6,     7,
     326,     9,    10,   459,   254,    84,    85,   477,   230,    88,
      89,   400,   319,   160,   466,     0,   404,   235,    18,   184,
      19,    20,    21,     0,   473,     0,     0,     0,   476,   414,
       0,     0,     0,     0,   479,     0,     0,     0,     0,     0,
       0,     0,    22,    23,    24,     0,   240,     0,     0,     0,
       0,   434,    56,    57,    58,    59,   327,     0,   439,     0,
     441,     0,   443,     0,     0,     0,    68,     0,     0,     0,
       0,   450,   451,     0,     0,     0,   454,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   461,     0,     0,     0,   464,     0,     0,     0,
       0,     0,     0,   470,     0,     0,     0,     0,     0,   474,
       0,   475,     0,     0,     0,     0,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,     0,     0,     0,     0,   157,     0,   159,     0,     0,
       0,     0,   162,   163,     0,     0,   168,   169,     0,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     1,     2,
       0,   179,   180,     0,   182,     3,     0,     0,     0,     4,
       5,     6,     7,     8,     9,    10,     0,   120,   121,     0,
      11,    12,    13,    14,     0,     0,    15,   201,     0,    16,
      17,    18,   122,    19,    20,    21,     0,     0,     0,     0,
       0,     0,    76,    77,    78,    79,    80,    81,    82,    83,
       0,     0,     0,     0,     0,    22,    23,    24,   123,    25,
     124,   125,   228,     0,     0,    26,    74,     0,   119,     0,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    81,
      82,    83,     0,    84,    85,   236,   237,    88,    89,   238,
     239,     0,     0,   242,     0,     0,   246,   247,   249,     0,
     251,     0,     0,     0,     0,     0,     0,   257,   258,     0,
     260,     0,     0,     0,   262,    84,    85,    86,    87,    88,
      89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     289,     0,     0,     0,     0,     0,     0,   296,   297,     0,
       0,   301,     0,     0,     0,   303,     0,   304,   305,   306,
     307,     0,     0,   310,     0,     0,   313,   314,   315,   316,
       0,   320,     0,   323,   324,   325,     0,     0,     0,   336,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   353,   354,
     355,     0,     0,     0,     0,     0,     0,   363,     0,     0,
     364,   365,   366,   367,     0,     0,   369,     0,   371,     0,
       0,     0,     0,   375,     0,   376,     0,   377,     0,     0,
       0,   382,     0,   383,     0,     0,     0,     0,     0,   388,
     389,     0,   391,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,     0,     0,   402,    75,    76,    77,    78,
      79,    80,    81,    82,    83,     0,   410,   411,   412,     0,
       0,     0,     0,     0,   418,   419,     0,   421,   422,   423,
     424,     0,     0,     0,     0,     0,   428,     0,     0,   431,
     432,     0,     0,     0,   436,     0,     0,   437,    84,    85,
      86,    87,    88,    89,     0,     0,     0,     0,   447,     0,
       0,     0,     0,     0,   452,     0,   453,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   457,   458,     0,     0,
       0,     0,     0,     0,     0,     0,   463,     0,     0,     0,
       0,   468,     0,   469,     0,     0,     0,     0,   472,     1,
       2,     0,     0,     0,     0,     0,     3,     0,   478,     0,
       4,     5,     6,     7,     8,     9,    10,     0,   120,   121,
       0,    11,    12,    13,    14,     0,     0,    15,     0,     0,
      16,    17,    18,   122,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    22,    23,    24,   123,
      25,   124,   125,     1,     2,     0,    26,     0,     0,     0,
       3,     0,     0,     0,     4,     5,     6,     7,     8,     9,
      10,     0,     0,     0,     0,    11,    12,    13,    14,     0,
       0,    15,     0,     0,    16,    17,    18,     0,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   270,     0,     0,     0,
      22,    23,    24,     0,    25,     1,     2,     0,     0,     0,
      26,     0,     3,     0,     0,     0,     4,     5,     6,     7,
       8,     9,    10,     0,     0,     0,     0,    11,    12,    13,
      14,     0,     0,    15,     0,     0,    16,    17,    18,     0,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   344,     0,
       0,     0,    22,    23,    24,     0,    25,     1,     2,     0,
       0,     0,    26,     0,     3,     0,     0,     0,     4,     5,
       6,     7,     8,     9,    10,     0,     0,     0,     0,    11,
      12,    13,    14,     0,     0,    15,     0,     0,    16,    17,
      18,     0,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,    23,    24,     0,    25,     1,
       2,     0,     0,     0,    26,     0,     3,     0,     0,     0,
       4,     5,     6,     7,    47,     9,    10,     0,     0,     0,
       0,    11,    12,    13,    14,     0,     0,    15,     0,     0,
      16,    17,    18,     0,    19,    20,    21,     4,     5,     6,
       7,     0,     9,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    22,    23,    24,    18,
      25,    19,    20,    21,     0,     0,    26,    75,    76,    77,
      78,    79,    80,    81,    82,    83,     0,     0,     0,    92,
       0,     0,     0,    22,    23,    24,     0,   240,    75,    76,
      77,    78,    79,    80,    81,    82,    83,     0,     0,     0,
     172,     0,     0,     0,     0,     0,     0,     0,     0,    84,
      85,    86,    87,    88,    89,    75,    76,    77,    78,    79,
      80,    81,    82,    83,     0,     0,     0,   209,     0,     0,
      84,    85,    86,    87,    88,    89,    75,    76,    77,    78,
      79,    80,    81,    82,    83,     0,     0,     0,   219,     0,
       0,     0,     0,     0,     0,     0,     0,    84,    85,    86,
      87,    88,    89,    75,    76,    77,    78,    79,    80,    81,
      82,    83,     0,     0,     0,   308,     0,     0,    84,    85,
      86,    87,    88,    89,    75,    76,    77,    78,    79,    80,
      81,    82,    83,     0,     0,     0,     0,     0,   312,     0,
       0,     0,     0,     0,     0,    84,    85,    86,    87,    88,
      89,    75,    76,    77,    78,    79,    80,    81,    82,    83,
       0,     0,     0,     0,     0,     0,    84,    85,    86,    87,
      88,    89,    75,    76,    77,    78,    79,    80,    81,    82,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,    85,    86,    87,    88,    89,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,    85,     0,    87,    88,    89
};

static const yytype_int16 yycheck[] =
{
       0,     1,     2,     3,   127,    63,    64,    65,    66,   126,
     115,     3,     3,     3,     6,     3,     3,     3,   291,    18,
       3,     6,     6,   367,    19,     6,    18,     6,     6,    33,
       6,     6,   316,    18,    18,    38,     5,    18,    33,    18,
      18,    99,    38,     6,    18,    37,   252,     3,     6,   217,
      19,    78,    37,     3,    18,    26,   262,    37,    58,    33,
      60,    61,    33,    18,     3,   349,     5,   184,    38,    30,
      31,     3,    18,    73,    37,    79,    79,    81,    81,    78,
     424,    18,    32,    66,    45,    81,    81,   360,    80,    79,
      81,    83,    79,    81,    81,    81,    80,   202,    83,    80,
     268,    80,    80,   103,    80,    80,    80,   107,    66,    79,
      71,    81,    44,   230,     5,     5,    18,    26,    26,    18,
     178,    40,    41,     3,    33,    33,   210,     3,    19,    19,
      26,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,    26,    18,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    26,    13,    14,
      15,    18,   162,    19,    33,    18,   166,    18,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    26,    79,   263,
      26,    19,    18,    37,   184,   269,    19,    19,   272,    19,
      49,    50,    51,    52,    53,    54,     9,    10,    11,    12,
      13,    14,    15,    55,    56,    57,    58,    59,    60,    61,
      49,    50,   296,   213,    53,    54,    19,    18,   323,   303,
      79,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      11,    12,    13,    14,    15,    66,   236,   237,    18,   239,
      53,    54,   242,    71,   349,   245,    80,   247,    66,   354,
     250,   251,     5,   253,   338,   255,   340,    19,    78,    65,
      36,    19,    26,    49,    50,    51,    52,    53,    54,    26,
      26,    78,   395,    18,    78,    55,    56,    57,    58,    59,
      60,    61,    78,   367,    20,    19,   391,    41,    26,    38,
      62,   375,    44,    79,    65,    65,    26,    32,    63,    62,
      18,   301,   407,    80,    65,   305,   306,   412,     7,    33,
       7,    62,    33,   313,    19,   315,    66,   401,   402,    38,
     320,   444,    63,    65,   429,     9,    10,    11,    12,    13,
      14,    15,     5,    62,   392,   419,   336,   421,     6,     6,
     424,     6,   465,    66,   428,     6,    66,   347,    19,    63,
       6,    62,     6,   353,    66,    63,    22,    23,    24,    25,
      26,    27,    28,   447,   222,    49,    50,    63,   184,    53,
      54,   371,   289,    98,   458,    -1,   376,   203,    44,   127,
      46,    47,    48,    -1,   468,    -1,    -1,    -1,   472,   389,
      -1,    -1,    -1,    -1,   478,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    69,    70,    -1,    72,    -1,    -1,    -1,
      -1,   411,    11,    12,    13,    14,    82,    -1,   418,    -1,
     420,    -1,   422,    -1,    -1,    -1,    25,    -1,    -1,    -1,
      -1,   431,   432,    -1,    -1,    -1,   436,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   452,    -1,    -1,    -1,   456,    -1,    -1,    -1,
      -1,    -1,    -1,   463,    -1,    -1,    -1,    -1,    -1,   469,
      -1,   471,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    -1,    -1,    -1,    -1,    94,    -1,    96,    -1,    -1,
      -1,    -1,   101,   102,    -1,    -1,   105,   106,    -1,    -1,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    12,
      -1,   120,   121,    -1,   123,    18,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    -1,    30,    31,    -1,
      33,    34,    35,    36,    -1,    -1,    39,   146,    -1,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,
      73,    74,   181,    -1,    -1,    78,     0,    -1,    81,    -1,
      -1,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    49,    50,   204,   205,    53,    54,   208,
     209,    -1,    -1,   212,    -1,    -1,   215,   216,   217,    -1,
     219,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,    -1,
     229,    -1,    -1,    -1,   233,    49,    50,    51,    52,    53,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     259,    -1,    -1,    -1,    -1,    -1,    -1,   266,   267,    -1,
      -1,   270,    -1,    -1,    -1,   274,    -1,   276,   277,   278,
     279,    -1,    -1,   282,    -1,    -1,   285,   286,   287,   288,
      -1,   290,    -1,   292,   293,   294,    -1,    -1,    -1,   298,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   317,   318,
     319,    -1,    -1,    -1,    -1,    -1,    -1,   326,    -1,    -1,
     329,   330,   331,   332,    -1,    -1,   335,    -1,   337,    -1,
      -1,    -1,    -1,   342,    -1,   344,    -1,   346,    -1,    -1,
      -1,   350,    -1,   352,    -1,    -1,    -1,    -1,    -1,   358,
     359,    -1,   361,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,   374,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,   385,   386,   387,    -1,
      -1,    -1,    -1,    -1,   393,   394,    -1,   396,   397,   398,
     399,    -1,    -1,    -1,    -1,    -1,   405,    -1,    -1,   408,
     409,    -1,    -1,    -1,   413,    -1,    -1,   416,    49,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,   427,    -1,
      -1,    -1,    -1,    -1,   433,    -1,   435,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   445,   446,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   455,    -1,    -1,    -1,
      -1,   460,    -1,   462,    -1,    -1,    -1,    -1,   467,    11,
      12,    -1,    -1,    -1,    -1,    -1,    18,    -1,   477,    -1,
      22,    23,    24,    25,    26,    27,    28,    -1,    30,    31,
      -1,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      42,    43,    44,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73,    74,    11,    12,    -1,    78,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    42,    43,    44,    -1,    46,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      68,    69,    70,    -1,    72,    11,    12,    -1,    -1,    -1,
      78,    -1,    18,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    42,    43,    44,    -1,
      46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    68,    69,    70,    -1,    72,    11,    12,    -1,
      -1,    -1,    78,    -1,    18,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    42,    43,
      44,    -1,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    69,    70,    -1,    72,    11,
      12,    -1,    -1,    -1,    78,    -1,    18,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      42,    43,    44,    -1,    46,    47,    48,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,    44,
      72,    46,    47,    48,    -1,    -1,    78,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    68,    69,    70,    -1,    72,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    53,    54,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    -1,    19,    -1,    -1,
      49,    50,    51,    52,    53,    54,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    54,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    -1,    19,    -1,    -1,    49,    50,
      51,    52,    53,    54,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,
      54,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    54,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    -1,    52,    53,    54
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    11,    12,    18,    22,    23,    24,    25,    26,    27,
      28,    33,    34,    35,    36,    39,    42,    43,    44,    46,
      47,    48,    68,    69,    70,    72,    78,    85,    91,    92,
      95,    96,    97,   101,   106,   107,   108,   110,   114,   119,
     120,   121,   122,   123,   124,   106,   106,    26,   106,   109,
       3,    18,    83,   113,   125,   126,   126,   126,   126,   126,
      78,    18,    18,    18,    18,    18,    18,    44,   126,     3,
      81,    89,   128,   129,     0,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    49,    50,    51,    52,    53,    54,
     126,    80,    19,     5,    19,   104,   105,   106,    26,    18,
       3,     6,    37,    18,    18,    78,   106,    18,   106,   106,
      19,   104,   104,   104,   104,    18,    26,    79,     3,    81,
      30,    31,    45,    71,    73,    74,    87,    88,    90,   106,
     112,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,    37,    55,    56,    57,
      58,    59,    60,    61,   115,   116,    26,   126,    19,   126,
     113,   104,   126,   126,   106,    26,    33,    93,   126,   126,
     106,    79,    19,    19,    19,    19,    19,   115,    18,   126,
     126,    71,   126,    90,   128,   129,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   126,    66,    80,    66,     5,    19,   106,    78,    19,
      65,   106,    19,    33,    81,    26,    33,    94,    36,    19,
      40,    41,   102,   103,    19,   104,    26,    26,   126,    26,
      87,    90,   106,    78,   115,   116,   126,   126,   126,   126,
      72,   108,   126,   106,    26,    33,   126,   126,   125,   126,
      18,   126,    78,    78,   103,    20,    19,   126,   126,    26,
     126,    90,   126,     6,   106,   106,    38,    99,   106,    62,
      64,   106,    65,   106,    65,   106,    26,    33,    79,    81,
     106,   106,    99,   106,   106,     6,    80,     6,    80,   126,
       6,    18,    80,   111,    99,   108,   126,   126,    32,   125,
     108,   126,   108,   126,   126,   126,   126,   126,    19,    79,
     126,    79,    21,   126,   126,   126,   126,     6,    80,   111,
     126,    26,   109,   126,   126,   126,    26,    82,    86,    98,
     100,   108,    38,    79,    81,   127,   126,    32,    63,   106,
      62,   108,    65,   106,    64,   106,    26,    33,   106,    18,
     118,   106,   118,   126,   126,   126,   106,    19,   115,     6,
      18,    80,    79,   126,   126,   126,   126,   126,    81,   126,
     106,   126,   108,   108,    62,   126,   126,   126,   106,   115,
     117,   118,   126,   126,   106,   115,     6,    80,   126,   126,
     109,   126,    18,    33,    80,    66,     7,    33,    98,    38,
     106,    63,   126,   108,   106,    65,    19,     5,     6,     6,
     126,   126,   126,     6,   106,    19,   115,   104,   126,   126,
     129,   126,   126,   126,   126,   108,   108,    62,   126,    66,
     115,   126,   126,     6,   106,   115,   126,   126,    19,   106,
     108,   106,   108,   106,    66,    98,    63,   126,   108,   115,
     106,   106,   126,   126,   106,     6,   129,   126,   126,   108,
      62,   106,     6,   126,   106,    66,   108,    63,   126,   126,
     106,   129,   126,   108,   106,   106,   108,    63,   126,   108
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
#line 189 "parser.y"
                { printf("Add first statement :\n"); }
#line 2104 "parser.tab.cpp"
    break;

  case 8: /* statement_expr_list: visibility_modifier statement  */
#line 190 "parser.y"
                                    { printf("Add first visibility_modifier statement :\n"); }
#line 2110 "parser.tab.cpp"
    break;

  case 9: /* statement_expr_list: expr  */
#line 191 "parser.y"
           { printf("Add first statement :\n"); }
#line 2116 "parser.tab.cpp"
    break;

  case 10: /* statement_expr_list: statement_expr_list separator_List statement  */
#line 192 "parser.y"
                                                    { printf("Add new statement to statement_expr_list :\n"); }
#line 2122 "parser.tab.cpp"
    break;

  case 11: /* statement_expr_list: statement_expr_list separator_List expr  */
#line 193 "parser.y"
                                               { printf("Add new expr to statement_expr_list :\n"); }
#line 2128 "parser.tab.cpp"
    break;

  case 12: /* statement_expr_list: statement_expr_list separator_List visibility_modifier statement  */
#line 194 "parser.y"
                                                                        { printf("Add new visibility_modifier to statement_expr_list :\n"); }
#line 2134 "parser.tab.cpp"
    break;

  case 14: /* statement_expr_list_e: %empty  */
#line 199 "parser.y"
                     { printf("PARSER found statement_list_e - nothing\n"); }
#line 2140 "parser.tab.cpp"
    break;

  case 15: /* statement: VAL endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 203 "parser.y"
                                                       { printf("implicit value declaration:\n"); }
#line 2146 "parser.tab.cpp"
    break;

  case 16: /* statement: VAR endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 204 "parser.y"
                                                       { printf("implicit variable declaration:\n"); }
#line 2152 "parser.tab.cpp"
    break;

  case 17: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 205 "parser.y"
                                                                                           { printf("explicit value declaration:\n"); }
#line 2158 "parser.tab.cpp"
    break;

  case 18: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 206 "parser.y"
                                                                                           { printf("explicit variable declaration:\n"); }
#line 2164 "parser.tab.cpp"
    break;

  case 19: /* statement: method  */
#line 207 "parser.y"
             { printf("Method:\n"); }
#line 2170 "parser.tab.cpp"
    break;

  case 20: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr  */
#line 216 "parser.y"
                                                      { printf("IF-CONSTR\n"); }
#line 2176 "parser.tab.cpp"
    break;

  case 21: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr ELSE endlOpt expr  */
#line 217 "parser.y"
                                                                          { printf("IF_ELSE-CONSTR\n"); }
#line 2182 "parser.tab.cpp"
    break;

  case 22: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr endlList ELSE endlOpt expr  */
#line 218 "parser.y"
                                                                                   { printf("IF_ELSE-CONSTR\n"); }
#line 2188 "parser.tab.cpp"
    break;

  case 23: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt YIELD endlOpt expr  */
#line 226 "parser.y"
                                                                                                                          { printf("FOR in parentheses\n"); }
#line 2194 "parser.tab.cpp"
    break;

  case 24: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt expr  */
#line 227 "parser.y"
                                                                                                            { printf("FOR in parentheses\n"); }
#line 2200 "parser.tab.cpp"
    break;

  case 25: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt YIELD endlOpt expr  */
#line 228 "parser.y"
                                                                                                                                           { printf("FOR in curly_braces\n"); }
#line 2206 "parser.tab.cpp"
    break;

  case 26: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt expr  */
#line 229 "parser.y"
                                                                                                                             { printf("FOR in curly_braces\n"); }
#line 2212 "parser.tab.cpp"
    break;

  case 64: /* expr_list_e: expr_list  */
#line 322 "parser.y"
                   { printf("PARSER found expr_list - expr_list\n"); }
#line 2218 "parser.tab.cpp"
    break;

  case 65: /* expr_list_e: %empty  */
#line 323 "parser.y"
                     { printf("PARSER found expr_list - nothing\n"); }
#line 2224 "parser.tab.cpp"
    break;

  case 66: /* expr_list: expr  */
#line 328 "parser.y"
                      { printf("PARSER found expr_list - expr\n"); }
#line 2230 "parser.tab.cpp"
    break;

  case 67: /* expr_list: expr_list endlOpt ',' endlOpt expr  */
#line 329 "parser.y"
                                          { printf("PARSER found expr_list - expr_list\n"); }
#line 2236 "parser.tab.cpp"
    break;

  case 68: /* expr: const  */
#line 334 "parser.y"
                                  {printf("PARSER found expr - const\n"); }
#line 2242 "parser.tab.cpp"
    break;

  case 69: /* expr: IDENTIFIER  */
#line 335 "parser.y"
                                       {(yyval.tree) = mk_ident_lit((yyvsp[0].str_value)); }
#line 2248 "parser.tab.cpp"
    break;

  case 70: /* expr: IDENTIFIER endlOpt '=' endlOpt expr  */
#line 336 "parser.y"
                                          { printf("Assignment:\n"); }
#line 2254 "parser.tab.cpp"
    break;

  case 71: /* expr: '(' expr ')'  */
#line 337 "parser.y"
                   { printf("PARSER found expr - ( expr ) \n"); }
#line 2260 "parser.tab.cpp"
    break;

  case 72: /* expr: expr '>' endlOpt expr  */
#line 338 "parser.y"
                            {printf("PARSER found expr - expr > expr\n"); }
#line 2266 "parser.tab.cpp"
    break;

  case 73: /* expr: expr '<' endlOpt expr  */
#line 339 "parser.y"
                            {printf("PARSER found expr - expr < expr\n"); }
#line 2272 "parser.tab.cpp"
    break;

  case 74: /* expr: expr MORE_OR_EQUAL_OPERATOR endlOpt expr  */
#line 340 "parser.y"
                                               {printf("PARSER found expr - expr >= expr\n"); }
#line 2278 "parser.tab.cpp"
    break;

  case 75: /* expr: expr LESS_OR_EQUAL_OPERATOR endlOpt expr  */
#line 341 "parser.y"
                                               {printf("PARSER found expr - expr <= expr\n"); }
#line 2284 "parser.tab.cpp"
    break;

  case 76: /* expr: expr EQ endlOpt expr  */
#line 342 "parser.y"
                           {printf("PARSER found expr - expr == expr\n"); }
#line 2290 "parser.tab.cpp"
    break;

  case 77: /* expr: expr NEQ endlOpt expr  */
#line 343 "parser.y"
                            {printf("PARSER found expr - expr != expr\n"); }
#line 2296 "parser.tab.cpp"
    break;

  case 78: /* expr: expr '+' endlOpt expr  */
#line 344 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "+", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2302 "parser.tab.cpp"
    break;

  case 79: /* expr: expr '-' endlOpt expr  */
#line 345 "parser.y"
                            { printf("PARSER found expr - expr - expr\n"); }
#line 2308 "parser.tab.cpp"
    break;

  case 80: /* expr: expr '/' endlOpt expr  */
#line 346 "parser.y"
                            { printf("PARSER found expr - expr / expr\n"); }
#line 2314 "parser.tab.cpp"
    break;

  case 81: /* expr: expr '*' endlOpt expr  */
#line 347 "parser.y"
                            { printf("PARSER found expr - expr * expr\n"); }
#line 2320 "parser.tab.cpp"
    break;

  case 82: /* expr: expr '%' endlOpt expr  */
#line 348 "parser.y"
                            { printf("PARSER found expr - expr % expr\n"); }
#line 2326 "parser.tab.cpp"
    break;

  case 83: /* expr: expr '&' endlOpt expr  */
#line 349 "parser.y"
                            { printf("PARSER found expr - expr && expr\n"); }
#line 2332 "parser.tab.cpp"
    break;

  case 84: /* expr: expr '|' endlOpt expr  */
#line 350 "parser.y"
                            { printf("PARSER found expr - expr | expr\n"); }
#line 2338 "parser.tab.cpp"
    break;

  case 85: /* expr: expr KW_OR endlOpt expr  */
#line 351 "parser.y"
                              { printf("PARSER found expr - expr || expr\n"); }
#line 2344 "parser.tab.cpp"
    break;

  case 86: /* expr: expr KW_AND endlOpt expr  */
#line 352 "parser.y"
                               { printf("PARSER found expr - expr && expr\n"); }
#line 2350 "parser.tab.cpp"
    break;

  case 87: /* expr: '-' expr  */
#line 353 "parser.y"
                             { printf("PARSER found expr - UMINUS\n"); }
#line 2356 "parser.tab.cpp"
    break;

  case 88: /* expr: '+' expr  */
#line 354 "parser.y"
                            { printf("PARSER found expr - UPLUS\n"); }
#line 2362 "parser.tab.cpp"
    break;

  case 89: /* expr: if_else_expr  */
#line 355 "parser.y"
                                        { printf("PARSER found expr - if_else_expr\n"); }
#line 2368 "parser.tab.cpp"
    break;

  case 90: /* expr: for_expr  */
#line 356 "parser.y"
               { printf("PARSER found expr - for_expr\n"); }
#line 2374 "parser.tab.cpp"
    break;

  case 91: /* expr: while_expr  */
#line 357 "parser.y"
                 { printf("PARSER found expr - while_expr\n"); }
#line 2380 "parser.tab.cpp"
    break;

  case 92: /* expr: do_while_expr  */
#line 358 "parser.y"
                    { printf("PARSER found expr - do_while_expr\n"); }
#line 2386 "parser.tab.cpp"
    break;

  case 93: /* expr: try_expr  */
#line 359 "parser.y"
               { printf("PARSER found expr - try_expr\n"); }
#line 2392 "parser.tab.cpp"
    break;

  case 94: /* expr: match_expr  */
#line 360 "parser.y"
                 { printf("PARSER found expr - match_expr\n"); }
#line 2398 "parser.tab.cpp"
    break;

  case 95: /* expr: '{' statement_expr_list_e '}'  */
#line 361 "parser.y"
                                     { printf("PARSER found expr -  { statement_expr_list_e }\n"); }
#line 2404 "parser.tab.cpp"
    break;

  case 96: /* expr: anonymous_func  */
#line 362 "parser.y"
                     { printf("Function:\n"); }
#line 2410 "parser.tab.cpp"
    break;

  case 97: /* expr: method_call  */
#line 363 "parser.y"
                  { printf("method_call:\n"); }
#line 2416 "parser.tab.cpp"
    break;

  case 98: /* expr: create_instance_class  */
#line 364 "parser.y"
                            { printf("instance_class:\n"); }
#line 2422 "parser.tab.cpp"
    break;

  case 99: /* expr: READLINE '(' ')'  */
#line 365 "parser.y"
                     { printf("readLine:\n"); }
#line 2428 "parser.tab.cpp"
    break;

  case 100: /* expr: PRINTLN '(' expr ')'  */
#line 366 "parser.y"
                          { printf("print:\n"); }
#line 2434 "parser.tab.cpp"
    break;

  case 101: /* num_const: NUM_10  */
#line 371 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 2440 "parser.tab.cpp"
    break;

  case 102: /* num_const: NUM_16  */
#line 372 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 2446 "parser.tab.cpp"
    break;

  case 103: /* num_const: REAL_NUMBER  */
#line 373 "parser.y"
                  { printf("PARSER found - REAL\n"); }
#line 2452 "parser.tab.cpp"
    break;

  case 104: /* num_const: REAL_NUMBER_EXPONENT  */
#line 374 "parser.y"
                           { printf("PARSER found - REAL_EXP\n"); }
#line 2458 "parser.tab.cpp"
    break;

  case 148: /* array_literal: ARRAY '(' expr_list_e ')'  */
#line 473 "parser.y"
                                 { printf("PARSER found Array\n"); }
#line 2464 "parser.tab.cpp"
    break;

  case 150: /* list: LIST '(' expr_list_e ')'  */
#line 485 "parser.y"
                               { printf("PARSER found List\n"); }
#line 2470 "parser.tab.cpp"
    break;

  case 151: /* vector: VECTOR '(' expr_list_e ')'  */
#line 491 "parser.y"
                                 { printf("PARSER found Vector\n"); }
#line 2476 "parser.tab.cpp"
    break;

  case 152: /* set: SET '(' expr_list_e ')'  */
#line 497 "parser.y"
                              { printf("PARSER found Set\n"); }
#line 2482 "parser.tab.cpp"
    break;

  case 153: /* endlList: ENDL  */
#line 505 "parser.y"
                    { printf("PARSER found ENDL\n"); }
#line 2488 "parser.tab.cpp"
    break;

  case 154: /* endlList: endlList ENDL  */
#line 506 "parser.y"
                    { printf("PARSER found endlList\n"); }
#line 2494 "parser.tab.cpp"
    break;

  case 155: /* endlOpt: endlList  */
#line 511 "parser.y"
               { printf("PARSER found endlOpt\n"); }
#line 2500 "parser.tab.cpp"
    break;

  case 157: /* semicolonList: ';'  */
#line 517 "parser.y"
                   { printf("PARSER found SEMICOLON\n"); }
#line 2506 "parser.tab.cpp"
    break;

  case 158: /* semicolonList: semicolonList ';'  */
#line 518 "parser.y"
                        { printf("PARSER found semicolonList\n"); }
#line 2512 "parser.tab.cpp"
    break;

  case 159: /* separator_List: ENDL  */
#line 522 "parser.y"
            { printf("PARSER found ENDL\n"); }
#line 2518 "parser.tab.cpp"
    break;

  case 160: /* separator_List: ';'  */
#line 523 "parser.y"
            { printf("PARSER found SEMICOLON\n"); }
#line 2524 "parser.tab.cpp"
    break;

  case 161: /* separator_List: separator_List ENDL  */
#line 524 "parser.y"
                            { printf("PARSER add ENDL to separator_List\n"); }
#line 2530 "parser.tab.cpp"
    break;

  case 162: /* separator_List: separator_List ';'  */
#line 525 "parser.y"
                           { printf("PARSER add ; to separator_List\n"); }
#line 2536 "parser.tab.cpp"
    break;


#line 2540 "parser.tab.cpp"

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

