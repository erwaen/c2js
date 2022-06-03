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
  YYSYMBOL_BEFORE_MAIN = 54,               /* BEFORE_MAIN  */
  YYSYMBOL_DECLARATION = 55,               /* DECLARATION  */
  YYSYMBOL_DEFINE_DECLARATION = 56,        /* DEFINE_DECLARATION  */
  YYSYMBOL_57_2 = 57,                      /* $@2  */
  YYSYMBOL_58_3 = 58,                      /* $@3  */
  YYSYMBOL_VAR_DECLARATION = 59,           /* VAR_DECLARATION  */
  YYSYMBOL_60_4 = 60,                      /* $@4  */
  YYSYMBOL_61_5 = 61,                      /* $@5  */
  YYSYMBOL_62_6 = 62,                      /* $@6  */
  YYSYMBOL_FUNCTION_DECLARATION = 63,      /* FUNCTION_DECLARATION  */
  YYSYMBOL_64_7 = 64,                      /* $@7  */
  YYSYMBOL_65_8 = 65,                      /* $@8  */
  YYSYMBOL_66_9 = 66,                      /* $@9  */
  YYSYMBOL_67_10 = 67,                     /* $@10  */
  YYSYMBOL_PARAMETERS = 68,                /* PARAMETERS  */
  YYSYMBOL_69_11 = 69,                     /* $@11  */
  YYSYMBOL_70_12 = 70,                     /* $@12  */
  YYSYMBOL_71_13 = 71,                     /* $@13  */
  YYSYMBOL_EXPRESSION_DECLARATION_OR_NoDECL = 72, /* EXPRESSION_DECLARATION_OR_NoDECL  */
  YYSYMBOL_73_14 = 73,                     /* $@14  */
  YYSYMBOL_74_15 = 74,                     /* $@15  */
  YYSYMBOL_75_16 = 75,                     /* $@16  */
  YYSYMBOL_76_17 = 76,                     /* $@17  */
  YYSYMBOL_FOR_BLOCK_PARAMETERS = 77,      /* FOR_BLOCK_PARAMETERS  */
  YYSYMBOL_VAR_OR_FUNC_USE = 78,           /* VAR_OR_FUNC_USE  */
  YYSYMBOL_79_18 = 79,                     /* $@18  */
  YYSYMBOL_80_19 = 80,                     /* $@19  */
  YYSYMBOL_81_20 = 81,                     /* $@20  */
  YYSYMBOL_82_21 = 82,                     /* $@21  */
  YYSYMBOL_83_22 = 83,                     /* $@22  */
  YYSYMBOL_STATEMENTS = 84,                /* STATEMENTS  */
  YYSYMBOL_85_23 = 85,                     /* $@23  */
  YYSYMBOL_86_24 = 86,                     /* $@24  */
  YYSYMBOL_87_25 = 87,                     /* $@25  */
  YYSYMBOL_88_26 = 88,                     /* $@26  */
  YYSYMBOL_89_27 = 89,                     /* $@27  */
  YYSYMBOL_90_28 = 90,                     /* $@28  */
  YYSYMBOL_IF_BLOCK = 91,                  /* IF_BLOCK  */
  YYSYMBOL_92_29 = 92,                     /* $@29  */
  YYSYMBOL_93_30 = 93,                     /* $@30  */
  YYSYMBOL_94_31 = 94,                     /* $@31  */
  YYSYMBOL_ELSEIF_OR_ELSE = 95,            /* ELSEIF_OR_ELSE  */
  YYSYMBOL_96_32 = 96,                     /* $@32  */
  YYSYMBOL_97_33 = 97,                     /* $@33  */
  YYSYMBOL_98_34 = 98,                     /* $@34  */
  YYSYMBOL_99_35 = 99,                     /* $@35  */
  YYSYMBOL_100_36 = 100,                   /* $@36  */
  YYSYMBOL_FOR_BLOCK = 101,                /* FOR_BLOCK  */
  YYSYMBOL_102_37 = 102,                   /* $@37  */
  YYSYMBOL_103_38 = 103,                   /* $@38  */
  YYSYMBOL_WHILE_BLOCK = 104,              /* WHILE_BLOCK  */
  YYSYMBOL_105_39 = 105,                   /* $@39  */
  YYSYMBOL_106_40 = 106,                   /* $@40  */
  YYSYMBOL_DO_WHILE_BLOCK = 107,           /* DO_WHILE_BLOCK  */
  YYSYMBOL_108_41 = 108,                   /* $@41  */
  YYSYMBOL_109_42 = 109,                   /* $@42  */
  YYSYMBOL_110_43 = 110,                   /* $@43  */
  YYSYMBOL_TERMINAL = 111,                 /* TERMINAL  */
  YYSYMBOL_COMMENT = 112,                  /* COMMENT  */
  YYSYMBOL_TYPE = 113,                     /* TYPE  */
  YYSYMBOL_EXPRESSION = 114,               /* EXPRESSION  */
  YYSYMBOL_115_44 = 115,                   /* $@44  */
  YYSYMBOL_116_45 = 116,                   /* $@45  */
  YYSYMBOL_117_46 = 117,                   /* $@46  */
  YYSYMBOL_118_47 = 118,                   /* $@47  */
  YYSYMBOL_119_48 = 119,                   /* $@48  */
  YYSYMBOL_120_49 = 120,                   /* $@49  */
  YYSYMBOL_121_50 = 121,                   /* $@50  */
  YYSYMBOL_122_51 = 122,                   /* $@51  */
  YYSYMBOL_123_52 = 123,                   /* $@52  */
  YYSYMBOL_124_53 = 124,                   /* $@53  */
  YYSYMBOL_125_54 = 125,                   /* $@54  */
  YYSYMBOL_126_55 = 126,                   /* $@55  */
  YYSYMBOL_127_56 = 127,                   /* $@56  */
  YYSYMBOL_128_57 = 128,                   /* $@57  */
  YYSYMBOL_129_58 = 129,                   /* $@58  */
  YYSYMBOL_130_59 = 130,                   /* $@59  */
  YYSYMBOL_131_60 = 131,                   /* $@60  */
  YYSYMBOL_SEMICOLON_NT = 132,             /* SEMICOLON_NT  */
  YYSYMBOL_SEMICOLON_OR_ERROR = 133,       /* SEMICOLON_OR_ERROR  */
  YYSYMBOL_EXPRESSION_NT = 134,            /* EXPRESSION_NT  */
  YYSYMBOL_135_61 = 135,                   /* $@61  */
  YYSYMBOL_136_62 = 136,                   /* $@62  */
  YYSYMBOL_DELIMITER = 137                 /* DELIMITER  */
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
#define YYLAST   288

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  87
/* YYNRULES -- Number of rules.  */
#define YYNRULES  144
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  247

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
       0,    54,    54,    54,    55,    58,    59,    60,    61,    62,
      75,    76,    81,    81,    81,    84,    84,    85,    85,    85,
      88,    88,    88,    88,    88,    99,    99,   100,   100,   100,
     101,   104,   104,   104,   105,   105,   105,   106,   107,   108,
     111,   119,   119,   119,   120,   120,   120,   120,   121,   130,
     130,   131,   131,   132,   132,   133,   133,   134,   134,   135,
     135,   136,   137,   145,   145,   145,   145,   148,   148,   148,
     148,   148,   149,   149,   150,   158,   158,   158,   161,   161,
     161,   164,   164,   164,   164,   167,   168,   171,   172,   175,
     176,   177,   178,   179,   186,   186,   187,   187,   188,   188,
     189,   189,   190,   190,   191,   191,   193,   193,   194,   194,
     195,   195,   197,   197,   198,   198,   199,   199,   200,   200,
     201,   201,   202,   203,   203,   204,   205,   205,   207,   207,
     209,   211,   219,   220,   223,   224,   225,   228,   229,   229,
     230,   230,   231,   234,   235
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
  "INT", "CHAR", "FLOAT", "DOUBLE", "$accept", "c_file", "$@1",
  "BEFORE_MAIN", "DECLARATION", "DEFINE_DECLARATION", "$@2", "$@3",
  "VAR_DECLARATION", "$@4", "$@5", "$@6", "FUNCTION_DECLARATION", "$@7",
  "$@8", "$@9", "$@10", "PARAMETERS", "$@11", "$@12", "$@13",
  "EXPRESSION_DECLARATION_OR_NoDECL", "$@14", "$@15", "$@16", "$@17",
  "FOR_BLOCK_PARAMETERS", "VAR_OR_FUNC_USE", "$@18", "$@19", "$@20",
  "$@21", "$@22", "STATEMENTS", "$@23", "$@24", "$@25", "$@26", "$@27",
  "$@28", "IF_BLOCK", "$@29", "$@30", "$@31", "ELSEIF_OR_ELSE", "$@32",
  "$@33", "$@34", "$@35", "$@36", "FOR_BLOCK", "$@37", "$@38",
  "WHILE_BLOCK", "$@39", "$@40", "DO_WHILE_BLOCK", "$@41", "$@42", "$@43",
  "TERMINAL", "COMMENT", "TYPE", "EXPRESSION", "$@44", "$@45", "$@46",
  "$@47", "$@48", "$@49", "$@50", "$@51", "$@52", "$@53", "$@54", "$@55",
  "$@56", "$@57", "$@58", "$@59", "$@60", "SEMICOLON_NT",
  "SEMICOLON_OR_ERROR", "EXPRESSION_NT", "$@61", "$@62", "DELIMITER", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-92)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-63)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      98,    10,   -92,   -92,   121,   -92,   -92,   -92,   -92,    19,
       5,   121,   121,    26,   -92,   -92,   121,    44,   -92,   -92,
      14,   -92,   -92,    -2,   -92,   -92,   -92,   -92,   -92,    18,
      57,    37,    -7,   136,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,    10,    51,    22,    62,    74,    82,    85,     9,    -7,
     -14,   158,   -92,    69,   136,   109,    72,   136,    73,   136,
      80,   136,    79,   136,   -92,   -92,   136,    18,   -92,    81,
     120,   -92,   113,    91,   -92,   116,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,    54,   -92,   -92,
     -92,   -92,    17,    17,   136,   189,   132,   101,   -14,    17,
     -14,   124,   -92,   125,   129,   -92,   -92,   248,   114,   118,
     130,    25,    -5,   127,   146,   271,   -92,   -92,   -92,    18,
     133,   -92,    92,   -92,   -92,    92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   152,   160,   -92,   -92,   -92,   -92,
     140,   141,   151,   161,   -92,   -92,   -92,   189,   156,   -92,
     -14,   136,   -92,   -92,    92,   -92,   271,    92,    92,   235,
      92,    92,    92,    92,    92,    92,    92,    92,   -92,    92,
     -92,    92,    92,    92,    92,    92,   -92,   -92,   154,   -92,
      -5,   -92,   169,   -92,   162,    18,   271,   271,   271,   -92,
     271,   271,   271,   271,   271,   271,   271,   271,   271,   271,
     271,   271,   271,   271,   136,   136,   -92,    17,    92,   136,
     -92,   -92,   -92,   163,   164,    17,   -92,   271,   165,    17,
     -92,   -92,   157,   -92,   -92,    35,   -92,   175,   155,   -92,
      18,   -92,   -92,   -92,   136,    17,   168,   171,   -92,   -92,
     177,   -92,   136,   178,   -92,    35,   -92
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    93,    12,     0,    89,    90,    91,    92,     0,
       0,     0,     0,     0,   144,   143,     0,     0,     5,     1,
       0,     7,     6,    15,    11,    10,     8,    13,     2,   133,
       0,     0,     0,     0,   132,    16,    18,    21,    85,    86,
      14,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      30,     0,     3,    41,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    87,    88,     0,   133,    27,     0,
       0,    61,     0,     0,    50,    15,    48,    63,    52,    78,
      54,    81,    56,    75,    58,    60,    19,     0,    22,    25,
      42,    45,   142,   142,     0,    39,     0,     0,    30,   142,
      30,   130,   110,     0,     0,   128,   131,   137,     0,     0,
       0,   130,     0,     0,     0,    38,    28,    23,    26,   133,
       0,   138,     0,   123,   126,     0,   108,   106,   102,   104,
     100,    98,    96,    94,   112,   114,   116,   118,   120,   140,
       0,     0,     0,     0,   135,   134,   136,    39,     0,    31,
      30,     0,    43,    46,     0,   130,   111,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122,     0,
     125,     0,     0,     0,     0,     0,    64,    79,     0,    35,
       0,    76,     0,    29,     0,   133,   139,   124,   127,   129,
     109,   107,   103,   105,   101,    99,    97,    95,   113,   115,
     117,   119,   121,   141,     0,     0,    82,   142,     0,     0,
      32,    24,    47,     0,     0,   142,    36,    40,     0,   142,
      65,    80,     0,    77,    33,    74,    83,     0,     0,    66,
     133,    72,    67,    84,     0,   142,     0,     0,    73,    68,
       0,    69,     0,     0,    70,    74,    71
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -92,   -92,   -92,     6,   -92,   -92,   -92,   -92,   166,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -85,   -92,   -92,
     -92,    66,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -54,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -30,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
      -4,   -92,   -39,   -81,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -66,    36,   -91,   -92,   -92,   176
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     9,    33,    10,    11,    12,    17,    32,    24,    29,
      30,    49,    25,    31,    50,    97,   151,    69,    98,    87,
     150,   112,   182,   219,   143,   207,   113,    54,    72,    99,
      73,   100,   185,    42,    43,    44,    45,    46,    47,    48,
      57,    92,   204,   225,   229,   235,   240,   242,   245,   234,
      63,    95,   209,    59,    93,   205,    61,    94,   215,   230,
     106,    66,    13,   107,   167,   166,   165,   164,   162,   163,
     161,   160,   122,   169,   171,   172,   173,   174,   157,   158,
     125,    35,   147,   108,   154,   175,    16
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      74,    86,   109,    78,    55,    80,     2,    82,   119,    84,
      18,    70,    85,   118,   115,   120,   -17,    21,    22,    19,
     101,   102,    26,    68,    20,    53,    38,    39,    40,    23,
     103,   104,   144,     5,     6,     7,     8,   145,   146,   -20,
     110,   156,     2,   -34,   159,    67,    14,    27,    96,    28,
      38,    39,    15,   152,    64,    65,   114,    71,   105,    70,
      34,    70,   -37,   227,   228,   183,   115,   -37,   -37,     5,
       6,     7,     8,   186,     2,    36,   187,   188,    37,   190,
     191,   192,   193,   194,   195,   196,   197,    52,   198,    56,
     199,   200,   201,   202,   203,   155,   102,   184,    -4,     1,
      58,     5,     6,     7,     8,   103,   104,    60,   114,    62,
     -44,    70,    75,    77,    79,    81,   216,    -9,     2,   212,
      83,    88,     1,    89,   222,    38,    39,   217,   224,     3,
       4,    90,    91,   105,   -17,   116,   117,    41,   123,   -49,
      -9,     2,   121,   124,   237,     5,     6,     7,     8,   149,
     213,   214,     3,     4,   140,   218,   -49,    -9,   141,     1,
     -57,   -55,   -53,   -51,   233,   168,   142,   148,     5,     6,
       7,     8,   -62,   153,   170,   176,   177,   178,     2,   179,
     236,   -59,   -59,   -49,   -49,   -49,   -49,   210,   243,     3,
       4,   181,   111,   102,    -9,   206,   232,   226,   211,   220,
     221,   223,   103,   104,   238,     5,     6,     7,     8,     2,
     231,   239,   241,   180,   244,   246,   208,    51,     0,     0,
       0,    76,    38,    39,     0,     0,     0,     0,     0,     0,
     105,     0,     0,     0,     0,     0,     5,     6,     7,     8,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,     0,     0,     0,
       0,     0,     0,     0,     0,   189,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138
};

