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
#line 1 "yacc.y"

	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	#include<time.h>
	#define MAX_NAME_LEN 32
	#define MAX_VARIABLES 32
	int yylex(void);
	int yyerror(const char *s);
	int success = 1;
	int temp;
	int idx = 0;
	int table_idx = 0;
	int tab_counter = 0;
	int current_data_type;
	char for_var[MAX_NAME_LEN];
	struct symbol_table{char var_name[MAX_NAME_LEN]; int type;} sym[MAX_VARIABLES];
	extern int lookup_in_table(char var[MAX_NAME_LEN]);
	extern void insert_to_table(char var[MAX_NAME_LEN], int type);
	extern void print_tabs();
	char var_list[MAX_VARIABLES][MAX_NAME_LEN];	// MAX_VARIABLES variable names with each variable being atmost MAX_NAME_LEN characters long
	int string_or_var[MAX_VARIABLES];
	//extern int *yytext;

#line 96 "y.tab.c"

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
# define YYDEBUG 0
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
    VAR = 258,                     /* VAR  */
    LNOT = 259,                    /* LNOT  */
    LOR = 260,                     /* LOR  */
    LAND = 261,                    /* LAND  */
    LEQ = 262,                     /* LEQ  */
    GEQ = 263,                     /* GEQ  */
    LT = 264,                      /* LT  */
    GT = 265,                      /* GT  */
    NEQ = 266,                     /* NEQ  */
    EQ = 267,                      /* EQ  */
    PLUS = 268,                    /* PLUS  */
    MINUS = 269,                   /* MINUS  */
    MUL = 270,                     /* MUL  */
    DIV = 271,                     /* DIV  */
    MOD = 272,                     /* MOD  */
    ASSIGNMENT = 273,              /* ASSIGNMENT  */
    MAIN = 274,                    /* MAIN  */
    VOID = 275,                    /* VOID  */
    RETURN = 276,                  /* RETURN  */
    BREAK = 277,                   /* BREAK  */
    CONTINUE = 278,                /* CONTINUE  */
    FOR = 279,                     /* FOR  */
    DO = 280,                      /* DO  */
    WHILE = 281,                   /* WHILE  */
    IF = 282,                      /* IF  */
    ELSE = 283,                    /* ELSE  */
    ELSEIF = 284,                  /* ELSEIF  */
    PRINTF = 285,                  /* PRINTF  */
    DEFINE = 286,                  /* DEFINE  */
    INCLUDE = 287,                 /* INCLUDE  */
    NUMBER = 288,                  /* NUMBER  */
    QUOTED_STRING = 289,           /* QUOTED_STRING  */
    LC = 290,                      /* LC  */
    RC = 291,                      /* RC  */
    COMA = 292,                    /* COMA  */
    RB = 293,                      /* RB  */
    LB = 294,                      /* LB  */
    RP = 295,                      /* RP  */
    LP = 296,                      /* LP  */
    SEMICOLON = 297,               /* SEMICOLON  */
    COLON = 298,                   /* COLON  */
    QM = 299,                      /* QM  */
    ILCOMMENT = 300,               /* ILCOMMENT  */
    MLCOMMENT = 301,               /* MLCOMMENT  */
    INT = 302,                     /* INT  */
    CHAR = 303,                    /* CHAR  */
    FLOAT = 304,                   /* FLOAT  */
    DOUBLE = 305                   /* DOUBLE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define VAR 258
#define LNOT 259
#define LOR 260
#define LAND 261
#define LEQ 262
#define GEQ 263
#define LT 264
#define GT 265
#define NEQ 266
#define EQ 267
#define PLUS 268
#define MINUS 269
#define MUL 270
#define DIV 271
#define MOD 272
#define ASSIGNMENT 273
#define MAIN 274
#define VOID 275
#define RETURN 276
#define BREAK 277
#define CONTINUE 278
#define FOR 279
#define DO 280
#define WHILE 281
#define IF 282
#define ELSE 283
#define ELSEIF 284
#define PRINTF 285
#define DEFINE 286
#define INCLUDE 287
#define NUMBER 288
#define QUOTED_STRING 289
#define LC 290
#define RC 291
#define COMA 292
#define RB 293
#define LB 294
#define RP 295
#define LP 296
#define SEMICOLON 297
#define COLON 298
#define QM 299
#define ILCOMMENT 300
#define MLCOMMENT 301
#define INT 302
#define CHAR 303
#define FLOAT 304
#define DOUBLE 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 26 "yacc.y"

int data_type;
char var_name[30];

#line 251 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_VAR = 3,                        /* VAR  */
  YYSYMBOL_LNOT = 4,                       /* LNOT  */
  YYSYMBOL_LOR = 5,                        /* LOR  */
  YYSYMBOL_LAND = 6,                       /* LAND  */
  YYSYMBOL_LEQ = 7,                        /* LEQ  */
  YYSYMBOL_GEQ = 8,                        /* GEQ  */
  YYSYMBOL_LT = 9,                         /* LT  */
  YYSYMBOL_GT = 10,                        /* GT  */
  YYSYMBOL_NEQ = 11,                       /* NEQ  */
  YYSYMBOL_EQ = 12,                        /* EQ  */
  YYSYMBOL_PLUS = 13,                      /* PLUS  */
  YYSYMBOL_MINUS = 14,                     /* MINUS  */
  YYSYMBOL_MUL = 15,                       /* MUL  */
  YYSYMBOL_DIV = 16,                       /* DIV  */
  YYSYMBOL_MOD = 17,                       /* MOD  */
  YYSYMBOL_ASSIGNMENT = 18,                /* ASSIGNMENT  */
  YYSYMBOL_MAIN = 19,                      /* MAIN  */
  YYSYMBOL_VOID = 20,                      /* VOID  */
  YYSYMBOL_RETURN = 21,                    /* RETURN  */
  YYSYMBOL_BREAK = 22,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 23,                  /* CONTINUE  */
  YYSYMBOL_FOR = 24,                       /* FOR  */
  YYSYMBOL_DO = 25,                        /* DO  */
  YYSYMBOL_WHILE = 26,                     /* WHILE  */
  YYSYMBOL_IF = 27,                        /* IF  */
  YYSYMBOL_ELSE = 28,                      /* ELSE  */
  YYSYMBOL_ELSEIF = 29,                    /* ELSEIF  */
  YYSYMBOL_PRINTF = 30,                    /* PRINTF  */
  YYSYMBOL_DEFINE = 31,                    /* DEFINE  */
  YYSYMBOL_INCLUDE = 32,                   /* INCLUDE  */
  YYSYMBOL_NUMBER = 33,                    /* NUMBER  */
  YYSYMBOL_QUOTED_STRING = 34,             /* QUOTED_STRING  */
  YYSYMBOL_LC = 35,                        /* LC  */
  YYSYMBOL_RC = 36,                        /* RC  */
  YYSYMBOL_COMA = 37,                      /* COMA  */
  YYSYMBOL_RB = 38,                        /* RB  */
  YYSYMBOL_LB = 39,                        /* LB  */
  YYSYMBOL_RP = 40,                        /* RP  */
  YYSYMBOL_LP = 41,                        /* LP  */
  YYSYMBOL_SEMICOLON = 42,                 /* SEMICOLON  */
  YYSYMBOL_COLON = 43,                     /* COLON  */
  YYSYMBOL_QM = 44,                        /* QM  */
  YYSYMBOL_ILCOMMENT = 45,                 /* ILCOMMENT  */
  YYSYMBOL_MLCOMMENT = 46,                 /* MLCOMMENT  */
  YYSYMBOL_INT = 47,                       /* INT  */
  YYSYMBOL_CHAR = 48,                      /* CHAR  */
  YYSYMBOL_FLOAT = 49,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 50,                    /* DOUBLE  */
  YYSYMBOL_YYACCEPT = 51,                  /* $accept  */
  YYSYMBOL_c_file = 52,                    /* c_file  */
  YYSYMBOL_53_1 = 53,                      /* $@1  */
  YYSYMBOL_54_2 = 54,                      /* $@2  */
  YYSYMBOL_BEFORE_MAIN = 55,               /* BEFORE_MAIN  */
  YYSYMBOL_AFTER_MAIN = 56,                /* AFTER_MAIN  */
  YYSYMBOL_DECLARATION = 57,               /* DECLARATION  */
  YYSYMBOL_VAR_OR_FUNC_USE = 58,           /* VAR_OR_FUNC_USE  */
  YYSYMBOL_59_3 = 59,                      /* $@3  */
  YYSYMBOL_60_4 = 60,                      /* $@4  */
  YYSYMBOL_61_5 = 61,                      /* $@5  */
  YYSYMBOL_62_6 = 62,                      /* $@6  */
  YYSYMBOL_63_7 = 63,                      /* $@7  */
  YYSYMBOL_64_8 = 64,                      /* $@8  */
  YYSYMBOL_DEFINE_DECLARATION = 65,        /* DEFINE_DECLARATION  */
  YYSYMBOL_66_9 = 66,                      /* $@9  */
  YYSYMBOL_67_10 = 67,                     /* $@10  */
  YYSYMBOL_VAR_DECLARATION = 68,           /* VAR_DECLARATION  */
  YYSYMBOL_69_11 = 69,                     /* $@11  */
  YYSYMBOL_70_12 = 70,                     /* $@12  */
  YYSYMBOL_71_13 = 71,                     /* $@13  */
  YYSYMBOL_FUNCTION_DECLARATION = 72,      /* FUNCTION_DECLARATION  */
  YYSYMBOL_73_14 = 73,                     /* $@14  */
  YYSYMBOL_74_15 = 74,                     /* $@15  */
  YYSYMBOL_75_16 = 75,                     /* $@16  */
  YYSYMBOL_76_17 = 76,                     /* $@17  */
  YYSYMBOL_PARAMETERS = 77,                /* PARAMETERS  */
  YYSYMBOL_78_18 = 78,                     /* $@18  */
  YYSYMBOL_79_19 = 79,                     /* $@19  */
  YYSYMBOL_80_20 = 80,                     /* $@20  */
  YYSYMBOL_EXPRESSION_DECLARATION_OR_NoDECL = 81, /* EXPRESSION_DECLARATION_OR_NoDECL  */
  YYSYMBOL_82_21 = 82,                     /* $@21  */
  YYSYMBOL_83_22 = 83,                     /* $@22  */
  YYSYMBOL_84_23 = 84,                     /* $@23  */
  YYSYMBOL_85_24 = 85,                     /* $@24  */
  YYSYMBOL_FOR_BLOCK_PARAMETERS = 86,      /* FOR_BLOCK_PARAMETERS  */
  YYSYMBOL_STATEMENTS = 87,                /* STATEMENTS  */
  YYSYMBOL_88_25 = 88,                     /* $@25  */
  YYSYMBOL_89_26 = 89,                     /* $@26  */
  YYSYMBOL_90_27 = 90,                     /* $@27  */
  YYSYMBOL_91_28 = 91,                     /* $@28  */
  YYSYMBOL_IF_BLOCK = 92,                  /* IF_BLOCK  */
  YYSYMBOL_93_29 = 93,                     /* $@29  */
  YYSYMBOL_94_30 = 94,                     /* $@30  */
  YYSYMBOL_95_31 = 95,                     /* $@31  */
  YYSYMBOL_ELSEIF_OR_ELSE = 96,            /* ELSEIF_OR_ELSE  */
  YYSYMBOL_97_32 = 97,                     /* $@32  */
  YYSYMBOL_98_33 = 98,                     /* $@33  */
  YYSYMBOL_99_34 = 99,                     /* $@34  */
  YYSYMBOL_100_35 = 100,                   /* $@35  */
  YYSYMBOL_101_36 = 101,                   /* $@36  */
  YYSYMBOL_FOR_BLOCK = 102,                /* FOR_BLOCK  */
  YYSYMBOL_103_37 = 103,                   /* $@37  */
  YYSYMBOL_104_38 = 104,                   /* $@38  */
  YYSYMBOL_TERMINAL = 105,                 /* TERMINAL  */
  YYSYMBOL_COMMENT = 106,                  /* COMMENT  */
  YYSYMBOL_TYPE = 107,                     /* TYPE  */
  YYSYMBOL_EXPRESSION = 108,               /* EXPRESSION  */
  YYSYMBOL_109_39 = 109,                   /* $@39  */
  YYSYMBOL_110_40 = 110,                   /* $@40  */
  YYSYMBOL_111_41 = 111,                   /* $@41  */
  YYSYMBOL_112_42 = 112,                   /* $@42  */
  YYSYMBOL_113_43 = 113,                   /* $@43  */
  YYSYMBOL_114_44 = 114,                   /* $@44  */
  YYSYMBOL_115_45 = 115,                   /* $@45  */
  YYSYMBOL_116_46 = 116,                   /* $@46  */
  YYSYMBOL_117_47 = 117,                   /* $@47  */
  YYSYMBOL_118_48 = 118,                   /* $@48  */
  YYSYMBOL_119_49 = 119,                   /* $@49  */
  YYSYMBOL_120_50 = 120,                   /* $@50  */
  YYSYMBOL_121_51 = 121,                   /* $@51  */
  YYSYMBOL_122_52 = 122,                   /* $@52  */
  YYSYMBOL_123_53 = 123,                   /* $@53  */
  YYSYMBOL_124_54 = 124,                   /* $@54  */
  YYSYMBOL_125_55 = 125,                   /* $@55  */
  YYSYMBOL_SEMICOLON_NT = 126,             /* SEMICOLON_NT  */
  YYSYMBOL_SEMICOLON_OR_ERROR = 127,       /* SEMICOLON_OR_ERROR  */
  YYSYMBOL_EXPRESSION_NT = 128,            /* EXPRESSION_NT  */
  YYSYMBOL_129_56 = 129,                   /* $@56  */
  YYSYMBOL_130_57 = 130,                   /* $@57  */
  YYSYMBOL_DELIMITER = 131                 /* DELIMITER  */
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
typedef yytype_uint8 yy_state_t;

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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   248

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  81
/* YYNRULES -- Number of rules.  */
#define YYNRULES  134
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  221

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   305


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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    54,    54,    54,    54,    55,    58,    59,    60,    61,
      62,    65,    76,    77,    80,    80,    80,    81,    81,    81,
      81,    81,    84,    84,    84,    87,    87,    88,    88,    88,
      91,    91,    91,    91,    91,   102,   102,   103,   103,   103,
     104,   107,   107,   107,   108,   108,   108,   109,   110,   113,
     129,   129,   130,   130,   131,   131,   132,   132,   133,   134,
     142,   142,   142,   142,   145,   145,   145,   145,   145,   146,
     146,   147,   155,   155,   155,   158,   159,   162,   163,   166,
     167,   168,   169,   170,   177,   177,   178,   178,   179,   179,
     180,   180,   181,   181,   182,   182,   184,   184,   185,   185,
     186,   186,   188,   188,   189,   189,   190,   190,   191,   191,
     192,   192,   193,   194,   194,   195,   196,   196,   198,   198,
     200,   202,   210,   211,   214,   215,   216,   219,   220,   220,
     221,   221,   222,   225,   226
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "VAR", "LNOT", "LOR",
  "LAND", "LEQ", "GEQ", "LT", "GT", "NEQ", "EQ", "PLUS", "MINUS", "MUL",
  "DIV", "MOD", "ASSIGNMENT", "MAIN", "VOID", "RETURN", "BREAK",
  "CONTINUE", "FOR", "DO", "WHILE", "IF", "ELSE", "ELSEIF", "PRINTF",
  "DEFINE", "INCLUDE", "NUMBER", "QUOTED_STRING", "LC", "RC", "COMA", "RB",
  "LB", "RP", "LP", "SEMICOLON", "COLON", "QM", "ILCOMMENT", "MLCOMMENT",
  "INT", "CHAR", "FLOAT", "DOUBLE", "$accept", "c_file", "$@1", "$@2",
  "BEFORE_MAIN", "AFTER_MAIN", "DECLARATION", "VAR_OR_FUNC_USE", "$@3",
  "$@4", "$@5", "$@6", "$@7", "$@8", "DEFINE_DECLARATION", "$@9", "$@10",
  "VAR_DECLARATION", "$@11", "$@12", "$@13", "FUNCTION_DECLARATION",
  "$@14", "$@15", "$@16", "$@17", "PARAMETERS", "$@18", "$@19", "$@20",
  "EXPRESSION_DECLARATION_OR_NoDECL", "$@21", "$@22", "$@23", "$@24",
  "FOR_BLOCK_PARAMETERS", "STATEMENTS", "$@25", "$@26", "$@27", "$@28",
  "IF_BLOCK", "$@29", "$@30", "$@31", "ELSEIF_OR_ELSE", "$@32", "$@33",
  "$@34", "$@35", "$@36", "FOR_BLOCK", "$@37", "$@38", "TERMINAL",
  "COMMENT", "TYPE", "EXPRESSION", "$@39", "$@40", "$@41", "$@42", "$@43",
  "$@44", "$@45", "$@46", "$@47", "$@48", "$@49", "$@50", "$@51", "$@52",
  "$@53", "$@54", "$@55", "SEMICOLON_NT", "SEMICOLON_OR_ERROR",
  "EXPRESSION_NT", "$@56", "$@57", "DELIMITER", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-82)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-60)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      95,   -15,   -82,   -82,    70,   -82,   -82,   -82,   -82,    12,
      11,    70,    70,    32,   -82,   -82,    70,    39,   -82,   -82,
     -12,   -82,   -82,   -10,   -82,   -82,   -82,   -82,   -82,     2,
      38,    17,    -8,   149,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -15,    29,    64,    41,    68,   -17,    -8,     4,    14,
     -82,   -82,   149,    52,   149,    56,   149,   -82,   -82,   149,
       2,   -82,    58,    96,   -82,   -82,    82,    85,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,    60,   -82,   -82,   -82,   -82,
     -82,   156,   134,   101,    76,     4,   156,    71,    87,   -82,
     100,   107,   -82,   -82,   208,    83,    -5,   -23,    84,   119,
     231,   -82,   -82,   -82,     2,   -82,   -82,   158,   -82,   -82,
     158,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   112,
     115,   -82,   -82,   -82,   -82,    97,   113,   -82,   -82,   -82,
     134,    99,   -82,     4,   149,   -82,     4,   158,   -82,   231,
     158,   158,   195,   158,   158,   158,   158,   158,   158,   158,
     158,   -82,   158,   -82,   158,   158,   158,   158,   158,   -82,
     -82,   -23,   -82,   117,   -82,    94,   106,   231,   231,   231,
     -82,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   149,    -8,   158,   149,   -82,
     -82,   -82,   103,   -82,   231,   105,    -8,     2,   -82,   -82,
     -82,   -82,    20,   114,   110,   -82,   -82,   -82,   149,   156,
     121,   118,   -82,   -82,   128,   -82,   149,   130,   -82,    20,
     -82
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    83,    22,     0,    79,    80,    81,    82,     0,
       0,     0,     0,     0,   134,   133,     0,     0,     6,     1,
       0,     8,     7,    25,    13,    12,     9,    23,     2,   123,
       0,     0,     0,     0,   122,    26,    28,    31,    75,    76,
      24,     0,     0,     0,     0,     0,     0,     0,    40,     0,
       3,    14,     0,     0,     0,     0,     0,    77,    78,     0,
     123,    37,     0,     0,    58,    11,     0,     0,    51,    60,
      53,    72,    55,    57,    29,     0,    32,    35,     4,    15,
      18,   132,     0,     0,     0,    40,   132,     0,   120,   100,
       0,     0,   118,   121,   127,     0,   120,     0,     0,     0,
      48,    38,    33,    36,   123,    19,   128,     0,   113,   116,
       0,    98,    96,    92,    94,    90,    88,    86,    84,   102,
     104,   106,   108,   110,   130,     0,     0,   125,   124,   126,
       0,     0,    41,    40,     0,    16,    40,     0,   120,   101,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,     0,   115,     0,     0,     0,     0,     0,    61,
      45,     0,    73,     0,    39,     0,     0,   129,   114,   117,
     119,    99,    97,    93,    95,    91,    89,    87,    85,   103,
     105,   107,   109,   111,   131,     0,     0,     0,     0,    42,
      34,    20,     0,    46,    49,     0,     0,   123,    62,    74,
      43,    21,    71,     0,     0,    63,    69,    64,     0,   132,
       0,     0,    70,    65,     0,    66,     0,     0,    67,    71,
      68
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -82,   -82,   -82,   -82,     6,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -76,   -82,   -82,   -82,
      23,   -82,   -82,   -82,   -82,   -82,   -52,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -45,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -31,   -82,   -42,   -71,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -57,    16,   -81,   -82,   -82,
     137
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     9,    33,    65,    10,    78,    11,    52,    66,    86,
      67,    87,   136,   197,    12,    17,    32,    24,    29,    30,
      47,    25,    31,    48,    84,   134,    62,    85,    75,   133,
      97,   163,   196,   126,   186,    98,    42,    43,    44,    45,
      46,    54,    81,   185,   202,   205,   209,   214,   216,   219,
     208,    56,    82,   188,    93,    59,    13,    94,   150,   149,
     148,   147,   145,   146,   144,   143,   107,   152,   154,   155,
     156,   157,   140,   141,   110,    35,   130,    95,   137,   158,
      16
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      68,    40,    70,    74,    72,   104,    63,    73,   -27,   103,
      18,   100,    19,   -44,   127,     1,    60,    21,    22,   128,
     129,    14,    26,    28,     2,    38,    39,    15,    57,    58,
      20,   -30,   -47,    83,     2,    23,   139,   -47,   -47,   142,
      99,    61,    27,    63,    34,     3,     4,   135,   203,   204,
     -10,     5,     6,     7,     8,    64,    36,   164,    37,   100,
     166,     5,     6,     7,     8,    50,   167,    51,    53,   168,
     169,     1,   171,   172,   173,   174,   175,   176,   177,   178,
       2,   179,   165,   180,   181,   182,   183,   184,    99,   -10,
       2,    63,    55,    69,    63,    -5,     1,    71,    76,    77,
      79,     3,     4,    80,   101,   106,   -10,     5,     6,     7,
       8,   102,   105,   108,   -10,     2,   194,     5,     6,     7,
       8,   109,   132,   125,   131,   151,     3,     4,   211,   153,
     190,   160,   159,   192,   162,   189,   195,    96,    89,   198,
     201,   199,     5,     6,     7,     8,   191,    90,    91,   206,
      41,   207,   -50,   161,     2,   193,   210,   212,   213,    88,
      89,   138,    89,   215,   217,   200,   218,    38,    39,    90,
      91,    90,    91,   -54,   220,    92,   -52,   187,    49,     0,
       0,     5,     6,     7,     8,   -59,     0,     0,     0,    38,
      39,    38,    39,     0,   -56,   -56,     0,    92,     0,    92,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,     0,     0,     0,
       0,     0,     0,     0,     0,   170,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123
};

