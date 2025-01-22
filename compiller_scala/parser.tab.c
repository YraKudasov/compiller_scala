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
    ABSTRACT = 311                 /* ABSTRACT  */
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

#line 220 "parser.tab.c"

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
  YYSYMBOL_access_array_element = 121,     /* access_array_element  */
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
#define YYLAST   1241

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  78
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  189
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  567

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
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     361,   362,   363,   364,   369,   370,   371,   372,   373,   374,
     375,   381,   382,   383,   384,   389,   394,   395,   399,   400,
     401,   402,   403,   404,   405,   406,   410,   411,   415,   416,
     422,   423,   424,   425,   426,   427,   428,   432,   433,   439,
     440,   444,   455,   456,   460,   461,   465,   469,   477,   478,
     483,   484,   489,   490,   494,   495,   496,   497,   501,   502
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
  "initialized_array", "access_array_element", "endlList", "endlOpt",
  "semicolonList", "separator_List", "separator_List_e", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-410)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-182)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,  -410,  -410,    46,  -410,    13,   968,  -410,  -410,  -410,
    1071,  1071,  1106,  -410,  -410,  -410,  -410,    25,  -410,  -410,
      26,    26,    26,    26,    26,    26,    26,    22,    62,   104,
      94,  -410,  -410,  -410,    26,    26,  -410,  -410,    26,    26,
       9,  -410,   100,   115,   131,  -410,   171,    23,  -410,  -410,
    -410,  -410,  -410,  -410,  1172,  -410,   168,  -410,  -410,  -410,
    -410,  -410,  -410,  -410,  -410,  -410,    19,   532,   105,  -410,
    1071,   185,   201,   222,    60,   194,   207,   221,    40,  1071,
     227,   166,  1071,   228,   236,    26,   230,    85,   232,   193,
     191,     9,     9,     9,  -410,   906,  -410,    26,    26,    26,
      26,    26,    26,    26,    26,    26,    26,    26,    26,    26,
      26,    26,   233,   306,  -410,   239,    26,   248,    48,  1172,
     255,  1071,  -410,    26,    26,    26,    26,  1071,   188,    26,
     365,  1071,    26,   640,  -410,  1071,   252,    26,   256,    26,
      11,  -410,  -410,   209,   210,   215,   171,  -410,  1172,  1071,
    1071,  1071,  1071,  1071,  1071,  1071,  1071,  1071,  1071,  1071,
    1071,  1071,  1071,  1071,    26,  -410,  -410,  -410,  -410,  -410,
    -410,  -410,  -410,   229,   206,   244,  -410,   286,   201,   274,
    1071,   238,    33,    35,   778,   251,  1071,    -1,   208,   278,
     835,   289,  -410,   297,   853,    26,    27,  1071,   299,     1,
    -410,  -410,  -410,  -410,   611,   623,   285,   285,   272,   272,
    -410,  -410,  -410,   127,   127,   181,   509,   285,   285,   249,
     306,   306,    26,    26,  -410,  1172,    26,    26,    26,    26,
      26,    26,   281,  1172,    26,  1071,   217,    26,    26,    26,
     309,    26,    26,  -410,  -410,    29,    26,   302,    26,    26,
     310,   306,   103,    26,  -410,    26,  -410,    14,  1071,  1071,
     292,  1071,    37,  1071,   165,  1071,   104,    26,   273,   702,
    1172,   269,  1071,   276,  1071,   197,   -12,  1071,  1071,   321,
      26,    26,    26,  1071,   267,   157,   306,    30,  -410,   322,
     316,   318,   340,   327,    97,   323,   292,   281,  1172,  1172,
      26,    26,  1172,    61,   328,    26,  1172,   330,    26,   319,
     335,   313,   281,    26,  1172,   281,  1172,    26,  1172,    26,
      26,    26,    26,  1145,  -410,   103,  1071,   306,    32,  1172,
    -410,    26,    26,   302,    26,   337,   291,   293,   130,   311,
     356,   364,   373,    26,  -410,   141,    -8,  -410,   374,   389,
     306,   393,   306,   394,    26,    20,  1071,   343,  1071,   336,
     281,   344,  1071,  1020,   218,  -410,   386,  1172,    26,    26,
      26,   402,  1071,   199,   306,  1071,   306,   306,   383,   391,
     101,  -410,   346,   347,  1071,   135,    12,  -410,  -410,    26,
     411,   390,    26,  -410,  -410,    24,   359,   306,   403,    26,
     404,    26,  1071,    26,   281,  1172,   281,   367,    26,  1172,
      26,  1172,    26,  1071,   311,   421,  1071,   306,    26,  1172,
    -410,    26,  1190,   423,   424,   357,   358,   407,   408,   306,
     306,    41,  -410,    31,   372,   429,   405,   141,  -410,   406,
     306,  -410,    26,  1071,    26,  1071,  -410,  1071,  -410,   380,
      26,   281,  1071,   381,  1172,  -410,    26,  1172,    26,  1071,
     436,  -410,   281,   281,   306,   306,   371,   375,   441,   444,
    -410,  1071,    26,    26,    23,    26,    26,    26,    26,  -410,
     445,  1172,   446,  1172,  -410,   281,   281,   395,  1172,    26,
    1071,   449,  1172,    26,  -410,  -410,   450,   451,   306,   306,
     281,   281,   439,  1071,   281,  1071,   281,  1071,   396,   141,
      26,    26,  -410,   415,    26,   281,  1172,    26,  1071,   281,
     281,   470,   471,  -410,  -410,  -410,  1172,  -410,  1172,  -410,
    1172,    23,    26,    -7,    -7,    26,   281,   419,  1071,  1172,
    -410,  -410,   281,   281,  1071,   417,  -410,  -410,   281,   422,
      26,  1172,  -410,  -410,  1172,    23,  -410,    26,   281,  1071,
     281,   430,  1172,  -410,    26,   281,  -410
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     189,   184,   185,     0,     2,   188,     0,     1,   186,   187,
       0,     0,   144,   130,   131,   132,   133,    98,   136,   135,
     181,   181,   181,   181,   181,   181,   181,     0,     0,   175,
       0,   137,   138,   139,   181,   181,    35,    34,   181,   181,
     189,    52,     0,     0,     0,   126,     0,   189,    38,   118,
     119,   120,   121,   122,    40,   134,    97,   124,    53,   125,
     140,   172,   173,   127,   117,   116,    98,     0,     0,   178,
      94,     0,   158,   180,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   181,     0,     0,     0,     0,
       0,   189,   189,   189,    39,   188,    44,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,     0,     0,   100,     0,   181,     0,    93,    95,
       0,    94,   179,   181,   181,   181,   181,     0,     0,   181,
     181,     0,   181,     0,   128,    94,     0,   181,    31,   181,
     181,    10,   123,     0,     0,     0,     0,    41,    42,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   181,   160,   161,   162,   163,   164,
     165,   166,   167,   141,     0,     0,   156,     0,   159,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   129,     0,    95,   181,     0,    94,     0,     0,
       3,     4,     5,    43,   113,   112,   101,   102,   107,   108,
     110,   109,   111,   105,   106,   114,   115,   103,   104,     0,
       0,     0,   181,   181,   157,    99,   181,   181,   181,   181,
     181,   181,     0,    61,   181,     0,     0,   181,   181,   181,
       0,   181,   181,   174,   177,     0,   181,   144,   181,   181,
       0,     0,    30,   181,     9,   181,   168,   142,     0,     0,
       0,     0,     0,     0,     0,     0,   175,   181,     0,     0,
      64,     0,     0,     0,     0,   180,     0,     0,     0,     0,
     181,   181,   181,     0,     0,     0,     0,     0,    32,     0,
       0,     0,    29,     0,     0,     0,     0,     0,   145,    96,
     181,   181,    46,     0,     0,   181,    47,     0,   181,    54,
       0,     0,     0,   181,    58,     0,    65,   181,    68,   181,
     181,   181,   181,     0,    77,    30,     0,     0,     0,   151,
     146,   181,   181,   144,   181,     0,     0,     0,     0,     6,
       0,     0,    36,   181,   143,     0,     0,   169,     0,     0,
       0,     0,     0,     0,   181,     0,    94,    62,     0,     0,
       0,     0,     0,     0,     0,    78,     0,   155,   181,   181,
     181,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     0,     0,     0,     0,   181,    87,    85,   181,
      84,    91,   181,    79,   182,   181,     0,     0,     0,   181,
       0,   181,     0,   181,     0,    57,     0,     0,   181,    71,
     181,    60,   181,     0,    11,     0,     0,     0,   181,   150,
     147,   181,     0,    14,    13,     0,     0,     0,     0,     0,
       0,   181,    80,     0,     0,     0,     0,     0,   183,     0,
       0,   170,   181,     0,   181,     0,    55,     0,    63,    66,
     181,     0,     0,     0,    72,    12,   181,   154,   181,     0,
       0,   176,     0,     0,     0,     0,     0,     0,    22,    21,
      37,    94,   181,   181,   189,   181,   181,   181,   181,   171,
       0,    48,     0,    49,    56,     0,     0,     0,    59,   181,
       0,     0,   149,   181,    16,    15,    18,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     181,   181,    67,    69,   181,     0,   153,   181,     0,     0,
       0,    26,    25,    24,    23,    33,    83,    86,    88,    92,
      81,   189,   181,     0,     0,   181,     0,     0,     0,   148,
      20,    19,     0,     0,     0,     0,    51,    50,     0,    75,
     181,   152,    28,    27,    90,   189,    70,   181,     0,     0,
       0,    73,    89,    76,   181,     0,    74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -410,  -410,  -410,   409,  -410,  -410,  -410,   158,  -410,  -410,
      -4,  -328,  -410,   -23,   -38,  -410,  -410,  -410,  -410,  -410,
    -410,  -410,  -409,   195,  -410,   -67,   110,    -6,  -410,  -225,
    -238,  -410,   259,  -410,   376,  -410,  -128,   284,  -410,  -222,
    -318,  -410,  -410,  -410,  -215,   363,  -410,   459,   -46
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,    41,    42,    43,    44,   292,   293,    45,   388,
     294,   254,    47,     4,    48,    49,    50,   187,   239,    51,
      52,    53,   389,   301,   390,   193,   118,   119,    55,    56,
      68,    57,   249,    58,    72,    59,   172,   173,   348,   305,
      60,    61,    62,    63,    73,    74,   395,     5,     6
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      54,    96,    46,   117,    64,    65,    67,   268,    94,   285,
     -45,   381,     1,     1,    69,   -82,     8,    90,   234,   252,
     297,   320,    69,   122,   275,  -181,     1,    69,   477,    69,
     392,  -181,   235,   246,   266,   280,   332,    70,   369,   227,
      82,   229,   308,    70,    69,   247,     7,   247,   333,   471,
     333,    69,   403,  -181,   179,   303,  -181,   147,   128,   267,
     470,   321,  -181,   322,   472,   393,   123,   394,   143,   144,
     145,   253,   344,   130,   236,   -82,   133,   220,   304,   303,
      83,   349,   -45,    -8,     2,     2,   455,   357,     9,   148,
     359,   146,   256,   113,   355,   373,    71,   124,     2,   438,
     532,   248,    71,   281,   334,   473,   370,   228,   203,   230,
     115,   138,   129,   165,   166,   167,   168,   169,   170,   171,
     391,   184,  -181,   289,   116,   190,   139,   340,   341,   194,
     250,   427,   428,   290,   291,   407,    99,   100,   101,   102,
     103,   104,   105,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   331,    85,
     378,   379,   115,    13,    14,    15,    16,   386,    18,    19,
      36,    37,    91,   392,   225,   347,   330,   110,   111,   448,
     233,   449,   266,   303,    31,    32,    33,    92,    97,    98,
      99,   100,   101,   102,   103,   104,   105,    36,    37,   368,
     122,    20,    21,    93,   115,  -181,   307,   267,   432,    26,
     394,   120,   391,    30,   185,   546,   547,   387,   420,   121,
     125,   186,   398,   319,   400,   122,   487,   106,   107,   270,
     109,   110,   111,   126,   237,   132,    34,   494,   495,   127,
      38,   238,    39,   271,   412,   131,   421,   134,   423,   424,
     272,   413,   298,   299,   135,   302,   137,   306,   140,   309,
     512,   513,    38,   314,   142,   174,   316,   176,   318,   441,
     164,   323,   324,    70,   197,   523,   524,   329,   195,   527,
     221,   529,   200,   201,   391,   103,   104,   105,   202,   458,
     537,   223,   220,   224,   540,   541,   101,   102,   103,   104,
     105,   468,   469,    13,    14,    15,    16,   222,    18,    19,
     226,   549,   479,   232,   240,   242,   243,   552,   553,   251,
     367,   255,   266,   556,    31,    32,    33,   277,   284,   288,
     300,   315,   312,   561,   380,   563,   496,   497,   317,   325,
     566,   113,   336,   335,   337,   338,   339,   267,   350,   342,
     352,   354,   405,   356,   139,   375,   409,   411,   165,   166,
     167,   168,   169,   170,   171,   376,   419,   377,    69,   422,
     521,   522,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   253,   382,    75,    76,    77,    78,    79,    80,    81,
     383,   384,    84,   396,   397,   406,   446,    86,    87,   399,
     401,    88,    89,   404,   502,   414,   408,   454,   418,   425,
     457,   106,   107,   108,   109,   110,   111,   426,  -181,   112,
     429,   430,   440,  -181,   442,   444,   450,   456,   505,   462,
     463,   464,   465,   466,   467,   474,   475,   481,   476,   483,
     485,   484,   493,   489,   478,   498,   488,   500,   136,   499,
     501,   510,   511,   492,   514,   517,   519,   520,   525,   531,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   535,   542,   543,   550,   175,
     555,   177,   557,   366,   516,   544,   180,   181,   182,   183,
     564,   343,   188,   189,   431,   191,   178,   526,   141,   528,
     196,   530,   198,   199,   282,   257,    95,     0,     0,   559,
       0,     0,   539,     0,     0,     0,    97,    98,    99,   100,
     101,   102,   103,   104,   105,     0,     0,   219,     0,     0,
       0,     0,   551,     0,     0,     0,     0,     0,   554,    97,
      98,    99,   100,   101,   102,   103,   104,   105,     0,     0,
       0,   114,     0,   562,     0,   106,   107,     0,   245,   110,
     111,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   106,   107,
     108,   109,   110,   111,     0,   258,   259,     0,     0,   260,
     261,   262,   263,   264,   265,     0,     0,   269,     0,     0,
     273,   274,   276,     0,   278,   279,     0,     0,     0,   283,
       0,   286,   287,     0,     0,     0,   295,     0,   296,    98,
      99,   100,   101,   102,   103,   104,   105,     0,     0,   310,
     311,     0,    99,   100,   101,   102,   103,   104,   105,     0,
       0,     0,     0,   326,   327,   328,     0,    97,    98,    99,
     100,   101,   102,   103,   104,   105,     0,   106,   107,   192,
       0,   110,   111,   345,   346,     0,     0,     0,   351,   106,
     107,   353,     0,   110,   111,     0,   358,     0,     0,     0,
     360,     0,   361,   362,   363,   364,   106,   107,   108,   109,
     110,   111,     0,     0,   371,   372,     0,   374,     0,     0,
       0,     0,     0,     0,     0,     0,   385,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,   402,     0,     0,
      12,     0,     0,     0,    13,    14,    15,    16,    17,    18,
      19,   415,   416,   417,     0,    22,    23,    24,    25,     0,
       0,    27,    28,    29,     0,    31,    32,    33,     0,   433,
       0,     0,   434,   435,   436,   437,     0,     0,   439,     0,
       0,     0,   443,   313,   445,     0,   447,     0,    35,     0,
       0,   451,     0,   452,    40,   453,     0,     0,     0,     0,
       0,   459,     0,     0,   460,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   177,     0,     0,   231,     0,     0,
       0,     0,     0,     0,     0,   480,     0,   482,     0,     0,
       0,     0,     0,   486,     0,     0,     0,     0,     0,   490,
       0,   491,     0,     0,   106,   107,   108,   109,   110,   111,
       0,     0,     0,     0,     0,   503,   504,     0,   506,   507,
     508,   509,    97,    98,    99,   100,   101,   102,   103,   104,
     105,     0,   515,     0,   241,     0,   518,     0,     0,     0,
      97,    98,    99,   100,   101,   102,   103,   104,   105,     0,
       0,     0,   244,   533,   534,     0,     0,   536,     0,     0,
     538,   106,   107,   108,   109,   110,   111,     0,     0,     0,
       0,     0,     0,     0,     0,   545,     0,     0,   548,   106,
     107,   108,   109,   110,   111,     0,     0,     0,     0,     8,
       0,     0,     0,   558,     0,     0,     0,    10,    11,     0,
     560,     0,     0,     0,    12,     0,     0,   565,    13,    14,
      15,    16,    17,    18,    19,     0,    20,    21,     0,    22,
      23,    24,    25,     0,    26,    27,    28,    29,    30,    31,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,    35,    36,    37,    38,     0,    39,    40,    10,
      11,     9,     0,     0,     0,     0,    12,     0,     0,     0,
      13,    14,    15,    16,    17,    18,    19,     0,    20,    21,
       0,    22,    23,    24,    25,     0,    26,    27,    28,    29,
      30,    31,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,    34,    35,    36,    37,    38,    12,    39,
      40,     0,    13,    14,    15,    16,    17,    18,    19,     0,
       0,     0,     0,    22,    23,    24,    25,     0,     0,    27,
      28,    29,     0,    31,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   410,    10,    11,     0,     0,    35,     0,     0,    12,
       0,     0,    40,    13,    14,    15,    16,    17,    18,    19,
       0,     0,     0,     0,    22,    23,    24,    25,     0,     0,
      27,    28,    29,     0,    31,    32,    33,    10,    11,     0,
       0,     0,     0,     0,    12,     0,     0,     0,    13,    14,
      15,    16,    66,    18,    19,     0,     0,    35,     0,    22,
      23,    24,    25,    40,     0,    27,    28,    29,     0,    31,
      32,    33,    97,    98,    99,   100,   101,   102,   103,   104,
     105,     0,     0,     0,   365,     0,     0,     0,     0,     0,
       0,     0,    35,     0,     0,     0,     0,     0,    40,    97,
      98,    99,   100,   101,   102,   103,   104,   105,     0,     0,
       0,   106,   107,   108,   109,   110,   111,    97,    98,    99,
     100,   101,   102,   103,   104,   105,     0,     0,     0,   461,
       0,     0,     0,     0,     0,     0,     0,     0,   106,   107,
     108,   109,   110,   111,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   106,   107,   108,   109,
     110,   111
};

