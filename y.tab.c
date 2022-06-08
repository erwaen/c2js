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
	#define VAR_NAME_LEN 32
	#define CANT_VARIABLES 50
	#define SCOPE_SIZE 50
	int yylex(void);
	int yyerror(const char *s);
	int success = 1;
	int temp;
	int idx = 0;
	int table_idx = 0;
	int tab_counter = 0;
	int current_data_type;
	char scopeStack[SCOPE_SIZE][CANT_VARIABLES];
	int var_fun_type = -1;
	int scopeStackCounter = -1;
	char for_var[VAR_NAME_LEN];
	struct symbol_table{char var_name[VAR_NAME_LEN]; int type; char scopeName[VAR_NAME_LEN] ;} sym[CANT_VARIABLES];
	extern int lookup_in_table(char var[VAR_NAME_LEN]);
	extern void insert_to_table(char var[VAR_NAME_LEN], int type);
	extern void print_tabs();
	char var_list[CANT_VARIABLES][VAR_NAME_LEN];	
	int string_or_var[CANT_VARIABLES];
	//extern int *yytext;

#line 100 "y.tab.c"

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
    NOT = 302,                     /* NOT  */
    DEQ = 303,                     /* DEQ  */
    INT = 304,                     /* INT  */
    CHAR = 305,                    /* CHAR  */
    FLOAT = 306,                   /* FLOAT  */
    DOUBLE = 307                   /* DOUBLE  */
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
#define NOT 302
#define DEQ 303
#define INT 304
#define CHAR 305
#define FLOAT 306
#define DOUBLE 307

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 30 "yacc.y"

int data_type;
char var_name[30];

