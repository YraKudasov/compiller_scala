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
  YYSYMBOL_NOT = 72,                       /* NOT  */
  YYSYMBOL_73_ = 73,                       /* '{'  */
  YYSYMBOL_74_ = 74,                       /* '}'  */
  YYSYMBOL_75_ = 75,                       /* ':'  */
  YYSYMBOL_76_ = 76,                       /* ';'  */
  YYSYMBOL_77___ = 77,                     /* '_'  */
  YYSYMBOL_78_ = 78,                       /* '.'  */
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
#define YYLAST   1202

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  188
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  564

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
      18,    19,    13,    11,     5,    12,    78,    14,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    75,    76,
      10,     6,     9,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    20,     2,    21,     2,    77,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    73,     7,    74,     2,     2,     2,     2,
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
      70,    71,    72
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   113,   113,   120,   121,   122,   126,   127,   128,   129,
     133,   138,   139,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   163,
     164,   168,   169,   178,   182,   183,   191,   192,   200,   201,
     202,   203,   204,   205,   209,   210,   214,   215,   216,   217,
     218,   219,   220,   221,   230,   231,   232,   240,   241,   242,
     243,   254,   255,   256,   257,   258,   259,   260,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   278,   282,   288,
     289,   294,   295,   296,   297,   298,   299,   300,   304,   305,
     306,   311,   312,   323,   324,   329,   330,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     372,   373,   374,   375,   380,   381,   382,   383,   384,   385,
     386,   392,   393,   394,   395,   400,   405,   406,   410,   411,
     412,   413,   414,   415,   416,   417,   421,   422,   426,   427,
     433,   434,   435,   436,   437,   438,   439,   443,   444,   448,
     449,   453,   464,   465,   469,   470,   474,   483,   484,   489,
     490,   495,   496,   500,   501,   502,   503,   507,   508
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
  "NEW", "PROTECTED", "PRIVATE", "CLASS", "EXTENDS", "ABSTRACT", "NOT",
  "'{'", "'}'", "':'", "';'", "'_'", "'.'", "$accept", "program", "class",
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