static const yytype_int16 yycheck[] =
{
      52,    32,    54,    60,    56,    86,    48,    59,    18,    85,
       4,    82,     0,    18,    37,     1,    47,    11,    12,    42,
      43,    36,    16,    35,    20,    33,    34,    42,    45,    46,
      19,    41,    37,    75,    20,     3,   107,    42,    43,   110,
      82,    37,     3,    85,    42,    31,    32,   104,    28,    29,
      36,    47,    48,    49,    50,    49,    18,   133,    41,   130,
     136,    47,    48,    49,    50,    36,   137,     3,    27,   140,
     141,     1,   143,   144,   145,   146,   147,   148,   149,   150,
      20,   152,   134,   154,   155,   156,   157,   158,   130,    19,
      20,   133,    24,    41,   136,     0,     1,    41,    40,     3,
      18,    31,    32,    18,     3,    18,    36,    47,    48,    49,
      50,    35,    41,    13,    19,    20,   187,    47,    48,    49,
      50,    14,     3,    40,    40,    13,    31,    32,   209,    14,
      36,    18,    35,   185,    35,    18,   188,     3,     4,    36,
     197,    36,    47,    48,    49,    50,    40,    13,    14,    35,
       1,    41,     3,   130,    20,   186,   208,    36,    40,     3,
       4,     3,     4,    35,   216,   196,    36,    33,    34,    13,
      14,    13,    14,    24,   219,    41,    27,   161,    41,    -1,
      -1,    47,    48,    49,    50,    36,    -1,    -1,    -1,    33,
      34,    33,    34,    -1,    45,    46,    -1,    41,    -1,    41,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    20,    31,    32,    47,    48,    49,    50,    52,
      55,    57,    65,   107,    36,    42,   131,    66,    55,     0,
      19,    55,    55,     3,    68,    72,    55,     3,    35,    69,
      70,    73,    67,    53,    42,   126,    18,    41,    33,    34,
     105,     1,    87,    88,    89,    90,    91,    71,    74,   131,
      36,     3,    58,    27,    92,    24,   102,    45,    46,   106,
     105,    37,    77,   107,    55,    54,    59,    61,    87,    41,
      87,    41,    87,    87,   126,    79,    40,     3,    56,    18,
      18,    93,   103,   107,    75,    78,    60,    62,     3,     4,
      13,    14,    41,   105,   108,   128,     3,    81,    86,   107,
     108,     3,    35,    77,   128,    41,    18,   117,    13,    14,
     125,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    40,    84,    37,    42,    43,
     127,    40,     3,    80,    76,   126,    63,   129,     3,   108,
     123,   124,   108,   116,   115,   113,   114,   112,   111,   110,
     109,    13,   118,    14,   119,   120,   121,   122,   130,    35,
      18,    81,    35,    82,    77,    87,    77,   108,   108,   108,
      40,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,    94,    85,   127,   104,    18,
      36,    40,    87,   105,   108,    87,    83,    64,    36,    36,
     105,   126,    95,    28,    29,    96,    35,    41,   101,    97,
      87,   128,    36,    40,    98,    35,    99,    87,    36,   100,
      96
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    53,    54,    52,    52,    55,    55,    55,    55,
      55,    56,    57,    57,    59,    60,    58,    61,    62,    63,
      64,    58,    66,    67,    65,    69,    68,    70,    71,    68,
      73,    74,    75,    76,    72,    78,    77,    79,    80,    77,
      77,    82,    83,    81,    84,    85,    81,    81,    81,    86,
      88,    87,    89,    87,    90,    87,    91,    87,    87,    87,
      93,    94,    95,    92,    97,    98,    99,   100,    96,   101,
      96,    96,   103,   104,   102,   105,   105,   106,   106,   107,
     107,   107,   107,   107,   109,   108,   110,   108,   111,   108,
     112,   108,   113,   108,   114,   108,   115,   108,   116,   108,
     117,   108,   118,   108,   119,   108,   120,   108,   121,   108,
     122,   108,   108,   123,   108,   108,   124,   108,   125,   108,
     108,   108,   126,   126,   127,   127,   127,   128,   129,   128,
     130,   128,   128,   131,   131
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     8,     0,     2,     2,     2,     3,
       0,     0,     2,     2,     0,     0,     6,     0,     0,     0,
       0,    10,     0,     0,     5,     0,     3,     0,     0,     6,
       0,     0,     0,     0,    11,     0,     4,     0,     0,     6,
       0,     0,     0,     6,     0,     0,     5,     1,     1,     5,
       0,     3,     0,     3,     0,     3,     0,     3,     3,     0,
       0,     0,     0,    11,     0,     0,     0,     0,    12,     0,
       5,     0,     0,     0,     9,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     3,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     3,     0,     4,     3,     0,     4,     0,     4,
       1,     1,     1,     0,     1,     1,     1,     1,     0,     4,
       0,     4,     0,     1,     1
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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
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

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* $@1: %empty  */
#line 54 "yacc.y"
                                 {printf("function main(){\n"); tab_counter++;}
#line 1538 "y.tab.c"
    break;

  case 3: /* $@2: %empty  */
#line 54 "yacc.y"
                                                                                              { printf("}");printf("\n/*end of main function*/\n"); }
#line 1544 "y.tab.c"
    break;

  case 5: /* c_file: %empty  */
#line 55 "yacc.y"
                          {printf("\n"); exit(2);}
#line 1550 "y.tab.c"
    break;

  case 10: /* BEFORE_MAIN: %empty  */
#line 62 "yacc.y"
                                              {}
#line 1556 "y.tab.c"
    break;

  case 14: /* $@3: %empty  */
#line 80 "yacc.y"
                      { printf("%s",yylval.var_name);}
#line 1562 "y.tab.c"
    break;

  case 15: /* $@4: %empty  */
#line 80 "yacc.y"
                                                                  {printf(" = ");}
#line 1568 "y.tab.c"
    break;

  case 16: /* VAR_OR_FUNC_USE: VAR $@3 ASSIGNMENT $@4 EXPRESSION_NT SEMICOLON_NT  */
#line 80 "yacc.y"
                                                                                                               { printf("\n");}
#line 1574 "y.tab.c"
    break;

  case 17: /* $@5: %empty  */
#line 81 "yacc.y"
                                                             {printf("%s",yylval.var_name);}
#line 1580 "y.tab.c"
    break;

  case 18: /* $@6: %empty  */
#line 81 "yacc.y"
                                                                                                        {printf(" = ");}
#line 1586 "y.tab.c"
    break;

  case 19: /* $@7: %empty  */
#line 81 "yacc.y"
                                                                                                                            { printf("("); }
#line 1592 "y.tab.c"
    break;

  case 20: /* $@8: %empty  */
#line 81 "yacc.y"
                                                                                                                                                           { printf(")"); }
#line 1598 "y.tab.c"
    break;

  case 21: /* VAR_OR_FUNC_USE: VAR $@5 ASSIGNMENT $@6 LP $@7 PARAMETERS RP $@8 SEMICOLON_NT  */
#line 81 "yacc.y"
                                                                                                                                                                                         { printf("\n");}
#line 1604 "y.tab.c"
    break;

  case 22: /* $@9: %empty  */
#line 84 "yacc.y"
                            {printf("const ");}
#line 1610 "y.tab.c"
    break;

  case 23: /* $@10: %empty  */
#line 84 "yacc.y"
                                                    {printf("%s = ", yylval.var_name);}
#line 1616 "y.tab.c"
    break;

  case 24: /* DEFINE_DECLARATION: DEFINE $@9 VAR $@10 TERMINAL  */
#line 84 "yacc.y"
                                                                                                 {printf(";\n");}
#line 1622 "y.tab.c"
    break;

  case 25: /* $@11: %empty  */
#line 87 "yacc.y"
                      { printf("let %s", yylval.var_name);}
#line 1628 "y.tab.c"
    break;

  case 27: /* $@12: %empty  */
#line 88 "yacc.y"
                                      { printf("let %s", yylval.var_name);}
#line 1634 "y.tab.c"
    break;

  case 28: /* $@13: %empty  */
#line 88 "yacc.y"
                                                                                       {printf(" = ");}
#line 1640 "y.tab.c"
    break;

  case 30: /* $@14: %empty  */
#line 91 "yacc.y"
                               { printf("function %s", yylval.var_name);}
#line 1646 "y.tab.c"
    break;

  case 31: /* $@15: %empty  */
#line 91 "yacc.y"
                                                                             {printf("(");}
#line 1652 "y.tab.c"
    break;

  case 32: /* $@16: %empty  */
#line 91 "yacc.y"
                                                                                                          {printf(") ");}
#line 1658 "y.tab.c"
    break;

  case 33: /* $@17: %empty  */
#line 91 "yacc.y"
                                                                                                                             {printf(" {\n"); tab_counter++;}
#line 1664 "y.tab.c"
    break;

  case 34: /* FUNCTION_DECLARATION: VAR $@14 LP $@15 PARAMETERS RP $@16 LC $@17 STATEMENTS RC  */
#line 91 "yacc.y"
                                                                                                                                                                            {tab_counter--;print_tabs(); printf("}\n");}
#line 1670 "y.tab.c"
    break;

  case 35: /* $@18: %empty  */
#line 102 "yacc.y"
                           {printf("%s", yylval.var_name);}
#line 1676 "y.tab.c"
    break;

  case 37: /* $@19: %empty  */
#line 103 "yacc.y"
                               {printf(", ");}
#line 1682 "y.tab.c"
    break;

  case 38: /* $@20: %empty  */
#line 103 "yacc.y"
                                                        {printf("%s", yylval.var_name);}
#line 1688 "y.tab.c"
    break;

  case 41: /* $@21: %empty  */
#line 107 "yacc.y"
                                           {printf("let %s", yylval.var_name);}
#line 1694 "y.tab.c"
    break;

  case 42: /* $@22: %empty  */
#line 107 "yacc.y"
                                                                                           {printf(" = ");}
#line 1700 "y.tab.c"
    break;

  case 44: /* $@23: %empty  */
#line 108 "yacc.y"
                                                                      {printf("%s", yylval.var_name);}
#line 1706 "y.tab.c"
    break;

  case 45: /* $@24: %empty  */
#line 108 "yacc.y"
                                                                                                                  {printf(" = ");}
#line 1712 "y.tab.c"
    break;

  case 47: /* EXPRESSION_DECLARATION_OR_NoDECL: VAR  */
#line 109 "yacc.y"
                                                                      { printf("%s", yylval.var_name);}
#line 1718 "y.tab.c"
    break;

  case 50: /* $@25: %empty  */
#line 129 "yacc.y"
              {print_tabs();}
#line 1724 "y.tab.c"
    break;

  case 51: /* STATEMENTS: $@25 VAR_OR_FUNC_USE STATEMENTS  */
#line 129 "yacc.y"
                                                        {}
#line 1730 "y.tab.c"
    break;

  case 52: /* $@26: %empty  */
#line 130 "yacc.y"
                          {print_tabs();}
#line 1736 "y.tab.c"
    break;

  case 53: /* STATEMENTS: $@26 IF_BLOCK STATEMENTS  */
#line 130 "yacc.y"
                                                             {}
#line 1742 "y.tab.c"
    break;

  case 54: /* $@27: %empty  */
#line 131 "yacc.y"
                          {print_tabs();}
#line 1748 "y.tab.c"
    break;

  case 55: /* STATEMENTS: $@27 FOR_BLOCK STATEMENTS  */
#line 131 "yacc.y"
                                                              {}
#line 1754 "y.tab.c"
    break;

  case 56: /* $@28: %empty  */
#line 132 "yacc.y"
              {print_tabs();}
#line 1760 "y.tab.c"
    break;

  case 57: /* STATEMENTS: $@28 COMMENT STATEMENTS  */
#line 132 "yacc.y"
                                                {}
#line 1766 "y.tab.c"
    break;

  case 59: /* STATEMENTS: %empty  */
#line 134 "yacc.y"
                    { }
#line 1772 "y.tab.c"
    break;

  case 60: /* $@29: %empty  */
#line 142 "yacc.y"
                    {printf("if (");}
#line 1778 "y.tab.c"
    break;

  case 61: /* $@30: %empty  */
#line 142 "yacc.y"
                                                          {  printf(") {\n"); tab_counter++;}
#line 1784 "y.tab.c"
    break;

  case 62: /* $@31: %empty  */
#line 142 "yacc.y"
                                                                                                            {tab_counter--; print_tabs(); printf("}\n");}
#line 1790 "y.tab.c"
    break;

  case 64: /* $@32: %empty  */
#line 145 "yacc.y"
                            {print_tabs(); printf("else if (");}
#line 1796 "y.tab.c"
    break;

  case 65: /* $@33: %empty  */
#line 145 "yacc.y"
                                                                                   {printf(")");}
#line 1802 "y.tab.c"
    break;

  case 66: /* $@34: %empty  */
#line 145 "yacc.y"
                                                                                                     {printf("{\n"); tab_counter++;}
#line 1808 "y.tab.c"
    break;

  case 67: /* $@35: %empty  */
#line 145 "yacc.y"
                                                                                                                                                   {tab_counter--; print_tabs(); printf("}\n"); }
#line 1814 "y.tab.c"
    break;

  case 69: /* $@36: %empty  */
#line 146 "yacc.y"
                                           {print_tabs();tab_counter++;printf("else {\n"); }
#line 1820 "y.tab.c"
    break;

  case 70: /* ELSEIF_OR_ELSE: ELSE LC $@36 STATEMENTS RC  */
#line 146 "yacc.y"
                                                                                                           {tab_counter--; print_tabs(); printf("}\n"); }
#line 1826 "y.tab.c"
    break;

  case 71: /* ELSEIF_OR_ELSE: %empty  */
#line 147 "yacc.y"
                                                                                                             {printf("\n");}
#line 1832 "y.tab.c"
    break;

  case 72: /* $@37: %empty  */
#line 155 "yacc.y"
                         {printf("for(");}
#line 1838 "y.tab.c"
    break;

  case 73: /* $@38: %empty  */
#line 155 "yacc.y"
                                                                      {printf("){\n"); tab_counter++;}
#line 1844 "y.tab.c"
    break;

  case 74: /* FOR_BLOCK: FOR LP $@37 FOR_BLOCK_PARAMETERS RP LC $@38 STATEMENTS RC  */
#line 155 "yacc.y"
                                                                                                                     {tab_counter--; print_tabs(); printf("}\n");}
#line 1850 "y.tab.c"
    break;

  case 75: /* TERMINAL: NUMBER  */
#line 158 "yacc.y"
                         { printf("%s", yylval.var_name); }
#line 1856 "y.tab.c"
    break;

  case 76: /* TERMINAL: QUOTED_STRING  */
#line 159 "yacc.y"
                                        { printf("%s", yylval.var_name); }
#line 1862 "y.tab.c"
    break;

  case 77: /* COMMENT: ILCOMMENT  */
#line 162 "yacc.y"
                            { printf("%s\n", yylval.var_name); }
#line 1868 "y.tab.c"
    break;

  case 78: /* COMMENT: MLCOMMENT  */
#line 163 "yacc.y"
                            { printf("%s", yylval.var_name); }
#line 1874 "y.tab.c"
    break;

  case 79: /* TYPE: INT  */
#line 166 "yacc.y"
                                { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type);  }