static const yytype_int16 yycheck[] =
{
      54,    67,    93,    57,    43,    59,    20,    61,    99,    63,
       4,    50,    66,    98,    95,   100,    18,    11,    12,     0,
       3,     4,    16,    37,    19,     3,    33,    34,    32,     3,
      13,    14,    37,    47,    48,    49,    50,    42,    43,    41,
      94,   122,    20,    18,   125,    49,    36,     3,    87,    35,
      33,    34,    42,   119,    45,    46,    95,    51,    41,    98,
      42,   100,    37,    28,    29,   150,   147,    42,    43,    47,
      48,    49,    50,   154,    20,    18,   157,   158,    41,   160,
     161,   162,   163,   164,   165,   166,   167,    36,   169,    27,
     171,   172,   173,   174,   175,     3,     4,   151,     0,     1,
      26,    47,    48,    49,    50,    13,    14,    25,   147,    24,
      41,   150,     3,    41,    41,    35,   207,    19,    20,   185,
      41,    40,     1,     3,   215,    33,    34,   208,   219,    31,
      32,    18,    41,    41,    18,     3,    35,     1,    13,     3,
      19,    20,    18,    14,   235,    47,    48,    49,    50,     3,
     204,   205,    31,    32,    40,   209,    20,    36,    40,     1,
      24,    25,    26,    27,   230,    13,    36,    40,    47,    48,
      49,    50,    36,    40,    14,    35,    35,    26,    20,    18,
     234,    45,    46,    47,    48,    49,    50,    18,   242,    31,
      32,    35,     3,     4,    36,    41,    41,    40,    36,    36,
      36,    36,    13,    14,    36,    47,    48,    49,    50,    20,
      35,    40,    35,   147,    36,   245,   180,    41,    -1,    -1,
      -1,    55,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
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
      54,    55,    56,   113,    36,    42,   137,    57,    54,     0,
      19,    54,    54,     3,    59,    63,    54,     3,    35,    60,
      61,    64,    58,    53,    42,   132,    18,    41,    33,    34,
     111,     1,    84,    85,    86,    87,    88,    89,    90,    62,
      65,   137,    36,     3,    78,   113,    27,    91,    26,   104,
      25,   107,    24,   101,    45,    46,   112,   111,    37,    68,
     113,    54,    79,    81,    84,     3,    59,    41,    84,    41,
      84,    35,    84,    41,    84,    84,   132,    70,    40,     3,
      18,    41,    92,   105,   108,   102,   113,    66,    69,    80,
      82,     3,     4,    13,    14,    41,   111,   114,   134,   134,
      84,     3,    72,    77,   113,   114,     3,    35,    68,   134,
      68,    18,   123,    13,    14,   131,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      40,    40,    36,    75,    37,    42,    43,   133,    40,     3,
      71,    67,   132,    40,   135,     3,   114,   129,   130,   114,
     122,   121,   119,   120,   118,   117,   116,   115,    13,   124,
      14,   125,   126,   127,   128,   136,    35,    35,    26,    18,
      72,    35,    73,    68,    84,    83,   114,   114,   114,    40,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,    93,   106,    41,    76,   133,   103,
      18,    36,   132,    84,    84,   109,   134,   114,    84,    74,
      36,    36,   134,    36,   134,    94,    40,    28,    29,    95,
     110,    35,    41,   132,   100,    96,    84,   134,    36,    40,
      97,    35,    98,    84,    36,    99,    95
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    53,    52,    52,    54,    54,    54,    54,    54,
      55,    55,    57,    58,    56,    60,    59,    61,    62,    59,
      64,    65,    66,    67,    63,    69,    68,    70,    71,    68,
      68,    73,    74,    72,    75,    76,    72,    72,    72,    72,
      77,    79,    80,    78,    81,    82,    83,    78,    78,    85,
      84,    86,    84,    87,    84,    88,    84,    89,    84,    90,
      84,    84,    84,    92,    93,    94,    91,    96,    97,    98,
      99,    95,   100,    95,    95,   102,   103,   101,   105,   106,
     104,   108,   109,   110,   107,   111,   111,   112,   112,   113,
     113,   113,   113,   113,   115,   114,   116,   114,   117,   114,
     118,   114,   119,   114,   120,   114,   121,   114,   122,   114,
     123,   114,   124,   114,   125,   114,   126,   114,   127,   114,
     128,   114,   114,   129,   114,   114,   130,   114,   131,   114,
     114,   114,   132,   132,   133,   133,   133,   134,   135,   134,
     136,   134,   134,   137,   137
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     6,     0,     2,     2,     2,     3,     0,
       2,     2,     0,     0,     5,     0,     3,     0,     0,     6,
       0,     0,     0,     0,    11,     0,     4,     0,     0,     6,
       0,     0,     0,     6,     0,     0,     5,     1,     1,     0,
       5,     0,     0,     6,     0,     0,     0,     8,     2,     0,
       3,     0,     3,     0,     3,     0,     3,     0,     3,     0,
       3,     3,     0,     0,     0,     0,    11,     0,     0,     0,
       0,    12,     0,     5,     0,     0,     0,     9,     0,     0,
       9,     0,     0,     0,    12,     1,     1,     1,     1,     1,
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
#line 1562 "y.tab.c"
    break;

  case 3: /* c_file: BEFORE_MAIN MAIN LC $@1 STATEMENTS RC  */
#line 54 "yacc.y"
                                                                                              { printf("}");printf("\n/*end of main function*/\n"); }
#line 1568 "y.tab.c"
    break;

  case 4: /* c_file: %empty  */
#line 55 "yacc.y"
                          {printf("\n"); exit(2);}
#line 1574 "y.tab.c"
    break;

  case 9: /* BEFORE_MAIN: %empty  */
#line 62 "yacc.y"
                                              {}
#line 1580 "y.tab.c"
    break;

  case 12: /* $@2: %empty  */
#line 81 "yacc.y"
                            {printf("const ");}
#line 1586 "y.tab.c"
    break;

  case 13: /* $@3: %empty  */
#line 81 "yacc.y"
                                                    {printf("%s = ", yylval.var_name);}
#line 1592 "y.tab.c"
    break;

  case 14: /* DEFINE_DECLARATION: DEFINE $@2 VAR $@3 TERMINAL  */
#line 81 "yacc.y"
                                                                                                 {printf(";\n");}
#line 1598 "y.tab.c"
    break;

  case 15: /* $@4: %empty  */
#line 84 "yacc.y"
                      { printf("let %s", yylval.var_name);}
#line 1604 "y.tab.c"
    break;

  case 16: /* VAR_DECLARATION: VAR $@4 SEMICOLON_NT  */
#line 84 "yacc.y"
                                                                         {printf("\n");}
#line 1610 "y.tab.c"
    break;

  case 17: /* $@5: %empty  */
#line 85 "yacc.y"
                                      { printf("let %s", yylval.var_name);}
#line 1616 "y.tab.c"
    break;

  case 18: /* $@6: %empty  */
#line 85 "yacc.y"
                                                                                       {printf(" = ");}
#line 1622 "y.tab.c"
    break;

  case 19: /* VAR_DECLARATION: VAR $@5 ASSIGNMENT $@6 TERMINAL SEMICOLON_NT  */
#line 85 "yacc.y"
                                                                                                                              {printf("\n");}
#line 1628 "y.tab.c"
    break;

  case 20: /* $@7: %empty  */
#line 88 "yacc.y"
                               { printf("function %s", yylval.var_name);}
#line 1634 "y.tab.c"
    break;

  case 21: /* $@8: %empty  */
#line 88 "yacc.y"
                                                                             {printf("(");}
#line 1640 "y.tab.c"
    break;

  case 22: /* $@9: %empty  */
#line 88 "yacc.y"
                                                                                                          {printf(") ");}
#line 1646 "y.tab.c"
    break;

  case 23: /* $@10: %empty  */
#line 88 "yacc.y"
                                                                                                                             {printf(" {\n"); tab_counter++;}
#line 1652 "y.tab.c"
    break;

  case 24: /* FUNCTION_DECLARATION: VAR $@7 LP $@8 PARAMETERS RP $@9 LC $@10 STATEMENTS RC  */
#line 88 "yacc.y"
                                                                                                                                                                            {tab_counter--;print_tabs(); printf("}\n");}
#line 1658 "y.tab.c"
    break;

  case 25: /* $@11: %empty  */
#line 99 "yacc.y"
                           {printf("%s", yylval.var_name);}
#line 1664 "y.tab.c"
    break;

  case 27: /* $@12: %empty  */
#line 100 "yacc.y"
                               {printf(", ");}
#line 1670 "y.tab.c"
    break;

  case 28: /* $@13: %empty  */
#line 100 "yacc.y"
                                                        {printf("%s", yylval.var_name);}
#line 1676 "y.tab.c"
    break;

  case 31: /* $@14: %empty  */
#line 104 "yacc.y"
                                           {printf("let %s", yylval.var_name);}
#line 1682 "y.tab.c"
    break;

  case 32: /* $@15: %empty  */
#line 104 "yacc.y"
                                                                                           {printf(" = ");}
#line 1688 "y.tab.c"
    break;

  case 34: /* $@16: %empty  */
#line 105 "yacc.y"
                                                                      {printf("%s", yylval.var_name);}
#line 1694 "y.tab.c"
    break;

  case 35: /* $@17: %empty  */
#line 105 "yacc.y"
                                                                                                                  {printf(" = ");}
#line 1700 "y.tab.c"
    break;

  case 37: /* EXPRESSION_DECLARATION_OR_NoDECL: VAR  */
#line 106 "yacc.y"
                                                                      { printf("%s", yylval.var_name);}
#line 1706 "y.tab.c"
    break;

  case 41: /* $@18: %empty  */
#line 119 "yacc.y"
                      { printf("%s",yylval.var_name);}
#line 1712 "y.tab.c"
    break;

  case 42: /* $@19: %empty  */
#line 119 "yacc.y"
                                                                  {printf(" = ");}
#line 1718 "y.tab.c"
    break;

  case 43: /* VAR_OR_FUNC_USE: VAR $@18 ASSIGNMENT $@19 EXPRESSION_NT SEMICOLON_NT  */
#line 119 "yacc.y"
                                                                                                               { printf("\n");}
#line 1724 "y.tab.c"
    break;

  case 44: /* $@20: %empty  */
#line 120 "yacc.y"
                                                             {printf("%s",yylval.var_name);}
#line 1730 "y.tab.c"
    break;

  case 45: /* $@21: %empty  */
#line 120 "yacc.y"
                                                                                                 { printf("("); }
#line 1736 "y.tab.c"
    break;

  case 46: /* $@22: %empty  */
#line 120 "yacc.y"
                                                                                                                                { printf(")"); }
#line 1742 "y.tab.c"
    break;

  case 47: /* VAR_OR_FUNC_USE: VAR $@20 LP $@21 PARAMETERS RP $@22 SEMICOLON_NT  */
#line 120 "yacc.y"
                                                                                                                                                              { printf("\n");}
#line 1748 "y.tab.c"
    break;

  case 49: /* $@23: %empty  */
#line 130 "yacc.y"
              {print_tabs();}
#line 1754 "y.tab.c"
    break;

  case 50: /* STATEMENTS: $@23 VAR_OR_FUNC_USE STATEMENTS  */
#line 130 "yacc.y"
                                                        {}
#line 1760 "y.tab.c"
    break;

  case 51: /* $@24: %empty  */
#line 131 "yacc.y"
                          {print_tabs();}
#line 1766 "y.tab.c"
    break;

  case 52: /* STATEMENTS: $@24 IF_BLOCK STATEMENTS  */
#line 131 "yacc.y"
                                                             {}
#line 1772 "y.tab.c"
    break;

  case 53: /* $@25: %empty  */
#line 132 "yacc.y"
                          {print_tabs();}
#line 1778 "y.tab.c"
    break;

  case 54: /* STATEMENTS: $@25 WHILE_BLOCK STATEMENTS  */
#line 132 "yacc.y"
                                                                 {}
#line 1784 "y.tab.c"
    break;

  case 55: /* $@26: %empty  */
#line 133 "yacc.y"
                          {print_tabs();}
#line 1790 "y.tab.c"
    break;

  case 56: /* STATEMENTS: $@26 DO_WHILE_BLOCK STATEMENTS  */
#line 133 "yacc.y"
                                                                    {}
#line 1796 "y.tab.c"
    break;

  case 57: /* $@27: %empty  */
#line 134 "yacc.y"
                          {print_tabs();}
#line 1802 "y.tab.c"
    break;

  case 58: /* STATEMENTS: $@27 FOR_BLOCK STATEMENTS  */
#line 134 "yacc.y"
                                                              {}
#line 1808 "y.tab.c"
    break;

  case 59: /* $@28: %empty  */
#line 135 "yacc.y"
              {print_tabs();}
#line 1814 "y.tab.c"
    break;

  case 60: /* STATEMENTS: $@28 COMMENT STATEMENTS  */
#line 135 "yacc.y"
                                                {}
#line 1820 "y.tab.c"
    break;

  case 62: /* STATEMENTS: %empty  */
#line 137 "yacc.y"
                    { }
#line 1826 "y.tab.c"
    break;

  case 63: /* $@29: %empty  */
#line 145 "yacc.y"
                    {printf("if (");}
#line 1832 "y.tab.c"
    break;

  case 64: /* $@30: %empty  */
#line 145 "yacc.y"
                                                          {  printf(") {\n"); tab_counter++;}
#line 1838 "y.tab.c"
    break;

  case 65: /* $@31: %empty  */
#line 145 "yacc.y"
                                                                                                            {tab_counter--; print_tabs(); printf("}\n");}
#line 1844 "y.tab.c"
    break;

  case 67: /* $@32: %empty  */
#line 148 "yacc.y"
                            {print_tabs(); printf("else if (");}
#line 1850 "y.tab.c"
    break;

  case 68: /* $@33: %empty  */
#line 148 "yacc.y"
                                                                                   {printf(")");}
#line 1856 "y.tab.c"
    break;

  case 69: /* $@34: %empty  */
#line 148 "yacc.y"
                                                                                                     {printf("{\n"); tab_counter++;}
#line 1862 "y.tab.c"
    break;

  case 70: /* $@35: %empty  */
#line 148 "yacc.y"
                                                                                                                                                   {tab_counter--; print_tabs(); printf("}\n"); }
#line 1868 "y.tab.c"
    break;

  case 72: /* $@36: %empty  */
#line 149 "yacc.y"
                                           {print_tabs();tab_counter++;printf("else {\n"); }
#line 1874 "y.tab.c"
    break;

  case 73: /* ELSEIF_OR_ELSE: ELSE LC $@36 STATEMENTS RC  */
#line 149 "yacc.y"
                                                                                                           {tab_counter--; print_tabs(); printf("}\n"); }
#line 1880 "y.tab.c"
    break;

  case 74: /* ELSEIF_OR_ELSE: %empty  */
#line 150 "yacc.y"
                                                                                                             {printf("\n");}
#line 1886 "y.tab.c"
    break;

  case 75: /* $@37: %empty  */
#line 158 "yacc.y"
                         {printf("for(");}
#line 1892 "y.tab.c"
    break;

  case 76: /* $@38: %empty  */
#line 158 "yacc.y"
                                                                      {printf("){\n"); tab_counter++;}
#line 1898 "y.tab.c"
    break;

  case 77: /* FOR_BLOCK: FOR LP $@37 FOR_BLOCK_PARAMETERS RP LC $@38 STATEMENTS RC  */
#line 158 "yacc.y"
                                                                                                                     {tab_counter--; print_tabs(); printf("}\n");}
#line 1904 "y.tab.c"
    break;

  case 78: /* $@39: %empty  */
#line 161 "yacc.y"
                       {printf("while(");}
#line 1910 "y.tab.c"
    break;

  case 79: /* $@40: %empty  */
#line 161 "yacc.y"
                                                               {printf("){\n"); tab_counter++;}
#line 1916 "y.tab.c"
    break;

  case 80: /* WHILE_BLOCK: WHILE LP $@39 EXPRESSION_NT RP LC $@40 STATEMENTS RC  */
#line 161 "yacc.y"
                                                                                                              {tab_counter--; print_tabs(); printf("}\n"); }
#line 1922 "y.tab.c"
    break;

  case 81: /* $@41: %empty  */
#line 164 "yacc.y"
                        {printf("do{\n"); tab_counter++;}
#line 1928 "y.tab.c"
    break;

  case 82: /* $@42: %empty  */
#line 164 "yacc.y"
                                                                                 {tab_counter--;print_tabs(); printf("}while(");}
#line 1934 "y.tab.c"
    break;

  case 83: /* $@43: %empty  */
#line 164 "yacc.y"
                                                                                                                                                   {printf(")");}
#line 1940 "y.tab.c"
    break;

  case 84: /* DO_WHILE_BLOCK: DO LC $@41 STATEMENTS RC WHILE LP $@42 EXPRESSION_NT RP $@43 SEMICOLON_NT  */
#line 164 "yacc.y"
                                                                                                                                                                               {printf("\n");}
#line 1946 "y.tab.c"
    break;

  case 85: /* TERMINAL: NUMBER  */
#line 167 "yacc.y"
                         { printf("%s", yylval.var_name); }
#line 1952 "y.tab.c"
    break;

  case 86: /* TERMINAL: QUOTED_STRING  */
#line 168 "yacc.y"
                                        { printf("%s", yylval.var_name); }
#line 1958 "y.tab.c"
    break;

  case 87: /* COMMENT: ILCOMMENT  */
#line 171 "yacc.y"
                            { printf("%s\n", yylval.var_name); }
#line 1964 "y.tab.c"
    break;

  case 88: /* COMMENT: MLCOMMENT  */
#line 172 "yacc.y"
                            { printf("%s", yylval.var_name); }
#line 1970 "y.tab.c"
    break;

  case 89: /* TYPE: INT  */
#line 175 "yacc.y"
                                { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type);  }
