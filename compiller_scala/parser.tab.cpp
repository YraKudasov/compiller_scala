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
  YYSYMBOL_74_ = 74,                       /* '{'  */
  YYSYMBOL_75_ = 75,                       /* '}'  */
  YYSYMBOL_76_ = 76,                       /* ':'  */
  YYSYMBOL_77_ = 77,                       /* ';'  */
  YYSYMBOL_78___ = 78,                     /* '_'  */
  YYSYMBOL_YYACCEPT = 79,                  /* $accept  */
  YYSYMBOL_program = 80,                   /* program  */
  YYSYMBOL_class = 81,                     /* class  */
  YYSYMBOL_class_header = 82,              /* class_header  */
  YYSYMBOL_abstract_class_header = 83,     /* abstract_class_header  */
  YYSYMBOL_case_class_header = 84,         /* case_class_header  */
  YYSYMBOL_class_params = 85,              /* class_params  */
  YYSYMBOL_class_params_e = 86,            /* class_params_e  */
  YYSYMBOL_create_instance_class = 87,     /* create_instance_class  */
  YYSYMBOL_instance_case_class_in_case = 88, /* instance_case_class_in_case  */
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
  YYSYMBOL_literal_list_case = 103,        /* literal_list_case  */
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
  YYSYMBOL_endlList = 122,                 /* endlList  */
  YYSYMBOL_endlOpt = 123,                  /* endlOpt  */
  YYSYMBOL_semicolonList = 124,            /* semicolonList  */
  YYSYMBOL_separator_List = 125,           /* separator_List  */
  YYSYMBOL_separator_List_e = 126          /* separator_List_e  */
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
#define YYLAST   1348

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  193
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  569

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   312


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
       2,     2,     2,     2,     2,     2,     2,     2,    76,    77,
      10,     6,     9,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    20,     2,    21,     2,    78,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    74,     7,    75,     2,     2,     2,     2,
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
      71,    72,    73
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   116,   116,   123,   124,   125,   129,   130,   131,   132,
     136,   141,   142,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   166,
     167,   171,   172,   181,   185,   186,   194,   195,   203,   204,
     205,   206,   207,   208,   212,   213,   217,   218,   219,   220,
     221,   222,   223,   224,   233,   234,   235,   243,   244,   245,
     246,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   280,   284,   290,   291,   296,   297,   298,   299,
     300,   301,   302,   306,   307,   308,   313,   314,   325,   326,
     331,   332,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   374,   375,   376,   377,   382,
     383,   384,   385,   386,   387,   388,   394,   395,   396,   397,
     402,   407,   408,   412,   413,   414,   415,   416,   417,   418,
     419,   423,   424,   428,   429,   435,   436,   437,   438,   439,
     440,   441,   445,   446,   450,   451,   455,   466,   467,   471,
     472,   476,   485,   486,   491,   492,   497,   498,   502,   503,
     504,   505,   509,   510
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
  "'{'", "'}'", "':'", "';'", "'_'", "$accept", "program", "class",
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

