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
#line 26 "yacc.y"

int data_type;
char var_name[30];

#line 255 "y.tab.c"

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
  YYSYMBOL_BEFORE_MAIN = 56,               /* BEFORE_MAIN  */
  YYSYMBOL_DECLARATION = 57,               /* DECLARATION  */
  YYSYMBOL_DEFINE_DECLARATION = 58,        /* DEFINE_DECLARATION  */
  YYSYMBOL_59_2 = 59,                      /* $@2  */
  YYSYMBOL_60_3 = 60,                      /* $@3  */
  YYSYMBOL_VAR_DECLARATION = 61,           /* VAR_DECLARATION  */
  YYSYMBOL_62_4 = 62,                      /* $@4  */
  YYSYMBOL_63_5 = 63,                      /* $@5  */
  YYSYMBOL_64_6 = 64,                      /* $@6  */
  YYSYMBOL_65_7 = 65,                      /* $@7  */
  YYSYMBOL_FUNCTION_DECLARATION = 66,      /* FUNCTION_DECLARATION  */
  YYSYMBOL_67_8 = 67,                      /* $@8  */
  YYSYMBOL_68_9 = 68,                      /* $@9  */
  YYSYMBOL_69_10 = 69,                     /* $@10  */
  YYSYMBOL_70_11 = 70,                     /* $@11  */
  YYSYMBOL_ARRAY_DIMENSION = 71,           /* ARRAY_DIMENSION  */
  YYSYMBOL_ARRAY_SIZE = 72,                /* ARRAY_SIZE  */
  YYSYMBOL_ARRAY_ASSIGNMENT = 73,          /* ARRAY_ASSIGNMENT  */
  YYSYMBOL_PARAMETERS = 74,                /* PARAMETERS  */
  YYSYMBOL_75_12 = 75,                     /* $@12  */
  YYSYMBOL_76_13 = 76,                     /* $@13  */
  YYSYMBOL_77_14 = 77,                     /* $@14  */
  YYSYMBOL_EXPRESSION_DECLARATION_OR_NoDECL = 78, /* EXPRESSION_DECLARATION_OR_NoDECL  */
  YYSYMBOL_79_15 = 79,                     /* $@15  */
  YYSYMBOL_80_16 = 80,                     /* $@16  */
  YYSYMBOL_81_17 = 81,                     /* $@17  */
  YYSYMBOL_82_18 = 82,                     /* $@18  */
  YYSYMBOL_FOR_BLOCK_PARAMETERS = 83,      /* FOR_BLOCK_PARAMETERS  */
  YYSYMBOL_VAR_OR_FUNC_USE = 84,           /* VAR_OR_FUNC_USE  */
  YYSYMBOL_85_19 = 85,                     /* $@19  */
  YYSYMBOL_86_20 = 86,                     /* $@20  */
  YYSYMBOL_87_21 = 87,                     /* $@21  */
  YYSYMBOL_88_22 = 88,                     /* $@22  */
  YYSYMBOL_89_23 = 89,                     /* $@23  */
  YYSYMBOL_STATEMENTS = 90,                /* STATEMENTS  */
  YYSYMBOL_91_24 = 91,                     /* $@24  */
  YYSYMBOL_92_25 = 92,                     /* $@25  */
  YYSYMBOL_93_26 = 93,                     /* $@26  */
  YYSYMBOL_94_27 = 94,                     /* $@27  */
  YYSYMBOL_95_28 = 95,                     /* $@28  */
  YYSYMBOL_96_29 = 96,                     /* $@29  */
  YYSYMBOL_IF_BLOCK = 97,                  /* IF_BLOCK  */
  YYSYMBOL_98_30 = 98,                     /* $@30  */
  YYSYMBOL_99_31 = 99,                     /* $@31  */
  YYSYMBOL_100_32 = 100,                   /* $@32  */
  YYSYMBOL_ELSEIF_OR_ELSE = 101,           /* ELSEIF_OR_ELSE  */
  YYSYMBOL_102_33 = 102,                   /* $@33  */
  YYSYMBOL_103_34 = 103,                   /* $@34  */
  YYSYMBOL_104_35 = 104,                   /* $@35  */
  YYSYMBOL_105_36 = 105,                   /* $@36  */
  YYSYMBOL_106_37 = 106,                   /* $@37  */
  YYSYMBOL_FOR_BLOCK = 107,                /* FOR_BLOCK  */
  YYSYMBOL_108_38 = 108,                   /* $@38  */
  YYSYMBOL_109_39 = 109,                   /* $@39  */
  YYSYMBOL_WHILE_BLOCK = 110,              /* WHILE_BLOCK  */
  YYSYMBOL_111_40 = 111,                   /* $@40  */
  YYSYMBOL_112_41 = 112,                   /* $@41  */
  YYSYMBOL_DO_WHILE_BLOCK = 113,           /* DO_WHILE_BLOCK  */
  YYSYMBOL_114_42 = 114,                   /* $@42  */
  YYSYMBOL_115_43 = 115,                   /* $@43  */
  YYSYMBOL_116_44 = 116,                   /* $@44  */
  YYSYMBOL_TERMINAL = 117,                 /* TERMINAL  */
  YYSYMBOL_COMMENT = 118,                  /* COMMENT  */
  YYSYMBOL_TYPE = 119,                     /* TYPE  */
  YYSYMBOL_EXPRESSION = 120,               /* EXPRESSION  */
  YYSYMBOL_121_45 = 121,                   /* $@45  */
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
  YYSYMBOL_SEMICOLON_NT = 138,             /* SEMICOLON_NT  */
  YYSYMBOL_SEMICOLON_OR_ERROR = 139,       /* SEMICOLON_OR_ERROR  */
  YYSYMBOL_EXPRESSION_NT = 140,            /* EXPRESSION_NT  */
  YYSYMBOL_141_62 = 141,                   /* $@62  */
  YYSYMBOL_142_63 = 142,                   /* $@63  */
  YYSYMBOL_DELIMITER = 143                 /* DELIMITER  */
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
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   276

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  91
/* YYNRULES -- Number of rules.  */
#define YYNRULES  153
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  258

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
static const yytype_uint8 yyrline[] =
{
       0,    56,    56,    56,    57,    60,    61,    62,    63,    64,
      77,    78,    83,    83,    83,    86,    86,    87,    87,    87,
      88,    88,    91,    91,    91,    91,    91,    94,    95,    98,
      99,   100,   103,   104,   115,   115,   116,   116,   116,   117,
     120,   120,   120,   121,   121,   121,   122,   123,   124,   127,
     135,   135,   135,   136,   136,   136,   136,   137,   146,   146,
     147,   147,   148,   148,   149,   149,   150,   150,   151,   151,
     152,   153,   161,   161,   161,   161,   164,   164,   164,   164,
     164,   165,   165,   166,   174,   174,   174,   177,   177,   177,
     180,   180,   180,   180,   183,   184,   187,   188,   191,   192,
     193,   194,   195,   202,   202,   203,   203,   204,   204,   205,
     205,   206,   206,   207,   207,   209,   209,   210,   210,   211,
     211,   213,   213,   214,   214,   215,   215,   216,   216,   217,
     217,   218,   219,   219,   220,   221,   221,   223,   223,   225,
     227,   235,   236,   239,   240,   241,   244,   245,   245,   246,
     246,   247,   250,   251
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
  "$@1", "BEFORE_MAIN", "DECLARATION", "DEFINE_DECLARATION", "$@2", "$@3",
  "VAR_DECLARATION", "$@4", "$@5", "$@6", "$@7", "FUNCTION_DECLARATION",
  "$@8", "$@9", "$@10", "$@11", "ARRAY_DIMENSION", "ARRAY_SIZE",
  "ARRAY_ASSIGNMENT", "PARAMETERS", "$@12", "$@13", "$@14",
  "EXPRESSION_DECLARATION_OR_NoDECL", "$@15", "$@16", "$@17", "$@18",
  "FOR_BLOCK_PARAMETERS", "VAR_OR_FUNC_USE", "$@19", "$@20", "$@21",
  "$@22", "$@23", "STATEMENTS", "$@24", "$@25", "$@26", "$@27", "$@28",
  "$@29", "IF_BLOCK", "$@30", "$@31", "$@32", "ELSEIF_OR_ELSE", "$@33",
  "$@34", "$@35", "$@36", "$@37", "FOR_BLOCK", "$@38", "$@39",
  "WHILE_BLOCK", "$@40", "$@41", "DO_WHILE_BLOCK", "$@42", "$@43", "$@44",
  "TERMINAL", "COMMENT", "TYPE", "EXPRESSION", "$@45", "$@46", "$@47",
  "$@48", "$@49", "$@50", "$@51", "$@52", "$@53", "$@54", "$@55", "$@56",
  "$@57", "$@58", "$@59", "$@60", "$@61", "SEMICOLON_NT",
  "SEMICOLON_OR_ERROR", "EXPRESSION_NT", "$@62", "$@63", "DELIMITER", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-103)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-72)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,   -22,  -103,  -103,   144,  -103,  -103,  -103,  -103,    21,
     -15,   144,   144,    25,  -103,  -103,   144,    28,  -103,  -103,
      22,  -103,  -103,    15,  -103,  -103,  -103,  -103,  -103,   -29,
      45,    40,    32,     6,   110,  -103,  -103,  -103,    13,    71,
    -103,  -103,  -103,  -103,   -22,    70,   122,    85,    89,   101,
     103,     4,     6,  -103,  -103,    91,  -103,   -29,   183,   150,
    -103,    90,   110,   129,    92,   110,    98,   110,   106,   110,
     102,   110,  -103,  -103,   110,   -29,    40,  -103,  -103,   107,
     145,  -103,   131,   109,  -103,    14,  -103,  -103,  -103,  -103,
    -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,    58,  -103,
    -103,  -103,  -103,    34,    34,   110,    31,   149,   130,   183,
      34,   183,   139,  -103,   153,   155,  -103,  -103,   237,   147,
     148,   143,    80,    77,   152,   181,   251,  -103,  -103,  -103,
     -29,   179,  -103,   164,  -103,  -103,   164,  -103,  -103,  -103,
    -103,  -103,  -103,  -103,  -103,   176,   190,  -103,  -103,  -103,
    -103,   186,   187,   197,   172,  -103,  -103,  -103,    31,   189,
    -103,   183,   110,  -103,  -103,   164,  -103,   251,   164,   164,
     201,   164,   164,   164,   164,   164,   164,   164,   164,  -103,
     164,  -103,   164,   164,   164,   164,   164,  -103,  -103,   184,
    -103,    77,  -103,   208,  -103,   191,   -29,   251,   216,   216,
    -103,   216,   216,   216,   216,   216,   216,   216,   251,   216,
     216,   216,   216,   216,   251,   110,   110,  -103,    34,   164,
     110,  -103,  -103,  -103,   193,   194,    34,  -103,   251,   195,
      34,  -103,  -103,   196,  -103,  -103,    57,  -103,   202,   198,
    -103,   -29,  -103,  -103,  -103,   110,    34,   204,   229,  -103,
    -103,   203,  -103,   110,   234,  -103,    57,  -103
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,   102,    12,     0,    98,    99,   100,   101,     0,
       0,     0,     0,     0,   153,   152,     0,     0,     5,     1,
       0,     7,     6,    15,    11,    10,     8,    13,     2,   142,
       0,     0,     0,     0,     0,   141,    16,    18,    31,    33,
      23,    94,    95,    14,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,    29,     0,    32,   142,    39,     0,
       3,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    96,    97,     0,   142,    28,    21,    36,     0,
       0,    70,     0,     0,    59,    15,    57,    72,    61,    87,
      63,    90,    65,    84,    67,    69,    19,    27,     0,    24,
      34,    51,    54,   151,   151,     0,    48,     0,     0,    39,
     151,    39,   139,   119,     0,     0,   137,   140,   146,     0,
       0,     0,   139,     0,     0,     0,    47,    37,    25,    35,
     142,     0,   147,     0,   132,   135,     0,   117,   115,   111,
     113,   109,   107,   105,   103,   121,   123,   125,   127,   129,
     149,     0,     0,     0,     0,   144,   143,   145,    48,     0,
      40,    39,     0,    52,    55,     0,   139,   120,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
       0,   134,     0,     0,     0,     0,     0,    73,    88,     0,
      44,     0,    85,     0,    38,     0,   142,   148,   133,   136,
     138,   118,   116,   112,   114,   110,   108,   106,   104,   122,
     124,   126,   128,   130,   150,     0,     0,    91,   151,     0,
       0,    41,    26,    56,     0,     0,   151,    45,    49,     0,
     151,    74,    89,     0,    86,    42,    83,    92,     0,     0,
      75,   142,    81,    76,    93,     0,   151,     0,     0,    82,
      77,     0,    78,     0,     0,    79,    83,    80
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -103,  -103,  -103,    11,  -103,  -103,  -103,  -103,   209,  -103,
    -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,   199,  -103,
    -103,   -85,  -103,  -103,  -103,   113,  -103,  -103,  -103,  -103,
    -103,  -103,  -103,  -103,  -103,  -103,  -103,   -62,  -103,  -103,
    -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,    17,  -103,
    -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,
    -103,  -103,  -103,  -103,   -16,  -103,   -40,   -81,  -103,  -103,
    -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,
    -103,  -103,  -103,  -103,  -103,   -56,    83,  -102,  -103,  -103,
     232
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     9,    34,    10,    11,    12,    17,    33,    24,    29,
      30,    52,    31,    25,    32,    58,   108,   162,    39,    55,
      57,    79,   109,    98,   161,   123,   193,   230,   154,   218,
     124,    62,    82,   110,    83,   111,   196,    45,    46,    47,
      48,    49,    50,    51,    65,   103,   215,   236,   240,   246,
     251,   253,   256,   245,    71,   106,   220,    67,   104,   216,
      69,   105,   226,   241,   117,    74,    13,   118,   178,   177,
     176,   175,   173,   174,   172,   171,   133,   180,   182,   183,
     184,   185,   168,   169,   136,    36,   158,   119,   165,   186,
      16
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      84,    77,   120,    88,    20,    90,    63,    92,   130,    94,
      -4,     1,    95,    35,    14,    18,    53,    43,    80,    96,
      15,    19,    21,    22,   129,   126,   131,    26,    23,    -9,
       2,    27,   -17,   -17,   122,   113,    75,   112,   113,    41,
      42,     3,     4,   121,   114,   115,    54,   114,   115,    72,
      73,     2,   167,   -20,   -20,   170,   -22,    28,   107,     5,
       6,     7,     8,    37,    41,    42,   125,    41,    42,    80,
      81,    80,   116,    40,   163,   116,   194,   126,     2,    38,
       5,     6,     7,     8,   197,   238,   239,   198,   199,    56,
     201,   202,   203,   204,   205,   206,   207,   208,   -43,   209,
     195,   210,   211,   212,   213,   214,    60,     5,     6,     7,
       8,    44,    64,   -58,   155,    66,   227,   -46,   125,   156,
     157,    80,   -46,   -46,   233,    61,    68,    70,   235,    76,
     -58,   -53,    85,    87,   -66,   -64,   -62,   -60,   228,    89,
     223,    91,     2,    93,   248,     1,   -71,    99,   100,   101,
     102,     1,   127,   224,   225,   -68,   -68,   132,   229,   -58,
     -58,   -58,   -58,    -9,     2,   128,   134,   166,   113,   135,
       2,     5,     6,     7,     8,     3,     4,   114,   115,   153,
      -9,     3,     4,   247,   160,   244,    -9,   151,   152,   179,
     190,   254,   159,     5,     6,     7,     8,    41,    42,     5,
       6,     7,     8,     2,   181,   116,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   164,
      78,   187,   188,   189,   192,   217,   221,   222,   144,   231,
     232,   234,     5,     6,     7,     8,   237,   242,   252,   243,
     249,   200,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   250,
     255,   191,    86,   257,   219,    97,    59
};