#line 1880 "y.tab.c"
    break;

  case 80: /* TYPE: CHAR  */
#line 167 "yacc.y"
                                        { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type); 	}
#line 1886 "y.tab.c"
    break;

  case 81: /* TYPE: FLOAT  */
#line 168 "yacc.y"
                                        { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type); 	}
#line 1892 "y.tab.c"
    break;

  case 82: /* TYPE: DOUBLE  */
#line 169 "yacc.y"
                                        { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type); 	}
#line 1898 "y.tab.c"
    break;

  case 83: /* TYPE: VOID  */
#line 170 "yacc.y"
                                        { }
#line 1904 "y.tab.c"
    break;

  case 84: /* $@39: %empty  */
#line 177 "yacc.y"
                             {printf("== ");}
#line 1910 "y.tab.c"
    break;

  case 86: /* $@40: %empty  */
#line 178 "yacc.y"
                                         {printf("!= ");}
#line 1916 "y.tab.c"
    break;

  case 88: /* $@41: %empty  */
#line 179 "yacc.y"
                                        {printf("> ");}
#line 1922 "y.tab.c"
    break;

  case 90: /* $@42: %empty  */
#line 180 "yacc.y"
                                        {printf("< ");}
#line 1928 "y.tab.c"
    break;

  case 92: /* $@43: %empty  */
