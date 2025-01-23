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



#line 110 "parser.tab.c"

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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ENDL = 258,                    /* ENDL  */
    LOWER_THAN_EXPR = 259,         /* LOWER_THAN_EXPR  */
    UMINUS = 260,                  /* UMINUS  */
    UPLUS = 261,                   /* UPLUS  */
    NUM_10 = 262,                  /* NUM_10  */
    NUM_16 = 263,                  /* NUM_16  */
    REAL_NUMBER = 264,             /* REAL_NUMBER  */
    REAL_NUMBER_EXPONENT = 265,    /* REAL_NUMBER_EXPONENT  */
    IDENTIFIER = 266,              /* IDENTIFIER  */
    CONST_CHAR = 267,              /* CONST_CHAR  */
    CONST_STRING = 268,            /* CONST_STRING  */
    NEWLINE = 269,                 /* NEWLINE  */
    VAL = 270,                     /* VAL  */
    VAR = 271,                     /* VAR  */
    ELSE = 272,                    /* ELSE  */
    IF = 273,                      /* IF  */
    FOR = 274,                     /* FOR  */
    DO = 275,                      /* DO  */
    WHILE = 276,                   /* WHILE  */
    MATCH = 277,                   /* MATCH  */
    CASE = 278,                    /* CASE  */
    PRINTLN = 279,                 /* PRINTLN  */
    READLINE = 280,                /* READLINE  */
    ARRAY = 281,                   /* ARRAY  */
    OVERRIDE = 282,                /* OVERRIDE  */
    KW_TRUE = 283,                 /* KW_TRUE  */
    KW_FALSE = 284,                /* KW_FALSE  */
    KW_NULL = 285,                 /* KW_NULL  */
    EQ = 286,                      /* EQ  */
    NEQ = 287,                     /* NEQ  */
    KW_OR = 288,                   /* KW_OR  */
    KW_AND = 289,                  /* KW_AND  */
    MORE_OR_EQUAL_OPERATOR = 290,  /* MORE_OR_EQUAL_OPERATOR  */
    LESS_OR_EQUAL_OPERATOR = 291,  /* LESS_OR_EQUAL_OPERATOR  */
    INT_KW = 292,                  /* INT_KW  */
    DOUBLE_KW = 293,               /* DOUBLE_KW  */
    STRING_KW = 294,               /* STRING_KW  */
    CHAR_KW = 295,                 /* CHAR_KW  */
    BOOLEAN_KW = 296,              /* BOOLEAN_KW  */
    ANY_KW = 297,                  /* ANY_KW  */
    UNIT_KW = 298,                 /* UNIT_KW  */
    TO = 299,                      /* TO  */
    BY = 300,                      /* BY  */
    YIELD = 301,                   /* YIELD  */
    GENERATOR_OPERATOR = 302,      /* GENERATOR_OPERATOR  */
    RIGHT_ARROW_OPERATOR = 303,    /* RIGHT_ARROW_OPERATOR  */
    ID_COLLECTION = 304,           /* ID_COLLECTION  */
    DEF = 305,                     /* DEF  */
    NEW = 306,                     /* NEW  */
    PROTECTED = 307,               /* PROTECTED  */
    PRIVATE = 308,                 /* PRIVATE  */
    CLASS = 309,                   /* CLASS  */
    EXTENDS = 310,                 /* EXTENDS  */
    ABSTRACT = 311,                /* ABSTRACT  */
    NOT = 312,                     /* NOT  */
    CASE_PATTERN = 313             /* CASE_PATTERN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 45 "parser.y"

    int int_value;
    double real_value;
    char* str_value;
    struct Json *tree;

#line 222 "parser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
typedef struct LOCATION YYLTYPE;


extern YYSTYPE yylval;
extern YYLTYPE yylloc;

int yyparse (void);



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
  YYSYMBOL_class = 80,                     /* class  */
  YYSYMBOL_class_header = 81,              /* class_header  */
  YYSYMBOL_abstract_class_header = 82,     /* abstract_class_header  */
  YYSYMBOL_case_class_header = 83,         /* case_class_header  */
  YYSYMBOL_class_params = 84,              /* class_params  */
  YYSYMBOL_class_params_e = 85,            /* class_params_e  */
  YYSYMBOL_create_instance_class = 86,     /* create_instance_class  */
  YYSYMBOL_visibility_modifier = 87,       /* visibility_modifier  */
  YYSYMBOL_inheritance = 88,               /* inheritance  */
  YYSYMBOL_statement_expr_list = 89,       /* statement_expr_list  */
  YYSYMBOL_statement_expr_list_e = 90,     /* statement_expr_list_e  */
  YYSYMBOL_statement = 91,                 /* statement  */
  YYSYMBOL_if_else_expr = 92,              /* if_else_expr  */
  YYSYMBOL_for_expr = 93,                  /* for_expr  */
  YYSYMBOL_generators_and_conditions_parentheses_List = 94, /* generators_and_conditions_parentheses_List  */
  YYSYMBOL_generators_and_conditions_curly_braces_List = 95, /* generators_and_conditions_curly_braces_List  */
  YYSYMBOL_while_expr = 96,                /* while_expr  */
  YYSYMBOL_do_while_expr = 97,             /* do_while_expr  */
  YYSYMBOL_match_expr = 98,                /* match_expr  */
  YYSYMBOL_case_condition = 99,            /* case_condition  */
  YYSYMBOL_case_list = 100,                /* case_list  */
  YYSYMBOL_expr_list_e = 101,              /* expr_list_e  */
  YYSYMBOL_expr_list = 102,                /* expr_list  */
  YYSYMBOL_expr = 103,                     /* expr  */
  YYSYMBOL_num_const = 104,                /* num_const  */
  YYSYMBOL_const = 105,                    /* const  */
  YYSYMBOL_params = 106,                   /* params  */
  YYSYMBOL_anonymous_func = 107,           /* anonymous_func  */
  YYSYMBOL_method_params_list = 108,       /* method_params_list  */
  YYSYMBOL_method = 109,                   /* method  */
  YYSYMBOL_method_arguments_list = 110,    /* method_arguments_list  */
  YYSYMBOL_method_call = 111,              /* method_call  */
  YYSYMBOL_type = 112,                     /* type  */
  YYSYMBOL_type_list_car = 113,            /* type_list_car  */
  YYSYMBOL_type_list = 114,                /* type_list  */
  YYSYMBOL_type_list_simple = 115,         /* type_list_simple  */
  YYSYMBOL_array = 116,                    /* array  */
  YYSYMBOL_array_literal = 117,            /* array_literal  */
  YYSYMBOL_initialized_array = 118,        /* initialized_array  */
  YYSYMBOL_endlList = 119,                 /* endlList  */
  YYSYMBOL_endlOpt = 120,                  /* endlOpt  */
  YYSYMBOL_semicolonList = 121,            /* semicolonList  */
  YYSYMBOL_separator_List = 122,           /* separator_List  */
  YYSYMBOL_separator_List_e = 123          /* separator_List_e  */
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
#define YYFINAL  62
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1285

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  183
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  540

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
       0,   122,   129,   130,   131,   135,   136,   137,   138,   142,
     147,   148,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   172,   173,
     177,   178,   191,   192,   200,   201,   209,   210,   211,   212,
     213,   214,   218,   219,   223,   224,   225,   226,   227,   228,
     229,   230,   239,   240,   241,   249,   250,   251,   252,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     286,   290,   296,   301,   302,   306,   307,   308,   318,   319,
     324,   325,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   367,   368,   369,   370,   375,
     376,   377,   378,   379,   380,   381,   387,   388,   389,   390,
     395,   400,   401,   405,   406,   407,   408,   409,   410,   411,
     412,   416,   417,   421,   422,   428,   429,   430,   431,   432,
     433,   434,   438,   439,   443,   444,   448,   459,   460,   464,
     465,   469,   478,   479,   484,   485,   490,   491,   495,   496,
     497,   498,   502,   503
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
  "CASE_PATTERN", "'{'", "'}'", "':'", "';'", "$accept", "class",
  "class_header", "abstract_class_header", "case_class_header",
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