#line 1976 "y.tab.c"
    break;

  case 90: /* TYPE: CHAR  */
#line 176 "yacc.y"
                                        { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type); 	}
#line 1982 "y.tab.c"
    break;

  case 91: /* TYPE: FLOAT  */
#line 177 "yacc.y"
                                        { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type); 	}
#line 1988 "y.tab.c"
    break;

  case 92: /* TYPE: DOUBLE  */
#line 178 "yacc.y"
                                        { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type); 	}
#line 1994 "y.tab.c"
    break;

  case 93: /* TYPE: VOID  */
#line 179 "yacc.y"
                                        { }
#line 2000 "y.tab.c"
    break;

  case 94: /* $@44: %empty  */
#line 186 "yacc.y"
                             {printf("== ");}
#line 2006 "y.tab.c"
    break;

  case 96: /* $@45: %empty  */
#line 187 "yacc.y"
                                         {printf("!= ");}
#line 2012 "y.tab.c"
    break;

  case 98: /* $@46: %empty  */
#line 188 "yacc.y"
                                        {printf("> ");}
#line 2018 "y.tab.c"
    break;

  case 100: /* $@47: %empty  */
#line 189 "yacc.y"
                                        {printf("< ");}
#line 2024 "y.tab.c"
    break;

  case 102: /* $@48: %empty  */
