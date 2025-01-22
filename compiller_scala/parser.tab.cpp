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
  YYSYMBOL_PRINTLN = 39,                   /* PRINTLN  */
  YYSYMBOL_READLINE = 40,                  /* READLINE  */
  YYSYMBOL_ARRAY = 41,                     /* ARRAY  */
  YYSYMBOL_OVERRIDE = 42,                  /* OVERRIDE  */
  YYSYMBOL_KW_TRUE = 43,                   /* KW_TRUE  */
  YYSYMBOL_KW_FALSE = 44,                  /* KW_FALSE  */
  YYSYMBOL_KW_NULL = 45,                   /* KW_NULL  */
  YYSYMBOL_EQ = 46,                        /* EQ  */
  YYSYMBOL_NEQ = 47,                       /* NEQ  */
  YYSYMBOL_KW_OR = 48,                     /* KW_OR  */
  YYSYMBOL_KW_AND = 49,                    /* KW_AND  */
  YYSYMBOL_MORE_OR_EQUAL_OPERATOR = 50,    /* MORE_OR_EQUAL_OPERATOR  */
  YYSYMBOL_LESS_OR_EQUAL_OPERATOR = 51,    /* LESS_OR_EQUAL_OPERATOR  */
  YYSYMBOL_INT_KW = 52,                    /* INT_KW  */
  YYSYMBOL_DOUBLE_KW = 53,                 /* DOUBLE_KW  */
  YYSYMBOL_STRING_KW = 54,                 /* STRING_KW  */
  YYSYMBOL_CHAR_KW = 55,                   /* CHAR_KW  */
  YYSYMBOL_BOOLEAN_KW = 56,                /* BOOLEAN_KW  */
  YYSYMBOL_ANY_KW = 57,                    /* ANY_KW  */
  YYSYMBOL_UNIT_KW = 58,                   /* UNIT_KW  */
  YYSYMBOL_TO = 59,                        /* TO  */
  YYSYMBOL_BY = 60,                        /* BY  */
  YYSYMBOL_YIELD = 61,                     /* YIELD  */
  YYSYMBOL_GENERATOR_OPERATOR = 62,        /* GENERATOR_OPERATOR  */
  YYSYMBOL_RIGHT_ARROW_OPERATOR = 63,      /* RIGHT_ARROW_OPERATOR  */
  YYSYMBOL_ID_COLLECTION = 64,             /* ID_COLLECTION  */
  YYSYMBOL_DEF = 65,                       /* DEF  */
  YYSYMBOL_NEW = 66,                       /* NEW  */
  YYSYMBOL_PROTECTED = 67,                 /* PROTECTED  */
  YYSYMBOL_PRIVATE = 68,                   /* PRIVATE  */
  YYSYMBOL_CLASS = 69,                     /* CLASS  */
  YYSYMBOL_EXTENDS = 70,                   /* EXTENDS  */
  YYSYMBOL_ABSTRACT = 71,                  /* ABSTRACT  */
  YYSYMBOL_72_ = 72,                       /* '{'  */
  YYSYMBOL_73_ = 73,                       /* '}'  */
  YYSYMBOL_74_ = 74,                       /* ':'  */
  YYSYMBOL_75_ = 75,                       /* ';'  */
  YYSYMBOL_76___ = 76,                     /* '_'  */
  YYSYMBOL_77_ = 77,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 78,                  /* $accept  */
  YYSYMBOL_program = 79,                   /* program  */
  YYSYMBOL_class = 80,                     /* class  */
  YYSYMBOL_class_header = 81,              /* class_header  */
  YYSYMBOL_abstract_class_header = 82,     /* abstract_class_header  */
  YYSYMBOL_case_class_header = 83,         /* case_class_header  */
  YYSYMBOL_class_params = 84,              /* class_params  */
  YYSYMBOL_class_params_e = 85,            /* class_params_e  */
  YYSYMBOL_create_instance_class = 86,     /* create_instance_class  */
  YYSYMBOL_instance_case_class_in_case = 87, /* instance_case_class_in_case  */
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
  YYSYMBOL_literal_list_case = 102,        /* literal_list_case  */
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
#define YYLAST   1226

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  78
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  187
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  561

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   311


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
      18,    19,    13,    11,     5,    12,    77,    14,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    74,    75,
      10,     6,     9,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    20,     2,    21,     2,    76,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    72,     7,    73,     2,     2,     2,     2,
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
      70,    71
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   102,   102,   109,   110,   111,   115,   116,   117,   118,
     122,   127,   128,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   152,
     153,   157,   158,   167,   171,   172,   180,   181,   189,   190,
     191,   192,   193,   194,   198,   199,   203,   204,   205,   206,
     207,   208,   209,   210,   219,   220,   221,   229,   230,   231,
     232,   243,   244,   245,   246,   247,   248,   249,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   267,   271,   277,
     278,   283,   284,   285,   286,   287,   288,   289,   293,   294,
     295,   300,   301,   312,   313,   318,   319,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   360,
     361,   362,   363,   368,   369,   370,   371,   372,   373,   374,
     380,   381,   382,   383,   388,   393,   394,   398,   399,   400,
     401,   402,   403,   404,   405,   409,   410,   414,   415,   421,
     422,   423,   424,   425,   426,   427,   431,   432,   436,   437,
     441,   452,   453,   457,   458,   462,   471,   472,   477,   478,
     483,   484,   488,   489,   490,   491,   495,   496
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
  "ELSE", "IF", "FOR", "DO", "WHILE", "MATCH", "CASE", "PRINTLN",
  "READLINE", "ARRAY", "OVERRIDE", "KW_TRUE", "KW_FALSE", "KW_NULL", "EQ",
  "NEQ", "KW_OR", "KW_AND", "MORE_OR_EQUAL_OPERATOR",
  "LESS_OR_EQUAL_OPERATOR", "INT_KW", "DOUBLE_KW", "STRING_KW", "CHAR_KW",
  "BOOLEAN_KW", "ANY_KW", "UNIT_KW", "TO", "BY", "YIELD",
  "GENERATOR_OPERATOR", "RIGHT_ARROW_OPERATOR", "ID_COLLECTION", "DEF",
  "NEW", "PROTECTED", "PRIVATE", "CLASS", "EXTENDS", "ABSTRACT", "'{'",
  "'}'", "':'", "';'", "'_'", "'.'", "$accept", "program", "class",
  "class_header", "abstract_class_header", "case_class_header",
  "class_params", "class_params_e", "create_instance_class",
  "instance_case_class_in_case", "visibility_modifier", "inheritance",
  "statement_expr_list", "statement_expr_list_e", "statement",
  "if_else_expr", "for_expr", "generators_and_conditions_parentheses_List",
  "generators_and_conditions_curly_braces_List", "while_expr",
  "do_while_expr", "match_expr", "case_condition", "case_list",
  "literal_list_case", "expr_list_e", "expr_list", "expr", "num_const",
  "const", "params", "anonymous_func", "method_params_list", "method",
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

