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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1405

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  181
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  536

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
       0,   130,   130,   137,   138,   139,   143,   144,   145,   146,
     150,   155,   156,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   180,
     181,   185,   186,   199,   200,   208,   209,   217,   218,   219,
     220,   221,   222,   226,   227,   231,   232,   233,   234,   235,
     236,   237,   238,   247,   248,   249,   257,   258,   259,   260,
     265,   266,   267,   268,   269,   270,   271,   272,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   292,
     296,   302,   307,   308,   314,   315,   316,   326,   327,   332,
     333,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   377,   378,   379,   380,   381,   382,
     383,   384,   390,   391,   392,   393,   394,   399,   404,   405,
     409,   410,   411,   412,   413,   414,   415,   416,   420,   421,
     425,   426,   432,   433,   434,   435,   436,   437,   438,   439,
     443,   444,   448,   449,   453,   464,   465,   469,   470,   474,
     483,   484,   489,   490,   495,   496,   500,   501,   502,   503,
     507,   508
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
  "method_params_list", "method", "method_arguments_list", "method_call",
  "type", "type_list_car", "type_list", "type_list_simple", "array",
  "array_literal", "initialized_array", "endlList", "endlOpt",
  "semicolonList", "separator_List", "separator_List_e", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-408)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-174)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,  -408,  -408,    32,  -408,    14,   345,  -408,  -408,  -408,
     975,   975,  1011,  -408,  -408,   171,  -408,  -408,    37,    37,
      37,    37,    37,    37,    37,    51,    80,    96,   -21,  -408,
    -408,  -408,    37,    37,  -408,  -408,    37,    37,    13,  -408,
      58,    81,    83,  -408,   186,    16,  -408,  -408,  -408,  -408,
    -408,  -408,  1294,  -408,  -408,  -408,  -408,  -408,  -408,  -408,
     139,   139,   271,  1052,    23,  -408,   975,   159,   162,   180,
     179,   161,   170,   173,     3,   975,   187,   146,   975,   200,
     203,    37,   205,   128,   211,   175,   165,    13,    13,    13,
    -408,   167,  -408,    37,    37,    37,    37,    37,    37,    37,
      37,    37,   213,    37,    37,    37,    37,    37,    37,    37,
     574,  -408,   221,    37,   230,   108,  1294,   227,   975,  -408,
      37,    37,    37,   975,   224,    37,   681,   975,    37,  1099,
    -408,   975,   233,    37,   250,    37,     8,  -408,  -408,   207,
     212,   214,   186,  -408,  1294,   975,   975,   975,   975,   975,
     975,   975,   975,   975,   253,   228,   975,   975,   975,   975,
     975,   975,   574,  -408,  -408,  -408,  -408,  -408,  -408,  -408,
    -408,    12,  -408,   277,   242,  -408,   307,   302,   308,   975,
      30,    36,  1116,   265,    18,   303,   295,  1163,   304,  -408,
     314,    37,   256,   975,   316,     4,  -408,  -408,  -408,  -408,
    1352,   832,   418,   418,   264,   264,   139,   139,   139,   162,
      37,    48,    48,   591,  1306,   418,   418,  -408,   315,   333,
     297,   574,   574,    37,    37,  -408,  -408,   115,    37,    37,
      37,    37,    37,     5,    37,   975,    77,    37,    37,   320,
      37,    37,  -408,   262,    37,    37,   318,    37,   327,   574,
     155,    37,  -408,   312,   283,   574,    37,  -408,  -408,    15,
     975,   975,   975,    35,   975,   129,   975,  -408,   298,   273,
    1294,   291,   975,   292,    27,   -11,   975,   975,   342,    37,
      37,    37,   975,   574,   351,   156,   287,  -408,   344,   339,
     340,   365,   352,    50,   348,    37,    37,   574,  -408,   336,
     297,  1294,  1294,  1294,   372,    37,  1294,   373,    37,  1183,
     297,    37,  1294,    90,  1294,    37,    37,    37,    37,    37,
    1230,  1294,   155,   975,   574,   294,  1294,    37,  -408,    37,
      37,   318,   376,   386,   387,   195,   328,   374,   375,   382,
     549,    25,  -408,  -408,   574,   399,   574,   401,    37,    34,
     355,   975,  -408,   358,   380,   364,   975,   939,   147,  -408,
     417,  1294,    37,    37,    37,   429,   975,   574,   164,   975,
     574,   574,   411,   419,   183,  -408,   434,   454,   975,  -408,
      37,   461,    37,  -408,  -408,    17,   447,    37,   448,    37,
     975,    37,   297,  1294,   297,  -408,   410,    37,  1294,    37,
    1294,    37,   975,   328,   466,   975,   574,    37,  1294,    37,
    -408,  1247,   470,   474,   472,   473,   458,   459,   574,   574,
      24,   423,   549,  -408,   450,    37,   975,    37,   975,   115,
     975,  -408,   427,    37,   414,   975,   433,  1294,  -408,    37,
    1294,    37,   975,   485,  -408,   297,   297,   574,   574,   487,
     488,   494,   496,  -408,    16,    37,    37,   497,  1294,   498,
    1294,   115,   297,   297,  -408,   444,  1294,    37,   975,   500,
    1294,    37,  -408,  -408,   502,   503,   574,   574,   297,   297,
     975,   445,   549,    37,    37,  -408,   451,    37,   449,  1294,
      37,   975,   297,   297,   505,   508,  -408,  -408,  1294,    16,
      37,     6,     6,    37,   297,  -408,   455,   975,  1294,  -408,
    -408,   297,   297,   975,   453,  -408,  -408,   297,   457,    37,
    1294,  -408,  -408,  1294,    16,  -408,    37,   297,   975,   297,
     471,  1294,  -408,    37,   297,  -408
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     181,   176,   177,     0,     2,   180,     0,     1,   178,   179,
       0,     0,   136,   124,   130,    92,   126,   125,   173,   173,
     173,   173,   173,   173,   173,     0,     0,   168,     0,   127,
     128,   129,   173,   173,    34,    33,   173,   173,   181,    51,
       0,     0,     0,   120,     0,   181,    37,   112,   113,   114,
     115,   116,    39,    91,   118,    52,   119,   131,   165,   166,
     111,   110,    92,     0,     0,   170,    88,     0,   150,   172,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   173,     0,     0,     0,     0,     0,   181,   181,   181,
      38,   180,    43,   173,   173,   173,   173,   173,   173,   173,
     173,   173,     0,   173,   173,   173,   173,   173,   173,   173,
       0,    94,     0,   173,     0,    87,    89,     0,    88,   171,
     173,   173,   173,     0,     0,   173,   173,     0,   173,     0,
     121,    88,     0,   173,    31,   173,   173,    10,   117,     0,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   152,   153,   154,   155,   156,   157,   158,
     160,   132,   159,     0,     0,   148,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   122,
       0,   173,     0,    88,     0,     0,     3,     4,     5,    42,
     107,   106,    95,    96,   101,   102,   104,   103,   105,   151,
     173,    99,   100,   108,   109,    97,    98,   162,     0,   159,
       0,     0,     0,   173,   173,   123,   149,    93,   173,   173,
     173,   173,   173,     0,   173,     0,     0,   173,   173,     0,
     173,   173,   167,     0,   173,   173,   136,   173,     0,     0,
      30,   173,     9,     0,     0,     0,   173,   133,   161,   134,
       0,     0,     0,     0,     0,     0,     0,    62,     0,     0,
      63,     0,     0,     0,   172,     0,     0,     0,     0,   173,
     173,   173,     0,     0,     0,     0,     0,    32,     0,     0,
       0,    29,     0,     0,     0,   173,   173,     0,   163,     0,
       0,   137,    90,    45,     0,   173,    46,     0,   173,    55,
       0,   173,    57,     0,    64,   173,   173,   173,   173,   173,
       0,    79,    30,     0,     0,     0,   143,   173,   138,   173,
     173,   136,     0,     0,     0,     0,     6,     0,     0,    35,
       0,     0,   164,   135,     0,     0,     0,     0,   173,     0,
      60,     0,    67,     0,     0,     0,     0,     0,     0,    80,
       0,   147,   173,   173,   173,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     0,     0,     0,    83,
     173,    82,   173,    81,   174,   173,     0,   173,     0,   173,
       0,   173,     0,    56,     0,    70,     0,   173,    71,   173,
      59,   173,     0,    11,     0,     0,     0,   173,   142,   173,
     139,     0,    14,    13,     0,     0,     0,     0,     0,     0,
     173,     0,     0,   175,     0,   173,     0,   173,     0,    53,
       0,    61,    65,   173,     0,     0,     0,    72,    12,   173,
     146,   173,     0,     0,   169,     0,     0,     0,     0,     0,
       0,    22,    21,    36,   181,   173,   173,     0,    47,     0,
      48,    54,     0,     0,    78,     0,    58,   173,     0,     0,
     141,   173,    16,    15,    18,    17,     0,     0,     0,     0,
       0,     0,     0,   173,   173,    66,    68,   173,     0,   145,
     173,     0,     0,     0,    26,    25,    24,    23,    84,   181,
     173,     0,     0,   173,     0,    75,     0,     0,   140,    20,
      19,     0,     0,     0,     0,    50,    49,     0,    76,   173,
     144,    28,    27,    86,   181,    69,   173,     0,     0,     0,
      73,    85,    77,   173,     0,    74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -408,  -408,  -408,   430,  -408,  -408,  -408,   198,  -408,    -5,
    -322,  -408,    21,   -35,  -408,  -408,  -408,  -408,  -408,  -408,
    -408,  -407,  -408,  -106,  -333,    -6,   415,  -238,  -408,   278,
    -408,   369,  -408,  -123,   319,  -408,  -159,  -270,  -408,  -408,
    -212,   431,  -408,   501,   -43
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,    39,    40,    41,    42,   291,   292,    43,   293,
     252,    45,     4,    46,    47,    48,   184,   238,    49,    50,
      51,   380,   296,   114,   115,   116,    53,    64,    54,   247,
      55,    68,    56,   170,   171,   218,   172,    57,    58,    59,
      69,   176,   385,     5,     6
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      52,    44,    92,   219,    60,    61,    63,   381,   285,    90,
     -44,    65,   178,     1,   375,   455,     1,     8,   220,     1,
      65,   300,   124,   250,   317,   190,   274,    65,   112,    13,
     119,    14,     7,   267,    16,    17,   228,   119,   234,   217,
      65,   229,   230,   113,   453,   420,    81,   231,    27,    27,
      29,    30,    31,   235,   162,   316,   143,    95,    96,    86,
      97,    98,    99,   100,   101,   382,   318,   319,   391,   126,
      78,   102,   129,   256,   256,   500,   251,   221,   304,   125,
     221,   438,   337,   338,    -8,   144,   142,   248,     2,   381,
     -44,     2,     9,   368,     2,   423,   236,   349,   258,    79,
     108,   109,   383,   384,   305,   271,   308,   199,   139,   140,
     141,    65,   272,  -173,    13,  -173,    14,   182,   352,    16,
      17,   187,    93,    94,    95,    96,   288,    97,    98,    99,
     100,   101,   298,    27,    87,    29,    30,    31,   102,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   162,   381,
     211,   212,   213,   214,   215,   216,   134,    88,   256,    89,
     327,   112,   102,   104,   105,   106,   107,   108,   109,   112,
       8,   135,   307,   227,   342,   401,   328,  -173,   117,    10,
      11,   118,   402,   119,   410,   120,    12,   289,   290,   121,
      66,    13,   123,    14,    67,    15,    16,    17,   122,    18,
      19,   362,    20,    21,    22,    23,   127,    24,    25,    26,
      27,    28,    29,    30,    31,   416,   417,   128,    18,    19,
     130,   386,   131,   388,    34,    35,    24,   372,   373,   270,
      28,   515,   516,   133,    32,    33,    34,    35,    36,   136,
      37,   154,   138,    38,   409,     9,    36,   412,   413,   173,
     175,   177,   183,    32,   301,   302,   303,    36,   306,    37,
     309,   191,   244,   312,    34,    35,   314,   245,   279,   193,
     320,   321,    66,   280,    65,   246,   326,  -173,    99,   100,
     101,   246,   110,   441,   196,    10,    11,   102,   222,   197,
      66,   198,    12,   329,    67,   451,   452,    13,   330,    14,
     363,    15,    16,    17,   210,   364,   331,   223,    20,    21,
      22,    23,   224,   331,    25,    26,    27,   361,    29,    30,
      31,    13,   225,    14,   474,   475,    16,    17,   226,   233,
     374,   237,   241,   239,   242,   254,   311,   249,   255,   276,
      27,    33,    29,    30,    31,   393,   284,   287,   297,    38,
     398,   400,   295,   494,   495,   313,   315,    10,    11,   310,
     408,   322,   110,   411,    12,   256,   332,   333,   334,    13,
     335,    14,   336,    15,    16,    17,   339,    18,    19,   135,
      20,    21,    22,    23,   429,    24,    25,    26,    27,    28,
      29,    30,    31,   344,   346,   369,   437,   370,   371,   440,
     251,   378,   376,   377,    13,   387,    14,   389,   395,    16,
      17,   480,    32,    33,    34,    35,    36,   392,    37,   394,
     458,    38,   460,    27,   461,    29,    30,    31,   397,   466,
      97,    98,    99,   100,   101,   407,   470,   403,    13,   414,
      14,   102,   464,    16,    17,   418,    70,   415,   256,    71,
      72,    73,    74,    75,    76,    77,   513,    27,    80,    29,
      30,    31,   489,    82,    83,   419,  -173,    84,    85,   425,
     427,   433,   439,    13,   498,    14,   445,   505,    16,    17,
     446,   528,   256,   447,   448,   508,   449,   450,   454,   462,
     456,   471,    27,    70,    29,    30,    31,   467,   476,   477,
     478,   520,   479,   483,   484,   487,   490,   523,   492,   493,
     499,   511,   132,   503,   512,   137,   519,   256,   524,   526,
     360,   281,   531,   209,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   533,   155,   156,   157,   158,   159,   160,
     161,   259,     0,     0,   174,     0,    91,     0,     0,     0,
       0,   179,   180,   181,     0,     0,   185,   186,     0,   188,
       0,    10,    11,     0,   192,     0,   194,   195,    12,     0,
       0,     0,     0,    13,     0,    14,     0,    15,    16,    17,
       0,     0,     0,     0,    20,    21,    22,    23,     0,     0,
      25,    26,    27,   162,    29,    30,    31,     0,    93,    94,
      95,    96,     0,    97,    98,    99,   100,   101,     0,     0,
       0,     0,     0,     0,   102,     0,     0,    33,     0,     0,
       0,     0,   243,     0,   379,    38,     0,     0,   163,   164,
     165,   166,   167,   168,   169,   257,     0,     0,     0,   104,
     105,   253,   107,   108,   109,     0,     0,     0,   268,     0,
       0,     0,     0,     0,   260,   261,     0,     0,     0,   262,
     263,   264,   265,   266,     0,   269,     0,     0,   273,   275,
       0,   277,   278,     0,     0,   282,   283,     0,   286,     0,
       0,     0,   294,     0,    65,     0,     0,   299,    93,    94,
      95,    96,     0,    97,    98,    99,   100,   101,     0,     0,
       0,     0,     0,     0,   102,     0,     0,     0,     0,     0,
     323,   324,   325,     0,     0,   343,     0,     0,     0,     0,
     103,     0,     0,     0,     0,   350,   340,   341,   353,   104,
     105,   106,   107,   108,   109,     0,   345,     0,     0,   347,
       0,     0,   351,     0,     0,     0,   354,   355,   356,   357,
     358,     0,     0,     0,     0,     0,     0,     0,   365,     0,
     366,   367,     0,     0,     0,     0,     0,     0,     0,   396,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   390,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   404,   405,   406,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   431,     0,   432,
       0,   421,     0,   422,     0,     0,   424,     0,   426,     0,
     428,     0,   430,     0,     0,     0,     0,     0,   434,     0,
     435,     0,   436,     0,     0,     0,     0,     0,   442,     0,
     443,    95,    96,     0,    97,    98,    99,   100,   101,   465,
       0,     0,     0,     0,     0,   102,   457,     0,   459,     0,
     472,   473,     0,     0,   463,     0,     0,     0,     0,     0,
     468,     0,   469,     0,     0,     0,     0,   485,   486,     0,
     104,   105,     0,     0,   108,   109,   481,   482,     0,     0,
       0,     0,     0,   496,   497,     0,     0,     0,   488,     0,
       0,     0,   491,   506,     0,     0,     0,   509,   510,     0,
       0,     0,     0,     0,   501,   502,     0,     0,   504,   518,
       0,   507,     0,     0,     0,     0,   521,   522,     0,     0,
       0,   514,   525,     0,   517,     0,     0,     0,     0,     0,
       0,     0,   530,     0,   532,     0,     0,     0,     0,   535,
     527,    10,    11,     0,     0,     0,     0,   529,    12,     0,
       0,     0,     0,    13,   534,    14,     0,    15,    16,    17,
       0,     0,     0,     0,    20,    21,    22,    23,     0,     0,
      25,    26,    27,     0,    29,    30,    31,    10,    11,     0,
       0,     0,     0,     0,    12,     0,     0,     0,     0,    13,
       0,    14,   399,    15,    16,    17,     0,    33,     0,     0,
      20,    21,    22,    23,     0,    38,    25,    26,    27,     0,
      29,    30,    31,    10,    11,     0,     0,     0,     0,     0,
      12,     0,     0,     0,     0,    13,     0,    14,     0,    62,
      16,    17,     0,    33,     0,     0,    20,    21,    22,    23,
       0,    38,    25,    26,    27,     0,    29,    30,    31,    93,
      94,    95,    96,     0,    97,    98,    99,   100,   101,     0,
       0,     0,   111,     0,     0,   102,     0,     0,     0,    33,
       0,     0,     0,     0,     0,     0,     0,    38,     0,     0,
       0,   103,     0,     0,     0,     0,     0,     0,     0,     0,
     104,   105,   106,   107,   108,   109,    93,    94,    95,    96,
       0,    97,    98,    99,   100,   101,     0,     0,     0,   189,
       0,     0,   102,    93,    94,    95,    96,     0,    97,    98,
      99,   100,   101,     0,     0,     0,   232,     0,   103,   102,
       0,     0,     0,     0,     0,     0,     0,   104,   105,   106,
     107,   108,   109,     0,     0,   103,     0,     0,     0,     0,
       0,     0,     0,     0,   104,   105,   106,   107,   108,   109,
      93,    94,    95,    96,     0,    97,    98,    99,   100,   101,
       0,     0,     0,   240,     0,     0,   102,     0,     0,     0,
      93,    94,    95,    96,     0,    97,    98,    99,   100,   101,
       0,     0,   103,     0,     0,     0,   102,     0,     0,     0,
       0,   104,   105,   106,   107,   108,   109,   348,     0,     0,
       0,     0,   103,     0,     0,     0,     0,     0,     0,     0,
       0,   104,   105,   106,   107,   108,   109,    93,    94,    95,
      96,     0,    97,    98,    99,   100,   101,     0,     0,     0,
     359,     0,     0,   102,    93,    94,    95,    96,     0,    97,
      98,    99,   100,   101,     0,     0,     0,   444,     0,   103,
     102,     0,     0,     0,     0,     0,     0,     0,   104,   105,
     106,   107,   108,   109,     0,     0,   103,     0,     0,     0,
       0,     0,     0,     0,     0,   104,   105,   106,   107,   108,
     109,    93,    94,    95,    96,     0,    97,    98,    99,   100,
     101,     0,     0,    93,    94,    95,    96,   102,    97,    98,
      99,   100,   101,     0,     0,     0,     0,     0,     0,   102,
       0,     0,     0,   103,     0,     0,     0,     0,     0,     0,
       0,     0,   104,   105,   106,   107,   108,   109,     0,     0,
       0,     0,     0,     0,   104,   105,     0,     0,   108,   109,
      94,    95,    96,     0,    97,    98,    99,   100,   101,     0,
       0,     0,     0,     0,     0,   102,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     104,   105,     0,     0,   108,   109
};

