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
  YYSYMBOL_func = 108,                     /* func  */
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
#define YYLAST   1742

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  178
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  510

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

#define YYPACT_NINF (-350)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-171)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,  -350,  -350,    44,  -350,     8,   792,  -350,  -350,  -350,
     845,   845,   881,  -350,  -350,   225,  -350,  -350,    22,    22,
      22,    22,    22,    22,    22,    52,    58,    77,  -350,  -350,
    -350,    22,    22,  -350,  -350,    22,    22,    14,  -350,   -13,
      51,    59,  -350,   137,    16,  -350,  -350,  -350,  -350,  -350,
    -350,  1560,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
      42,    42,   325,  1351,   186,  -350,   845,   128,   135,   165,
     187,   175,   195,   206,    34,   845,   208,   172,   845,   217,
     236,   242,   179,   243,   210,   218,    14,    14,    14,  -350,
     739,  -350,    22,    22,    22,    22,    22,    22,    22,    22,
      22,   268,    22,    22,    22,    22,    22,    22,    22,   300,
    -350,   276,    22,   285,    54,  1560,   284,   845,  -350,    22,
      22,    22,   845,   279,    22,  1304,   845,    22,  1368,  -350,
     845,    22,   290,    22,    24,  -350,  -350,   245,   246,   250,
     137,  -350,  1560,   845,   845,   845,   845,   845,   845,   845,
     845,   845,   314,   258,   845,   845,   845,   845,   845,   845,
     300,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,    18,
    -350,   328,   277,  -350,   338,   327,   330,   845,   281,   283,
    1415,   288,    25,   323,   315,  1432,   333,  -350,   347,   287,
     845,   348,     9,  -350,  -350,  -350,  -350,  1677,  1689,   350,
     350,   171,   171,    42,    42,    42,   135,    22,   495,   495,
    1619,  1631,   350,   350,  -350,   351,   363,   256,   300,   300,
      22,    22,  -350,  -350,  1607,    22,    22,    22,    22,    22,
     917,    22,   845,    74,    22,    22,   356,    22,    22,  -350,
      22,    22,   349,    22,   358,   300,    97,    22,  -350,   336,
     316,   300,    22,  -350,  -350,    28,   845,   845,   845,   112,
     845,   117,   845,    12,  1153,   531,  1560,   319,   845,   320,
      33,    41,   845,   845,   360,   845,   300,   369,   227,   326,
    -350,   373,   357,   381,   405,   397,   163,   392,    22,    22,
     300,  -350,   379,   256,  1560,  1560,  1560,   402,    22,  1560,
     403,    22,  1479,   845,    22,  1607,   953,  1560,    22,    22,
      22,    22,    22,  1496,  1560,    97,  1560,    22,  -350,    22,
      22,   349,   407,   418,   419,   151,   359,   404,   406,   414,
     607,   -11,  -350,  -350,   300,   429,   300,   432,    22,    39,
     149,   845,    20,  1170,   989,   375,   845,   677,    93,  -350,
     420,   435,   845,   300,   248,   845,   300,   300,   415,   416,
     213,  -350,   431,   436,   845,  -350,    22,   453,    22,  -350,
    -350,    17,   424,    22,   437,    22,   845,    22,   845,  1607,
     845,    27,  1220,    22,  1560,    22,  1607,    22,   845,   359,
      22,  1560,    22,  -350,  1543,   456,   457,   454,   455,   439,
     442,   300,   300,   114,   408,   607,  -350,   438,    22,   845,
      22,   845,  1607,   845,  1560,   166,    22,  1025,   845,   411,
    1560,  -350,   845,   463,  -350,   256,   256,   300,   300,   460,
     461,   470,   471,  -350,    16,    22,    22,   473,  1560,   475,
    1560,  1607,   845,   845,    35,  1237,  1607,    22,  1560,    22,
    -350,  -350,   477,   478,   300,   300,   256,   256,   845,   422,
     607,    22,    22,  1560,   226,    22,  1061,   845,   256,   256,
     479,   482,  -350,  -350,  1560,    16,    22,    46,    46,    22,
     845,    45,  1287,  1560,  -350,  -350,   256,   256,   845,   433,
    -350,  -350,   845,   441,    22,  -350,  -350,  1560,    16,  1560,
      22,   845,   845,   845,  1102,  1560,  1560,    22,   845,  1560
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
     170,   170,   123,   146,    93,   170,   170,   170,   170,   170,
       0,   170,     0,     0,   170,   170,     0,   170,   170,   164,
     170,   170,   136,   170,     0,     0,    30,   170,     9,     0,
       0,     0,   170,   133,   158,   134,     0,     0,     0,     0,
       0,     0,     0,    92,     0,     0,    63,     0,     0,     0,
     169,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,     0,     0,     0,    29,     0,     0,     0,   170,   170,
       0,   160,     0,     0,   137,    90,    45,     0,   170,    46,
       0,   170,    55,     0,   170,    57,     0,    64,   170,   170,
     170,   170,   170,     0,    79,    30,   141,   170,   142,   170,
     170,   136,     0,     0,     0,     0,     6,     0,     0,    35,
       0,     0,   161,   135,     0,     0,     0,     0,   170,     0,
      60,     0,    92,     0,     0,     0,     0,     0,     0,    80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     0,     0,     0,    83,   170,    82,   170,    81,
     171,   170,     0,   170,     0,   170,     0,   170,     0,    56,
       0,    92,     0,   170,    71,   170,    59,   170,     0,    11,
     170,   140,   170,   143,     0,    14,    13,     0,     0,     0,
       0,     0,     0,   170,     0,     0,   172,     0,   170,     0,
     170,     0,    53,     0,    61,    65,   170,     0,     0,     0,
      72,    12,     0,     0,   166,     0,     0,     0,     0,     0,
       0,    22,    21,    36,   178,   170,   170,     0,    47,     0,
      48,    54,     0,     0,    92,     0,    58,   170,   139,   170,
      16,    15,    18,    17,     0,     0,     0,     0,     0,     0,
       0,   170,   170,    66,    68,   170,     0,     0,     0,     0,
      26,    25,    24,    23,    84,   178,   170,     0,     0,   170,
       0,    92,     0,   138,    20,    19,     0,     0,     0,     0,
      50,    49,     0,    76,   170,    28,    27,    86,   178,    69,
     170,     0,     0,     0,    73,    85,    77,   170,     0,    74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -350,  -350,  -350,   428,  -350,  -350,  -350,   184,  -350,    -5,
    -274,  -350,    38,   -41,  -350,  -350,  -350,  -350,  -350,  -350,
    -350,  -349,  -350,  -108,  -327,    -6,  -196,  -234,  -350,  -350,
    -350,  -350,   354,  -350,  -144,   297,  -350,  -153,  -214,  -350,
    -350,  -223,   294,  -350,   469,   -30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,    38,    39,    40,    41,   284,   285,    42,   286,
     248,    44,     4,    45,    46,    47,   182,   235,    48,    49,
      50,   366,   289,   113,   114,   115,    52,    64,    53,    54,
     243,    55,    68,    56,   168,   169,   215,   170,    57,    58,
      59,    69,    70,   371,     5,     6
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      51,    43,    89,   367,    60,    61,    63,   216,   278,   176,
     -44,     8,   270,     1,    91,    65,   214,     1,  -170,     1,
      65,   253,   188,    65,   217,    65,  -170,    65,   246,   368,
      65,    66,   -62,  -170,   293,    67,   118,   403,    65,    66,
     -67,  -170,   118,    67,     7,   231,    66,   -62,   -75,   141,
      67,  -170,   361,   123,    66,   -67,   435,    65,    67,  -170,
     232,   309,   -70,    86,    66,   101,   369,   370,    67,   125,
     -78,    78,   128,   377,   254,    85,   310,    79,   367,   339,
     -75,   247,   244,   218,   142,   140,     9,   354,     2,    27,
     -62,   -44,     2,   218,     2,   406,  -170,   333,   -67,   196,
      -8,   281,   267,   233,   -70,   -70,   298,   291,   301,   268,
     124,   476,   -78,   -78,   252,   421,   180,    65,   311,   312,
     185,   387,   -75,   -75,   137,   138,   139,    87,   388,   282,
     283,   160,   317,   367,   433,    88,   160,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   332,   116,   208,   209,
     210,   211,   212,   213,   117,   297,    92,    93,    94,    95,
     300,    96,    97,    98,    99,   100,    33,    34,   118,    18,
      19,   224,   101,    92,    93,    94,    95,    24,    96,    97,
      98,    99,   100,   358,   359,    98,    99,   100,   102,   101,
     372,   111,   374,   119,   101,   327,   328,   103,   104,   105,
     106,   107,   108,   120,    31,   102,   112,   132,    35,   392,
      36,   378,   395,   396,   103,   104,   105,   106,   107,   108,
      33,    34,   133,   121,   264,   122,   266,   126,   442,   450,
     451,  -170,   111,    92,    93,    94,    95,   129,    96,    97,
      98,    99,   100,   127,    66,   399,   400,   318,    67,   101,
     294,   295,   296,   111,   299,   130,   302,   431,   432,   305,
     472,   473,   307,   490,   491,   102,   313,   314,   393,   316,
     131,   134,   484,   485,   103,   104,   105,   106,   107,   108,
      13,    35,    14,   452,   453,    16,    17,   225,   479,   227,
     495,   496,   226,   240,   228,   136,   152,   340,   241,    27,
     343,    28,    29,    30,   171,   173,   242,   181,   175,   190,
     470,   471,    71,    72,    73,    74,    75,    76,    77,   160,
     360,    80,   193,   194,   252,    81,    82,   195,    65,    83,
      84,  -170,   319,    66,   207,   379,   109,   320,   382,   219,
     384,   386,   220,   221,    66,   321,   391,   222,    67,   394,
     223,   234,   230,   236,   161,   162,   163,   164,   165,   166,
     167,   238,    96,    97,    98,    99,   100,   239,   251,   245,
     412,   250,   414,   101,   415,   272,   288,   277,   280,   315,
     109,   290,   420,   306,   308,   323,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   322,   153,   154,   155,   156,
     157,   158,   159,   438,   458,   440,   172,   441,   174,   324,
     325,   445,   446,   177,   178,   179,   448,   326,   183,   184,
     329,   186,   133,   334,   336,   189,   355,   191,   192,   356,
     357,   247,   362,   364,   363,   373,   463,   464,   375,   383,
     389,   390,   401,   397,   398,   488,   408,   402,    92,    93,
      94,    95,   474,    96,    97,    98,    99,   100,  -170,   410,
     482,   483,   425,   426,   101,   427,   428,   429,   502,   449,
     430,   454,   455,   434,   493,   447,   456,   457,   436,   461,
     102,   462,   497,   468,   469,   486,   499,   475,   487,   103,
     104,   105,   106,   107,   108,   504,   505,   506,   498,   350,
       0,   249,   509,   500,    94,    95,   206,    96,    97,    98,
      99,   100,   135,    90,   256,   257,   255,     0,   101,   258,
     259,   260,   261,   262,     0,   265,     0,     0,   269,   271,
       0,   273,   274,     0,   275,   276,     0,   279,     0,     0,
       0,   287,     0,    10,    11,     0,   292,   107,   108,     0,
      12,     0,     0,     0,     0,    13,     0,    14,     0,    15,
      16,    17,     0,     0,     0,     0,    20,    21,    22,    23,
       0,     0,    25,    26,    27,     0,    28,    29,    30,     0,
       0,     0,   330,   331,     0,     0,     0,     0,     0,     0,
       0,     0,   335,     0,   304,   337,     0,     0,   341,    32,
       0,     0,   344,   345,   346,   347,   348,    37,     0,     0,
       0,   351,     0,   352,   353,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,     0,    12,     0,     0,     0,
       0,    13,   376,    14,     0,    15,    16,    17,     0,     0,
       0,     0,    20,    21,    22,    23,     0,     0,    25,    26,
      27,     0,    28,    29,    30,     0,     0,     0,     0,     0,
     404,   174,   405,     0,     0,   407,     0,   409,     0,   411,
       0,   413,     0,     0,     0,    32,     0,   417,     0,   418,
       0,   419,   365,    37,   422,     0,   423,     0,     0,    10,
      11,     0,     0,     0,     0,     0,    12,   174,     0,     0,
       0,    13,   437,    14,   439,    15,    16,    17,     0,     0,
     443,     0,    20,    21,    22,    23,     0,     0,    25,    26,
      27,     0,    28,    29,    30,     0,     0,     0,     0,   459,
     460,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     385,   466,     8,   467,     0,    32,     0,     0,     0,     0,
       0,    10,    11,    37,     0,   477,   478,     0,    12,   480,
       0,     0,     0,    13,     0,    14,     0,    15,    16,    17,
     489,    18,    19,   492,    20,    21,    22,    23,     0,    24,
      25,    26,    27,     0,    28,    29,    30,     0,   501,     0,
       0,     0,     0,     0,   503,     0,     0,     0,     0,     0,
       0,   508,     0,     0,    10,    11,    31,    32,    33,    34,
      35,    12,    36,     0,     0,    37,    13,     9,    14,     0,
      15,    16,    17,     0,    18,    19,     0,    20,    21,    22,
      23,     0,    24,    25,    26,    27,     0,    28,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,    31,
      32,    33,    34,    35,    12,    36,     0,     0,    37,    13,
       0,    14,     0,    15,    16,    17,     0,     0,     0,     0,
      20,    21,    22,    23,     0,     0,    25,    26,    27,     0,
      28,    29,    30,    10,    11,     0,     0,     0,     0,     0,
      12,     0,     0,     0,     0,    13,     0,    14,     0,    62,
      16,    17,     0,    32,     0,     0,    20,    21,    22,    23,
       0,    37,    25,    26,    27,     0,    28,    29,    30,    10,
      11,     0,     0,     0,     0,     0,    12,     0,     0,     0,
       0,    13,     0,    14,     0,   263,    16,    17,     0,    32,
       0,     0,    20,    21,    22,    23,     0,    37,    25,    26,
      27,     0,    28,    29,    30,    10,    11,     0,     0,     0,
       0,     0,    12,     0,     0,     0,     0,    13,     0,    14,
       0,   342,    16,    17,     0,    32,     0,     0,    20,    21,
      22,    23,     0,    37,    25,    26,    27,     0,    28,    29,
      30,    10,    11,     0,     0,     0,     0,     0,    12,     0,
       0,     0,     0,    13,     0,    14,     0,   381,    16,    17,
       0,    32,     0,     0,    20,    21,    22,    23,     0,    37,
      25,    26,    27,     0,    28,    29,    30,    10,    11,     0,
       0,     0,     0,     0,    12,     0,     0,     0,     0,    13,
       0,    14,     0,   444,    16,    17,     0,    32,     0,     0,
      20,    21,    22,    23,     0,    37,    25,    26,    27,     0,
      28,    29,    30,    10,    11,     0,     0,     0,     0,     0,
      12,     0,     0,     0,     0,    13,     0,    14,     0,   481,
      16,    17,     0,    32,     0,     0,    20,    21,    22,    23,
       0,    37,    25,    26,    27,     0,    28,    29,    30,    92,
      93,    94,    95,     0,    96,    97,    98,    99,   100,     0,
       0,     0,     0,     0,     0,   101,     0,     0,     0,    32,
       0,     0,     0,     0,     0,     0,     0,    37,     0,     0,
       0,   102,     0,     0,     0,     0,     0,     0,     0,     0,
     103,   104,   105,   106,   107,   108,     0,     0,     0,     0,
      92,    93,    94,    95,   507,    96,    97,    98,    99,   100,
       0,     0,     0,     0,     0,     0,   101,    92,    93,    94,
      95,     0,    96,    97,    98,    99,   100,     0,     0,     0,
       0,     0,   102,   101,     0,     0,     0,     0,     0,     0,
       0,   103,   104,   105,   106,   107,   108,     0,     0,   102,
       0,     0,     0,     0,   303,     0,     0,     0,   103,   104,
     105,   106,   107,   108,     0,     0,     0,    92,    93,    94,
      95,   380,    96,    97,    98,    99,   100,     0,     0,     0,
       0,     0,     0,   101,    92,    93,    94,    95,     0,    96,
      97,    98,    99,   100,     0,     0,     0,     0,     0,   102,
     101,     0,     0,     0,     0,     0,     0,     0,   103,   104,
     105,   106,   107,   108,     0,     0,   102,     0,     0,     0,
       0,   416,     0,     0,     0,   103,   104,   105,   106,   107,
     108,     0,     0,     0,    92,    93,    94,    95,   465,    96,
      97,    98,    99,   100,     0,     0,     0,    65,     0,     0,
     101,    92,    93,    94,    95,     0,    96,    97,    98,    99,
     100,     0,     0,     0,     0,     0,   102,   101,     0,     0,
       0,     0,     0,     0,     0,   103,   104,   105,   106,   107,
     108,     0,     0,   102,     0,     0,     0,     0,   494,     0,
       0,     0,   103,   104,   105,   106,   107,   108,    92,    93,
      94,    95,     0,    96,    97,    98,    99,   100,     0,     0,
       0,   110,     0,     0,   101,    92,    93,    94,    95,     0,
      96,    97,    98,    99,   100,     0,     0,     0,   187,     0,
     102,   101,     0,     0,     0,     0,     0,     0,     0,   103,
     104,   105,   106,   107,   108,     0,     0,   102,     0,     0,
       0,     0,     0,     0,     0,     0,   103,   104,   105,   106,
     107,   108,    92,    93,    94,    95,     0,    96,    97,    98,
      99,   100,     0,     0,     0,   229,     0,     0,   101,    92,
      93,    94,    95,     0,    96,    97,    98,    99,   100,     0,
       0,     0,   237,     0,   102,   101,     0,     0,     0,     0,
       0,     0,     0,   103,   104,   105,   106,   107,   108,     0,
       0,   102,     0,     0,     0,     0,     0,     0,     0,     0,
     103,   104,   105,   106,   107,   108,    92,    93,    94,    95,
       0,    96,    97,    98,    99,   100,     0,     0,     0,     0,
       0,     0,   101,    92,    93,    94,    95,     0,    96,    97,
      98,    99,   100,   338,     0,     0,   349,     0,   102,   101,
       0,     0,     0,     0,     0,     0,     0,   103,   104,   105,
     106,   107,   108,     0,     0,   102,     0,     0,     0,     0,
       0,     0,     0,     0,   103,   104,   105,   106,   107,   108,
      92,    93,    94,    95,     0,    96,    97,    98,    99,   100,
       0,     0,     0,   424,     0,     0,   101,    92,    93,    94,
      95,     0,    96,    97,    98,    99,   100,     0,     0,     0,
       0,     0,   102,   101,     0,     0,     0,     0,     0,     0,
       0,   103,   104,   105,   106,   107,   108,     0,     0,   102,
       0,     0,     0,     0,     0,     0,     0,     0,   103,   104,
     105,   106,   107,   108,    92,    93,    94,    95,     0,    96,
      97,    98,    99,   100,     0,     0,    92,    93,    94,    95,
     101,    96,    97,    98,    99,   100,     0,     0,    92,    93,
      94,    95,   101,    96,    97,    98,    99,   100,     0,     0,
       0,     0,     0,     0,   101,   103,   104,   105,   106,   107,
     108,     0,     0,     0,     0,     0,     0,   103,   104,     0,
     106,   107,   108,     0,     0,     0,     0,     0,     0,   103,
     104,     0,     0,   107,   108,    93,    94,    95,     0,    96,
      97,    98,    99,   100,     0,     0,     0,     0,    94,    95,
     101,    96,    97,    98,    99,   100,     0,     0,     0,     0,
       0,     0,   101,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   103,   104,     0,     0,   107,
     108,     0,     0,     0,     0,     0,     0,   103,   104,     0,
       0,   107,   108
};