#define YYPACT_NINF (-424)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-181)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       9,  -424,  -424,    56,  -424,    10,   963,  -424,  -424,  -424,
     177,   177,   610,  -424,  -424,  -424,  -424,    23,  -424,  -424,
      27,    27,    27,    27,    27,    27,    27,    44,    81,    92,
      54,  -424,  -424,  -424,    27,    27,  -424,  -424,    27,    27,
      13,  -424,    50,    85,    90,  -424,   382,    17,  -424,  -424,
    -424,  -424,  -424,  -424,  1134,  -424,   137,  -424,  -424,  -424,
    -424,  -424,  -424,  -424,  -424,    20,   529,   173,  -424,   177,
      32,   162,   187,    16,   170,   182,   201,    -3,   177,   224,
     185,   177,   229,   238,    27,   240,    79,   242,   189,   195,
      13,    13,    13,  -424,   900,  -424,    27,    27,    27,    27,
      27,    27,    27,    27,    27,    27,    27,    27,    27,    27,
      27,   235,   374,  -424,   249,    27,   258,   156,  1134,   259,
     262,   177,  -424,    27,    27,    27,    27,   177,    28,    27,
     119,   177,    27,   772,  -424,   177,   257,    27,   267,    27,
      30,  -424,  -424,   212,   220,   221,   382,  -424,  1134,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,    27,  -424,  -424,  -424,  -424,  -424,
    -424,  -424,  -424,   233,   231,   246,  -424,   305,   292,   162,
     293,   177,   243,    36,    37,   829,   251,   177,    26,   165,
     279,   847,   291,  -424,   300,    27,    29,   177,   302,     3,
    -424,  -424,  -424,  -424,   359,   704,   277,   277,   232,   232,
    -424,  -424,  -424,   290,   290,   507,   726,   277,   277,   250,
     374,   374,    27,    27,  -424,  -424,  1134,    27,    27,    27,
      27,    27,    27,  1039,  1134,    27,   177,   181,    27,    27,
      27,   306,    27,    27,  -424,    31,    27,   299,    27,    27,
     308,   374,   105,    27,  -424,    27,  -424,    18,   177,   177,
     295,   177,   100,   177,   146,   177,    27,   269,  1015,  1134,
     268,   177,   272,   177,   168,    -8,   177,   177,   311,    27,
      27,    27,   177,   256,   174,   374,    33,  -424,   314,   313,
     316,   332,   325,   194,   319,   295,  1039,  1134,  1134,    27,
      27,  1134,   179,   326,    27,  1134,   327,    27,   320,   307,
    1039,    27,  1134,  1039,  1134,    27,  1134,    27,    27,    27,
      27,  1106,  -424,   105,   177,   374,    34,  1134,  -424,    27,
      27,   299,    27,   333,   280,   289,   109,   317,   339,   350,
     370,    27,  -424,   334,    -7,  -424,   371,   386,   374,   390,
     374,   391,    27,   110,   341,   177,   343,  1039,   330,   177,
    1067,   218,  -424,   384,  1134,    27,    27,    27,   402,   177,
     204,   374,   177,   374,   374,   388,   389,   197,  -424,   342,
     344,   177,     6,    15,  -424,  -424,    27,   411,   400,    27,
    -424,  -424,    24,   358,   374,   401,    27,   414,    27,   177,
      27,  1039,  1134,  1039,   364,    27,  1134,    27,  1134,    27,
     177,   317,   431,   177,   374,    27,  1134,  -424,    27,  1151,
     433,   434,   366,   367,   419,   420,   374,   374,    45,  -424,
       1,   385,   442,   421,   334,  -424,   417,   374,  -424,    27,
     177,    27,   177,  -424,   177,  -424,   392,    27,  1039,   177,
     409,  1134,  -424,    27,  1134,    27,   177,   466,  -424,  1039,
    1039,   374,   374,   398,   399,   470,   472,  -424,   177,    27,
      27,    17,    27,    27,    27,    27,  -424,   473,  1134,   474,
    1134,  -424,  1039,  1039,   428,  1134,    27,   177,   482,  1134,
      27,  -424,  -424,   485,   487,   374,   374,  1039,  1039,   476,
     177,  1039,   177,  1039,   177,   438,   334,    27,    27,  -424,
     443,    27,  1039,  1134,    27,   177,  1039,  1039,   496,   498,
    -424,  -424,  -424,  1134,  -424,  1134,  -424,  1134,    17,    27,
       5,     5,    27,  1039,   446,   177,  1134,  -424,  -424,  1039,
    1039,   177,   444,  -424,  -424,  1039,   448,    27,  1134,  -424,
    -424,  1134,    17,  -424,    27,  1039,   177,  1039,   450,  1134,
    -424,    27,  1039,  -424
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     188,   183,   184,     0,     2,   187,     0,     1,   185,   186,
       0,     0,   144,   130,   131,   132,   133,    98,   136,   135,
     180,   180,   180,   180,   180,   180,   180,     0,     0,   175,
       0,   137,   138,   139,   180,   180,    35,    34,   180,   180,
     188,    52,     0,     0,     0,   126,     0,   188,    38,   118,
     119,   120,   121,   122,    40,   134,    97,   124,    53,   125,
     140,   172,   173,   117,   116,    98,     0,     0,   177,    94,
       0,   158,   179,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   180,     0,     0,     0,     0,     0,
     188,   188,   188,    39,   187,    44,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,     0,     0,   100,     0,   180,     0,    93,    95,     0,
       0,    94,   178,   180,   180,   180,   180,     0,     0,   180,
     180,     0,   180,     0,   127,    94,     0,   180,    31,   180,
     180,    10,   123,     0,     0,     0,     0,    41,    42,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   180,   160,   161,   162,   163,   164,
     165,   166,   167,   141,     0,     0,   156,     0,     0,   159,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   128,     0,   180,     0,    94,     0,     0,
       3,     4,     5,    43,   113,   112,   101,   102,   107,   108,
     110,   109,   111,   105,   106,   114,   115,   103,   104,     0,
       0,     0,   180,   180,   129,   157,    99,   180,   180,   180,
     180,   180,   180,     0,    61,   180,     0,     0,   180,   180,
     180,     0,   180,   180,   174,     0,   180,   144,   180,   180,
       0,     0,    30,   180,     9,   180,   168,   142,     0,     0,
       0,     0,     0,     0,     0,     0,   180,     0,     0,    64,
       0,     0,     0,     0,   179,     0,     0,     0,     0,   180,
     180,   180,     0,     0,     0,     0,     0,    32,     0,     0,
       0,    29,     0,     0,     0,     0,     0,   145,    96,   180,
     180,    46,     0,     0,   180,    47,     0,   180,    54,     0,
       0,   180,    58,     0,    65,   180,    68,   180,   180,   180,
     180,     0,    77,    30,     0,     0,     0,   151,   146,   180,
     180,   144,   180,     0,     0,     0,     0,     6,     0,     0,
      36,   180,   143,     0,     0,   169,     0,     0,     0,     0,
       0,     0,   180,     0,    62,     0,     0,     0,     0,     0,
       0,     0,    78,     0,   155,   180,   180,   180,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     0,
       0,     0,     0,   180,    87,    85,   180,    84,    91,   180,
      79,   181,   180,     0,     0,     0,   180,     0,   180,     0,
     180,     0,    57,     0,     0,   180,    71,   180,    60,   180,
       0,    11,     0,     0,     0,   180,   150,   147,   180,     0,
      14,    13,     0,     0,     0,     0,     0,     0,   180,    80,
       0,     0,     0,     0,     0,   182,     0,     0,   170,   180,
       0,   180,     0,    55,     0,    63,    66,   180,     0,     0,
       0,    72,    12,   180,   154,   180,     0,     0,   176,     0,
       0,     0,     0,     0,     0,    22,    21,    37,    94,   180,
     180,   188,   180,   180,   180,   180,   171,     0,    48,     0,
      49,    56,     0,     0,     0,    59,   180,     0,     0,   149,
     180,    16,    15,    18,    17,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   180,   180,    67,
      69,   180,     0,   153,   180,     0,     0,     0,    26,    25,
      24,    23,    33,    83,    86,    88,    92,    81,   188,   180,
       0,     0,   180,     0,     0,     0,   148,    20,    19,     0,
       0,     0,     0,    51,    50,     0,    75,   180,   152,    28,
      27,    90,   188,    70,   180,     0,     0,     0,    73,    89,
      76,   180,     0,    74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -424,  -424,  -424,   423,  -424,  -424,  -424,   190,  -424,  -424,
      -4,  -327,  -424,    25,   -39,  -424,  -424,  -424,  -424,  -424,
    -424,  -424,  -423,   217,  -424,  -118,   142,    -6,  -424,  -219,
    -239,  -424,   281,  -424,   405,  -424,  -188,   309,  -424,  -228,
    -270,  -424,  -424,  -212,   360,  -424,   480,   -46
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,    41,    42,    43,    44,   291,   292,    45,   385,
     293,   254,    47,     4,    48,    49,    50,   188,   240,    51,
      52,    53,   386,   300,   387,   116,   117,   118,    55,    56,
      67,    57,   249,    58,    71,    59,   172,   173,   346,   304,
      60,    61,    62,    72,    73,   392,     5,     6
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      54,    95,    46,   180,    63,    64,    66,    93,   284,   -45,
     378,   474,     1,     8,   267,   128,     1,   194,   -82,   468,
       1,   252,   123,    68,   296,   318,  -180,    68,   274,  -180,
      68,   389,   256,    68,   469,   246,   307,   279,    69,   330,
     366,    69,   228,   230,   389,   235,    29,   247,    68,   247,
     119,   331,   331,   124,   186,   147,     7,  -180,   120,   236,
    -180,   187,    81,   288,   467,    89,   319,   390,   320,   391,
     129,   266,   130,   253,   347,   133,   470,   342,   -82,   250,
     429,   220,   391,   529,   452,     2,     9,   -45,   148,     2,
     146,   354,   370,     2,   356,   112,   353,   329,    70,    82,
     435,    70,   237,    -8,   248,   138,   280,   203,   332,   367,
    -180,   229,   231,   122,   345,   143,   144,   145,   302,    84,
     139,   185,    68,    90,   388,   191,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   289,   290,   365,   404,   375,
     376,   303,   400,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,    91,    68,
     395,  -180,   397,    92,   302,   105,   106,   107,   108,   109,
     110,   122,    36,    37,  -180,   226,    36,    37,   114,   114,
     121,   234,   445,   418,   446,   420,   421,   306,    10,    11,
     122,   238,   115,   328,   317,    12,   125,   302,   239,    13,
      14,    15,    16,    17,    18,    19,   438,   270,   126,   114,
      22,    23,    24,    25,   271,   388,    27,    28,    29,   127,
      31,    32,    33,   417,   338,   339,   455,   424,   425,   484,
     269,   165,   166,   167,   168,   169,   170,   171,   465,   466,
     491,   492,   131,    35,   409,   102,   103,   104,   134,   476,
      40,   410,   297,   298,   132,   301,   135,   305,    38,   308,
     543,   544,   312,   509,   510,   314,   137,   316,   140,   142,
     321,   322,   164,   493,   494,   174,   327,   176,   520,   521,
      69,   178,   524,   195,   526,   197,   200,   388,   100,   101,
     102,   103,   104,   534,   201,   202,   220,   537,   538,    98,
      99,   100,   101,   102,   103,   104,   221,   518,   519,   222,
     223,   224,   225,   233,   546,   241,   227,   243,   364,   244,
     549,   550,   251,   255,   276,   283,   553,   287,   310,   323,
     313,   112,   377,   299,   315,   333,   558,   336,   560,   334,
     109,   110,   335,   563,   337,   340,   348,   350,   139,   402,
     499,   372,   352,   406,   408,   373,    13,    14,    15,    16,
     383,    18,    19,   416,   374,   379,   419,    97,    98,    99,
     100,   101,   102,   103,   104,    29,   380,    31,    32,    33,
      74,    75,    76,    77,    78,    79,    80,   253,   381,    83,
     393,   394,   405,   443,    85,    86,   396,   398,    87,    88,
     266,   401,   403,   411,   451,   105,   106,   454,   415,   109,
     110,   384,    20,    21,   422,   423,   111,   426,  -180,   427,
      26,   437,   439,   447,    30,   502,   165,   166,   167,   168,
     169,   170,   171,  -180,   478,   441,   480,   453,   481,   459,
     460,   461,   462,   485,   136,   463,   464,    34,   471,   472,
     489,    38,   482,    39,   473,   475,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   486,   490,   495,   496,   175,   497,   177,   498,   507,
     508,   513,   541,   181,   182,   183,   184,   511,   514,   189,
     190,   516,   192,   517,   523,   522,   525,   196,   527,   198,
     199,   528,   539,   532,   540,   547,   556,   552,   554,   536,
     561,   141,   341,   363,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   428,   219,   179,   281,    94,     0,   548,
     257,     0,     0,     0,     0,   551,    96,    97,    98,    99,
     100,   101,   102,   103,   104,     0,     0,     0,   113,     0,
     559,     0,     0,   105,   106,   245,   108,   109,   110,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   105,   106,   107,   108,   109,
     110,     0,   258,   259,     0,     0,     0,   260,   261,   262,
     263,   264,   265,     0,     0,   268,     0,     0,   272,   273,
     275,     0,   277,   278,     0,     0,   282,     0,   285,   286,
       0,     0,     0,   294,     0,   295,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,   309,     0,    12,     0,
       0,     0,    13,    14,    15,    16,    65,    18,    19,   324,
     325,   326,     0,    22,    23,    24,    25,     0,     0,    27,
      28,    29,     0,    31,    32,    33,     0,     0,     0,   343,
     344,     0,     0,     0,   349,     0,     0,   351,     0,     0,
       0,   355,     0,     0,     0,   357,    35,   358,   359,   360,
     361,     0,     0,    40,     0,     0,     0,     0,     0,   368,
     369,     0,   371,     0,     0,     0,     0,     0,     0,     0,
       0,   382,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   399,    98,    99,   100,   101,   102,   103,   104,
       0,     0,     0,     0,     0,   412,   413,   414,     0,     0,
       0,     0,     0,    96,    97,    98,    99,   100,   101,   102,
     103,   104,     0,   430,     0,     0,   431,   432,   433,   434,
     105,   106,   436,     0,   109,   110,   440,     0,   442,     0,
     444,     0,     0,     0,     0,   448,     0,   449,     0,   450,
       0,     0,   105,   106,     0,   456,   109,   110,   457,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   177,     0,
       0,   193,     0,     0,     0,     0,     0,     0,     0,   477,
       0,   479,     0,     0,     0,     0,     0,   483,     0,     0,
       0,     0,     0,   487,     0,   488,     0,     0,   105,   106,
     107,   108,   109,   110,     0,     0,     0,     0,     0,   500,
     501,     0,   503,   504,   505,   506,    96,    97,    98,    99,
     100,   101,   102,   103,   104,     0,   512,     0,   232,     0,
     515,     0,     0,     0,    96,    97,    98,    99,   100,   101,
     102,   103,   104,     0,     0,     0,   242,   530,   531,     0,
       0,   533,     0,     0,   535,   105,   106,   107,   108,   109,
     110,     0,     0,     0,     0,     0,     0,     0,     0,   542,
       0,     0,   545,   105,   106,   107,   108,   109,   110,     0,
       0,     0,     0,     8,     0,     0,     0,   555,     0,     0,
       0,    10,    11,     0,   557,     0,     0,     0,    12,     0,
       0,   562,    13,    14,    15,    16,    17,    18,    19,     0,
      20,    21,     0,    22,    23,    24,    25,     0,    26,    27,
      28,    29,    30,    31,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    34,    35,    36,    37,    38,
       0,    39,     0,    40,    10,    11,     9,     0,     0,     0,
       0,    12,     0,     0,     0,    13,    14,    15,    16,    17,
      18,    19,     0,    20,    21,     0,    22,    23,    24,    25,
       0,    26,    27,    28,    29,    30,    31,    32,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,    34,    35,
      36,    37,    38,    12,    39,     0,    40,    13,    14,    15,
      16,    17,    18,    19,     0,     0,     0,     0,    22,    23,
      24,    25,     0,     0,    27,    28,    29,     0,    31,    32,
      33,    13,    14,    15,    16,     0,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,   311,     0,    10,    11,
      29,    35,    31,    32,    33,    12,     0,     0,    40,    13,
      14,    15,    16,    17,    18,    19,     0,     0,     0,     0,
      22,    23,    24,    25,     0,   266,    27,    28,    29,     0,
      31,    32,    33,    96,    97,    98,    99,   100,   101,   102,
     103,   104,     0,     0,     0,   362,     0,     0,   407,     0,
       0,     0,     0,    35,     0,     0,     0,     0,     0,     0,
      40,    96,    97,    98,    99,   100,   101,   102,   103,   104,
       0,     0,   105,   106,   107,   108,   109,   110,    96,    97,
      98,    99,   100,   101,   102,   103,   104,     0,     0,     0,
     458,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     105,   106,   107,   108,   109,   110,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   105,   106,   107,
     108,   109,   110
};