#line 259 "y.tab.c"

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
  YYSYMBOL_NOT = 47,                       /* NOT  */
  YYSYMBOL_DEQ = 48,                       /* DEQ  */
  YYSYMBOL_INT = 49,                       /* INT  */
  YYSYMBOL_CHAR = 50,                      /* CHAR  */
  YYSYMBOL_FLOAT = 51,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 52,                    /* DOUBLE  */
  YYSYMBOL_YYACCEPT = 53,                  /* $accept  */
  YYSYMBOL_c_file = 54,                    /* c_file  */
  YYSYMBOL_55_1 = 55,                      /* $@1  */
  YYSYMBOL_56_2 = 56,                      /* $@2  */
  YYSYMBOL_BEFORE_MAIN = 57,               /* BEFORE_MAIN  */
  YYSYMBOL_DECLARATION = 58,               /* DECLARATION  */
  YYSYMBOL_DEFINE_DECLARATION = 59,        /* DEFINE_DECLARATION  */
  YYSYMBOL_60_3 = 60,                      /* $@3  */
  YYSYMBOL_61_4 = 61,                      /* $@4  */
  YYSYMBOL_VAR_DECLARATION = 62,           /* VAR_DECLARATION  */
  YYSYMBOL_63_5 = 63,                      /* $@5  */
  YYSYMBOL_64_6 = 64,                      /* $@6  */
  YYSYMBOL_65_7 = 65,                      /* $@7  */
  YYSYMBOL_66_8 = 66,                      /* $@8  */
  YYSYMBOL_FUNCTION_DECLARATION = 67,      /* FUNCTION_DECLARATION  */
  YYSYMBOL_68_9 = 68,                      /* $@9  */
  YYSYMBOL_69_10 = 69,                     /* $@10  */
  YYSYMBOL_70_11 = 70,                     /* $@11  */
  YYSYMBOL_71_12 = 71,                     /* $@12  */
  YYSYMBOL_ARRAY_DIMENSION = 72,           /* ARRAY_DIMENSION  */
  YYSYMBOL_ARRAY_SIZE = 73,                /* ARRAY_SIZE  */
  YYSYMBOL_ARRAY_ASSIGNMENT = 74,          /* ARRAY_ASSIGNMENT  */
  YYSYMBOL_PARAMETERS = 75,                /* PARAMETERS  */
  YYSYMBOL_76_13 = 76,                     /* $@13  */
  YYSYMBOL_77_14 = 77,                     /* $@14  */
  YYSYMBOL_78_15 = 78,                     /* $@15  */
  YYSYMBOL_EXPRESSION_DECLARATION_OR_NoDECL = 79, /* EXPRESSION_DECLARATION_OR_NoDECL  */
  YYSYMBOL_80_16 = 80,                     /* $@16  */
  YYSYMBOL_81_17 = 81,                     /* $@17  */
  YYSYMBOL_82_18 = 82,                     /* $@18  */
  YYSYMBOL_83_19 = 83,                     /* $@19  */
  YYSYMBOL_FOR_BLOCK_PARAMETERS = 84,      /* FOR_BLOCK_PARAMETERS  */
  YYSYMBOL_VAR_OR_FUNC_USE = 85,           /* VAR_OR_FUNC_USE  */
  YYSYMBOL_86_20 = 86,                     /* $@20  */
  YYSYMBOL_87_21 = 87,                     /* $@21  */
  YYSYMBOL_88_22 = 88,                     /* $@22  */
  YYSYMBOL_89_23 = 89,                     /* $@23  */
  YYSYMBOL_90_24 = 90,                     /* $@24  */
  YYSYMBOL_STATEMENTS = 91,                /* STATEMENTS  */
  YYSYMBOL_92_25 = 92,                     /* $@25  */
  YYSYMBOL_93_26 = 93,                     /* $@26  */
  YYSYMBOL_94_27 = 94,                     /* $@27  */
  YYSYMBOL_95_28 = 95,                     /* $@28  */
  YYSYMBOL_96_29 = 96,                     /* $@29  */
  YYSYMBOL_97_30 = 97,                     /* $@30  */
  YYSYMBOL_IF_BLOCK = 98,                  /* IF_BLOCK  */
  YYSYMBOL_99_31 = 99,                     /* $@31  */
  YYSYMBOL_100_32 = 100,                   /* $@32  */
  YYSYMBOL_101_33 = 101,                   /* $@33  */
  YYSYMBOL_ELSEIF_OR_ELSE = 102,           /* ELSEIF_OR_ELSE  */
  YYSYMBOL_103_34 = 103,                   /* $@34  */
  YYSYMBOL_104_35 = 104,                   /* $@35  */
  YYSYMBOL_105_36 = 105,                   /* $@36  */
  YYSYMBOL_106_37 = 106,                   /* $@37  */
  YYSYMBOL_107_38 = 107,                   /* $@38  */
  YYSYMBOL_FOR_BLOCK = 108,                /* FOR_BLOCK  */
  YYSYMBOL_109_39 = 109,                   /* $@39  */
  YYSYMBOL_110_40 = 110,                   /* $@40  */
  YYSYMBOL_WHILE_BLOCK = 111,              /* WHILE_BLOCK  */
  YYSYMBOL_112_41 = 112,                   /* $@41  */
  YYSYMBOL_113_42 = 113,                   /* $@42  */
  YYSYMBOL_DO_WHILE_BLOCK = 114,           /* DO_WHILE_BLOCK  */
  YYSYMBOL_115_43 = 115,                   /* $@43  */
  YYSYMBOL_116_44 = 116,                   /* $@44  */
  YYSYMBOL_117_45 = 117,                   /* $@45  */
  YYSYMBOL_TERMINAL = 118,                 /* TERMINAL  */
  YYSYMBOL_COMMENT = 119,                  /* COMMENT  */
  YYSYMBOL_TYPE = 120,                     /* TYPE  */
  YYSYMBOL_EXPRESSION = 121,               /* EXPRESSION  */
  YYSYMBOL_122_46 = 122,                   /* $@46  */
  YYSYMBOL_123_47 = 123,                   /* $@47  */
  YYSYMBOL_124_48 = 124,                   /* $@48  */
  YYSYMBOL_125_49 = 125,                   /* $@49  */
  YYSYMBOL_126_50 = 126,                   /* $@50  */
  YYSYMBOL_127_51 = 127,                   /* $@51  */
  YYSYMBOL_128_52 = 128,                   /* $@52  */
  YYSYMBOL_129_53 = 129,                   /* $@53  */
  YYSYMBOL_130_54 = 130,                   /* $@54  */
  YYSYMBOL_131_55 = 131,                   /* $@55  */
  YYSYMBOL_132_56 = 132,                   /* $@56  */
  YYSYMBOL_133_57 = 133,                   /* $@57  */
  YYSYMBOL_134_58 = 134,                   /* $@58  */
  YYSYMBOL_135_59 = 135,                   /* $@59  */
  YYSYMBOL_136_60 = 136,                   /* $@60  */
  YYSYMBOL_137_61 = 137,                   /* $@61  */
  YYSYMBOL_138_62 = 138,                   /* $@62  */
  YYSYMBOL_SEMICOLON_NT = 139,             /* SEMICOLON_NT  */
  YYSYMBOL_SEMICOLON_OR_ERROR = 140,       /* SEMICOLON_OR_ERROR  */
  YYSYMBOL_EXPRESSION_NT = 141,            /* EXPRESSION_NT  */
  YYSYMBOL_142_63 = 142,                   /* $@63  */
  YYSYMBOL_143_64 = 143,                   /* $@64  */
  YYSYMBOL_DELIMITER = 144                 /* DELIMITER  */
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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   292

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  92
/* YYNRULES -- Number of rules.  */
#define YYNRULES  155
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  261

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   307


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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    60,    60,    60,    60,    61,    64,    65,    66,    67,
      68,    69,    82,    83,    88,    88,    88,    91,    91,    92,
      92,    92,    93,    93,    96,    96,    96,    96,    96,    99,
     100,   103,   104,   105,   108,   109,   120,   120,   121,   121,
     121,   122,   125,   125,   125,   126,   126,   126,   127,   128,
     129,   132,   140,   140,   140,   141,   141,   141,   141,   142,
     151,   151,   152,   152,   153,   153,   154,   154,   155,   155,
     156,   156,   157,   158,   166,   166,   166,   166,   169,   169,
     169,   169,   169,   170,   170,   171,   179,   179,   179,   182,
     182,   182,   185,   185,   185,   185,   188,   189,   192,   193,
     196,   197,   198,   199,   200,   207,   207,   208,   208,   209,
     209,   210,   210,   211,   211,   212,   212,   214,   214,   215,
     215,   216,   216,   218,   218,   219,   219,   220,   220,   221,
     221,   222,   222,   223,   224,   224,   225,   226,   226,   228,
     228,   230,   232,   240,   241,   244,   245,   246,   249,   250,
     250,   251,   251,   252,   255,   256
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
  "NOT", "DEQ", "INT", "CHAR", "FLOAT", "DOUBLE", "$accept", "c_file",
  "$@1", "$@2", "BEFORE_MAIN", "DECLARATION", "DEFINE_DECLARATION", "$@3",
  "$@4", "VAR_DECLARATION", "$@5", "$@6", "$@7", "$@8",
  "FUNCTION_DECLARATION", "$@9", "$@10", "$@11", "$@12", "ARRAY_DIMENSION",
  "ARRAY_SIZE", "ARRAY_ASSIGNMENT", "PARAMETERS", "$@13", "$@14", "$@15",
  "EXPRESSION_DECLARATION_OR_NoDECL", "$@16", "$@17", "$@18", "$@19",
  "FOR_BLOCK_PARAMETERS", "VAR_OR_FUNC_USE", "$@20", "$@21", "$@22",
  "$@23", "$@24", "STATEMENTS", "$@25", "$@26", "$@27", "$@28", "$@29",
  "$@30", "IF_BLOCK", "$@31", "$@32", "$@33", "ELSEIF_OR_ELSE", "$@34",
  "$@35", "$@36", "$@37", "$@38", "FOR_BLOCK", "$@39", "$@40",
  "WHILE_BLOCK", "$@41", "$@42", "DO_WHILE_BLOCK", "$@43", "$@44", "$@45",
  "TERMINAL", "COMMENT", "TYPE", "EXPRESSION", "$@46", "$@47", "$@48",
  "$@49", "$@50", "$@51", "$@52", "$@53", "$@54", "$@55", "$@56", "$@57",
  "$@58", "$@59", "$@60", "$@61", "$@62", "SEMICOLON_NT",
  "SEMICOLON_OR_ERROR", "EXPRESSION_NT", "$@63", "$@64", "DELIMITER", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-106)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-74)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      22,    47,   145,  -106,    16,  -106,  -106,   122,  -106,  -106,
    -106,  -106,  -106,  -106,    38,   122,   122,   122,    12,  -106,
    -106,   122,    60,  -106,    31,  -106,  -106,  -106,    10,  -106,
    -106,  -106,  -106,  -106,    27,    55,    56,    62,    -4,    84,
    -106,  -106,  -106,    15,    78,  -106,  -106,  -106,  -106,    16,
      61,    50,    79,    81,    80,    88,    48,    -4,  -106,  -106,
      75,  -106,    27,   -14,   168,  -106,    74,    84,   115,    85,
      84,    86,    84,    87,    84,    90,    84,    84,    27,    56,
    -106,  -106,    92,   116,  -106,   103,    96,  -106,    -5,  -106,
    -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,
    -106,    -6,  -106,  -106,  -106,  -106,   146,   146,    84,   189,
     136,   105,   -14,   146,   -14,   125,  -106,   132,   133,  -106,
    -106,   252,   108,   117,   119,    13,   -10,   121,   159,   275,
    -106,  -106,  -106,    27,   123,  -106,   202,  -106,  -106,   202,
    -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,   153,   156,
    -106,  -106,  -106,  -106,   140,   143,   158,   164,  -106,  -106,
    -106,   189,   150,  -106,   -14,    84,  -106,  -106,   202,  -106,
     275,   202,   202,   239,   202,   202,   202,   202,   202,   202,
     202,   202,  -106,   202,  -106,   202,   202,   202,   202,   202,
    -106,  -106,   157,  -106,   -10,  -106,   183,  -106,   171,    27,
     275,   174,   174,  -106,   174,   174,   174,   174,   174,   174,
     174,   275,   174,   174,   174,   174,   174,   275,    84,    84,
    -106,   146,   202,    84,  -106,  -106,  -106,   172,   175,   146,
    -106,   275,   176,   146,  -106,  -106,   170,  -106,  -106,    32,
    -106,   186,   184,  -106,    27,  -106,  -106,  -106,    84,   146,
     188,   187,  -106,  -106,   191,  -106,    84,   192,  -106,    32,
    -106
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,   104,    14,     0,    98,    99,
     100,   101,   102,   103,     0,     0,     0,     0,     0,   155,
     154,     0,     0,     6,     0,     8,     7,     9,    17,    13,
      12,    10,    15,     3,   144,     0,     0,     0,     0,     0,
     143,    18,    20,    33,    35,    25,    96,    97,    16,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    31,
       0,    34,   144,    41,     0,     4,    52,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   144,    30,
      23,    38,     0,     0,    72,     0,     0,    61,    17,    59,
      74,    63,    89,    65,    92,    67,    86,    69,    71,    21,
      29,     0,    26,    36,    53,    56,   153,   153,     0,    50,
       0,     0,    41,   153,    41,   141,   121,     0,     0,   139,
     142,   148,     0,     0,     0,   141,     0,     0,     0,    49,
      39,    27,    37,   144,     0,   149,     0,   134,   137,     0,
     119,   117,   113,   115,   111,   109,   107,   105,   123,   125,
     127,   129,   131,   151,     0,     0,     0,     0,   146,   145,
     147,    50,     0,    42,    41,     0,    54,    57,     0,   141,
     122,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   133,     0,   136,     0,     0,     0,     0,     0,
      75,    90,     0,    46,     0,    87,     0,    40,     0,   144,
     150,   135,   138,   140,   120,   118,   114,   116,   112,   110,
     108,   106,   124,   126,   128,   130,   132,   152,     0,     0,
      93,   153,     0,     0,    43,    28,    58,     0,     0,   153,
      47,    51,     0,   153,    76,    91,     0,    88,    44,    85,
      94,     0,     0,    77,   144,    83,    78,    95,     0,   153,
       0,     0,    84,    79,     0,    80,     0,     0,    81,    85,
      82
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -106,  -106,  -106,  -106,     4,  -106,  -106,  -106,  -106,   161,
    -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,   152,
    -106,  -106,   -88,  -106,  -106,  -106,    71,  -106,  -106,  -106,
    -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,   -67,  -106,
    -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,   -26,
    -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,
    -106,  -106,  -106,  -106,  -106,     2,   178,   -47,   -97,  -106,
    -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,
    -106,  -106,  -106,  -106,  -106,  -106,   -61,    43,  -105,  -106,
    -106,   193
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,    39,    14,    15,    16,    22,    38,    29,
      34,    35,    57,    36,    30,    37,    63,   111,   165,    44,
      60,    62,    82,   112,   101,   164,   126,   196,   233,   157,
     221,   127,    67,    85,   113,    86,   114,   199,    50,    51,
      52,    53,    54,    55,    56,    70,   106,   218,   239,   243,
     249,   254,   256,   259,   248,    76,   109,   223,    72,   107,
     219,    74,   108,   229,   244,   120,    17,    18,   121,   181,
     180,   179,   178,   176,   177,   175,   174,   136,   183,   185,
     186,   187,   188,   171,   172,   139,    41,   161,   122,   168,
     189,    21
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      87,    80,   123,    91,    68,    93,     5,    95,   133,    97,
      98,    23,   129,   -19,     5,    28,    83,    99,    58,    25,
      26,    27,    -5,    81,   132,    31,   134,   158,   -19,    46,
      47,   -45,   159,   160,   -22,    10,    11,    12,    13,   170,
      48,   124,   173,    10,    11,    12,    13,     3,    59,   -22,
     -48,   -24,    19,    66,   110,   -48,   -48,    24,    20,    78,
     241,   242,   128,    32,   129,    83,    33,    83,    84,    40,
       5,   200,   166,    42,   201,   202,   197,   204,   205,   206,
     207,   208,   209,   210,   211,    49,   212,   -60,   213,   214,
     215,   216,   217,     8,     9,    43,    61,    65,   198,    10,
      11,    12,    13,    45,   -60,    73,    69,    71,   -68,   -66,
     -64,   -62,    75,    79,   128,   -55,   230,    83,    88,   103,
     -73,   104,    94,     4,   236,   231,    90,    92,   238,   -70,
     -70,    96,   102,   -60,   -60,   -60,   -60,   105,   226,   130,
     131,   -11,     5,   135,   251,   137,     4,   138,   154,   115,
     116,   227,   228,     6,     7,   156,   232,   155,   -11,   117,
     118,   162,   163,   167,   -11,     5,   182,     8,     9,     4,
     184,    10,    11,    12,    13,   190,     6,     7,   191,    46,
      47,   250,   193,   247,   192,   195,   147,   119,     5,   257,
       8,     9,   125,   116,    10,    11,    12,    13,   220,     6,
       7,   224,   117,   118,   -11,   169,   116,   225,   234,     5,
     240,   235,   237,     8,     9,   117,   118,    10,    11,    12,
      13,   245,    46,    47,   252,   246,   255,   253,   258,    89,
     119,   100,   194,   260,    77,    46,    47,   222,    10,    11,
      12,    13,    64,   119,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,     0,     0,     0,     0,     0,     0,     0,     0,   203,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152
};