#line 190 "yacc.y"
                                         {printf("<= ");}
#line 2030 "y.tab.c"
    break;

  case 104: /* $@49: %empty  */
#line 191 "yacc.y"
                                         {printf(">= ");}
#line 2036 "y.tab.c"
    break;

  case 106: /* $@50: %empty  */
#line 193 "yacc.y"
                                          {printf("&& ");}
#line 2042 "y.tab.c"
    break;

  case 108: /* $@51: %empty  */
#line 194 "yacc.y"
                                         {printf("|| ");}
#line 2048 "y.tab.c"
    break;

  case 110: /* $@52: %empty  */
#line 195 "yacc.y"
                               {printf("!");}
#line 2054 "y.tab.c"
    break;

  case 112: /* $@53: %empty  */
#line 197 "yacc.y"
                                          {printf("+ ");}
#line 2060 "y.tab.c"
    break;

  case 114: /* $@54: %empty  */
#line 198 "yacc.y"
                                           {printf("- ");}
#line 2066 "y.tab.c"
    break;

  case 116: /* $@55: %empty  */
#line 199 "yacc.y"
                                         {printf("* ");}
#line 2072 "y.tab.c"
    break;

  case 118: /* $@56: %empty  */
#line 200 "yacc.y"
                                         {printf("/ ");}