static const yytype_int16 yycheck[] =
{
      62,    57,   104,    65,    19,    67,    46,    69,   110,    71,
       0,     1,    74,    42,    36,     4,     3,    33,    58,    75,
      42,     0,    11,    12,   109,   106,   111,    16,     3,    19,
      20,     3,    18,    18,     3,     4,    52,     3,     4,    33,
      34,    31,    32,   105,    13,    14,    33,    13,    14,    45,
      46,    20,   133,    39,    39,   136,    41,    35,    98,    49,
      50,    51,    52,    18,    33,    34,   106,    33,    34,   109,
      59,   111,    41,    41,   130,    41,   161,   158,    20,    39,
      49,    50,    51,    52,   165,    28,    29,   168,   169,    18,
     171,   172,   173,   174,   175,   176,   177,   178,    18,   180,
     162,   182,   183,   184,   185,   186,    36,    49,    50,    51,
      52,     1,    27,     3,    37,    26,   218,    37,   158,    42,
      43,   161,    42,    43,   226,     3,    25,    24,   230,    38,
      20,    41,     3,    41,    24,    25,    26,    27,   219,    41,
     196,    35,    20,    41,   246,     1,    36,    40,     3,    18,
      41,     1,     3,   215,   216,    45,    46,    18,   220,    49,
      50,    51,    52,    19,    20,    35,    13,     3,     4,    14,
      20,    49,    50,    51,    52,    31,    32,    13,    14,    36,
      36,    31,    32,   245,     3,   241,    36,    40,    40,    13,
      18,   253,    40,    49,    50,    51,    52,    33,    34,    49,
      50,    51,    52,    20,    14,    41,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    40,
      37,    35,    35,    26,    35,    41,    18,    36,    12,    36,
      36,    36,    49,    50,    51,    52,    40,    35,    35,    41,
      36,    40,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    40,
      36,   158,    63,   256,   191,    76,    44
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    20,    31,    32,    49,    50,    51,    52,    54,
      56,    57,    58,   119,    36,    42,   143,    59,    56,     0,
      19,    56,    56,     3,    61,    66,    56,     3,    35,    62,
      63,    65,    67,    60,    55,    42,   138,    18,    39,    71,
      41,    33,    34,   117,     1,    90,    91,    92,    93,    94,
      95,    96,    64,     3,    33,    72,    18,    73,    68,   143,
      36,     3,    84,   119,    27,    97,    26,   110,    25,   113,
      24,   107,    45,    46,   118,   117,    38,   138,    37,    74,
     119,    56,    85,    87,    90,     3,    61,    41,    90,    41,
      90,    35,    90,    41,    90,    90,   138,    71,    76,    40,
       3,    18,    41,    98,   111,   114,   108,   119,    69,    75,
      86,    88,     3,     4,    13,    14,    41,   117,   120,   140,
     140,    90,     3,    78,    83,   119,   120,     3,    35,    74,
     140,    74,    18,   129,    13,    14,   137,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    40,    40,    36,    81,    37,    42,    43,   139,    40,
       3,    77,    70,   138,    40,   141,     3,   120,   135,   136,
     120,   128,   127,   125,   126,   124,   123,   122,   121,    13,
     130,    14,   131,   132,   133,   134,   142,    35,    35,    26,
      18,    78,    35,    79,    74,    90,    89,   120,   120,   120,
      40,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,    99,   112,    41,    82,   139,
     109,    18,    36,   138,    90,    90,   115,   140,   120,    90,
      80,    36,    36,   140,    36,   140,   100,    40,    28,    29,
     101,   116,    35,    41,   138,   106,   102,    90,   140,    36,
      40,   103,    35,   104,    90,    36,   105,   101
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    55,    54,    54,    56,    56,    56,    56,    56,
      57,    57,    59,    60,    58,    62,    61,    63,    64,    61,
      65,    61,    67,    68,    69,    70,    66,    71,    71,    72,
      72,    72,    73,    73,    75,    74,    76,    77,    74,    74,
      79,    80,    78,    81,    82,    78,    78,    78,    78,    83,
      85,    86,    84,    87,    88,    89,    84,    84,    91,    90,
      92,    90,    93,    90,    94,    90,    95,    90,    96,    90,
      90,    90,    98,    99,   100,    97,   102,   103,   104,   105,
     101,   106,   101,   101,   108,   109,   107,   111,   112,   110,
     114,   115,   116,   113,   117,   117,   118,   118,   119,   119,
     119,   119,   119,   121,   120,   122,   120,   123,   120,   124,
     120,   125,   120,   126,   120,   127,   120,   128,   120,   129,
     120,   130,   120,   131,   120,   132,   120,   133,   120,   134,
     120,   120,   135,   120,   120,   136,   120,   137,   120,   120,
     120,   138,   138,   139,   139,   139,   140,   141,   140,   142,
     140,   140,   143,   143
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     6,     0,     2,     2,     2,     3,     0,
       2,     2,     0,     0,     5,     0,     3,     0,     0,     6,
       0,     5,     0,     0,     0,     0,    11,     4,     3,     1,
       1,     0,     1,     0,     0,     4,     0,     0,     6,     0,
       0,     0,     6,     0,     0,     5,     1,     1,     0,     5,
       0,     0,     6,     0,     0,     0,     8,     2,     0,     3,
       0,     3,     0,     3,     0,     3,     0,     3,     0,     3,
       3,     0,     0,     0,     0,    11,     0,     0,     0,     0,
      12,     0,     5,     0,     0,     0,     9,     0,     0,     9,
       0,     0,     0,    12,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       3,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     3,     0,     4,     3,     0,     4,     0,     4,     1,
       1,     1,     0,     1,     1,     1,     1,     0,     4,     0,
       4,     0,     1,     1
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
#line 56 "yacc.y"
                                 {printf("function main(){\n"); tab_counter++;}
#line 1579 "y.tab.c"
    break;

  case 3: /* c_file: BEFORE_MAIN MAIN LC $@1 STATEMENTS RC  */
#line 56 "yacc.y"
                                                                                              { printf("}");printf("\n/*end of main function*/\n"); }
#line 1585 "y.tab.c"
    break;

  case 4: /* c_file: %empty  */
#line 57 "yacc.y"
                          {printf("\n"); exit(2);}
#line 1591 "y.tab.c"
    break;

  case 9: /* BEFORE_MAIN: %empty  */
#line 64 "yacc.y"
                                              {}
#line 1597 "y.tab.c"
    break;

  case 12: /* $@2: %empty  */
#line 83 "yacc.y"
                            {printf("const ");}
#line 1603 "y.tab.c"
    break;

  case 13: /* $@3: %empty  */
#line 83 "yacc.y"
                                                    {printf("%s = ", yylval.var_name);}
#line 1609 "y.tab.c"
    break;

  case 14: /* DEFINE_DECLARATION: DEFINE $@2 VAR $@3 TERMINAL  */
#line 83 "yacc.y"
                                                                                                 {printf(";\n");}
#line 1615 "y.tab.c"
    break;

  case 15: /* $@4: %empty  */
#line 86 "yacc.y"
                      { printf("let %s", yylval.var_name);}
#line 1621 "y.tab.c"
    break;

  case 16: /* VAR_DECLARATION: VAR $@4 SEMICOLON_NT  */
#line 86 "yacc.y"
                                                                         {printf("\n");}
#line 1627 "y.tab.c"
    break;

  case 17: /* $@5: %empty  */
#line 87 "yacc.y"
                                      { printf("let %s", yylval.var_name);}
#line 1633 "y.tab.c"
    break;

  case 18: /* $@6: %empty  */
#line 87 "yacc.y"
                                                                                       {printf(" = ");}
#line 1639 "y.tab.c"
    break;

  case 19: /* VAR_DECLARATION: VAR $@5 ASSIGNMENT $@6 TERMINAL SEMICOLON_NT  */
#line 87 "yacc.y"
                                                                                                                              {printf("\n");}
#line 1645 "y.tab.c"
    break;

  case 20: /* $@7: %empty  */
#line 88 "yacc.y"
                                      { printf("let %s", yylval.var_name);}
#line 1651 "y.tab.c"
    break;

  case 21: /* VAR_DECLARATION: VAR $@7 ARRAY_DIMENSION ARRAY_ASSIGNMENT SEMICOLON_NT  */
#line 88 "yacc.y"
                                                                                                                           {printf("\n");}
#line 1657 "y.tab.c"
    break;

  case 22: /* $@8: %empty  */
#line 91 "yacc.y"
                               { printf("function %s", yylval.var_name);}
#line 1663 "y.tab.c"
    break;

  case 23: /* $@9: %empty  */
#line 91 "yacc.y"
                                                                             {printf("(");}
#line 1669 "y.tab.c"
    break;

  case 24: /* $@10: %empty  */
#line 91 "yacc.y"
                                                                                                          {printf(") ");}
#line 1675 "y.tab.c"
    break;

  case 25: /* $@11: %empty  */
#line 91 "yacc.y"
                                                                                                                             {printf(" {\n"); tab_counter++;}
#line 1681 "y.tab.c"
    break;

  case 26: /* FUNCTION_DECLARATION: VAR $@8 LP $@9 PARAMETERS RP $@10 LC $@11 STATEMENTS RC  */
#line 91 "yacc.y"
                                                                                                                                                                            {tab_counter--;print_tabs(); printf("}\n");}
#line 1687 "y.tab.c"
    break;

  case 32: /* ARRAY_ASSIGNMENT: ASSIGNMENT  */
#line 103 "yacc.y"
                                     {printf(" = ");}
#line 1693 "y.tab.c"
    break;

  case 34: /* $@12: %empty  */
#line 115 "yacc.y"
                           {printf("%s", yylval.var_name);}
#line 1699 "y.tab.c"
    break;

  case 36: /* $@13: %empty  */
#line 116 "yacc.y"
                               {printf(", ");}
#line 1705 "y.tab.c"
    break;

  case 37: /* $@14: %empty  */
#line 116 "yacc.y"
                                                        {printf("%s", yylval.var_name);}
#line 1711 "y.tab.c"
    break;

  case 40: /* $@15: %empty  */
#line 120 "yacc.y"
                                           {printf("let %s", yylval.var_name);}
#line 1717 "y.tab.c"
    break;

  case 41: /* $@16: %empty  */
#line 120 "yacc.y"
                                                                                           {printf(" = ");}
#line 1723 "y.tab.c"
    break;

  case 43: /* $@17: %empty  */
#line 121 "yacc.y"
                                                                      {printf("%s", yylval.var_name);}
#line 1729 "y.tab.c"
    break;

  case 44: /* $@18: %empty  */
#line 121 "yacc.y"
                                                                                                                  {printf(" = ");}
#line 1735 "y.tab.c"
    break;

  case 46: /* EXPRESSION_DECLARATION_OR_NoDECL: VAR  */
#line 122 "yacc.y"
                                                                      { printf("%s", yylval.var_name);}
#line 1741 "y.tab.c"
    break;

  case 50: /* $@19: %empty  */
#line 135 "yacc.y"
                      { printf("%s",yylval.var_name);}
#line 1747 "y.tab.c"
    break;

  case 51: /* $@20: %empty  */
#line 135 "yacc.y"
                                                                  {printf(" = ");}
#line 1753 "y.tab.c"
    break;

  case 52: /* VAR_OR_FUNC_USE: VAR $@19 ASSIGNMENT $@20 EXPRESSION_NT SEMICOLON_NT  */
#line 135 "yacc.y"
                                                                                                               { printf("\n");}
#line 1759 "y.tab.c"
    break;

  case 53: /* $@21: %empty  */
#line 136 "yacc.y"
                                                             {printf("%s",yylval.var_name);}
#line 1765 "y.tab.c"
    break;

  case 54: /* $@22: %empty  */
#line 136 "yacc.y"
                                                                                                 { printf("("); }
#line 1771 "y.tab.c"
    break;

  case 55: /* $@23: %empty  */
#line 136 "yacc.y"
                                                                                                                                { printf(")"); }
#line 1777 "y.tab.c"
    break;

  case 56: /* VAR_OR_FUNC_USE: VAR $@21 LP $@22 PARAMETERS RP $@23 SEMICOLON_NT  */
#line 136 "yacc.y"
                                                                                                                                                              { printf("\n");}
#line 1783 "y.tab.c"
    break;

  case 58: /* $@24: %empty  */
#line 146 "yacc.y"
              {print_tabs();}
#line 1789 "y.tab.c"
    break;

  case 59: /* STATEMENTS: $@24 VAR_OR_FUNC_USE STATEMENTS  */
#line 146 "yacc.y"
                                                        {}
#line 1795 "y.tab.c"
    break;

  case 60: /* $@25: %empty  */
#line 147 "yacc.y"
                          {print_tabs();}
#line 1801 "y.tab.c"
    break;

  case 61: /* STATEMENTS: $@25 IF_BLOCK STATEMENTS  */
#line 147 "yacc.y"
                                                             {}
#line 1807 "y.tab.c"
    break;

  case 62: /* $@26: %empty  */
#line 148 "yacc.y"
                          {print_tabs();}
#line 1813 "y.tab.c"
    break;

  case 63: /* STATEMENTS: $@26 WHILE_BLOCK STATEMENTS  */
#line 148 "yacc.y"
                                                                 {}
#line 1819 "y.tab.c"
    break;

  case 64: /* $@27: %empty  */
#line 149 "yacc.y"
                          {print_tabs();}
#line 1825 "y.tab.c"
    break;

  case 65: /* STATEMENTS: $@27 DO_WHILE_BLOCK STATEMENTS  */
#line 149 "yacc.y"
                                                                    {}
#line 1831 "y.tab.c"
    break;

  case 66: /* $@28: %empty  */
#line 150 "yacc.y"
                          {print_tabs();}
#line 1837 "y.tab.c"
    break;

  case 67: /* STATEMENTS: $@28 FOR_BLOCK STATEMENTS  */
#line 150 "yacc.y"
                                                              {}
#line 1843 "y.tab.c"
    break;

  case 68: /* $@29: %empty  */
#line 151 "yacc.y"
              {print_tabs();}
#line 1849 "y.tab.c"
    break;

  case 69: /* STATEMENTS: $@29 COMMENT STATEMENTS  */
#line 151 "yacc.y"
                                                {}
#line 1855 "y.tab.c"
    break;

  case 71: /* STATEMENTS: %empty  */
#line 153 "yacc.y"
                    { }
#line 1861 "y.tab.c"
    break;

  case 72: /* $@30: %empty  */
#line 161 "yacc.y"
                    {printf("if (");}
#line 1867 "y.tab.c"
    break;

  case 73: /* $@31: %empty  */
#line 161 "yacc.y"
                                                          {  printf(") {\n"); tab_counter++;}
#line 1873 "y.tab.c"
    break;

  case 74: /* $@32: %empty  */
#line 161 "yacc.y"
                                                                                                            {tab_counter--; print_tabs(); printf("}\n");}
#line 1879 "y.tab.c"
    break;

  case 76: /* $@33: %empty  */
#line 164 "yacc.y"
                            {print_tabs(); printf("else if (");}
#line 1885 "y.tab.c"
    break;

  case 77: /* $@34: %empty  */
#line 164 "yacc.y"
                                                                                   {printf(")");}
#line 1891 "y.tab.c"
    break;

  case 78: /* $@35: %empty  */
#line 164 "yacc.y"
                                                                                                     {printf("{\n"); tab_counter++;}
#line 1897 "y.tab.c"
    break;

  case 79: /* $@36: %empty  */
#line 164 "yacc.y"
                                                                                                                                                   {tab_counter--; print_tabs(); printf("}\n"); }
#line 1903 "y.tab.c"
    break;

  case 81: /* $@37: %empty  */
#line 165 "yacc.y"
                                           {print_tabs();tab_counter++;printf("else {\n"); }
#line 1909 "y.tab.c"
    break;

  case 82: /* ELSEIF_OR_ELSE: ELSE LC $@37 STATEMENTS RC  */
#line 165 "yacc.y"
                                                                                                           {tab_counter--; print_tabs(); printf("}\n"); }
#line 1915 "y.tab.c"
    break;

  case 83: /* ELSEIF_OR_ELSE: %empty  */
#line 166 "yacc.y"
                                                                                                             {printf("\n");}
#line 1921 "y.tab.c"
    break;

  case 84: /* $@38: %empty  */
#line 174 "yacc.y"
                         {printf("for(");}
#line 1927 "y.tab.c"
    break;

  case 85: /* $@39: %empty  */
#line 174 "yacc.y"
                                                                      {printf("){\n"); tab_counter++;}
#line 1933 "y.tab.c"
    break;

  case 86: /* FOR_BLOCK: FOR LP $@38 FOR_BLOCK_PARAMETERS RP LC $@39 STATEMENTS RC  */
#line 174 "yacc.y"
                                                                                                                     {tab_counter--; print_tabs(); printf("}\n");}
#line 1939 "y.tab.c"
    break;

  case 87: /* $@40: %empty  */
#line 177 "yacc.y"
                       {printf("while(");}
#line 1945 "y.tab.c"
    break;

  case 88: /* $@41: %empty  */
#line 177 "yacc.y"
                                                               {printf("){\n"); tab_counter++;}
#line 1951 "y.tab.c"
    break;

  case 89: /* WHILE_BLOCK: WHILE LP $@40 EXPRESSION_NT RP LC $@41 STATEMENTS RC  */
#line 177 "yacc.y"
                                                                                                              {tab_counter--; print_tabs(); printf("}\n"); }
#line 1957 "y.tab.c"
    break;

  case 90: /* $@42: %empty  */
#line 180 "yacc.y"
                        {printf("do{\n"); tab_counter++;}
#line 1963 "y.tab.c"
    break;

  case 91: /* $@43: %empty  */
#line 180 "yacc.y"
                                                                                 {tab_counter--;print_tabs(); printf("}while(");}
#line 1969 "y.tab.c"
    break;

  case 92: /* $@44: %empty  */
#line 180 "yacc.y"
                                                                                                                                                   {printf(")");}
#line 1975 "y.tab.c"
    break;

  case 93: /* DO_WHILE_BLOCK: DO LC $@42 STATEMENTS RC WHILE LP $@43 EXPRESSION_NT RP $@44 SEMICOLON_NT  */
#line 180 "yacc.y"
                                                                                                                                                                               {printf("\n");}
#line 1981 "y.tab.c"
    break;

  case 94: /* TERMINAL: NUMBER  */
#line 183 "yacc.y"
                         { printf("%s", yylval.var_name); }
#line 1987 "y.tab.c"
    break;

  case 95: /* TERMINAL: QUOTED_STRING  */
#line 184 "yacc.y"
                                        { printf("%s", yylval.var_name); }
#line 1993 "y.tab.c"
    break;

  case 96: /* COMMENT: ILCOMMENT  */
#line 187 "yacc.y"
                            { printf("%s\n", yylval.var_name); }
#line 1999 "y.tab.c"
    break;

  case 97: /* COMMENT: MLCOMMENT  */
#line 188 "yacc.y"
                            { printf("%s", yylval.var_name); }
#line 2005 "y.tab.c"
    break;

  case 98: /* TYPE: INT  */
#line 191 "yacc.y"
                                { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type);  }