static const yytype_int16 yycheck[] =
{
      67,    62,   107,    70,    51,    72,    20,    74,   113,    76,
      77,     7,   109,    18,    20,     3,    63,    78,     3,    15,
      16,    17,     0,    37,   112,    21,   114,    37,    18,    33,
      34,    18,    42,    43,    39,    49,    50,    51,    52,   136,
      38,   108,   139,    49,    50,    51,    52,     0,    33,    39,
      37,    41,    36,     3,   101,    42,    43,    19,    42,    57,
      28,    29,   109,     3,   161,   112,    35,   114,    64,    42,
      20,   168,   133,    18,   171,   172,   164,   174,   175,   176,
     177,   178,   179,   180,   181,     1,   183,     3,   185,   186,
     187,   188,   189,    45,    46,    39,    18,    36,   165,    49,
      50,    51,    52,    41,    20,    25,    27,    26,    24,    25,
      26,    27,    24,    38,   161,    41,   221,   164,     3,     3,
      36,    18,    35,     1,   229,   222,    41,    41,   233,    45,
      46,    41,    40,    49,    50,    51,    52,    41,   199,     3,
      35,    19,    20,    18,   249,    13,     1,    14,    40,     3,
       4,   218,   219,    31,    32,    36,   223,    40,    36,    13,
      14,    40,     3,    40,    19,    20,    13,    45,    46,     1,
      14,    49,    50,    51,    52,    35,    31,    32,    35,    33,
      34,   248,    18,   244,    26,    35,    12,    41,    20,   256,
      45,    46,     3,     4,    49,    50,    51,    52,    41,    31,
      32,    18,    13,    14,    36,     3,     4,    36,    36,    20,
      40,    36,    36,    45,    46,    13,    14,    49,    50,    51,
      52,    35,    33,    34,    36,    41,    35,    40,    36,    68,
      41,    79,   161,   259,    56,    33,    34,   194,    49,    50,
      51,    52,    49,    41,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    54,    55,     0,     1,    20,    31,    32,    45,    46,
      49,    50,    51,    52,    57,    58,    59,   119,   120,    36,
      42,   144,    60,    57,    19,    57,    57,    57,     3,    62,
      67,    57,     3,    35,    63,    64,    66,    68,    61,    56,
      42,   139,    18,    39,    72,    41,    33,    34,   118,     1,
      91,    92,    93,    94,    95,    96,    97,    65,     3,    33,
      73,    18,    74,    69,   144,    36,     3,    85,   120,    27,
      98,    26,   111,    25,   114,    24,   108,   119,   118,    38,
     139,    37,    75,   120,    57,    86,    88,    91,     3,    62,
      41,    91,    41,    91,    35,    91,    41,    91,    91,   139,
      72,    77,    40,     3,    18,    41,    99,   112,   115,   109,
     120,    70,    76,    87,    89,     3,     4,    13,    14,    41,
     118,   121,   141,   141,    91,     3,    79,    84,   120,   121,
       3,    35,    75,   141,    75,    18,   130,    13,    14,   138,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    40,    40,    36,    82,    37,    42,
      43,   140,    40,     3,    78,    71,   139,    40,   142,     3,
     121,   136,   137,   121,   129,   128,   126,   127,   125,   124,
     123,   122,    13,   131,    14,   132,   133,   134,   135,   143,
      35,    35,    26,    18,    79,    35,    80,    75,    91,    90,
     121,   121,   121,    40,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   100,   113,
      41,    83,   140,   110,    18,    36,   139,    91,    91,   116,
     141,   121,    91,    81,    36,    36,   141,    36,   141,   101,
      40,    28,    29,   102,   117,    35,    41,   139,   107,   103,
      91,   141,    36,    40,   104,    35,   105,    91,    36,   106,
     102
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    55,    56,    54,    54,    57,    57,    57,    57,
      57,    57,    58,    58,    60,    61,    59,    63,    62,    64,
      65,    62,    66,    62,    68,    69,    70,    71,    67,    72,
      72,    73,    73,    73,    74,    74,    76,    75,    77,    78,
      75,    75,    80,    81,    79,    82,    83,    79,    79,    79,
      79,    84,    86,    87,    85,    88,    89,    90,    85,    85,
      92,    91,    93,    91,    94,    91,    95,    91,    96,    91,
      97,    91,    91,    91,    99,   100,   101,    98,   103,   104,
     105,   106,   102,   107,   102,   102,   109,   110,   108,   112,
     113,   111,   115,   116,   117,   114,   118,   118,   119,   119,
     120,   120,   120,   120,   120,   122,   121,   123,   121,   124,
     121,   125,   121,   126,   121,   127,   121,   128,   121,   129,
     121,   130,   121,   131,   121,   132,   121,   133,   121,   134,
     121,   135,   121,   121,   136,   121,   121,   137,   121,   138,
     121,   121,   121,   139,   139,   140,   140,   140,   141,   142,
     141,   143,   141,   141,   144,   144
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     7,     0,     2,     2,     2,     2,
       3,     0,     2,     2,     0,     0,     5,     0,     3,     0,
       0,     6,     0,     5,     0,     0,     0,     0,    11,     4,
       3,     1,     1,     0,     1,     0,     0,     4,     0,     0,
       6,     0,     0,     0,     6,     0,     0,     5,     1,     1,
       0,     5,     0,     0,     6,     0,     0,     0,     8,     2,
       0,     3,     0,     3,     0,     3,     0,     3,     0,     3,
       0,     3,     3,     0,     0,     0,     0,    11,     0,     0,
       0,     0,    12,     0,     5,     0,     0,     0,     9,     0,
       0,     9,     0,     0,     0,    12,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     3,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     3,     0,     4,     3,     0,     4,     0,
       4,     1,     1,     1,     0,     1,     1,     1,     1,     0,
       4,     0,     4,     0,     1,     1
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
#line 60 "yacc.y"
              {add_to_scope_stack("global");}
#line 1591 "y.tab.c"
    break;

  case 3: /* $@2: %empty  */
#line 60 "yacc.y"
                                                                  {printf("function main(){\n"); add_to_scope_stack("main"); tab_counter++; }
#line 1597 "y.tab.c"
    break;

  case 4: /* c_file: $@1 BEFORE_MAIN MAIN LC $@2 STATEMENTS RC  */
#line 60 "yacc.y"
                                                                                                                                                            { remove_from_scope_stack(); printf("}");printf("\n/*end of main function*/\n"); remove_from_scope_stack(); }
#line 1603 "y.tab.c"
    break;

  case 5: /* c_file: %empty  */
#line 61 "yacc.y"
                          {printf("\n"); exit(2);}
#line 1609 "y.tab.c"
    break;

  case 11: /* BEFORE_MAIN: %empty  */
#line 69 "yacc.y"
                                              {}
#line 1615 "y.tab.c"
    break;

  case 14: /* $@3: %empty  */
#line 88 "yacc.y"
                            {printf("const ");}
#line 1621 "y.tab.c"
    break;

  case 15: /* $@4: %empty  */
#line 88 "yacc.y"
                                                    {printf("%s = ", yylval.var_name);}
#line 1627 "y.tab.c"
    break;

  case 16: /* DEFINE_DECLARATION: DEFINE $@3 VAR $@4 TERMINAL  */
#line 88 "yacc.y"
                                                                                                 {printf(";\n");}
#line 1633 "y.tab.c"
    break;

  case 17: /* $@5: %empty  */
#line 91 "yacc.y"
                      { insert_to_table(yylval.var_name,current_data_type); printf("let %s", yylval.var_name);}
#line 1639 "y.tab.c"
    break;

  case 18: /* VAR_DECLARATION: VAR $@5 SEMICOLON_NT  */
#line 91 "yacc.y"
                                                                                                                             {printf("\n");}
#line 1645 "y.tab.c"
    break;

  case 19: /* $@6: %empty  */
#line 92 "yacc.y"
                                      { insert_to_table(yylval.var_name,current_data_type); printf("let %s", yylval.var_name);}
#line 1651 "y.tab.c"
    break;

  case 20: /* $@7: %empty  */
#line 92 "yacc.y"
                                                                                                                                           {printf(" = ");}
#line 1657 "y.tab.c"
    break;

  case 21: /* VAR_DECLARATION: VAR $@6 ASSIGNMENT $@7 TERMINAL SEMICOLON_NT  */
#line 92 "yacc.y"
                                                                                                                                                                                  {printf("\n");}
#line 1663 "y.tab.c"
    break;

  case 22: /* $@8: %empty  */
#line 93 "yacc.y"
                                      { insert_to_table(yylval.var_name,current_data_type); printf("let %s", yylval.var_name);}
#line 1669 "y.tab.c"
    break;

  case 23: /* VAR_DECLARATION: VAR $@8 ARRAY_DIMENSION ARRAY_ASSIGNMENT SEMICOLON_NT  */
#line 93 "yacc.y"
                                                                                                                                                                               {printf("\n");}
#line 1675 "y.tab.c"
    break;

  case 24: /* $@9: %empty  */
#line 96 "yacc.y"
                               { printf("function %s", yylval.var_name); add_to_scope_stack(yylval.var_name);}
#line 1681 "y.tab.c"
    break;

  case 25: /* $@10: %empty  */
#line 96 "yacc.y"
                                                                                                                  {printf("(");}
#line 1687 "y.tab.c"
    break;

  case 26: /* $@11: %empty  */
#line 96 "yacc.y"
                                                                                                                                               {printf(") ");}
#line 1693 "y.tab.c"
    break;

  case 27: /* $@12: %empty  */
#line 96 "yacc.y"
                                                                                                                                                                  {printf(" {\n"); tab_counter++;}
#line 1699 "y.tab.c"
    break;

  case 28: /* FUNCTION_DECLARATION: VAR $@9 LP $@10 PARAMETERS RP $@11 LC $@12 STATEMENTS RC  */
#line 96 "yacc.y"
                                                                                                                                                                                                                 {tab_counter--;print_tabs(); printf("}\n"); remove_from_scope_stack(); }
#line 1705 "y.tab.c"
    break;

  case 34: /* ARRAY_ASSIGNMENT: ASSIGNMENT  */
#line 108 "yacc.y"
                                     {printf(" = ");}
#line 1711 "y.tab.c"
    break;

  case 36: /* $@13: %empty  */
#line 120 "yacc.y"
                           {printf("%s", yylval.var_name);}
#line 1717 "y.tab.c"
    break;

  case 38: /* $@14: %empty  */
#line 121 "yacc.y"
                               {printf(", ");}
#line 1723 "y.tab.c"
    break;

  case 39: /* $@15: %empty  */
#line 121 "yacc.y"
                                                        {printf("%s", yylval.var_name);}
#line 1729 "y.tab.c"
    break;

  case 42: /* $@16: %empty  */
#line 125 "yacc.y"
                                           {printf("let %s", yylval.var_name);}
#line 1735 "y.tab.c"
    break;

  case 43: /* $@17: %empty  */
#line 125 "yacc.y"
                                                                                           {printf(" = ");}
#line 1741 "y.tab.c"
    break;

  case 45: /* $@18: %empty  */
#line 126 "yacc.y"
                                                                      {printf("%s", yylval.var_name);}
#line 1747 "y.tab.c"
    break;

  case 46: /* $@19: %empty  */
#line 126 "yacc.y"
                                                                                                                  {printf(" = ");}
#line 1753 "y.tab.c"
    break;

  case 48: /* EXPRESSION_DECLARATION_OR_NoDECL: VAR  */
#line 127 "yacc.y"
                                                                      { printf("%s", yylval.var_name);}
#line 1759 "y.tab.c"
    break;

  case 52: /* $@20: %empty  */
#line 140 "yacc.y"
                      { printf("%s",yylval.var_name); search_var_in_scope(yylval.var_name); }
#line 1765 "y.tab.c"
    break;

  case 53: /* $@21: %empty  */
#line 140 "yacc.y"
                                                                                                         {printf(" = ");}
#line 1771 "y.tab.c"
    break;

  case 54: /* VAR_OR_FUNC_USE: VAR $@20 ASSIGNMENT $@21 EXPRESSION_NT SEMICOLON_NT  */
#line 140 "yacc.y"
                                                                                                                                                      { printf("\n");}
#line 1777 "y.tab.c"
    break;

  case 55: /* $@22: %empty  */
#line 141 "yacc.y"
                                                             {printf("%s",yylval.var_name);}
#line 1783 "y.tab.c"
    break;

  case 56: /* $@23: %empty  */
#line 141 "yacc.y"
                                                                                                 { printf("("); }
#line 1789 "y.tab.c"
    break;

  case 57: /* $@24: %empty  */
#line 141 "yacc.y"
                                                                                                                                { printf(")"); }
#line 1795 "y.tab.c"
    break;

  case 58: /* VAR_OR_FUNC_USE: VAR $@22 LP $@23 PARAMETERS RP $@24 SEMICOLON_NT  */
#line 141 "yacc.y"
                                                                                                                                                              { printf("\n");}
#line 1801 "y.tab.c"
    break;

  case 60: /* $@25: %empty  */
#line 151 "yacc.y"
              {print_tabs();}
#line 1807 "y.tab.c"
    break;

  case 61: /* STATEMENTS: $@25 VAR_OR_FUNC_USE STATEMENTS  */
#line 151 "yacc.y"
                                                        {}
#line 1813 "y.tab.c"
    break;

  case 62: /* $@26: %empty  */
#line 152 "yacc.y"
                          {print_tabs();}
#line 1819 "y.tab.c"
    break;

  case 63: /* STATEMENTS: $@26 IF_BLOCK STATEMENTS  */
#line 152 "yacc.y"
                                                             {}
#line 1825 "y.tab.c"
    break;

  case 64: /* $@27: %empty  */
#line 153 "yacc.y"
                          {print_tabs();}
#line 1831 "y.tab.c"
    break;

  case 65: /* STATEMENTS: $@27 WHILE_BLOCK STATEMENTS  */
#line 153 "yacc.y"
                                                                 {}
#line 1837 "y.tab.c"
    break;

  case 66: /* $@28: %empty  */
#line 154 "yacc.y"
                          {print_tabs();}
#line 1843 "y.tab.c"
    break;

  case 67: /* STATEMENTS: $@28 DO_WHILE_BLOCK STATEMENTS  */
#line 154 "yacc.y"
                                                                    {}
#line 1849 "y.tab.c"
    break;

  case 68: /* $@29: %empty  */
#line 155 "yacc.y"
                          {print_tabs();}
#line 1855 "y.tab.c"
    break;

  case 69: /* STATEMENTS: $@29 FOR_BLOCK STATEMENTS  */
#line 155 "yacc.y"
                                                              {}
#line 1861 "y.tab.c"
    break;

  case 70: /* $@30: %empty  */
#line 156 "yacc.y"
              {print_tabs();}
#line 1867 "y.tab.c"
    break;

  case 71: /* STATEMENTS: $@30 COMMENT STATEMENTS  */
#line 156 "yacc.y"
                                                {}
#line 1873 "y.tab.c"
    break;

  case 73: /* STATEMENTS: %empty  */
#line 158 "yacc.y"
                    { }
#line 1879 "y.tab.c"
    break;

  case 74: /* $@31: %empty  */
#line 166 "yacc.y"
                    {printf("if (");}
#line 1885 "y.tab.c"
    break;

  case 75: /* $@32: %empty  */
#line 166 "yacc.y"
                                                          {  printf(") {\n"); tab_counter++;}
#line 1891 "y.tab.c"
    break;

  case 76: /* $@33: %empty  */
#line 166 "yacc.y"
                                                                                                            {tab_counter--; print_tabs(); printf("}\n");}
#line 1897 "y.tab.c"
    break;

  case 78: /* $@34: %empty  */
#line 169 "yacc.y"
                            {print_tabs(); printf("else if (");}
#line 1903 "y.tab.c"
    break;

  case 79: /* $@35: %empty  */
#line 169 "yacc.y"
                                                                                   {printf(")");}
#line 1909 "y.tab.c"
    break;

  case 80: /* $@36: %empty  */
#line 169 "yacc.y"
                                                                                                     {printf("{\n"); tab_counter++;}
#line 1915 "y.tab.c"
    break;

  case 81: /* $@37: %empty  */
#line 169 "yacc.y"
                                                                                                                                                   {tab_counter--; print_tabs(); printf("}\n"); }
#line 1921 "y.tab.c"
    break;

  case 83: /* $@38: %empty  */
#line 170 "yacc.y"
                                           {print_tabs();tab_counter++;printf("else {\n"); }
#line 1927 "y.tab.c"
    break;

  case 84: /* ELSEIF_OR_ELSE: ELSE LC $@38 STATEMENTS RC  */
#line 170 "yacc.y"
                                                                                                           {tab_counter--; print_tabs(); printf("}\n"); }
#line 1933 "y.tab.c"
    break;

  case 85: /* ELSEIF_OR_ELSE: %empty  */
#line 171 "yacc.y"
                                                                                                             {printf("\n");}
#line 1939 "y.tab.c"
    break;

  case 86: /* $@39: %empty  */
#line 179 "yacc.y"
                         {printf("for(");}
#line 1945 "y.tab.c"
    break;

  case 87: /* $@40: %empty  */
#line 179 "yacc.y"
                                                                      {printf("){\n"); tab_counter++;}
#line 1951 "y.tab.c"
    break;

  case 88: /* FOR_BLOCK: FOR LP $@39 FOR_BLOCK_PARAMETERS RP LC $@40 STATEMENTS RC  */
#line 179 "yacc.y"
                                                                                                                     {tab_counter--; print_tabs(); printf("}\n");}
#line 1957 "y.tab.c"
    break;

  case 89: /* $@41: %empty  */
#line 182 "yacc.y"
                       {printf("while(");}
#line 1963 "y.tab.c"
    break;

  case 90: /* $@42: %empty  */
#line 182 "yacc.y"
                                                               {printf("){\n"); tab_counter++;}
#line 1969 "y.tab.c"
    break;

  case 91: /* WHILE_BLOCK: WHILE LP $@41 EXPRESSION_NT RP LC $@42 STATEMENTS RC  */
#line 182 "yacc.y"
                                                                                                              {tab_counter--; print_tabs(); printf("}\n"); }
#line 1975 "y.tab.c"
    break;

  case 92: /* $@43: %empty  */
#line 185 "yacc.y"
                        {printf("do{\n"); tab_counter++;}
#line 1981 "y.tab.c"
    break;

  case 93: /* $@44: %empty  */
#line 185 "yacc.y"
                                                                                 {tab_counter--;print_tabs(); printf("}while(");}
#line 1987 "y.tab.c"
    break;

  case 94: /* $@45: %empty  */
#line 185 "yacc.y"
                                                                                                                                                   {printf(")");}
#line 1993 "y.tab.c"
    break;

  case 95: /* DO_WHILE_BLOCK: DO LC $@43 STATEMENTS RC WHILE LP $@44 EXPRESSION_NT RP $@45 SEMICOLON_NT  */
#line 185 "yacc.y"
                                                                                                                                                                               {printf("\n");}
#line 1999 "y.tab.c"
    break;

  case 96: /* TERMINAL: NUMBER  */
#line 188 "yacc.y"
                         { printf("%s", yylval.var_name); }
#line 2005 "y.tab.c"
    break;

  case 97: /* TERMINAL: QUOTED_STRING  */
#line 189 "yacc.y"
                                        { printf("%s", yylval.var_name); }
#line 2011 "y.tab.c"
    break;

  case 98: /* COMMENT: ILCOMMENT  */
#line 192 "yacc.y"
                            { printf("%s\n", yylval.var_name); }
#line 2017 "y.tab.c"
    break;

  case 99: /* COMMENT: MLCOMMENT  */
#line 193 "yacc.y"
                            { printf("%s", yylval.var_name); }
#line 2023 "y.tab.c"
    break;

  case 100: /* TYPE: INT  */
#line 196 "yacc.y"
                                { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type);  }
