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
#define YYLAST   1252

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  184
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
       0,   123,   123,   130,   131,   132,   136,   137,   138,   139,
     143,   148,   149,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   173,
     174,   178,   179,   192,   193,   201,   202,   210,   211,   212,
     213,   214,   215,   219,   220,   224,   225,   226,   227,   228,
     229,   230,   231,   240,   241,   242,   250,   251,   252,   253,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   287,   291,   297,   302,   303,   309,   310,   311,   321,
     322,   327,   328,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   370,   371,   372,   373,
     378,   379,   380,   381,   382,   383,   384,   390,   391,   392,
     393,   398,   403,   404,   408,   409,   410,   411,   412,   413,
     414,   415,   419,   420,   424,   425,   431,   432,   433,   434,
     435,   436,   437,   441,   442,   446,   447,   451,   462,   463,
     467,   468,   472,   481,   482,   487,   488,   493,   494,   498,
     499,   500,   501,   505,   506
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

#define YYPACT_NINF (-406)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-177)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,  -406,  -406,    42,  -406,    12,   906,  -406,  -406,  -406,
     762,   762,  1004,  -406,  -406,  -406,  -406,   288,  -406,  -406,
      45,    45,    45,    45,    45,    45,    45,    26,    85,   144,
      51,  -406,  -406,  -406,    45,    45,  -406,  -406,    45,    45,
    -406,   107,   109,   111,  -406,   442,    13,  -406,  -406,  -406,
    -406,  -406,  -406,  1123,  -406,  -406,  -406,  -406,  -406,  -406,
    -406,  -406,  -406,  -406,   290,    17,    34,  -406,   762,    24,
     170,   197,    35,    96,   174,   179,     4,   762,   185,   155,
     762,   215,   227,    45,   226,   121,   230,   198,     6,     6,
       6,  -406,   561,  -406,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
     436,  -406,   238,    45,   251,   157,  1123,   248,   261,   762,
    -406,    45,    45,    45,    45,   762,    87,    45,   118,   762,
      45,   269,  -406,   762,   258,    45,   268,    45,    18,  -406,
     218,   220,   221,   442,  -406,  1123,   762,   762,   762,   762,
     762,   762,   762,   762,   762,   216,   762,   762,   762,   762,
     762,   762,  -406,  -406,  -406,  -406,  -406,  -406,  -406,  -406,
     241,   291,   250,  -406,   298,   306,   170,   308,   762,   762,
      38,   237,   356,   267,   762,    -1,   151,   294,   679,   314,
    -406,   323,    45,   199,   762,   324,     1,  -406,  -406,  -406,
    -406,   632,    48,   342,   342,   374,   374,  -406,  -406,  -406,
      45,   368,   368,   428,   602,   342,   342,   436,   436,    45,
      45,  -406,  -406,  1136,   342,    45,    45,    45,    45,    45,
     166,  1123,    45,   762,   153,    45,    45,    45,   315,    45,
      45,  -406,   233,    45,    45,   332,    45,   327,   436,    66,
      45,  -406,   311,  -406,    30,   762,   762,   762,    16,   762,
      86,   762,  -406,    45,   300,   860,  1123,   303,   762,   309,
     762,    47,    81,   762,   762,   333,    45,    45,    45,   762,
     436,   364,   160,   319,  -406,   357,   363,   366,   387,   376,
     184,   370,    45,    45,   477,  1123,  1123,  1123,    53,   378,
      45,  1123,   389,    45,  1045,   369,   477,    45,  1123,   677,
    1123,    45,  1123,    45,    45,    45,    45,  1061,  1123,    66,
     762,   436,   329,  1123,    45,  -406,    45,    45,   332,   392,
     402,   404,   105,   344,   391,   394,   405,   195,    99,  -406,
    -406,   406,   423,   436,   424,   436,   425,    45,    19,   367,
     762,  -406,   372,  1153,   381,   762,   959,   171,  -406,   414,
    1123,    45,    45,    45,   440,   762,   436,   177,   762,   436,
     436,   421,   435,   196,  -406,   441,   450,   762,  -406,    45,
     446,    45,  -406,  -406,    14,   399,   436,   443,    45,   447,
      45,   762,    45,   477,  1123,   477,  -406,   409,    45,  1123,
      45,  1123,    45,   762,   344,   467,   762,   436,    45,  1123,
      45,  -406,  1108,   478,   481,   472,   487,   460,   471,   436,
     436,   100,   445,   195,  -406,   468,   436,  -406,    45,   762,
      45,   762,  1136,   762,  -406,   438,    45,  1177,   762,   448,
    1123,  -406,    45,  1123,    45,   762,   508,  -406,   477,   477,
     436,   436,   506,   507,   513,   515,  -406,    13,    45,    45,
    -406,   519,  1123,   537,  1123,  1136,   477,   477,  -406,   483,
    1123,    45,   762,   541,  1123,    45,  -406,  -406,   542,   543,
     436,   436,   477,   477,   762,   485,   195,    45,    45,  -406,
     489,    45,  1184,  1123,    45,   762,   477,   477,   546,   547,
    -406,  -406,  1123,    13,    45,     8,     8,    45,   477,  -406,
     497,   762,  1123,  -406,  -406,   477,   477,   762,   494,  -406,
    -406,   477,   500,    45,  1123,  -406,  -406,  1123,    13,  -406,
      45,   477,   762,   477,   503,  1123,  -406,    45,   477,  -406
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     184,   179,   180,     0,     2,   183,     0,     1,   181,   182,
       0,     0,   140,   126,   127,   128,   129,    94,   132,   131,
     176,   176,   176,   176,   176,   176,   176,     0,     0,   171,
       0,   133,   134,   135,   176,   176,    34,    33,   176,   176,
      51,     0,     0,     0,   122,     0,   184,    37,   115,   116,
     117,   118,   119,    39,   130,    93,   120,    52,   121,   136,
     168,   169,   114,   113,    94,     0,     0,   173,    90,     0,
     154,   175,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   176,     0,     0,     0,     0,   184,   184,
     184,    38,   183,    43,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
       0,    97,     0,   176,     0,    89,    91,     0,     0,    90,
     174,   176,   176,   176,   176,     0,     0,   176,   176,     0,
     176,     0,   123,    90,     0,   176,    31,   176,   176,    10,
       0,     0,     0,     0,    40,    41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   156,   157,   158,   159,   160,   161,   162,   163,
     137,     0,     0,   152,     0,     0,   155,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     124,     0,   176,     0,    90,     0,     0,     3,     4,     5,
      42,   110,   109,    98,    99,   104,   105,   107,   106,   108,
     176,   102,   103,   111,   112,   100,   101,     0,     0,   176,
     176,   125,   153,    95,    96,   176,   176,   176,   176,   176,
       0,    60,   176,     0,     0,   176,   176,   176,     0,   176,
     176,   170,     0,   176,   176,   140,   176,     0,     0,    30,
     176,     9,     0,   164,   138,     0,     0,     0,     0,     0,
       0,     0,    63,   176,     0,     0,    64,     0,     0,     0,
       0,   175,     0,     0,     0,     0,   176,   176,   176,     0,
       0,     0,     0,     0,    32,     0,     0,     0,    29,     0,
       0,     0,   176,   176,     0,   141,    92,    45,     0,     0,
     176,    46,     0,   176,    55,     0,     0,   176,    57,     0,
      65,   176,    69,   176,   176,   176,   176,     0,    81,    30,
       0,     0,     0,   147,   176,   142,   176,   176,   140,     0,
       0,     0,     0,     6,     0,     0,    35,     0,     0,   139,
     165,     0,     0,     0,     0,     0,     0,   176,     0,    61,
       0,    68,     0,     0,     0,     0,     0,     0,    82,     0,
     151,   176,   176,   176,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     0,     0,     0,    85,   176,
      84,   176,    83,   177,   176,     0,     0,     0,   176,     0,
     176,     0,   176,     0,    56,     0,    72,     0,   176,    73,
     176,    59,   176,     0,    11,     0,     0,     0,   176,   146,
     176,   143,     0,    14,    13,     0,     0,     0,     0,     0,
       0,   176,     0,     0,   178,     0,     0,   166,   176,     0,
     176,     0,    53,     0,    62,    66,   176,     0,     0,     0,
      74,    12,   176,   150,   176,     0,     0,   172,     0,     0,
       0,     0,     0,     0,    22,    21,    36,   184,   176,   176,
     167,     0,    47,     0,    48,    54,     0,     0,    80,     0,
      58,   176,     0,     0,   145,   176,    16,    15,    18,    17,
       0,     0,     0,     0,     0,     0,     0,   176,   176,    67,
      70,   176,     0,   149,   176,     0,     0,     0,    26,    25,
      24,    23,    86,   184,   176,     0,     0,   176,     0,    77,
       0,     0,   144,    20,    19,     0,     0,     0,     0,    50,
      49,     0,    78,   176,   148,    28,    27,    88,   184,    71,
     176,     0,     0,     0,    75,    87,    79,   176,     0,    76
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -406,  -406,  -406,   479,  -406,  -406,  -406,   253,  -406,    -5,
    -322,  -406,   313,   -37,  -406,  -406,  -406,  -406,  -406,  -406,
    -406,  -405,  -406,  -105,  -330,    -6,  -406,  -192,  -243,  -406,
     325,  -406,   451,  -406,   -33,   358,  -406,  -220,  -245,  -406,
    -406,  -225,   433,  -406,   529,   -43
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,    40,    41,    42,    43,   288,   289,    44,   290,
     251,    46,     4,    47,    48,    49,   185,   237,    50,    51,
      52,   379,   293,   114,   115,   116,    54,    55,    66,    56,
     246,    57,    70,    58,   169,   170,   341,   300,    59,    60,
      61,    71,   174,   384,     5,     6
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      53,    45,   282,    93,    62,    63,    65,   380,    91,     1,
     -44,   374,   271,     1,   177,     8,     1,    67,   458,   232,
     249,    67,   120,   126,    94,    95,    96,    97,   191,    98,
      99,   100,   101,   102,   233,   298,   294,   111,   264,   112,
     303,   121,     7,   117,   225,    80,   122,   421,    67,   226,
     120,    29,   118,   392,   113,   144,   103,    96,    97,   299,
      98,    99,   100,   101,   102,   104,   105,   106,   107,   108,
     109,   128,   298,   250,   131,   313,   263,   234,   342,   348,
     127,   504,   441,   -44,     2,   367,   145,   143,     2,   247,
       9,     2,   424,   380,    -8,   217,   104,   105,   286,   287,
     108,   109,   339,    67,    81,   298,   200,   162,   163,   164,
     165,   166,   167,   168,   349,   183,   314,   352,    83,   182,
     456,    67,   184,   188,   123,    94,    95,    96,    97,   302,
      98,    99,   100,   101,   102,    36,    37,   371,   372,   381,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   136,
     211,   212,   213,   214,   215,   216,   380,   103,   315,   316,
      67,   397,  -176,  -176,   137,   112,   104,   105,   106,   107,
     108,   109,   223,   224,    36,    37,   382,   383,   231,   235,
     325,   267,   112,    88,   253,    89,   236,    90,   268,   119,
      13,    14,    15,    16,   262,    18,    19,   411,   125,   402,
     120,   434,   124,   435,   129,   243,   403,    10,    11,    29,
     244,    31,    32,    33,    12,   285,   334,   335,   245,    13,
      14,    15,    16,    17,    18,    19,   130,   266,   417,   418,
      22,    23,    24,    25,   263,   132,    27,    28,    29,   276,
      31,    32,    33,   227,   277,   469,   133,   324,   228,   295,
     296,   297,   245,   301,   135,   304,   476,   477,   138,   308,
     519,   520,   310,    35,   312,   340,   171,   317,   318,    38,
     378,   173,   175,   323,   489,   490,    94,    95,    96,    97,
      68,    98,    99,   100,   101,   102,   192,   194,   361,   190,
     500,   501,   210,    67,  -176,   197,  -176,   198,   199,  -176,
     510,   110,   218,   220,   513,   514,   217,    68,   103,    68,
     387,    69,   389,    69,   360,   219,   522,   104,   105,   106,
     107,   108,   109,   525,   526,   326,   221,   373,   222,   529,
     327,   230,   238,   410,   273,   362,   413,   414,   328,   534,
     363,   536,   240,   241,   394,   248,   539,   284,   328,   399,
     401,   292,   319,   427,    98,    99,   100,   101,   102,   409,
     281,   306,   412,    94,    95,    96,    97,   309,    98,    99,
     100,   101,   102,   311,   444,   110,   229,    96,    97,   329,
      98,    99,   100,   101,   102,   432,   454,   455,   100,   101,
     102,   330,   332,   460,   331,   103,   333,   440,   336,   343,
     443,   140,   141,   142,   104,   105,   106,   107,   108,   109,
     345,   368,   137,   369,   484,   370,   250,   478,   479,   375,
     108,   109,   376,   462,   377,   464,   385,   465,   386,   393,
     388,   390,   470,   395,   404,    94,    95,    96,    97,   474,
      98,    99,   100,   101,   102,   398,   408,   498,   499,   415,
      72,  -176,   419,    73,    74,    75,    76,    77,    78,    79,
     517,   420,    82,   416,   426,   428,   493,    84,    85,   430,
     436,    86,    87,   442,    20,    21,   104,   105,   502,   107,
     108,   109,    26,   450,   448,   532,    30,   449,   452,   512,
     162,   163,   164,   165,   166,   167,   168,    72,   451,   453,
     466,    13,    14,    15,    16,   524,    18,    19,   459,    34,
     457,   527,   471,    38,   475,    39,   134,   480,   481,   482,
      29,   483,    31,    32,    33,   487,   535,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   488,   491,   263,   172,   494,   496,   497,
     503,   507,   515,   516,   178,   179,   180,   181,   523,   528,
     186,   187,   530,   189,     8,   537,   139,   278,   193,   176,
     195,   196,   359,    10,    11,    92,   254,     0,     0,     0,
      12,     0,     0,     0,     0,    13,    14,    15,    16,    17,
      18,    19,     0,    20,    21,     0,    22,    23,    24,    25,
       0,    26,    27,    28,    29,    30,    31,    32,    33,    94,
      95,    96,    97,     0,    98,    99,   100,   101,   102,     0,
       0,     0,     0,     0,     0,   242,     0,     0,    34,    35,
      36,    37,    38,     0,    39,     0,     0,     0,     0,     9,
      95,    96,    97,   252,    98,    99,   100,   101,   102,     0,
     104,   105,   255,   256,   108,   109,     0,     0,   257,   258,
     259,   260,   261,     0,     0,   265,     0,     0,   269,   270,
     272,     0,   274,   275,     0,     0,   279,   280,     0,   283,
     104,   105,     0,   291,   108,   109,    94,    95,    96,    97,
       0,    98,    99,   100,   101,   102,   305,     0,     0,   239,
       0,    13,    14,    15,    16,   351,    18,    19,     0,   320,
     321,   322,     0,     0,     0,     0,     0,     0,   103,     0,
      29,     0,    31,    32,    33,   337,   338,   104,   105,   106,
     107,   108,   109,   344,     0,     0,   346,     0,     0,     0,
     350,     0,     0,     0,   353,   263,   354,   355,   356,   357,
       0,     0,     0,     0,     0,     0,     0,   364,     0,   365,
     366,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
     391,    12,     0,     0,     0,     0,    13,    14,    15,    16,
      17,    18,    19,     0,   405,   406,   407,    22,    23,    24,
      25,     0,     0,    27,    28,    29,     0,    31,    32,    33,
       0,     0,   422,     0,   423,     0,     0,   425,     0,     0,
       0,   429,     0,   431,     0,   433,     0,     0,     0,     0,
      35,   437,     0,   438,     0,   439,     0,     0,     0,     0,
       0,   445,     0,   446,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   461,     0,   463,     0,     0,     0,     0,     0,   467,
       0,     0,    10,    11,     0,   472,     0,   473,     0,    12,
       0,     0,     0,     0,    13,    14,    15,    16,    17,    18,
      19,   485,   486,     0,     0,    22,    23,    24,    25,     0,
       0,    27,    28,    29,   492,    31,    32,    33,   495,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
     505,   506,     0,   307,   508,    12,     0,   511,    35,     0,
      13,    14,    15,    16,    17,    18,    19,   518,    20,    21,
     521,    22,    23,    24,    25,     0,    26,    27,    28,    29,
      30,    31,    32,    33,     0,     0,   531,     0,     0,     0,
       0,     0,     0,   533,     0,     0,     0,     0,     0,     0,
     538,    10,    11,    34,    35,    36,    37,    38,    12,    39,
       0,     0,     0,    13,    14,    15,    16,    17,    18,    19,
       0,     0,     0,     0,    22,    23,    24,    25,     0,     0,
      27,    28,    29,     0,    31,    32,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,   400,    12,     0,     0,     0,    35,    13,    14,
      15,    16,    64,    18,    19,     0,     0,     0,     0,    22,
      23,    24,    25,     0,     0,    27,    28,    29,     0,    31,
      32,    33,    94,    95,    96,    97,     0,    98,    99,   100,
     101,   102,     0,     0,     0,     0,     0,     0,    94,    95,
      96,    97,    35,    98,    99,   100,   101,   102,     0,   347,
       0,   358,     0,     0,   103,     0,     0,     0,     0,     0,
       0,     0,     0,   104,   105,   106,   107,   108,   109,     0,
     103,     0,     0,     0,     0,     0,     0,     0,     0,   104,
     105,   106,   107,   108,   109,    94,    95,    96,    97,     0,
      98,    99,   100,   101,   102,     0,     0,     0,   447,     0,
      94,    95,    96,    97,     0,    98,    99,   100,   101,   102,
       0,     0,     0,    94,    95,    96,    97,   103,    98,    99,
     100,   101,   102,     0,     0,     0,   104,   105,   106,   107,
     108,   109,   103,     0,     0,     0,     0,     0,     0,     0,
       0,   104,   105,   106,   107,   108,   109,    13,    14,    15,
      16,   396,    18,    19,   104,   105,   106,   107,   108,   109,
       0,     0,     0,     0,     0,     0,    29,     0,    31,    32,
      33,    13,    14,    15,    16,   468,    18,    19,    13,    14,
      15,    16,   509,    18,    19,     0,     0,     0,     0,     0,
      29,   263,    31,    32,    33,     0,     0,    29,     0,    31,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   263,     0,     0,     0,     0,
       0,     0,   263
};