#line 2011 "y.tab.c"
    break;

  case 99: /* TYPE: CHAR  */
#line 192 "yacc.y"
                                        { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type); 	}
#line 2017 "y.tab.c"
    break;

  case 100: /* TYPE: FLOAT  */
#line 193 "yacc.y"
                                        { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type); 	}
#line 2023 "y.tab.c"
    break;

  case 101: /* TYPE: DOUBLE  */
#line 194 "yacc.y"
                                        { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type); 	}
#line 2029 "y.tab.c"
    break;

  case 102: /* TYPE: VOID  */
#line 195 "yacc.y"
                                        { }
#line 2035 "y.tab.c"
    break;

  case 103: /* $@45: %empty  */
#line 202 "yacc.y"
                             {printf("== ");}
#line 2041 "y.tab.c"
    break;

  case 105: /* $@46: %empty  */
#line 203 "yacc.y"
                                         {printf("!= ");}
#line 2047 "y.tab.c"
    break;

  case 107: /* $@47: %empty  */
#line 204 "yacc.y"
                                        {printf("> ");}
#line 2053 "y.tab.c"
    break;

  case 109: /* $@48: %empty  */
#line 205 "yacc.y"
                                        {printf("< ");}
#line 2059 "y.tab.c"
    break;

  case 111: /* $@49: %empty  */