#line 2029 "y.tab.c"
    break;

  case 101: /* TYPE: CHAR  */
#line 197 "yacc.y"
                                        { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type); 	}
#line 2035 "y.tab.c"
    break;

  case 102: /* TYPE: FLOAT  */
#line 198 "yacc.y"
                                        { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type); 	}
#line 2041 "y.tab.c"
    break;

  case 103: /* TYPE: DOUBLE  */
#line 199 "yacc.y"
                                        { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type); 	}
#line 2047 "y.tab.c"
    break;

  case 104: /* TYPE: VOID  */
#line 200 "yacc.y"
                                        { }
#line 2053 "y.tab.c"
    break;

  case 105: /* $@46: %empty  */
#line 207 "yacc.y"
                             {printf("== ");}
#line 2059 "y.tab.c"
    break;

  case 107: /* $@47: %empty  */
#line 208 "yacc.y"
                                         {printf("!= ");}
#line 2065 "y.tab.c"
    break;

  case 109: /* $@48: %empty  */
#line 209 "yacc.y"
                                        {printf("> ");}
#line 2071 "y.tab.c"
    break;

  case 111: /* $@49: %empty  */
#line 210 "yacc.y"
                                        {printf("< ");}
#line 2077 "y.tab.c"
    break;

  case 113: /* $@50: %empty  */
