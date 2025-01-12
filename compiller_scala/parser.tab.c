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

#include "FlexLexer.h"
extern int yylex();
extern int yylineno;
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



#line 106 "parser.tab.c"

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
    TRY = 279,                     /* TRY  */
    CATCH = 280,                   /* CATCH  */
    FINALLY = 281,                 /* FINALLY  */
    PRINT = 282,                   /* PRINT  */
    READLINE = 283,                /* READLINE  */
    KW_TRUE = 284,                 /* KW_TRUE  */
    KW_FALSE = 285,                /* KW_FALSE  */
    KW_NULL = 286,                 /* KW_NULL  */
    EQ = 287,                      /* EQ  */
    NEQ = 288,                     /* NEQ  */
    KW_OR = 289,                   /* KW_OR  */
    KW_AND = 290,                  /* KW_AND  */
    MORE_OR_EQUAL_OPERATOR = 291,  /* MORE_OR_EQUAL_OPERATOR  */
    LESS_OR_EQUAL_OPERATOR = 292,  /* LESS_OR_EQUAL_OPERATOR  */
    INT_KW = 293,                  /* INT_KW  */
    DOUBLE_KW = 294,               /* DOUBLE_KW  */
    STRING_KW = 295,               /* STRING_KW  */
    CHAR_KW = 296,                 /* CHAR_KW  */
    BOOLEAN_KW = 297,              /* BOOLEAN_KW  */
    ANY_KW = 298,                  /* ANY_KW  */
    UNIT_KW = 299,                 /* UNIT_KW  */
    TO = 300,                      /* TO  */
    BY = 301,                      /* BY  */
    YIELD = 302,                   /* YIELD  */
    GENERATOR_OPERATOR = 303,      /* GENERATOR_OPERATOR  */
    RIGHT_ARROW_OPERATOR = 304,    /* RIGHT_ARROW_OPERATOR  */
    ID_COLLECTION = 305,           /* ID_COLLECTION  */
    ARRAY = 306,                   /* ARRAY  */
    LIST = 307,                    /* LIST  */
    VECTOR = 308,                  /* VECTOR  */
    SET = 309,                     /* SET  */
    DEF = 310,                     /* DEF  */
    NEW = 311,                     /* NEW  */
    PROTECTED = 312,               /* PROTECTED  */
    PRIVATE = 313,                 /* PRIVATE  */
    CLASS = 314,                   /* CLASS  */
    CLASS_ID = 315,                /* CLASS_ID  */
    EXTENDS = 316                  /* EXTENDS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 41 "parser.y"

    int64_t int_value;
    double real_value;
    char* str_value;

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
  YYSYMBOL_TRY = 39,                       /* TRY  */
  YYSYMBOL_CATCH = 40,                     /* CATCH  */
  YYSYMBOL_FINALLY = 41,                   /* FINALLY  */
  YYSYMBOL_PRINT = 42,                     /* PRINT  */
  YYSYMBOL_READLINE = 43,                  /* READLINE  */
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
  YYSYMBOL_ARRAY = 66,                     /* ARRAY  */
  YYSYMBOL_LIST = 67,                      /* LIST  */
  YYSYMBOL_VECTOR = 68,                    /* VECTOR  */
  YYSYMBOL_SET = 69,                       /* SET  */
  YYSYMBOL_DEF = 70,                       /* DEF  */
  YYSYMBOL_NEW = 71,                       /* NEW  */
  YYSYMBOL_PROTECTED = 72,                 /* PROTECTED  */
  YYSYMBOL_PRIVATE = 73,                   /* PRIVATE  */
  YYSYMBOL_CLASS = 74,                     /* CLASS  */
  YYSYMBOL_CLASS_ID = 75,                  /* CLASS_ID  */
  YYSYMBOL_EXTENDS = 76,                   /* EXTENDS  */
  YYSYMBOL_77_ = 77,                       /* '{'  */
  YYSYMBOL_78_ = 78,                       /* '}'  */
  YYSYMBOL_79_ = 79,                       /* ':'  */
  YYSYMBOL_80_ = 80,                       /* ';'  */
  YYSYMBOL_81_ = 81,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 82,                  /* $accept  */
  YYSYMBOL_program = 83,                   /* program  */
  YYSYMBOL_instance_class = 84,            /* instance_class  */
  YYSYMBOL_visibility_modifier = 85,       /* visibility_modifier  */
  YYSYMBOL_statement_expr_list = 86,       /* statement_expr_list  */
  YYSYMBOL_statement_expr_list_e = 87,     /* statement_expr_list_e  */
  YYSYMBOL_statement = 88,                 /* statement  */
  YYSYMBOL_if_else_expr = 89,              /* if_else_expr  */
  YYSYMBOL_if_condition_list = 90,         /* if_condition_list  */
  YYSYMBOL_for_expr = 91,                  /* for_expr  */
  YYSYMBOL_for_params = 92,                /* for_params  */
  YYSYMBOL_for_multy_list = 93,            /* for_multy_list  */
  YYSYMBOL_while_expr = 94,                /* while_expr  */
  YYSYMBOL_do_while_expr = 95,             /* do_while_expr  */
  YYSYMBOL_match_expr = 96,                /* match_expr  */
  YYSYMBOL_case_condition = 97,            /* case_condition  */
  YYSYMBOL_int_literal_list_case = 98,     /* int_literal_list_case  */
  YYSYMBOL_case_list = 99,                 /* case_list  */
  YYSYMBOL_try_expr = 100,                 /* try_expr  */
  YYSYMBOL_catch = 101,                    /* catch  */
  YYSYMBOL_finally = 102,                  /* finally  */
  YYSYMBOL_expr_list_e = 103,              /* expr_list_e  */
  YYSYMBOL_expr_list = 104,                /* expr_list  */
  YYSYMBOL_expr = 105,                     /* expr  */
  YYSYMBOL_num_const = 106,                /* num_const  */
  YYSYMBOL_const = 107,                    /* const  */
  YYSYMBOL_func_call = 108,                /* func_call  */
  YYSYMBOL_params = 109,                   /* params  */
  YYSYMBOL_func = 110,                     /* func  */
  YYSYMBOL_method_params_list_e = 111,     /* method_params_list_e  */
  YYSYMBOL_method_params_list = 112,       /* method_params_list  */
  YYSYMBOL_method = 113,                   /* method  */
  YYSYMBOL_method_call = 114,              /* method_call  */
  YYSYMBOL_type = 115,                     /* type  */
  YYSYMBOL_type_list_car = 116,            /* type_list_car  */
  YYSYMBOL_type_list = 117,                /* type_list  */
  YYSYMBOL_type_list_simple = 118,         /* type_list_simple  */
  YYSYMBOL_array = 119,                    /* array  */
  YYSYMBOL_list = 120,                     /* list  */
  YYSYMBOL_vector = 121,                   /* vector  */
  YYSYMBOL_set = 122,                      /* set  */
  YYSYMBOL_endlList = 123,                 /* endlList  */
  YYSYMBOL_endlOpt = 124,                  /* endlOpt  */
  YYSYMBOL_semicolonList = 125             /* semicolonList  */
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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1043

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  148
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  325

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   316


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
      18,    19,    13,    11,     5,    12,    81,    14,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    79,    80,
      10,     6,     9,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    20,     2,    21,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    77,     7,    78,     2,     2,     2,     2,
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
      70,    71,    72,    73,    74,    75,    76
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    95,    95,   125,   126,   130,   131,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   158,   159,   163,   164,
     165,   166,   167,   176,   177,   182,   183,   184,   191,   192,
     193,   194,   195,   196,   201,   202,   207,   208,   209,   210,
     216,   220,   224,   225,   230,   231,   232,   233,   237,   238,
     242,   243,   244,   245,   251,   252,   253,   257,   261,   268,
     269,   274,   275,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   319,   320,
     321,   322,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   344,   348,   349,   350,   351,   355,   360,   361,
     365,   366,   370,   371,   376,   377,   378,   384,   385,   386,
     387,   388,   389,   390,   394,   395,   401,   402,   406,   419,
     425,   431,   437,   445,   446,   451,   452,   457,   458
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
  "FINALLY", "PRINT", "READLINE", "KW_TRUE", "KW_FALSE", "KW_NULL", "EQ",
  "NEQ", "KW_OR", "KW_AND", "MORE_OR_EQUAL_OPERATOR",
  "LESS_OR_EQUAL_OPERATOR", "INT_KW", "DOUBLE_KW", "STRING_KW", "CHAR_KW",
  "BOOLEAN_KW", "ANY_KW", "UNIT_KW", "TO", "BY", "YIELD",
  "GENERATOR_OPERATOR", "RIGHT_ARROW_OPERATOR", "ID_COLLECTION", "ARRAY",
  "LIST", "VECTOR", "SET", "DEF", "NEW", "PROTECTED", "PRIVATE", "CLASS",
  "CLASS_ID", "EXTENDS", "'{'", "'}'", "':'", "';'", "'.'", "$accept",
  "program", "instance_class", "visibility_modifier",
  "statement_expr_list", "statement_expr_list_e", "statement",
  "if_else_expr", "if_condition_list", "for_expr", "for_params",
  "for_multy_list", "while_expr", "do_while_expr", "match_expr",
  "case_condition", "int_literal_list_case", "case_list", "try_expr",
  "catch", "finally", "expr_list_e", "expr_list", "expr", "num_const",
  "const", "func_call", "params", "func", "method_params_list_e",
  "method_params_list", "method", "method_call", "type", "type_list_car",
  "type_list", "type_list_simple", "array", "list", "vector", "set",
  "endlList", "endlOpt", "semicolonList", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-234)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-18)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      41,  -234,    40,  -234,    42,   370,  -234,  -234,   620,   620,
     681,  -234,  -234,  -234,  -234,    28,  -234,  -234,    49,    49,
      49,    -4,   620,    51,   -18,    62,    65,  -234,  -234,  -234,
      88,   100,   102,   104,    98,    -8,  -234,  -234,  -234,    25,
    -234,   -12,    49,  -234,  -234,  -234,  -234,  -234,  -234,  -234,
     921,  -234,   -17,  -234,  -234,  -234,  -234,  -234,  -234,  -234,
    -234,  -234,  -234,    29,   803,    20,   620,   620,    48,   105,
     106,   108,   115,   115,   787,   620,   620,   620,   133,   620,
     620,   620,   620,   137,   139,    80,  -234,   303,    79,   620,
     620,   620,   620,   620,   620,   620,   620,   620,   620,   620,
     620,   620,   620,   620,    85,   134,    81,    84,   142,   110,
     921,   150,   165,   921,   138,    49,    49,    49,   109,   159,
     146,     1,   170,   849,   135,   862,  -234,   172,   175,   176,
     187,   163,    30,   196,   620,  -234,   -12,  -234,   921,  -234,
      21,   947,   991,   197,   197,    36,    36,  -234,  -234,  -234,
     415,   415,   930,   939,   197,   197,   138,  -234,  -234,  -234,
    -234,  -234,  -234,  -234,  -234,  -234,   151,   192,   144,   620,
    -234,   620,   737,    39,    31,    32,   620,   763,   437,    49,
      26,  -234,   498,   115,  -234,   620,   620,    35,  -234,  -234,
    -234,  -234,  -234,   145,    37,   620,    81,   163,   202,  -234,
    -234,   370,    76,    81,   198,    81,   921,   921,   193,   161,
     220,   195,  -234,   737,  -234,  -234,    49,    49,    49,    49,
     725,   174,   620,   921,   620,   559,   -20,   620,   921,  -234,
     875,  -234,   158,   168,   206,  -234,  -234,   921,   230,    38,
    -234,   -12,  -234,   921,  -234,  -234,   620,    10,   620,   620,
     763,   620,   188,   620,   233,   620,   233,   234,   763,   921,
     921,   620,   921,    49,    21,   921,  -234,   138,   620,  -234,
     620,  -234,  -234,   235,   763,   921,   921,  -234,   921,   620,
     921,   231,    49,   921,    49,    49,   194,   921,   620,   224,
      83,   190,   921,  -234,  -234,   921,  -234,   239,   254,   255,
     256,   620,   763,   921,   620,  -234,  -234,   200,    81,    49,
      49,   725,  -234,   921,    81,  -234,   620,   620,   228,  -234,
     921,   921,    49,   620,  -234
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     146,   143,     0,     2,   145,     0,     1,   144,     0,     0,
     116,    98,    99,   100,   101,    64,   104,   103,   146,   146,
     146,     0,     0,     0,     0,     0,     0,   105,   106,   107,
       0,     0,     0,     0,     0,     0,     6,     5,    65,   146,
      95,     0,   146,     7,    86,    87,    88,    89,    91,    90,
       9,   102,    63,    85,    93,    22,    94,   108,   109,   110,
     111,    84,    83,    64,     0,     0,     0,    60,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    60,
      60,    60,    60,   119,     3,     0,     8,   145,    16,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    67,     0,     0,
      66,     0,    59,    61,     0,   146,   146,   146,     0,     0,
      36,     0,     0,     0,     0,     0,    96,     0,     0,     0,
       0,   116,     0,   118,    60,    92,     0,    13,    14,   147,
     146,    80,    79,    68,    69,    74,    75,    77,    76,    78,
      72,    73,    81,    82,    70,    71,     0,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   113,     0,     0,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,   146,
     146,    39,     0,     0,    37,     0,     0,     0,    97,   139,
     140,   141,   142,     0,     0,     0,     0,   116,     0,    15,
     148,     0,     0,     0,   125,     0,   117,    62,    45,     0,
      47,    48,    52,     0,    42,    53,   146,   146,   146,   146,
     146,     0,     0,    31,     0,     0,     0,     0,    32,    38,
       0,    40,     0,     0,    54,    55,   120,   123,     0,     0,
       4,     0,    10,    11,    43,   135,    60,   114,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
      25,     0,    33,   146,   146,    29,    41,     0,     0,    56,
       0,   121,    12,     0,     0,    46,    50,    49,    44,     0,
      18,     0,   146,    19,   146,   146,    34,    30,     0,     0,
       0,     0,   122,   124,   115,    51,   136,     0,     0,     0,
       0,     0,     0,    26,     0,    57,    58,     0,     0,   146,
     146,   146,    35,    27,     0,   137,     0,     0,    23,   138,
      20,    21,   146,     0,    24
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -234,  -234,  -234,   -86,  -234,   227,   -34,  -234,  -234,  -234,
     -67,  -234,  -234,  -234,  -234,    54,  -234,  -154,  -234,  -234,
      44,   -71,  -234,    -5,  -234,  -151,  -234,  -119,  -234,  -234,
    -234,  -234,  -234,  -181,    64,  -234,  -233,  -234,  -234,  -234,
    -234,   229,    13,    46
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,    40,    41,    42,     3,    43,    44,   180,    45,
     119,   121,    46,    47,    48,   209,   210,   173,    49,   234,
     235,   111,   112,   113,    51,    52,    53,    65,    54,   132,
     133,    55,    56,   165,   166,   297,   282,    57,    58,    59,
      60,     4,     5,   140
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      50,   136,   202,    61,    62,    64,   120,    86,   127,   128,
     129,   130,   194,   263,    72,   238,   274,    74,    18,    19,
     104,   211,   245,   284,     1,   108,   221,   118,     1,     1,
     181,    69,    70,    71,    66,    66,   195,   216,   218,   109,
       6,   -17,   108,   108,     1,     7,    67,    67,   298,    95,
      96,    97,     1,   137,   184,    88,   236,   271,    34,    76,
     139,   110,   211,   198,   105,    68,    68,    84,   212,    75,
     123,   124,   125,    73,   203,   232,   233,   213,   239,   182,
      77,   183,   138,    78,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   277,
     296,   200,   199,   -17,   225,   212,    79,   286,   106,   196,
     217,   219,   212,   290,   213,   241,   229,   214,    80,   215,
      81,   213,    82,   294,    83,   114,   117,   315,   174,   175,
     176,   115,   116,   319,   158,   159,   160,   161,   162,   163,
     164,   118,    89,    90,    91,    92,    93,    94,    95,    96,
      97,   312,   126,   201,   244,   131,   215,   134,   135,   139,
     157,   305,   156,   215,   206,   167,   207,   242,   168,   170,
     171,   220,   177,   223,   169,   273,   172,   228,   178,   179,
     230,   231,    98,    99,   100,   101,   102,   103,   185,   193,
     237,   189,   224,   226,   190,   191,   243,    89,    90,    91,
      92,    93,    94,    95,    96,    97,   192,   272,    93,    94,
      95,    96,    97,   187,   197,   203,   246,   259,   204,   260,
     262,   240,   265,   205,   106,   249,   248,   250,   251,   253,
     254,   255,   256,   257,   258,   267,   270,    98,    99,   100,
     101,   102,   103,   275,   276,   268,   278,   233,   280,   281,
     283,   281,   279,   285,   293,   302,   287,   304,   307,   308,
     322,   309,   310,   291,   314,   292,    85,   252,   306,   247,
       0,    87,   264,     0,   295,     0,   288,   289,   269,     0,
       0,     0,     0,   303,   158,   159,   160,   161,   162,   163,
     164,     0,     0,     0,     0,   299,   311,   300,   301,   313,
       0,     0,     0,     0,     0,     0,     7,     0,     0,     0,
       0,   320,   321,     0,     8,     9,     0,     0,   324,     0,
       0,    10,   316,   317,   318,    11,    12,    13,    14,    15,
      16,    17,     0,    18,    19,   323,    20,    21,    22,    23,
       0,     0,    24,     0,     0,    25,    26,    27,    28,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    30,
      31,    32,    33,    34,    35,    36,    37,     0,    38,     0,
      39,     8,     9,     0,     0,     0,     0,     0,    10,     0,
       0,     0,    11,    12,    13,    14,    15,    16,    17,     0,
      18,    19,     0,    20,    21,    22,    23,     0,     0,    24,
       0,     0,    25,    26,    27,    28,    29,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
      97,     0,     0,     0,     0,     0,    30,    31,    32,    33,
      34,    35,    36,    37,     0,    38,     0,    39,     8,     9,
       0,     0,     0,     0,     0,    10,     0,     0,     0,    11,
      12,    13,    14,    15,    16,    17,   102,   103,     0,     0,
      20,    21,    22,    23,     0,     0,    24,     0,     0,    25,
      26,    27,    28,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   222,
       0,     0,     0,    30,    31,    32,    33,     0,    35,     8,
       9,     0,    38,     0,    39,     0,    10,     0,     0,     0,
      11,    12,    13,    14,    15,    16,    17,     0,     0,     0,
       0,    20,    21,    22,    23,     0,     0,    24,     0,     0,
      25,    26,    27,    28,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     227,     0,     0,     0,    30,    31,    32,    33,     0,    35,
       8,     9,     0,    38,     0,    39,     0,    10,     0,     0,
       0,    11,    12,    13,    14,    15,    16,    17,     0,     0,
       0,     0,    20,    21,    22,    23,     0,     0,    24,     0,
       0,    25,    26,    27,    28,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   261,     0,     0,     0,    30,    31,    32,    33,     0,
      35,     8,     9,     0,    38,     0,    39,     0,    10,     0,
       0,     0,    11,    12,    13,    14,    15,    16,    17,     0,
       0,     0,     0,    20,    21,    22,    23,     0,     0,    24,
       0,     0,    25,    26,    27,    28,    29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    31,    32,    33,
       0,    35,     8,     9,     0,    38,     0,    39,     0,    10,
       0,     0,     0,    11,    12,    13,    14,    63,    16,    17,
       0,     0,     0,     0,    20,    21,    22,    23,     0,     0,
      24,     0,     0,    25,    26,    27,    28,    29,     1,     0,
       0,     0,    89,    90,    91,    92,    93,    94,    95,    96,
      97,     0,     0,     0,     0,     0,     0,    30,    31,    32,
      33,     0,    35,     0,     0,     0,    38,     0,    39,    11,
      12,    13,    14,   208,    16,    17,     0,     0,     0,     0,
       0,     0,    98,    99,   100,   101,   102,   103,     0,     0,
       0,    27,    28,    29,     0,    11,    12,    13,    14,     0,
      16,    17,     0,     0,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    30,    31,    32,    33,    27,    28,    29,
      89,    90,    91,    92,    93,    94,    95,    96,    97,     0,
       0,     0,   107,   122,     0,     0,     0,     0,     0,    30,
      31,    32,    33,     0,    98,    99,   100,   101,   102,   103,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,    99,   100,   101,   102,   103,    89,    90,    91,    92,
      93,    94,    95,    96,    97,     0,     0,     0,   186,    89,
      90,    91,    92,    93,    94,    95,    96,    97,     0,     0,
       0,   188,    89,    90,    91,    92,    93,    94,    95,    96,
      97,     0,     0,     0,   266,     0,    98,    99,   100,   101,
     102,   103,     0,     0,     0,     0,     0,     0,     0,    98,
      99,   100,   101,   102,   103,     0,     0,     0,     0,     0,
       0,     0,    98,    99,   100,   101,   102,   103,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    90,    91,    92,    93,    94,
      95,    96,    97,     0,     0,     0,     0,     0,    98,    99,
     100,   101,   102,   103,     0,     0,     0,    98,    99,     0,
     101,   102,   103,     0,     0,     0,    98,    99,     0,     0,
     102,   103,     0,     0,    98,    99,     0,     0,   102,   103,
      91,    92,    93,    94,    95,    96,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,    99,
       0,     0,   102,   103
};