#line 2078 "y.tab.c"
    break;

  case 120: /* $@57: %empty  */
#line 201 "yacc.y"
                                         {printf("%% ");}
#line 2084 "y.tab.c"
    break;

  case 122: /* EXPRESSION: EXPRESSION PLUS PLUS  */
#line 202 "yacc.y"
                                               {printf("++");}
#line 2090 "y.tab.c"
    break;

  case 123: /* $@58: %empty  */
#line 203 "yacc.y"
                                    {printf("++");}
#line 2096 "y.tab.c"
    break;

  case 125: /* EXPRESSION: EXPRESSION MINUS MINUS  */
#line 204 "yacc.y"
                                                 {printf("--");}
#line 2102 "y.tab.c"
    break;

  case 126: /* $@59: %empty  */
#line 205 "yacc.y"
                                      {printf("--");}
#line 2108 "y.tab.c"
    break;

  case 128: /* $@60: %empty  */
#line 207 "yacc.y"
                             {printf("(");}
#line 2114 "y.tab.c"
    break;

  case 129: /* EXPRESSION: LP $@60 EXPRESSION RP  */
#line 207 "yacc.y"
                                                          {printf(") ");}
#line 2120 "y.tab.c"
    break;

  case 130: /* EXPRESSION: VAR  */