#line 211 "yacc.y"
                                         {printf("<= ");}
#line 2083 "y.tab.c"
    break;

  case 115: /* $@51: %empty  */
#line 212 "yacc.y"
                                         {printf(">= ");}
#line 2089 "y.tab.c"
    break;

  case 117: /* $@52: %empty  */
#line 214 "yacc.y"
                                          {printf("&& ");}
#line 2095 "y.tab.c"
    break;

  case 119: /* $@53: %empty  */
#line 215 "yacc.y"
                                         {printf("|| ");}
#line 2101 "y.tab.c"
    break;

  case 121: /* $@54: %empty  */
#line 216 "yacc.y"
                               {printf("!");}
#line 2107 "y.tab.c"
    break;

  case 123: /* $@55: %empty  */
#line 218 "yacc.y"
                                          {printf("+ ");}
#line 2113 "y.tab.c"
    break;

  case 125: /* $@56: %empty  */
#line 219 "yacc.y"
                                           {printf("- ");}
#line 2119 "y.tab.c"
    break;

  case 127: /* $@57: %empty  */
#line 220 "yacc.y"
                                         {printf("* ");}
#line 2125 "y.tab.c"
    break;

  case 129: /* $@58: %empty  */
#line 221 "yacc.y"
                                         {printf("/ ");}