#line 181 "yacc.y"
                                         {printf("<= ");}
#line 1934 "y.tab.c"
    break;

  case 94: /* $@44: %empty  */
#line 182 "yacc.y"
                                         {printf(">= ");}
#line 1940 "y.tab.c"
    break;

  case 96: /* $@45: %empty  */
#line 184 "yacc.y"
                                          {printf("&& ");}
#line 1946 "y.tab.c"
    break;

  case 98: /* $@46: %empty  */
#line 185 "yacc.y"
                                         {printf("|| ");}
#line 1952 "y.tab.c"
    break;

  case 100: /* $@47: %empty  */
#line 186 "yacc.y"
                               {printf("!");}
#line 1958 "y.tab.c"
    break;

  case 102: /* $@48: %empty  */
#line 188 "yacc.y"
                                          {printf("+ ");}
#line 1964 "y.tab.c"
    break;

  case 104: /* $@49: %empty  */
#line 189 "yacc.y"
                                           {printf("- ");}
#line 1970 "y.tab.c"
    break;

  case 106: /* $@50: %empty  */
#line 190 "yacc.y"
                                         {printf("* ");}
#line 1976 "y.tab.c"
    break;

  case 108: /* $@51: %empty  */
#line 191 "yacc.y"
                                         {printf("/ ");}