#define YYPACT_NINF (-361)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-176)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     919,   919,   919,   955,  -361,  -361,  -361,  -361,   157,  -361,
    -361,    42,    42,    42,    42,    35,   109,   121,  -361,  -361,
    -361,    42,    15,  -361,  -361,  -361,  -361,  -361,    33,  1178,
    -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,
      22,   790,   117,  -361,   919,    23,   148,    46,   164,   169,
       5,   919,   185,   919,   186,   196,   118,  -361,  -361,   143,
       9,   748,  -361,    42,    42,    42,    42,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    42,   339,
    -361,   189,    42,   210,    76,  1178,   218,   232,   919,  -361,
      42,   919,   138,    42,   503,   919,   995,  -361,   919,   239,
      42,  -361,  -361,  -361,    42,    42,    42,   192,    42,  -361,
    -361,    42,    42,  -361,   187,   197,   203,   145,    16,  -361,
    1178,  -361,   919,   919,   919,   919,   919,   919,   919,   919,
     919,   208,   919,   919,   919,   919,   919,   919,  -361,  -361,
    -361,  -361,  -361,  -361,  -361,  -361,   248,   184,   249,  -361,
     288,   277,   148,   295,   919,  1041,   261,   919,    91,   140,
     291,  1056,  -361,   307,   919,   310,   304,   306,   262,    42,
     309,   311,   264,    15,    15,    15,  -361,   678,  -361,   555,
     144,   305,   305,   274,   274,  -361,  -361,  -361,    42,   289,
     289,  1233,   524,   305,   305,   339,   339,    42,    42,  -361,
    -361,  1224,    42,   198,  1178,    42,   919,   172,    42,    42,
      42,   324,    42,  -361,   325,   339,    42,    42,    42,   316,
      42,    26,  -361,   270,   271,   273,   145,  -361,  1178,   315,
    -361,    20,   919,   919,   919,  -361,    42,   297,   106,  1178,
     308,   919,   313,   919,    27,    43,   919,   919,  -361,   346,
      31,    32,   341,    42,    25,    93,  -361,  -361,  -361,  -361,
      42,     7,   801,  1178,  1178,  1102,   327,   801,    42,  1178,
     337,  1178,    42,  1178,    42,    42,    42,    42,  1117,  1178,
     354,    42,    42,    42,    42,    42,    28,    42,   353,    42,
      42,   217,    42,  -361,   838,  -361,    34,  -361,    42,    18,
     312,   919,  -361,   317,   586,   321,   919,   874,   229,  -361,
     919,   919,    95,   919,    96,   367,    42,    42,    42,   919,
     323,   166,   339,    29,   359,   360,   383,   386,    84,   375,
    -361,    42,    76,    42,  -361,    17,   919,    42,   801,  1178,
     801,  -361,   348,    42,  1178,    42,  1178,    42,   919,  1163,
    1178,   180,   389,    42,  1178,   390,    42,   217,   919,   339,
      30,  1178,  -361,    42,    42,   353,    42,   336,   338,   223,
     345,   392,   394,   399,   358,   838,  -361,   384,  1224,   919,
    -361,   363,    42,   595,   919,   364,  1178,  -361,  -361,   407,
     424,   339,   425,   339,   426,   411,  1178,    42,    42,    42,
     427,   919,   188,   339,   339,   339,   408,   409,   151,  -361,
     357,   361,   919,    16,    42,    42,  1224,   801,   801,  -361,
     377,  1178,    42,   376,   339,   418,    42,   421,    42,   345,
     438,   919,   339,    42,  1178,  -361,    42,   444,   445,   378,
     379,   430,   431,   339,   339,   125,   919,   395,   838,  -361,
     400,    42,   649,   339,  -361,    42,   919,    42,   919,  -361,
      42,  1178,    42,   919,   447,   801,   801,   339,   339,   385,
     387,   454,   457,  -361,  1178,    16,    42,    42,   801,  -361,
     405,  -361,   460,  1178,   461,  1178,   919,   464,  1178,    42,
    -361,  -361,   465,   482,   339,   339,   801,   801,   919,   428,
     801,   429,    42,    42,    42,  1178,    42,   919,   801,   801,
     483,   487,  -361,  -361,  1178,    16,  -361,    42,   801,   -15,
     -15,   919,  1178,  -361,  -361,   801,   801,   919,   801,   436,
    -361,  -361,  1178,  -361,  -361,  1178,  -361,    42,   801,  -361
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,   139,   125,   126,   127,   128,    93,   131,
     130,   175,   175,   175,   175,     0,     0,   170,   132,   133,
     134,   175,   183,   121,   113,   114,   115,   116,   117,     0,
     129,    92,   119,   120,   135,   167,   168,   117,   112,   111,
      93,     0,     0,   172,    89,     0,   153,   174,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   178,   179,     0,
     182,     0,     1,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   175,   175,     0,
      95,     0,   175,     0,    88,    90,     0,     0,    89,   173,
     175,     0,     0,   175,   175,     0,     0,   122,    89,    30,
     175,   118,   180,   181,   175,   175,   175,     0,   175,    33,
      32,   175,   175,    50,     0,     0,     0,     0,   183,    36,
      38,    51,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   155,   156,
     157,   158,   159,   160,   161,   162,   136,     0,     0,   151,
       0,     0,   154,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   123,     0,    89,     0,     0,     0,     0,   175,
       0,     0,     0,   183,   183,   183,    37,   182,    42,   108,
     107,    96,    97,   102,   103,   105,   104,   106,   175,   100,
     101,   109,   110,    98,    99,     0,     0,   175,   175,   124,
     152,    94,   175,     0,    59,   175,     0,     0,   175,   175,
     175,     0,   175,   169,     0,     0,   175,   175,   175,     0,
     175,   175,     9,     0,     0,     0,     0,    39,    40,     0,
     163,   137,     0,     0,     0,    62,   175,     0,     0,    63,
       0,     0,     0,     0,   174,     0,     0,     0,    31,     0,
       0,     0,     0,   175,     0,     0,     2,     3,     4,    41,
     175,   175,     0,   140,    91,    54,     0,     0,   175,    56,
       0,    64,   175,    68,   175,   175,   175,   175,     0,    80,
       0,   175,   175,   175,   175,   175,     0,   175,   139,   175,
     175,    29,   175,     8,     0,    82,     0,   138,   175,     0,
      60,     0,    67,     0,     0,     0,     0,     0,     0,    81,
       0,     0,     0,     0,     0,     0,   175,   175,   175,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,     0,
      84,   175,    83,   175,   176,   175,     0,   175,     0,    55,
       0,    71,     0,   175,    72,   175,    58,   175,     0,     0,
      44,     0,     0,   175,    45,     0,   175,    29,     0,     0,
       0,   146,   141,   175,   175,   139,   175,     0,     0,     0,
       5,     0,     0,    34,     0,     0,   177,     0,    52,     0,
      61,    65,   175,     0,     0,     0,    73,   171,   164,     0,
       0,     0,     0,     0,     0,     0,   150,   175,   175,   175,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     6,
       0,     0,     0,   183,   175,   175,    53,     0,     0,    79,
       0,    57,   175,     0,     0,     0,   175,     0,   175,    10,
       0,     0,     0,   175,   145,   142,   175,    13,    12,     0,
       0,     0,     0,     0,     0,   175,     0,     0,     0,    66,
      69,   175,     0,     0,   165,   175,     0,   175,     0,    11,
     175,   149,   175,     0,     0,     0,     0,     0,     0,     0,
       0,    21,    20,    35,    85,   183,   175,   175,     0,    76,
       0,   166,     0,    46,     0,    47,     0,     0,   144,   175,
      15,    14,    17,    16,     0,     0,     0,     0,     0,     0,
       0,    77,   175,   175,   175,   148,   175,     0,     0,     0,
      25,    24,    23,    22,    87,   183,    70,   175,     0,     0,
       0,     0,   143,    19,    18,     0,     0,     0,     0,    74,
      49,    48,   147,    27,    26,    86,    78,   175,     0,    75
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -361,  -361,   328,  -361,  -361,  -361,   142,  -361,   -54,  -354,
    -361,   132,  -106,  -361,  -361,  -361,  -361,  -361,  -361,   501,
    -360,  -361,   -74,  -286,   350,  -361,   108,  -287,  -361,   216,
    -361,   416,  -361,  -173,   326,  -361,  -275,  -273,  -361,  -361,
    -193,    -8,  -361,   401,  -116
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   113,   114,   115,   116,   326,   327,    23,   328,   293,
     118,    59,   119,    24,    25,   158,   210,    26,    27,    37,
     331,   261,    83,    84,    85,    30,    31,    42,    32,   290,
     121,    46,    33,   145,   146,   389,   353,    34,    35,    36,
      47,   150,   335,    60,    61
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      48,   321,   178,    49,    50,    51,    52,   117,   332,    55,
      43,   176,   102,    56,   153,   414,   409,   244,    57,    57,
      43,    89,   230,    92,   163,    43,   262,    17,  -175,    43,
      89,   287,    48,    62,   316,   364,   398,   281,   283,   356,
      44,    86,   249,   288,    45,    43,   288,   365,   365,    89,
      87,   337,   236,    53,   274,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   227,   299,   333,   148,   459,   390,   275,   402,    43,
      93,  -175,   154,   295,   195,   159,   160,   103,   476,   332,
     214,   -43,   165,    58,    58,   376,   166,   167,   168,    79,
     170,    -7,   289,   171,   172,   317,   366,   399,   282,   284,
     205,   291,   334,   351,   351,   371,   372,     1,     2,   276,
     259,   277,    81,   226,     3,   206,   445,    54,    43,     4,
       5,     6,     7,     8,     9,    10,    82,   352,   355,  -175,
      11,    12,    13,    14,   473,    99,    15,    16,    17,   363,
      18,    19,    20,    65,    66,    67,    68,    69,    70,    71,
     100,   219,   332,  -175,   292,   156,    88,   208,   268,   207,
      90,    81,   157,    21,   209,    44,   104,   105,   388,    45,
     229,    22,   441,   442,   106,   362,   397,    91,   107,   232,
     233,    73,    74,    81,   234,    77,    78,   238,   351,   240,
     242,   243,   245,    95,   247,    97,   241,   435,   250,   251,
     252,   108,   254,   255,    98,   111,   147,   112,   425,   101,
     427,     4,     5,     6,     7,   235,     9,    10,   266,   149,
     436,   437,   438,   138,   139,   140,   141,   142,   143,   144,
      17,   151,    18,    19,    20,   286,   530,   531,   324,   325,
      44,   454,   294,   296,   406,   407,   347,   164,   169,   462,
     301,   196,   173,   348,   304,   236,   305,   306,   307,   308,
     471,   472,   174,   311,   312,   313,   314,   315,   175,   319,
     481,   322,   323,   188,   329,   109,   110,    69,    70,    71,
     336,   109,   110,   198,   492,   493,   199,   446,    65,    66,
      67,    68,    69,    70,    71,   223,   224,   225,   358,   359,
     360,   237,   195,   197,   200,   408,    67,    68,    69,    70,
      71,   510,   511,   374,   203,   375,   213,   377,   211,   379,
     215,   216,   218,   217,   111,   383,   220,   384,   221,   385,
      77,    78,   246,   253,   248,   392,   256,   257,   394,   258,
      29,    38,    39,    41,   260,   400,   401,   267,   403,   498,
       4,     5,     6,     7,   302,     9,    10,   280,   285,   100,
     297,   270,   310,   338,   418,   300,   272,   340,   303,    17,
     320,    18,    19,    20,   343,   357,   367,   368,   369,   430,
     431,   432,   138,   139,   140,   141,   142,   143,   144,   527,
      79,    94,   373,    96,   236,   370,   447,   448,   382,   391,
     393,   120,   342,   404,   452,   405,   292,   412,   456,   410,
     458,   411,   413,   415,   417,   463,   423,   422,   464,   424,
     429,   426,   428,   433,   443,   439,   440,   451,   444,   455,
     453,   155,   457,   478,   460,   161,   380,   482,   381,   484,
     465,   466,   486,   489,   487,   467,   468,   469,   470,   475,
     496,   477,   494,   497,   495,   502,   503,   504,   499,   500,
     506,   508,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   507,   189,   190,   191,   192,   193,   194,   509,   525,
     517,   420,   515,   526,   518,   519,   520,   537,   521,   395,
     222,    28,   318,   152,   201,     0,    43,   204,     0,   528,
      63,    64,    65,    66,    67,    68,    69,    70,    71,   177,
       0,     0,   231,     0,     0,   449,   450,   228,     0,   538,
       0,    63,    64,    65,    66,    67,    68,    69,    70,    71,
       0,    72,     0,     0,     0,     0,     0,     0,     0,     0,
      73,    74,    75,    76,    77,    78,   239,     0,     0,     0,
     480,     0,     0,    64,    65,    66,    67,    68,    69,    70,
      71,    73,    74,   490,   491,    77,    78,     0,     0,     0,
       0,     0,   263,   264,   265,     0,   501,     0,   269,     0,
       0,   271,     0,   273,     0,     0,   278,   279,     0,     0,
       0,     0,    73,    74,   512,   513,    77,    78,   516,     4,
       5,     6,     7,   341,     9,    10,   523,   524,     4,     5,
       6,     7,   419,     9,    10,     0,   529,     0,    17,     0,
      18,    19,    20,   533,   534,     0,   536,    17,     0,    18,
      19,    20,     0,     0,     0,     0,   539,     0,     0,     0,
       0,   339,     0,   236,     0,     0,   344,   346,     0,     0,
     349,   350,   236,   354,     0,     0,     0,     0,     0,   361,
       0,     0,     4,     5,     6,     7,   479,     9,    10,     0,
       0,   102,     0,     0,     0,     0,   378,     0,     0,     1,
       2,    17,     0,    18,    19,    20,     3,     0,   386,     0,
       0,     4,     5,     6,     7,     8,     9,    10,   396,   104,
     105,     0,    11,    12,    13,    14,   236,   106,    15,    16,
      17,   107,    18,    19,    20,     0,     0,     0,     0,   416,
       0,     0,     0,     0,   421,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   108,    21,   109,   110,   111,     0,
     112,   434,     0,    22,     0,     0,   103,     0,     0,     1,
       2,     0,     0,     0,     0,     0,     3,     0,     0,     0,
       0,     4,     5,     6,     7,     8,     9,    10,     0,   104,
     105,   461,    11,    12,    13,    14,     0,   106,    15,    16,
      17,   107,    18,    19,    20,     0,   474,    63,    64,    65,
      66,    67,    68,    69,    70,    71,   483,     0,   485,    80,
       0,     0,     0,   488,   108,    21,   109,   110,   111,     0,
     112,     0,     0,    22,     4,     5,     6,     7,    72,     9,
      10,     0,     0,     0,     0,     0,   505,    73,    74,    75,
      76,    77,    78,    17,     0,    18,    19,    20,   514,     1,
       2,     0,     0,     0,     0,     0,     3,   522,     0,     0,
       0,     4,     5,     6,     7,     8,     9,    10,   236,     0,
       0,   532,    11,    12,    13,    14,     0,   535,    15,    16,
      17,     0,    18,    19,    20,     1,     2,     0,     0,     0,
       0,     0,     3,     0,     0,     0,     0,     4,     5,     6,
       7,     8,     9,    10,     0,    21,     0,     0,    11,    12,
      13,    14,   330,    22,    15,    16,    17,     0,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     2,     0,     0,     0,     0,   345,     3,     0,     0,
       0,    21,     4,     5,     6,     7,     8,     9,    10,    22,
       0,     0,     0,    11,    12,    13,    14,     0,     0,    15,
      16,    17,     0,    18,    19,    20,     1,     2,     0,     0,
       0,     0,     0,     3,     0,     0,     0,     0,     4,     5,
       6,     7,    40,     9,    10,     0,    21,     0,     0,    11,
      12,    13,    14,     0,    22,    15,    16,    17,     0,    18,
      19,    20,    63,    64,    65,    66,    67,    68,    69,    70,
      71,     0,     0,     0,   162,     0,     0,     0,     0,     0,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
      22,     0,     0,    72,     0,     0,     0,     0,     0,     0,
       0,     0,    73,    74,    75,    76,    77,    78,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     0,     0,     0,
     202,     0,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,     0,     0,     0,   212,     0,     0,     0,    72,
       0,     0,     0,     0,     0,     0,     0,     0,    73,    74,
      75,    76,    77,    78,    72,     0,     0,     0,     0,     0,
       0,     0,     0,    73,    74,    75,    76,    77,    78,    63,
      64,    65,    66,    67,    68,    69,    70,    71,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,    70,    71,     0,     0,   298,   309,     0,     0,     0,
      72,     0,     0,     0,     0,     0,     0,     0,     0,    73,
      74,    75,    76,    77,    78,    72,     0,     0,     0,     0,
       0,     0,     0,     0,    73,    74,    75,    76,    77,    78,
      63,    64,    65,    66,    67,    68,    69,    70,    71,     0,
       0,     0,   387,     0,     0,    63,    64,    65,    66,    67,
      68,    69,    70,    71,     0,     0,     0,     0,     0,     0,
       0,    72,     0,     0,     0,     0,     0,     0,     0,     0,
      73,    74,    75,    76,    77,    78,    72,     0,     0,     0,
       0,     0,     0,     0,     0,    73,    74,    75,    76,    77,
      78,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      63,    64,    65,    66,    67,    68,    69,    70,    71,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,    75,    76,    77,    78,     0,     0,     0,
      73,    74,     0,    76,    77,    78
};