#line 206 "yacc.y"
                                         {printf("<= ");}
#line 2065 "y.tab.c"
    break;

  case 113: /* $@50: %empty  */
#line 207 "yacc.y"
                                         {printf(">= ");}
#line 2071 "y.tab.c"
    break;

  case 115: /* $@51: %empty  */
#line 209 "yacc.y"
                                          {printf("&& ");}
#line 2077 "y.tab.c"
    break;

  case 117: /* $@52: %empty  */
#line 210 "yacc.y"
                                         {printf("|| ");}
#line 2083 "y.tab.c"
    break;

  case 119: /* $@53: %empty  */
#line 211 "yacc.y"
                               {printf("!");}
#line 2089 "y.tab.c"
    break;

  case 121: /* $@54: %empty  */
#line 213 "yacc.y"
                                          {printf("+ ");}
#line 2095 "y.tab.c"
    break;

  case 123: /* $@55: %empty  */
#line 214 "yacc.y"
                                           {printf("- ");}
#line 2101 "y.tab.c"
    break;

  case 125: /* $@56: %empty  */
#line 215 "yacc.y"
                                         {printf("* ");}
#line 2107 "y.tab.c"
    break;

  case 127: /* $@57: %empty  */
#line 216 "yacc.y"
                                         {printf("/ ");}