static const yytype_int16 yycheck[] =
{
       6,    47,     6,   121,    10,    11,    12,    46,   247,     0,
     337,   434,     3,     3,   233,    18,     3,   135,     3,    18,
       3,    18,     6,     3,     6,    33,     6,     3,   240,     6,
       3,    38,   220,     3,    33,     6,   264,     6,    18,     6,
       6,    18,     6,     6,    38,    19,    41,    18,     3,    18,
      18,    18,    18,    37,    26,    94,     0,    37,    26,    33,
      37,    33,    18,   251,    19,    40,    74,    74,    76,    76,
      73,    66,    78,    70,   302,    81,    75,   296,    63,   197,
      74,    63,    76,   506,   411,    76,    76,    74,    94,    76,
      94,   310,   331,    76,   313,    75,   308,   285,    78,    18,
      76,    78,    76,    73,    75,    26,    75,   146,    75,    75,
      18,    75,    75,     3,   302,    90,    91,    92,    18,    65,
      41,   127,     3,    73,   343,   131,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    30,    31,   325,   357,    30,
      31,    41,    32,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,    73,     3,
     348,     5,   350,    73,    18,    46,    47,    48,    49,    50,
      51,     3,    67,    68,    37,   181,    67,    68,     5,     5,
      18,   187,   401,   371,   403,   373,   374,    41,    11,    12,
       3,    26,    19,    19,    26,    18,    26,    18,    33,    22,
      23,    24,    25,    26,    27,    28,   394,    26,    26,     5,
      33,    34,    35,    36,    33,   434,    39,    40,    41,    18,
      43,    44,    45,    19,    30,    31,   414,    30,    31,   448,
     236,    52,    53,    54,    55,    56,    57,    58,   426,   427,
     459,   460,    18,    66,    26,    13,    14,    15,    19,   437,
      73,    33,   258,   259,    69,   261,    18,   263,    69,   265,
     530,   531,   268,   482,   483,   271,    26,   273,    26,    74,
     276,   277,    37,   461,   462,    26,   282,    19,   497,   498,
      18,    22,   501,    26,   503,    18,    74,   506,    11,    12,
      13,    14,    15,   512,    74,    74,    63,   516,   517,     9,
      10,    11,    12,    13,    14,    15,    75,   495,   496,    63,
       5,    19,    19,    62,   533,    36,    73,    26,   324,    19,
     539,   540,    20,    73,    18,    26,   545,    19,    59,    18,
      62,    75,   336,    38,    62,    21,   555,     5,   557,    26,
      50,    51,    26,   562,    19,    26,    20,    20,    41,   355,
     468,    18,    32,   359,   360,    75,    22,    23,    24,    25,
      26,    27,    28,   369,    75,    26,   372,     8,     9,    10,
      11,    12,    13,    14,    15,    41,    26,    43,    44,    45,
      20,    21,    22,    23,    24,    25,    26,    70,    18,    29,
      19,     5,    62,   399,    34,    35,     6,     6,    38,    39,
      66,    60,    59,    19,   410,    46,    47,   413,     6,    50,
      51,    77,    30,    31,    26,    26,    56,    75,     7,    75,
      38,    63,    21,    59,    42,   471,    52,    53,    54,    55,
      56,    57,    58,    33,   440,    21,   442,     6,   444,     6,
       6,    75,    75,   449,    84,    26,    26,    65,    63,     7,
     456,    69,    60,    71,    33,    38,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,    62,     6,    75,    75,   115,     6,   117,     6,     6,
       6,   487,   528,   123,   124,   125,   126,    59,     6,   129,
     130,     6,   132,     6,   500,    19,   502,   137,   504,   139,
     140,    63,     6,    60,     6,    59,   552,    63,    60,   515,
      60,    88,   295,   323,     7,     8,     9,    10,    11,    12,
      13,    14,    15,   381,   164,   120,   245,    47,    -1,   535,
     221,    -1,    -1,    -1,    -1,   541,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    -1,    19,    -1,
     556,    -1,    -1,    46,    47,   195,    49,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    -1,   222,   223,    -1,    -1,    -1,   227,   228,   229,
     230,   231,   232,    -1,    -1,   235,    -1,    -1,   238,   239,
     240,    -1,   242,   243,    -1,    -1,   246,    -1,   248,   249,
      -1,    -1,    -1,   253,    -1,   255,    -1,    -1,    -1,    -1,
      -1,    11,    12,    -1,    -1,    -1,   266,    -1,    18,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    28,   279,
     280,   281,    -1,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,    -1,    43,    44,    45,    -1,    -1,    -1,   299,
     300,    -1,    -1,    -1,   304,    -1,    -1,   307,    -1,    -1,
      -1,   311,    -1,    -1,    -1,   315,    66,   317,   318,   319,
     320,    -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,   329,
     330,    -1,   332,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   341,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   352,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    -1,    -1,    -1,   365,   366,   367,    -1,    -1,
      -1,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,   383,    -1,    -1,   386,   387,   388,   389,
      46,    47,   392,    -1,    50,    51,   396,    -1,   398,    -1,
     400,    -1,    -1,    -1,    -1,   405,    -1,   407,    -1,   409,
      -1,    -1,    46,    47,    -1,   415,    50,    51,   418,     7,
       8,     9,    10,    11,    12,    13,    14,    15,   428,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   439,
      -1,   441,    -1,    -1,    -1,    -1,    -1,   447,    -1,    -1,
      -1,    -1,    -1,   453,    -1,   455,    -1,    -1,    46,    47,
      48,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,   469,
     470,    -1,   472,   473,   474,   475,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,   486,    -1,    19,    -1,
     490,    -1,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    -1,    19,   507,   508,    -1,
      -1,   511,    -1,    -1,   514,    46,    47,    48,    49,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   529,
      -1,    -1,   532,    46,    47,    48,    49,    50,    51,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    -1,   547,    -1,    -1,
      -1,    11,    12,    -1,   554,    -1,    -1,    -1,    18,    -1,
      -1,   561,    22,    23,    24,    25,    26,    27,    28,    -1,
      30,    31,    -1,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,
      -1,    71,    -1,    73,    11,    12,    76,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    -1,    30,    31,    -1,    33,    34,    35,    36,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    11,    12,    65,    66,
      67,    68,    69,    18,    71,    -1,    73,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      45,    22,    23,    24,    25,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    11,    12,
      41,    66,    43,    44,    45,    18,    -1,    -1,    73,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    -1,    66,    39,    40,    41,    -1,
      43,    44,    45,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    -1,    19,    -1,    -1,    61,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      73,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    46,    47,    48,    49,    50,    51,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    76,    80,    92,   125,   126,     0,     3,    76,
      11,    12,    18,    22,    23,    24,    25,    26,    27,    28,
      30,    31,    33,    34,    35,    36,    38,    39,    40,    41,
      42,    43,    44,    45,    65,    66,    67,    68,    69,    71,
      73,    81,    82,    83,    84,    87,    89,    91,    93,    94,
      95,    98,    99,   100,   106,   107,   108,   110,   112,   114,
     119,   120,   121,   106,   106,    26,   106,   109,     3,    18,
      78,   113,   122,   123,   123,   123,   123,   123,   123,   123,
     123,    18,    18,   123,    65,   123,   123,   123,   123,    92,
      73,    73,    73,    93,   125,   126,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    46,    47,    48,    49,    50,
      51,   123,    75,    19,     5,    19,   104,   105,   106,    18,
      26,    18,     3,     6,    37,    26,    26,    18,    18,    73,
     106,    18,    69,   106,    19,    18,   123,    26,    26,    41,
      26,    82,    74,    92,    92,    92,    89,    93,   106,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,    37,    52,    53,    54,    55,    56,
      57,    58,   115,   116,    26,   123,    19,   123,    22,   113,
     104,   123,   123,   123,   123,   106,    26,    33,    96,   123,
     123,   106,   123,    19,   104,    26,   123,    18,   123,   123,
      74,    74,    74,    93,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   123,
      63,    75,    63,     5,    19,    19,   106,    73,     6,    75,
       6,    75,    19,    62,   106,    19,    33,    76,    26,    33,
      97,    36,    19,    26,    19,   123,     6,    18,    75,   111,
     104,    20,    18,    70,    90,    73,   115,   116,   123,   123,
     123,   123,   123,   123,   123,   123,    66,   108,   123,   106,
      26,    33,   123,   123,   122,   123,    18,   123,   123,     6,
      75,   111,   123,    26,   109,   123,   123,    19,   115,    30,
      31,    85,    86,    89,   123,   123,     6,   106,   106,    38,
     102,   106,    18,    41,   118,   106,    41,   118,   106,   123,
      59,    61,   106,    62,   106,    62,   106,    26,    33,    74,
      76,   106,   106,    18,   123,   123,   123,   106,    19,   115,
       6,    18,    75,    21,    26,    26,     5,    19,    30,    31,
      26,   102,   108,   123,   123,   115,   117,   118,    20,   123,
      20,   123,    32,   122,   108,   123,   108,   123,   123,   123,
     123,   123,    19,    86,   106,   115,     6,    75,   123,   123,
     109,   123,    18,    75,    75,    30,    31,    89,    90,    26,
      26,    18,   123,    26,    77,    88,   101,   103,   108,    38,
      74,    76,   124,    19,     5,   115,     6,   115,     6,   123,
      32,    60,   106,    59,   108,    62,   106,    61,   106,    26,
      33,    19,   123,   123,   123,     6,   106,    19,   115,   106,
     115,   115,    26,    26,    30,    31,    75,    75,   105,    74,
     123,   123,   123,   123,   123,    76,   123,    63,   115,    21,
     123,    21,   123,   106,   123,   108,   108,    59,   123,   123,
     123,   106,    90,     6,   106,   115,   123,   123,    19,     6,
       6,    75,    75,    26,    26,   115,   115,    19,    18,    33,
      75,    63,     7,    33,   101,    38,   115,   123,   106,   123,
     106,   106,    60,   123,   108,   106,    62,   123,   123,   106,
       6,   108,   108,   115,   115,    75,    75,     6,     6,   104,
     123,   123,   126,   123,   123,   123,   123,     6,     6,   108,
     108,    59,   123,   106,     6,   123,     6,     6,   115,   115,
     108,   108,    19,   106,   108,   106,   108,   106,    63,   101,
     123,   123,    60,   123,   108,   123,   106,   108,   108,     6,
       6,   126,   123,   119,   119,   123,   108,    59,   106,   108,
     108,   106,    63,   108,    60,   123,   126,   123,   108,   106,
     108,    60,   123,   108
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
      95,    96,    96,    96,    96,    96,    96,    96,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    98,    99,   100,
     100,   101,   101,   101,   101,   101,   101,   101,   102,   102,
     102,   103,   103,   104,   104,   105,   105,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     107,   107,   107,   107,   108,   108,   108,   108,   108,   108,
     108,   109,   109,   109,   109,   110,   111,   111,   112,   112,
     112,   112,   112,   112,   112,   112,   113,   113,   114,   114,
     115,   115,   115,   115,   115,   115,   115,   116,   116,   117,
     117,   118,   119,   119,   120,   120,   121,   122,   122,   123,
     123,   124,   124,   125,   125,   125,   125,   126,   126
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
       1,     1,     1,     3,     1,     1,     1,     3,     4,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     5,     7,     0,     7,     3,     5,    13,    11,
       9,     7,    14,    12,    10,     8,     3,     4,     2,     4,
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
  case 38: /* statement_expr_list: statement  */
#line 200 "parser.y"
                { printf("Add first statement :\n"); }
#line 2096 "parser.tab.cpp"
    break;

  case 39: /* statement_expr_list: visibility_modifier statement  */
#line 201 "parser.y"
                                    { printf("Add first visibility_modifier statement :\n"); }
#line 2102 "parser.tab.cpp"
    break;

  case 40: /* statement_expr_list: expr  */
#line 202 "parser.y"
           { printf("Add first statement :\n"); }
#line 2108 "parser.tab.cpp"
    break;

  case 41: /* statement_expr_list: statement_expr_list separator_List statement  */
#line 203 "parser.y"
                                                    { printf("Add new statement to statement_expr_list :\n"); }
#line 2114 "parser.tab.cpp"
    break;

  case 42: /* statement_expr_list: statement_expr_list separator_List expr  */
#line 204 "parser.y"
                                               { printf("Add new expr to statement_expr_list :\n"); }
#line 2120 "parser.tab.cpp"
    break;

  case 43: /* statement_expr_list: statement_expr_list separator_List visibility_modifier statement  */
#line 205 "parser.y"
                                                                        { printf("Add new visibility_modifier to statement_expr_list :\n"); }
#line 2126 "parser.tab.cpp"
    break;

  case 45: /* statement_expr_list_e: %empty  */
#line 210 "parser.y"
                     { printf("PARSER found statement_list_e - nothing\n"); }
#line 2132 "parser.tab.cpp"
    break;

  case 46: /* statement: VAL endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 214 "parser.y"
                                                       { printf("implicit value declaration:\n"); }
#line 2138 "parser.tab.cpp"
    break;

  case 47: /* statement: VAR endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 215 "parser.y"
                                                       { printf("implicit variable declaration:\n"); }
#line 2144 "parser.tab.cpp"
    break;

  case 48: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 216 "parser.y"
                                                                                           { printf("explicit value declaration:\n"); }
#line 2150 "parser.tab.cpp"
    break;

  case 49: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 217 "parser.y"
                                                                                           { printf("explicit variable declaration:\n"); }
#line 2156 "parser.tab.cpp"
    break;

  case 50: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt ARRAY '[' type ']' endlOpt '=' endlOpt array  */
#line 218 "parser.y"
                                                                                              { printf("explicit array declaration:\n"); }
#line 2162 "parser.tab.cpp"
    break;

  case 51: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt ARRAY '[' type ']' endlOpt '=' endlOpt array  */
#line 219 "parser.y"
                                                                                              { printf("explicit array declaration:\n"); }
#line 2168 "parser.tab.cpp"
    break;

  case 52: /* statement: class  */
#line 220 "parser.y"
            { printf("Class:\n"); }
#line 2174 "parser.tab.cpp"
    break;

  case 53: /* statement: method  */
#line 221 "parser.y"
             { printf("Method:\n"); }
#line 2180 "parser.tab.cpp"
    break;

  case 54: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr  */
#line 230 "parser.y"
                                                      { printf("IF-CONSTR\n"); }
#line 2186 "parser.tab.cpp"
    break;

  case 55: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr ELSE endlOpt expr  */
#line 231 "parser.y"
                                                                          { printf("IF_ELSE-CONSTR\n"); }
#line 2192 "parser.tab.cpp"
    break;

  case 56: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr endlList ELSE endlOpt expr  */
#line 232 "parser.y"
                                                                                   { printf("IF_ELSE-CONSTR\n"); }
#line 2198 "parser.tab.cpp"
    break;

  case 57: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt YIELD endlOpt expr  */
#line 240 "parser.y"
                                                                                                                          { printf("FOR in parentheses\n"); }
#line 2204 "parser.tab.cpp"
    break;

  case 58: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt expr  */
#line 241 "parser.y"
                                                                                                            { printf("FOR in parentheses\n"); }
#line 2210 "parser.tab.cpp"
    break;

  case 59: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt YIELD endlOpt expr  */
#line 242 "parser.y"
                                                                                                                                           { printf("FOR in curly_braces\n"); }
#line 2216 "parser.tab.cpp"
    break;

  case 60: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt expr  */
#line 243 "parser.y"
                                                                                                                             { printf("FOR in curly_braces\n"); }
#line 2222 "parser.tab.cpp"
    break;

  case 93: /* expr_list_e: expr_list  */
#line 323 "parser.y"
                   { printf("PARSER found expr_list - expr_list\n"); }
#line 2228 "parser.tab.cpp"
    break;

  case 94: /* expr_list_e: %empty  */
#line 324 "parser.y"
                     { printf("PARSER found expr_list - nothing\n"); }
#line 2234 "parser.tab.cpp"
    break;

  case 95: /* expr_list: expr  */
#line 329 "parser.y"
                      { printf("PARSER found expr_list - expr\n"); }
#line 2240 "parser.tab.cpp"
    break;

  case 96: /* expr_list: expr_list endlOpt ',' endlOpt expr  */
#line 330 "parser.y"
                                          { printf("PARSER found expr_list - expr_list\n"); }
#line 2246 "parser.tab.cpp"
    break;

  case 97: /* expr: const  */
#line 335 "parser.y"
                                  {printf("PARSER found expr - const\n"); }
#line 2252 "parser.tab.cpp"
    break;

  case 98: /* expr: IDENTIFIER  */
#line 336 "parser.y"
                                       {(yyval.tree) = mk_ident_lit((yyvsp[0].str_value)); }
#line 2258 "parser.tab.cpp"
    break;

  case 99: /* expr: IDENTIFIER endlOpt '=' endlOpt expr  */
#line 337 "parser.y"
                                          { printf("Assignment:\n"); }
#line 2264 "parser.tab.cpp"
    break;

  case 100: /* expr: '(' expr ')'  */
#line 338 "parser.y"
                   { printf("PARSER found expr - ( expr ) \n"); }
#line 2270 "parser.tab.cpp"
    break;

  case 101: /* expr: expr '>' endlOpt expr  */
#line 339 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) ">", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2276 "parser.tab.cpp"
    break;

  case 102: /* expr: expr '<' endlOpt expr  */
#line 340 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "<", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2282 "parser.tab.cpp"
    break;

  case 103: /* expr: expr MORE_OR_EQUAL_OPERATOR endlOpt expr  */
#line 341 "parser.y"
                                               { (yyval.tree) = mk_bin_op((char*) ">=", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2288 "parser.tab.cpp"
    break;

  case 104: /* expr: expr LESS_OR_EQUAL_OPERATOR endlOpt expr  */
#line 342 "parser.y"
                                               { (yyval.tree) = mk_bin_op((char*) "<=", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2294 "parser.tab.cpp"
    break;

  case 105: /* expr: expr EQ endlOpt expr  */
#line 343 "parser.y"
                           { (yyval.tree) = mk_bin_op((char*) "==", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2300 "parser.tab.cpp"
    break;

  case 106: /* expr: expr NEQ endlOpt expr  */
#line 344 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "!=", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2306 "parser.tab.cpp"
    break;

  case 107: /* expr: expr '+' endlOpt expr  */
#line 345 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "+", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2312 "parser.tab.cpp"
    break;

  case 108: /* expr: expr '-' endlOpt expr  */
#line 346 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "-", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2318 "parser.tab.cpp"
    break;

  case 109: /* expr: expr '/' endlOpt expr  */
#line 347 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "/", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2324 "parser.tab.cpp"
    break;

  case 110: /* expr: expr '*' endlOpt expr  */
#line 348 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "*", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2330 "parser.tab.cpp"
    break;

  case 111: /* expr: expr '%' endlOpt expr  */
#line 349 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "%", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2336 "parser.tab.cpp"
    break;

  case 112: /* expr: expr '&' endlOpt expr  */
#line 350 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "&", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2342 "parser.tab.cpp"
    break;

  case 113: /* expr: expr '|' endlOpt expr  */
#line 351 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "|", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2348 "parser.tab.cpp"
    break;

  case 114: /* expr: expr KW_OR endlOpt expr  */
#line 352 "parser.y"
                              { (yyval.tree) = mk_bin_op((char*) "||", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2354 "parser.tab.cpp"
    break;

  case 115: /* expr: expr KW_AND endlOpt expr  */
#line 353 "parser.y"
                               { (yyval.tree) = mk_bin_op((char*) "&&", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2360 "parser.tab.cpp"
    break;

  case 116: /* expr: '-' expr  */
#line 354 "parser.y"
                             { (yyval.tree) = mk_unary_op("unary_minus_op", (yyvsp[0].tree)); }
#line 2366 "parser.tab.cpp"
    break;

  case 117: /* expr: '+' expr  */
#line 355 "parser.y"
                            { (yyval.tree) = mk_unary_op("unary_plus_op", (yyvsp[0].tree)); }
#line 2372 "parser.tab.cpp"
    break;

  case 118: /* expr: if_else_expr  */
#line 356 "parser.y"
                                        { printf("PARSER found expr - if_else_expr\n"); }
#line 2378 "parser.tab.cpp"
    break;

  case 119: /* expr: for_expr  */
#line 357 "parser.y"
               { printf("PARSER found expr - for_expr\n"); }
#line 2384 "parser.tab.cpp"
    break;

  case 120: /* expr: while_expr  */
#line 358 "parser.y"
                 { printf("PARSER found expr - while_expr\n"); }
#line 2390 "parser.tab.cpp"
    break;

  case 121: /* expr: do_while_expr  */
#line 359 "parser.y"
                    { printf("PARSER found expr - do_while_expr\n"); }
#line 2396 "parser.tab.cpp"
    break;

  case 122: /* expr: match_expr  */
#line 360 "parser.y"
                 { printf("PARSER found expr - match_expr\n"); }
#line 2402 "parser.tab.cpp"
    break;

  case 123: /* expr: '{' statement_expr_list_e '}'  */
#line 361 "parser.y"
                                     { printf("PARSER found expr -  { statement_expr_list_e }\n"); }
#line 2408 "parser.tab.cpp"
    break;

  case 124: /* expr: anonymous_func  */
#line 362 "parser.y"
                     { printf("Function:\n"); }
#line 2414 "parser.tab.cpp"
    break;

  case 125: /* expr: method_call  */
#line 363 "parser.y"
                  { printf("method_call:\n"); }
#line 2420 "parser.tab.cpp"
    break;

  case 126: /* expr: create_instance_class  */
#line 364 "parser.y"
                            { printf("instance_class:\n"); }
#line 2426 "parser.tab.cpp"
    break;

  case 127: /* expr: READLINE '(' ')'  */
#line 365 "parser.y"
                     { printf("readLine:\n"); }
#line 2432 "parser.tab.cpp"
    break;

  case 128: /* expr: PRINTLN '(' expr ')'  */
#line 366 "parser.y"
                          { printf("print:\n"); }
#line 2438 "parser.tab.cpp"
    break;

  case 129: /* expr: IDENTIFIER '.' '(' NUM_10 ')'  */
#line 367 "parser.y"
                                    { printf("array_call:\n"); }
#line 2444 "parser.tab.cpp"
    break;

  case 130: /* num_const: NUM_10  */
#line 372 "parser.y"
             { (yyval.tree) = mk_int_const((yyvsp[0].int_value)); }
#line 2450 "parser.tab.cpp"
    break;

  case 131: /* num_const: NUM_16  */
#line 373 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 2456 "parser.tab.cpp"
    break;

  case 132: /* num_const: REAL_NUMBER  */
#line 374 "parser.y"
                  { (yyval.tree) = mk_real_const((yyvsp[0].real_value)); }
#line 2462 "parser.tab.cpp"
    break;

  case 133: /* num_const: REAL_NUMBER_EXPONENT  */
#line 375 "parser.y"
                           { (yyval.tree) = mk_real_const((yyvsp[0].real_value)); }
#line 2468 "parser.tab.cpp"
    break;

  case 135: /* const: CONST_STRING  */
#line 381 "parser.y"
                   { (yyval.tree) = mk_string_const((yyvsp[0].str_value)); }
#line 2474 "parser.tab.cpp"
    break;

  case 136: /* const: CONST_CHAR  */
#line 382 "parser.y"
                 { (yyval.tree) = mk_char_const((yyvsp[0].str_value)); }
#line 2480 "parser.tab.cpp"
    break;

  case 137: /* const: KW_TRUE  */
#line 383 "parser.y"
              { (yyval.tree) = mk_boolean_const(true); }
#line 2486 "parser.tab.cpp"
    break;

  case 138: /* const: KW_FALSE  */
#line 384 "parser.y"
               { (yyval.tree) = mk_boolean_const(false); }
#line 2492 "parser.tab.cpp"
    break;

  case 139: /* const: KW_NULL  */
#line 385 "parser.y"
              { (yyval.tree) = mk_null_const(); }
#line 2498 "parser.tab.cpp"
    break;

  case 160: /* type: INT_KW  */
#line 433 "parser.y"
             { (yyval.tree) = mk_integer_type(); }
#line 2504 "parser.tab.cpp"
    break;

  case 161: /* type: DOUBLE_KW  */
#line 434 "parser.y"
                { (yyval.tree) = mk_real_type(); }
#line 2510 "parser.tab.cpp"
    break;

  case 162: /* type: STRING_KW  */
#line 435 "parser.y"
                { (yyval.tree) = mk_string_type(); }
#line 2516 "parser.tab.cpp"
    break;

  case 163: /* type: CHAR_KW  */
#line 436 "parser.y"
              { (yyval.tree) = mk_char_type(); }
#line 2522 "parser.tab.cpp"
    break;

  case 164: /* type: BOOLEAN_KW  */
#line 437 "parser.y"
                 { (yyval.tree) = mk_boolean_type(); }
#line 2528 "parser.tab.cpp"
    break;

  case 165: /* type: ANY_KW  */
#line 438 "parser.y"
             { (yyval.tree) = mk_any_type(); }
#line 2534 "parser.tab.cpp"
    break;

  case 166: /* type: UNIT_KW  */
#line 439 "parser.y"
              { (yyval.tree) = mk_unit_type(); }
#line 2540 "parser.tab.cpp"
    break;

  case 167: /* type_list_car: type  */
#line 443 "parser.y"
           { (yyval.tree) = mk_list(); (yyval.tree) = add_to_list((yyval.tree), (yyvsp[0].tree)); }
#line 2546 "parser.tab.cpp"
    break;

  case 168: /* type_list_car: type_list_car RIGHT_ARROW_OPERATOR type  */
#line 444 "parser.y"
                                              { (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 2552 "parser.tab.cpp"
    break;

  case 169: /* type_list: type  */
#line 448 "parser.y"
           { (yyval.tree) = mk_list(); (yyval.tree) = add_to_list((yyval.tree), (yyvsp[0].tree)); }
#line 2558 "parser.tab.cpp"
    break;

  case 170: /* type_list: type_list_simple ',' type  */
#line 449 "parser.y"
                                { (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 2564 "parser.tab.cpp"
    break;

  case 171: /* type_list_simple: '(' type_list ')' RIGHT_ARROW_OPERATOR type  */
#line 453 "parser.y"
                                                 { (yyval.tree) = add_to_list((yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2570 "parser.tab.cpp"
    break;

  case 174: /* array_literal: ARRAY endlOpt '(' expr_list_e ')'  */
#line 469 "parser.y"
                                        { printf("PARSER found Array\n"); }
#line 2576 "parser.tab.cpp"
    break;

  case 175: /* array_literal: ARRAY  */
#line 470 "parser.y"
                                   { printf("PARSER found Array\n"); }
#line 2582 "parser.tab.cpp"
    break;

  case 177: /* endlList: ENDL  */
#line 483 "parser.y"
                    { printf("PARSER found ENDL\n"); }
#line 2588 "parser.tab.cpp"
    break;

  case 178: /* endlList: endlList ENDL  */
#line 484 "parser.y"
                    { printf("PARSER found endlList\n"); }
#line 2594 "parser.tab.cpp"
    break;

  case 179: /* endlOpt: endlList  */
#line 489 "parser.y"
               { printf("PARSER found endlOpt\n"); }
#line 2600 "parser.tab.cpp"
    break;

  case 181: /* semicolonList: ';'  */
#line 495 "parser.y"
                   { printf("PARSER found SEMICOLON\n"); }
#line 2606 "parser.tab.cpp"
    break;

  case 182: /* semicolonList: semicolonList ';'  */
#line 496 "parser.y"
                        { printf("PARSER found semicolonList\n"); }
#line 2612 "parser.tab.cpp"
    break;

  case 183: /* separator_List: ENDL  */
#line 500 "parser.y"
            { printf("PARSER found ENDL\n"); }
#line 2618 "parser.tab.cpp"
    break;

  case 184: /* separator_List: ';'  */
#line 501 "parser.y"
            { printf("PARSER found SEMICOLON\n"); }
#line 2624 "parser.tab.cpp"
    break;

  case 185: /* separator_List: separator_List ENDL  */
#line 502 "parser.y"
                            { printf("PARSER add ENDL to separator_List\n"); }
#line 2630 "parser.tab.cpp"
    break;

  case 186: /* separator_List: separator_List ';'  */
#line 503 "parser.y"
                           { printf("PARSER add ; to separator_List\n"); }
#line 2636 "parser.tab.cpp"
    break;


#line 2640 "parser.tab.cpp"

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

#line 510 "parser.y"