#define YYPACT_NINF (-481)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-186)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       9,  -481,  -481,    46,  -481,    14,   927,  -481,  -481,  -481,
    1084,  1084,  1120,  -481,  -481,  -481,  -481,   202,  -481,  -481,
      49,    49,    49,    49,    49,    49,    49,   112,   119,   123,
      93,  -481,  -481,  -481,    49,    49,  -481,  -481,    49,    49,
       7,  -481,   105,   109,   132,  -481,   328,    16,  -481,  -481,
    -481,  -481,  -481,  -481,  1188,  -481,   181,  -481,  -481,  -481,
    -481,  -481,  -481,  -481,  -481,    20,   456,    43,  -481,  1084,
     183,   207,   224,    18,   218,   223,   233,     4,  1084,   236,
     186,  1084,   239,   242,    49,   235,    89,   237,   195,   154,
       7,     7,     7,  -481,   258,  -481,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,   229,   257,  -481,   248,    49,   259,    44,  1188,   256,
     262,  1084,  -481,    49,    49,    49,    49,  1084,   173,    49,
     184,  1084,    49,   595,  -481,  1084,   261,    49,   273,    49,
      11,  -481,  -481,   221,   230,   231,   328,  -481,  1188,  1084,
    1084,  1084,  1084,  1084,  1084,  1084,  1084,  1084,  1084,  1084,
    1084,  1084,  1084,  1084,    49,  -481,  -481,  -481,  -481,  -481,
    -481,  -481,  -481,   243,   241,   254,  -481,   315,   302,   207,
     303,  1084,   249,    24,    28,   791,   266,  1084,    -1,   194,
     294,   813,   307,  -481,   317,    49,    21,  1084,   318,    35,
    -481,  -481,  -481,  -481,   654,   477,   365,   365,   189,   189,
    -481,  -481,  -481,    56,    56,   582,   570,   365,   365,   263,
     257,   257,    49,    49,  -481,  -481,  1188,    49,    49,    49,
      49,    49,    49,   631,  1188,    49,  1084,   210,    49,    49,
      49,   329,    49,    49,  -481,    22,    49,   322,    49,    49,
     327,   257,    95,    49,  -481,    49,  -481,    19,  1084,  1084,
     313,  1084,    39,  1084,    92,  1084,  -481,    49,   301,   980,
    1188,   299,  1084,   300,  1084,    32,    99,  1084,  1084,   346,
      49,    49,    49,  1084,   290,    45,   257,    25,  -481,   348,
     343,   345,   368,   355,   211,   354,   313,    94,  1188,  1188,
      49,    49,  1188,   159,   362,    49,  1188,   363,    49,  1160,
     342,    94,    49,  1188,  1226,  1188,    49,  1188,    49,    49,
      49,    49,  1169,  -481,    95,  1084,   257,    26,  1188,  -481,
      49,    49,   322,    49,   367,   310,   311,    97,   320,   361,
     366,   371,    49,  -481,   144,    34,  -481,   373,   385,   257,
     390,   257,   391,    49,   129,   338,  1084,  -481,   341,  1250,
     339,  1084,  1032,   214,  -481,   386,  1188,    49,    49,    49,
     398,  1084,   204,   257,  1084,   257,   257,   379,   381,   215,
    -481,   333,   335,  1084,   103,    10,  -481,  -481,    49,   405,
     380,    49,  -481,  -481,    17,   349,   257,   409,    49,   410,
      49,  1084,    49,    94,  1188,    94,  -481,   372,    49,  1188,
      49,  1188,    49,  1084,   320,   427,  1084,   257,    49,  1188,
    -481,    49,  1215,   432,   434,   374,   376,   420,   428,   257,
     257,    42,  -481,     3,   393,   447,   426,   144,  -481,   422,
     257,  -481,    49,  1084,    49,  1084,  1188,  1084,  -481,   401,
      49,  1257,  1084,   411,  1188,  -481,    49,  1188,    49,  1084,
     466,  -481,    94,    94,   257,   257,   397,   400,   471,   472,
    -481,  1084,    49,    49,    16,    49,    49,    49,    49,  -481,
     473,  1188,   474,  1188,  1188,    94,    94,  -481,   421,  1188,
      49,  1084,   476,  1188,    49,  -481,  -481,   478,   488,   257,
     257,    94,    94,   480,  1084,    94,  1084,    94,  1084,   431,
     144,    49,    49,  -481,   435,    49,  1281,  1188,    49,  1084,
      94,    94,   491,   495,  -481,  -481,  -481,  1188,  -481,  1188,
    -481,  1188,    16,    49,    57,    57,    49,    94,  -481,   449,
    1084,  1188,  -481,  -481,    94,    94,  1084,   446,  -481,  -481,
      94,   450,    49,  1188,  -481,  -481,  1188,    16,  -481,    49,
      94,  1084,    94,   451,  1188,  -481,    49,    94,  -481
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     193,   188,   189,     0,     2,   192,     0,     1,   190,   191,
       0,     0,   149,   135,   136,   137,   138,   103,   141,   140,
     185,   185,   185,   185,   185,   185,   185,     0,     0,   180,
       0,   142,   143,   144,   185,   185,    35,    34,   185,   185,
     193,    52,     0,     0,     0,   131,     0,   193,    38,   123,
     124,   125,   126,   127,    40,   139,   102,   129,    53,   130,
     145,   177,   178,   122,   121,   103,     0,     0,   182,    99,
       0,   163,   184,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   185,     0,     0,     0,     0,     0,
     193,   193,   193,    39,   192,    44,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,     0,     0,   105,     0,   185,     0,    98,   100,     0,
       0,    99,   183,   185,   185,   185,   185,     0,     0,   185,
     185,     0,   185,     0,   132,    99,     0,   185,    31,   185,
     185,    10,   128,     0,     0,     0,     0,    41,    42,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   185,   165,   166,   167,   168,   169,
     170,   171,   172,   146,     0,     0,   161,     0,     0,   164,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   133,     0,   185,     0,    99,     0,     0,
       3,     4,     5,    43,   118,   117,   106,   107,   112,   113,
     115,   114,   116,   110,   111,   119,   120,   108,   109,     0,
       0,     0,   185,   185,   134,   162,   104,   185,   185,   185,
     185,   185,   185,     0,    61,   185,     0,     0,   185,   185,
     185,     0,   185,   185,   179,     0,   185,   149,   185,   185,
       0,     0,    30,   185,     9,   185,   173,   147,     0,     0,
       0,     0,     0,     0,     0,     0,    64,   185,     0,     0,
      65,     0,     0,     0,     0,   184,     0,     0,     0,     0,
     185,   185,   185,     0,     0,     0,     0,     0,    32,     0,
       0,     0,    29,     0,     0,     0,     0,     0,   150,   101,
     185,   185,    46,     0,     0,   185,    47,     0,   185,    56,
       0,     0,   185,    58,     0,    66,   185,    70,   185,   185,
     185,   185,     0,    82,    30,     0,     0,     0,   156,   151,
     185,   185,   149,   185,     0,     0,     0,     0,     6,     0,
       0,    36,   185,   148,     0,     0,   174,     0,     0,     0,
       0,     0,     0,   185,     0,    62,     0,    69,     0,     0,
       0,     0,     0,     0,    83,     0,   160,   185,   185,   185,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     0,     0,     0,     0,   185,    92,    90,   185,    89,
      96,   185,    84,   186,   185,     0,     0,     0,   185,     0,
     185,     0,   185,     0,    57,     0,    73,     0,   185,    74,
     185,    60,   185,     0,    11,     0,     0,     0,   185,   155,
     152,   185,     0,    14,    13,     0,     0,     0,     0,     0,
       0,   185,    85,     0,     0,     0,     0,     0,   187,     0,
       0,   175,   185,     0,   185,     0,    54,     0,    63,    67,
     185,     0,     0,     0,    75,    12,   185,   159,   185,     0,
       0,   181,     0,     0,     0,     0,     0,     0,    22,    21,
      37,    99,   185,   185,   193,   185,   185,   185,   185,   176,
       0,    48,     0,    49,    55,     0,     0,    81,     0,    59,
     185,     0,     0,   154,   185,    16,    15,    18,    17,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   185,   185,    68,    71,   185,     0,   158,   185,     0,
       0,     0,    26,    25,    24,    23,    33,    88,    91,    93,
      97,    86,   193,   185,     0,     0,   185,     0,    78,     0,
       0,   153,    20,    19,     0,     0,     0,     0,    51,    50,
       0,    79,   185,   157,    28,    27,    95,   193,    72,   185,
       0,     0,     0,    76,    94,    80,   185,     0,    77
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -481,  -481,  -481,   429,  -481,  -481,  -481,   191,  -481,  -481,
      -4,  -327,  -481,    23,   -43,  -481,  -481,  -481,  -481,  -481,
    -481,  -481,  -421,   220,  -481,  -120,   136,    -6,  -481,   382,
    -240,  -481,   275,  -481,   402,  -481,  -191,   305,  -481,  -223,
    -480,  -481,  -481,  -204,   319,  -481,   483,   -39
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,    41,    42,    43,    44,   292,   293,    45,   387,
     294,   254,    47,     4,    48,    49,    50,   188,   240,    51,
      52,    53,   388,   301,   389,   116,   117,   118,    55,    56,
      67,    57,   249,    58,    71,    59,   172,   173,   347,   305,
      60,    61,    62,    72,    73,   394,     5,     6
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      54,   180,    46,    93,    63,    64,    66,   285,    95,   -45,
       1,   380,     1,   -87,    68,   194,   477,     8,   235,     1,
      68,   471,   128,    68,   123,   297,  -185,   246,   280,   256,
     228,   331,   368,   236,   230,   122,   275,   472,    69,   247,
     247,   308,    70,   332,   332,    68,     7,    68,   114,  -185,
     114,   147,    68,   252,   548,   549,   124,   303,  -185,   318,
     289,   470,   115,    89,   329,    98,    99,   100,   101,   102,
     103,   104,   130,   391,   -87,   133,   237,   250,   129,   473,
     348,   304,   -45,   220,     2,    -8,     2,   455,   148,   533,
     146,     9,   372,     2,   438,   330,   112,   248,   281,    29,
     229,   333,   369,   203,   231,   354,   253,   109,   110,   392,
     303,   393,   346,   143,   144,   145,   138,    13,    14,    15,
      16,   185,    18,    19,   267,   191,   290,   291,   377,   378,
      81,   139,   122,   319,   307,   367,    29,    82,    31,    32,
      33,  -185,   391,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   397,    84,
     399,   267,   402,    36,    37,    36,    37,    13,    14,    15,
      16,   385,    18,    19,   320,   226,   321,   303,   432,    90,
     393,   234,   421,    91,   423,   424,    29,    68,    31,    32,
      33,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     186,   119,   102,   103,   104,   441,    92,   187,  -185,   114,
     120,   267,   165,   166,   167,   168,   169,   170,   171,  -185,
      69,   238,   386,   420,    70,   121,   458,   122,   239,   142,
     270,   105,   106,   107,   108,   109,   110,   271,   468,   469,
    -185,   412,   339,   340,   272,   125,   427,   428,   413,   479,
     126,   127,   298,   299,   131,   302,   132,   306,   134,   309,
     135,     8,   137,   313,   140,    38,   315,   164,   317,    10,
      11,   322,   323,   497,   498,   174,    12,   328,   176,   178,
      69,    13,    14,    15,    16,    17,    18,    19,   195,    20,
      21,   197,    22,    23,    24,    25,   200,    26,    27,    28,
      29,    30,    31,    32,    33,   201,   202,   220,   522,   523,
     165,   166,   167,   168,   169,   170,   171,   221,   222,   366,
     223,   224,   225,   227,    34,    35,    36,    37,    38,   233,
      39,   241,    40,   379,   243,     9,   244,   255,   251,    74,
      75,    76,    77,    78,    79,    80,   288,   277,    83,   284,
     404,   503,   300,    85,    86,   409,   411,    87,    88,    20,
      21,   311,   314,   316,   324,   419,   112,    26,   422,   334,
     335,    30,   336,   337,   338,   111,   100,   101,   102,   103,
     104,   341,   349,   351,   139,   374,   375,   376,   381,   383,
     396,   253,   395,   382,    34,   446,   398,   400,    38,   403,
      39,   405,   408,   136,   418,   414,   425,   454,   426,   429,
     457,   430,  -185,   440,  -185,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     442,   444,   450,   456,   175,   506,   177,   481,   462,   483,
     463,   484,   181,   182,   183,   184,   489,   466,   189,   190,
     464,   192,   465,   493,   475,   467,   196,   474,   198,   199,
     476,   478,   485,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   494,   499,   490,   113,   500,   501,   502,   511,
     512,   515,   518,   219,   520,   517,    98,    99,   100,   101,
     102,   103,   104,   546,   521,   532,   536,   544,   527,   526,
     529,   545,   531,   105,   106,   107,   108,   109,   110,   552,
     557,   559,   566,   541,   245,   365,   342,   141,   561,   431,
     282,     0,   179,     0,   105,   106,   257,     0,   109,   110,
      94,     0,     0,     0,   553,     0,     0,     0,     0,     0,
     556,   258,   259,     0,     0,     0,   260,   261,   262,   263,
     264,   265,     0,     0,   269,   564,     0,   273,   274,   276,
       0,   278,   279,     0,     0,   283,     0,   286,   287,     0,
       0,     0,   295,     0,   296,     0,     0,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   310,     0,     0,    96,
      97,    98,    99,   100,   101,   102,   103,   104,     0,   325,
     326,   327,    96,    97,    98,    99,   100,   101,   102,   103,
     104,     0,     0,     0,   193,   268,     0,   105,   106,   344,
     345,   109,   110,     0,   350,     0,     0,   352,     0,   105,
     106,   356,   108,   109,   110,   359,     0,   360,   361,   362,
     363,     0,   105,   106,   107,   108,   109,   110,     0,   370,
     371,     0,   373,     0,    13,    14,    15,    16,   266,    18,
      19,   384,    97,    98,    99,   100,   101,   102,   103,   104,
       0,     0,   401,    29,     0,    31,    32,    33,     0,   343,
       0,     0,     0,     0,     0,     0,   415,   416,   417,     0,
       0,     0,     0,   355,     0,     0,   358,     0,   267,     0,
       0,   105,   106,     0,   433,   109,   110,   434,   435,   436,
     437,     0,     0,   439,     0,     0,     0,   443,     0,   445,
       0,   447,     0,     0,     0,     0,   390,   451,     0,   452,
       0,   453,     0,     0,     0,     0,     0,   459,     0,     0,
     460,   407,     0,     0,     0,     0,     0,     0,     0,     0,
     177,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   480,     0,   482,     0,     0,     0,     0,     0,   486,
       0,     0,     0,     0,     0,   491,     0,   492,     0,     0,
       0,     0,     0,     0,     0,   448,     0,   449,     0,     0,
       0,   504,   505,     0,   507,   508,   509,   510,    96,    97,
      98,    99,   100,   101,   102,   103,   104,     0,     0,   516,
     232,     0,     0,   519,     0,     0,     0,     0,     0,   390,
      96,    97,    98,    99,   100,   101,   102,   103,   104,     0,
     534,   535,   242,   488,   537,     0,     0,   540,   105,   106,
     107,   108,   109,   110,   495,   496,     0,     0,     0,     0,
       0,     0,   547,     0,     0,   550,     0,     0,     0,     0,
     105,   106,   107,   108,   109,   110,     0,   513,   514,     0,
       0,   560,     0,     0,     0,     0,     0,     0,   562,     0,
       0,     0,     0,   524,   525,   567,     0,   528,     0,   530,
       0,     0,   390,     0,     0,     0,     0,     0,   539,     0,
       0,     0,   542,   543,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   551,
       0,     0,     0,     0,     0,     0,   554,   555,     0,     0,
       0,     0,   558,     0,     0,     0,     0,     0,    10,    11,
       0,     0,   563,     0,   565,    12,     0,     0,     0,   568,
      13,    14,    15,    16,    17,    18,    19,     0,    20,    21,
       0,    22,    23,    24,    25,     0,    26,    27,    28,    29,
      30,    31,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,    34,    35,    36,    37,    38,    12,    39,
       0,    40,     0,    13,    14,    15,    16,    17,    18,    19,
       0,     0,     0,     0,    22,    23,    24,    25,     0,     0,
      27,    28,    29,     0,    31,    32,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   312,    10,    11,     0,     0,    35,     0,     0,
      12,     0,     0,     0,    40,    13,    14,    15,    16,    17,
      18,    19,     0,     0,     0,     0,    22,    23,    24,    25,
       0,     0,    27,    28,    29,     0,    31,    32,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   410,    10,    11,     0,     0,    35,
       0,     0,    12,     0,     0,     0,    40,    13,    14,    15,
      16,    17,    18,    19,     0,     0,     0,     0,    22,    23,
      24,    25,     0,     0,    27,    28,    29,     0,    31,    32,
      33,    10,    11,     0,     0,     0,     0,     0,    12,     0,
       0,     0,     0,    13,    14,    15,    16,    65,    18,    19,
       0,    35,     0,     0,    22,    23,    24,    25,    40,     0,
      27,    28,    29,     0,    31,    32,    33,    96,    97,    98,
      99,   100,   101,   102,   103,   104,    96,    97,    98,    99,
     100,   101,   102,   103,   104,     0,     0,    35,   364,     0,
       0,     0,     0,   353,    40,    96,    97,    98,    99,   100,
     101,   102,   103,   104,     0,     0,     0,   105,   106,   107,
     108,   109,   110,     0,     0,     0,   105,   106,   107,   108,
     109,   110,    96,    97,    98,    99,   100,   101,   102,   103,
     104,     0,     0,     0,   461,   105,   106,   107,   108,   109,
     110,     0,     0,     0,     0,     0,     0,     0,     0,    13,
      14,    15,    16,   357,    18,    19,     0,     0,     0,     0,
       0,     0,   105,   106,   107,   108,   109,   110,    29,     0,
      31,    32,    33,    13,    14,    15,    16,   406,    18,    19,
      13,    14,    15,    16,   487,    18,    19,     0,     0,     0,
       0,     0,    29,   267,    31,    32,    33,     0,     0,    29,
       0,    31,    32,    33,    13,    14,    15,    16,   538,    18,
      19,     0,     0,     0,     0,     0,     0,   267,     0,     0,
       0,     0,     0,    29,   267,    31,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   267
};