#line 2113 "y.tab.c"
    break;

  case 129: /* $@58: %empty  */
#line 217 "yacc.y"
                                         {printf("%% ");}
#line 2119 "y.tab.c"
    break;

  case 131: /* EXPRESSION: EXPRESSION PLUS PLUS  */
#line 218 "yacc.y"
                                               {printf("++");}
#line 2125 "y.tab.c"
    break;

  case 132: /* $@59: %empty  */
#line 219 "yacc.y"
                                    {printf("++");}
#line 2131 "y.tab.c"
    break;

  case 134: /* EXPRESSION: EXPRESSION MINUS MINUS  */
#line 220 "yacc.y"
                                                 {printf("--");}
#line 2137 "y.tab.c"
    break;

  case 135: /* $@60: %empty  */
#line 221 "yacc.y"
                                      {printf("--");}
#line 2143 "y.tab.c"
    break;

  case 137: /* $@61: %empty  */
#line 223 "yacc.y"
                             {printf("(");}
#line 2149 "y.tab.c"
    break;

  case 138: /* EXPRESSION: LP $@61 EXPRESSION RP  */
#line 223 "yacc.y"
                                                          {printf(") ");}
#line 2155 "y.tab.c"
    break;

  case 139: /* EXPRESSION: VAR  */