static const yytype_int16 yycheck[] =
{
       6,     6,    43,   330,    10,    11,    12,   160,   242,   117,
       0,     3,   235,     3,    44,     3,   160,     3,     6,     3,
       3,   217,   130,     3,     6,     3,     6,     3,    19,    40,
       3,    19,    20,     6,     6,    23,     3,   364,     3,    19,
      20,     6,     3,    23,     0,    20,    19,    35,     3,    90,
      23,     6,   326,    19,    19,    35,   405,     3,    23,     5,
      35,    28,    35,    76,    19,    23,    77,    78,    23,    75,
      35,    19,    78,    34,   218,    37,    35,    19,   405,   302,
      35,    72,   190,    65,    90,    90,    78,   321,    78,    43,
      78,    77,    78,    65,    78,    78,    19,   293,    78,   140,
      76,   245,    28,    78,    77,    78,   259,   251,   261,    35,
      76,   460,    77,    78,    68,   389,   122,     3,    77,    78,
     126,    28,    77,    78,    86,    87,    88,    76,    35,    32,
      33,    19,   276,   460,    20,    76,    19,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   290,    19,   154,   155,
     156,   157,   158,   159,    19,    43,     7,     8,     9,    10,
      43,    12,    13,    14,    15,    16,    69,    70,     3,    32,
      33,   177,    23,     7,     8,     9,    10,    40,    12,    13,
      14,    15,    16,    32,    33,    14,    15,    16,    39,    23,
     334,     5,   336,     6,    23,    32,    33,    48,    49,    50,
      51,    52,    53,    28,    67,    39,    20,    28,    71,   353,
      73,    62,   356,   357,    48,    49,    50,    51,    52,    53,
      69,    70,    43,    28,   230,    19,   232,    19,    62,   425,
     426,     6,     5,     7,     8,     9,    10,    20,    12,    13,
      14,    15,    16,    71,    19,    32,    33,    20,    23,    23,
     256,   257,   258,     5,   260,    19,   262,   401,   402,   265,
     456,   457,   268,   477,   478,    39,   272,   273,    20,   275,
      28,    28,   468,   469,    48,    49,    50,    51,    52,    53,
      24,    71,    26,   427,   428,    29,    30,     6,    62,     6,
     486,   487,    11,     6,    11,    77,    28,   303,    11,    43,
     306,    45,    46,    47,    28,    20,    19,    28,    24,    19,
     454,   455,    18,    19,    20,    21,    22,    23,    24,    19,
     325,    27,    77,    77,    68,    31,    32,    77,     3,    35,
      36,     6,     6,    19,    76,   341,    11,    11,   344,    11,
     346,   347,    65,     5,    19,    19,   352,    20,    23,   355,
      20,    28,    64,    38,    54,    55,    56,    57,    58,    59,
      60,    28,    12,    13,    14,    15,    16,    20,     5,    21,
     376,    20,   378,    23,   380,    19,    40,    28,    20,    19,
      11,    65,   388,    64,    64,    28,    92,    93,    94,    95,
      96,    97,    98,    99,   100,    22,   102,   103,   104,   105,
     106,   107,   108,   409,   434,   411,   112,   413,   114,    28,
       5,   417,   418,   119,   120,   121,   422,    20,   124,   125,
      28,   127,    43,    21,    21,   131,    19,   133,   134,    11,
      11,    72,    28,    19,    28,     6,   442,   443,     6,    64,
      20,     6,    11,    28,    28,   475,    22,    11,     7,     8,
       9,    10,   458,    12,    13,    14,    15,    16,     5,    22,
     466,   467,     6,     6,    23,    11,    11,    28,   498,     6,
      28,    11,    11,    65,   480,    64,     6,     6,    40,     6,
      39,     6,   488,     6,     6,     6,   492,    65,     6,    48,
      49,    50,    51,    52,    53,   501,   502,   503,    65,   315,
      -1,   207,   508,    62,     9,    10,   152,    12,    13,    14,
      15,    16,    84,    44,   220,   221,   219,    -1,    23,   225,
     226,   227,   228,   229,    -1,   231,    -1,    -1,   234,   235,
      -1,   237,   238,    -1,   240,   241,    -1,   243,    -1,    -1,
      -1,   247,    -1,    12,    13,    -1,   252,    52,    53,    -1,
      19,    -1,    -1,    -1,    -1,    24,    -1,    26,    -1,    28,
      29,    30,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      -1,    -1,    41,    42,    43,    -1,    45,    46,    47,    -1,
      -1,    -1,   288,   289,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   298,    -1,    63,   301,    -1,    -1,   304,    68,
      -1,    -1,   308,   309,   310,   311,   312,    76,    -1,    -1,
      -1,   317,    -1,   319,   320,    -1,    -1,    -1,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    24,   338,    26,    -1,    28,    29,    30,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    -1,    -1,    41,    42,
      43,    -1,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
     366,   367,   368,    -1,    -1,   371,    -1,   373,    -1,   375,
      -1,   377,    -1,    -1,    -1,    68,    -1,   383,    -1,   385,
      -1,   387,    75,    76,   390,    -1,   392,    -1,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    19,   403,    -1,    -1,
      -1,    24,   408,    26,   410,    28,    29,    30,    -1,    -1,
     416,    -1,    35,    36,    37,    38,    -1,    -1,    41,    42,
      43,    -1,    45,    46,    47,    -1,    -1,    -1,    -1,   435,
     436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,   447,     3,   449,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    12,    13,    76,    -1,   461,   462,    -1,    19,   465,
      -1,    -1,    -1,    24,    -1,    26,    -1,    28,    29,    30,
     476,    32,    33,   479,    35,    36,    37,    38,    -1,    40,
      41,    42,    43,    -1,    45,    46,    47,    -1,   494,    -1,
      -1,    -1,    -1,    -1,   500,    -1,    -1,    -1,    -1,    -1,
      -1,   507,    -1,    -1,    12,    13,    67,    68,    69,    70,
      71,    19,    73,    -1,    -1,    76,    24,    78,    26,    -1,
      28,    29,    30,    -1,    32,    33,    -1,    35,    36,    37,
      38,    -1,    40,    41,    42,    43,    -1,    45,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    13,    67,
      68,    69,    70,    71,    19,    73,    -1,    -1,    76,    24,
      -1,    26,    -1,    28,    29,    30,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    -1,    -1,    41,    42,    43,    -1,
      45,    46,    47,    12,    13,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    24,    -1,    26,    -1,    28,
      29,    30,    -1,    68,    -1,    -1,    35,    36,    37,    38,
      -1,    76,    41,    42,    43,    -1,    45,    46,    47,    12,
      13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    24,    -1,    26,    -1,    28,    29,    30,    -1,    68,
      -1,    -1,    35,    36,    37,    38,    -1,    76,    41,    42,
      43,    -1,    45,    46,    47,    12,    13,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    24,    -1,    26,
      -1,    28,    29,    30,    -1,    68,    -1,    -1,    35,    36,
      37,    38,    -1,    76,    41,    42,    43,    -1,    45,    46,
      47,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    24,    -1,    26,    -1,    28,    29,    30,
      -1,    68,    -1,    -1,    35,    36,    37,    38,    -1,    76,
      41,    42,    43,    -1,    45,    46,    47,    12,    13,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    24,
      -1,    26,    -1,    28,    29,    30,    -1,    68,    -1,    -1,
      35,    36,    37,    38,    -1,    76,    41,    42,    43,    -1,
      45,    46,    47,    12,    13,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    24,    -1,    26,    -1,    28,
      29,    30,    -1,    68,    -1,    -1,    35,    36,    37,    38,
      -1,    76,    41,    42,    43,    -1,    45,    46,    47,     7,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,
       7,     8,     9,    10,    62,    12,    13,    14,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    23,     7,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    39,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    -1,    -1,    -1,     7,     8,     9,
      10,    61,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    23,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,    39,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    -1,    -1,    -1,     7,     8,     9,    10,    61,    12,
      13,    14,    15,    16,    -1,    -1,    -1,     3,    -1,    -1,
      23,     7,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    -1,    -1,    -1,    -1,    -1,    39,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    -1,    -1,    39,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    20,    -1,    -1,    23,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    -1,    -1,    -1,    20,    -1,
      39,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,     7,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    -1,
      -1,    -1,    20,    -1,    39,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    23,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    34,    -1,    -1,    20,    -1,    39,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
       7,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      -1,    -1,    -1,    20,    -1,    -1,    23,     7,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    39,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    -1,    -1,     7,     8,     9,    10,
      23,    12,    13,    14,    15,    16,    -1,    -1,     7,     8,
       9,    10,    23,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    48,    49,    50,    51,    52,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    52,    53,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,     9,    10,
      23,    12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    52,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      -1,    52,    53
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    78,    80,    91,   123,   124,     0,     3,    78,
      12,    13,    19,    24,    26,    28,    29,    30,    32,    33,
      35,    36,    37,    38,    40,    41,    42,    43,    45,    46,
      47,    67,    68,    69,    70,    71,    73,    76,    81,    82,
      83,    84,    87,    88,    90,    92,    93,    94,    97,    98,
      99,   104,   105,   107,   108,   110,   112,   117,   118,   119,
     104,   104,    28,   104,   106,     3,    19,    23,   111,   120,
     121,   121,   121,   121,   121,   121,   121,   121,    19,    19,
     121,   121,   121,   121,   121,    91,    76,    76,    76,    92,
     123,   124,     7,     8,     9,    10,    12,    13,    14,    15,
      16,    23,    39,    48,    49,    50,    51,    52,    53,    11,
      20,     5,    20,   102,   103,   104,    19,    19,     3,     6,
      28,    28,    19,    19,    76,   104,    19,    71,   104,    20,
      19,    28,    28,    43,    28,    82,    77,    91,    91,    91,
      88,    92,   104,   121,   121,   121,   121,   121,   121,   121,
     121,   121,    28,   121,   121,   121,   121,   121,   121,   121,
      19,    54,    55,    56,    57,    58,    59,    60,   113,   114,
     116,    28,   121,    20,   121,    24,   102,   121,   121,   121,
     104,    28,    95,   121,   121,   104,   121,    20,   102,   121,
      19,   121,   121,    77,    77,    77,    92,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   111,    76,   104,   104,
     104,   104,   104,   104,   113,   115,   116,     6,    65,    11,
      65,     5,    20,    20,   104,     6,    11,     6,    11,    20,
      64,    20,    35,    78,    28,    96,    38,    20,    28,    20,
       6,    11,    19,   109,   102,    21,    19,    72,    89,   121,
      20,     5,    68,   105,   113,   114,   121,   121,   121,   121,
     121,   121,   121,    28,   104,   121,   104,    28,    35,   121,
     120,   121,    19,   121,   121,   121,   121,    28,   106,   121,
      20,   113,    32,    33,    85,    86,    88,   121,    40,   101,
      65,   113,   121,     6,   104,   104,   104,    43,   116,   104,
      43,   116,   104,    61,    63,   104,    64,   104,    64,    28,
      35,    77,    78,   104,   104,    19,   104,   113,    20,     6,
      11,    19,    22,    28,    28,     5,    20,    32,    33,    28,
     121,   121,   113,   105,    21,   121,    21,   121,    34,   120,
     104,   121,    28,   104,   121,   121,   121,   121,   121,    20,
      86,   121,   121,   121,   106,    19,    11,    11,    32,    33,
      88,    89,    28,    28,    19,    75,   100,   103,    40,    77,
      78,   122,   113,     6,   113,     6,   121,    34,    62,   104,
      61,    28,   104,    64,   104,    63,   104,    28,    35,    20,
       6,   104,   113,    20,   104,   113,   113,    28,    28,    32,
      33,    11,    11,   103,   121,   121,    78,   121,    22,   121,
      22,   121,   104,   121,   104,   104,    61,   121,   121,   121,
     104,    89,   121,   121,    20,     6,     6,    11,    11,    28,
      28,   113,   113,    20,    65,   100,    40,   121,   104,   121,
     104,   104,    62,   121,    28,   104,   104,    64,   104,     6,
     105,   105,   113,   113,    11,    11,     6,     6,   124,   121,
     121,     6,     6,   104,   104,    61,   121,   121,     6,     6,
     113,   113,   105,   105,   104,    65,   100,   121,   121,    62,
     121,    28,   104,   104,   105,   105,     6,     6,   124,   121,
     117,   117,   121,   104,    61,   105,   105,   104,    65,   104,
      62,   121,   124,   121,   104,   104,   104,    62,   121,   104
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
     108,   108,   109,   109,   110,   111,   111,   112,   112,   113,
     113,   113,   113,   113,   113,   113,   113,   114,   114,   115,
     115,   116,   117,   117,   118,   118,   119,   120,   120,   121,
     121,   122,   122,   123,   123,   123,   123,   124,   124
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
#line 2287 "parser.tab.c"
    break;

  case 3: /* class: class_header '{' statement_expr_list_e '}'  */
#line 141 "parser.y"
                                                 { (yyval.tree) = mk_class((yyvsp[-3].tree),(yyvsp[-1].tree)); }
#line 2293 "parser.tab.c"
    break;

  case 6: /* class_header: CLASS endlOpt IDENTIFIER endlOpt '(' class_params_e ')'  */
#line 149 "parser.y"
                                                              { (yyval.tree) = mk_class_header(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-1].tree)); }