static const yytype_int16 yycheck[] =
{
       6,     6,    45,   162,    10,    11,    12,   340,   246,    44,
       0,     3,   118,     3,   336,   422,     3,     3,     6,     3,
       3,     6,    19,    19,    35,   131,   238,     3,     5,    24,
       3,    26,     0,    28,    29,    30,     6,     3,    20,   162,
       3,    11,     6,    20,    20,   378,    67,    11,    43,    43,
      45,    46,    47,    35,    19,    28,    91,     9,    10,    38,
      12,    13,    14,    15,    16,    40,    77,    78,    34,    75,
      19,    23,    78,    68,    68,   482,    72,    65,    43,    76,
      65,   403,    32,    33,    76,    91,    91,   193,    78,   422,
      77,    78,    78,   331,    78,    78,    78,   309,   221,    19,
      52,    53,    77,    78,   263,    28,   265,   142,    87,    88,
      89,     3,    35,     5,    24,    19,    26,   123,    28,    29,
      30,   127,     7,     8,     9,    10,   249,    12,    13,    14,
      15,    16,   255,    43,    76,    45,    46,    47,    23,   145,
     146,   147,   148,   149,   150,   151,   152,   153,    19,   482,
     156,   157,   158,   159,   160,   161,    28,    76,    68,    76,
     283,     5,    23,    48,    49,    50,    51,    52,    53,     5,
       3,    43,    43,   179,   297,    28,    20,     6,    19,    12,
      13,    19,    35,     3,    20,     6,    19,    32,    33,    28,
      19,    24,    19,    26,    23,    28,    29,    30,    28,    32,
      33,   324,    35,    36,    37,    38,    19,    40,    41,    42,
      43,    44,    45,    46,    47,    32,    33,    71,    32,    33,
      20,   344,    19,   346,    69,    70,    40,    32,    33,   235,
      44,   501,   502,    28,    67,    68,    69,    70,    71,    28,
      73,    28,    77,    76,   367,    78,    71,   370,   371,    28,
      20,    24,    28,    67,   260,   261,   262,    71,   264,    73,
     266,    28,     6,   269,    69,    70,   272,    11,     6,    19,
     276,   277,    19,    11,     3,    19,   282,     6,    14,    15,
      16,    19,    11,   406,    77,    12,    13,    23,    11,    77,
      19,    77,    19,     6,    23,   418,   419,    24,    11,    26,
       6,    28,    29,    30,    76,    11,    19,    65,    35,    36,
      37,    38,     5,    19,    41,    42,    43,   323,    45,    46,
      47,    24,    20,    26,   447,   448,    29,    30,    20,    64,
     335,    28,    28,    38,    20,    20,    63,    21,     5,    19,
      43,    68,    45,    46,    47,   351,    28,    20,    65,    76,
     356,   357,    40,   476,   477,    64,    64,    12,    13,    61,
     366,    19,    11,   369,    19,    68,    22,    28,    28,    24,
       5,    26,    20,    28,    29,    30,    28,    32,    33,    43,
      35,    36,    37,    38,   390,    40,    41,    42,    43,    44,
      45,    46,    47,    21,    21,    19,   402,    11,    11,   405,
      72,    19,    28,    28,    24,     6,    26,     6,    28,    29,
      30,   454,    67,    68,    69,    70,    71,    62,    73,    61,
     426,    76,   428,    43,   430,    45,    46,    47,    64,   435,
      12,    13,    14,    15,    16,     6,   442,    20,    24,    28,
      26,    23,    28,    29,    30,    11,    15,    28,    68,    18,
      19,    20,    21,    22,    23,    24,   499,    43,    27,    45,
      46,    47,   468,    32,    33,    11,     5,    36,    37,    22,
      22,    61,     6,    24,   480,    26,     6,    28,    29,    30,
       6,   524,    68,    11,    11,   491,    28,    28,    65,    62,
      40,     6,    43,    62,    45,    46,    47,    64,    11,    11,
       6,   507,     6,     6,     6,    61,     6,   513,     6,     6,
      65,     6,    81,    62,     6,    85,    61,    68,    65,    62,
     322,   243,   528,   154,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    62,   103,   104,   105,   106,   107,   108,
     109,   222,    -1,    -1,   113,    -1,    45,    -1,    -1,    -1,
      -1,   120,   121,   122,    -1,    -1,   125,   126,    -1,   128,
      -1,    12,    13,    -1,   133,    -1,   135,   136,    19,    -1,
      -1,    -1,    -1,    24,    -1,    26,    -1,    28,    29,    30,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    42,    43,    19,    45,    46,    47,    -1,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    68,    -1,    -1,
      -1,    -1,   191,    -1,    75,    76,    -1,    -1,    54,    55,
      56,    57,    58,    59,    60,   220,    -1,    -1,    -1,    48,
      49,   210,    51,    52,    53,    -1,    -1,    -1,   233,    -1,
      -1,    -1,    -1,    -1,   223,   224,    -1,    -1,    -1,   228,
     229,   230,   231,   232,    -1,   234,    -1,    -1,   237,   238,
      -1,   240,   241,    -1,    -1,   244,   245,    -1,   247,    -1,
      -1,    -1,   251,    -1,     3,    -1,    -1,   256,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
     279,   280,   281,    -1,    -1,   300,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    -1,   310,   295,   296,   313,    48,
      49,    50,    51,    52,    53,    -1,   305,    -1,    -1,   308,
      -1,    -1,   311,    -1,    -1,    -1,   315,   316,   317,   318,
     319,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,
     329,   330,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   354,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   348,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   362,   363,   364,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   392,    -1,   394,
      -1,   380,    -1,   382,    -1,    -1,   385,    -1,   387,    -1,
     389,    -1,   391,    -1,    -1,    -1,    -1,    -1,   397,    -1,
     399,    -1,   401,    -1,    -1,    -1,    -1,    -1,   407,    -1,
     409,     9,    10,    -1,    12,    13,    14,    15,    16,   434,
      -1,    -1,    -1,    -1,    -1,    23,   425,    -1,   427,    -1,
     445,   446,    -1,    -1,   433,    -1,    -1,    -1,    -1,    -1,
     439,    -1,   441,    -1,    -1,    -1,    -1,   462,   463,    -1,
      48,    49,    -1,    -1,    52,    53,   455,   456,    -1,    -1,
      -1,    -1,    -1,   478,   479,    -1,    -1,    -1,   467,    -1,
      -1,    -1,   471,   488,    -1,    -1,    -1,   492,   493,    -1,
      -1,    -1,    -1,    -1,   483,   484,    -1,    -1,   487,   504,
      -1,   490,    -1,    -1,    -1,    -1,   511,   512,    -1,    -1,
      -1,   500,   517,    -1,   503,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   527,    -1,   529,    -1,    -1,    -1,    -1,   534,
     519,    12,    13,    -1,    -1,    -1,    -1,   526,    19,    -1,
      -1,    -1,    -1,    24,   533,    26,    -1,    28,    29,    30,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    42,    43,    -1,    45,    46,    47,    12,    13,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    24,
      -1,    26,    63,    28,    29,    30,    -1,    68,    -1,    -1,
      35,    36,    37,    38,    -1,    76,    41,    42,    43,    -1,
      45,    46,    47,    12,    13,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    24,    -1,    26,    -1,    28,
      29,    30,    -1,    68,    -1,    -1,    35,    36,    37,    38,
      -1,    76,    41,    42,    43,    -1,    45,    46,    47,     7,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    -1,
      -1,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    -1,    -1,    -1,    20,
      -1,    -1,    23,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    -1,    -1,    -1,    20,    -1,    39,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
       7,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      -1,    -1,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,
       7,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      -1,    -1,    39,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    34,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,     7,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      20,    -1,    -1,    23,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    20,    -1,    39,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,     7,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    -1,    -1,     7,     8,     9,    10,    23,    12,    13,
      14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    52,    53,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    52,    53
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    78,    80,    91,   122,   123,     0,     3,    78,
      12,    13,    19,    24,    26,    28,    29,    30,    32,    33,
      35,    36,    37,    38,    40,    41,    42,    43,    44,    45,
      46,    47,    67,    68,    69,    70,    71,    73,    76,    81,
      82,    83,    84,    87,    88,    90,    92,    93,    94,    97,
      98,    99,   104,   105,   107,   109,   111,   116,   117,   118,
     104,   104,    28,   104,   106,     3,    19,    23,   110,   119,
     120,   120,   120,   120,   120,   120,   120,   120,    19,    19,
     120,    67,   120,   120,   120,   120,    91,    76,    76,    76,
      92,   122,   123,     7,     8,     9,    10,    12,    13,    14,
      15,    16,    23,    39,    48,    49,    50,    51,    52,    53,
      11,    20,     5,    20,   102,   103,   104,    19,    19,     3,
       6,    28,    28,    19,    19,    76,   104,    19,    71,   104,
      20,    19,   120,    28,    28,    43,    28,    82,    77,    91,
      91,    91,    88,    92,   104,   120,   120,   120,   120,   120,
     120,   120,   120,   120,    28,   120,   120,   120,   120,   120,
     120,   120,    19,    54,    55,    56,    57,    58,    59,    60,
     112,   113,   115,    28,   120,    20,   120,    24,   102,   120,
     120,   120,   104,    28,    95,   120,   120,   104,   120,    20,
     102,    28,   120,    19,   120,   120,    77,    77,    77,    92,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   110,
      76,   104,   104,   104,   104,   104,   104,   112,   114,   115,
       6,    65,    11,    65,     5,    20,    20,   104,     6,    11,
       6,    11,    20,    64,    20,    35,    78,    28,    96,    38,
      20,    28,    20,   120,     6,    11,    19,   108,   102,    21,
      19,    72,    89,   120,    20,     5,    68,   105,   112,   113,
     120,   120,   120,   120,   120,   120,   120,    28,   105,   120,
     104,    28,    35,   120,   119,   120,    19,   120,   120,     6,
      11,   108,   120,   120,    28,   106,   120,    20,   112,    32,
      33,    85,    86,    88,   120,    40,   101,    65,   112,   120,
       6,   104,   104,   104,    43,   115,   104,    43,   115,   104,
      61,    63,   104,    64,   104,    64,    28,    35,    77,    78,
     104,   104,    19,   120,   120,   120,   104,   112,    20,     6,
      11,    19,    22,    28,    28,     5,    20,    32,    33,    28,
     120,   120,   112,   105,    21,   120,    21,   120,    34,   119,
     105,   120,    28,   105,   120,   120,   120,   120,   120,    20,
      86,   104,   112,     6,    11,   120,   120,   120,   106,    19,
      11,    11,    32,    33,    88,    89,    28,    28,    19,    75,
     100,   103,    40,    77,    78,   121,   112,     6,   112,     6,
     120,    34,    62,   104,    61,    28,   105,    64,   104,    63,
     104,    28,    35,    20,   120,   120,   120,     6,   104,   112,
      20,   104,   112,   112,    28,    28,    32,    33,    11,    11,
     103,   120,   120,    78,   120,    22,   120,    22,   120,   104,
     120,   105,   105,    61,   120,   120,   120,   104,    89,     6,
     104,   112,   120,   120,    20,     6,     6,    11,    11,    28,
      28,   112,   112,    20,    65,   100,    40,   120,   104,   120,
     104,   104,    62,   120,    28,   105,   104,    64,   120,   120,
     104,     6,   105,   105,   112,   112,    11,    11,     6,     6,
     123,   120,   120,     6,     6,   105,   105,    61,   120,   104,
       6,   120,     6,     6,   112,   112,   105,   105,   104,    65,
     100,   120,   120,    62,   120,    28,   105,   120,   104,   105,
     105,     6,     6,   123,   120,   116,   116,   120,   105,    61,
     104,   105,   105,   104,    65,   105,    62,   120,   123,   120,
     105,   104,   105,    62,   120,   105
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
     109,   109,   109,   109,   109,   109,   109,   109,   110,   110,
     111,   111,   112,   112,   112,   112,   112,   112,   112,   112,
     113,   113,   114,   114,   115,   116,   116,   117,   117,   118,
     119,   119,   120,   120,   121,   121,   122,   122,   122,   122,
     123,   123
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
       1,     1,     3,     5,     5,     7,     0,     7,     3,     5,
      13,    11,     9,     7,    14,    12,    10,     8,     3,     4,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     5,     1,     1,     5,     1,    10,
       1,     2,     1,     0,     1,     2,     1,     1,     2,     2,
       1,     0
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
#line 130 "parser.y"
                            {(yyval.tree) = (yyvsp[0].tree); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2230 "parser.tab.c"
    break;

  case 3: /* class: class_header '{' statement_expr_list_e '}'  */
#line 137 "parser.y"
                                                 { (yyval.tree) = mk_class((yyvsp[-3].tree),(yyvsp[-1].tree)); }
#line 2236 "parser.tab.c"
    break;

  case 6: /* class_header: CLASS endlOpt IDENTIFIER endlOpt '(' class_params_e ')'  */
#line 143 "parser.y"
                                                              { (yyval.tree) = mk_class_header(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-1].tree)); }