#define YYPACT_NINF (-407)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-180)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       9,  -407,  -407,    32,  -407,    14,   914,  -407,  -407,  -407,
     605,   605,   966,  -407,  -407,  -407,  -407,     4,  -407,  -407,
      46,    46,    46,    46,    46,    46,    46,    36,    45,    98,
      57,  -407,  -407,  -407,    46,    46,  -407,  -407,    46,    46,
      20,  -407,    90,   106,   109,  -407,   582,    15,  -407,  -407,
    -407,  -407,  -407,  -407,  1166,  -407,   165,  -407,  -407,  -407,
    -407,  -407,  -407,  -407,  -407,     8,   324,    51,  -407,   605,
     189,   210,   228,    34,   206,   211,   225,     2,   605,   226,
     182,   605,   234,   237,    46,   232,    74,   235,   191,   196,
      20,    20,    20,  -407,   254,  -407,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      46,   238,   363,  -407,   248,    46,   264,    56,  1166,   268,
     605,  -407,    46,    46,    46,    46,   605,    43,    46,   118,
     605,    46,  1032,  -407,   605,   265,    46,   282,    46,    26,
    -407,  -407,   229,   230,   241,   582,  -407,  1166,   605,   605,
     605,   605,   605,   605,   605,   605,   605,   605,   605,   605,
     605,   605,   605,    46,  -407,  -407,  -407,  -407,  -407,  -407,
    -407,  -407,   253,   227,   277,  -407,   312,   210,   308,   605,
     256,    27,    31,  1050,   279,   605,    33,    84,   306,  1095,
     336,  -407,   350,    46,    25,   605,   356,     3,  -407,  -407,
    -407,  -407,   298,   499,   353,   353,   157,   157,  -407,  -407,
    -407,   126,   126,  1175,   398,   353,   353,   305,   363,   363,
      46,    46,  -407,  1166,    46,    46,    46,    46,    46,    46,
     197,  1166,    46,   605,   161,    46,    46,    46,   367,    46,
      46,  -407,    28,    46,   360,    46,    46,   369,   363,   162,
      46,  -407,    46,  -407,    44,   605,   605,   351,   605,    10,
     605,   145,   605,    46,   332,   173,  1166,   333,   605,   337,
     605,    41,     5,   605,   605,   380,    46,    46,    46,   605,
     320,   156,   363,    29,  -407,   379,   377,   397,   419,   383,
      88,   399,   351,   197,  1166,  1166,    46,    46,  1166,   300,
     406,    46,  1166,   407,    46,   396,   388,   197,    46,  1166,
     197,  1166,    46,  1166,    46,    46,    46,    46,  1108,  -407,
     162,   605,   363,    30,  1166,  -407,    46,    46,   360,    46,
     412,   362,   364,   180,   371,   408,   411,   414,    46,  -407,
     990,    85,  -407,   420,   438,   363,   440,   363,   444,    46,
      54,   391,   605,   393,   197,   409,   605,   530,   200,  -407,
     434,  1166,    46,    46,    46,   463,   605,   169,   363,   605,
     363,   363,   446,   448,   159,  -407,   402,   403,   605,   286,
      16,  -407,  -407,    46,   477,   437,    46,  -407,  -407,    21,
     422,   363,   467,    46,   469,    46,   605,    46,   197,  1166,
     197,   433,    46,  1166,    46,  1166,    46,   605,   371,   492,
     605,   363,    46,  1166,  -407,    46,  1121,   493,   494,   427,
     428,   478,   479,   363,   363,    39,  -407,    35,   452,   500,
     483,   990,  -407,   480,   363,  -407,    46,   605,    46,   605,
    -407,   605,  -407,   457,    46,   197,   605,   458,  1166,  -407,
      46,  1166,    46,   605,   513,  -407,   197,   197,   363,   363,
     449,   450,   516,   519,  -407,   605,    46,    46,    15,    46,
      46,    46,    46,  -407,   521,  1166,   522,  1166,  -407,   197,
     197,   470,  1166,    46,   605,   524,  1166,    46,  -407,  -407,
     525,   527,   363,   363,   197,   197,   515,   605,   197,   605,
     197,   605,   472,   990,    46,    46,  -407,   476,    46,   197,
    1166,    46,   605,   197,   197,   531,   532,  -407,  -407,  -407,
    1166,  -407,  1166,  -407,  1166,    15,    46,    -2,    -2,    46,
     197,   481,   605,  1166,  -407,  -407,   197,   197,   605,   496,
    -407,  -407,   197,   484,    46,  1166,  -407,  -407,  1166,    15,
    -407,    46,   197,   605,   197,   501,  1166,  -407,    46,   197,
    -407
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     187,   182,   183,     0,     2,   186,     0,     1,   184,   185,
       0,     0,   143,   129,   130,   131,   132,    98,   135,   134,
     179,   179,   179,   179,   179,   179,   179,     0,     0,   174,
       0,   136,   137,   138,   179,   179,    35,    34,   179,   179,
     187,    52,     0,     0,     0,   126,     0,   187,    38,   118,
     119,   120,   121,   122,    40,   133,    97,   124,    53,   125,
     139,   171,   172,   117,   116,    98,     0,     0,   176,    94,
       0,   157,   178,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   179,     0,     0,     0,     0,     0,
     187,   187,   187,    39,   186,    44,   179,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,     0,     0,   100,     0,   179,     0,    93,    95,     0,
      94,   177,   179,   179,   179,   179,     0,     0,   179,   179,
       0,   179,     0,   127,    94,     0,   179,    31,   179,   179,
      10,   123,     0,     0,     0,     0,    41,    42,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   179,   159,   160,   161,   162,   163,   164,
     165,   166,   140,     0,     0,   155,     0,   158,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   128,     0,   179,     0,    94,     0,     0,     3,     4,
       5,    43,   113,   112,   101,   102,   107,   108,   110,   109,
     111,   105,   106,   114,   115,   103,   104,     0,     0,     0,
     179,   179,   156,    99,   179,   179,   179,   179,   179,   179,
       0,    61,   179,     0,     0,   179,   179,   179,     0,   179,
     179,   173,     0,   179,   143,   179,   179,     0,     0,    30,
     179,     9,   179,   167,   141,     0,     0,     0,     0,     0,
       0,     0,     0,   179,     0,     0,    64,     0,     0,     0,
       0,   178,     0,     0,     0,     0,   179,   179,   179,     0,
       0,     0,     0,     0,    32,     0,     0,     0,    29,     0,
       0,     0,     0,     0,   144,    96,   179,   179,    46,     0,
       0,   179,    47,     0,   179,    54,     0,     0,   179,    58,
       0,    65,   179,    68,   179,   179,   179,   179,     0,    77,
      30,     0,     0,     0,   150,   145,   179,   179,   143,   179,
       0,     0,     0,     0,     6,     0,     0,    36,   179,   142,
       0,     0,   168,     0,     0,     0,     0,     0,     0,   179,
       0,    62,     0,     0,     0,     0,     0,     0,     0,    78,
       0,   154,   179,   179,   179,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     0,     0,     0,     0,
     179,    87,    85,   179,    84,    91,   179,    79,   180,   179,
       0,     0,     0,   179,     0,   179,     0,   179,     0,    57,
       0,     0,   179,    71,   179,    60,   179,     0,    11,     0,
       0,     0,   179,   149,   146,   179,     0,    14,    13,     0,
       0,     0,     0,     0,     0,   179,    80,     0,     0,     0,
       0,     0,   181,     0,     0,   169,   179,     0,   179,     0,
      55,     0,    63,    66,   179,     0,     0,     0,    72,    12,
     179,   153,   179,     0,     0,   175,     0,     0,     0,     0,
       0,     0,    22,    21,    37,    94,   179,   179,   187,   179,
     179,   179,   179,   170,     0,    48,     0,    49,    56,     0,
       0,     0,    59,   179,     0,     0,   148,   179,    16,    15,
      18,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   179,   179,    67,    69,   179,     0,
     152,   179,     0,     0,     0,    26,    25,    24,    23,    33,
      83,    86,    88,    92,    81,   187,   179,     0,     0,   179,
       0,     0,     0,   147,    20,    19,     0,     0,     0,     0,
      51,    50,     0,    75,   179,   151,    28,    27,    90,   187,
      70,   179,     0,     0,     0,    73,    89,    76,   179,     0,
      74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -407,  -407,  -407,   451,  -407,  -407,  -407,   223,  -407,  -407,
      -3,  -321,  -407,    22,   -39,  -407,  -407,  -407,  -407,  -407,
    -407,  -407,  -406,   270,  -407,  -118,   190,    -6,  -407,   376,
    -236,  -407,   318,  -407,   453,  -407,  -188,   348,  -407,  -234,
    -323,  -407,  -407,  -222,   358,  -407,   529,   -46
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,    41,    42,    43,    44,   288,   289,    45,   382,
     290,   251,    47,     4,    48,    49,    50,   186,   237,    51,
      52,    53,   383,   297,   384,   116,   117,   118,    55,    56,
      67,    57,   246,    58,    71,    59,   171,   172,   343,   301,
      60,    61,    62,    72,    73,   389,     5,     6
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      54,    95,   178,    46,    63,    64,    66,    93,   281,   -45,
    -179,    68,     1,   375,  -179,   271,   192,     8,     1,   -82,
     127,   249,    69,     1,    68,   471,    69,   304,   299,    68,
     253,   243,     7,   225,   276,   327,   363,   227,   315,    29,
     122,  -179,    68,   244,   121,  -179,   244,   328,   328,    68,
     293,   300,   232,   465,    81,   146,   114,   121,   464,    68,
     285,  -179,    89,    82,   263,   344,   233,   314,   466,   184,
     115,   123,   129,   250,   128,   132,   185,   247,   316,   -82,
     317,    70,   112,   350,     2,    70,   397,   449,   147,     9,
       2,   145,   367,   -45,   326,     2,   432,   526,    -8,   245,
     137,   226,   277,   329,   364,   228,   201,   218,   234,   467,
     235,   342,   142,   143,   144,   138,  -179,   236,   335,   336,
     183,    68,    84,   386,   189,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   362,    98,    99,   100,   101,   102,
     103,   104,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   392,   387,   394,
     388,   114,    90,   299,   105,   106,   107,   108,   109,   110,
     102,   103,   104,   223,   114,   325,   109,   110,    91,   231,
     415,    92,   417,   418,    10,    11,   303,   267,   414,   421,
     422,    12,   286,   287,   268,    13,    14,    15,    16,    17,
      18,    19,  -179,   435,   540,   541,    22,    23,    24,    25,
     372,   373,    27,    28,    29,   119,    31,    32,    33,    13,
      14,    15,    16,   452,    18,    19,   406,   266,   120,    36,
      37,   121,   124,   407,   308,   462,   463,   125,    29,    35,
      31,    32,    33,   126,   130,    40,   473,    36,    37,   294,
     295,   131,   298,   133,   302,   134,   305,     8,   136,   309,
      38,   139,   311,   263,   313,    10,    11,   318,   319,   141,
     490,   491,    12,   324,   173,   163,    13,    14,    15,    16,
      17,    18,    19,   175,    20,    21,    69,    22,    23,    24,
      25,   193,    26,    27,    28,    29,    30,    31,    32,    33,
     195,   219,   198,   199,   515,   516,    97,    98,    99,   100,
     101,   102,   103,   104,   200,   361,   218,   221,   299,    34,
      35,    36,    37,    38,   386,    39,    40,   222,   224,     9,
     374,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     220,   230,   238,   113,   105,   106,   399,   496,   109,   110,
     403,   405,   164,   165,   166,   167,   168,   169,   170,   426,
     413,   388,   240,   416,   100,   101,   102,   103,   104,   241,
     105,   106,   107,   108,   109,   110,   248,   252,    74,    75,
      76,    77,    78,    79,    80,   273,   280,    83,   284,   296,
     440,   307,    85,    86,   112,   310,    87,    88,   320,   312,
     330,   448,   334,   331,   451,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   111,   164,   165,   166,   167,   168,
     169,   170,   499,   332,   333,   337,   345,   347,   349,   138,
     369,   475,   378,   477,   376,   478,   370,   377,   371,   390,
     482,   250,   135,   391,   105,   106,   393,   486,   109,   110,
     395,   398,   400,   408,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   412,
    -179,   402,   419,   174,   420,   176,   423,   424,   510,   538,
     179,   180,   181,   182,  -179,   434,   187,   188,   436,   190,
     438,   520,   444,   522,   194,   524,   196,   197,   450,   456,
     457,   458,   459,   553,   460,   461,   533,   469,    98,    99,
     100,   101,   102,   103,   104,   468,   470,   479,   472,   487,
     483,   217,   494,   492,   493,   495,   545,   504,   505,   508,
     511,   513,   548,   514,   519,   525,   529,   536,   537,   140,
     544,    10,    11,   360,   551,   105,   106,   556,    12,   109,
     110,   242,    13,    14,    15,    16,    17,    18,    19,   549,
     278,   558,   338,    22,    23,    24,    25,   254,   425,    27,
      28,    29,   177,    31,    32,    33,    94,     0,   255,   256,
       0,     0,   257,   258,   259,   260,   261,   262,     0,     0,
     265,   404,     0,   269,   270,   272,    35,   274,   275,     0,
       0,   279,    40,   282,   283,     0,   264,     0,   291,     0,
     292,     0,    20,    21,     0,     0,    10,    11,     0,     0,
      26,   306,     0,    12,    30,     0,     0,    13,    14,    15,
      16,    17,    18,    19,   321,   322,   323,     0,    22,    23,
      24,    25,     0,     0,    27,    28,    29,    34,    31,    32,
      33,    38,     0,    39,   340,   341,     0,     0,     0,   346,
       0,     0,   348,     0,     0,     0,   352,     0,     0,   339,
     354,    35,   355,   356,   357,   358,     0,    40,     0,     0,
       0,     0,     0,   351,   365,   366,   353,   368,     0,     0,
       0,     0,     0,     0,     0,     0,   379,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   396,     0,     0,
       0,     0,     0,     0,     0,     0,   385,     0,     0,     0,
     409,   410,   411,     0,     0,     0,     0,     0,     0,     0,
     401,     0,     0,     0,     0,     0,     0,     0,   427,     0,
       0,   428,   429,   430,   431,     0,     0,   433,     0,     0,
       0,   437,     0,   439,     0,   441,     0,     0,     0,     0,
     445,     0,   446,     0,   447,     0,     0,     0,     0,     0,
     453,     0,     0,   454,   442,     0,   443,     0,     0,     0,
       0,     0,     0,   176,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   474,     0,   476,     0,     0,     0,
       0,     0,   480,     0,     0,     0,     0,   385,   484,     0,
     485,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   481,     0,     0,   497,   498,     0,   500,   501,   502,
     503,     0,   488,   489,     0,     0,     0,     0,     0,     0,
       0,   509,     0,     0,     0,   512,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   506,   507,     0,     0,     0,
       0,     0,   527,   528,     0,     0,   530,     0,     0,   532,
     517,   518,     0,     0,   521,     0,   523,     0,     0,   385,
       0,     0,     0,     0,   539,   531,     0,   542,     0,   534,
     535,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   552,     0,     0,     0,   543,     0,     0,   554,
       0,     0,   546,   547,     0,     0,   559,     0,   550,     0,
       0,     0,     0,     0,     0,    10,    11,     0,   555,     0,
     557,     0,    12,     0,     0,   560,    13,    14,    15,    16,
      17,    18,    19,     0,    20,    21,     0,    22,    23,    24,
      25,     0,    26,    27,    28,    29,    30,    31,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,    34,
      35,    36,    37,    38,    12,    39,    40,     0,    13,    14,
      15,    16,    65,    18,    19,     0,     0,     0,     0,    22,
      23,    24,    25,     0,     0,    27,    28,    29,     0,    31,
      32,    33,    13,    14,    15,    16,   380,    18,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,    35,    31,    32,    33,     0,     0,    40,    96,
      97,    98,    99,   100,   101,   102,   103,   104,     0,     0,
       0,   191,     0,     0,     0,     0,   263,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   381,     0,     0,   229,
       0,     0,     0,     0,     0,     0,     0,     0,   105,   106,
     107,   108,   109,   110,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   105,   106,   107,   108,
     109,   110,    96,    97,    98,    99,   100,   101,   102,   103,
     104,     0,     0,     0,   239,    96,    97,    98,    99,   100,
     101,   102,   103,   104,     0,     0,     0,   359,    96,    97,
      98,    99,   100,   101,   102,   103,   104,     0,     0,     0,
     455,   105,   106,   107,   108,   109,   110,     0,     0,     0,
       0,     0,     0,     0,   105,   106,   107,   108,   109,   110,
       0,     0,     0,     0,     0,     0,     0,   105,   106,   107,
     108,   109,   110,    96,    97,    98,    99,   100,   101,   102,
     103,   104,    96,    97,    98,    99,   100,   101,   102,   103,
     104,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   105,   106,   107,   108,   109,   110,     0,     0,
       0,   105,   106,     0,   108,   109,   110
};