#line 225 "yacc.y"
                              {printf("%s", yylval.var_name);}
#line 2161 "y.tab.c"
    break;

  case 141: /* SEMICOLON_NT: SEMICOLON  */
#line 235 "yacc.y"
                        { printf(";");}
#line 2167 "y.tab.c"
    break;

  case 142: /* SEMICOLON_NT: %empty  */
#line 236 "yacc.y"
                                      {yyerror("syntax error : missing ';'\n");}
#line 2173 "y.tab.c"
    break;

  case 143: /* SEMICOLON_OR_ERROR: SEMICOLON  */
#line 239 "yacc.y"
                              { printf(";");}
#line 2179 "y.tab.c"
    break;

  case 144: /* SEMICOLON_OR_ERROR: COMA  */
#line 240 "yacc.y"
                                         { printf(","); printf("\nSYNTAX_ERROR: You put a ',', must be a ';'!\n");}
#line 2185 "y.tab.c"
    break;

  case 145: /* SEMICOLON_OR_ERROR: COLON  */
#line 241 "yacc.y"
                                          { printf(":"); printf("\nSYNTAX_ERROR: You put a ':', must be a ';'!\n");}
#line 2191 "y.tab.c"
    break;

  case 147: /* $@62: %empty  */
#line 245 "yacc.y"
                                          { printf("%s ", yylval.var_name); printf("= ");}
#line 2197 "y.tab.c"
    break;

  case 149: /* $@63: %empty  */
#line 246 "yacc.y"
                                                 {printf("= ");}
#line 2203 "y.tab.c"
    break;

  case 150: /* EXPRESSION_NT: EXPRESSION ASSIGNMENT $@63 EXPRESSION  */
#line 246 "yacc.y"
                                                                            {yyerror("Maybe you mean '==' operator?");}
#line 2209 "y.tab.c"
    break;

  case 151: /* EXPRESSION_NT: %empty  */
#line 247 "yacc.y"
                                         {yyerror("expected expression before the token");}
#line 2215 "y.tab.c"
    break;


#line 2219 "y.tab.c"

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

#line 253 "yacc.y"


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