static const yytype_int16 yycheck[] =
{
       6,    47,     6,    70,    10,    11,    12,   232,    46,   247,
       0,   339,     3,     3,     3,     3,     3,    40,    19,    18,
       6,    33,     3,     3,   239,     6,     3,     3,   437,     3,
      38,     6,    33,     6,    41,     6,     6,    18,     6,     6,
      18,     6,   264,    18,     3,    18,     0,    18,    18,    18,
      18,     3,    32,     5,   121,    18,    37,    95,    18,    66,
      19,    73,    37,    75,    33,    73,     6,    75,    91,    92,
      93,    70,   297,    79,    75,    63,    82,    63,    41,    18,
      18,   303,    73,    72,    75,    75,   414,   312,    75,    95,
     315,    95,   220,    74,   309,   333,    77,    37,    75,    75,
     509,    74,    77,    74,    74,    74,    74,    74,   146,    74,
       5,    26,    72,    52,    53,    54,    55,    56,    57,    58,
     345,   127,    18,   251,    19,   131,    41,    30,    31,   135,
     197,    30,    31,    30,    31,   360,     9,    10,    11,    12,
      13,    14,    15,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   286,    65,
      30,    31,     5,    22,    23,    24,    25,    26,    27,    28,
      67,    68,    72,    38,   180,   303,    19,    50,    51,   404,
     186,   406,    41,    18,    43,    44,    45,    72,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    67,    68,   327,
       3,    30,    31,    72,     5,    37,    41,    66,    73,    38,
      75,    26,   437,    42,    26,   533,   534,    76,    19,    18,
      26,    33,   350,    26,   352,     3,   451,    46,    47,   235,
      49,    50,    51,    26,    26,    69,    65,   462,   463,    18,
      69,    33,    71,    26,    26,    18,   374,    19,   376,   377,
      33,    33,   258,   259,    18,   261,    26,   263,    26,   265,
     485,   486,    69,   269,    73,    26,   272,    19,   274,   397,
      37,   277,   278,    18,    18,   500,   501,   283,    26,   504,
      74,   506,    73,    73,   509,    13,    14,    15,    73,   417,
     515,     5,    63,    19,   519,   520,    11,    12,    13,    14,
      15,   429,   430,    22,    23,    24,    25,    63,    27,    28,
      72,   536,   440,    62,    36,    26,    19,   542,   543,    20,
     326,    72,    41,   548,    43,    44,    45,    18,    26,    19,
      38,    62,    59,   558,   338,   560,   464,   465,    62,    18,
     565,    74,    26,    21,    26,     5,    19,    66,    20,    26,
      20,    32,   358,    18,    41,    18,   362,   363,    52,    53,
      54,    55,    56,    57,    58,    74,   372,    74,     3,   375,
     498,   499,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    70,    26,    20,    21,    22,    23,    24,    25,    26,
      26,    18,    29,    19,     5,    59,   402,    34,    35,     6,
       6,    38,    39,    60,   471,    19,    62,   413,     6,    26,
     416,    46,    47,    48,    49,    50,    51,    26,     7,    56,
      74,    74,    63,    33,    21,    21,    59,     6,   474,     6,
       6,    74,    74,    26,    26,    63,     7,   443,    33,   445,
      60,   447,     6,    62,    38,    74,   452,     6,    85,    74,
       6,     6,     6,   459,    59,     6,     6,     6,    19,    63,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    60,     6,     6,    59,   116,
      63,   118,    60,   325,   490,   531,   123,   124,   125,   126,
      60,   296,   129,   130,   384,   132,   120,   503,    89,   505,
     137,   507,   139,   140,   245,   221,    47,    -1,    -1,   555,
      -1,    -1,   518,    -1,    -1,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,   164,    -1,    -1,
      -1,    -1,   538,    -1,    -1,    -1,    -1,    -1,   544,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    -1,
      -1,    19,    -1,   559,    -1,    46,    47,    -1,   195,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    51,    -1,   222,   223,    -1,    -1,   226,
     227,   228,   229,   230,   231,    -1,    -1,   234,    -1,    -1,
     237,   238,   239,    -1,   241,   242,    -1,    -1,    -1,   246,
      -1,   248,   249,    -1,    -1,    -1,   253,    -1,   255,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,   266,
     267,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    -1,    -1,   280,   281,   282,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    46,    47,    19,
      -1,    50,    51,   300,   301,    -1,    -1,    -1,   305,    46,
      47,   308,    -1,    50,    51,    -1,   313,    -1,    -1,    -1,
     317,    -1,   319,   320,   321,   322,    46,    47,    48,    49,
      50,    51,    -1,    -1,   331,   332,    -1,   334,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   343,    -1,    -1,    -1,
      -1,    -1,    -1,    11,    12,    -1,    -1,   354,    -1,    -1,
      18,    -1,    -1,    -1,    22,    23,    24,    25,    26,    27,
      28,   368,   369,   370,    -1,    33,    34,    35,    36,    -1,
      -1,    39,    40,    41,    -1,    43,    44,    45,    -1,   386,
      -1,    -1,   389,   390,   391,   392,    -1,    -1,   395,    -1,
      -1,    -1,   399,    61,   401,    -1,   403,    -1,    66,    -1,
      -1,   408,    -1,   410,    72,   412,    -1,    -1,    -1,    -1,
      -1,   418,    -1,    -1,   421,     7,     8,     9,    10,    11,
      12,    13,    14,    15,   431,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   442,    -1,   444,    -1,    -1,
      -1,    -1,    -1,   450,    -1,    -1,    -1,    -1,    -1,   456,
      -1,   458,    -1,    -1,    46,    47,    48,    49,    50,    51,
      -1,    -1,    -1,    -1,    -1,   472,   473,    -1,   475,   476,
     477,   478,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,   489,    -1,    19,    -1,   493,    -1,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    -1,    19,   510,   511,    -1,    -1,   514,    -1,    -1,
     517,    46,    47,    48,    49,    50,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   532,    -1,    -1,   535,    46,
      47,    48,    49,    50,    51,    -1,    -1,    -1,    -1,     3,
      -1,    -1,    -1,   550,    -1,    -1,    -1,    11,    12,    -1,
     557,    -1,    -1,    -1,    18,    -1,    -1,   564,    22,    23,
      24,    25,    26,    27,    28,    -1,    30,    31,    -1,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    66,    67,    68,    69,    -1,    71,    72,    11,
      12,    75,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    -1,    30,    31,
      -1,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    11,    12,    65,    66,    67,    68,    69,    18,    71,
      72,    -1,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,
      40,    41,    -1,    43,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    11,    12,    -1,    -1,    66,    -1,    -1,    18,
      -1,    -1,    72,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    -1,    -1,
      39,    40,    41,    -1,    43,    44,    45,    11,    12,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    66,    -1,    33,
      34,    35,    36,    72,    -1,    39,    40,    41,    -1,    43,
      44,    45,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    72,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,
      50,    51
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    75,    79,    91,   125,   126,     0,     3,    75,
      11,    12,    18,    22,    23,    24,    25,    26,    27,    28,
      30,    31,    33,    34,    35,    36,    38,    39,    40,    41,
      42,    43,    44,    45,    65,    66,    67,    68,    69,    71,
      72,    80,    81,    82,    83,    86,    88,    90,    92,    93,
      94,    97,    98,    99,   105,   106,   107,   109,   111,   113,
     118,   119,   120,   121,   105,   105,    26,   105,   108,     3,
      18,    77,   112,   122,   123,   123,   123,   123,   123,   123,
     123,   123,    18,    18,   123,    65,   123,   123,   123,   123,
      91,    72,    72,    72,    92,   125,   126,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    46,    47,    48,    49,
      50,    51,   123,    74,    19,     5,    19,   103,   104,   105,
      26,    18,     3,     6,    37,    26,    26,    18,    18,    72,
     105,    18,    69,   105,    19,    18,   123,    26,    26,    41,
      26,    81,    73,    91,    91,    91,    88,    92,   105,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,    37,    52,    53,    54,    55,    56,
      57,    58,   114,   115,    26,   123,    19,   123,   112,   103,
     123,   123,   123,   123,   105,    26,    33,    95,   123,   123,
     105,   123,    19,   103,   105,    26,   123,    18,   123,   123,
      73,    73,    73,    92,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   123,
      63,    74,    63,     5,    19,   105,    72,     6,    74,     6,
      74,    19,    62,   105,    19,    33,    75,    26,    33,    96,
      36,    19,    26,    19,    19,   123,     6,    18,    74,   110,
     103,    20,    18,    70,    89,    72,   114,   115,   123,   123,
     123,   123,   123,   123,   123,   123,    41,    66,   107,   123,
     105,    26,    33,   123,   123,   122,   123,    18,   123,   123,
       6,    74,   110,   123,    26,   108,   123,   123,    19,   114,
      30,    31,    84,    85,    88,   123,   123,     6,   105,   105,
      38,   101,   105,    18,    41,   117,   105,    41,   117,   105,
     123,   123,    59,    61,   105,    62,   105,    62,   105,    26,
      33,    73,    75,   105,   105,    18,   123,   123,   123,   105,
      19,   114,     6,    18,    74,    21,    26,    26,     5,    19,
      30,    31,    26,   101,   107,   123,   123,   114,   116,   117,
      20,   123,    20,   123,    32,   122,    18,   107,   123,   107,
     123,   123,   123,   123,   123,    19,    85,   105,   114,     6,
      74,   123,   123,   108,   123,    18,    74,    74,    30,    31,
      88,    89,    26,    26,    18,   123,    26,    76,    87,   100,
     102,   107,    38,    73,    75,   124,    19,     5,   114,     6,
     114,     6,   123,    32,    60,   105,    59,   107,    62,   105,
      61,   105,    26,    33,    19,   123,   123,   123,     6,   105,
      19,   114,   105,   114,   114,    26,    26,    30,    31,    74,
      74,   104,    73,   123,   123,   123,   123,   123,    75,   123,
      63,   114,    21,   123,    21,   123,   105,   123,   107,   107,
      59,   123,   123,   123,   105,    89,     6,   105,   114,   123,
     123,    19,     6,     6,    74,    74,    26,    26,   114,   114,
      19,    18,    33,    74,    63,     7,    33,   100,    38,   114,
     123,   105,   123,   105,   105,    60,   123,   107,   105,    62,
     123,   123,   105,     6,   107,   107,   114,   114,    74,    74,
       6,     6,   103,   123,   123,   126,   123,   123,   123,   123,
       6,     6,   107,   107,    59,   123,   105,     6,   123,     6,
       6,   114,   114,   107,   107,    19,   105,   107,   105,   107,
     105,    63,   100,   123,   123,    60,   123,   107,   123,   105,
     107,   107,     6,     6,   126,   123,   118,   118,   123,   107,
      59,   105,   107,   107,   105,    63,   107,    60,   123,   126,
     123,   107,   105,   107,    60,   123,   107
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
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     106,   106,   106,   106,   107,   107,   107,   107,   107,   107,
     107,   108,   108,   108,   108,   109,   110,   110,   111,   111,
     111,   111,   111,   111,   111,   111,   112,   112,   113,   113,
     114,   114,   114,   114,   114,   114,   114,   115,   115,   116,
     116,   117,   118,   118,   119,   119,   120,   121,   122,   122,
     123,   123,   124,   124,   125,   125,   125,   125,   126,   126
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
       1,     1,     1,     3,     1,     1,     1,     1,     3,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     5,     7,     0,     7,     3,     5,    13,    11,
       9,     7,    14,    12,    10,     8,     3,     4,     2,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       3,     5,     1,     1,     5,     1,    10,     5,     1,     2,
       1,     0,     1,     2,     1,     1,     2,     2,     1,     0
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
#line 2209 "parser.tab.c"
    break;

  case 39: /* statement_expr_list: visibility_modifier statement  */
#line 190 "parser.y"
                                    { printf("Add first visibility_modifier statement :\n"); }
#line 2215 "parser.tab.c"
    break;

  case 40: /* statement_expr_list: expr  */
#line 191 "parser.y"
           { printf("Add first statement :\n"); }
#line 2221 "parser.tab.c"
    break;

  case 41: /* statement_expr_list: statement_expr_list separator_List statement  */
#line 192 "parser.y"
                                                    { printf("Add new statement to statement_expr_list :\n"); }
#line 2227 "parser.tab.c"
    break;

  case 42: /* statement_expr_list: statement_expr_list separator_List expr  */
#line 193 "parser.y"
                                               { printf("Add new expr to statement_expr_list :\n"); }
#line 2233 "parser.tab.c"
    break;

  case 43: /* statement_expr_list: statement_expr_list separator_List visibility_modifier statement  */
#line 194 "parser.y"
                                                                        { printf("Add new visibility_modifier to statement_expr_list :\n"); }
#line 2239 "parser.tab.c"
    break;

  case 45: /* statement_expr_list_e: %empty  */
#line 199 "parser.y"
                     { printf("PARSER found statement_list_e - nothing\n"); }
#line 2245 "parser.tab.c"
    break;

  case 46: /* statement: VAL endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 203 "parser.y"
                                                       { printf("implicit value declaration:\n"); }
#line 2251 "parser.tab.c"
    break;

  case 47: /* statement: VAR endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 204 "parser.y"
                                                       { printf("implicit variable declaration:\n"); }
#line 2257 "parser.tab.c"
    break;

  case 48: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 205 "parser.y"
                                                                                           { printf("explicit value declaration:\n"); }
#line 2263 "parser.tab.c"
    break;

  case 49: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 206 "parser.y"
                                                                                           { printf("explicit variable declaration:\n"); }
#line 2269 "parser.tab.c"
    break;

  case 50: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt ARRAY '[' type ']' endlOpt '=' endlOpt array  */
#line 207 "parser.y"
                                                                                              { printf("explicit array declaration:\n"); }
#line 2275 "parser.tab.c"
    break;

  case 51: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt ARRAY '[' type ']' endlOpt '=' endlOpt array  */
#line 208 "parser.y"
                                                                                              { printf("explicit array declaration:\n"); }
#line 2281 "parser.tab.c"
    break;

  case 52: /* statement: class  */
#line 209 "parser.y"
            { printf("Class:\n"); }
#line 2287 "parser.tab.c"
    break;

  case 53: /* statement: method  */
#line 210 "parser.y"
             { printf("Method:\n"); }
#line 2293 "parser.tab.c"
    break;

  case 54: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr  */
#line 219 "parser.y"
                                                      { printf("IF-CONSTR\n"); }
#line 2299 "parser.tab.c"
    break;

  case 55: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr ELSE endlOpt expr  */
#line 220 "parser.y"
                                                                          { printf("IF_ELSE-CONSTR\n"); }
#line 2305 "parser.tab.c"
    break;

  case 56: /* if_else_expr: IF endlOpt '(' expr ')' endlOpt expr endlList ELSE endlOpt expr  */
#line 221 "parser.y"
                                                                                   { printf("IF_ELSE-CONSTR\n"); }
#line 2311 "parser.tab.c"
    break;

  case 57: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt YIELD endlOpt expr  */
#line 229 "parser.y"
                                                                                                                          { printf("FOR in parentheses\n"); }
#line 2317 "parser.tab.c"
    break;

  case 58: /* for_expr: FOR endlOpt '(' generators_and_conditions_parentheses_List ')' endlOpt expr  */
#line 230 "parser.y"
                                                                                                            { printf("FOR in parentheses\n"); }
#line 2323 "parser.tab.c"
    break;

  case 59: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt YIELD endlOpt expr  */
#line 231 "parser.y"
                                                                                                                                           { printf("FOR in curly_braces\n"); }
#line 2329 "parser.tab.c"
    break;

  case 60: /* for_expr: FOR endlOpt '{' endlOpt generators_and_conditions_curly_braces_List endlOpt '}' endlOpt expr  */
#line 232 "parser.y"
                                                                                                                             { printf("FOR in curly_braces\n"); }
#line 2335 "parser.tab.c"
    break;

  case 93: /* expr_list_e: expr_list  */
#line 312 "parser.y"
                   { printf("PARSER found expr_list - expr_list\n"); }
#line 2341 "parser.tab.c"
    break;

  case 94: /* expr_list_e: %empty  */
#line 313 "parser.y"
                     { printf("PARSER found expr_list - nothing\n"); }
#line 2347 "parser.tab.c"
    break;

  case 95: /* expr_list: expr  */
#line 318 "parser.y"
                      { printf("PARSER found expr_list - expr\n"); }
#line 2353 "parser.tab.c"
    break;

  case 96: /* expr_list: expr_list endlOpt ',' endlOpt expr  */
#line 319 "parser.y"
                                          { printf("PARSER found expr_list - expr_list\n"); }
#line 2359 "parser.tab.c"
    break;

  case 97: /* expr: const  */
#line 324 "parser.y"
                                  {printf("PARSER found expr - const\n"); }
#line 2365 "parser.tab.c"
    break;

  case 98: /* expr: IDENTIFIER  */
#line 325 "parser.y"
                                       {(yyval.tree) = mk_ident_lit((yyvsp[0].str_value)); }
#line 2371 "parser.tab.c"
    break;

  case 99: /* expr: IDENTIFIER endlOpt '=' endlOpt expr  */
#line 326 "parser.y"
                                          { printf("Assignment:\n"); }
#line 2377 "parser.tab.c"
    break;

  case 100: /* expr: '(' expr ')'  */
#line 327 "parser.y"
                   { printf("PARSER found expr - ( expr ) \n"); }
#line 2383 "parser.tab.c"
    break;

  case 101: /* expr: expr '>' endlOpt expr  */
#line 328 "parser.y"
                            {printf("PARSER found expr - expr > expr\n"); }
#line 2389 "parser.tab.c"
    break;

  case 102: /* expr: expr '<' endlOpt expr  */
#line 329 "parser.y"
                            {printf("PARSER found expr - expr < expr\n"); }
#line 2395 "parser.tab.c"
    break;

  case 103: /* expr: expr MORE_OR_EQUAL_OPERATOR endlOpt expr  */
#line 330 "parser.y"
                                               {printf("PARSER found expr - expr >= expr\n"); }
#line 2401 "parser.tab.c"
    break;

  case 104: /* expr: expr LESS_OR_EQUAL_OPERATOR endlOpt expr  */
#line 331 "parser.y"
                                               {printf("PARSER found expr - expr <= expr\n"); }
#line 2407 "parser.tab.c"
    break;

  case 105: /* expr: expr EQ endlOpt expr  */
#line 332 "parser.y"
                           {printf("PARSER found expr - expr == expr\n"); }
#line 2413 "parser.tab.c"
    break;

  case 106: /* expr: expr NEQ endlOpt expr  */
#line 333 "parser.y"
                            {printf("PARSER found expr - expr != expr\n"); }
#line 2419 "parser.tab.c"
    break;

  case 107: /* expr: expr '+' endlOpt expr  */
#line 334 "parser.y"
                            { (yyval.tree) = mk_bin_op((char*) "+", (yyvsp[-3].tree), (yyvsp[0].tree)); found_classes=(yyval.tree); puts(Json_to_pretty_string(found_classes));}
#line 2425 "parser.tab.c"
    break;

  case 108: /* expr: expr '-' endlOpt expr  */
#line 335 "parser.y"
                            { printf("PARSER found expr - expr - expr\n"); }
#line 2431 "parser.tab.c"
    break;

  case 109: /* expr: expr '/' endlOpt expr  */
#line 336 "parser.y"
                            { printf("PARSER found expr - expr / expr\n"); }
#line 2437 "parser.tab.c"
    break;

  case 110: /* expr: expr '*' endlOpt expr  */
#line 337 "parser.y"
                            { printf("PARSER found expr - expr * expr\n"); }
#line 2443 "parser.tab.c"
    break;

  case 111: /* expr: expr '%' endlOpt expr  */
#line 338 "parser.y"
                            { printf("PARSER found expr - expr % expr\n"); }
#line 2449 "parser.tab.c"
    break;

  case 112: /* expr: expr '&' endlOpt expr  */
#line 339 "parser.y"
                            { printf("PARSER found expr - expr && expr\n"); }
#line 2455 "parser.tab.c"
    break;

  case 113: /* expr: expr '|' endlOpt expr  */
#line 340 "parser.y"
                            { printf("PARSER found expr - expr | expr\n"); }
#line 2461 "parser.tab.c"
    break;

  case 114: /* expr: expr KW_OR endlOpt expr  */
#line 341 "parser.y"
                              { printf("PARSER found expr - expr || expr\n"); }
#line 2467 "parser.tab.c"
    break;

  case 115: /* expr: expr KW_AND endlOpt expr  */
#line 342 "parser.y"
                               { printf("PARSER found expr - expr && expr\n"); }
#line 2473 "parser.tab.c"
    break;

  case 116: /* expr: '-' expr  */
#line 343 "parser.y"
                             { printf("PARSER found expr - UMINUS\n"); }
#line 2479 "parser.tab.c"
    break;

  case 117: /* expr: '+' expr  */
#line 344 "parser.y"
                            { printf("PARSER found expr - UPLUS\n"); }
#line 2485 "parser.tab.c"
    break;

  case 118: /* expr: if_else_expr  */
#line 345 "parser.y"
                                        { printf("PARSER found expr - if_else_expr\n"); }
#line 2491 "parser.tab.c"
    break;

  case 119: /* expr: for_expr  */
#line 346 "parser.y"
               { printf("PARSER found expr - for_expr\n"); }
#line 2497 "parser.tab.c"
    break;

  case 120: /* expr: while_expr  */
#line 347 "parser.y"
                 { printf("PARSER found expr - while_expr\n"); }
#line 2503 "parser.tab.c"
    break;

  case 121: /* expr: do_while_expr  */
#line 348 "parser.y"
                    { printf("PARSER found expr - do_while_expr\n"); }
#line 2509 "parser.tab.c"
    break;

  case 122: /* expr: match_expr  */
#line 349 "parser.y"
                 { printf("PARSER found expr - match_expr\n"); }
#line 2515 "parser.tab.c"
    break;

  case 123: /* expr: '{' statement_expr_list_e '}'  */
#line 350 "parser.y"
                                     { printf("PARSER found expr -  { statement_expr_list_e }\n"); }
#line 2521 "parser.tab.c"
    break;

  case 124: /* expr: anonymous_func  */
#line 351 "parser.y"
                     { printf("Function:\n"); }
#line 2527 "parser.tab.c"
    break;

  case 125: /* expr: method_call  */
#line 352 "parser.y"
                  { printf("method_call:\n"); }
#line 2533 "parser.tab.c"
    break;

  case 126: /* expr: create_instance_class  */
#line 353 "parser.y"
                            { printf("instance_class:\n"); }
#line 2539 "parser.tab.c"
    break;

  case 127: /* expr: access_array_element  */
#line 354 "parser.y"
                           { printf("access_array_element:\n"); }
#line 2545 "parser.tab.c"
    break;

  case 128: /* expr: READLINE '(' ')'  */
#line 355 "parser.y"
                     { printf("readLine:\n"); }
#line 2551 "parser.tab.c"
    break;

  case 129: /* expr: PRINTLN '(' expr ')'  */
#line 356 "parser.y"
                          { printf("print:\n"); }
#line 2557 "parser.tab.c"
    break;

  case 130: /* num_const: NUM_10  */
#line 361 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 2563 "parser.tab.c"
    break;

  case 131: /* num_const: NUM_16  */
#line 362 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 2569 "parser.tab.c"
    break;

  case 132: /* num_const: REAL_NUMBER  */
#line 363 "parser.y"
                  { printf("PARSER found - REAL\n"); }
#line 2575 "parser.tab.c"
    break;

  case 133: /* num_const: REAL_NUMBER_EXPONENT  */
#line 364 "parser.y"
                           { printf("PARSER found - REAL_EXP\n"); }
#line 2581 "parser.tab.c"
    break;

  case 174: /* array_literal: ARRAY endlOpt '(' expr_list_e ')'  */
#line 460 "parser.y"
                                        { printf("PARSER found Array\n"); }
#line 2587 "parser.tab.c"
    break;

  case 175: /* array_literal: ARRAY  */
#line 461 "parser.y"
                                   { printf("PARSER found Array\n"); }
#line 2593 "parser.tab.c"
    break;

  case 178: /* endlList: ENDL  */
#line 477 "parser.y"
                    { printf("PARSER found ENDL\n"); }
#line 2599 "parser.tab.c"
    break;

  case 179: /* endlList: endlList ENDL  */
#line 478 "parser.y"
                    { printf("PARSER found endlList\n"); }
#line 2605 "parser.tab.c"
    break;

  case 180: /* endlOpt: endlList  */
#line 483 "parser.y"
               { printf("PARSER found endlOpt\n"); }
#line 2611 "parser.tab.c"
    break;

  case 182: /* semicolonList: ';'  */
#line 489 "parser.y"
                   { printf("PARSER found SEMICOLON\n"); }
#line 2617 "parser.tab.c"
    break;

  case 183: /* semicolonList: semicolonList ';'  */
#line 490 "parser.y"
                        { printf("PARSER found semicolonList\n"); }
#line 2623 "parser.tab.c"
    break;

  case 184: /* separator_List: ENDL  */
#line 494 "parser.y"
            { printf("PARSER found ENDL\n"); }
#line 2629 "parser.tab.c"
    break;

  case 185: /* separator_List: ';'  */
#line 495 "parser.y"
            { printf("PARSER found SEMICOLON\n"); }
#line 2635 "parser.tab.c"
    break;

  case 186: /* separator_List: separator_List ENDL  */
#line 496 "parser.y"
                            { printf("PARSER add ENDL to separator_List\n"); }
#line 2641 "parser.tab.c"
    break;

  case 187: /* separator_List: separator_List ';'  */
#line 497 "parser.y"
                           { printf("PARSER add ; to separator_List\n"); }
#line 2647 "parser.tab.c"
    break;


#line 2651 "parser.tab.c"

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

#line 504 "parser.y"