#line 1982 "y.tab.c"
    break;

  case 110: /* $@52: %empty  */
#line 192 "yacc.y"
                                         {printf("%% ");}
#line 1988 "y.tab.c"
    break;

  case 112: /* EXPRESSION: EXPRESSION PLUS PLUS  */
#line 193 "yacc.y"
                                               {printf("++");}
#line 1994 "y.tab.c"
    break;

  case 113: /* $@53: %empty  */
#line 194 "yacc.y"
                                    {printf("++");}
#line 2000 "y.tab.c"
    break;

  case 115: /* EXPRESSION: EXPRESSION MINUS MINUS  */
#line 195 "yacc.y"
                                                 {printf("--");}
#line 2006 "y.tab.c"
    break;

  case 116: /* $@54: %empty  */
#line 196 "yacc.y"
                                      {printf("--");}
#line 2012 "y.tab.c"
    break;

  case 118: /* $@55: %empty  */
#line 198 "yacc.y"
                             {printf("(");}
#line 2018 "y.tab.c"
    break;

  case 119: /* EXPRESSION: LP $@55 EXPRESSION RP  */
#line 198 "yacc.y"
                                                          {printf(") ");}
#line 2024 "y.tab.c"
    break;

  case 120: /* EXPRESSION: VAR  */