#line 2131 "y.tab.c"
    break;

  case 131: /* $@59: %empty  */
#line 222 "yacc.y"
                                         {printf("%% ");}
#line 2137 "y.tab.c"
    break;

  case 133: /* EXPRESSION: EXPRESSION PLUS PLUS  */
#line 223 "yacc.y"
                                               {printf("++");}
#line 2143 "y.tab.c"
    break;

  case 134: /* $@60: %empty  */
#line 224 "yacc.y"
                                    {printf("++");}
#line 2149 "y.tab.c"
    break;

  case 136: /* EXPRESSION: EXPRESSION MINUS MINUS  */
#line 225 "yacc.y"
                                                 {printf("--");}
#line 2155 "y.tab.c"
    break;

  case 137: /* $@61: %empty  */
#line 226 "yacc.y"
                                      {printf("--");}
#line 2161 "y.tab.c"
    break;

  case 139: /* $@62: %empty  */
#line 228 "yacc.y"
                             {printf("(");}
#line 2167 "y.tab.c"
    break;

  case 140: /* EXPRESSION: LP $@62 EXPRESSION RP  */
#line 228 "yacc.y"
                                                          {printf(") ");}
#line 2173 "y.tab.c"
    break;

  case 141: /* EXPRESSION: VAR  */