static const yytype_int16 yycheck[] =
{
       5,    87,   156,     8,     9,    10,    73,    41,    79,    80,
      81,    82,   131,    33,    18,   196,     6,    22,    30,    31,
      37,   172,   203,   256,     3,     5,   177,    26,     3,     3,
      29,    18,    19,    20,     6,     6,     6,     6,     6,    19,
       0,     0,     5,     5,     3,     3,    18,    18,   281,    13,
      14,    15,     3,    87,   121,    42,    19,    19,    70,    77,
      80,    66,   213,   134,    81,    37,    37,    75,    29,    18,
      75,    76,    77,    77,    64,    40,    41,    38,   197,    78,
      18,    80,    87,    18,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   250,
     281,    80,   136,    78,    78,    29,    18,   258,    79,    79,
      79,    79,    29,   267,    38,   201,   183,    78,    18,    80,
      18,    38,    18,   274,    26,    77,    18,   308,   115,   116,
     117,    26,    26,   314,    53,    54,    55,    56,    57,    58,
      59,    26,     7,     8,     9,    10,    11,    12,    13,    14,
      15,   302,    19,   140,    78,    18,    80,    18,    78,    80,
      26,    78,    77,    80,   169,    81,   171,   201,    26,    19,
       5,   176,    63,   178,    64,   246,    38,   182,    19,    33,
     185,   186,    47,    48,    49,    50,    51,    52,    18,    26,
     195,    19,   179,   180,    19,    19,   201,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    19,   241,    11,    12,
      13,    14,    15,    78,    18,    64,    18,   222,    26,   224,
     225,    19,   227,    79,    79,    64,    33,     7,    33,   216,
     217,   218,   219,   220,    60,    77,     6,    47,    48,    49,
      50,    51,    52,   248,   249,    77,   251,    41,   253,    18,
     255,    18,    64,    19,    19,    61,   261,    33,    19,     5,
      32,     6,     6,   268,    64,   270,    39,   213,    78,   205,
      -1,    42,   226,    -1,   279,    -1,   263,   264,   234,    -1,
      -1,    -1,    -1,   288,    53,    54,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,   282,   301,   284,   285,   304,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,
      -1,   316,   317,    -1,    11,    12,    -1,    -1,   323,    -1,
      -1,    18,   309,   310,   311,    22,    23,    24,    25,    26,
      27,    28,    -1,    30,    31,   322,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    42,    43,    44,    45,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    68,    69,    70,    71,    72,    73,    -1,    75,    -1,
      77,    11,    12,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    28,    -1,
      30,    31,    -1,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    42,    43,    44,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,
      70,    71,    72,    73,    -1,    75,    -1,    77,    11,    12,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    51,    52,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    42,
      43,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    66,    67,    68,    69,    -1,    71,    11,
      12,    -1,    75,    -1,    77,    -1,    18,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    66,    67,    68,    69,    -1,    71,
      11,    12,    -1,    75,    -1,    77,    -1,    18,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    66,    67,    68,    69,    -1,
      71,    11,    12,    -1,    75,    -1,    77,    -1,    18,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    42,    43,    44,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,
      -1,    71,    11,    12,    -1,    75,    -1,    77,    -1,    18,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    42,    43,    44,    45,    46,     3,    -1,
      -1,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    68,
      69,    -1,    71,    -1,    -1,    -1,    75,    -1,    77,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    49,    50,    51,    52,    -1,    -1,
      -1,    44,    45,    46,    -1,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    66,    67,    68,    69,    44,    45,    46,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    -1,    19,    36,    -1,    -1,    -1,    -1,    -1,    66,
      67,    68,    69,    -1,    47,    48,    49,    50,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    -1,    19,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    -1,
      -1,    19,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    -1,    19,    -1,    47,    48,    49,    50,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    49,    50,    51,    52,     7,     8,
       9,    10,    11,    12,    13,    14,    15,     7,     8,     9,
      10,    11,    12,    13,    14,    15,     7,     8,     9,    10,
      11,    12,    13,    14,    15,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    -1,    -1,    -1,    47,    48,
      49,    50,    51,    52,    -1,    -1,    -1,    47,    48,    -1,
      50,    51,    52,    -1,    -1,    -1,    47,    48,    -1,    -1,
      51,    52,    -1,    -1,    47,    48,    -1,    -1,    51,    52,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
      -1,    -1,    51,    52
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    83,    87,   123,   124,     0,     3,    11,    12,
      18,    22,    23,    24,    25,    26,    27,    28,    30,    31,
      33,    34,    35,    36,    39,    42,    43,    44,    45,    46,
      66,    67,    68,    69,    70,    71,    72,    73,    75,    77,
      84,    85,    86,    88,    89,    91,    94,    95,    96,   100,
     105,   106,   107,   108,   110,   113,   114,   119,   120,   121,
     122,   105,   105,    26,   105,   109,     6,    18,    37,   124,
     124,   124,    18,    77,   105,    18,    77,    18,    18,    18,
      18,    18,    18,    26,    75,    87,    88,   123,   124,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    47,    48,
      49,    50,    51,    52,    37,    81,    79,    19,     5,    19,
     105,   103,   104,   105,    77,    26,    26,    18,    26,    92,
      92,    93,    36,   105,   105,   105,    19,   103,   103,   103,
     103,    18,   111,   112,    18,    78,    85,    88,   105,    80,
     125,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,    77,    26,    53,    54,
      55,    56,    57,    58,    59,   115,   116,    81,    26,    64,
      19,     5,    38,    99,   124,   124,   124,    63,    19,    33,
      90,    29,    78,    80,    92,    18,    19,    78,    19,    19,
      19,    19,    19,    26,   109,     6,    79,    18,   103,    88,
      80,   124,    99,    64,    26,    79,   105,   105,    26,    97,
      98,   107,    29,    38,    78,    80,     6,    79,     6,    79,
     105,   107,    62,   105,   124,    78,   124,    62,   105,    92,
     105,   105,    40,    41,   101,   102,    19,   105,   115,   109,
      19,    85,    88,   105,    78,   115,    18,   116,    33,    64,
       7,    33,    97,   124,   124,   124,   124,   124,    60,   105,
     105,    62,   105,    33,   125,   105,    19,    77,    77,   102,
       6,    19,    88,   103,     6,   105,   105,   107,   105,    64,
     105,    18,   118,   105,   118,    19,   107,   105,   124,   124,
      99,   105,   105,    19,   107,   105,   115,   117,   118,   124,
     124,   124,    61,   105,    33,    78,    78,    19,     5,     6,
       6,   105,   107,   105,    64,   115,   124,   124,   124,   115,
     105,   105,    32,   124,   105
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    82,    83,    84,    84,    85,    85,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    87,    87,    88,    88,
      88,    88,    88,    89,    89,    90,    90,    90,    91,    91,
      91,    91,    91,    91,    92,    92,    93,    93,    93,    93,
      94,    95,    96,    96,    97,    97,    97,    97,    98,    98,
      99,    99,    99,    99,   100,   100,   100,   101,   102,   103,
     103,   104,   104,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   106,   106,
     106,   106,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   108,   109,   109,   109,   109,   110,   111,   111,
     112,   112,   113,   113,   114,   114,   114,   115,   115,   115,
     115,   115,   115,   115,   116,   116,   117,   117,   118,   119,
     120,   121,   122,   123,   123,   124,   124,   125,   125
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     5,     1,     1,     1,     2,     1,
       5,     5,     6,     3,     3,     4,     3,     0,     7,     7,
      11,    11,     1,    10,    13,     3,     5,     6,     6,     6,
       7,     5,     5,     6,     5,     7,     1,     2,     3,     2,
       5,     6,     5,     5,     3,     1,     3,     1,     1,     3,
       4,     5,     2,     2,     5,     5,     6,     4,     4,     1,
       0,     1,     3,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     3,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     3,     5,     7,     0,     5,     1,     0,
       3,     4,     7,     5,     8,     5,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     3,     5,     4,
       4,     4,     4,     1,     2,     1,     0,     1,     2
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
#line 146 "parser.y"
                { printf("Add first statement :\n"); }
#line 2081 "parser.tab.c"
    break;

  case 8: /* statement_expr_list: visibility_modifier statement  */
#line 147 "parser.y"
                                    { printf("Add first visibility_modifier statement :\n"); }
#line 2087 "parser.tab.c"
    break;

  case 9: /* statement_expr_list: expr  */
#line 148 "parser.y"
           { printf("Add first statement :\n"); }
#line 2093 "parser.tab.c"
    break;

  case 10: /* statement_expr_list: statement_expr_list endlOpt semicolonList endlOpt statement  */
#line 149 "parser.y"
                                                                   { printf("Add new statement to statement_expr_list :\n"); }
#line 2099 "parser.tab.c"
    break;

  case 11: /* statement_expr_list: statement_expr_list endlOpt semicolonList endlOpt expr  */
#line 150 "parser.y"
                                                              { printf("Add new expr to statement_expr_list :\n"); }
#line 2105 "parser.tab.c"
    break;

  case 12: /* statement_expr_list: statement_expr_list endlOpt semicolonList endlOpt visibility_modifier statement  */
#line 151 "parser.y"
                                                                                       { printf("Add new visibility_modifier to statement_expr_list :\n"); }
#line 2111 "parser.tab.c"
    break;

  case 13: /* statement_expr_list: statement_expr_list endlList statement  */
#line 152 "parser.y"
                                              { printf("Add new statement to statement_expr_list :\n"); }
#line 2117 "parser.tab.c"
    break;

  case 14: /* statement_expr_list: statement_expr_list endlList expr  */
#line 153 "parser.y"
                                         { printf("Add new expr to statement_expr_list :\n"); }
#line 2123 "parser.tab.c"
    break;

  case 15: /* statement_expr_list: statement_expr_list endlList visibility_modifier statement  */
#line 154 "parser.y"
                                                                  { printf("Add new visibility_modifier to statement_expr_list :\n"); }
#line 2129 "parser.tab.c"
    break;

  case 17: /* statement_expr_list_e: %empty  */
#line 159 "parser.y"
                     { printf("PARSER found statement_list_e - nothing\n"); }
#line 2135 "parser.tab.c"
    break;

  case 18: /* statement: VAL endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 163 "parser.y"
                                                       { printf("implicit value declaration:\n"); }
#line 2141 "parser.tab.c"
    break;

  case 19: /* statement: VAR endlOpt IDENTIFIER endlOpt '=' endlOpt expr  */
#line 164 "parser.y"
                                                       { printf("implicit variable declaration:\n"); }
#line 2147 "parser.tab.c"
    break;

  case 20: /* statement: VAL endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 165 "parser.y"
                                                                                           { printf("explicit value declaration:\n"); }
#line 2153 "parser.tab.c"
    break;

  case 21: /* statement: VAR endlOpt IDENTIFIER endlOpt ':' endlOpt type_list_simple endlOpt '=' endlOpt expr  */
#line 166 "parser.y"
                                                                                           { printf("explicit variable declaration:\n"); }
#line 2159 "parser.tab.c"
    break;

  case 22: /* statement: method  */
#line 167 "parser.y"
             { printf("Method:\n"); }
#line 2165 "parser.tab.c"
    break;

  case 23: /* if_else_expr: IF endlOpt '(' endlOpt expr endlOpt ')' endlOpt expr endlOpt  */
#line 176 "parser.y"
                                                                            { printf("IF-CONSTR\n"); }
#line 2171 "parser.tab.c"
    break;

  case 24: /* if_else_expr: IF endlOpt '(' endlOpt expr endlOpt ')' endlOpt expr endlOpt ELSE endlOpt expr  */
#line 177 "parser.y"
                                                                                                { printf("IF_ELSE-CONSTR\n"); }
#line 2177 "parser.tab.c"
    break;

  case 31: /* for_expr: FOR '(' for_params ')' expr  */
#line 194 "parser.y"
                                                             { printf("FOR LOOP\n"); }
#line 2183 "parser.tab.c"
    break;

  case 32: /* for_expr: FOR '{' for_multy_list '}' expr  */
#line 195 "parser.y"
                                                              { printf("FOR MULTY LOOP\n"); }
#line 2189 "parser.tab.c"
    break;

  case 33: /* for_expr: FOR '{' for_params if_condition_list '}' expr  */
#line 196 "parser.y"
                                                                               { printf("FOR LOOP: multy with IF_STMT\n"); }
#line 2195 "parser.tab.c"
    break;

  case 59: /* expr_list_e: expr_list  */
#line 268 "parser.y"
                   { printf("PARSER found expr_list - expr_list\n"); }
#line 2201 "parser.tab.c"
    break;

  case 60: /* expr_list_e: %empty  */
#line 269 "parser.y"
                     { printf("PARSER found expr_list - nothing\n"); }
#line 2207 "parser.tab.c"
    break;

  case 61: /* expr_list: expr  */
#line 274 "parser.y"
                      { printf("PARSER found expr_list - expr\n"); }
#line 2213 "parser.tab.c"
    break;

  case 62: /* expr_list: expr_list ',' expr  */
#line 275 "parser.y"
                          { printf("PARSER found expr_list - expr_list\n"); }
#line 2219 "parser.tab.c"
    break;

  case 63: /* expr: const  */
#line 280 "parser.y"
            {printf("PARSER found expr - const\n"); }
#line 2225 "parser.tab.c"
    break;

  case 64: /* expr: IDENTIFIER  */
#line 281 "parser.y"
                 {printf("PARSER found expr - IDENTIFIER\n"); }
#line 2231 "parser.tab.c"
    break;

  case 65: /* expr: CLASS_ID  */
#line 282 "parser.y"
               {printf("PARSER found expr - CLASS_ID\n"); }
#line 2237 "parser.tab.c"
    break;

  case 66: /* expr: IDENTIFIER '=' expr  */
#line 283 "parser.y"
                          { printf("Assignment:\n"); }
#line 2243 "parser.tab.c"
    break;

  case 67: /* expr: '(' expr ')'  */
#line 284 "parser.y"
                   { printf("PARSER found expr - ( expr ) \n"); }
#line 2249 "parser.tab.c"
    break;

  case 68: /* expr: expr '>' expr  */
#line 285 "parser.y"
                    {printf("PARSER found expr - expr > expr\n"); }
#line 2255 "parser.tab.c"
    break;

  case 69: /* expr: expr '<' expr  */
#line 286 "parser.y"
                    {printf("PARSER found expr - expr < expr\n"); }
#line 2261 "parser.tab.c"
    break;

  case 70: /* expr: expr MORE_OR_EQUAL_OPERATOR expr  */
#line 287 "parser.y"
                                       {printf("PARSER found expr - expr >= expr\n"); }
#line 2267 "parser.tab.c"
    break;

  case 71: /* expr: expr LESS_OR_EQUAL_OPERATOR expr  */
#line 288 "parser.y"
                                       {printf("PARSER found expr - expr <= expr\n"); }
#line 2273 "parser.tab.c"
    break;

  case 72: /* expr: expr EQ expr  */
#line 289 "parser.y"
                   {printf("PARSER found expr - expr == expr\n"); }
#line 2279 "parser.tab.c"
    break;

  case 73: /* expr: expr NEQ expr  */
#line 290 "parser.y"
                    {printf("PARSER found expr - expr != expr\n"); }
#line 2285 "parser.tab.c"
    break;

  case 74: /* expr: expr '+' expr  */
#line 291 "parser.y"
                    { printf("PARSER found expr - expr + expr\n"); }
#line 2291 "parser.tab.c"
    break;

  case 75: /* expr: expr '-' expr  */
#line 292 "parser.y"
                    { printf("PARSER found expr - expr - expr\n"); }
#line 2297 "parser.tab.c"
    break;

  case 76: /* expr: expr '/' expr  */
#line 293 "parser.y"
                    { printf("PARSER found expr - expr / expr\n"); }
#line 2303 "parser.tab.c"
    break;

  case 77: /* expr: expr '*' expr  */
#line 294 "parser.y"
                    { printf("PARSER found expr - expr * expr\n"); }
#line 2309 "parser.tab.c"
    break;

  case 78: /* expr: expr '%' expr  */
#line 295 "parser.y"
                    { printf("PARSER found expr - expr % expr\n"); }
#line 2315 "parser.tab.c"
    break;

  case 79: /* expr: expr '&' expr  */
#line 296 "parser.y"
                    { printf("PARSER found expr - expr && expr\n"); }
#line 2321 "parser.tab.c"
    break;

  case 80: /* expr: expr '|' expr  */
#line 297 "parser.y"
                    { printf("PARSER found expr - expr | expr\n"); }
#line 2327 "parser.tab.c"
    break;

  case 81: /* expr: expr KW_OR expr  */
#line 298 "parser.y"
                      { printf("PARSER found expr - expr || expr\n"); }
#line 2333 "parser.tab.c"
    break;

  case 82: /* expr: expr KW_AND expr  */
#line 299 "parser.y"
                       { printf("PARSER found expr - expr && expr\n"); }
#line 2339 "parser.tab.c"
    break;

  case 83: /* expr: '-' expr  */
#line 300 "parser.y"
                             { printf("PARSER found expr - UMINUS\n"); }
#line 2345 "parser.tab.c"
    break;

  case 84: /* expr: '+' expr  */
#line 301 "parser.y"
                            { printf("PARSER found expr - UPLUS\n"); }
#line 2351 "parser.tab.c"
    break;

  case 85: /* expr: func_call  */
#line 302 "parser.y"
                { printf("PARSER found expr - func_call\n"); }
#line 2357 "parser.tab.c"
    break;

  case 86: /* expr: if_else_expr  */
#line 303 "parser.y"
                                        { printf("PARSER found expr - if_else_expr\n"); }
#line 2363 "parser.tab.c"
    break;

  case 87: /* expr: for_expr  */
#line 304 "parser.y"
               { printf("PARSER found expr - for_expr\n"); }
#line 2369 "parser.tab.c"
    break;

  case 88: /* expr: while_expr  */
#line 305 "parser.y"
                 { printf("PARSER found expr - while_expr\n"); }
#line 2375 "parser.tab.c"
    break;

  case 89: /* expr: do_while_expr  */
#line 306 "parser.y"
                    { printf("PARSER found expr - do_while_expr\n"); }
#line 2381 "parser.tab.c"
    break;

  case 90: /* expr: try_expr  */
#line 307 "parser.y"
               { printf("PARSER found expr - try_expr\n"); }
#line 2387 "parser.tab.c"
    break;

  case 91: /* expr: match_expr  */
#line 308 "parser.y"
                 { printf("PARSER found expr - match_expr\n"); }
#line 2393 "parser.tab.c"
    break;

  case 93: /* expr: func  */
#line 310 "parser.y"
           { printf("Function:\n"); }
#line 2399 "parser.tab.c"
    break;

  case 94: /* expr: method_call  */
#line 311 "parser.y"
                  { printf("method_call:\n"); }
#line 2405 "parser.tab.c"
    break;

  case 95: /* expr: instance_class  */
#line 312 "parser.y"
                     { printf("instance_class:\n"); }
#line 2411 "parser.tab.c"
    break;

  case 96: /* expr: READLINE '(' ')'  */
#line 313 "parser.y"
                     { printf("readLine:\n"); }
#line 2417 "parser.tab.c"
    break;

  case 97: /* expr: PRINT '(' expr ')'  */
#line 314 "parser.y"
                        { printf("print:\n"); }
#line 2423 "parser.tab.c"
    break;

  case 98: /* num_const: NUM_10  */
#line 319 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 2429 "parser.tab.c"
    break;

  case 99: /* num_const: NUM_16  */
#line 320 "parser.y"
             { printf("PARSER found - INT\n"); }
#line 2435 "parser.tab.c"
    break;

  case 100: /* num_const: REAL_NUMBER  */
#line 321 "parser.y"
                  { printf("PARSER found - REAL\n"); }
#line 2441 "parser.tab.c"
    break;

  case 101: /* num_const: REAL_NUMBER_EXPONENT  */
#line 322 "parser.y"
                           { printf("PARSER found - REAL_EXP\n"); }
#line 2447 "parser.tab.c"
    break;

  case 112: /* func_call: IDENTIFIER '(' expr_list_e ')'  */
#line 344 "parser.y"
                                     { printf("Function call: WITH PARAMS\n"); }
#line 2453 "parser.tab.c"
    break;

  case 139: /* array: ARRAY '(' expr_list_e ')'  */
#line 419 "parser.y"
                                { printf("PARSER found Array\n"); }
#line 2459 "parser.tab.c"
    break;

  case 140: /* list: LIST '(' expr_list_e ')'  */
#line 425 "parser.y"
                               { printf("PARSER found List\n"); }
#line 2465 "parser.tab.c"
    break;

  case 141: /* vector: VECTOR '(' expr_list_e ')'  */
#line 431 "parser.y"
                                 { printf("PARSER found Vector\n"); }
#line 2471 "parser.tab.c"
    break;

  case 142: /* set: SET '(' expr_list_e ')'  */
#line 437 "parser.y"
                              { printf("PARSER found Set\n"); }
#line 2477 "parser.tab.c"
    break;

  case 143: /* endlList: ENDL  */
#line 445 "parser.y"
                    { printf("PARSER found ENDL\n"); }
#line 2483 "parser.tab.c"
    break;

  case 144: /* endlList: endlList ENDL  */
#line 446 "parser.y"
                    { printf("PARSER found endlList\n"); }
#line 2489 "parser.tab.c"
    break;

  case 145: /* endlOpt: endlList  */
#line 451 "parser.y"
               { printf("PARSER found endlOpt\n"); }
#line 2495 "parser.tab.c"
    break;

  case 147: /* semicolonList: ';'  */
#line 457 "parser.y"
                   { printf("PARSER found SEMICOLON\n"); }
#line 2501 "parser.tab.c"
    break;

  case 148: /* semicolonList: semicolonList ';'  */
#line 458 "parser.y"
                        { printf("PARSER found semicolonList\n"); }
#line 2507 "parser.tab.c"
    break;


#line 2511 "parser.tab.c"

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

#line 461 "parser.y"