static const yytype_int16 yycheck[] =
{
       8,   288,   118,    11,    12,    13,    14,    61,   294,    17,
       3,   117,     3,    21,    88,   375,   370,   210,     3,     3,
       3,     3,   195,    18,    98,     3,     6,    42,     6,     3,
       3,     6,    40,     0,     6,     6,     6,     6,     6,   314,
      18,    18,   215,    18,    22,     3,    18,    18,    18,     3,
      27,    33,    67,    18,    27,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,   177,   265,    39,    82,   429,   351,    34,   365,     3,
      75,     5,    90,    76,    64,    93,    94,    78,   448,   375,
     164,    76,   100,    78,    78,    78,   104,   105,   106,    77,
     108,    75,    77,   111,   112,    77,    77,    77,    77,    77,
      19,    18,    78,    18,    18,    31,    32,    11,    12,    76,
     226,    78,     5,   177,    18,    34,   412,    18,     3,    23,
      24,    25,    26,    27,    28,    29,    19,    42,    42,    18,
      34,    35,    36,    37,    19,    27,    40,    41,    42,   322,
      44,    45,    46,     9,    10,    11,    12,    13,    14,    15,
      42,   169,   448,     6,    71,    27,    18,    27,    62,    78,
       6,     5,    34,    67,    34,    18,    31,    32,   351,    22,
     188,    75,    31,    32,    39,    19,   359,    18,    43,   197,
     198,    47,    48,     5,   202,    51,    52,   205,    18,    27,
     208,   209,   210,    18,   212,    19,    34,    19,   216,   217,
     218,    66,   220,   221,    18,    70,    27,    72,   391,    76,
     393,    23,    24,    25,    26,    27,    28,    29,   236,    19,
     403,   404,   405,    53,    54,    55,    56,    57,    58,    59,
      42,    23,    44,    45,    46,   253,   519,   520,    31,    32,
      18,   424,   260,   261,    31,    32,    27,    18,    66,   432,
     268,    77,    75,    34,   272,    67,   274,   275,   276,   277,
     443,   444,    75,   281,   282,   283,   284,   285,    75,   287,
     453,   289,   290,    75,   292,    68,    69,    13,    14,    15,
     298,    68,    69,     5,   467,   468,    19,   413,     9,    10,
      11,    12,    13,    14,    15,   173,   174,   175,   316,   317,
     318,   203,    64,    64,    19,   369,    11,    12,    13,    14,
      15,   494,   495,   331,    63,   333,    19,   335,    37,   337,
      20,    27,    70,    27,    70,   343,    27,   345,    27,   347,
      51,    52,    18,    27,    19,   353,    76,    76,   356,    76,
       0,     1,     2,     3,    39,   363,   364,    60,   366,   475,
      23,    24,    25,    26,    27,    28,    29,    21,    27,    42,
     262,    63,    18,    61,   382,   267,    63,    60,   270,    42,
      27,    44,    45,    46,    63,    18,    27,    27,     5,   397,
     398,   399,    53,    54,    55,    56,    57,    58,    59,   515,
      77,    51,    27,    53,    67,    19,   414,   415,    60,    20,
      20,    61,   304,    77,   422,    77,    71,    18,   426,    27,
     428,    27,    64,    39,    61,   433,    19,    63,   436,     5,
      19,     6,     6,     6,    77,    27,    27,    60,    77,    21,
      64,    91,    21,   451,     6,    95,   338,   455,   340,   457,
       6,     6,   460,     6,   462,    77,    77,    27,    27,    64,
       6,    61,    77,     6,    77,    60,     6,     6,   476,   477,
       6,     6,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   489,   132,   133,   134,   135,   136,   137,     6,     6,
      61,   383,    64,     6,   502,   503,   504,    61,   506,   357,
     172,     0,   286,    87,   154,    -1,     3,   157,    -1,   517,
       7,     8,     9,    10,    11,    12,    13,    14,    15,   118,
      -1,    -1,   196,    -1,    -1,   417,   418,   177,    -1,   537,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,   206,    -1,    -1,    -1,
     452,    -1,    -1,     8,     9,    10,    11,    12,    13,    14,
      15,    47,    48,   465,   466,    51,    52,    -1,    -1,    -1,
      -1,    -1,   232,   233,   234,    -1,   478,    -1,   238,    -1,
      -1,   241,    -1,   243,    -1,    -1,   246,   247,    -1,    -1,
      -1,    -1,    47,    48,   496,   497,    51,    52,   500,    23,
      24,    25,    26,    27,    28,    29,   508,   509,    23,    24,
      25,    26,    27,    28,    29,    -1,   518,    -1,    42,    -1,
      44,    45,    46,   525,   526,    -1,   528,    42,    -1,    44,
      45,    46,    -1,    -1,    -1,    -1,   538,    -1,    -1,    -1,
      -1,   301,    -1,    67,    -1,    -1,   306,   307,    -1,    -1,
     310,   311,    67,   313,    -1,    -1,    -1,    -1,    -1,   319,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,     3,    -1,    -1,    -1,    -1,   336,    -1,    -1,    11,
      12,    42,    -1,    44,    45,    46,    18,    -1,   348,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,   358,    31,
      32,    -1,    34,    35,    36,    37,    67,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,   379,
      -1,    -1,    -1,    -1,   384,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,    -1,
      72,   401,    -1,    75,    -1,    -1,    78,    -1,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    -1,    31,
      32,   431,    34,    35,    36,    37,    -1,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,   446,     7,     8,     9,
      10,    11,    12,    13,    14,    15,   456,    -1,   458,    19,
      -1,    -1,    -1,   463,    66,    67,    68,    69,    70,    -1,
      72,    -1,    -1,    75,    23,    24,    25,    26,    38,    28,
      29,    -1,    -1,    -1,    -1,    -1,   486,    47,    48,    49,
      50,    51,    52,    42,    -1,    44,    45,    46,   498,    11,
      12,    -1,    -1,    -1,    -1,    -1,    18,   507,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    67,    -1,
      -1,   521,    34,    35,    36,    37,    -1,   527,    40,    41,
      42,    -1,    44,    45,    46,    11,    12,    -1,    -1,    -1,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    -1,    67,    -1,    -1,    34,    35,
      36,    37,    74,    75,    40,    41,    42,    -1,    44,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      11,    12,    -1,    -1,    -1,    -1,    62,    18,    -1,    -1,
      -1,    67,    23,    24,    25,    26,    27,    28,    29,    75,
      -1,    -1,    -1,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,    -1,    44,    45,    46,    11,    12,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    -1,    67,    -1,    -1,    34,
      35,    36,    37,    -1,    75,    40,    41,    42,    -1,    44,
      45,    46,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    49,    50,    51,    52,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    -1,
      19,    -1,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
      49,    50,    51,    52,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    -1,
      -1,    -1,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    33,    19,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    52,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,    52,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    -1,    19,    -1,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,     7,     8,     9,    10,    11,    12,    13,    14,    15,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    -1,    -1,    -1,
      47,    48,    -1,    50,    51,    52
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    11,    12,    18,    23,    24,    25,    26,    27,    28,
      29,    34,    35,    36,    37,    40,    41,    42,    44,    45,
      46,    67,    75,    86,    92,    93,    96,    97,    98,   103,
     104,   105,   107,   111,   116,   117,   118,    98,   103,   103,
      27,   103,   106,     3,    18,    22,   110,   119,   120,   120,
     120,   120,   120,    18,    18,   120,   120,     3,    78,    90,
     122,   123,     0,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    38,    47,    48,    49,    50,    51,    52,    77,
      19,     5,    19,   101,   102,   103,    18,    27,    18,     3,
       6,    18,    18,    75,   103,    18,   103,    19,    18,    27,
      42,    76,     3,    78,    31,    32,    39,    43,    66,    68,
      69,    70,    72,    80,    81,    82,    83,    87,    89,    91,
     103,   109,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,    53,    54,
      55,    56,    57,    58,    59,   112,   113,    27,   120,    19,
     120,    23,   110,   101,   120,   103,    27,    34,    94,   120,
     120,   103,    19,   101,    18,   120,   120,   120,   120,    66,
     120,   120,   120,    75,    75,    75,    91,   122,   123,   103,
     103,   103,   103,   103,   103,   103,   103,   103,    75,   103,
     103,   103,   103,   103,   103,    64,    77,    64,     5,    19,
      19,   103,    19,    63,   103,    19,    34,    78,    27,    34,
      95,    37,    19,    19,   101,    20,    27,    27,    70,   120,
      27,    27,    81,    90,    90,    90,    87,    91,   103,   120,
     112,   113,   120,   120,   120,    27,    67,   105,   120,   103,
      27,    34,   120,   120,   119,   120,    18,   120,    19,   112,
     120,   120,   120,    27,   120,   120,    76,    76,    76,    91,
      39,   100,     6,   103,   103,   103,   120,    60,    62,   103,
      63,   103,    63,   103,    27,    34,    76,    78,   103,   103,
      21,     6,    77,     6,    77,    27,   120,     6,    18,    77,
     108,    18,    71,    88,   120,    76,   120,   105,    33,   119,
     105,   120,    27,   105,   120,   120,   120,   120,   120,    19,
      18,   120,   120,   120,   120,   120,     6,    77,   108,   120,
      27,   106,   120,   120,    31,    32,    84,    85,    87,   120,
      74,    99,   102,    39,    78,   121,   120,    33,    61,   103,
      60,    27,   105,    63,   103,    62,   103,    27,    34,   103,
     103,    18,    42,   115,   103,    42,   115,    18,   120,   120,
     120,   103,    19,   112,     6,    18,    77,    27,    27,     5,
      19,    31,    32,    27,   120,   120,    78,   120,   103,   120,
     105,   105,    60,   120,   120,   120,   103,    19,   112,   114,
     115,    20,   120,    20,   120,    85,   103,   112,     6,    77,
     120,   120,   106,   120,    77,    77,    31,    32,    87,    88,
      27,    27,    18,    64,    99,    39,   103,    61,   120,    27,
     105,   103,    63,    19,     5,   112,     6,   112,     6,    19,
     120,   120,   120,     6,   103,    19,   112,   112,   112,    27,
      27,    31,    32,    77,    77,   102,   123,   120,   120,   105,
     105,    60,   120,    64,   112,    21,   120,    21,   120,    88,
       6,   103,   112,   120,   120,     6,     6,    77,    77,    27,
      27,   112,   112,    19,   103,    64,    99,    61,   120,    27,
     105,   112,   120,   103,   120,   103,   120,   120,   103,     6,
     105,   105,   112,   112,    77,    77,     6,     6,   123,   120,
     120,   105,    60,     6,     6,   103,     6,   120,     6,     6,
     112,   112,   105,   105,   103,    64,   105,    61,   120,   120,
     120,   120,   103,   105,   105,     6,     6,   123,   120,   105,
     116,   116,   103,   105,   105,   103,   105,    61,   120,   105
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    79,    80,    80,    80,    81,    81,    81,    81,    82,
      83,    83,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    85,    85,
      86,    86,    87,    87,    88,    88,    89,    89,    89,    89,
      89,    89,    90,    90,    91,    91,    91,    91,    91,    91,
      91,    91,    92,    92,    92,    93,    93,    93,    93,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      96,    97,    98,    99,    99,   100,   100,   100,   101,   101,
     102,   102,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   104,   104,   104,   104,   105,
     105,   105,   105,   105,   105,   105,   106,   106,   106,   106,
     107,   108,   108,   109,   109,   109,   109,   109,   109,   109,
     109,   110,   110,   111,   111,   112,   112,   112,   112,   112,
     112,   112,   113,   113,   114,   114,   115,   116,   116,   117,
     117,   118,   119,   119,   120,   120,   121,   121,   122,   122,
     122,   122,   123,   123
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     4,     4,     7,     8,     3,     5,     3,
       9,    10,     4,     4,     6,     6,     6,     6,     8,     8,
       5,     5,     7,     7,     7,     7,     9,     9,     1,     0,
       3,     6,     1,     1,     3,     6,     1,     2,     1,     3,
       3,     4,     3,     0,     7,     7,    11,    11,    14,    14,
       1,     1,    10,    11,     7,     9,     7,    11,     9,     2,
       5,     7,     3,     3,     4,     7,     9,     5,     3,     8,
      11,     5,     5,     6,    12,    15,     9,    10,    13,     7,
       7,     8,     7,     1,     1,     7,    11,     9,     1,     0,
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
  case 36: /* statement_expr_list: statement  */
#line 209 "parser.y"
                { printf("Add first statement :\n"); }
#line 2207 "parser.tab.c"
    break;

  case 37: /* statement_expr_list: visibility_modifier statement  */
#line 210 "parser.y"
                                    { printf("Add first visibility_modifier statement :\n"); }
#line 2213 "parser.tab.c"
    break;

  case 38: /* statement_expr_list: expr  */
#line 211 "parser.y"
           { printf("Add first statement :\n"); }
#line 2219 "parser.tab.c"
    break;

  case 39: /* statement_expr_list: statement_expr_list separator_List statement  */
#line 212 "parser.y"
                                                    { printf("Add new statement to statement_expr_list :\n"); }
#line 2225 "parser.tab.c"
    break;

  case 40: /* statement_expr_list: statement_expr_list separator_List expr  */
#line 213 "parser.y"
                                               { printf("Add new expr to statement_expr_list :\n"); }
#line 2231 "parser.tab.c"
    break;

  case 41: /* statement_expr_list: statement_expr_list separator_List visibility_modifier statement  */
#line 214 "parser.y"
                                                                        { printf("Add new visibility_modifier to statement_expr_list :\n"); }
#line 2237 "parser.tab.c"
    break;

  case 43: /* statement_expr_list_e: %empty  */
#line 219 "parser.y"
                     { printf("PARSER found statement_list_e - nothing\n"); }
#line 2243 "parser.tab.c"
    break;

  case 44: /* statement: VAL endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 223 "parser.y"
                                                       { printf("implicit value declaration:\n"); }
#line 2249 "parser.tab.c"
    break;

  case 45: /* statement: VAR endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 224 "parser.y"
                                                       { printf("implicit variable declaration:\n"); }
#line 2255 "parser.tab.c"
    break;

  case 46: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 225 "parser.y"
                                                                                           { printf("explicit value declaration:\n"); }
#line 2261 "parser.tab.c"
    break;

  case 47: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 226 "parser.y"
                                                                                           { printf("explicit variable declaration:\n"); }
#line 2267 "parser.tab.c"
    break;

  case 48: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt ARRAY '[' type ']' endlOpt '=' endlOpt array  */
#line 227 "parser.y"
                                                                                              { printf("explicit array declaration:\n"); }
#line 2273 "parser.tab.c"
    break;

  case 49: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt ARRAY '[' type ']' endlOpt '=' endlOpt array  */
#line 228 "parser.y"
                                                                                              { printf("explicit array declaration:\n"); }
#line 2279 "parser.tab.c"
    break;

  case 50: /* statement: class  */
#line 229 "parser.y"
            { printf("Class:\n"); }
#line 2285 "parser.tab.c"
    break;

  case 51: /* statement: method  */
#line 230 "parser.y"
             { printf("Method:\n"); }
#line 2291 "parser.tab.c"
    break;

  case 52: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr ELSE endlOpt expr  */
#line 239 "parser.y"
                                                                           { (yyval.tree) = mk_if_else_expr((yyvsp[-6].tree), (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2297 "parser.tab.c"
    break;

  case 53: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr endlList ELSE endlOpt expr  */
#line 240 "parser.y"
                                                                                    { (yyval.tree) = mk_if_else_expr((yyvsp[-7].tree), (yyvsp[-4].tree), (yyvsp[0].tree)); }
#line 2303 "parser.tab.c"
    break;

  case 54: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr  */
#line 241 "parser.y"
                                                      { (yyval.tree) = mk_if_expr((yyvsp[-3].tree), (yyvsp[0].tree));}
#line 2309 "parser.tab.c"
    break;

  case 55: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt YIELD endlOpt expr  */
#line 249 "parser.y"
                                                                                                                          { printf("FOR in parentheses\n"); }
#line 2315 "parser.tab.c"
    break;

  case 56: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt expr  */
#line 250 "parser.y"
                                                                                                            { printf("FOR in parentheses\n"); }
#line 2321 "parser.tab.c"
    break;

  case 57: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt YIELD endlOpt expr  */
#line 251 "parser.y"
                                                                                                                                           { printf("FOR in curly_braces\n"); }
#line 2327 "parser.tab.c"
    break;

  case 58: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt expr  */
#line 252 "parser.y"
                                                                                                                             { printf("FOR in curly_braces\n"); }
#line 2333 "parser.tab.c"
    break;

  case 80: /* while_expr: WHILE endlOpt '(' expr ')' endlOpt expr  */
#line 286 "parser.y"
                                                              { (yyval.tree) = mk_while_expr((yyvsp[-3].tree),(yyvsp[0].tree)); }
#line 2339 "parser.tab.c"
    break;

  case 81: /* do_while_expr: DO endlOpt expr endlOpt WHILE '(' expr ')'  */
#line 290 "parser.y"
                                                                 { (yyval.tree) = mk_do_while_expr((yyvsp[-5].tree),(yyvsp[-1].tree)); }
#line 2345 "parser.tab.c"
    break;

  case 82: /* match_expr: expr MATCH endlOpt '{' endlOpt case_list '}'  */
#line 296 "parser.y"
                                                       {(yyval.tree) = mk_match_expr((yyvsp[-6].tree),(yyvsp[-1].tree));(yyval.tree)=(yyvsp[-6].tree);found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2351 "parser.tab.c"
    break;

  case 83: /* case_condition: expr_list  */
#line 301 "parser.y"
                    {(yyval.tree) = add_case_condition((yyvsp[0].tree));}
#line 2357 "parser.tab.c"
    break;

  case 84: /* case_condition: CASE_PATTERN  */
#line 302 "parser.y"
                       { (yyval.tree) = add_case_condition((yyvsp[0].tree)); }
#line 2363 "parser.tab.c"
    break;

  case 85: /* case_list: CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 306 "parser.y"
                                                                                         { (yyval.tree) = mk_list(); (yyval.tree) = add_alt_case((yyval.tree), (yyvsp[-4].tree), (yyvsp[0].tree)); }
#line 2369 "parser.tab.c"
    break;

  case 86: /* case_list: case_list endlOpt semicolonList endlOpt CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 307 "parser.y"
                                                                                                                                 { (yyval.tree) = add_to_list((yyvsp[-10].tree), (yyvsp[-4].tree));(yyval.tree) = add_alt_case((yyvsp[-10].tree), (yyvsp[-4].tree), (yyvsp[0].tree)); }
#line 2375 "parser.tab.c"
    break;

  case 87: /* case_list: case_list endlOpt CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 308 "parser.y"
                                                                                                           { (yyval.tree) = add_to_list((yyvsp[-8].tree), (yyvsp[-4].tree));(yyval.tree) = add_alt_case((yyvsp[-8].tree), (yyvsp[-4].tree), (yyvsp[0].tree)); }
#line 2381 "parser.tab.c"
    break;

  case 88: /* expr_list_e: expr_list  */
#line 318 "parser.y"
                   { printf("PARSER found expr_list - expr_list\n"); }
#line 2387 "parser.tab.c"
    break;

  case 89: /* expr_list_e: %empty  */
#line 319 "parser.y"
                     { printf("PARSER found expr_list - nothing\n"); }
#line 2393 "parser.tab.c"
    break;

  case 90: /* expr_list: expr  */
#line 324 "parser.y"
                      { printf("PARSER found expr_list - expr\n"); }
#line 2399 "parser.tab.c"
    break;

  case 91: /* expr_list: expr_list endlOpt ',' endlOpt expr  */
#line 325 "parser.y"
                                          { printf("PARSER found expr_list - expr_list\n"); }
#line 2405 "parser.tab.c"
    break;

  case 92: /* expr: const  */
#line 330 "parser.y"
                                  {printf("PARSER found expr - const\n"); }
#line 2411 "parser.tab.c"
    break;

  case 93: /* expr: IDENTIFIER  */
#line 331 "parser.y"
                                       {(yyval.tree) = mk_ident_lit((yyvsp[0].str_value)); }
#line 2417 "parser.tab.c"
    break;

  case 94: /* expr: IDENTIFIER endlOpt '=' endlOpt expr  */
#line 332 "parser.y"
                                          { printf("Assignment:\n"); }
#line 2423 "parser.tab.c"
    break;

  case 95: /* expr: '(' expr ')'  */
#line 333 "parser.y"
                   { printf("PARSER found expr - ( expr ) \n"); }
#line 2429 "parser.tab.c"
    break;

  case 96: /* expr: expr '>' endlOpt expr  */
#line 334 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) ">", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2435 "parser.tab.c"
    break;

  case 97: /* expr: expr '<' endlOpt expr  */
#line 335 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "<", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2441 "parser.tab.c"
    break;

  case 98: /* expr: expr MORE_OR_EQUAL_OPERATOR endlOpt expr  */
#line 336 "parser.y"
                                               { (yyval.tree) = mk_bin_op((char*) ">=", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2447 "parser.tab.c"
    break;

  case 99: /* expr: expr LESS_OR_EQUAL_OPERATOR endlOpt expr  */
#line 337 "parser.y"
                                               { (yyval.tree) = mk_bin_op((char*) "<=", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2453 "parser.tab.c"
    break;

  case 100: /* expr: expr EQ endlOpt expr  */
#line 338 "parser.y"
                           { (yyval.tree) = mk_bin_op((char*) "==", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2459 "parser.tab.c"
    break;

  case 101: /* expr: expr NEQ endlOpt expr  */
#line 339 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "!=", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2465 "parser.tab.c"
    break;

  case 102: /* expr: expr '+' endlOpt expr  */
#line 340 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "+", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2471 "parser.tab.c"
    break;

  case 103: /* expr: expr '-' endlOpt expr  */
#line 341 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "-", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2477 "parser.tab.c"
    break;

  case 104: /* expr: expr '/' endlOpt expr  */
#line 342 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "/", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2483 "parser.tab.c"
    break;

  case 105: /* expr: expr '*' endlOpt expr  */
#line 343 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "*", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2489 "parser.tab.c"
    break;

  case 106: /* expr: expr '%' endlOpt expr  */
#line 344 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "%", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2495 "parser.tab.c"
    break;

  case 107: /* expr: expr '&' endlOpt expr  */
#line 345 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "&", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2501 "parser.tab.c"
    break;

  case 108: /* expr: expr '|' endlOpt expr  */
#line 346 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "|", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2507 "parser.tab.c"
    break;

  case 109: /* expr: expr KW_OR endlOpt expr  */
#line 347 "parser.y"
                              { (yyval.tree) = mk_bin_op((char*) "||", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2513 "parser.tab.c"
    break;

  case 110: /* expr: expr KW_AND endlOpt expr  */
#line 348 "parser.y"
                               { (yyval.tree) = mk_bin_op((char*) "&&", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2519 "parser.tab.c"
    break;

  case 111: /* expr: '-' expr  */
#line 349 "parser.y"
                             { (yyval.tree) = mk_unary_op("unary_minus_op", (yyvsp[0].tree));found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2525 "parser.tab.c"
    break;

  case 112: /* expr: '+' expr  */
#line 350 "parser.y"
                            { (yyval.tree) = mk_unary_op("unary_plus_op", (yyvsp[0].tree));found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2531 "parser.tab.c"
    break;

  case 113: /* expr: if_else_expr  */
#line 351 "parser.y"
                   {(yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2537 "parser.tab.c"
    break;

  case 114: /* expr: for_expr  */
#line 352 "parser.y"
               { printf("PARSER found expr - for_expr\n"); }
#line 2543 "parser.tab.c"
    break;

  case 115: /* expr: while_expr  */
#line 353 "parser.y"
                 {(yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2549 "parser.tab.c"
    break;

  case 116: /* expr: do_while_expr  */
#line 354 "parser.y"
                    {(yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2555 "parser.tab.c"
    break;

  case 117: /* expr: match_expr  */
#line 355 "parser.y"
                 {(yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2561 "parser.tab.c"
    break;

  case 118: /* expr: '{' statement_expr_list_e '}'  */
#line 356 "parser.y"
                                     { printf("PARSER found expr -  { statement_expr_list_e }\n"); }
#line 2567 "parser.tab.c"
    break;

  case 119: /* expr: anonymous_func  */
#line 357 "parser.y"
                     { printf("Function:\n"); }
#line 2573 "parser.tab.c"
    break;

  case 120: /* expr: method_call  */
#line 358 "parser.y"
                  { printf("method_call:\n"); }
#line 2579 "parser.tab.c"
    break;

  case 121: /* expr: create_instance_class  */
#line 359 "parser.y"
                            { printf("instance_class:\n"); }
#line 2585 "parser.tab.c"
    break;

  case 122: /* expr: READLINE '(' ')'  */
#line 360 "parser.y"
                     { printf("readLine:\n"); }
#line 2591 "parser.tab.c"
    break;

  case 123: /* expr: PRINTLN '(' expr ')'  */
#line 361 "parser.y"
                          { printf("print:\n"); }
#line 2597 "parser.tab.c"
    break;

  case 124: /* expr: IDENTIFIER '.' '(' NUM_10 ')'  */
#line 362 "parser.y"
                                    { printf("array_call:\n"); }
#line 2603 "parser.tab.c"
    break;

  case 125: /* num_const: NUM_10  */
#line 367 "parser.y"
             { (yyval.tree) = mk_int_const((yyvsp[0].int_value)); }
#line 2609 "parser.tab.c"
    break;

  case 126: /* num_const: NUM_16  */
#line 368 "parser.y"
             { (yyval.tree) = mk_int_const((yyvsp[0].int_value)); }
#line 2615 "parser.tab.c"
    break;

  case 127: /* num_const: REAL_NUMBER  */
#line 369 "parser.y"
                  { (yyval.tree) = mk_real_const((yyvsp[0].real_value)); }
#line 2621 "parser.tab.c"
    break;

  case 128: /* num_const: REAL_NUMBER_EXPONENT  */
#line 370 "parser.y"
                           { (yyval.tree) = mk_real_const((yyvsp[0].real_value)); }
#line 2627 "parser.tab.c"
    break;

  case 130: /* const: CONST_STRING  */
#line 376 "parser.y"
                   { (yyval.tree) = mk_string_const((yyvsp[0].str_value)); }
#line 2633 "parser.tab.c"
    break;

  case 131: /* const: CONST_CHAR  */
#line 377 "parser.y"
                 { (yyval.tree) = mk_char_const((yyvsp[0].str_value)); }
#line 2639 "parser.tab.c"
    break;

  case 132: /* const: KW_TRUE  */
#line 378 "parser.y"
              { (yyval.tree) = mk_boolean_const(true); }
#line 2645 "parser.tab.c"
    break;

  case 133: /* const: KW_FALSE  */
#line 379 "parser.y"
               { (yyval.tree) = mk_boolean_const(false); }
#line 2651 "parser.tab.c"
    break;

  case 134: /* const: KW_NULL  */
#line 380 "parser.y"
              { (yyval.tree) = mk_null_const(); }
#line 2657 "parser.tab.c"
    break;

  case 135: /* const: array  */
#line 381 "parser.y"
            { (yyval.tree) = mk_array_const((yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2663 "parser.tab.c"
    break;

  case 155: /* type: INT_KW  */
#line 428 "parser.y"
             { (yyval.tree) = mk_integer_type(); }
#line 2669 "parser.tab.c"
    break;

  case 156: /* type: DOUBLE_KW  */
#line 429 "parser.y"
                { (yyval.tree) = mk_real_type(); }
#line 2675 "parser.tab.c"
    break;

  case 157: /* type: STRING_KW  */
#line 430 "parser.y"
                { (yyval.tree) = mk_string_type(); }
#line 2681 "parser.tab.c"
    break;

  case 158: /* type: CHAR_KW  */
#line 431 "parser.y"
              { (yyval.tree) = mk_char_type(); }
#line 2687 "parser.tab.c"
    break;

  case 159: /* type: BOOLEAN_KW  */
#line 432 "parser.y"
                 { (yyval.tree) = mk_boolean_type(); }
#line 2693 "parser.tab.c"
    break;

  case 160: /* type: ANY_KW  */
#line 433 "parser.y"
             { (yyval.tree) = mk_any_type(); }
#line 2699 "parser.tab.c"
    break;

  case 161: /* type: UNIT_KW  */
#line 434 "parser.y"
              { (yyval.tree) = mk_unit_type(); }
#line 2705 "parser.tab.c"
    break;

  case 162: /* type_list_car: type  */
#line 438 "parser.y"
           { (yyval.tree) = mk_list(); (yyval.tree) = add_to_list((yyval.tree), (yyvsp[0].tree)); }
#line 2711 "parser.tab.c"
    break;

  case 163: /* type_list_car: type_list_car RIGHT_ARROW_OPERATOR type  */
#line 439 "parser.y"
                                              { (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 2717 "parser.tab.c"
    break;

  case 164: /* type_list: type  */
#line 443 "parser.y"
           { (yyval.tree) = mk_list(); (yyval.tree) = add_to_list((yyval.tree), (yyvsp[0].tree)); }
#line 2723 "parser.tab.c"
    break;

  case 165: /* type_list: type_list_simple ',' type  */
#line 444 "parser.y"
                                { (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 2729 "parser.tab.c"
    break;

  case 166: /* type_list_simple: '(' type_list ')' RIGHT_ARROW_OPERATOR type  */
#line 448 "parser.y"
                                                 { (yyval.tree) = add_to_list((yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2735 "parser.tab.c"
    break;

  case 167: /* array: array_literal  */
#line 459 "parser.y"
                     {(yyval.tree) = mk_array_literal((yyvsp[0].tree)); }
#line 2741 "parser.tab.c"
    break;

  case 168: /* array: initialized_array  */
#line 460 "parser.y"
                         {(yyval.tree) = mk_initialized_array((yyvsp[0].tree));}
#line 2747 "parser.tab.c"
    break;

  case 169: /* array_literal: ARRAY endlOpt '(' expr_list_e ')'  */
#line 464 "parser.y"
                                        {  (yyval.tree) = mk_array_with_expr_list((yyvsp[-1].tree)); }
#line 2753 "parser.tab.c"
    break;

  case 170: /* array_literal: ARRAY  */
#line 465 "parser.y"
                                   { (yyval.tree) = mk_empty_array(); }
#line 2759 "parser.tab.c"
    break;

  case 171: /* initialized_array: NEW endlOpt ARRAY endlOpt '[' type ']' '(' expr ')'  */
#line 469 "parser.y"
                                                           { (yyval.tree) = mk_initialized_array_with_type_and_expr((yyvsp[-4].tree), (yyvsp[-1].tree));}
#line 2765 "parser.tab.c"
    break;

  case 172: /* endlList: ENDL  */
#line 478 "parser.y"
                    { printf("PARSER found ENDL\n"); }
#line 2771 "parser.tab.c"
    break;

  case 173: /* endlList: endlList ENDL  */
#line 479 "parser.y"
                    { printf("PARSER found endlList\n"); }
#line 2777 "parser.tab.c"
    break;

  case 174: /* endlOpt: endlList  */
#line 484 "parser.y"
               { printf("PARSER found endlOpt\n"); }
#line 2783 "parser.tab.c"
    break;

  case 176: /* semicolonList: ';'  */
#line 490 "parser.y"
                   { printf("PARSER found SEMICOLON\n"); }
#line 2789 "parser.tab.c"
    break;

  case 177: /* semicolonList: semicolonList ';'  */
#line 491 "parser.y"
                        { printf("PARSER found semicolonList\n"); }
#line 2795 "parser.tab.c"
    break;

  case 178: /* separator_List: ENDL  */
#line 495 "parser.y"
            { printf("PARSER found ENDL\n"); }
#line 2801 "parser.tab.c"
    break;

  case 179: /* separator_List: ';'  */
#line 496 "parser.y"
            { printf("PARSER found SEMICOLON\n"); }
#line 2807 "parser.tab.c"
    break;

  case 180: /* separator_List: separator_List ENDL  */
#line 497 "parser.y"
                            { printf("PARSER add ENDL to separator_List\n"); }
#line 2813 "parser.tab.c"
    break;

  case 181: /* separator_List: separator_List ';'  */
#line 498 "parser.y"
                           { printf("PARSER add ; to separator_List\n"); }
#line 2819 "parser.tab.c"
    break;


#line 2823 "parser.tab.c"

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

#line 505 "parser.y"