static const yytype_int16 yycheck[] =
{
       6,   121,     6,    46,    10,    11,    12,   247,    47,     0,
       3,   338,     3,     3,     3,   135,   437,     3,    19,     3,
       3,    18,    18,     3,     6,     6,     6,     6,     6,   220,
       6,     6,     6,    34,     6,     3,   240,    34,    18,    18,
      18,   264,    22,    18,    18,     3,     0,     3,     5,     5,
       5,    94,     3,    18,   534,   535,    38,    18,    38,    27,
     251,    19,    19,    40,    19,     9,    10,    11,    12,    13,
      14,    15,    78,    39,    64,    81,    77,   197,    74,    76,
     303,    42,    75,    64,    77,    74,    77,   414,    94,   510,
      94,    77,   332,    77,    77,   286,    76,    76,    76,    42,
      76,    76,    76,   146,    76,   309,    71,    51,    52,    75,
      18,    77,   303,    90,    91,    92,    27,    23,    24,    25,
      26,   127,    28,    29,    67,   131,    31,    32,    31,    32,
      18,    42,     3,    34,    42,   326,    42,    18,    44,    45,
      46,    18,    39,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   349,    66,
     351,    67,    33,    68,    69,    68,    69,    23,    24,    25,
      26,    27,    28,    29,    75,   181,    77,    18,    75,    74,
      77,   187,   373,    74,   375,   376,    42,     3,    44,    45,
      46,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      27,    18,    13,    14,    15,   396,    74,    34,     6,     5,
      27,    67,    53,    54,    55,    56,    57,    58,    59,    38,
      18,    27,    78,    19,    22,    18,   417,     3,    34,    75,
     236,    47,    48,    49,    50,    51,    52,    27,   429,   430,
      38,    27,    31,    32,    34,    27,    31,    32,    34,   440,
      27,    18,   258,   259,    18,   261,    70,   263,    19,   265,
      18,     3,    27,   269,    27,    70,   272,    38,   274,    11,
      12,   277,   278,   464,   465,    27,    18,   283,    19,    23,
      18,    23,    24,    25,    26,    27,    28,    29,    27,    31,
      32,    18,    34,    35,    36,    37,    75,    39,    40,    41,
      42,    43,    44,    45,    46,    75,    75,    64,   499,   500,
      53,    54,    55,    56,    57,    58,    59,    76,    64,   325,
       5,    19,    19,    74,    66,    67,    68,    69,    70,    63,
      72,    37,    74,   337,    27,    77,    19,    74,    20,    20,
      21,    22,    23,    24,    25,    26,    19,    18,    29,    27,
     356,   471,    39,    34,    35,   361,   362,    38,    39,    31,
      32,    60,    63,    63,    18,   371,    76,    39,   374,    21,
      27,    43,    27,     5,    19,    56,    11,    12,    13,    14,
      15,    27,    20,    20,    42,    18,    76,    76,    27,    18,
       5,    71,    19,    27,    66,   401,     6,     6,    70,    61,
      72,    60,    63,    84,     6,    19,    27,   413,    27,    76,
     416,    76,     7,    64,    34,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
      21,    21,    60,     6,   115,   474,   117,   443,     6,   445,
       6,   447,   123,   124,   125,   126,   452,    27,   129,   130,
      76,   132,    76,   459,     7,    27,   137,    64,   139,   140,
      34,    39,    61,     7,     8,     9,    10,    11,    12,    13,
      14,    15,     6,    76,    63,    19,    76,     6,     6,     6,
       6,    60,     6,   164,     6,   491,     9,    10,    11,    12,
      13,    14,    15,   532,     6,    64,    61,     6,   504,    19,
     506,     6,   508,    47,    48,    49,    50,    51,    52,    60,
      64,    61,    61,   519,   195,   324,   296,    88,   557,   383,
     245,    -1,   120,    -1,    47,    48,   221,    -1,    51,    52,
      47,    -1,    -1,    -1,   540,    -1,    -1,    -1,    -1,    -1,
     546,   222,   223,    -1,    -1,    -1,   227,   228,   229,   230,
     231,   232,    -1,    -1,   235,   561,    -1,   238,   239,   240,
      -1,   242,   243,    -1,    -1,   246,    -1,   248,   249,    -1,
      -1,    -1,   253,    -1,   255,    -1,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    15,   267,    -1,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,   280,
     281,   282,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    -1,    19,   233,    -1,    47,    48,   300,
     301,    51,    52,    -1,   305,    -1,    -1,   308,    -1,    47,
      48,   312,    50,    51,    52,   316,    -1,   318,   319,   320,
     321,    -1,    47,    48,    49,    50,    51,    52,    -1,   330,
     331,    -1,   333,    -1,    23,    24,    25,    26,    27,    28,
      29,   342,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,   353,    42,    -1,    44,    45,    46,    -1,   297,
      -1,    -1,    -1,    -1,    -1,    -1,   367,   368,   369,    -1,
      -1,    -1,    -1,   311,    -1,    -1,   314,    -1,    67,    -1,
      -1,    47,    48,    -1,   385,    51,    52,   388,   389,   390,
     391,    -1,    -1,   394,    -1,    -1,    -1,   398,    -1,   400,
      -1,   402,    -1,    -1,    -1,    -1,   344,   408,    -1,   410,
      -1,   412,    -1,    -1,    -1,    -1,    -1,   418,    -1,    -1,
     421,   359,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     431,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   442,    -1,   444,    -1,    -1,    -1,    -1,    -1,   450,
      -1,    -1,    -1,    -1,    -1,   456,    -1,   458,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   403,    -1,   405,    -1,    -1,
      -1,   472,   473,    -1,   475,   476,   477,   478,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,   490,
      19,    -1,    -1,   494,    -1,    -1,    -1,    -1,    -1,   437,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
     511,   512,    19,   451,   515,    -1,    -1,   518,    47,    48,
      49,    50,    51,    52,   462,   463,    -1,    -1,    -1,    -1,
      -1,    -1,   533,    -1,    -1,   536,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,    -1,   485,   486,    -1,
      -1,   552,    -1,    -1,    -1,    -1,    -1,    -1,   559,    -1,
      -1,    -1,    -1,   501,   502,   566,    -1,   505,    -1,   507,
      -1,    -1,   510,    -1,    -1,    -1,    -1,    -1,   516,    -1,
      -1,    -1,   520,   521,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   537,
      -1,    -1,    -1,    -1,    -1,    -1,   544,   545,    -1,    -1,
      -1,    -1,   550,    -1,    -1,    -1,    -1,    -1,    11,    12,
      -1,    -1,   560,    -1,   562,    18,    -1,    -1,    -1,   567,
      23,    24,    25,    26,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    11,    12,    66,    67,    68,    69,    70,    18,    72,
      -1,    74,    -1,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    -1,    -1,
      40,    41,    42,    -1,    44,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    11,    12,    -1,    -1,    67,    -1,    -1,
      18,    -1,    -1,    -1,    74,    23,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      -1,    -1,    40,    41,    42,    -1,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    11,    12,    -1,    -1,    67,
      -1,    -1,    18,    -1,    -1,    -1,    74,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    -1,    -1,    40,    41,    42,    -1,    44,    45,
      46,    11,    12,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      -1,    67,    -1,    -1,    34,    35,    36,    37,    74,    -1,
      40,    41,    42,    -1,    44,    45,    46,     7,     8,     9,
      10,    11,    12,    13,    14,    15,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    67,    19,    -1,
      -1,    -1,    -1,    33,    74,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    52,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    -1,    19,    47,    48,    49,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    49,    50,    51,    52,    42,    -1,
      44,    45,    46,    23,    24,    25,    26,    27,    28,    29,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    42,    67,    44,    45,    46,    -1,    -1,    42,
      -1,    44,    45,    46,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    42,    67,    44,    45,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    77,    80,    92,   125,   126,     0,     3,    77,
      11,    12,    18,    23,    24,    25,    26,    27,    28,    29,
      31,    32,    34,    35,    36,    37,    39,    40,    41,    42,
      43,    44,    45,    46,    66,    67,    68,    69,    70,    72,
      74,    81,    82,    83,    84,    87,    89,    91,    93,    94,
      95,    98,    99,   100,   106,   107,   108,   110,   112,   114,
     119,   120,   121,   106,   106,    27,   106,   109,     3,    18,
      22,   113,   122,   123,   123,   123,   123,   123,   123,   123,
     123,    18,    18,   123,    66,   123,   123,   123,   123,    92,
      74,    74,    74,    93,   125,   126,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    47,    48,    49,    50,    51,
      52,   123,    76,    19,     5,    19,   104,   105,   106,    18,
      27,    18,     3,     6,    38,    27,    27,    18,    18,    74,
     106,    18,    70,   106,    19,    18,   123,    27,    27,    42,
      27,    82,    75,    92,    92,    92,    89,    93,   106,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,    38,    53,    54,    55,    56,    57,
      58,    59,   115,   116,    27,   123,    19,   123,    23,   113,
     104,   123,   123,   123,   123,   106,    27,    34,    96,   123,
     123,   106,   123,    19,   104,    27,   123,    18,   123,   123,
      75,    75,    75,    93,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   123,
      64,    76,    64,     5,    19,    19,   106,    74,     6,    76,
       6,    76,    19,    63,   106,    19,    34,    77,    27,    34,
      97,    37,    19,    27,    19,   123,     6,    18,    76,   111,
     104,    20,    18,    71,    90,    74,   115,   116,   123,   123,
     123,   123,   123,   123,   123,   123,    27,    67,   108,   123,
     106,    27,    34,   123,   123,   122,   123,    18,   123,   123,
       6,    76,   111,   123,    27,   109,   123,   123,    19,   115,
      31,    32,    85,    86,    89,   123,   123,     6,   106,   106,
      39,   102,   106,    18,    42,   118,   106,    42,   118,   106,
     123,    60,    62,   106,    63,   106,    63,   106,    27,    34,
      75,    77,   106,   106,    18,   123,   123,   123,   106,    19,
     115,     6,    18,    76,    21,    27,    27,     5,    19,    31,
      32,    27,   102,   108,   123,   123,   115,   117,   118,    20,
     123,    20,   123,    33,   122,   108,   123,    27,   108,   123,
     123,   123,   123,   123,    19,    86,   106,   115,     6,    76,
     123,   123,   109,   123,    18,    76,    76,    31,    32,    89,
      90,    27,    27,    18,   123,    27,    78,    88,   101,   103,
     108,    39,    75,    77,   124,    19,     5,   115,     6,   115,
       6,   123,    33,    61,   106,    60,    27,   108,    63,   106,
      62,   106,    27,    34,    19,   123,   123,   123,     6,   106,
      19,   115,   106,   115,   115,    27,    27,    31,    32,    76,
      76,   105,    75,   123,   123,   123,   123,   123,    77,   123,
      64,   115,    21,   123,    21,   123,   106,   123,   108,   108,
      60,   123,   123,   123,   106,    90,     6,   106,   115,   123,
     123,    19,     6,     6,    76,    76,    27,    27,   115,   115,
      19,    18,    34,    76,    64,     7,    34,   101,    39,   115,
     123,   106,   123,   106,   106,    61,   123,    27,   108,   106,
      63,   123,   123,   106,     6,   108,   108,   115,   115,    76,
      76,     6,     6,   104,   123,   123,   126,   123,   123,   123,
     123,     6,     6,   108,   108,    60,   123,   106,     6,   123,
       6,     6,   115,   115,   108,   108,    19,   106,   108,   106,
     108,   106,    64,   101,   123,   123,    61,   123,    27,   108,
     123,   106,   108,   108,     6,     6,   126,   123,   119,   119,
     123,   108,    60,   106,   108,   108,   106,    64,   108,    61,
     123,   126,   123,   108,   106,   108,    61,   123,   108
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    79,    80,    81,    81,    81,    82,    82,    82,    82,
      83,    84,    84,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    86,
      86,    87,    87,    88,    89,    89,    90,    90,    91,    91,
      91,    91,    91,    91,    92,    92,    93,    93,    93,    93,
      93,    93,    93,    93,    94,    94,    94,    95,    95,    95,
      95,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    98,    99,   100,   100,   101,   101,   101,   101,
     101,   101,   101,   102,   102,   102,   103,   103,   104,   104,
     105,   105,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   107,   107,   107,   107,   108,
     108,   108,   108,   108,   108,   108,   109,   109,   109,   109,
     110,   111,   111,   112,   112,   112,   112,   112,   112,   112,
     112,   113,   113,   114,   114,   115,   115,   115,   115,   115,
     115,   115,   116,   116,   117,   117,   118,   119,   119,   120,
     120,   121,   122,   122,   123,   123,   124,   124,   125,   125,
     125,   125,   126,   126
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     4,     4,     4,     7,     8,     3,     5,
       3,     9,    10,     4,     4,     6,     6,     6,     6,     8,
       8,     5,     5,     7,     7,     7,     7,     9,     9,     1,
       0,     3,     6,     5,     1,     1,     3,     6,     1,     2,
       1,     3,     3,     4,     3,     0,     7,     7,    11,    11,
      14,    14,     1,     1,    10,    11,     7,     9,     7,    11,
       9,     2,     5,     7,     3,     3,     4,     7,     9,     5,
       3,     8,    11,     5,     5,     6,    12,    15,     9,    10,
      13,     7,     7,     8,     9,     9,     5,     1,     5,     1,
       1,     5,     1,     7,    11,     9,     1,     5,     1,     0,
       1,     5,     1,     1,     5,     3,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     2,     2,     1,     1,     1,     1,     1,     3,     1,
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
  case 38: /* statement_expr_list: statement  */
#line 203 "parser.y"
                { printf("Add first statement :\n"); }
#line 2127 "parser.tab.cpp"
    break;

  case 39: /* statement_expr_list: visibility_modifier statement  */
#line 204 "parser.y"
                                    { printf("Add first visibility_modifier statement :\n"); }
#line 2133 "parser.tab.cpp"
    break;

  case 40: /* statement_expr_list: expr  */
#line 205 "parser.y"
           { printf("Add first statement :\n"); }
#line 2139 "parser.tab.cpp"
    break;

  case 41: /* statement_expr_list: statement_expr_list separator_List statement  */
#line 206 "parser.y"
                                                    { printf("Add new statement to statement_expr_list :\n"); }
#line 2145 "parser.tab.cpp"
    break;

  case 42: /* statement_expr_list: statement_expr_list separator_List expr  */
#line 207 "parser.y"
                                               { printf("Add new expr to statement_expr_list :\n"); }
#line 2151 "parser.tab.cpp"
    break;

  case 43: /* statement_expr_list: statement_expr_list separator_List visibility_modifier statement  */
#line 208 "parser.y"
                                                                        { printf("Add new visibility_modifier to statement_expr_list :\n"); }
#line 2157 "parser.tab.cpp"
    break;

  case 45: /* statement_expr_list_e: %empty  */
#line 213 "parser.y"
                     { printf("PARSER found statement_list_e - nothing\n"); }
#line 2163 "parser.tab.cpp"
    break;

  case 46: /* statement: VAL endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 217 "parser.y"
                                                       { printf("implicit value declaration:\n"); }
#line 2169 "parser.tab.cpp"
    break;

  case 47: /* statement: VAR endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 218 "parser.y"
                                                       { printf("implicit variable declaration:\n"); }
#line 2175 "parser.tab.cpp"
    break;

  case 48: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 219 "parser.y"
                                                                                           { printf("explicit value declaration:\n"); }
#line 2181 "parser.tab.cpp"
    break;

  case 49: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 220 "parser.y"
                                                                                           { printf("explicit variable declaration:\n"); }
#line 2187 "parser.tab.cpp"
    break;

  case 50: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt ARRAY '[' type ']' endlOpt '=' endlOpt array  */
#line 221 "parser.y"
                                                                                              { printf("explicit array declaration:\n"); }
#line 2193 "parser.tab.cpp"
    break;

  case 51: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt ARRAY '[' type ']' endlOpt '=' endlOpt array  */
#line 222 "parser.y"
                                                                                              { printf("explicit array declaration:\n"); }
#line 2199 "parser.tab.cpp"
    break;

  case 52: /* statement: class  */
#line 223 "parser.y"
            { printf("Class:\n"); }
#line 2205 "parser.tab.cpp"
    break;

  case 53: /* statement: method  */
#line 224 "parser.y"
             { printf("Method:\n"); }
#line 2211 "parser.tab.cpp"
    break;

  case 54: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr ELSE endlOpt expr  */
#line 233 "parser.y"
                                                                           { (yyval.tree) = mk_if_else_expr((yyvsp[-6].tree), (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2217 "parser.tab.cpp"
    break;

  case 55: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr endlList ELSE endlOpt expr  */
#line 234 "parser.y"
                                                                                    { (yyval.tree) = mk_if_else_expr((yyvsp[-7].tree), (yyvsp[-4].tree), (yyvsp[0].tree)); }
#line 2223 "parser.tab.cpp"
    break;

  case 56: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr  */
#line 235 "parser.y"
                                                      { (yyval.tree) = mk_if_expr((yyvsp[-3].tree), (yyvsp[0].tree));}
#line 2229 "parser.tab.cpp"
    break;

  case 57: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt YIELD endlOpt expr  */
#line 243 "parser.y"
                                                                                                                          { printf("FOR in parentheses\n"); }
#line 2235 "parser.tab.cpp"
    break;

  case 58: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt expr  */
#line 244 "parser.y"
                                                                                                            { printf("FOR in parentheses\n"); }
#line 2241 "parser.tab.cpp"
    break;

  case 59: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt YIELD endlOpt expr  */
#line 245 "parser.y"
                                                                                                                                           { printf("FOR in curly_braces\n"); }
#line 2247 "parser.tab.cpp"
    break;

  case 60: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt expr  */
#line 246 "parser.y"
                                                                                                                             { printf("FOR in curly_braces\n"); }
#line 2253 "parser.tab.cpp"
    break;

  case 98: /* expr_list_e: expr_list  */
#line 325 "parser.y"
                   { printf("PARSER found expr_list - expr_list\n"); }
#line 2259 "parser.tab.cpp"
    break;

  case 99: /* expr_list_e: %empty  */
#line 326 "parser.y"
                     { printf("PARSER found expr_list - nothing\n"); }
#line 2265 "parser.tab.cpp"
    break;

  case 100: /* expr_list: expr  */
#line 331 "parser.y"
                      { printf("PARSER found expr_list - expr\n"); }
#line 2271 "parser.tab.cpp"
    break;

  case 101: /* expr_list: expr_list endlOpt ',' endlOpt expr  */
#line 332 "parser.y"
                                          { printf("PARSER found expr_list - expr_list\n"); }
#line 2277 "parser.tab.cpp"
    break;

  case 102: /* expr: const  */
#line 337 "parser.y"
                                  {printf("PARSER found expr - const\n"); }
#line 2283 "parser.tab.cpp"
    break;

  case 103: /* expr: IDENTIFIER  */
#line 338 "parser.y"
                                       {(yyval.tree) = mk_ident_lit((yyvsp[0].str_value)); }
#line 2289 "parser.tab.cpp"
    break;

  case 104: /* expr: IDENTIFIER endlOpt '=' endlOpt expr  */
#line 339 "parser.y"
                                          { printf("Assignment:\n"); }
#line 2295 "parser.tab.cpp"
    break;

  case 105: /* expr: '(' expr ')'  */
#line 340 "parser.y"
                   { printf("PARSER found expr - ( expr ) \n"); }
#line 2301 "parser.tab.cpp"
    break;

  case 106: /* expr: expr '>' endlOpt expr  */
#line 341 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) ">", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2307 "parser.tab.cpp"
    break;

  case 107: /* expr: expr '<' endlOpt expr  */
#line 342 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "<", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2313 "parser.tab.cpp"
    break;

  case 108: /* expr: expr MORE_OR_EQUAL_OPERATOR endlOpt expr  */
#line 343 "parser.y"
                                               { (yyval.tree) = mk_bin_op((char*) ">=", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2319 "parser.tab.cpp"
    break;

  case 109: /* expr: expr LESS_OR_EQUAL_OPERATOR endlOpt expr  */
#line 344 "parser.y"
                                               { (yyval.tree) = mk_bin_op((char*) "<=", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2325 "parser.tab.cpp"
    break;

  case 110: /* expr: expr EQ endlOpt expr  */
#line 345 "parser.y"
                           { (yyval.tree) = mk_bin_op((char*) "==", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2331 "parser.tab.cpp"
    break;

  case 111: /* expr: expr NEQ endlOpt expr  */
#line 346 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "!=", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2337 "parser.tab.cpp"
    break;

  case 112: /* expr: expr '+' endlOpt expr  */
#line 347 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "+", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2343 "parser.tab.cpp"
    break;

  case 113: /* expr: expr '-' endlOpt expr  */
#line 348 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "-", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2349 "parser.tab.cpp"
    break;

  case 114: /* expr: expr '/' endlOpt expr  */
#line 349 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "/", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2355 "parser.tab.cpp"
    break;

  case 115: /* expr: expr '*' endlOpt expr  */
#line 350 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "*", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2361 "parser.tab.cpp"
    break;

  case 116: /* expr: expr '%' endlOpt expr  */
#line 351 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "%", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2367 "parser.tab.cpp"
    break;

  case 117: /* expr: expr '&' endlOpt expr  */
#line 352 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "&", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2373 "parser.tab.cpp"
    break;

  case 118: /* expr: expr '|' endlOpt expr  */
#line 353 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "|", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2379 "parser.tab.cpp"
    break;

  case 119: /* expr: expr KW_OR endlOpt expr  */
#line 354 "parser.y"
                              { (yyval.tree) = mk_bin_op((char*) "||", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2385 "parser.tab.cpp"
    break;

  case 120: /* expr: expr KW_AND endlOpt expr  */
#line 355 "parser.y"
                               { (yyval.tree) = mk_bin_op((char*) "&&", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2391 "parser.tab.cpp"
    break;

  case 121: /* expr: '-' expr  */
#line 356 "parser.y"
                             { (yyval.tree) = mk_unary_op("unary_minus_op", (yyvsp[0].tree));found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2397 "parser.tab.cpp"
    break;

  case 122: /* expr: '+' expr  */
#line 357 "parser.y"
                            { (yyval.tree) = mk_unary_op("unary_plus_op", (yyvsp[0].tree));found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2403 "parser.tab.cpp"
    break;

  case 123: /* expr: if_else_expr  */
#line 358 "parser.y"
                   {(yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2409 "parser.tab.cpp"
    break;

  case 124: /* expr: for_expr  */
#line 359 "parser.y"
               { printf("PARSER found expr - for_expr\n"); }
#line 2415 "parser.tab.cpp"
    break;

  case 125: /* expr: while_expr  */
#line 360 "parser.y"
                 { printf("PARSER found expr - while_expr\n"); }
#line 2421 "parser.tab.cpp"
    break;

  case 126: /* expr: do_while_expr  */
#line 361 "parser.y"
                    { printf("PARSER found expr - do_while_expr\n"); }
#line 2427 "parser.tab.cpp"
    break;

  case 127: /* expr: match_expr  */
#line 362 "parser.y"
                 { printf("PARSER found expr - match_expr\n"); }
#line 2433 "parser.tab.cpp"
    break;

  case 128: /* expr: '{' statement_expr_list_e '}'  */
#line 363 "parser.y"
                                     { printf("PARSER found expr -  { statement_expr_list_e }\n"); }
#line 2439 "parser.tab.cpp"
    break;

  case 129: /* expr: anonymous_func  */
#line 364 "parser.y"
                     { printf("Function:\n"); }
#line 2445 "parser.tab.cpp"
    break;

  case 130: /* expr: method_call  */
#line 365 "parser.y"
                  { printf("method_call:\n"); }
#line 2451 "parser.tab.cpp"
    break;

  case 131: /* expr: create_instance_class  */
#line 366 "parser.y"
                            { printf("instance_class:\n"); }
#line 2457 "parser.tab.cpp"
    break;

  case 132: /* expr: READLINE '(' ')'  */
#line 367 "parser.y"
                     { printf("readLine:\n"); }
#line 2463 "parser.tab.cpp"
    break;

  case 133: /* expr: PRINTLN '(' expr ')'  */
#line 368 "parser.y"
                          { printf("print:\n"); }
#line 2469 "parser.tab.cpp"
    break;

  case 134: /* expr: IDENTIFIER '.' '(' NUM_10 ')'  */
#line 369 "parser.y"
                                    { printf("array_call:\n"); }
#line 2475 "parser.tab.cpp"
    break;

  case 135: /* num_const: NUM_10  */
#line 374 "parser.y"
             { (yyval.tree) = mk_int_const((yyvsp[0].int_value)); }
#line 2481 "parser.tab.cpp"
    break;

  case 136: /* num_const: NUM_16  */
#line 375 "parser.y"
             { (yyval.tree) = mk_int_const((yyvsp[0].int_value)); }
#line 2487 "parser.tab.cpp"
    break;

  case 137: /* num_const: REAL_NUMBER  */
#line 376 "parser.y"
                  { (yyval.tree) = mk_real_const((yyvsp[0].real_value)); }
#line 2493 "parser.tab.cpp"
    break;

  case 138: /* num_const: REAL_NUMBER_EXPONENT  */
#line 377 "parser.y"
                           { (yyval.tree) = mk_real_const((yyvsp[0].real_value)); }
#line 2499 "parser.tab.cpp"
    break;

  case 140: /* const: CONST_STRING  */
#line 383 "parser.y"
                   { (yyval.tree) = mk_string_const((yyvsp[0].str_value)); }
#line 2505 "parser.tab.cpp"
    break;

  case 141: /* const: CONST_CHAR  */
#line 384 "parser.y"
                 { (yyval.tree) = mk_char_const((yyvsp[0].str_value)); }
#line 2511 "parser.tab.cpp"
    break;

  case 142: /* const: KW_TRUE  */
#line 385 "parser.y"
              { (yyval.tree) = mk_boolean_const(true); }
#line 2517 "parser.tab.cpp"
    break;

  case 143: /* const: KW_FALSE  */
#line 386 "parser.y"
               { (yyval.tree) = mk_boolean_const(false); }
#line 2523 "parser.tab.cpp"
    break;

  case 144: /* const: KW_NULL  */
#line 387 "parser.y"
              { (yyval.tree) = mk_null_const(); }
#line 2529 "parser.tab.cpp"
    break;

  case 145: /* const: array  */
#line 388 "parser.y"
            { (yyval.tree) = mk_array_const((yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2535 "parser.tab.cpp"
    break;

  case 165: /* type: INT_KW  */
#line 435 "parser.y"
             { (yyval.tree) = mk_integer_type(); }
#line 2541 "parser.tab.cpp"
    break;

  case 166: /* type: DOUBLE_KW  */
#line 436 "parser.y"
                { (yyval.tree) = mk_real_type(); }
#line 2547 "parser.tab.cpp"
    break;

  case 167: /* type: STRING_KW  */
#line 437 "parser.y"
                { (yyval.tree) = mk_string_type(); }
#line 2553 "parser.tab.cpp"
    break;

  case 168: /* type: CHAR_KW  */
#line 438 "parser.y"
              { (yyval.tree) = mk_char_type(); }
#line 2559 "parser.tab.cpp"
    break;

  case 169: /* type: BOOLEAN_KW  */
#line 439 "parser.y"
                 { (yyval.tree) = mk_boolean_type(); }
#line 2565 "parser.tab.cpp"
    break;

  case 170: /* type: ANY_KW  */
#line 440 "parser.y"
             { (yyval.tree) = mk_any_type(); }
#line 2571 "parser.tab.cpp"
    break;

  case 171: /* type: UNIT_KW  */
#line 441 "parser.y"
              { (yyval.tree) = mk_unit_type(); }
#line 2577 "parser.tab.cpp"
    break;

  case 172: /* type_list_car: type  */
#line 445 "parser.y"
           { (yyval.tree) = mk_list(); (yyval.tree) = add_to_list((yyval.tree), (yyvsp[0].tree)); }
#line 2583 "parser.tab.cpp"
    break;

  case 173: /* type_list_car: type_list_car RIGHT_ARROW_OPERATOR type  */
#line 446 "parser.y"
                                              { (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 2589 "parser.tab.cpp"
    break;

  case 174: /* type_list: type  */
#line 450 "parser.y"
           { (yyval.tree) = mk_list(); (yyval.tree) = add_to_list((yyval.tree), (yyvsp[0].tree)); }
#line 2595 "parser.tab.cpp"
    break;

  case 175: /* type_list: type_list_simple ',' type  */
#line 451 "parser.y"
                                { (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 2601 "parser.tab.cpp"
    break;

  case 176: /* type_list_simple: '(' type_list ')' RIGHT_ARROW_OPERATOR type  */
#line 455 "parser.y"
                                                 { (yyval.tree) = add_to_list((yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2607 "parser.tab.cpp"
    break;

  case 177: /* array: array_literal  */
#line 466 "parser.y"
                     {(yyval.tree) = mk_array_literal((yyvsp[0].tree)); }
#line 2613 "parser.tab.cpp"
    break;

  case 178: /* array: initialized_array  */
#line 467 "parser.y"
                         {(yyval.tree) = mk_initialized_array((yyvsp[0].tree));}
#line 2619 "parser.tab.cpp"
    break;

  case 179: /* array_literal: ARRAY endlOpt '(' expr_list_e ')'  */
#line 471 "parser.y"
                                        {  (yyval.tree) = mk_array_with_expr_list((yyvsp[-1].tree)); }
#line 2625 "parser.tab.cpp"
    break;

  case 180: /* array_literal: ARRAY  */
#line 472 "parser.y"
                                   { (yyval.tree) = mk_empty_array(); }
#line 2631 "parser.tab.cpp"
    break;

  case 181: /* initialized_array: NEW endlOpt ARRAY endlOpt '[' type ']' '(' expr ')'  */
#line 476 "parser.y"
                                                           { (yyval.tree) = mk_initialized_array_with_type_and_expr((yyvsp[-4].tree), (yyvsp[-1].tree));}
#line 2637 "parser.tab.cpp"
    break;

  case 182: /* endlList: ENDL  */
#line 485 "parser.y"
                    { printf("PARSER found ENDL\n"); }
#line 2643 "parser.tab.cpp"
    break;

  case 183: /* endlList: endlList ENDL  */
#line 486 "parser.y"
                    { printf("PARSER found endlList\n"); }
#line 2649 "parser.tab.cpp"
    break;

  case 184: /* endlOpt: endlList  */
#line 491 "parser.y"
               { printf("PARSER found endlOpt\n"); }
#line 2655 "parser.tab.cpp"
    break;

  case 186: /* semicolonList: ';'  */
#line 497 "parser.y"
                   { printf("PARSER found SEMICOLON\n"); }
#line 2661 "parser.tab.cpp"
    break;

  case 187: /* semicolonList: semicolonList ';'  */
#line 498 "parser.y"
                        { printf("PARSER found semicolonList\n"); }
#line 2667 "parser.tab.cpp"
    break;

  case 188: /* separator_List: ENDL  */
#line 502 "parser.y"
            { printf("PARSER found ENDL\n"); }
#line 2673 "parser.tab.cpp"
    break;

  case 189: /* separator_List: ';'  */
#line 503 "parser.y"
            { printf("PARSER found SEMICOLON\n"); }
#line 2679 "parser.tab.cpp"
    break;

  case 190: /* separator_List: separator_List ENDL  */
#line 504 "parser.y"
                            { printf("PARSER add ENDL to separator_List\n"); }
#line 2685 "parser.tab.cpp"
    break;

  case 191: /* separator_List: separator_List ';'  */
#line 505 "parser.y"
                           { printf("PARSER add ; to separator_List\n"); }
#line 2691 "parser.tab.cpp"
    break;


#line 2695 "parser.tab.cpp"

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

#line 512 "parser.y"