static const yytype_int16 yycheck[] =
{
       6,     6,   245,    46,    10,    11,    12,   337,    45,     3,
       0,   333,   237,     3,   119,     3,     3,     3,   423,    20,
      19,     3,     3,    19,     7,     8,     9,    10,   133,    12,
      13,    14,    15,    16,    35,    19,     6,    20,   230,     5,
     260,     6,     0,    19,     6,    19,    11,   377,     3,    11,
       3,    43,    28,    34,    20,    92,    39,     9,    10,    43,
      12,    13,    14,    15,    16,    48,    49,    50,    51,    52,
      53,    77,    19,    72,    80,    28,    68,    78,   298,   304,
      76,   486,   404,    77,    78,   328,    92,    92,    78,   194,
      78,    78,    78,   423,    76,    65,    48,    49,    32,    33,
      52,    53,   294,     3,    19,    19,   143,    54,    55,    56,
      57,    58,    59,    60,   306,    28,    35,   309,    67,   125,
      20,     3,    35,   129,    28,     7,     8,     9,    10,    43,
      12,    13,    14,    15,    16,    69,    70,    32,    33,    40,
     146,   147,   148,   149,   150,   151,   152,   153,   154,    28,
     156,   157,   158,   159,   160,   161,   486,    39,    77,    78,
       3,   353,     5,    19,    43,     5,    48,    49,    50,    51,
      52,    53,   178,   179,    69,    70,    77,    78,   184,    28,
      20,    28,     5,    76,   217,    76,    35,    76,    35,    19,
      24,    25,    26,    27,    28,    29,    30,    20,    19,    28,
       3,   393,    28,   395,    19,     6,    35,    12,    13,    43,
      11,    45,    46,    47,    19,   248,    32,    33,    19,    24,
      25,    26,    27,    28,    29,    30,    71,   233,    32,    33,
      35,    36,    37,    38,    68,    20,    41,    42,    43,     6,
      45,    46,    47,     6,    11,   437,    19,   280,    11,   255,
     256,   257,    19,   259,    28,   261,   448,   449,    28,   265,
     505,   506,   268,    68,   270,   298,    28,   273,   274,    71,
      75,    20,    24,   279,   466,   467,     7,     8,     9,    10,
      19,    12,    13,    14,    15,    16,    28,    19,   321,    20,
     482,   483,    76,     3,     6,    77,     6,    77,    77,    11,
     492,    11,    11,     5,   496,   497,    65,    19,    39,    19,
     343,    23,   345,    23,   320,    65,   508,    48,    49,    50,
      51,    52,    53,   515,   516,     6,    20,   332,    20,   521,
      11,    64,    38,   366,    19,     6,   369,   370,    19,   531,
      11,   533,    28,    20,   350,    21,   538,    20,    19,   355,
     356,    40,    19,   386,    12,    13,    14,    15,    16,   365,
      28,    61,   368,     7,     8,     9,    10,    64,    12,    13,
      14,    15,    16,    64,   407,    11,    20,     9,    10,    22,
      12,    13,    14,    15,    16,   391,   419,   420,    14,    15,
      16,    28,     5,   426,    28,    39,    20,   403,    28,    21,
     406,    88,    89,    90,    48,    49,    50,    51,    52,    53,
      21,    19,    43,    11,   457,    11,    72,   450,   451,    28,
      52,    53,    28,   429,    19,   431,    20,   433,     5,    62,
       6,     6,   438,    61,    20,     7,     8,     9,    10,   445,
      12,    13,    14,    15,    16,    64,     6,   480,   481,    28,
      17,     5,    11,    20,    21,    22,    23,    24,    25,    26,
     503,    11,    29,    28,    65,    22,   472,    34,    35,    22,
      61,    38,    39,     6,    32,    33,    48,    49,   484,    51,
      52,    53,    40,    11,     6,   528,    44,     6,    28,   495,
      54,    55,    56,    57,    58,    59,    60,    64,    11,    28,
      62,    24,    25,    26,    27,   511,    29,    30,    40,    67,
      65,   517,    64,    71,     6,    73,    83,    11,    11,     6,
      43,     6,    45,    46,    47,     6,   532,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,     6,    61,    68,   113,     6,     6,     6,
      65,    62,     6,     6,   121,   122,   123,   124,    61,    65,
     127,   128,    62,   130,     3,    62,    87,   242,   135,   118,
     137,   138,   319,    12,    13,    46,   218,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    -1,    32,    33,    -1,    35,    36,    37,    38,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,     7,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,   192,    -1,    -1,    67,    68,
      69,    70,    71,    -1,    73,    -1,    -1,    -1,    -1,    78,
       8,     9,    10,   210,    12,    13,    14,    15,    16,    -1,
      48,    49,   219,   220,    52,    53,    -1,    -1,   225,   226,
     227,   228,   229,    -1,    -1,   232,    -1,    -1,   235,   236,
     237,    -1,   239,   240,    -1,    -1,   243,   244,    -1,   246,
      48,    49,    -1,   250,    52,    53,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,   263,    -1,    -1,    20,
      -1,    24,    25,    26,    27,    28,    29,    30,    -1,   276,
     277,   278,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      43,    -1,    45,    46,    47,   292,   293,    48,    49,    50,
      51,    52,    53,   300,    -1,    -1,   303,    -1,    -1,    -1,
     307,    -1,    -1,    -1,   311,    68,   313,   314,   315,   316,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,   326,
     327,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,
     347,    19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    -1,   361,   362,   363,    35,    36,    37,
      38,    -1,    -1,    41,    42,    43,    -1,    45,    46,    47,
      -1,    -1,   379,    -1,   381,    -1,    -1,   384,    -1,    -1,
      -1,   388,    -1,   390,    -1,   392,    -1,    -1,    -1,    -1,
      68,   398,    -1,   400,    -1,   402,    -1,    -1,    -1,    -1,
      -1,   408,    -1,   410,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   428,    -1,   430,    -1,    -1,    -1,    -1,    -1,   436,
      -1,    -1,    12,    13,    -1,   442,    -1,   444,    -1,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,   458,   459,    -1,    -1,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,   471,    45,    46,    47,   475,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    13,
     487,   488,    -1,    63,   491,    19,    -1,   494,    68,    -1,
      24,    25,    26,    27,    28,    29,    30,   504,    32,    33,
     507,    35,    36,    37,    38,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    -1,   523,    -1,    -1,    -1,
      -1,    -1,    -1,   530,    -1,    -1,    -1,    -1,    -1,    -1,
     537,    12,    13,    67,    68,    69,    70,    71,    19,    73,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    42,    43,    -1,    45,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,
      -1,    -1,    63,    19,    -1,    -1,    -1,    68,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    -1,    -1,    41,    42,    43,    -1,    45,
      46,    47,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,     7,     8,
       9,    10,    68,    12,    13,    14,    15,    16,    -1,    34,
      -1,    20,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    -1,    -1,    -1,    20,    -1,
       7,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      -1,    -1,    -1,     7,     8,     9,    10,    39,    12,    13,
      14,    15,    16,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    24,    25,    26,
      27,    28,    29,    30,    48,    49,    50,    51,    52,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,
      47,    24,    25,    26,    27,    28,    29,    30,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      43,    68,    45,    46,    47,    -1,    -1,    43,    -1,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    68
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    78,    80,    91,   123,   124,     0,     3,    78,
      12,    13,    19,    24,    25,    26,    27,    28,    29,    30,
      32,    33,    35,    36,    37,    38,    40,    41,    42,    43,
      44,    45,    46,    47,    67,    68,    69,    70,    71,    73,
      81,    82,    83,    84,    87,    88,    90,    92,    93,    94,
      97,    98,    99,   104,   105,   106,   108,   110,   112,   117,
     118,   119,   104,   104,    28,   104,   107,     3,    19,    23,
     111,   120,   121,   121,   121,   121,   121,   121,   121,   121,
      19,    19,   121,    67,   121,   121,   121,   121,    76,    76,
      76,    92,   123,   124,     7,     8,     9,    10,    12,    13,
      14,    15,    16,    39,    48,    49,    50,    51,    52,    53,
      11,    20,     5,    20,   102,   103,   104,    19,    28,    19,
       3,     6,    11,    28,    28,    19,    19,    76,   104,    19,
      71,   104,    20,    19,   121,    28,    28,    43,    28,    82,
      91,    91,    91,    88,    92,   104,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,    54,    55,    56,    57,    58,    59,    60,   113,
     114,    28,   121,    20,   121,    24,   111,   102,   121,   121,
     121,   121,   104,    28,    35,    95,   121,   121,   104,   121,
      20,   102,    28,   121,    19,   121,   121,    77,    77,    77,
      92,   104,   104,   104,   104,   104,   104,   104,   104,   104,
      76,   104,   104,   104,   104,   104,   104,    65,    11,    65,
       5,    20,    20,   104,   104,     6,    11,     6,    11,    20,
      64,   104,    20,    35,    78,    28,    35,    96,    38,    20,
      28,    20,   121,     6,    11,    19,   109,   102,    21,    19,
      72,    89,   121,   113,   114,   121,   121,   121,   121,   121,
     121,   121,    28,    68,   106,   121,   104,    28,    35,   121,
     121,   120,   121,    19,   121,   121,     6,    11,   109,   121,
     121,    28,   107,   121,    20,   113,    32,    33,    85,    86,
      88,   121,    40,   101,     6,   104,   104,   104,    19,    43,
     116,   104,    43,   116,   104,   121,    61,    63,   104,    64,
     104,    64,   104,    28,    35,    77,    78,   104,   104,    19,
     121,   121,   121,   104,   113,    20,     6,    11,    19,    22,
      28,    28,     5,    20,    32,    33,    28,   121,   121,   106,
     113,   115,   116,    21,   121,    21,   121,    34,   120,   106,
     121,    28,   106,   121,   121,   121,   121,   121,    20,    86,
     104,   113,     6,    11,   121,   121,   121,   107,    19,    11,
      11,    32,    33,    88,    89,    28,    28,    19,    75,   100,
     103,    40,    77,    78,   122,    20,     5,   113,     6,   113,
       6,   121,    34,    62,   104,    61,    28,   106,    64,   104,
      63,   104,    28,    35,    20,   121,   121,   121,     6,   104,
     113,    20,   104,   113,   113,    28,    28,    32,    33,    11,
      11,   103,   121,   121,    78,   121,    65,   113,    22,   121,
      22,   121,   104,   121,   106,   106,    61,   121,   121,   121,
     104,    89,     6,   104,   113,   121,   121,    20,     6,     6,
      11,    11,    28,    28,   113,   113,    20,    65,   100,    40,
     113,   121,   104,   121,   104,   104,    62,   121,    28,   106,
     104,    64,   121,   121,   104,     6,   106,   106,   113,   113,
      11,    11,     6,     6,   124,   121,   121,     6,     6,   106,
     106,    61,   121,   104,     6,   121,     6,     6,   113,   113,
     106,   106,   104,    65,   100,   121,   121,    62,   121,    28,
     106,   121,   104,   106,   106,     6,     6,   124,   121,   117,
     117,   121,   106,    61,   104,   106,   106,   104,    65,   106,
      62,   121,   124,   121,   106,   104,   106,    62,   121,   106
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
     104,   104,   104,   104,   104,   104,   105,   105,   105,   105,
     106,   106,   106,   106,   106,   106,   106,   107,   107,   107,
     107,   108,   109,   109,   110,   110,   110,   110,   110,   110,
     110,   110,   111,   111,   112,   112,   113,   113,   113,   113,
     113,   113,   113,   114,   114,   115,   115,   116,   117,   117,
     118,   118,   119,   120,   120,   121,   121,   122,   122,   123,
     123,   123,   123,   124,   124
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
       0,     1,     5,     1,     1,     5,     5,     3,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     5,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     5,     7,
       0,     7,     3,     5,    13,    11,     9,     7,    14,    12,
      10,     8,     3,     4,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     5,     1,     1,
       5,     1,    10,     1,     2,     1,     0,     1,     2,     1,
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
  case 37: /* statement_expr_list: statement  */
#line 210 "parser.y"
                { printf("Add first statement :\n"); }
#line 2202 "parser.tab.c"
    break;

  case 38: /* statement_expr_list: visibility_modifier statement  */
#line 211 "parser.y"
                                    { printf("Add first visibility_modifier statement :\n"); }
#line 2208 "parser.tab.c"
    break;

  case 39: /* statement_expr_list: expr  */
#line 212 "parser.y"
           { printf("Add first statement :\n"); }
#line 2214 "parser.tab.c"
    break;

  case 40: /* statement_expr_list: statement_expr_list separator_List statement  */
#line 213 "parser.y"
                                                    { printf("Add new statement to statement_expr_list :\n"); }
#line 2220 "parser.tab.c"
    break;

  case 41: /* statement_expr_list: statement_expr_list separator_List expr  */
#line 214 "parser.y"
                                               { printf("Add new expr to statement_expr_list :\n"); }
#line 2226 "parser.tab.c"
    break;

  case 42: /* statement_expr_list: statement_expr_list separator_List visibility_modifier statement  */
#line 215 "parser.y"
                                                                        { printf("Add new visibility_modifier to statement_expr_list :\n"); }
#line 2232 "parser.tab.c"
    break;

  case 44: /* statement_expr_list_e: %empty  */
#line 220 "parser.y"
                     { printf("PARSER found statement_list_e - nothing\n"); }
#line 2238 "parser.tab.c"
    break;

  case 45: /* statement: VAL endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 224 "parser.y"
                                                       { printf("implicit value declaration:\n"); }
#line 2244 "parser.tab.c"
    break;

  case 46: /* statement: VAR endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 225 "parser.y"
                                                       { printf("implicit variable declaration:\n"); }
#line 2250 "parser.tab.c"
    break;

  case 47: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 226 "parser.y"
                                                                                           { printf("explicit value declaration:\n"); }
#line 2256 "parser.tab.c"
    break;

  case 48: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 227 "parser.y"
                                                                                           { printf("explicit variable declaration:\n"); }
#line 2262 "parser.tab.c"
    break;

  case 49: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt ARRAY '[' type ']' endlOpt '=' endlOpt array  */
#line 228 "parser.y"
                                                                                              { printf("explicit array declaration:\n"); }
#line 2268 "parser.tab.c"
    break;

  case 50: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt ARRAY '[' type ']' endlOpt '=' endlOpt array  */
#line 229 "parser.y"
                                                                                              { printf("explicit array declaration:\n"); }
#line 2274 "parser.tab.c"
    break;

  case 51: /* statement: class  */
#line 230 "parser.y"
            { printf("Class:\n"); }
#line 2280 "parser.tab.c"
    break;

  case 52: /* statement: method  */
#line 231 "parser.y"
             { printf("Method:\n"); }
#line 2286 "parser.tab.c"
    break;

  case 53: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr ELSE endlOpt expr  */
#line 240 "parser.y"
                                                                           { (yyval.tree) = mk_if_else_expr((yyvsp[-6].tree), (yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2292 "parser.tab.c"
    break;

  case 54: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr endlList ELSE endlOpt expr  */
#line 241 "parser.y"
                                                                                    { (yyval.tree) = mk_if_else_expr((yyvsp[-7].tree), (yyvsp[-4].tree), (yyvsp[0].tree)); }
#line 2298 "parser.tab.c"
    break;

  case 55: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr  */
#line 242 "parser.y"
                                                      { (yyval.tree) = mk_if_expr((yyvsp[-3].tree), (yyvsp[0].tree));}
#line 2304 "parser.tab.c"
    break;

  case 56: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt YIELD endlOpt expr  */
#line 250 "parser.y"
                                                                                                                          { printf("FOR in parentheses\n"); }
#line 2310 "parser.tab.c"
    break;

  case 57: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt expr  */
#line 251 "parser.y"
                                                                                                            { printf("FOR in parentheses\n"); }
#line 2316 "parser.tab.c"
    break;

  case 58: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt YIELD endlOpt expr  */
#line 252 "parser.y"
                                                                                                                                           { printf("FOR in curly_braces\n"); }
#line 2322 "parser.tab.c"
    break;

  case 59: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt expr  */
#line 253 "parser.y"
                                                                                                                             { printf("FOR in curly_braces\n"); }
#line 2328 "parser.tab.c"
    break;

  case 81: /* while_expr: WHILE endlOpt '(' expr ')' endlOpt expr  */
#line 287 "parser.y"
                                                              { (yyval.tree) = mk_while_expr((yyvsp[-3].tree),(yyvsp[0].tree)); }
#line 2334 "parser.tab.c"
    break;

  case 82: /* do_while_expr: DO endlOpt expr endlOpt WHILE '(' expr ')'  */
#line 291 "parser.y"
                                                                 { (yyval.tree) = mk_do_while_expr((yyvsp[-5].tree),(yyvsp[-1].tree)); }
#line 2340 "parser.tab.c"
    break;

  case 83: /* match_expr: expr MATCH endlOpt '{' endlOpt case_list endlOpt '}'  */
#line 297 "parser.y"
                                                              {(yyval.tree) = mk_match_expr((yyvsp[-7].tree),(yyvsp[-2].tree));}
#line 2346 "parser.tab.c"
    break;

  case 84: /* case_condition: expr_list  */
#line 302 "parser.y"
                                          {(yyval.tree) = add_case_condition((yyvsp[0].tree));}
#line 2352 "parser.tab.c"
    break;

  case 85: /* case_condition: CASE_PATTERN  */
#line 303 "parser.y"
                       {(yyval.tree) = add_case_condition((yyvsp[0].tree));}
#line 2358 "parser.tab.c"
    break;

  case 86: /* case_list: CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 309 "parser.y"
                                                                                         {(yyval.tree) = mk_list();(yyval.tree) = add_alt_case((yyval.tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2364 "parser.tab.c"
    break;

  case 87: /* case_list: case_list endlOpt semicolonList endlOpt CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 310 "parser.y"
                                                                                                                                 {(yyval.tree) = add_alt_case((yyvsp[-10].tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2370 "parser.tab.c"
    break;

  case 88: /* case_list: case_list endlOpt CASE endlOpt case_condition endlOpt RIGHT_ARROW_OPERATOR separator_List_e expr  */
#line 311 "parser.y"
                                                                                                           {(yyval.tree) = add_alt_case((yyvsp[-8].tree),(yyvsp[-4].tree),(yyvsp[0].tree));}
#line 2376 "parser.tab.c"
    break;

  case 89: /* expr_list_e: expr_list  */
#line 321 "parser.y"
                   { printf("PARSER found expr_list - expr_list\n"); }
#line 2382 "parser.tab.c"
    break;

  case 90: /* expr_list_e: %empty  */
#line 322 "parser.y"
                     {  (yyval.tree) = mk_list(); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2388 "parser.tab.c"
    break;

  case 91: /* expr_list: expr  */
#line 327 "parser.y"
                      { (yyval.tree) = add_to_list(mk_list(), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2394 "parser.tab.c"
    break;

  case 92: /* expr_list: expr_list endlOpt ',' endlOpt expr  */
#line 328 "parser.y"
                                          { (yyval.tree) = add_to_list((yyvsp[-4].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2400 "parser.tab.c"
    break;

  case 93: /* expr: const  */
#line 333 "parser.y"
                                  {printf("PARSER found expr - const\n"); }
#line 2406 "parser.tab.c"
    break;

  case 94: /* expr: IDENTIFIER  */
#line 334 "parser.y"
                                       {(yyval.tree) = mk_ident_lit((yyvsp[0].str_value)); }
#line 2412 "parser.tab.c"
    break;

  case 95: /* expr: IDENTIFIER endlOpt '=' endlOpt expr  */
#line 335 "parser.y"
                                          { (yyval.tree) = mk_bin_op((char*) "=", mk_ident_lit((yyvsp[-4].str_value)), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2418 "parser.tab.c"
    break;

  case 96: /* expr: IDENTIFIER endlOpt ':' endlOpt expr  */
#line 336 "parser.y"
                                          { (yyval.tree) = mk_bin_op((char*) ":", mk_ident_lit((yyvsp[-4].str_value)), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2424 "parser.tab.c"
    break;

  case 97: /* expr: '(' expr ')'  */
#line 337 "parser.y"
                   { printf("PARSER found expr - ( expr ) \n"); }
#line 2430 "parser.tab.c"
    break;

  case 98: /* expr: expr '>' endlOpt expr  */
#line 338 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) ">", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2436 "parser.tab.c"
    break;

  case 99: /* expr: expr '<' endlOpt expr  */
#line 339 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "<", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2442 "parser.tab.c"
    break;

  case 100: /* expr: expr MORE_OR_EQUAL_OPERATOR endlOpt expr  */
#line 340 "parser.y"
                                               { (yyval.tree) = mk_bin_op((char*) ">=", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2448 "parser.tab.c"
    break;

  case 101: /* expr: expr LESS_OR_EQUAL_OPERATOR endlOpt expr  */
#line 341 "parser.y"
                                               { (yyval.tree) = mk_bin_op((char*) "<=", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2454 "parser.tab.c"
    break;

  case 102: /* expr: expr EQ endlOpt expr  */
#line 342 "parser.y"
                           { (yyval.tree) = mk_bin_op((char*) "==", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2460 "parser.tab.c"
    break;

  case 103: /* expr: expr NEQ endlOpt expr  */
#line 343 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "!=", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2466 "parser.tab.c"
    break;

  case 104: /* expr: expr '+' endlOpt expr  */
#line 344 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "+", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2472 "parser.tab.c"
    break;

  case 105: /* expr: expr '-' endlOpt expr  */
#line 345 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "-", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2478 "parser.tab.c"
    break;

  case 106: /* expr: expr '/' endlOpt expr  */
#line 346 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "/", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2484 "parser.tab.c"
    break;

  case 107: /* expr: expr '*' endlOpt expr  */
#line 347 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "*", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2490 "parser.tab.c"
    break;

  case 108: /* expr: expr '%' endlOpt expr  */
#line 348 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "%", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2496 "parser.tab.c"
    break;

  case 109: /* expr: expr '&' endlOpt expr  */
#line 349 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "&", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2502 "parser.tab.c"
    break;

  case 110: /* expr: expr '|' endlOpt expr  */
#line 350 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "|", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2508 "parser.tab.c"
    break;

  case 111: /* expr: expr KW_OR endlOpt expr  */
#line 351 "parser.y"
                              { (yyval.tree) = mk_bin_op((char*) "||", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2514 "parser.tab.c"
    break;

  case 112: /* expr: expr KW_AND endlOpt expr  */
#line 352 "parser.y"
                               { (yyval.tree) = mk_bin_op((char*) "&&", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2520 "parser.tab.c"
    break;

  case 113: /* expr: '-' expr  */
#line 353 "parser.y"
                             { (yyval.tree) = mk_unary_op("unary_minus_op", (yyvsp[0].tree));found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2526 "parser.tab.c"
    break;

  case 114: /* expr: '+' expr  */
#line 354 "parser.y"
                            { (yyval.tree) = mk_unary_op("unary_plus_op", (yyvsp[0].tree));found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes)); }
#line 2532 "parser.tab.c"
    break;

  case 115: /* expr: if_else_expr  */
#line 355 "parser.y"
                   {(yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2538 "parser.tab.c"
    break;

  case 116: /* expr: for_expr  */
#line 356 "parser.y"
               { printf("PARSER found expr - for_expr\n"); }
#line 2544 "parser.tab.c"
    break;

  case 117: /* expr: while_expr  */
#line 357 "parser.y"
                 {(yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2550 "parser.tab.c"
    break;

  case 118: /* expr: do_while_expr  */
#line 358 "parser.y"
                    {(yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2556 "parser.tab.c"
    break;

  case 119: /* expr: match_expr  */
#line 359 "parser.y"
                 {(yyval.tree)=(yyvsp[0].tree);found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2562 "parser.tab.c"
    break;

  case 120: /* expr: anonymous_func  */
#line 360 "parser.y"
                     { printf("Function:\n"); }
#line 2568 "parser.tab.c"
    break;

  case 121: /* expr: method_call  */
#line 361 "parser.y"
                  { printf("method_call:\n"); }
#line 2574 "parser.tab.c"
    break;

  case 122: /* expr: create_instance_class  */
#line 362 "parser.y"
                            { printf("instance_class:\n"); }
#line 2580 "parser.tab.c"
    break;

  case 123: /* expr: READLINE '(' ')'  */
#line 363 "parser.y"
                     { printf("readLine:\n"); }
#line 2586 "parser.tab.c"
    break;

  case 124: /* expr: PRINTLN '(' expr ')'  */
#line 364 "parser.y"
                          { printf("print:\n"); }
#line 2592 "parser.tab.c"
    break;

  case 125: /* expr: IDENTIFIER '.' '(' NUM_10 ')'  */
#line 365 "parser.y"
                                    { printf("array_call:\n"); }
#line 2598 "parser.tab.c"
    break;

  case 126: /* num_const: NUM_10  */
#line 370 "parser.y"
             { (yyval.tree) = mk_int_const((yyvsp[0].int_value)); }
#line 2604 "parser.tab.c"
    break;

  case 127: /* num_const: NUM_16  */
#line 371 "parser.y"
             { (yyval.tree) = mk_int_const((yyvsp[0].int_value)); }
#line 2610 "parser.tab.c"
    break;

  case 128: /* num_const: REAL_NUMBER  */
#line 372 "parser.y"
                  { (yyval.tree) = mk_real_const((yyvsp[0].real_value)); }
#line 2616 "parser.tab.c"
    break;

  case 129: /* num_const: REAL_NUMBER_EXPONENT  */
#line 373 "parser.y"
                           { (yyval.tree) = mk_real_const((yyvsp[0].real_value)); }
#line 2622 "parser.tab.c"
    break;

  case 131: /* const: CONST_STRING  */
#line 379 "parser.y"
                   { (yyval.tree) = mk_string_const((yyvsp[0].str_value)); }
#line 2628 "parser.tab.c"
    break;

  case 132: /* const: CONST_CHAR  */
#line 380 "parser.y"
                 { (yyval.tree) = mk_char_const((yyvsp[0].str_value)); }
#line 2634 "parser.tab.c"
    break;

  case 133: /* const: KW_TRUE  */
#line 381 "parser.y"
              { (yyval.tree) = mk_boolean_const(true); }
#line 2640 "parser.tab.c"
    break;

  case 134: /* const: KW_FALSE  */
#line 382 "parser.y"
               { (yyval.tree) = mk_boolean_const(false); }
#line 2646 "parser.tab.c"
    break;

  case 135: /* const: KW_NULL  */
#line 383 "parser.y"
              { (yyval.tree) = mk_null_const(); }
#line 2652 "parser.tab.c"
    break;

  case 136: /* const: array  */
#line 384 "parser.y"
            { (yyval.tree) = mk_array_const((yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2658 "parser.tab.c"
    break;

  case 156: /* type: INT_KW  */
#line 431 "parser.y"
             { (yyval.tree) = mk_integer_type(); }
#line 2664 "parser.tab.c"
    break;

  case 157: /* type: DOUBLE_KW  */
#line 432 "parser.y"
                { (yyval.tree) = mk_real_type(); }
#line 2670 "parser.tab.c"
    break;

  case 158: /* type: STRING_KW  */
#line 433 "parser.y"
                { (yyval.tree) = mk_string_type(); }
#line 2676 "parser.tab.c"
    break;

  case 159: /* type: CHAR_KW  */
#line 434 "parser.y"
              { (yyval.tree) = mk_char_type(); }
#line 2682 "parser.tab.c"
    break;

  case 160: /* type: BOOLEAN_KW  */
#line 435 "parser.y"
                 { (yyval.tree) = mk_boolean_type(); }
#line 2688 "parser.tab.c"
    break;

  case 161: /* type: ANY_KW  */
#line 436 "parser.y"
             { (yyval.tree) = mk_any_type(); }
#line 2694 "parser.tab.c"
    break;

  case 162: /* type: UNIT_KW  */
#line 437 "parser.y"
              { (yyval.tree) = mk_unit_type(); }
#line 2700 "parser.tab.c"
    break;

  case 163: /* type_list_car: type  */
#line 441 "parser.y"
           { (yyval.tree) = mk_list(); (yyval.tree) = add_to_list((yyval.tree), (yyvsp[0].tree)); }
#line 2706 "parser.tab.c"
    break;

  case 164: /* type_list_car: type_list_car RIGHT_ARROW_OPERATOR type  */
#line 442 "parser.y"
                                              { (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 2712 "parser.tab.c"
    break;

  case 165: /* type_list: type  */
#line 446 "parser.y"
           { (yyval.tree) = mk_list(); (yyval.tree) = add_to_list((yyval.tree), (yyvsp[0].tree)); }
#line 2718 "parser.tab.c"
    break;

  case 166: /* type_list: type_list_simple ',' type  */
#line 447 "parser.y"
                                { (yyval.tree) = add_to_list((yyvsp[-2].tree), (yyvsp[0].tree)); }
#line 2724 "parser.tab.c"
    break;

  case 167: /* type_list_simple: '(' type_list ')' RIGHT_ARROW_OPERATOR type  */
#line 451 "parser.y"
                                                 { (yyval.tree) = add_to_list((yyvsp[-3].tree), (yyvsp[0].tree)); }
#line 2730 "parser.tab.c"
    break;

  case 168: /* array: array_literal  */
#line 462 "parser.y"
                     {(yyval.tree) = mk_array_literal((yyvsp[0].tree)); }
#line 2736 "parser.tab.c"
    break;

  case 169: /* array: initialized_array  */
#line 463 "parser.y"
                         {(yyval.tree) = mk_initialized_array((yyvsp[0].tree));}
#line 2742 "parser.tab.c"
    break;

  case 170: /* array_literal: ARRAY endlOpt '(' expr_list_e ')'  */
#line 467 "parser.y"
                                        {  (yyval.tree) = mk_array_with_expr_list((yyvsp[-1].tree)); }
#line 2748 "parser.tab.c"
    break;

  case 171: /* array_literal: ARRAY  */
#line 468 "parser.y"
                                   { (yyval.tree) = mk_empty_array(); }
#line 2754 "parser.tab.c"
    break;

  case 172: /* initialized_array: NEW endlOpt ARRAY endlOpt '[' type ']' '(' expr ')'  */
#line 472 "parser.y"
                                                           { (yyval.tree) = mk_initialized_array_with_type_and_expr((yyvsp[-4].tree), (yyvsp[-1].tree));}
#line 2760 "parser.tab.c"
    break;

  case 173: /* endlList: ENDL  */
#line 481 "parser.y"
                    { printf("PARSER found ENDL\n"); }
#line 2766 "parser.tab.c"
    break;

  case 174: /* endlList: endlList ENDL  */
#line 482 "parser.y"
                    { printf("PARSER found endlList\n"); }
#line 2772 "parser.tab.c"
    break;

  case 175: /* endlOpt: endlList  */
#line 487 "parser.y"
               { printf("PARSER found endlOpt\n"); }
#line 2778 "parser.tab.c"
    break;

  case 177: /* semicolonList: ';'  */
#line 493 "parser.y"
                   { printf("PARSER found SEMICOLON\n"); }
#line 2784 "parser.tab.c"
    break;

  case 178: /* semicolonList: semicolonList ';'  */
#line 494 "parser.y"
                        { printf("PARSER found semicolonList\n"); }
#line 2790 "parser.tab.c"
    break;

  case 179: /* separator_List: ENDL  */
#line 498 "parser.y"
            { printf("PARSER found ENDL\n"); }
#line 2796 "parser.tab.c"
    break;

  case 180: /* separator_List: ';'  */
#line 499 "parser.y"
            { printf("PARSER found SEMICOLON\n"); }
#line 2802 "parser.tab.c"
    break;

  case 181: /* separator_List: separator_List ENDL  */
#line 500 "parser.y"
                            { printf("PARSER add ENDL to separator_List\n"); }
#line 2808 "parser.tab.c"
    break;

  case 182: /* separator_List: separator_List ';'  */
#line 501 "parser.y"
                           { printf("PARSER add ; to separator_List\n"); }
#line 2814 "parser.tab.c"
    break;


#line 2818 "parser.tab.c"

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