#line 200 "yacc.y"
                              {printf("%s", yylval.var_name);}
#line 2030 "y.tab.c"
    break;

  case 122: /* SEMICOLON_NT: SEMICOLON  */
#line 210 "yacc.y"
                        { printf(";");}
#line 2036 "y.tab.c"
    break;

  case 123: /* SEMICOLON_NT: %empty  */
#line 211 "yacc.y"
                                      {yyerror("syntax error : missing ';'\n");}
#line 2042 "y.tab.c"
    break;

  case 124: /* SEMICOLON_OR_ERROR: SEMICOLON  */
#line 214 "yacc.y"
                              { printf(";");}
#line 2048 "y.tab.c"
    break;

  case 125: /* SEMICOLON_OR_ERROR: COMA  */
#line 215 "yacc.y"
                                         { printf(","); printf("\nSYNTAX_ERROR: You put a ',', must be a ';'!\n");}
#line 2054 "y.tab.c"
    break;

  case 126: /* SEMICOLON_OR_ERROR: COLON  */
#line 216 "yacc.y"
                                          { printf(":"); printf("\nSYNTAX_ERROR: You put a ':', must be a ';'!\n");}
#line 2060 "y.tab.c"
    break;

  case 128: /* $@56: %empty  */
#line 220 "yacc.y"
                                          { printf("%s ", yylval.var_name); printf("= ");}