#line 2299 "parser.tab.c"
    break;

  case 7: /* class_header: CLASS endlOpt IDENTIFIER endlOpt '(' class_params_e ')' inheritance  */
#line 150 "parser.y"
                                                                         { (yyval.tree) = mk_class_header_inheritance(mk_ident_lit((yyvsp[-5].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree)); }
#line 2305 "parser.tab.c"
    break;

  case 8: /* class_header: CLASS endlOpt IDENTIFIER  */
#line 151 "parser.y"
                               { (yyval.tree) = mk_class_header_identifierOnly(mk_ident_lit((yyvsp[0].str_value))); }
#line 2311 "parser.tab.c"
    break;

  case 9: /* class_header: CLASS endlOpt IDENTIFIER endlOpt inheritance  */
#line 152 "parser.y"
                                                   { (yyval.tree) = mk_class_header_inheritance_identifier(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree)); }
#line 2317 "parser.tab.c"
    break;

  case 13: /* class_params: VAR IDENTIFIER ':' type  */
#line 167 "parser.y"
                              { (yyval.tree) = add_to_list(mk_list(),mk_class_params_var(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2323 "parser.tab.c"
    break;

  case 14: /* class_params: VAL IDENTIFIER ':' type  */
#line 168 "parser.y"
                              { (yyval.tree) = add_to_list(mk_list(),mk_class_params_val(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2329 "parser.tab.c"
    break;

  case 15: /* class_params: VAR IDENTIFIER ':' type '=' const  */
#line 169 "parser.y"
                                        { (yyval.tree) = add_to_list(mk_list(),mk_class_params_var_const(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2335 "parser.tab.c"
    break;

  case 16: /* class_params: VAL IDENTIFIER ':' type '=' const  */
#line 170 "parser.y"
                                        { (yyval.tree) = add_to_list(mk_list(),mk_class_params_val_const(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2341 "parser.tab.c"
    break;

  case 17: /* class_params: class_params ',' VAR IDENTIFIER ':' type  */
#line 171 "parser.y"
                                               { (yyval.tree) = add_to_list((yyvsp[-5].tree),mk_class_params_var(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2347 "parser.tab.c"
    break;

  case 18: /* class_params: class_params ',' VAL IDENTIFIER ':' type  */
#line 172 "parser.y"
                                               { (yyval.tree) = add_to_list((yyvsp[-5].tree),mk_class_params_var(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2353 "parser.tab.c"
    break;

  case 19: /* class_params: class_params ',' VAR IDENTIFIER ':' type '=' const  */
#line 173 "parser.y"
                                                         { (yyval.tree) = add_to_list((yyvsp[-7].tree),mk_class_params_var_const(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2359 "parser.tab.c"
    break;

  case 20: /* class_params: class_params ',' VAL IDENTIFIER ':' type '=' const  */
#line 174 "parser.y"
                                                         { (yyval.tree) = add_to_list((yyvsp[-7].tree),mk_class_params_val_const(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2365 "parser.tab.c"
    break;

  case 21: /* class_params: visibility_modifier VAR IDENTIFIER ':' type  */
#line 175 "parser.y"
                                                   { (yyval.tree) = add_to_list(mk_list(),mk_class_params_var_vis_mod((yyvsp[-4].tree),mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2371 "parser.tab.c"
    break;

  case 22: /* class_params: visibility_modifier VAL IDENTIFIER ':' type  */
#line 176 "parser.y"
                                                   { (yyval.tree) = add_to_list(mk_list(),mk_class_params_val_vis_mod((yyvsp[-4].tree),mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2377 "parser.tab.c"
    break;

  case 23: /* class_params: visibility_modifier VAR IDENTIFIER ':' type '=' const  */
#line 177 "parser.y"
                                                            { (yyval.tree) = add_to_list(mk_list(),mk_class_params_var_const_vis_mod((yyvsp[-6].tree),mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2383 "parser.tab.c"
    break;

  case 24: /* class_params: visibility_modifier VAL IDENTIFIER ':' type '=' const  */
#line 178 "parser.y"
                                                            { (yyval.tree) = add_to_list(mk_list(),mk_class_params_val_const_vis_mod((yyvsp[-6].tree),mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2389 "parser.tab.c"
    break;

  case 25: /* class_params: class_params ',' visibility_modifier VAR IDENTIFIER ':' type  */
#line 179 "parser.y"
                                                                   { (yyval.tree) = add_to_list((yyvsp[-6].tree),mk_class_params_var_vis_mod((yyvsp[-4].tree),mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2395 "parser.tab.c"
    break;

  case 26: /* class_params: class_params ',' visibility_modifier VAL IDENTIFIER ':' type  */
#line 180 "parser.y"
                                                                   { (yyval.tree) = add_to_list((yyvsp[-6].tree),mk_class_params_val_vis_mod((yyvsp[-4].tree),mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 2401 "parser.tab.c"
    break;

  case 27: /* class_params: class_params ',' visibility_modifier VAR IDENTIFIER ':' type '=' const  */
#line 181 "parser.y"
                                                                             { (yyval.tree) = add_to_list((yyvsp[-8].tree),mk_class_params_var_const_vis_mod((yyvsp[-6].tree),mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2407 "parser.tab.c"
    break;

  case 28: /* class_params: class_params ',' visibility_modifier VAL IDENTIFIER ':' type '=' const  */
#line 182 "parser.y"
                                                                             { (yyval.tree) = add_to_list((yyvsp[-8].tree),mk_class_params_var_const_vis_mod((yyvsp[-6].tree),mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 2413 "parser.tab.c"
    break;

  case 29: /* class_params_e: class_params  */
#line 186 "parser.y"
                   {(yyval.tree) = (yyvsp[0].tree);}
#line 2419 "parser.tab.c"
    break;

  case 30: /* class_params_e: %empty  */
#line 187 "parser.y"
                    { (yyval.tree) = mk_empty();}
#line 2425 "parser.tab.c"
    break;

  case 33: /* visibility_modifier: PRIVATE  */
#line 205 "parser.y"
               {(yyval.tree) = mk_visibility_modifier((char*)"private");}
#line 2431 "parser.tab.c"
    break;

  case 34: /* visibility_modifier: PROTECTED  */
#line 206 "parser.y"
                {(yyval.tree) = mk_visibility_modifier((char*)"protected");}
#line 2437 "parser.tab.c"
    break;

  case 35: /* inheritance: EXTENDS endlOpt IDENTIFIER  */
#line 214 "parser.y"
                                 { (yyval.tree) = mk_inheritance(mk_ident_lit((yyvsp[0].str_value)));}
#line 2443 "parser.tab.c"
    break;

  case 36: /* inheritance: EXTENDS endlOpt IDENTIFIER '(' expr_list ')'  */
#line 215 "parser.y"
                                                 { (yyval.tree) = mk_inheritance_expr(mk_ident_lit((yyvsp[-3].str_value)),(yyvsp[-1].tree));}
#line 2449 "parser.tab.c"
    break;

  case 37: /* statement_expr_list: statement  */
#line 223 "parser.y"
                { (yyval.tree) = add_to_list(mk_list(),(yyvsp[0].tree));}
#line 2455 "parser.tab.c"
    break;

  case 38: /* statement_expr_list: visibility_modifier statement  */
#line 224 "parser.y"
                                   { (yyval.tree) = add_to_list(mk_list(), mk_visibility_modifier_stmt((yyvsp[-1].tree), (yyvsp[0].tree)));}
#line 2461 "parser.tab.c"
    break;

  case 39: /* statement_expr_list: expr  */
#line 225 "parser.y"
           { (yyval.tree) = add_to_list(mk_list(),(yyvsp[0].tree));}
#line 2467 "parser.tab.c"
    break;

  case 40: /* statement_expr_list: statement_expr_list separator_List statement  */
#line 226 "parser.y"
                                                    {  (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 2473 "parser.tab.c"
    break;

  case 41: /* statement_expr_list: statement_expr_list separator_List expr  */
#line 227 "parser.y"
                                               {   (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree));  }
#line 2479 "parser.tab.c"
    break;

  case 42: /* statement_expr_list: statement_expr_list separator_List visibility_modifier statement  */
#line 228 "parser.y"
                                                                        { (yyval.tree) = add_to_list((yyvsp[-3].tree), mk_visibility_modifier_stmt((yyvsp[-1].tree), (yyvsp[0].tree))); }
#line 2485 "parser.tab.c"
    break;

  case 43: /* statement_expr_list_e: separator_List_e statement_expr_list separator_List_e  */
#line 232 "parser.y"
                                                            {(yyval.tree) = mk_stmt_expr_list((yyvsp[-1].tree));}
#line 2491 "parser.tab.c"
    break;

  case 44: /* statement_expr_list_e: %empty  */
#line 233 "parser.y"
                     { (yyval.tree) = mk_empty();}
#line 2497 "parser.tab.c"
    break;

  case 45: /* statement: VAL endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 237 "parser.y"
                                                       {(yyval.tree) = mk_declaration_val(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[0].tree));}
#line 2503 "parser.tab.c"
    break;

  case 46: /* statement: VAR endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 238 "parser.y"
                                                       {(yyval.tree) = mk_declaration_var(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[0].tree));}
#line 2509 "parser.tab.c"
    break;

  case 47: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 239 "parser.y"
                                                                                           {(yyval.tree) = mk_declaration_val_type(mk_ident_lit((yyvsp[-8].str_value)),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2515 "parser.tab.c"
    break;

  case 48: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 240 "parser.y"
                                                                                           {(yyval.tree) = mk_declaration_var_type(mk_ident_lit((yyvsp[-8].str_value)),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2521 "parser.tab.c"
    break;

  case 49: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt ARRAY '[' type ']' endlOpt '=' endlOpt array  */
#line 241 "parser.y"
                                                                                              {(yyval.tree) = mk_declaration_var_array(mk_ident_lit((yyvsp[-11].str_value)),(yyvsp[-5].tree),(yyvsp[0].tree));}
#line 2527 "parser.tab.c"
    break;

  case 50: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt ARRAY '[' type ']' endlOpt '=' endlOpt array  */
#line 242 "parser.y"
                                                                                              {(yyval.tree) = mk_declaration_val_array(mk_ident_lit((yyvsp[-11].str_value)),(yyvsp[-5].tree),(yyvsp[0].tree));}
#line 2533 "parser.tab.c"
    break;

  case 51: /* statement: class  */
#line 243 "parser.y"
            { printf("Class:\n"); }
#line 2539 "parser.tab.c"
    break;

  case 52: /* statement: method  */
#line 244 "parser.y"
             {(yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); }
#line 2545 "parser.tab.c"
    break;

  case 53: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr ELSE endlOpt expr  */
#line 254 "parser.y"
                                                                           { (yyval.tree) = mk_if_else_expr((yyvsp[-6].tree), (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2551 "parser.tab.c"
    break;

  case 54: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr endlList ELSE endlOpt expr  */
#line 255 "parser.y"
                                                                                    { (yyval.tree) = mk_if_else_expr((yyvsp[-7].tree), (yyvsp[-4].tree), (yyvsp[0].tree)); }
#line 2557 "parser.tab.c"
    break;

  case 55: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr  */
#line 256 "parser.y"
                                                      { (yyval.tree) = mk_if_expr((yyvsp[-3].tree), (yyvsp[0].tree));}
#line 2563 "parser.tab.c"
    break;

  case 56: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt YIELD endlOpt expr  */
#line 264 "parser.y"
                                                                                                              { (yyval.tree) = mk_for_expr((yyvsp[-5].tree), (yyvsp[0].tree));  }
#line 2569 "parser.tab.c"
    break;

  case 57: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt expr  */
#line 265 "parser.y"
                                                                                                 { (yyval.tree) = mk_for_expr((yyvsp[-3].tree), (yyvsp[0].tree));  }
#line 2575 "parser.tab.c"
    break;

  case 58: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt YIELD endlOpt expr  */
#line 266 "parser.y"
                                                                                                                                { (yyval.tree) = mk_for_expr((yyvsp[-6].tree), (yyvsp[0].tree));  }
#line 2581 "parser.tab.c"
    break;

  case 59: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt expr  */
#line 267 "parser.y"
                                                                                                                  { (yyval.tree) = mk_for_expr((yyvsp[-4].tree), (yyvsp[0].tree));  }
#line 2587 "parser.tab.c"
    break;

  case 60: /* generators_and_conditions_parentheses_List: IDENTIFIER GENERATOR_OPERATOR expr TO expr  */
#line 272 "parser.y"
                                                      {(yyval.tree) = add_to_list(mk_list(),  mk_generator_without_by(mk_ident_lit((yyvsp[-4].str_value)), (yyvsp[-2].tree), (yyvsp[0].tree))); }
#line 2593 "parser.tab.c"
    break;

  case 61: /* generators_and_conditions_parentheses_List: IDENTIFIER GENERATOR_OPERATOR expr TO expr BY expr  */
#line 273 "parser.y"
                                                             {(yyval.tree) = add_to_list(mk_list(),  mk_generator_with_by(mk_ident_lit((yyvsp[-6].str_value)), (yyvsp[-4].tree), (yyvsp[-2].tree), (yyvsp[0].tree))); }
#line 2599 "parser.tab.c"
    break;

  case 62: /* generators_and_conditions_parentheses_List: IDENTIFIER GENERATOR_OPERATOR IDENTIFIER  */
#line 274 "parser.y"
                                                   {(yyval.tree) = add_to_list(mk_list(), mk_generator_without_to_and_by(mk_ident_lit((yyvsp[-2].str_value)),mk_ident_lit((yyvsp[0].str_value)))); }
#line 2605 "parser.tab.c"
    break;

  case 63: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List IF expr  */
#line 275 "parser.y"
                                                             { (yyval.tree) = add_to_list((yyvsp[-2].tree), mk_if_cond((yyvsp[0].tree))); }
#line 2611 "parser.tab.c"
    break;

  case 64: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List ';' IF expr  */
#line 276 "parser.y"
                                                                 { (yyval.tree) = add_to_list((yyvsp[-3].tree), mk_if_cond((yyvsp[0].tree))); }
#line 2617 "parser.tab.c"
    break;

  case 65: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List ';' IDENTIFIER GENERATOR_OPERATOR expr TO expr  */
#line 277 "parser.y"
                                                                                                    { (yyval.tree) = add_to_list((yyvsp[-6].tree), mk_generator_without_by(mk_ident_lit((yyvsp[-4].str_value)), (yyvsp[-2].tree), (yyvsp[0].tree)));}
#line 2623 "parser.tab.c"
    break;

  case 66: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List ';' IDENTIFIER GENERATOR_OPERATOR expr TO expr BY expr  */
#line 278 "parser.y"
                                                                                                            { (yyval.tree) = add_to_list((yyvsp[-8].tree), mk_generator_with_by(mk_ident_lit((yyvsp[-6].str_value)), (yyvsp[-4].tree), (yyvsp[-2].tree), (yyvsp[0].tree)));}
#line 2629 "parser.tab.c"
    break;

  case 67: /* generators_and_conditions_parentheses_List: generators_and_conditions_parentheses_List ';' IDENTIFIER GENERATOR_OPERATOR IDENTIFIER  */
#line 279 "parser.y"
                                                                                                  { (yyval.tree) = add_to_list((yyvsp[-4].tree), mk_generator_without_to_and_by(mk_ident_lit((yyvsp[-2].str_value)), mk_ident_lit((yyvsp[0].str_value)))); }
#line 2635 "parser.tab.c"
    break;

  case 68: /* generators_and_conditions_curly_braces_List: IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt expr TO endlOpt expr  */
#line 283 "parser.y"
                                                                                      {(yyval.tree) = add_to_list(mk_list(),  mk_generator_without_by(mk_ident_lit((yyvsp[-7].str_value)), (yyvsp[-3].tree), (yyvsp[0].tree))); }
#line 2641 "parser.tab.c"
    break;

  case 69: /* generators_and_conditions_curly_braces_List: IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt expr TO endlOpt expr BY endlOpt expr  */
#line 284 "parser.y"
                                                                                                      {(yyval.tree) = add_to_list(mk_list(),  mk_generator_with_by(mk_ident_lit((yyvsp[-10].str_value)), (yyvsp[-6].tree), (yyvsp[-3].tree), (yyvsp[0].tree)));}
#line 2647 "parser.tab.c"
    break;

  case 70: /* generators_and_conditions_curly_braces_List: IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt IDENTIFIER  */
#line 285 "parser.y"
                                                                   {(yyval.tree) = add_to_list(mk_list(), mk_generator_without_to_and_by(mk_ident_lit((yyvsp[-4].str_value)),mk_ident_lit((yyvsp[0].str_value)))); }
#line 2653 "parser.tab.c"
    break;

  case 71: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlOpt IF endlOpt expr  */
#line 286 "parser.y"
                                                                              { (yyval.tree) = add_to_list((yyvsp[-4].tree), mk_if_cond((yyvsp[0].tree)));}
#line 2659 "parser.tab.c"
    break;

  case 72: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlOpt ';' endlOpt IF expr  */
#line 287 "parser.y"
                                                                                  { (yyval.tree) = add_to_list((yyvsp[-5].tree), mk_if_cond((yyvsp[0].tree))); }
#line 2665 "parser.tab.c"
    break;

  case 73: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlOpt ';' endlOpt IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt expr TO endlOpt expr  */
#line 288 "parser.y"
                                                                                                                                                      { (yyval.tree) = add_to_list((yyvsp[-11].tree), mk_generator_without_by(mk_ident_lit((yyvsp[-7].str_value)), (yyvsp[-3].tree), (yyvsp[0].tree))); }
#line 2671 "parser.tab.c"
    break;

  case 74: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlOpt ';' endlOpt IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt expr TO endlOpt expr BY endlOpt expr  */
#line 289 "parser.y"
                                                                                                                                                                      { (yyval.tree) = add_to_list((yyvsp[-14].tree), mk_generator_with_by(mk_ident_lit((yyvsp[-10].str_value)), (yyvsp[-6].tree), (yyvsp[-3].tree), (yyvsp[0].tree))); }
#line 2677 "parser.tab.c"
    break;

  case 75: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlOpt ';' endlOpt IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt IDENTIFIER  */
#line 290 "parser.y"
                                                                                                                                            { (yyval.tree) = add_to_list((yyvsp[-8].tree), mk_generator_without_to_and_by(mk_ident_lit((yyvsp[-4].str_value)), mk_ident_lit((yyvsp[0].str_value))));}
#line 2683 "parser.tab.c"
    break;

  case 76: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlList IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt expr TO endlOpt expr  */
#line 291 "parser.y"
                                                                                                                                           {(yyval.tree) = add_to_list(mk_list(),  mk_generator_without_by(mk_ident_lit((yyvsp[-7].str_value)), (yyvsp[-3].tree), (yyvsp[0].tree)));}
#line 2689 "parser.tab.c"
    break;

  case 77: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlList IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt expr TO endlOpt expr BY endlOpt expr  */
#line 292 "parser.y"
                                                                                                                                                           {(yyval.tree) = add_to_list(mk_list(),  mk_generator_with_by(mk_ident_lit((yyvsp[-10].str_value)), (yyvsp[-6].tree), (yyvsp[-3].tree), (yyvsp[0].tree))); }
#line 2695 "parser.tab.c"
    break;

  case 78: /* generators_and_conditions_curly_braces_List: generators_and_conditions_curly_braces_List endlList IDENTIFIER endlOpt GENERATOR_OPERATOR endlOpt IDENTIFIER  */
#line 293 "parser.y"
                                                                                                                        {(yyval.tree) = add_to_list(mk_list(), mk_generator_without_to_and_by(mk_ident_lit((yyvsp[-4].str_value)),mk_ident_lit((yyvsp[0].str_value)))); }
#line 2701 "parser.tab.c"
    break;

  case 79: /* while_expr: WHILE endlOpt '(' expr ')' endlOpt expr  */
#line 299 "parser.y"
                                                              { (yyval.tree) = mk_while_expr((yyvsp[-3].tree),(yyvsp[0].tree)); }
#line 2707 "parser.tab.c"
    break;

  case 80: /* do_while_expr: DO endlOpt expr endlOpt WHILE '(' expr ')'  */
#line 303 "parser.y"
                                                                 { (yyval.tree) = mk_do_while_expr((yyvsp[-5].tree),(yyvsp[-1].tree)); }
#line 2713 "parser.tab.c"
    break;

  case 81: /* match_expr: expr MATCH endlOpt '{' endlOpt case_list endlOpt '}'  */
#line 309 "parser.y"
                                                              {(yyval.tree) = mk_match_expr((yyvsp[-7].tree),(yyvsp[-2].tree));}
#line 2719 "parser.tab.c"
    break;

  case 82: /* case_condition: expr_list  */
#line 314 "parser.y"
                                          {(yyval.tree) = add_case_condition((yyvsp[0].tree));}
#line 2725 "parser.tab.c"
    break;

  case 83: /* case_condition: CASE_PATTERN  */
#line 315 "parser.y"
                       {(yyval.tree) = add_case_condition((yyvsp[0].tree));}
#line 2731 "parser.tab.c"
    break;

  case 84: /* case_list: CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 321 "parser.y"
                                                                                         {(yyval.tree) = mk_list();(yyval.tree) = add_alt_case((yyval.tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2737 "parser.tab.c"
    break;

  case 85: /* case_list: case_list endlOpt semicolonList endlOpt CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 322 "parser.y"
                                                                                                                                 {(yyval.tree) = add_alt_case((yyvsp[-10].tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2743 "parser.tab.c"
    break;

  case 86: /* case_list: case_list endlOpt CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 323 "parser.y"
                                                                                                           {(yyval.tree) = add_alt_case((yyvsp[-8].tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2749 "parser.tab.c"
    break;

  case 87: /* expr_list_e: expr_list  */
#line 333 "parser.y"
                   { (yyval.tree) = (yyvsp[0].tree); }
#line 2755 "parser.tab.c"
    break;

  case 88: /* expr_list_e: %empty  */
#line 334 "parser.y"
                     {  (yyval.tree) = mk_list();}
#line 2761 "parser.tab.c"
    break;

  case 89: /* expr_list: expr  */
#line 339 "parser.y"
                      { (yyval.tree) = add_to_list(mk_list(), (yyvsp[0].tree));}
#line 2767 "parser.tab.c"
    break;

  case 90: /* expr_list: expr_list endlOpt ',' endlOpt expr  */
#line 340 "parser.y"
                                          { (yyval.tree) = add_to_list((yyvsp[-4].tree), (yyvsp[0].tree)); }
#line 2773 "parser.tab.c"
    break;

  case 91: /* expr: const  */
#line 345 "parser.y"
             { (yyval.tree) = (yyvsp[0].tree); }
#line 2779 "parser.tab.c"
    break;

  case 92: /* expr: IDENTIFIER  */
#line 346 "parser.y"
                                       {(yyval.tree) = mk_ident_lit((yyvsp[0].str_value)); }
#line 2785 "parser.tab.c"
    break;

  case 93: /* expr: IDENTIFIER endlOpt '=' endlOpt expr  */
#line 347 "parser.y"
                                           { printf("Assignment:\n"); }
#line 2791 "parser.tab.c"
    break;

  case 94: /* expr: '(' expr ')'  */
#line 348 "parser.y"
                   { printf("PARSER found expr - ( expr ) \n"); }
#line 2797 "parser.tab.c"
    break;

  case 95: /* expr: expr '>' endlOpt expr  */
#line 349 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) ">", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2803 "parser.tab.c"
    break;

  case 96: /* expr: expr '<' endlOpt expr  */
#line 350 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "<", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2809 "parser.tab.c"
    break;

  case 97: /* expr: expr MORE_OR_EQUAL_OPERATOR endlOpt expr  */
#line 351 "parser.y"
                                               { (yyval.tree) = mk_bin_op((char*) ">=", (yyvsp[-3].tree), (yyvsp[0].tree));  }
#line 2815 "parser.tab.c"
    break;

  case 98: /* expr: expr LESS_OR_EQUAL_OPERATOR endlOpt expr  */
#line 352 "parser.y"
                                               { (yyval.tree) = mk_bin_op((char*) "<=", (yyvsp[-3].tree), (yyvsp[0].tree));  }
#line 2821 "parser.tab.c"
    break;

  case 99: /* expr: expr EQ endlOpt expr  */
#line 353 "parser.y"
                           { (yyval.tree) = mk_bin_op((char*) "==", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2827 "parser.tab.c"
    break;

  case 100: /* expr: expr NEQ endlOpt expr  */
#line 354 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "!=", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2833 "parser.tab.c"
    break;

  case 101: /* expr: expr '+' endlOpt expr  */
#line 355 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "+", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2839 "parser.tab.c"
    break;

  case 102: /* expr: expr '-' endlOpt expr  */
#line 356 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "-", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2845 "parser.tab.c"
    break;

  case 103: /* expr: expr '/' endlOpt expr  */
#line 357 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "/", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2851 "parser.tab.c"
    break;

  case 104: /* expr: expr '*' endlOpt expr  */
#line 358 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "*", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2857 "parser.tab.c"
    break;

  case 105: /* expr: expr '%' endlOpt expr  */
#line 359 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "%", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2863 "parser.tab.c"
    break;

  case 106: /* expr: expr '&' endlOpt expr  */
#line 360 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "&", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2869 "parser.tab.c"
    break;

  case 107: /* expr: expr '|' endlOpt expr  */
#line 361 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "|", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2875 "parser.tab.c"
    break;

  case 108: /* expr: expr KW_OR endlOpt expr  */
#line 362 "parser.y"
                              { (yyval.tree) = mk_bin_op((char*) "||", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2881 "parser.tab.c"
    break;

  case 109: /* expr: expr KW_AND endlOpt expr  */
#line 363 "parser.y"
                               { (yyval.tree) = mk_bin_op((char*) "&&", (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2887 "parser.tab.c"
    break;

  case 110: /* expr: '-' expr  */
#line 364 "parser.y"
                             { (yyval.tree) = mk_unary_op("unary_minus_op", (yyvsp[0].tree)); }
#line 2893 "parser.tab.c"
    break;

  case 111: /* expr: '+' expr  */
#line 365 "parser.y"
                            { (yyval.tree) = mk_unary_op("unary_plus_op", (yyvsp[0].tree)); }
#line 2899 "parser.tab.c"
    break;

  case 112: /* expr: if_else_expr  */
#line 366 "parser.y"
                   {(yyval.tree)=(yyvsp[0].tree);}
#line 2905 "parser.tab.c"
    break;

  case 113: /* expr: for_expr  */
#line 367 "parser.y"
               { printf("PARSER found expr - for_expr\n"); }
#line 2911 "parser.tab.c"
    break;

  case 114: /* expr: while_expr  */
#line 368 "parser.y"
                 {(yyval.tree)=(yyvsp[0].tree);}
#line 2917 "parser.tab.c"
    break;

  case 115: /* expr: do_while_expr  */
#line 369 "parser.y"
                    {(yyval.tree)=(yyvsp[0].tree);}
#line 2923 "parser.tab.c"
    break;

  case 116: /* expr: match_expr  */
#line 370 "parser.y"
                 {(yyval.tree)=(yyvsp[0].tree);}
#line 2929 "parser.tab.c"
    break;

  case 117: /* expr: '{' statement_expr_list_e '}'  */
#line 371 "parser.y"
                                    { (yyval.tree) = (yyvsp[-1].tree); }
#line 2935 "parser.tab.c"
    break;

  case 118: /* expr: anonymous_func  */
#line 372 "parser.y"
                     { (yyval.tree)=(yyvsp[0].tree); }
#line 2941 "parser.tab.c"
    break;

  case 119: /* expr: method_call  */
#line 373 "parser.y"
                  { (yyval.tree)=(yyvsp[0].tree); }
#line 2947 "parser.tab.c"
    break;

  case 120: /* expr: create_instance_class  */
#line 374 "parser.y"
                            { (yyval.tree) = (yyvsp[0].tree); }
#line 2953 "parser.tab.c"
    break;

  case 121: /* expr: READLINE '(' ')'  */
#line 375 "parser.y"
                     { printf("readLine:\n"); }
#line 2959 "parser.tab.c"
    break;

  case 122: /* expr: PRINTLN '(' expr ')'  */
#line 376 "parser.y"
                          { printf("print:\n"); }
#line 2965 "parser.tab.c"
    break;

  case 123: /* expr: IDENTIFIER '.' '(' NUM_10 ')'  */
#line 377 "parser.y"
                                    { printf("array_call:\n"); }
#line 2971 "parser.tab.c"
    break;

  case 124: /* const: NUM_10  */
#line 384 "parser.y"
             { (yyval.tree) = mk_int_const((yyvsp[0].int_value)); }
#line 2977 "parser.tab.c"
    break;

  case 125: /* const: CONST_STRING  */
#line 385 "parser.y"
                   { (yyval.tree) = mk_string_const((yyvsp[0].str_value)); }
#line 2983 "parser.tab.c"
    break;

  case 126: /* const: CONST_CHAR  */
#line 386 "parser.y"
                 { (yyval.tree) = mk_char_const((yyvsp[0].str_value)); }
#line 2989 "parser.tab.c"
    break;

  case 127: /* const: KW_TRUE  */
#line 387 "parser.y"
              { (yyval.tree) = mk_boolean_const(true); }
#line 2995 "parser.tab.c"
    break;

  case 128: /* const: KW_FALSE  */
#line 388 "parser.y"
               { (yyval.tree) = mk_boolean_const(false); }
#line 3001 "parser.tab.c"
    break;

  case 129: /* const: KW_NULL  */
#line 389 "parser.y"
              { (yyval.tree) = mk_null_const(); }
#line 3007 "parser.tab.c"
    break;

  case 130: /* const: REAL_NUMBER  */
#line 390 "parser.y"
                  { (yyval.tree) = mk_real_const((yyvsp[0].real_value)); }
#line 3013 "parser.tab.c"
    break;

  case 131: /* const: array  */
#line 391 "parser.y"
            { (yyval.tree) = mk_array_const((yyvsp[0].tree)); }
#line 3019 "parser.tab.c"
    break;

  case 132: /* params: IDENTIFIER ':' type_list_car  */
#line 397 "parser.y"
                                    {  (yyval.tree) = add_to_list(mk_list(), mk_method_params(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree)));  }
#line 3025 "parser.tab.c"
    break;

  case 133: /* params: IDENTIFIER ':' type_list_car '=' const  */
#line 398 "parser.y"
                                              {  (yyval.tree) = add_to_list(mk_list(), mk_method_params_value(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 3031 "parser.tab.c"
    break;

  case 134: /* params: params ',' IDENTIFIER ':' type_list_car  */
#line 399 "parser.y"
                                               {  (yyval.tree) = add_to_list((yyvsp[-4].tree), mk_method_params(mk_ident_lit((yyvsp[-2].str_value)),(yyvsp[0].tree))); }
#line 3037 "parser.tab.c"
    break;

  case 135: /* params: params ',' IDENTIFIER ':' type_list_car '=' const  */
#line 400 "parser.y"
                                                         {  (yyval.tree) = add_to_list((yyvsp[-6].tree), mk_method_params_value(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[-2].tree),(yyvsp[0].tree))); }
#line 3043 "parser.tab.c"
    break;

  case 137: /* anonymous_func: '(' params ')' endlOpt RIGHT_ARROW_OPERATOR endlOpt expr  */
#line 406 "parser.y"
                                                                                   { (yyval.tree) = mk_anonym_func((yyvsp[-5].tree),(yyvsp[0].tree));}
#line 3049 "parser.tab.c"
    break;

  case 138: /* func: DEF endlOpt IDENTIFIER endlOpt method_params_list endlOpt ':' endlOpt type endlOpt '=' endlOpt expr  */
#line 410 "parser.y"
                                                                                                          { (yyval.tree) = mk_method_declaration(mk_ident_lit((yyvsp[-10].str_value)),(yyvsp[-8].tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 3055 "parser.tab.c"
    break;

  case 139: /* func: DEF endlOpt IDENTIFIER endlOpt ':' endlOpt type endlOpt '=' endlOpt expr  */
#line 411 "parser.y"
                                                                               { (yyval.tree) = mk_method_declaration_typeOnly(mk_ident_lit((yyvsp[-8].str_value)),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 3061 "parser.tab.c"
    break;

  case 140: /* func: DEF endlOpt IDENTIFIER endlOpt method_params_list endlOpt '=' endlOpt expr  */
#line 412 "parser.y"
                                                                                 { (yyval.tree) = mk_method_declaration_paramsOnly(mk_ident_lit((yyvsp[-6].str_value)),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 3067 "parser.tab.c"
    break;

  case 141: /* func: DEF endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 413 "parser.y"
                                                      { (yyval.tree) = mk_method_declaration_bodyOnly(mk_ident_lit((yyvsp[-4].str_value)),(yyvsp[0].tree));}
#line 3073 "parser.tab.c"
    break;

  case 142: /* method_params_list: '(' params ')'  */
#line 417 "parser.y"
                   { (yyval.tree) = (yyvsp[-1].tree); }
#line 3079 "parser.tab.c"
    break;

  case 143: /* method_params_list: method_params_list endlOpt '(' params ')'  */
#line 418 "parser.y"
                                              { (yyval.tree) = mk_list(); (yyval.tree) = add_to_list((yyvsp[-4].tree),(yyvsp[-1].tree));}
#line 3085 "parser.tab.c"
    break;

  case 144: /* method: func  */
#line 422 "parser.y"
           { (yyval.tree) = (yyvsp[0].tree); }
#line 3091 "parser.tab.c"
    break;

  case 145: /* method_arguments_list: '(' expr_list_e ')'  */
#line 426 "parser.y"
                        {(yyval.tree) = (yyvsp[-1].tree);}
#line 3097 "parser.tab.c"
    break;

  case 146: /* method_arguments_list: method_arguments_list '(' expr_list_e ')'  */
#line 427 "parser.y"
                                              {(yyval.tree) = mk_list(); add_to_list((yyvsp[-3].tree),mk_method_arguments_list((yyvsp[-1].tree)));}
#line 3103 "parser.tab.c"
    break;

  case 147: /* method_call: IDENTIFIER method_arguments_list  */
#line 431 "parser.y"
                                       { (yyval.tree) = mk_method_call((yyvsp[-1].str_value),(yyvsp[0].tree));}
#line 3109 "parser.tab.c"
    break;

  case 148: /* method_call: expr '.' IDENTIFIER method_arguments_list  */
#line 432 "parser.y"
                                                { (yyval.tree) = mk_method_call_identifier(mk_ident_lit((yyvsp[-3].tree)),mk_ident_lit((yyvsp[-1].str_value)),(yyvsp[0].tree));}
#line 3115 "parser.tab.c"
    break;

  case 149: /* type: INT_KW  */
#line 438 "parser.y"
             { (yyval.tree) = mk_integer_type(); }
#line 3121 "parser.tab.c"
    break;

  case 150: /* type: DOUBLE_KW  */
#line 439 "parser.y"
                { (yyval.tree) = mk_real_type(); }
#line 3127 "parser.tab.c"
    break;

  case 151: /* type: STRING_KW  */
#line 440 "parser.y"
                { (yyval.tree) = mk_string_type(); }
#line 3133 "parser.tab.c"
    break;

  case 152: /* type: CHAR_KW  */
#line 441 "parser.y"
              { (yyval.tree) = mk_char_type(); }
#line 3139 "parser.tab.c"
    break;

  case 153: /* type: BOOLEAN_KW  */
#line 442 "parser.y"
                 { (yyval.tree) = mk_boolean_type(); }
#line 3145 "parser.tab.c"
    break;

  case 154: /* type: ANY_KW  */
#line 443 "parser.y"
             { (yyval.tree) = mk_any_type(); }
#line 3151 "parser.tab.c"
    break;

  case 155: /* type: UNIT_KW  */
#line 444 "parser.y"
              { (yyval.tree) = mk_unit_type(); }
#line 3157 "parser.tab.c"
    break;

  case 156: /* type: type_list_simple  */
#line 445 "parser.y"
                       { (yyval.tree) = (yyvsp[0].tree);}
#line 3163 "parser.tab.c"
    break;

  case 157: /* type_list_car: type  */
#line 449 "parser.y"
           { (yyval.tree) = mk_list(); (yyval.tree) = add_to_list((yyval.tree), (yyvsp[0].tree));  }
#line 3169 "parser.tab.c"
    break;

  case 158: /* type_list_car: type_list_car RIGHT_ARROW_OPERATOR type  */
#line 450 "parser.y"
                                              { (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 3175 "parser.tab.c"
    break;

  case 159: /* type_list: type  */
#line 454 "parser.y"
           { (yyval.tree) = mk_list(); (yyval.tree) = add_to_list((yyval.tree), (yyvsp[0].tree)); }
#line 3181 "parser.tab.c"
    break;

  case 160: /* type_list: type_list_simple ',' type  */
#line 455 "parser.y"
                                { (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 3187 "parser.tab.c"
    break;

  case 161: /* type_list_simple: '(' type_list ')' RIGHT_ARROW_OPERATOR type  */
#line 459 "parser.y"
                                                 { (yyval.tree) = add_to_list((yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 3193 "parser.tab.c"
    break;

  case 162: /* array: array_literal  */
#line 470 "parser.y"
                     {(yyval.tree) = (yyvsp[0].tree); }
#line 3199 "parser.tab.c"
    break;

  case 163: /* array: initialized_array  */
#line 471 "parser.y"
                         {(yyval.tree) = mk_initialized_array((yyvsp[0].tree));}
#line 3205 "parser.tab.c"
    break;

  case 164: /* array_literal: ARRAY endlOpt '(' expr_list_e ')'  */
#line 475 "parser.y"
                                        {  (yyval.tree) = mk_array_literal((yyvsp[-1].tree)); }
#line 3211 "parser.tab.c"
    break;

  case 165: /* array_literal: ARRAY  */
#line 476 "parser.y"
                                   { (yyval.tree) = mk_empty_array(); }
#line 3217 "parser.tab.c"
    break;

  case 166: /* initialized_array: NEW endlOpt ARRAY endlOpt '[' type ']' '(' expr ')'  */
#line 480 "parser.y"
                                                           { (yyval.tree) = mk_initialized_array_with_type_and_expr((yyvsp[-4].tree), (yyvsp[-1].tree));}
#line 3223 "parser.tab.c"
    break;

  case 167: /* endlList: ENDL  */
#line 489 "parser.y"
                    { printf("PARSER found ENDL\n"); }
#line 3229 "parser.tab.c"
    break;

  case 168: /* endlList: endlList ENDL  */
#line 490 "parser.y"
                    { printf("PARSER found endlList\n"); }
#line 3235 "parser.tab.c"
    break;

  case 169: /* endlOpt: endlList  */
#line 495 "parser.y"
               { printf("PARSER found endlOpt\n"); }
#line 3241 "parser.tab.c"
    break;

  case 171: /* semicolonList: ';'  */
#line 501 "parser.y"
                   { printf("PARSER found SEMICOLON\n"); }
#line 3247 "parser.tab.c"
    break;

  case 172: /* semicolonList: semicolonList ';'  */
#line 502 "parser.y"
                        { printf("PARSER found semicolonList\n"); }
#line 3253 "parser.tab.c"
    break;

  case 173: /* separator_List: ENDL  */
#line 506 "parser.y"
            { printf("PARSER found ENDL\n"); }
#line 3259 "parser.tab.c"
    break;

  case 174: /* separator_List: ';'  */
#line 507 "parser.y"
            { printf("PARSER found SEMICOLON\n"); }
#line 3265 "parser.tab.c"
    break;

  case 175: /* separator_List: separator_List ENDL  */
#line 508 "parser.y"
                            { printf("PARSER add ENDL to separator_List\n"); }
#line 3271 "parser.tab.c"
    break;

  case 176: /* separator_List: separator_List ';'  */
#line 509 "parser.y"
                           { printf("PARSER add ; to separator_List\n"); }
#line 3277 "parser.tab.c"
    break;


#line 3281 "parser.tab.c"

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