static const yytype_int16 yycheck[] =
{
       6,    47,   120,     6,    10,    11,    12,    46,   244,     0,
       6,     3,     3,   334,     6,   237,   134,     3,     3,     3,
      18,    18,    18,     3,     3,   431,    18,   261,    18,     3,
     218,     6,     0,     6,     6,     6,     6,     6,    33,    41,
       6,    37,     3,    18,     3,    37,    18,    18,    18,     3,
       6,    41,    19,    18,    18,    94,     5,     3,    19,     3,
     248,     5,    40,    18,    66,   299,    33,    26,    33,    26,
      19,    37,    78,    70,    72,    81,    33,   195,    73,    63,
      75,    77,    74,   305,    75,    77,    32,   408,    94,    75,
      75,    94,   328,    73,   282,    75,    75,   503,    72,    74,
      26,    74,    74,    74,    74,    74,   145,    63,    75,    74,
      26,   299,    90,    91,    92,    41,    18,    33,    30,    31,
     126,     3,    65,    38,   130,     7,     8,     9,    10,    11,
      12,    13,    14,    15,   322,     9,    10,    11,    12,    13,
      14,    15,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   345,    73,   347,
      75,     5,    72,    18,    46,    47,    48,    49,    50,    51,
      13,    14,    15,   179,     5,    19,    50,    51,    72,   185,
     368,    72,   370,   371,    11,    12,    41,    26,    19,    30,
      31,    18,    30,    31,    33,    22,    23,    24,    25,    26,
      27,    28,    37,   391,   527,   528,    33,    34,    35,    36,
      30,    31,    39,    40,    41,    26,    43,    44,    45,    22,
      23,    24,    25,   411,    27,    28,    26,   233,    18,    67,
      68,     3,    26,    33,    61,   423,   424,    26,    41,    66,
      43,    44,    45,    18,    18,    72,   434,    67,    68,   255,
     256,    69,   258,    19,   260,    18,   262,     3,    26,   265,
      69,    26,   268,    66,   270,    11,    12,   273,   274,    73,
     458,   459,    18,   279,    26,    37,    22,    23,    24,    25,
      26,    27,    28,    19,    30,    31,    18,    33,    34,    35,
      36,    26,    38,    39,    40,    41,    42,    43,    44,    45,
      18,    74,    73,    73,   492,   493,     8,     9,    10,    11,
      12,    13,    14,    15,    73,   321,    63,     5,    18,    65,
      66,    67,    68,    69,    38,    71,    72,    19,    72,    75,
     333,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      63,    62,    36,    19,    46,    47,   352,   465,    50,    51,
     356,   357,    52,    53,    54,    55,    56,    57,    58,    73,
     366,    75,    26,   369,    11,    12,    13,    14,    15,    19,
      46,    47,    48,    49,    50,    51,    20,    72,    20,    21,
      22,    23,    24,    25,    26,    18,    26,    29,    19,    38,
     396,    59,    34,    35,    74,    62,    38,    39,    18,    62,
      21,   407,    19,    26,   410,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    56,    52,    53,    54,    55,    56,
      57,    58,   468,    26,     5,    26,    20,    20,    32,    41,
      18,   437,    18,   439,    26,   441,    74,    26,    74,    19,
     446,    70,    84,     5,    46,    47,     6,   453,    50,    51,
       6,    60,    59,    19,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,     6,
      33,    62,    26,   115,    26,   117,    74,    74,   484,   525,
     122,   123,   124,   125,     7,    63,   128,   129,    21,   131,
      21,   497,    59,   499,   136,   501,   138,   139,     6,     6,
       6,    74,    74,   549,    26,    26,   512,     7,     9,    10,
      11,    12,    13,    14,    15,    63,    33,    60,    38,     6,
      62,   163,     6,    74,    74,     6,   532,     6,     6,    59,
       6,     6,   538,     6,    19,    63,    60,     6,     6,    88,
      59,    11,    12,   320,    60,    46,    47,   553,    18,    50,
      51,   193,    22,    23,    24,    25,    26,    27,    28,    63,
     242,    60,   292,    33,    34,    35,    36,   219,   378,    39,
      40,    41,   119,    43,    44,    45,    47,    -1,   220,   221,
      -1,    -1,   224,   225,   226,   227,   228,   229,    -1,    -1,
     232,    61,    -1,   235,   236,   237,    66,   239,   240,    -1,
      -1,   243,    72,   245,   246,    -1,   230,    -1,   250,    -1,
     252,    -1,    30,    31,    -1,    -1,    11,    12,    -1,    -1,
      38,   263,    -1,    18,    42,    -1,    -1,    22,    23,    24,
      25,    26,    27,    28,   276,   277,   278,    -1,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,    65,    43,    44,
      45,    69,    -1,    71,   296,   297,    -1,    -1,    -1,   301,
      -1,    -1,   304,    -1,    -1,    -1,   308,    -1,    -1,   293,
     312,    66,   314,   315,   316,   317,    -1,    72,    -1,    -1,
      -1,    -1,    -1,   307,   326,   327,   310,   329,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   338,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   349,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   340,    -1,    -1,    -1,
     362,   363,   364,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     354,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   380,    -1,
      -1,   383,   384,   385,   386,    -1,    -1,   389,    -1,    -1,
      -1,   393,    -1,   395,    -1,   397,    -1,    -1,    -1,    -1,
     402,    -1,   404,    -1,   406,    -1,    -1,    -1,    -1,    -1,
     412,    -1,    -1,   415,   398,    -1,   400,    -1,    -1,    -1,
      -1,    -1,    -1,   425,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   436,    -1,   438,    -1,    -1,    -1,
      -1,    -1,   444,    -1,    -1,    -1,    -1,   431,   450,    -1,
     452,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   445,    -1,    -1,   466,   467,    -1,   469,   470,   471,
     472,    -1,   456,   457,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   483,    -1,    -1,    -1,   487,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   479,   480,    -1,    -1,    -1,
      -1,    -1,   504,   505,    -1,    -1,   508,    -1,    -1,   511,
     494,   495,    -1,    -1,   498,    -1,   500,    -1,    -1,   503,
      -1,    -1,    -1,    -1,   526,   509,    -1,   529,    -1,   513,
     514,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   544,    -1,    -1,    -1,   530,    -1,    -1,   551,
      -1,    -1,   536,   537,    -1,    -1,   558,    -1,   542,    -1,
      -1,    -1,    -1,    -1,    -1,    11,    12,    -1,   552,    -1,
     554,    -1,    18,    -1,    -1,   559,    22,    23,    24,    25,
      26,    27,    28,    -1,    30,    31,    -1,    33,    34,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    12,    65,
      66,    67,    68,    69,    18,    71,    72,    -1,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    -1,    -1,    39,    40,    41,    -1,    43,
      44,    45,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    66,    43,    44,    45,    -1,    -1,    72,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    66,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    76,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,
      50,    51,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    -1,    19,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    -1,    19,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    -1,
      19,    46,    47,    48,    49,    50,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,     7,     8,     9,    10,    11,    12,    13,
      14,    15,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    -1,    -1,
      -1,    46,    47,    -1,    49,    50,    51
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    75,    79,    91,   124,   125,     0,     3,    75,
      11,    12,    18,    22,    23,    24,    25,    26,    27,    28,
      30,    31,    33,    34,    35,    36,    38,    39,    40,    41,
      42,    43,    44,    45,    65,    66,    67,    68,    69,    71,
      72,    80,    81,    82,    83,    86,    88,    90,    92,    93,
      94,    97,    98,    99,   105,   106,   107,   109,   111,   113,
     118,   119,   120,   105,   105,    26,   105,   108,     3,    18,
      77,   112,   121,   122,   122,   122,   122,   122,   122,   122,
     122,    18,    18,   122,    65,   122,   122,   122,   122,    91,
      72,    72,    72,    92,   124,   125,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    46,    47,    48,    49,    50,
      51,   122,    74,    19,     5,    19,   103,   104,   105,    26,
      18,     3,     6,    37,    26,    26,    18,    18,    72,   105,
      18,    69,   105,    19,    18,   122,    26,    26,    41,    26,
      81,    73,    91,    91,    91,    88,    92,   105,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,    37,    52,    53,    54,    55,    56,    57,
      58,   114,   115,    26,   122,    19,   122,   112,   103,   122,
     122,   122,   122,   105,    26,    33,    95,   122,   122,   105,
     122,    19,   103,    26,   122,    18,   122,   122,    73,    73,
      73,    92,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   122,    63,    74,
      63,     5,    19,   105,    72,     6,    74,     6,    74,    19,
      62,   105,    19,    33,    75,    26,    33,    96,    36,    19,
      26,    19,   122,     6,    18,    74,   110,   103,    20,    18,
      70,    89,    72,   114,   115,   122,   122,   122,   122,   122,
     122,   122,   122,    66,   107,   122,   105,    26,    33,   122,
     122,   121,   122,    18,   122,   122,     6,    74,   110,   122,
      26,   108,   122,   122,    19,   114,    30,    31,    84,    85,
      88,   122,   122,     6,   105,   105,    38,   101,   105,    18,
      41,   117,   105,    41,   117,   105,   122,    59,    61,   105,
      62,   105,    62,   105,    26,    33,    73,    75,   105,   105,
      18,   122,   122,   122,   105,    19,   114,     6,    18,    74,
      21,    26,    26,     5,    19,    30,    31,    26,   101,   107,
     122,   122,   114,   116,   117,    20,   122,    20,   122,    32,
     121,   107,   122,   107,   122,   122,   122,   122,   122,    19,
      85,   105,   114,     6,    74,   122,   122,   108,   122,    18,
      74,    74,    30,    31,    88,    89,    26,    26,    18,   122,
      26,    76,    87,   100,   102,   107,    38,    73,    75,   123,
      19,     5,   114,     6,   114,     6,   122,    32,    60,   105,
      59,   107,    62,   105,    61,   105,    26,    33,    19,   122,
     122,   122,     6,   105,    19,   114,   105,   114,   114,    26,
      26,    30,    31,    74,    74,   104,    73,   122,   122,   122,
     122,   122,    75,   122,    63,   114,    21,   122,    21,   122,
     105,   122,   107,   107,    59,   122,   122,   122,   105,    89,
       6,   105,   114,   122,   122,    19,     6,     6,    74,    74,
      26,    26,   114,   114,    19,    18,    33,    74,    63,     7,
      33,   100,    38,   114,   122,   105,   122,   105,   105,    60,
     122,   107,   105,    62,   122,   122,   105,     6,   107,   107,
     114,   114,    74,    74,     6,     6,   103,   122,   122,   125,
     122,   122,   122,   122,     6,     6,   107,   107,    59,   122,
     105,     6,   122,     6,     6,   114,   114,   107,   107,    19,
     105,   107,   105,   107,   105,    63,   100,   122,   122,    60,
     122,   107,   122,   105,   107,   107,     6,     6,   125,   122,
     118,   118,   122,   107,    59,   105,   107,   107,   105,    63,
     107,    60,   122,   125,   122,   107,   105,   107,    60,   122,
     107
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    78,    79,    80,    80,    80,    81,    81,    81,    81,
      82,    83,    83,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    85,
      85,    86,    86,    87,    88,    88,    89,    89,    90,    90,
      90,    90,    90,    90,    91,    91,    92,    92,    92,    92,
      92,    92,    92,    92,    93,    93,    93,    94,    94,    94,
      94,    95,    95,    95,    95,    95,    95,    95,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    97,    98,    99,
      99,   100,   100,   100,   100,   100,   100,   100,   101,   101,
     101,   102,   102,   103,   103,   104,   104,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   106,
     106,   106,   106,   107,   107,   107,   107,   107,   107,   107,
     108,   108,   108,   108,   109,   110,   110,   111,   111,   111,
     111,   111,   111,   111,   111,   112,   112,   113,   113,   114,
     114,   114,   114,   114,   114,   114,   115,   115,   116,   116,
     117,   118,   118,   119,   119,   120,   121,   121,   122,   122,
     123,   123,   124,   124,   124,   124,   125,   125
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     4,     4,     4,     7,     8,     3,     5,
       3,     9,    10,     4,     4,     6,     6,     6,     6,     8,
       8,     5,     5,     7,     7,     7,     7,     9,     9,     1,
       0,     3,     6,     5,     1,     1,     3,     6,     1,     2,
       1,     3,     3,     4,     3,     0,     7,     7,    11,    11,
      14,    14,     1,     1,     7,    10,    11,     9,     7,    11,
       9,     2,     5,     7,     3,     4,     7,     9,     3,     8,
      11,     5,     6,    12,    15,    10,    13,     7,     8,     9,
       9,     5,     1,     5,     1,     1,     5,     1,     7,    11,
       9,     1,     5,     1,     0,     1,     5,     1,     1,     5,
       3,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     2,     2,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     3,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     5,     7,     0,     7,     3,     5,    13,    11,     9,
       7,    14,    12,    10,     8,     3,     4,     2,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       5,     1,     1,     5,     1,    10,     1,     2,     1,     0,
       1,     2,     1,     1,     2,     2,     1,     0
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
  case 38: /* statement_expr_list: statement  */
#line 189 "parser.y"
                { printf("Add first statement :\n"); }
#line 2099 "parser.tab.cpp"
    break;

  case 39: /* statement_expr_list: visibility_modifier statement  */
#line 190 "parser.y"
                                    { printf("Add first visibility_modifier statement :\n"); }
#line 2105 "parser.tab.cpp"
    break;

  case 40: /* statement_expr_list: expr  */
#line 191 "parser.y"
           { printf("Add first statement :\n"); }
#line 2111 "parser.tab.cpp"
    break;

  case 41: /* statement_expr_list: statement_expr_list separator_List statement  */
#line 192 "parser.y"
                                                    { printf("Add new statement to statement_expr_list :\n"); }
#line 2117 "parser.tab.cpp"
    break;

  case 42: /* statement_expr_list: statement_expr_list separator_List expr  */
#line 193 "parser.y"
                                               { printf("Add new expr to statement_expr_list :\n"); }
#line 2123 "parser.tab.cpp"
    break;

  case 43: /* statement_expr_list: statement_expr_list separator_List visibility_modifier statement  */
#line 194 "parser.y"
                                                                        { printf("Add new visibility_modifier to statement_expr_list :\n"); }
#line 2129 "parser.tab.cpp"
    break;

  case 45: /* statement_expr_list_e: %empty  */
#line 199 "parser.y"
                     { printf("PARSER found statement_list_e - nothing\n"); }
#line 2135 "parser.tab.cpp"
    break;

  case 46: /* statement: VAL endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 203 "parser.y"
                                                       { printf("implicit value declaration:\n"); }
#line 2141 "parser.tab.cpp"
    break;

  case 47: /* statement: VAR endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 204 "parser.y"
                                                       { printf("implicit variable declaration:\n"); }
#line 2147 "parser.tab.cpp"
    break;

  case 48: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 205 "parser.y"
                                                                                           { printf("explicit value declaration:\n"); }
#line 2153 "parser.tab.cpp"
    break;

  case 49: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 206 "parser.y"
                                                                                           { printf("explicit variable declaration:\n"); }
#line 2159 "parser.tab.cpp"
    break;

  case 50: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt ARRAY '[' type ']' endlOpt '=' endlOpt array  */
#line 207 "parser.y"
                                                                                              { printf("explicit array declaration:\n"); }
#line 2165 "parser.tab.cpp"
    break;

  case 51: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt ARRAY '[' type ']' endlOpt '=' endlOpt array  */
#line 208 "parser.y"
                                                                                              { printf("explicit array declaration:\n"); }
#line 2171 "parser.tab.cpp"
    break;

  case 52: /* statement: class  */
#line 209 "parser.y"
            { printf("Class:\n"); }
#line 2177 "parser.tab.cpp"
    break;

  case 53: /* statement: method  */
#line 210 "parser.y"
             { printf("Method:\n"); }
#line 2183 "parser.tab.cpp"
    break;

  case 54: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr  */
#line 219 "parser.y"
                                                      { printf("IF-CONSTR\n"); }
#line 2189 "parser.tab.cpp"
    break;

  case 55: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr ELSE endlOpt expr  */
#line 220 "parser.y"
                                                                          { printf("IF_ELSE-CONSTR\n"); }
#line 2195 "parser.tab.cpp"
    break;

  case 56: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr endlList ELSE endlOpt expr  */
#line 221 "parser.y"
                                                                                   { printf("IF_ELSE-CONSTR\n"); }
#line 2201 "parser.tab.cpp"
    break;

  case 57: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt YIELD endlOpt expr  */
#line 229 "parser.y"
                                                                                                                          { printf("FOR in parentheses\n"); }
#line 2207 "parser.tab.cpp"
    break;

  case 58: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt expr  */
#line 230 "parser.y"
                                                                                                            { printf("FOR in parentheses\n"); }
#line 2213 "parser.tab.cpp"
    break;

  case 59: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt YIELD endlOpt expr  */
#line 231 "parser.y"
                                                                                                                                           { printf("FOR in curly_braces\n"); }
#line 2219 "parser.tab.cpp"
    break;

  case 60: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt expr  */
#line 232 "parser.y"
                                                                                                                             { printf("FOR in curly_braces\n"); }
#line 2225 "parser.tab.cpp"
    break;

  case 93: /* expr_list_e: expr_list  */
#line 312 "parser.y"
                   { printf("PARSER found expr_list - expr_list\n"); }
#line 2231 "parser.tab.cpp"
    break;

  case 94: /* expr_list_e: %empty  */
#line 313 "parser.y"
                     { printf("PARSER found expr_list - nothing\n"); }
#line 2237 "parser.tab.cpp"
    break;

  case 95: /* expr_list: expr  */
#line 318 "parser.y"
                      { printf("PARSER found expr_list - expr\n"); }
#line 2243 "parser.tab.cpp"
    break;

  case 96: /* expr_list: expr_list endlOpt ',' endlOpt expr  */
#line 319 "parser.y"
                                          { printf("PARSER found expr_list - expr_list\n"); }
#line 2249 "parser.tab.cpp"
    break;

  case 97: /* expr: const  */
#line 324 "parser.y"
                                  {printf("PARSER found expr - const\n"); }
#line 2255 "parser.tab.cpp"
    break;

  case 98: /* expr: IDENTIFIER  */
#line 325 "parser.y"
                                       {(yyval.tree) = mk_ident_lit((yyvsp[0].str_value)); }
#line 2261 "parser.tab.cpp"
    break;

  case 99: /* expr: IDENTIFIER endlOpt '=' endlOpt expr  */
#line 326 "parser.y"
                                          { printf("Assignment:\n"); }
#line 2267 "parser.tab.cpp"
    break;

  case 100: /* expr: '(' expr ')'  */
#line 327 "parser.y"
                   { printf("PARSER found expr - ( expr ) \n"); }
#line 2273 "parser.tab.cpp"
    break;

  case 101: /* expr: expr '>' endlOpt expr  */
#line 328 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) ">", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2279 "parser.tab.cpp"
    break;

  case 102: /* expr: expr '<' endlOpt expr  */
#line 329 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "<", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2285 "parser.tab.cpp"
    break;

  case 103: /* expr: expr MORE_OR_EQUAL_OPERATOR endlOpt expr  */
#line 330 "parser.y"
                                               { (yyval.tree) = mk_bin_op((char*) ">=", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2291 "parser.tab.cpp"
    break;

  case 104: /* expr: expr LESS_OR_EQUAL_OPERATOR endlOpt expr  */
#line 331 "parser.y"
                                               { (yyval.tree) = mk_bin_op((char*) "<=", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2297 "parser.tab.cpp"
    break;

  case 105: /* expr: expr EQ endlOpt expr  */
#line 332 "parser.y"
                           { (yyval.tree) = mk_bin_op((char*) "==", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2303 "parser.tab.cpp"
    break;

  case 106: /* expr: expr NEQ endlOpt expr  */
#line 333 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "!=", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2309 "parser.tab.cpp"
    break;

  case 107: /* expr: expr '+' endlOpt expr  */
#line 334 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "+", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2315 "parser.tab.cpp"
    break;

  case 108: /* expr: expr '-' endlOpt expr  */
#line 335 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "-", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2321 "parser.tab.cpp"
    break;

  case 109: /* expr: expr '/' endlOpt expr  */
#line 336 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "/", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2327 "parser.tab.cpp"
    break;

  case 110: /* expr: expr '*' endlOpt expr  */
#line 337 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "*", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2333 "parser.tab.cpp"
    break;

  case 111: /* expr: expr '%' endlOpt expr  */
#line 338 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "%", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2339 "parser.tab.cpp"
    break;

  case 112: /* expr: expr '&' endlOpt expr  */
#line 339 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "&", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2345 "parser.tab.cpp"
    break;

  case 113: /* expr: expr '|' endlOpt expr  */
#line 340 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "|", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2351 "parser.tab.cpp"
    break;

  case 114: /* expr: expr KW_OR endlOpt expr  */
#line 341 "parser.y"
                              { (yyval.tree) = mk_bin_op((char*) "||", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2357 "parser.tab.cpp"
    break;

  case 115: /* expr: expr KW_AND endlOpt expr  */
#line 342 "parser.y"
                               { (yyval.tree) = mk_bin_op((char*) "&&", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2363 "parser.tab.cpp"
    break;

  case 116: /* expr: '-' expr  */
#line 343 "parser.y"
                             { printf("PARSER found expr - UMINUS\n"); }
#line 2369 "parser.tab.cpp"
    break;

  case 117: /* expr: '+' expr  */
#line 344 "parser.y"
                            { printf("PARSER found expr - UPLUS\n"); }
#line 2375 "parser.tab.cpp"
    break;

  case 118: /* expr: if_else_expr  */
#line 345 "parser.y"
                                        { printf("PARSER found expr - if_else_expr\n"); }
#line 2381 "parser.tab.cpp"
    break;

  case 119: /* expr: for_expr  */
#line 346 "parser.y"
               { printf("PARSER found expr - for_expr\n"); }
#line 2387 "parser.tab.cpp"
    break;

  case 120: /* expr: while_expr  */
#line 347 "parser.y"
                 { printf("PARSER found expr - while_expr\n"); }
#line 2393 "parser.tab.cpp"
    break;

  case 121: /* expr: do_while_expr  */
#line 348 "parser.y"
                    { printf("PARSER found expr - do_while_expr\n"); }
#line 2399 "parser.tab.cpp"
    break;

  case 122: /* expr: match_expr  */
#line 349 "parser.y"
                 { printf("PARSER found expr - match_expr\n"); }
#line 2405 "parser.tab.cpp"
    break;

  case 123: /* expr: '{' statement_expr_list_e '}'  */
#line 350 "parser.y"
                                     { printf("PARSER found expr -  { statement_expr_list_e }\n"); }
#line 2411 "parser.tab.cpp"
    break;

  case 124: /* expr: anonymous_func  */
#line 351 "parser.y"
                     { printf("Function:\n"); }
#line 2417 "parser.tab.cpp"
    break;

  case 125: /* expr: method_call  */
#line 352 "parser.y"
                  { printf("method_call:\n"); }
#line 2423 "parser.tab.cpp"
    break;

  case 126: /* expr: create_instance_class  */
#line 353 "parser.y"
                            { printf("instance_class:\n"); }
#line 2429 "parser.tab.cpp"
    break;

  case 127: /* expr: READLINE '(' ')'  */
#line 354 "parser.y"
                     { printf("readLine:\n"); }
#line 2435 "parser.tab.cpp"
    break;

  case 128: /* expr: PRINTLN '(' expr ')'  */
#line 355 "parser.y"
                          { printf("print:\n"); }
#line 2441 "parser.tab.cpp"
    break;

  case 129: /* num_const: NUM_10  */
#line 360 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 2447 "parser.tab.cpp"
    break;

  case 130: /* num_const: NUM_16  */
#line 361 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 2453 "parser.tab.cpp"
    break;

  case 131: /* num_const: REAL_NUMBER  */
#line 362 "parser.y"
                  { printf("PARSER found - REAL\n"); }
#line 2459 "parser.tab.cpp"
    break;

  case 132: /* num_const: REAL_NUMBER_EXPONENT  */
#line 363 "parser.y"
                           { printf("PARSER found - REAL_EXP\n"); }
#line 2465 "parser.tab.cpp"
    break;

  case 173: /* array_literal: ARRAY endlOpt '(' expr_list_e ')'  */
#line 457 "parser.y"
                                        { printf("PARSER found Array\n"); }
#line 2471 "parser.tab.cpp"
    break;

  case 174: /* array_literal: ARRAY  */
#line 458 "parser.y"
                                   { printf("PARSER found Array\n"); }
#line 2477 "parser.tab.cpp"
    break;

  case 176: /* endlList: ENDL  */
#line 471 "parser.y"
                    { printf("PARSER found ENDL\n"); }
#line 2483 "parser.tab.cpp"
    break;

  case 177: /* endlList: endlList ENDL  */
#line 472 "parser.y"
                    { printf("PARSER found endlList\n"); }
#line 2489 "parser.tab.cpp"
    break;

  case 178: /* endlOpt: endlList  */
#line 477 "parser.y"
               { printf("PARSER found endlOpt\n"); }
#line 2495 "parser.tab.cpp"
    break;

  case 180: /* semicolonList: ';'  */
#line 483 "parser.y"
                   { printf("PARSER found SEMICOLON\n"); }
#line 2501 "parser.tab.cpp"
    break;

  case 181: /* semicolonList: semicolonList ';'  */
#line 484 "parser.y"
                        { printf("PARSER found semicolonList\n"); }
#line 2507 "parser.tab.cpp"
    break;

  case 182: /* separator_List: ENDL  */
#line 488 "parser.y"
            { printf("PARSER found ENDL\n"); }
#line 2513 "parser.tab.cpp"
    break;

  case 183: /* separator_List: ';'  */
#line 489 "parser.y"
            { printf("PARSER found SEMICOLON\n"); }
#line 2519 "parser.tab.cpp"
    break;

  case 184: /* separator_List: separator_List ENDL  */
#line 490 "parser.y"
                            { printf("PARSER add ENDL to separator_List\n"); }
#line 2525 "parser.tab.cpp"
    break;

  case 185: /* separator_List: separator_List ';'  */
#line 491 "parser.y"
                           { printf("PARSER add ; to separator_List\n"); }
#line 2531 "parser.tab.cpp"
    break;


#line 2535 "parser.tab.cpp"

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

#line 498 "parser.y"