#line 2066 "y.tab.c"
    break;

  case 130: /* $@57: %empty  */
#line 221 "yacc.y"
                                                 {printf("= ");}
#line 2072 "y.tab.c"
    break;

  case 131: /* EXPRESSION_NT: EXPRESSION ASSIGNMENT $@57 EXPRESSION  */
#line 221 "yacc.y"
                                                                            {yyerror("Maybe you mean '==' operator?");}
#line 2078 "y.tab.c"
    break;

  case 132: /* EXPRESSION_NT: %empty  */
#line 222 "yacc.y"
                                         {yyerror("expected expression before ')' token");}
#line 2084 "y.tab.c"
    break;


#line 2088 "y.tab.c"

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
      yyerror (YY_("syntax error"));
    }

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
                      yytoken, &yylval);
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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 228 "yacc.y"


#include "lex.yy.c"
int lookup_in_table(char var[MAX_NAME_LEN])
{
	for(int i=0; i<table_idx; i++)
	{
		if(strcmp(sym[i].var_name, var)==0)
			return sym[i].type;
	}
	return -1;
}

void insert_to_table(char var[MAX_NAME_LEN], int type)
{
	if(lookup_in_table(var)==-1)
	{
		strcpy(sym[table_idx].var_name,var);
		sym[table_idx].type = type;
		table_idx++;
	}
	else {
		printf("Multiple declaration of variable\n");
		yyerror("");
		exit(0);
	}
}
void print_tabs() {
	for(int i = 0; i < tab_counter; i++){
		printf("\t");
	}
	return;
}

int main() {
	yyparse();
    
	return 0;
}

int yyerror(const char *msg) {
	extern int yylineno;
	printf("Parsing failed\nLine number: %d %s\n", yylineno, msg);
	success = 0;
	return 0;
}