#line 2242 "parser.tab.c"
    break;

  case 7: /* class_header: CLASS endlOpt IDENTIFIER endlOpt '(' class_params_e ')' inheritance  */
#line 144 "parser.y"
                                                                         { (yyval.tree) = mk_class_header_inheritance(mk_ident_lit((yyvsp[-5].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 2248 "parser.tab.c"
    break;

  case 8: /* class_header: CLASS endlOpt IDENTIFIER  */
#line 145 "parser.y"
                               { (yyval.tree) = mk_class_header_identifierOnly(mk_ident_lit((yyvsp[0].str_value))); }
#line 2254 "parser.tab.c"
    break;

  case 9: /* class_header: CLASS endlOpt IDENTIFIER endlOpt inheritance  */
#line 146 "parser.y"
                                                   { (yyval.tree) = mk_class_header_inheritance_identifier(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree)); }
#line 2260 "parser.tab.c"
    break;

  case 13: /* class_params: VAR IDENTIFIER ':' type  */
#line 161 "parser.y"
                              { (yyval.tree) = add_to_list(mk_list(),mk_class_params_var(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2266 "parser.tab.c"
    break;

  case 14: /* class_params: VAL IDENTIFIER ':' type  */
#line 162 "parser.y"
                              { (yyval.tree) = add_to_list(mk_list(),mk_class_params_val(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2272 "parser.tab.c"
    break;

  case 15: /* class_params: VAR IDENTIFIER ':' type '=' const  */
#line 163 "parser.y"
                                        { (yyval.tree) = add_to_list(mk_list(),mk_class_params_var_const(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2278 "parser.tab.c"
    break;

  case 16: /* class_params: VAL IDENTIFIER ':' type '=' const  */
#line 164 "parser.y"
                                        { (yyval.tree) = add_to_list(mk_list(),mk_class_params_val_const(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2284 "parser.tab.c"
    break;

  case 17: /* class_params: class_params ',' VAR IDENTIFIER ':' type  */
#line 165 "parser.y"
                                               { (yyval.tree) = add_to_list((yyvsp[-5].tree),mk_class_params_var(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2290 "parser.tab.c"
    break;

  case 18: /* class_params: class_params ',' VAL IDENTIFIER ':' type  */
#line 166 "parser.y"
                                               { (yyval.tree) = add_to_list((yyvsp[-5].tree),mk_class_params_var(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2296 "parser.tab.c"
    break;

  case 19: /* class_params: class_params ',' VAR IDENTIFIER ':' type '=' const  */
#line 167 "parser.y"
                                                         { (yyval.tree) = add_to_list((yyvsp[-7].tree),mk_class_params_var_const(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2302 "parser.tab.c"
    break;

  case 20: /* class_params: class_params ',' VAL IDENTIFIER ':' type '=' const  */
#line 168 "parser.y"
                                                         { (yyval.tree) = add_to_list((yyvsp[-7].tree),mk_class_params_val_const(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2308 "parser.tab.c"
    break;

  case 21: /* class_params: visibility_modifier VAR IDENTIFIER ':' type  */
#line 169 "parser.y"
                                                   { (yyval.tree) = add_to_list(mk_list(),mk_class_params_var_vis_mod((yyvsp[-4].tree),mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2314 "parser.tab.c"
    break;

  case 22: /* class_params: visibility_modifier VAL IDENTIFIER ':' type  */
#line 170 "parser.y"
                                                   { (yyval.tree) = add_to_list(mk_list(),mk_class_params_val_vis_mod((yyvsp[-4].tree),mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2320 "parser.tab.c"
    break;

  case 23: /* class_params: visibility_modifier VAR IDENTIFIER ':' type '=' const  */
#line 171 "parser.y"
                                                            { (yyval.tree) = add_to_list(mk_list(),mk_class_params_var_const_vis_mod((yyvsp[-6].tree),mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2326 "parser.tab.c"
    break;

  case 24: /* class_params: visibility_modifier VAL IDENTIFIER ':' type '=' const  */
#line 172 "parser.y"
                                                            { (yyval.tree) = add_to_list(mk_list(),mk_class_params_val_const_vis_mod((yyvsp[-6].tree),mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2332 "parser.tab.c"
    break;

  case 25: /* class_params: class_params ',' visibility_modifier VAR IDENTIFIER ':' type  */
#line 173 "parser.y"
                                                                   { (yyval.tree) = add_to_list((yyvsp[-6].tree),mk_class_params_var_vis_mod((yyvsp[-4].tree),mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2338 "parser.tab.c"
    break;

  case 26: /* class_params: class_params ',' visibility_modifier VAL IDENTIFIER ':' type  */
#line 174 "parser.y"
                                                                   { (yyval.tree) = add_to_list((yyvsp[-6].tree),mk_class_params_val_vis_mod((yyvsp[-4].tree),mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2344 "parser.tab.c"
    break;

  case 27: /* class_params: class_params ',' visibility_modifier VAR IDENTIFIER ':' type '=' const  */
#line 175 "parser.y"
                                                                             { (yyval.tree) = add_to_list((yyvsp[-8].tree),mk_class_params_var_const_vis_mod((yyvsp[-6].tree),mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2350 "parser.tab.c"
    break;

  case 28: /* class_params: class_params ',' visibility_modifier VAL IDENTIFIER ':' type '=' const  */
#line 176 "parser.y"
                                                                             { (yyval.tree) = add_to_list((yyvsp[-8].tree),mk_class_params_var_const_vis_mod((yyvsp[-6].tree),mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2356 "parser.tab.c"
    break;

  case 29: /* class_params_e: class_params  */
#line 180 "parser.y"
                   {(yyval.tree) = (yyvsp[0].tree);}
#line 2362 "parser.tab.c"
    break;

  case 30: /* class_params_e: %empty  */
#line 181 "parser.y"
                    { (yyval.tree) = mk_empty();}
#line 2368 "parser.tab.c"
    break;

  case 33: /* visibility_modifier: PRIVATE  */
#line 199 "parser.y"
               {(yyval.tree) = mk_visibility_modifier((char*)"private");}
#line 2374 "parser.tab.c"
    break;

  case 34: /* visibility_modifier: PROTECTED  */
#line 200 "parser.y"
                {(yyval.tree) = mk_visibility_modifier((char*)"protected");}
#line 2380 "parser.tab.c"
    break;

  case 35: /* inheritance: EXTENDS endlOpt IDENTIFIER  */
#line 208 "parser.y"
                                 { (yyval.tree) = mk_inheritance(mk_ident_lit((yyvsp[0].str_value)));}
#line 2386 "parser.tab.c"
    break;

  case 36: /* inheritance: EXTENDS endlOpt IDENTIFIER '(' expr_list ')'  */
#line 209 "parser.y"
                                                 { (yyval.tree) = mk_inheritance_expr(mk_ident_lit((yyvsp[-3].str_value)),(yyvsp[-1].tree));}
#line 2392 "parser.tab.c"
    break;

  case 37: /* statement_expr_list: statement  */
#line 217 "parser.y"
                { (yyval.tree) = add_to_list(mk_list(),(yyvsp[0].tree));}
#line 2398 "parser.tab.c"
    break;

  case 38: /* statement_expr_list: visibility_modifier statement  */
#line 218 "parser.y"
                                    { (yyval.tree) = add_to_list(mk_list(), mk_visibility_modifier_stmt((yyvsp[-1].tree), (yyvsp[0].tree)));}
#line 2404 "parser.tab.c"
    break;

  case 39: /* statement_expr_list: expr  */
#line 219 "parser.y"
           { (yyval.tree) = add_to_list(mk_list(),(yyvsp[0].tree));}
#line 2410 "parser.tab.c"
    break;

  case 40: /* statement_expr_list: statement_expr_list separator_List statement  */
#line 220 "parser.y"
                                                    {  (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 2416 "parser.tab.c"
    break;

  case 41: /* statement_expr_list: statement_expr_list separator_List expr  */
#line 221 "parser.y"
                                               {   (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree));  }
#line 2422 "parser.tab.c"
    break;

  case 42: /* statement_expr_list: statement_expr_list separator_List visibility_modifier statement  */
#line 222 "parser.y"
                                                                        { (yyval.tree) = add_to_list((yyvsp[-3].tree), mk_visibility_modifier_stmt((yyvsp[-1].tree), (yyvsp[0].tree))); }
#line 2428 "parser.tab.c"
    break;

  case 43: /* statement_expr_list_e: separator_List_e statement_expr_list separator_List_e  */
#line 226 "parser.y"
                                                            {(yyval.tree) = mk_stmt_expr_list((yyvsp[-1].tree));}
#line 2434 "parser.tab.c"
    break;

  case 44: /* statement_expr_list_e: %empty  */
#line 227 "parser.y"
                     { (yyval.tree) = mk_empty();}
#line 2440 "parser.tab.c"
    break;

  case 45: /* statement: VAL endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 231 "parser.y"
                                                       {(yyval.tree) = mk_declaration_val(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[0].tree));}
#line 2446 "parser.tab.c"
    break;

  case 46: /* statement: VAR endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 232 "parser.y"
                                                       {(yyval.tree) = mk_declaration_var(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[0].tree));}
#line 2452 "parser.tab.c"
    break;

  case 47: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 233 "parser.y"
                                                                                           {(yyval.tree) = mk_declaration_val_type(mk_ident_lit((yyvsp[-8].str_value)),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2458 "parser.tab.c"
    break;

  case 48: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 234 "parser.y"
                                                                                           {(yyval.tree) = mk_declaration_var_type(mk_ident_lit((yyvsp[-8].str_value)),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2464 "parser.tab.c"
    break;

  case 49: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt ARRAY '[' type ']' endlOpt '=' endlOpt array  */
#line 235 "parser.y"
                                                                                              {(yyval.tree) = mk_declaration_var_array(mk_ident_lit((yyvsp[-11].str_value)),(yyvsp[-5].tree),(yyvsp[0].tree));}
#line 2470 "parser.tab.c"
    break;

  case 50: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt ARRAY '[' type ']' endlOpt '=' endlOpt array  */
#line 236 "parser.y"
                                                                                              {(yyval.tree) = mk_declaration_val_array(mk_ident_lit((yyvsp[-11].str_value)),(yyvsp[-5].tree),(yyvsp[0].tree));}
#line 2476 "parser.tab.c"
    break;

  case 51: /* statement: class  */
#line 237 "parser.y"
            { printf("Class:\n"); }
#line 2482 "parser.tab.c"
    break;

  case 52: /* statement: method  */
#line 238 "parser.y"
             {(yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); }
#line 2488 "parser.tab.c"
    break;

  case 53: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr ELSE endlOpt expr  */
#line 247 "parser.y"
                                                                           { (yyval.tree) = mk_if_else_expr((yyvsp[-6].tree), (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2494 "parser.tab.c"
    break;

  case 54: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr endlList ELSE endlOpt expr  */
#line 248 "parser.y"
                                                                                    { (yyval.tree) = mk_if_else_expr((yyvsp[-7].tree), (yyvsp[-4].tree), (yyvsp[0].tree)); }
#line 2500 "parser.tab.c"
    break;

  case 55: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr  */
#line 249 "parser.y"
                                                      { (yyval.tree) = mk_if_expr((yyvsp[-3].tree), (yyvsp[0].tree));}
#line 2506 "parser.tab.c"
    break;

  case 56: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt YIELD endlOpt expr  */
#line 257 "parser.y"
                                                                                                                          { (yyval.tree) = mk_for_expr((yyvsp[-5].tree), (yyvsp[0].tree));  }
#line 2512 "parser.tab.c"
    break;

  case 57: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt expr  */
#line 258 "parser.y"
                                                                                                             { (yyval.tree) = mk_for_expr((yyvsp[-3].tree), (yyvsp[0].tree));  }
#line 2518 "parser.tab.c"
    break;

  case 58: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt YIELD endlOpt expr  */
#line 259 "parser.y"
                                                                                                                                           { (yyval.tree) = mk_for_expr((yyvsp[-6].tree), (yyvsp[0].tree));  }
#line 2524 "parser.tab.c"
    break;

  case 59: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt expr  */
#line 260 "parser.y"
                                                                                                                              { (yyval.tree) = mk_for_expr((yyvsp[-4].tree), (yyvsp[0].tree));  }
#line 2530 "parser.tab.c"
    break;

  case 60: /* generators_and_conditions_parentheses_List: IDENTIFIER GENERATOR_OPERATOR const TO const  */
#line 265 "parser.y"
                                                        {(yyval.tree) = add_to_list(mk_list(),  mk_generator_without_by(mk_ident_lit((yyvsp[-4].str_value)), (yyvsp[-2].tree), (yyvsp[0].tree))); }
#line 2536 "parser.tab.c"
    break;

  case 61: /* generators_and_conditions_parentheses_List: IDENTIFIER GENERATOR_OPERATOR const TO const BY const  */
#line 266 "parser.y"
                                                                {(yyval.tree) = add_to_list(mk_list(),  mk_generator_with_by(mk_ident_lit((yyvsp[-6].str_value)), (yyvsp[-4].tree), (yyvsp[-2].tree), (yyvsp[0].tree))); }
#line 2542 "parser.tab.c"
    break;

  case 62: /* generators_and_conditions_parentheses_List: IDENTIFIER GENERATOR_OPERATOR IDENTIFIER  */
#line 267 "parser.y"
                                                   {(yyval.tree) = add_to_list(mk_list(), mk_generator_without_to_and_by(mk_ident_lit((yyvsp[-2].str_value)),mk_ident_lit((yyvsp[0].str_value)))); }
#line 2548 "parser.tab.c"
    break;

  case 63: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List IF expr  */
#line 268 "parser.y"
                                                             { (yyval.tree) = add_to_list((yyvsp[-2].tree), mk_if_cond((yyvsp[0].tree))); }
#line 2554 "parser.tab.c"
    break;

  case 64: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List ';' IF expr  */
#line 269 "parser.y"
                                                                 { (yyval.tree) = add_to_list((yyvsp[-3].tree), mk_if_cond((yyvsp[0].tree))); }
#line 2560 "parser.tab.c"
    break;

  case 65: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List ';' IDENTIFIER GENERATOR_OPERATOR const TO const  */
#line 270 "parser.y"
                                                                                                      { (yyval.tree) = add_to_list((yyvsp[-6].tree), mk_generator_without_by(mk_ident_lit((yyvsp[-4].str_value)), (yyvsp[-2].tree), (yyvsp[0].tree)));}
#line 2566 "parser.tab.c"
    break;

  case 66: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List ';' IDENTIFIER GENERATOR_OPERATOR const TO const BY const  */
#line 271 "parser.y"
                                                                                                               { (yyval.tree) = add_to_list((yyvsp[-8].tree), mk_generator_with_by(mk_ident_lit((yyvsp[-6].str_value)), (yyvsp[-4].tree), (yyvsp[-2].tree), (yyvsp[0].tree)));}
#line 2572 "parser.tab.c"
    break;

  case 67: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List ';' IDENTIFIER GENERATOR_OPERATOR IDENTIFIER  */
#line 272 "parser.y"
                                                                                                  { (yyval.tree) = add_to_list((yyvsp[-4].tree), mk_generator_without_to_and_by(mk_ident_lit((yyvsp[-2].str_value)), mk_ident_lit((yyvsp[0].str_value)))); }
#line 2578 "parser.tab.c"
    break;

  case 68: /* generators_and_conditions_curly_braces_List: IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt const TO endlOpt const  */
#line 276 "parser.y"
                                                                               {(yyval.tree) = add_to_list(mk_list(),  mk_generator_without_by(mk_ident_lit((yyvsp[-7].str_value)), (yyvsp[-3].tree), (yyvsp[0].tree))); }
#line 2584 "parser.tab.c"
    break;

  case 69: /* generators_and_conditions_curly_braces_List: IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt const TO endlOpt const BY endlOpt const  */
#line 277 "parser.y"
                                                                                                {(yyval.tree) = add_to_list(mk_list(),  mk_generator_with_by(mk_ident_lit((yyvsp[-10].str_value)), (yyvsp[-6].tree), (yyvsp[-3].tree), (yyvsp[0].tree)));}
#line 2590 "parser.tab.c"
    break;

  case 70: /* generators_and_conditions_curly_braces_List: IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt IDENTIFIER  */
#line 278 "parser.y"
                                                                   {(yyval.tree) = add_to_list(mk_list(), mk_generator_without_to_and_by(mk_ident_lit((yyvsp[-4].str_value)),mk_ident_lit((yyvsp[0].str_value)))); }
#line 2596 "parser.tab.c"
    break;

  case 71: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlOpt IF endlOpt expr  */
#line 279 "parser.y"
                                                                              { (yyval.tree) = add_to_list((yyvsp[-4].tree), mk_if_cond((yyvsp[0].tree)));}
#line 2602 "parser.tab.c"
    break;

  case 72: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlOpt ';' endlOpt IF expr  */
#line 280 "parser.y"
                                                                                  { (yyval.tree) = add_to_list((yyvsp[-5].tree), mk_if_cond((yyvsp[0].tree))); }
#line 2608 "parser.tab.c"
    break;

  case 73: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlOpt ';' endlOpt IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt const TO endlOpt const  */
#line 281 "parser.y"
                                                                                                                                               { (yyval.tree) = add_to_list((yyvsp[-11].tree), mk_generator_without_by(mk_ident_lit((yyvsp[-7].str_value)), (yyvsp[-3].tree), (yyvsp[0].tree))); }
#line 2614 "parser.tab.c"
    break;

  case 74: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlOpt ';' endlOpt IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt const TO endlOpt const BY endlOpt const  */
#line 282 "parser.y"
                                                                                                                                                                { (yyval.tree) = add_to_list((yyvsp[-14].tree), mk_generator_with_by(mk_ident_lit((yyvsp[-10].str_value)), (yyvsp[-6].tree), (yyvsp[-3].tree), (yyvsp[0].tree))); }
#line 2620 "parser.tab.c"
    break;

  case 75: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlOpt ';' endlOpt IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt IDENTIFIER  */
#line 283 "parser.y"
                                                                                                                                   { (yyval.tree) = add_to_list((yyvsp[-8].tree), mk_generator_without_to_and_by(mk_ident_lit((yyvsp[-4].str_value)), mk_ident_lit((yyvsp[0].str_value))));}
#line 2626 "parser.tab.c"
    break;

  case 76: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlList IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt const TO endlOpt const  */
#line 284 "parser.y"
                                                                                                                                    {(yyval.tree) = add_to_list(mk_list(),  mk_generator_without_by(mk_ident_lit((yyvsp[-7].str_value)), (yyvsp[-3].tree), (yyvsp[0].tree)));}
#line 2632 "parser.tab.c"
    break;

  case 77: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlList IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt const TO endlOpt const BY endlOpt const  */
#line 285 "parser.y"
                                                                                                                                                     {(yyval.tree) = add_to_list(mk_list(),  mk_generator_with_by(mk_ident_lit((yyvsp[-10].str_value)), (yyvsp[-6].tree), (yyvsp[-3].tree), (yyvsp[0].tree))); }
#line 2638 "parser.tab.c"
    break;

  case 78: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlList IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt IDENTIFIER  */
#line 286 "parser.y"
                                                                                                                        {(yyval.tree) = add_to_list(mk_list(), mk_generator_without_to_and_by(mk_ident_lit((yyvsp[-4].str_value)),mk_ident_lit((yyvsp[0].str_value)))); }
#line 2644 "parser.tab.c"
    break;

  case 79: /* while_expr: WHILE endlOpt '(' expr ')' endlOpt expr  */
#line 292 "parser.y"
                                                              { (yyval.tree) = mk_while_expr((yyvsp[-3].tree),(yyvsp[0].tree)); }
#line 2650 "parser.tab.c"
    break;

  case 80: /* do_while_expr: DO endlOpt expr endlOpt WHILE '(' expr ')'  */
#line 296 "parser.y"
                                                                 { (yyval.tree) = mk_do_while_expr((yyvsp[-5].tree),(yyvsp[-1].tree)); }
#line 2656 "parser.tab.c"
    break;

  case 81: /* match_expr: expr MATCH endlOpt '{' endlOpt case_list endlOpt '}'  */
#line 302 "parser.y"
                                                              {(yyval.tree) = mk_match_expr((yyvsp[-7].tree),(yyvsp[-2].tree));}
#line 2662 "parser.tab.c"
    break;

  case 82: /* case_condition: expr_list  */
#line 307 "parser.y"
                                          {(yyval.tree) = add_case_condition((yyvsp[0].tree));}
#line 2668 "parser.tab.c"
    break;

  case 83: /* case_condition: CASE_PATTERN  */
#line 308 "parser.y"
                       {(yyval.tree) = add_case_condition((yyvsp[0].tree));}
#line 2674 "parser.tab.c"
    break;

  case 84: /* case_list: CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 314 "parser.y"
                                                                                         {(yyval.tree) = mk_list();(yyval.tree) = add_alt_case((yyval.tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2680 "parser.tab.c"
    break;

  case 85: /* case_list: case_list endlOpt semicolonList endlOpt CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 315 "parser.y"
                                                                                                                                 {(yyval.tree) = add_alt_case((yyvsp[-10].tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2686 "parser.tab.c"
    break;

  case 86: /* case_list: case_list endlOpt CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 316 "parser.y"
                                                                                                           {(yyval.tree) = add_alt_case((yyvsp[-8].tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2692 "parser.tab.c"
    break;

  case 87: /* expr_list_e: expr_list  */
#line 326 "parser.y"
                   { printf("PARSER found expr_list - expr_list\n"); }
#line 2698 "parser.tab.c"
    break;

  case 88: /* expr_list_e: %empty  */
#line 327 "parser.y"
                     {  (yyval.tree) = mk_list();}
#line 2704 "parser.tab.c"
    break;

  case 89: /* expr_list: expr  */
#line 332 "parser.y"
                      { (yyval.tree) = add_to_list(mk_list(), (yyvsp[0].tree));}
#line 2710 "parser.tab.c"
    break;

  case 90: /* expr_list: expr_list endlOpt ',' endlOpt expr  */
#line 333 "parser.y"
                                          { (yyval.tree) = add_to_list((yyvsp[-4].tree), (yyvsp[0].tree)); }
#line 2716 "parser.tab.c"
    break;

  case 91: /* expr: const  */
#line 338 "parser.y"
             {printf("PARSER found expr - const\n"); }
#line 2722 "parser.tab.c"
    break;

  case 92: /* expr: IDENTIFIER  */
#line 339 "parser.y"
                                       {(yyval.tree) = mk_ident_lit((yyvsp[0].str_value)); }
#line 2728 "parser.tab.c"
    break;

  case 93: /* expr: IDENTIFIER endlOpt '=' endlOpt expr  */
#line 340 "parser.y"
                                          { printf("Assignment:\n"); }
#line 2734 "parser.tab.c"
    break;

  case 94: /* expr: '(' expr ')'  */
#line 341 "parser.y"
                   { printf("PARSER found expr - ( expr ) \n"); }
#line 2740 "parser.tab.c"
    break;

  case 95: /* expr: expr '>' endlOpt expr  */
#line 342 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) ">", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2746 "parser.tab.c"
    break;

  case 96: /* expr: expr '<' endlOpt expr  */
#line 343 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "<", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2752 "parser.tab.c"
    break;

  case 97: /* expr: expr MORE_OR_EQUAL_OPERATOR endlOpt expr  */
#line 344 "parser.y"
                                               { (yyval.tree) = mk_bin_op((char*) ">=", (yyvsp[-3].tree), (yyvsp[0].tree));  }
#line 2758 "parser.tab.c"
    break;

  case 98: /* expr: expr LESS_OR_EQUAL_OPERATOR endlOpt expr  */
#line 345 "parser.y"
                                               { (yyval.tree) = mk_bin_op((char*) "<=", (yyvsp[-3].tree), (yyvsp[0].tree));  }
#line 2764 "parser.tab.c"
    break;

  case 99: /* expr: expr EQ endlOpt expr  */
#line 346 "parser.y"
                           { (yyval.tree) = mk_bin_op((char*) "==", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2770 "parser.tab.c"
    break;

  case 100: /* expr: expr NEQ endlOpt expr  */
#line 347 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "!=", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2776 "parser.tab.c"
    break;

  case 101: /* expr: expr '+' endlOpt expr  */
#line 348 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "+", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2782 "parser.tab.c"
    break;

  case 102: /* expr: expr '-' endlOpt expr  */
#line 349 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "-", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2788 "parser.tab.c"
    break;

  case 103: /* expr: expr '/' endlOpt expr  */
#line 350 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "/", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2794 "parser.tab.c"
    break;

  case 104: /* expr: expr '*' endlOpt expr  */
#line 351 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "*", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2800 "parser.tab.c"
    break;

  case 105: /* expr: expr '%' endlOpt expr  */
#line 352 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "%", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2806 "parser.tab.c"
    break;

  case 106: /* expr: expr '&' endlOpt expr  */
#line 353 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "&", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2812 "parser.tab.c"
    break;

  case 107: /* expr: expr '|' endlOpt expr  */
#line 354 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "|", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2818 "parser.tab.c"
    break;

  case 108: /* expr: expr KW_OR endlOpt expr  */
#line 355 "parser.y"
                              { (yyval.tree) = mk_bin_op((char*) "||", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2824 "parser.tab.c"
    break;

  case 109: /* expr: expr KW_AND endlOpt expr  */
#line 356 "parser.y"
                               { (yyval.tree) = mk_bin_op((char*) "&&", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2830 "parser.tab.c"
    break;

  case 110: /* expr: '-' expr  */
#line 357 "parser.y"
                             { (yyval.tree) = mk_unary_op("unary_minus_op", (yyvsp[0].tree)); }
#line 2836 "parser.tab.c"
    break;

  case 111: /* expr: '+' expr  */
#line 358 "parser.y"
                            { (yyval.tree) = mk_unary_op("unary_plus_op", (yyvsp[0].tree)); }
#line 2842 "parser.tab.c"
    break;

  case 112: /* expr: if_else_expr  */
#line 359 "parser.y"
                   {(yyval.tree)=(yyvsp[0].tree);}
#line 2848 "parser.tab.c"
    break;

  case 113: /* expr: for_expr  */
#line 360 "parser.y"
               { printf("PARSER found expr - for_expr\n"); }
#line 2854 "parser.tab.c"
    break;

  case 114: /* expr: while_expr  */
#line 361 "parser.y"
                 {(yyval.tree)=(yyvsp[0].tree);}
#line 2860 "parser.tab.c"
    break;

  case 115: /* expr: do_while_expr  */
#line 362 "parser.y"
                    {(yyval.tree)=(yyvsp[0].tree);}
#line 2866 "parser.tab.c"
    break;

  case 116: /* expr: match_expr  */
#line 363 "parser.y"
                 {(yyval.tree)=(yyvsp[0].tree);}
#line 2872 "parser.tab.c"
    break;

  case 117: /* expr: '{' statement_expr_list_e '}'  */
#line 364 "parser.y"
                                    { (yyval.tree) = (yyvsp[-1].tree); }
#line 2878 "parser.tab.c"
    break;

  case 118: /* expr: anonymous_func  */
#line 365 "parser.y"
                     { (yyval.tree)=(yyvsp[0].tree); }
#line 2884 "parser.tab.c"
    break;

  case 119: /* expr: method_call  */
#line 366 "parser.y"
                  { (yyval.tree)=(yyvsp[0].tree); }
#line 2890 "parser.tab.c"
    break;

  case 120: /* expr: create_instance_class  */
#line 367 "parser.y"
                            { (yyval.tree) = (yyvsp[0].tree); }
#line 2896 "parser.tab.c"
    break;

  case 121: /* expr: READLINE '(' ')'  */
#line 368 "parser.y"
                     { printf("readLine:\n"); }
#line 2902 "parser.tab.c"
    break;

  case 122: /* expr: PRINTLN '(' expr ')'  */
#line 369 "parser.y"
                          { printf("print:\n"); }
#line 2908 "parser.tab.c"
    break;

  case 123: /* expr: IDENTIFIER '.' '(' NUM_10 ')'  */
#line 370 "parser.y"
                                    { printf("array_call:\n"); }
#line 2914 "parser.tab.c"
    break;

  case 124: /* const: NUM_10  */
#line 377 "parser.y"
             { (yyval.tree) = mk_int_const((yyvsp[0].int_value)); }
#line 2920 "parser.tab.c"
    break;

  case 125: /* const: CONST_STRING  */
#line 378 "parser.y"
                   { (yyval.tree) = mk_string_const((yyvsp[0].str_value)); }
#line 2926 "parser.tab.c"
    break;

  case 126: /* const: CONST_CHAR  */
#line 379 "parser.y"
                 { (yyval.tree) = mk_char_const((yyvsp[0].str_value)); }
#line 2932 "parser.tab.c"
    break;

  case 127: /* const: KW_TRUE  */
#line 380 "parser.y"
              { (yyval.tree) = mk_boolean_const(true); }
#line 2938 "parser.tab.c"
    break;

  case 128: /* const: KW_FALSE  */
#line 381 "parser.y"
               { (yyval.tree) = mk_boolean_const(false); }
#line 2944 "parser.tab.c"
    break;

  case 129: /* const: KW_NULL  */
#line 382 "parser.y"
              { (yyval.tree) = mk_null_const(); }
#line 2950 "parser.tab.c"
    break;

  case 130: /* const: REAL_NUMBER  */
#line 383 "parser.y"
                  { (yyval.tree) = mk_real_const((yyvsp[0].real_value)); }
#line 2956 "parser.tab.c"
    break;

  case 131: /* const: array  */
#line 384 "parser.y"
            { (yyval.tree) = mk_array_const((yyvsp[0].tree)); }
#line 2962 "parser.tab.c"
    break;

  case 132: /* params: IDENTIFIER ':' type_list_car  */
#line 390 "parser.y"
                                    {  (yyval.tree) = add_to_list(mk_list(), mk_method_params(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree)));  }
#line 2968 "parser.tab.c"
    break;

  case 133: /* params: IDENTIFIER ':' type_list_car '=' const  */
#line 391 "parser.y"
                                              {  (yyval.tree) = add_to_list(mk_list(), mk_method_params_value(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2974 "parser.tab.c"
    break;

  case 134: /* params: params ',' IDENTIFIER ':' type_list_car  */
#line 392 "parser.y"
                                               {  (yyval.tree) = add_to_list((yyvsp[-4].tree), mk_method_params(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2980 "parser.tab.c"
    break;

  case 135: /* params: params ',' IDENTIFIER ':' type_list_car '=' const  */
#line 393 "parser.y"
                                                         {  (yyval.tree) = add_to_list((yyvsp[-6].tree), mk_method_params_value(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2986 "parser.tab.c"
    break;

  case 137: /* anonymous_func: '(' params ')' endlOpt RIGHT_ARROW_OPERATOR endlOpt expr  */
#line 399 "parser.y"
                                                                                   { (yyval.tree) = mk_anonym_func((yyvsp[-5].tree),(yyvsp[0].tree));}
#line 2992 "parser.tab.c"
    break;

  case 138: /* method_params_list: '(' params ')'  */
#line 404 "parser.y"
                   { (yyval.tree) = (yyvsp[-1].tree); }
#line 2998 "parser.tab.c"
    break;

  case 139: /* method_params_list: method_params_list endlOpt '(' params ')'  */
#line 405 "parser.y"
                                              { (yyval.tree) = mk_list(); (yyval.tree) = add_to_list((yyvsp[-4].tree),(yyvsp[-1].tree));}
#line 3004 "parser.tab.c"
    break;

  case 140: /* method: DEF endlOpt IDENTIFIER endlOpt method_params_list endlOpt ':' endlOpt type endlOpt '=' endlOpt expr  */
#line 409 "parser.y"
                                                                                                          { (yyval.tree) = mk_method_declaration(mk_ident_lit((yyvsp[-10].str_value)),(yyvsp[-8].tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 3010 "parser.tab.c"
    break;

  case 141: /* method: DEF endlOpt IDENTIFIER endlOpt ':' endlOpt type endlOpt '=' endlOpt expr  */
#line 410 "parser.y"
                                                                               { (yyval.tree) = mk_method_declaration_typeOnly(mk_ident_lit((yyvsp[-8].str_value)),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 3016 "parser.tab.c"
    break;

  case 142: /* method: DEF endlOpt IDENTIFIER endlOpt method_params_list endlOpt '=' endlOpt expr  */
#line 411 "parser.y"
                                                                                 { (yyval.tree) = mk_method_declaration_paramsOnly(mk_ident_lit((yyvsp[-6].str_value)),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 3022 "parser.tab.c"
    break;

  case 143: /* method: DEF endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 412 "parser.y"
                                                      { (yyval.tree) = mk_method_declaration_bodyOnly(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[0].tree));}
#line 3028 "parser.tab.c"
    break;

  case 148: /* method_arguments_list: '(' expr_list_e ')'  */
#line 420 "parser.y"
                        {(yyval.tree) = (yyvsp[-1].tree);}
#line 3034 "parser.tab.c"
    break;

  case 149: /* method_arguments_list: method_arguments_list '(' expr_list_e ')'  */
#line 421 "parser.y"
                                              {(yyval.tree) = mk_list(); add_to_list((yyvsp[-3].tree),mk_method_arguments_list((yyvsp[-1].tree)));}
#line 3040 "parser.tab.c"
    break;

  case 150: /* method_call: IDENTIFIER method_arguments_list  */
#line 425 "parser.y"
                                       { (yyval.tree) = mk_method_call((yyvsp[-1].str_value),(yyvsp[0].tree));}
#line 3046 "parser.tab.c"
    break;

  case 151: /* method_call: expr '.' IDENTIFIER method_arguments_list  */
#line 426 "parser.y"
                                                { (yyval.tree) = mk_method_call_identifier(mk_ident_lit((yyvsp[-3].tree)),mk_ident_lit((yyvsp[-1].str_value)),(yyvsp[0].tree));}
#line 3052 "parser.tab.c"
    break;

  case 152: /* type: INT_KW  */
#line 432 "parser.y"
             { (yyval.tree) = mk_integer_type(); }
#line 3058 "parser.tab.c"
    break;

  case 153: /* type: DOUBLE_KW  */
#line 433 "parser.y"
                { (yyval.tree) = mk_real_type(); }
#line 3064 "parser.tab.c"
    break;

  case 154: /* type: STRING_KW  */
#line 434 "parser.y"
                { (yyval.tree) = mk_string_type(); }
#line 3070 "parser.tab.c"
    break;

  case 155: /* type: CHAR_KW  */
#line 435 "parser.y"
              { (yyval.tree) = mk_char_type(); }
#line 3076 "parser.tab.c"
    break;

  case 156: /* type: BOOLEAN_KW  */
#line 436 "parser.y"
                 { (yyval.tree) = mk_boolean_type(); }
#line 3082 "parser.tab.c"
    break;

  case 157: /* type: ANY_KW  */
#line 437 "parser.y"
             { (yyval.tree) = mk_any_type(); }
#line 3088 "parser.tab.c"
    break;

  case 158: /* type: UNIT_KW  */
#line 438 "parser.y"
              { (yyval.tree) = mk_unit_type(); }
#line 3094 "parser.tab.c"
    break;

  case 159: /* type: type_list_simple  */
#line 439 "parser.y"
                       { (yyval.tree) = (yyvsp[0].tree);}
#line 3100 "parser.tab.c"
    break;

  case 160: /* type_list_car: type  */
#line 443 "parser.y"
           { (yyval.tree) = mk_list(); (yyval.tree) = add_to_list((yyval.tree), (yyvsp[0].tree));  }
#line 3106 "parser.tab.c"
    break;

  case 161: /* type_list_car: type_list_car RIGHT_ARROW_OPERATOR type  */
#line 444 "parser.y"
                                              { (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 3112 "parser.tab.c"
    break;

  case 162: /* type_list: type  */
#line 448 "parser.y"
           { (yyval.tree) = mk_list(); (yyval.tree) = add_to_list((yyval.tree), (yyvsp[0].tree)); }
#line 3118 "parser.tab.c"
    break;

  case 163: /* type_list: type_list_simple ',' type  */
#line 449 "parser.y"
                                { (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 3124 "parser.tab.c"
    break;

  case 164: /* type_list_simple: '(' type_list ')' RIGHT_ARROW_OPERATOR type  */
#line 453 "parser.y"
                                                 { (yyval.tree) = add_to_list((yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 3130 "parser.tab.c"
    break;

  case 165: /* array: array_literal  */
#line 464 "parser.y"
                     {(yyval.tree) = (yyvsp[0].tree); }
#line 3136 "parser.tab.c"
    break;

  case 166: /* array: initialized_array  */
#line 465 "parser.y"
                         {(yyval.tree) = mk_initialized_array((yyvsp[0].tree));}
#line 3142 "parser.tab.c"
    break;

  case 167: /* array_literal: ARRAY endlOpt '(' expr_list_e ')'  */
#line 469 "parser.y"
                                        {  (yyval.tree) = mk_array_literal((yyvsp[-1].tree)); }
#line 3148 "parser.tab.c"
    break;

  case 168: /* array_literal: ARRAY  */
#line 470 "parser.y"
                                   { (yyval.tree) = mk_empty_array(); }
#line 3154 "parser.tab.c"
    break;

  case 169: /* initialized_array: NEW endlOpt ARRAY endlOpt '[' type ']' '(' expr ')'  */
#line 474 "parser.y"
                                                           { (yyval.tree) = mk_initialized_array_with_type_and_expr((yyvsp[-4].tree), (yyvsp[-1].tree));}
#line 3160 "parser.tab.c"
    break;

  case 170: /* endlList: ENDL  */
#line 483 "parser.y"
                    { printf("PARSER found ENDL\n"); }
#line 3166 "parser.tab.c"
    break;

  case 171: /* endlList: endlList ENDL  */
#line 484 "parser.y"
                    { printf("PARSER found endlList\n"); }
#line 3172 "parser.tab.c"
    break;

  case 172: /* endlOpt: endlList  */
#line 489 "parser.y"
               { printf("PARSER found endlOpt\n"); }
#line 3178 "parser.tab.c"
    break;

  case 174: /* semicolonList: ';'  */
#line 495 "parser.y"
                   { printf("PARSER found SEMICOLON\n"); }
#line 3184 "parser.tab.c"
    break;

  case 175: /* semicolonList: semicolonList ';'  */
#line 496 "parser.y"
                        { printf("PARSER found semicolonList\n"); }
#line 3190 "parser.tab.c"
    break;

  case 176: /* separator_List: ENDL  */
#line 500 "parser.y"
            { printf("PARSER found ENDL\n"); }
#line 3196 "parser.tab.c"
    break;

  case 177: /* separator_List: ';'  */
#line 501 "parser.y"
            { printf("PARSER found SEMICOLON\n"); }
#line 3202 "parser.tab.c"
    break;

  case 178: /* separator_List: separator_List ENDL  */
#line 502 "parser.y"
                            { printf("PARSER add ENDL to separator_List\n"); }
#line 3208 "parser.tab.c"
    break;

  case 179: /* separator_List: separator_List ';'  */
#line 503 "parser.y"
                           { printf("PARSER add ; to separator_List\n"); }
#line 3214 "parser.tab.c"
    break;


#line 3218 "parser.tab.c"

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