#line 230 "yacc.y"
                              {printf("%s", yylval.var_name);}
#line 2179 "y.tab.c"
    break;

  case 143: /* SEMICOLON_NT: SEMICOLON  */
#line 240 "yacc.y"
                        { printf(";");}
#line 2185 "y.tab.c"
    break;

  case 144: /* SEMICOLON_NT: %empty  */
#line 241 "yacc.y"
                                      {yyerror("syntax error : missing ';'\n");}
#line 2191 "y.tab.c"
    break;

  case 145: /* SEMICOLON_OR_ERROR: SEMICOLON  */
#line 244 "yacc.y"
                              { printf(";");}
#line 2197 "y.tab.c"
    break;

  case 146: /* SEMICOLON_OR_ERROR: COMA  */
#line 245 "yacc.y"
                                         { printf(","); printf("\nSYNTAX_ERROR: You put a ',', must be a ';'!\n");}
#line 2203 "y.tab.c"
    break;

  case 147: /* SEMICOLON_OR_ERROR: COLON  */
#line 246 "yacc.y"
                                          { printf(":"); printf("\nSYNTAX_ERROR: You put a ':', must be a ';'!\n");}
#line 2209 "y.tab.c"
    break;

  case 149: /* $@63: %empty  */
#line 250 "yacc.y"
                                          { printf("%s ", yylval.var_name); printf("= ");}