#line 209 "yacc.y"
                              {printf("%s", yylval.var_name);}
#line 2126 "y.tab.c"
    break;

  case 132: /* SEMICOLON_NT: SEMICOLON  */
#line 219 "yacc.y"
                        { printf(";");}
#line 2132 "y.tab.c"
    break;

  case 133: /* SEMICOLON_NT: %empty  */
#line 220 "yacc.y"
                                      {yyerror("syntax error : missing ';'\n");}
#line 2138 "y.tab.c"
    break;

  case 134: /* SEMICOLON_OR_ERROR: SEMICOLON  */
#line 223 "yacc.y"
                              { printf(";");}
#line 2144 "y.tab.c"
    break;

  case 135: /* SEMICOLON_OR_ERROR: COMA  */
#line 224 "yacc.y"
                                         { printf(","); printf("\nSYNTAX_ERROR: You put a ',', must be a ';'!\n");}
#line 2150 "y.tab.c"
    break;

  case 136: /* SEMICOLON_OR_ERROR: COLON  */
#line 225 "yacc.y"
                                          { printf(":"); printf("\nSYNTAX_ERROR: You put a ':', must be a ';'!\n");}
#line 2156 "y.tab.c"
    break;

  case 138: /* $@61: %empty  */
#line 229 "yacc.y"
                                          { printf("%s ", yylval.var_name); printf("= ");}
#line 2162 "y.tab.c"
    break;

  case 140: /* $@62: %empty  */
#line 230 "yacc.y"
                                                 {printf("= ");}
#line 2168 "y.tab.c"
    break;

  case 141: /* EXPRESSION_NT: EXPRESSION ASSIGNMENT $@62 EXPRESSION  */
#line 230 "yacc.y"
                                                                            {yyerror("Maybe you mean '==' operator?");}
#line 2174 "y.tab.c"
    break;

  case 142: /* EXPRESSION_NT: %empty  */
#line 231 "yacc.y"
                                         {yyerror("expected expression before the token");}
#line 2180 "y.tab.c"
    break;


#line 2184 "y.tab.c"

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

#line 237 "yacc.y"


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