#line 2215 "y.tab.c"
    break;

  case 151: /* $@64: %empty  */
#line 251 "yacc.y"
                                                 {printf("= ");}
#line 2221 "y.tab.c"
    break;

  case 152: /* EXPRESSION_NT: EXPRESSION ASSIGNMENT $@64 EXPRESSION  */
#line 251 "yacc.y"
                                                                            {yyerror("Maybe you mean '==' operator?");}
#line 2227 "y.tab.c"
    break;

  case 153: /* EXPRESSION_NT: %empty  */
#line 252 "yacc.y"
                                         {yyerror("expected expression before the token");}
#line 2233 "y.tab.c"
    break;


#line 2237 "y.tab.c"

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

#line 258 "yacc.y"


#include "lex.yy.c"

void add_to_scope_stack(char var[VAR_NAME_LEN]){
	if(scopeStackCounter < SCOPE_SIZE){
		scopeStackCounter++;
		strcpy(scopeStack[scopeStackCounter], var);
	}else{
		printf("NO MORE SPACE IN SCOPE STACK ARRAY!");
		yyerror("NO MORE SPACE IN SCOPE STACK ARRAY!");
		exit(0);
	}
}

void remove_from_scope_stack(){
	scopeStackCounter--;
}

int search_var_in_scope(char var[VAR_NAME_LEN]){
	/*In this function search the VAR (argument) in the table on the current scope or on parents scopes */
	int is_found = 0; // bool to say if the var was found or not
	int idx = -1; // index to return in case that we found on the table

	for(int j = scopeStackCounter; j>=0; j--){
		for ( int i = 0; i<table_idx; i++){
			if(strcmp(sym[i].var_name, var) == 0 && strcmp(sym[i].scopeName, scopeStack[j]) == 0){
				return idx;
			}
		}
	}

	printf("'%s' was not declared in the scope \n", var);
	return idx;
	

}

int lookup_in_table(char var[VAR_NAME_LEN])
{
	/*
	If the variable exists AND its scope is ok, return the data type.
	Else return -1
	*/
	for(int i=0; i<table_idx; i++)
	{
		// we ned to check if the variable exist and has a correct scope to return the type
		if(strcmp(sym[i].var_name, var)==0 && strcmp (sym[i].scopeName, scopeStack[scopeStackCounter]) == 0)
			return sym[i].type;
	}
	return -1;
}



void insert_to_table(char var[VAR_NAME_LEN], int type)
{
	/* 
	Insert names of the variables to the variable table.
	Check whatever there's are MULTIPLE DECLARATION on the SAME SCOPE  
	*/
	if(lookup_in_table(var)==-1)
	{
		/* if is a new varible then update the table and the scope stack */
		strcpy(sym[table_idx].var_name,var);
		strcpy(sym[table_idx].scopeName, scopeStack[scopeStackCounter]);
		sym[table_idx].type = type;
		table_idx++;
	}
	else {
		printf("'%s' has multiple declaration of the variable\n", var);
		yyerror("");
		/* exit(0); */
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
