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
	#include "verificacion_tipo.h"
	#define JSFILE "traducido.js"
	#define VAR_NAME_LEN 32
	#define CANT_VARIABLES 50
	#define SCOPE_SIZE 50
	#define NOVALUE -99
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
	extern void anhadirExpresion(char type);
	char var_list[CANT_VARIABLES][VAR_NAME_LEN];	
	int string_or_var[CANT_VARIABLES];

	int lVarType = NOVALUE; // Guarda el tipo  de dato de la variable del lado izquierdo de una asignacion (si es -1 es porque no guarda nada)
	char expresion[200]; // para guardar los tipos de datos de la expresion del lado derecho  es decir 2+2 se guardaria '0' ya que es un int
	int topeExpresion = 0; // el tope o indice actual del vector expresion
	//extern int *yytext;

	FILE *js_file;

#line 110 "y.tab.c"

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
    QUOTED_CHAR = 290,             /* QUOTED_CHAR  */
    LC = 291,                      /* LC  */
    RC = 292,                      /* RC  */
    COMA = 293,                    /* COMA  */
    RB = 294,                      /* RB  */
    LB = 295,                      /* LB  */
    RP = 296,                      /* RP  */
    LP = 297,                      /* LP  */
    SEMICOLON = 298,               /* SEMICOLON  */
    COLON = 299,                   /* COLON  */
    QM = 300,                      /* QM  */
    ILCOMMENT = 301,               /* ILCOMMENT  */
    MLCOMMENT = 302,               /* MLCOMMENT  */
    NOT = 303,                     /* NOT  */
    DEQ = 304,                     /* DEQ  */
    INT = 305,                     /* INT  */
    CHAR = 306,                    /* CHAR  */
    FLOAT = 307,                   /* FLOAT  */
    DOUBLE = 308                   /* DOUBLE  */
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
#define QUOTED_CHAR 290
#define LC 291
#define RC 292
#define COMA 293
#define RB 294
#define LB 295
#define RP 296
#define LP 297
#define SEMICOLON 298
#define COLON 299
#define QM 300
#define ILCOMMENT 301
#define MLCOMMENT 302
#define NOT 303
#define DEQ 304
#define INT 305
#define CHAR 306
#define FLOAT 307
#define DOUBLE 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 40 "yacc.y"

int data_type;
char var_name[30];

#line 271 "y.tab.c"

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
  YYSYMBOL_QUOTED_CHAR = 35,               /* QUOTED_CHAR  */
  YYSYMBOL_LC = 36,                        /* LC  */
  YYSYMBOL_RC = 37,                        /* RC  */
  YYSYMBOL_COMA = 38,                      /* COMA  */
  YYSYMBOL_RB = 39,                        /* RB  */
  YYSYMBOL_LB = 40,                        /* LB  */
  YYSYMBOL_RP = 41,                        /* RP  */
  YYSYMBOL_LP = 42,                        /* LP  */
  YYSYMBOL_SEMICOLON = 43,                 /* SEMICOLON  */
  YYSYMBOL_COLON = 44,                     /* COLON  */
  YYSYMBOL_QM = 45,                        /* QM  */
  YYSYMBOL_ILCOMMENT = 46,                 /* ILCOMMENT  */
  YYSYMBOL_MLCOMMENT = 47,                 /* MLCOMMENT  */
  YYSYMBOL_NOT = 48,                       /* NOT  */
  YYSYMBOL_DEQ = 49,                       /* DEQ  */
  YYSYMBOL_INT = 50,                       /* INT  */
  YYSYMBOL_CHAR = 51,                      /* CHAR  */
  YYSYMBOL_FLOAT = 52,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 53,                    /* DOUBLE  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_c_file = 55,                    /* c_file  */
  YYSYMBOL_56_1 = 56,                      /* $@1  */
  YYSYMBOL_57_2 = 57,                      /* $@2  */
  YYSYMBOL_BEFORE_MAIN = 58,               /* BEFORE_MAIN  */
  YYSYMBOL_DECLARATION = 59,               /* DECLARATION  */
  YYSYMBOL_DEFINE_DECLARATION = 60,        /* DEFINE_DECLARATION  */
  YYSYMBOL_61_3 = 61,                      /* $@3  */
  YYSYMBOL_62_4 = 62,                      /* $@4  */
  YYSYMBOL_VAR_DECLARATION = 63,           /* VAR_DECLARATION  */
  YYSYMBOL_64_5 = 64,                      /* $@5  */
  YYSYMBOL_65_6 = 65,                      /* $@6  */
  YYSYMBOL_66_7 = 66,                      /* $@7  */
  YYSYMBOL_67_8 = 67,                      /* $@8  */
  YYSYMBOL_FUNCTION_DECLARATION = 68,      /* FUNCTION_DECLARATION  */
  YYSYMBOL_69_9 = 69,                      /* $@9  */
  YYSYMBOL_70_10 = 70,                     /* $@10  */
  YYSYMBOL_71_11 = 71,                     /* $@11  */
  YYSYMBOL_72_12 = 72,                     /* $@12  */
  YYSYMBOL_ARRAY_DIMENSION = 73,           /* ARRAY_DIMENSION  */
  YYSYMBOL_ARRAY_SIZE = 74,                /* ARRAY_SIZE  */
  YYSYMBOL_ARRAY_ASSIGNMENT = 75,          /* ARRAY_ASSIGNMENT  */
  YYSYMBOL_PARAMETERS = 76,                /* PARAMETERS  */
  YYSYMBOL_77_13 = 77,                     /* $@13  */
  YYSYMBOL_78_14 = 78,                     /* $@14  */
  YYSYMBOL_79_15 = 79,                     /* $@15  */
  YYSYMBOL_EXPRESSION_DECLARATION_OR_NoDECL = 80, /* EXPRESSION_DECLARATION_OR_NoDECL  */
  YYSYMBOL_81_16 = 81,                     /* $@16  */
  YYSYMBOL_82_17 = 82,                     /* $@17  */
  YYSYMBOL_83_18 = 83,                     /* $@18  */
  YYSYMBOL_84_19 = 84,                     /* $@19  */
  YYSYMBOL_FOR_BLOCK_PARAMETERS = 85,      /* FOR_BLOCK_PARAMETERS  */
  YYSYMBOL_VAR_OR_FUNC_USE = 86,           /* VAR_OR_FUNC_USE  */
  YYSYMBOL_87_20 = 87,                     /* $@20  */
  YYSYMBOL_88_21 = 88,                     /* $@21  */
  YYSYMBOL_89_22 = 89,                     /* $@22  */
  YYSYMBOL_90_23 = 90,                     /* $@23  */
  YYSYMBOL_91_24 = 91,                     /* $@24  */
  YYSYMBOL_92_25 = 92,                     /* $@25  */
  YYSYMBOL_STATEMENTS = 93,                /* STATEMENTS  */
  YYSYMBOL_94_26 = 94,                     /* $@26  */
  YYSYMBOL_95_27 = 95,                     /* $@27  */
  YYSYMBOL_96_28 = 96,                     /* $@28  */
  YYSYMBOL_97_29 = 97,                     /* $@29  */
  YYSYMBOL_98_30 = 98,                     /* $@30  */
  YYSYMBOL_99_31 = 99,                     /* $@31  */
  YYSYMBOL_IF_BLOCK = 100,                 /* IF_BLOCK  */
  YYSYMBOL_101_32 = 101,                   /* $@32  */
  YYSYMBOL_102_33 = 102,                   /* $@33  */
  YYSYMBOL_103_34 = 103,                   /* $@34  */
  YYSYMBOL_ELSEIF_OR_ELSE = 104,           /* ELSEIF_OR_ELSE  */
  YYSYMBOL_105_35 = 105,                   /* $@35  */
  YYSYMBOL_106_36 = 106,                   /* $@36  */
  YYSYMBOL_107_37 = 107,                   /* $@37  */
  YYSYMBOL_108_38 = 108,                   /* $@38  */
  YYSYMBOL_109_39 = 109,                   /* $@39  */
  YYSYMBOL_FOR_BLOCK = 110,                /* FOR_BLOCK  */
  YYSYMBOL_111_40 = 111,                   /* $@40  */
  YYSYMBOL_112_41 = 112,                   /* $@41  */
  YYSYMBOL_WHILE_BLOCK = 113,              /* WHILE_BLOCK  */
  YYSYMBOL_114_42 = 114,                   /* $@42  */
  YYSYMBOL_115_43 = 115,                   /* $@43  */
  YYSYMBOL_DO_WHILE_BLOCK = 116,           /* DO_WHILE_BLOCK  */
  YYSYMBOL_117_44 = 117,                   /* $@44  */
  YYSYMBOL_118_45 = 118,                   /* $@45  */
  YYSYMBOL_119_46 = 119,                   /* $@46  */
  YYSYMBOL_TERMINAL = 120,                 /* TERMINAL  */
  YYSYMBOL_COMMENT = 121,                  /* COMMENT  */
  YYSYMBOL_TYPE = 122,                     /* TYPE  */
  YYSYMBOL_EXPRESSION = 123,               /* EXPRESSION  */
  YYSYMBOL_124_47 = 124,                   /* $@47  */
  YYSYMBOL_125_48 = 125,                   /* $@48  */
  YYSYMBOL_126_49 = 126,                   /* $@49  */
  YYSYMBOL_127_50 = 127,                   /* $@50  */
  YYSYMBOL_128_51 = 128,                   /* $@51  */
  YYSYMBOL_129_52 = 129,                   /* $@52  */
  YYSYMBOL_130_53 = 130,                   /* $@53  */
  YYSYMBOL_131_54 = 131,                   /* $@54  */
  YYSYMBOL_132_55 = 132,                   /* $@55  */
  YYSYMBOL_133_56 = 133,                   /* $@56  */
  YYSYMBOL_134_57 = 134,                   /* $@57  */
  YYSYMBOL_135_58 = 135,                   /* $@58  */
  YYSYMBOL_136_59 = 136,                   /* $@59  */
  YYSYMBOL_137_60 = 137,                   /* $@60  */
  YYSYMBOL_138_61 = 138,                   /* $@61  */
  YYSYMBOL_139_62 = 139,                   /* $@62  */
  YYSYMBOL_140_63 = 140,                   /* $@63  */
  YYSYMBOL_SEMICOLON_NT = 141,             /* SEMICOLON_NT  */
  YYSYMBOL_SEMICOLON_OR_ERROR = 142,       /* SEMICOLON_OR_ERROR  */
  YYSYMBOL_EXPRESSION_NT = 143,            /* EXPRESSION_NT  */
  YYSYMBOL_144_64 = 144,                   /* $@64  */
  YYSYMBOL_145_65 = 145,                   /* $@65  */
  YYSYMBOL_DELIMITER = 146                 /* DELIMITER  */
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
#define YYLAST   339

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  93
/* YYNRULES -- Number of rules.  */
#define YYNRULES  157
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  263

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   308


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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    70,    70,    70,    70,    71,    74,    75,    76,    77,
      78,    79,    92,    93,    98,    98,    98,   101,   101,   102,
     102,   102,   103,   103,   106,   106,   106,   106,   106,   109,
     110,   113,   114,   115,   118,   119,   130,   130,   131,   131,
     131,   132,   135,   135,   135,   136,   136,   136,   137,   138,
     139,   142,   150,   150,   150,   150,   151,   151,   151,   151,
     152,   161,   161,   162,   162,   163,   163,   164,   164,   165,
     165,   166,   166,   167,   168,   176,   176,   176,   176,   179,
     179,   179,   179,   179,   180,   180,   181,   189,   189,   189,
     192,   192,   192,   195,   195,   195,   195,   198,   199,   200,
     203,   204,   207,   208,   209,   210,   211,   218,   218,   219,
     219,   220,   220,   221,   221,   222,   222,   223,   223,   225,
     225,   226,   226,   227,   227,   229,   229,   230,   230,   231,
     231,   232,   232,   233,   233,   234,   235,   235,   236,   237,
     237,   239,   239,   241,   243,   251,   252,   255,   256,   257,
     260,   261,   261,   262,   262,   263,   266,   267
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
  "DEFINE", "INCLUDE", "NUMBER", "QUOTED_STRING", "QUOTED_CHAR", "LC",
  "RC", "COMA", "RB", "LB", "RP", "LP", "SEMICOLON", "COLON", "QM",
  "ILCOMMENT", "MLCOMMENT", "NOT", "DEQ", "INT", "CHAR", "FLOAT", "DOUBLE",
  "$accept", "c_file", "$@1", "$@2", "BEFORE_MAIN", "DECLARATION",
  "DEFINE_DECLARATION", "$@3", "$@4", "VAR_DECLARATION", "$@5", "$@6",
  "$@7", "$@8", "FUNCTION_DECLARATION", "$@9", "$@10", "$@11", "$@12",
  "ARRAY_DIMENSION", "ARRAY_SIZE", "ARRAY_ASSIGNMENT", "PARAMETERS",
  "$@13", "$@14", "$@15", "EXPRESSION_DECLARATION_OR_NoDECL", "$@16",
  "$@17", "$@18", "$@19", "FOR_BLOCK_PARAMETERS", "VAR_OR_FUNC_USE",
  "$@20", "$@21", "$@22", "$@23", "$@24", "$@25", "STATEMENTS", "$@26",
  "$@27", "$@28", "$@29", "$@30", "$@31", "IF_BLOCK", "$@32", "$@33",
  "$@34", "ELSEIF_OR_ELSE", "$@35", "$@36", "$@37", "$@38", "$@39",
  "FOR_BLOCK", "$@40", "$@41", "WHILE_BLOCK", "$@42", "$@43",
  "DO_WHILE_BLOCK", "$@44", "$@45", "$@46", "TERMINAL", "COMMENT", "TYPE",
  "EXPRESSION", "$@47", "$@48", "$@49", "$@50", "$@51", "$@52", "$@53",
  "$@54", "$@55", "$@56", "$@57", "$@58", "$@59", "$@60", "$@61", "$@62",
  "$@63", "SEMICOLON_NT", "SEMICOLON_OR_ERROR", "EXPRESSION_NT", "$@64",
  "$@65", "DELIMITER", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-107)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-75)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,    24,   184,  -107,    -5,  -107,  -107,   160,  -107,  -107,
    -107,  -107,  -107,  -107,    36,   160,   160,   160,    32,  -107,
    -107,   160,    54,  -107,    52,  -107,  -107,  -107,     2,  -107,
    -107,  -107,  -107,  -107,    47,    41,    51,    53,   -12,   123,
    -107,  -107,  -107,    27,    75,  -107,  -107,  -107,  -107,  -107,
      -5,    59,    50,    70,    73,    81,    85,    -7,   -12,  -107,
    -107,    71,  -107,    47,    -1,   201,  -107,    66,   123,   108,
      72,   123,    74,   123,    79,   123,    76,   123,   123,    47,
      51,  -107,  -107,    78,   118,  -107,   104,    86,  -107,    16,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,    84,  -107,  -107,  -107,  -107,    12,    12,   123,
     236,   120,    91,    -1,    12,    -1,   112,  -107,   119,   117,
    -107,  -107,   298,    92,    97,   103,    69,    23,   101,   143,
     322,  -107,  -107,  -107,  -107,   110,  -107,   185,  -107,  -107,
     185,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,   141,
     142,  -107,  -107,  -107,  -107,   122,   126,   129,   145,  -107,
    -107,  -107,   236,   128,  -107,    -1,   123,    47,  -107,   185,
    -107,   322,   185,   185,   285,   185,   185,   185,   185,   185,
     185,   185,   185,  -107,   185,  -107,   185,   185,   185,   185,
     185,  -107,  -107,   124,  -107,    23,  -107,   147,  -107,   130,
    -107,    47,   322,   156,   156,  -107,   156,   156,   156,   156,
     156,   156,   156,   322,   156,   156,   156,   156,   156,   322,
     123,   123,  -107,    12,   185,   123,  -107,  -107,  -107,   134,
     135,    12,  -107,   322,   140,    12,  -107,  -107,   137,  -107,
    -107,    35,  -107,   150,   139,  -107,    47,  -107,  -107,  -107,
     123,    12,   146,   152,  -107,  -107,   151,  -107,   123,   157,
    -107,    35,  -107
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,   106,    14,     0,   100,   101,
     102,   103,   104,   105,     0,     0,     0,     0,     0,   157,
     156,     0,     0,     6,     0,     8,     7,     9,    17,    13,
      12,    10,    15,     3,   146,     0,     0,     0,     0,     0,
     145,    18,    20,    33,    35,    25,    97,    99,    98,    16,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
      31,     0,    34,   146,    41,     0,     4,    52,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   146,
      30,    23,    38,     0,     0,    73,     0,     0,    62,    17,
      60,    75,    64,    90,    66,    93,    68,    87,    70,    72,
      21,    29,     0,    26,    36,    53,    57,   155,   155,     0,
      50,     0,     0,    41,   155,    41,   143,   123,     0,     0,
     141,   144,   150,     0,     0,     0,   143,     0,     0,     0,
      49,    39,    27,    37,    54,     0,   151,     0,   136,   139,
       0,   121,   119,   115,   117,   113,   111,   109,   107,   125,
     127,   129,   131,   133,   153,     0,     0,     0,     0,   148,
     147,   149,    50,     0,    42,    41,     0,   146,    58,     0,
     143,   124,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,     0,   138,     0,     0,     0,     0,
       0,    76,    91,     0,    46,     0,    88,     0,    40,     0,
      55,   146,   152,   137,   140,   142,   122,   120,   116,   118,
     114,   112,   110,   108,   126,   128,   130,   132,   134,   154,
       0,     0,    94,   155,     0,     0,    43,    28,    59,     0,
       0,   155,    47,    51,     0,   155,    77,    92,     0,    89,
      44,    86,    95,     0,     0,    78,   146,    84,    79,    96,
       0,   155,     0,     0,    85,    80,     0,    81,     0,     0,
      82,    86,    83
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -107,  -107,  -107,  -107,    -3,  -107,  -107,  -107,  -107,    90,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,   115,
    -107,  -107,   -86,  -107,  -107,  -107,    34,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,   -68,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
     -61,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,   -10,   144,   -21,  -104,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,   -62,    10,  -106,
    -107,  -107,   158
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,    39,    14,    15,    16,    22,    38,    29,
      34,    35,    58,    36,    30,    37,    64,   112,   166,    44,
      61,    63,    83,   113,   102,   165,   127,   197,   235,   158,
     223,   128,    68,    86,   114,   167,    87,   115,   201,    51,
      52,    53,    54,    55,    56,    57,    71,   107,   220,   241,
     245,   251,   256,   258,   261,   250,    77,   110,   225,    73,
     108,   221,    75,   109,   231,   246,   121,    17,    18,   122,
     182,   181,   180,   179,   177,   178,   176,   175,   137,   184,
     186,   187,   188,   189,   172,   173,   140,    41,   162,   123,
     169,   190,    21
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      88,    81,   124,    92,    23,    94,   130,    96,   134,    98,
      99,    -5,    25,    26,    27,   116,   117,   100,    31,     5,
     -19,    46,    47,    48,     3,   118,   119,   133,    49,   135,
      59,    69,    19,   171,   -19,    28,   174,    82,    20,     8,
       9,   125,   -22,    84,   -24,    46,    47,    48,    79,    10,
      11,    12,    13,    67,   120,    24,   -22,    32,   130,    42,
      60,   159,    85,   243,   244,   202,   160,   161,   203,   204,
       5,   206,   207,   208,   209,   210,   211,   212,   213,   198,
     214,   111,   215,   216,   217,   218,   219,   -45,    33,   129,
      40,    43,    84,    62,    84,    45,    66,    70,   199,    72,
      10,    11,    12,    13,     5,   200,    74,   -48,   -56,    76,
      80,    89,   -48,   -48,    91,    95,    93,   232,    97,   103,
     233,   104,   105,   131,    50,   238,   -61,   132,   106,   240,
     136,   139,   138,   155,    10,    11,    12,    13,   156,   228,
     157,   129,   163,   -61,    84,   253,   164,   -69,   -67,   -65,
     -63,   168,   229,   230,   183,   193,   185,   234,   191,    90,
     -74,     4,   192,   194,   196,   226,   222,   227,   148,   -71,
     -71,   236,   237,   -61,   -61,   -61,   -61,   239,   242,   -11,
       5,   248,   252,   254,   249,     4,   247,   257,   170,   117,
     259,     6,     7,   255,   260,   101,   195,   -11,   118,   119,
     262,    78,     4,   -11,     5,   224,     8,     9,    65,     0,
      10,    11,    12,    13,     0,     6,     7,     0,    46,    47,
      48,     5,     0,     0,     0,     0,     0,   120,     0,     0,
       8,     9,     6,     7,    10,    11,    12,    13,   -11,   126,
     117,     0,     0,     0,     0,     0,     0,     8,     9,   118,
     119,    10,    11,    12,    13,     0,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    46,
      47,    48,     0,     0,     0,     0,     0,     0,   120,     0,
       0,     0,     0,     0,     0,     0,    10,    11,    12,    13,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   205,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153
};

static const yytype_int16 yycheck[] =
{
      68,    63,   108,    71,     7,    73,   110,    75,   114,    77,
      78,     0,    15,    16,    17,     3,     4,    79,    21,    20,
      18,    33,    34,    35,     0,    13,    14,   113,    38,   115,
       3,    52,    37,   137,    18,     3,   140,    38,    43,    46,
      47,   109,    40,    64,    42,    33,    34,    35,    58,    50,
      51,    52,    53,     3,    42,    19,    40,     3,   162,    18,
      33,    38,    65,    28,    29,   169,    43,    44,   172,   173,
      20,   175,   176,   177,   178,   179,   180,   181,   182,   165,
     184,   102,   186,   187,   188,   189,   190,    18,    36,   110,
      43,    40,   113,    18,   115,    42,    37,    27,   166,    26,
      50,    51,    52,    53,    20,   167,    25,    38,    42,    24,
      39,     3,    43,    44,    42,    36,    42,   223,    42,    41,
     224,     3,    18,     3,     1,   231,     3,    36,    42,   235,
      18,    14,    13,    41,    50,    51,    52,    53,    41,   201,
      37,   162,    41,    20,   165,   251,     3,    24,    25,    26,
      27,    41,   220,   221,    13,    26,    14,   225,    36,    69,
      37,     1,    36,    18,    36,    18,    42,    37,    12,    46,
      47,    37,    37,    50,    51,    52,    53,    37,    41,    19,
      20,    42,   250,    37,   246,     1,    36,    36,     3,     4,
     258,    31,    32,    41,    37,    80,   162,    37,    13,    14,
     261,    57,     1,    19,    20,   195,    46,    47,    50,    -1,
      50,    51,    52,    53,    -1,    31,    32,    -1,    33,    34,
      35,    20,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      46,    47,    31,    32,    50,    51,    52,    53,    37,     3,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    13,
      14,    50,    51,    52,    53,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    55,    56,     0,     1,    20,    31,    32,    46,    47,
      50,    51,    52,    53,    58,    59,    60,   121,   122,    37,
      43,   146,    61,    58,    19,    58,    58,    58,     3,    63,
      68,    58,     3,    36,    64,    65,    67,    69,    62,    57,
      43,   141,    18,    40,    73,    42,    33,    34,    35,   120,
       1,    93,    94,    95,    96,    97,    98,    99,    66,     3,
      33,    74,    18,    75,    70,   146,    37,     3,    86,   122,
      27,   100,    26,   113,    25,   116,    24,   110,   121,   120,
      39,   141,    38,    76,   122,    58,    87,    90,    93,     3,
      63,    42,    93,    42,    93,    36,    93,    42,    93,    93,
     141,    73,    78,    41,     3,    18,    42,   101,   114,   117,
     111,   122,    71,    77,    88,    91,     3,     4,    13,    14,
      42,   120,   123,   143,   143,    93,     3,    80,    85,   122,
     123,     3,    36,    76,   143,    76,    18,   132,    13,    14,
     140,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    41,    41,    37,    83,    38,
      43,    44,   142,    41,     3,    79,    72,    89,    41,   144,
       3,   123,   138,   139,   123,   131,   130,   128,   129,   127,
     126,   125,   124,    13,   133,    14,   134,   135,   136,   137,
     145,    36,    36,    26,    18,    80,    36,    81,    76,    93,
     141,    92,   123,   123,   123,    41,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     102,   115,    42,    84,   142,   112,    18,    37,   141,    93,
      93,   118,   143,   123,    93,    82,    37,    37,   143,    37,
     143,   103,    41,    28,    29,   104,   119,    36,    42,   141,
     109,   105,    93,   143,    37,    41,   106,    36,   107,    93,
      37,   108,   104
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    56,    57,    55,    55,    58,    58,    58,    58,
      58,    58,    59,    59,    61,    62,    60,    64,    63,    65,
      66,    63,    67,    63,    69,    70,    71,    72,    68,    73,
      73,    74,    74,    74,    75,    75,    77,    76,    78,    79,
      76,    76,    81,    82,    80,    83,    84,    80,    80,    80,
      80,    85,    87,    88,    89,    86,    90,    91,    92,    86,
      86,    94,    93,    95,    93,    96,    93,    97,    93,    98,
      93,    99,    93,    93,    93,   101,   102,   103,   100,   105,
     106,   107,   108,   104,   109,   104,   104,   111,   112,   110,
     114,   115,   113,   117,   118,   119,   116,   120,   120,   120,
     121,   121,   122,   122,   122,   122,   122,   124,   123,   125,
     123,   126,   123,   127,   123,   128,   123,   129,   123,   130,
     123,   131,   123,   132,   123,   133,   123,   134,   123,   135,
     123,   136,   123,   137,   123,   123,   138,   123,   123,   139,
     123,   140,   123,   123,   123,   141,   141,   142,   142,   142,
     143,   144,   143,   145,   143,   143,   146,   146
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     7,     0,     2,     2,     2,     2,
       3,     0,     2,     2,     0,     0,     5,     0,     3,     0,
       0,     6,     0,     5,     0,     0,     0,     0,    11,     4,
       3,     1,     1,     0,     1,     0,     0,     4,     0,     0,
       6,     0,     0,     0,     6,     0,     0,     5,     1,     1,
       0,     5,     0,     0,     0,     7,     0,     0,     0,     8,
       2,     0,     3,     0,     3,     0,     3,     0,     3,     0,
       3,     0,     3,     3,     0,     0,     0,     0,    11,     0,
       0,     0,     0,    12,     0,     5,     0,     0,     0,     9,
       0,     0,     9,     0,     0,     0,    12,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     3,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     3,     0,     4,     3,     0,
       4,     0,     4,     1,     1,     1,     0,     1,     1,     1,
       1,     0,     4,     0,     4,     0,     1,     1
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
#line 70 "yacc.y"
              {js_file = fopen(JSFILE, "a");add_to_scope_stack("global");}
#line 1614 "y.tab.c"
    break;

  case 3: /* $@2: %empty  */
#line 70 "yacc.y"
                                                                                               { append_in_jsFile("function main(){\n");add_to_scope_stack("main"); tab_counter++; }
#line 1620 "y.tab.c"
    break;

  case 4: /* c_file: $@1 BEFORE_MAIN MAIN LC $@2 STATEMENTS RC  */
#line 70 "yacc.y"
                                                                                                                                                                                                   { remove_from_scope_stack(); append_in_jsFile("}\n"); remove_from_scope_stack(); fclose(js_file);}
#line 1626 "y.tab.c"
    break;

  case 5: /* c_file: %empty  */
#line 71 "yacc.y"
                          {append_in_jsFile("\n"); exit(2);}
#line 1632 "y.tab.c"
    break;

  case 11: /* BEFORE_MAIN: %empty  */
#line 79 "yacc.y"
                                              {}
#line 1638 "y.tab.c"
    break;

  case 14: /* $@3: %empty  */
#line 98 "yacc.y"
                            {insert_to_table(yylval.var_name,current_data_type);append_in_jsFile("const ");}
#line 1644 "y.tab.c"
    break;

  case 15: /* $@4: %empty  */
#line 98 "yacc.y"
                                                                                                                 {append_in_jsFile(yylval.var_name); append_in_jsFile(" = ");}
#line 1650 "y.tab.c"
    break;

  case 16: /* DEFINE_DECLARATION: DEFINE $@3 VAR $@4 TERMINAL  */
#line 98 "yacc.y"
                                                                                                                                                                                        {append_in_jsFile(";\n");}
#line 1656 "y.tab.c"
    break;

  case 17: /* $@5: %empty  */
#line 101 "yacc.y"
                      { insert_to_table(yylval.var_name,current_data_type); append_in_jsFile("let ");append_in_jsFile(yylval.var_name);}
#line 1662 "y.tab.c"
    break;

  case 18: /* VAR_DECLARATION: VAR $@5 SEMICOLON_NT  */
#line 101 "yacc.y"
                                                                                                                                                      {append_in_jsFile("\n");}
#line 1668 "y.tab.c"
    break;

  case 19: /* $@6: %empty  */
#line 102 "yacc.y"
                                      { insert_to_table(yylval.var_name,current_data_type); append_in_jsFile("let ");append_in_jsFile( yylval.var_name);}
#line 1674 "y.tab.c"
    break;

  case 20: /* $@7: %empty  */
#line 102 "yacc.y"
                                                                                                                                                                     {append_in_jsFile(" = ");}
#line 1680 "y.tab.c"
    break;

  case 21: /* VAR_DECLARATION: VAR $@6 ASSIGNMENT $@7 TERMINAL SEMICOLON_NT  */
#line 102 "yacc.y"
                                                                                                                                                                                                                      {append_in_jsFile("\n");}
#line 1686 "y.tab.c"
    break;

  case 22: /* $@8: %empty  */
#line 103 "yacc.y"
                                      { insert_to_table(yylval.var_name,current_data_type); append_in_jsFile("let ");append_in_jsFile(yylval.var_name);}
#line 1692 "y.tab.c"
    break;

  case 23: /* VAR_DECLARATION: VAR $@8 ARRAY_DIMENSION ARRAY_ASSIGNMENT SEMICOLON_NT  */
#line 103 "yacc.y"
                                                                                                                                                                                                        {append_in_jsFile("\n");}
#line 1698 "y.tab.c"
    break;

  case 24: /* $@9: %empty  */
#line 106 "yacc.y"
                               { append_in_jsFile("function ");append_in_jsFile(yylval.var_name); add_to_scope_stack(yylval.var_name);}
#line 1704 "y.tab.c"
    break;

  case 25: /* $@10: %empty  */
#line 106 "yacc.y"
                                                                                                                                           {append_in_jsFile("(");}
#line 1710 "y.tab.c"
    break;

  case 26: /* $@11: %empty  */
#line 106 "yacc.y"
                                                                                                                                                                                  {append_in_jsFile(") ");}
#line 1716 "y.tab.c"
    break;

  case 27: /* $@12: %empty  */
#line 106 "yacc.y"
                                                                                                                                                                                                               {append_in_jsFile(" {\n"); tab_counter++;}
#line 1722 "y.tab.c"
    break;

  case 28: /* FUNCTION_DECLARATION: VAR $@9 LP $@10 PARAMETERS RP $@11 LC $@12 STATEMENTS RC  */
#line 106 "yacc.y"
                                                                                                                                                                                                                                                                        {tab_counter--;print_tabs(); append_in_jsFile("}\n"); remove_from_scope_stack(); }
#line 1728 "y.tab.c"
    break;

  case 34: /* ARRAY_ASSIGNMENT: ASSIGNMENT  */
#line 118 "yacc.y"
                                     {append_in_jsFile(" = ");}
#line 1734 "y.tab.c"
    break;

  case 36: /* $@13: %empty  */
#line 130 "yacc.y"
                           {append_in_jsFile(yylval.var_name);}
#line 1740 "y.tab.c"
    break;

  case 38: /* $@14: %empty  */
#line 131 "yacc.y"
                               {append_in_jsFile(", ");}
#line 1746 "y.tab.c"
    break;

  case 39: /* $@15: %empty  */
#line 131 "yacc.y"
                                                                  {append_in_jsFile(yylval.var_name);}
#line 1752 "y.tab.c"
    break;

  case 42: /* $@16: %empty  */
#line 135 "yacc.y"
                                           {append_in_jsFile("let ");append_in_jsFile(yylval.var_name);}
#line 1758 "y.tab.c"
    break;

  case 43: /* $@17: %empty  */
#line 135 "yacc.y"
                                                                                                                    {append_in_jsFile(" = ");}
#line 1764 "y.tab.c"
    break;

  case 45: /* $@18: %empty  */
#line 136 "yacc.y"
                                                                      {append_in_jsFile(yylval.var_name);}
#line 1770 "y.tab.c"
    break;

  case 46: /* $@19: %empty  */
#line 136 "yacc.y"
                                                                                                                      {append_in_jsFile(" = ");}
#line 1776 "y.tab.c"
    break;

  case 48: /* EXPRESSION_DECLARATION_OR_NoDECL: VAR  */
#line 137 "yacc.y"
                                                                      { append_in_jsFile(yylval.var_name);}
#line 1782 "y.tab.c"
    break;

  case 52: /* $@20: %empty  */
#line 150 "yacc.y"
                      { append_in_jsFile(yylval.var_name); search_var_in_scope(yylval.var_name); lVarType = lookup_in_table(yylval.var_name);}
#line 1788 "y.tab.c"
    break;

  case 53: /* $@21: %empty  */
#line 150 "yacc.y"
                                                                                                                                                          {append_in_jsFile(" = ");}
#line 1794 "y.tab.c"
    break;

  case 54: /* $@22: %empty  */
#line 150 "yacc.y"
                                                                                                                                                                                                   {verificarTipo();}
#line 1800 "y.tab.c"
    break;

  case 55: /* VAR_OR_FUNC_USE: VAR $@20 ASSIGNMENT $@21 EXPRESSION_NT $@22 SEMICOLON_NT  */
#line 150 "yacc.y"
                                                                                                                                                                                                                                   { append_in_jsFile("\n");}
#line 1806 "y.tab.c"
    break;

  case 56: /* $@23: %empty  */
#line 151 "yacc.y"
                                                             {append_in_jsFile(yylval.var_name);}
#line 1812 "y.tab.c"
    break;

  case 57: /* $@24: %empty  */
#line 151 "yacc.y"
                                                                                                      { append_in_jsFile("("); }
#line 1818 "y.tab.c"
    break;

  case 58: /* $@25: %empty  */
#line 151 "yacc.y"
                                                                                                                                               { append_in_jsFile(")"); }
#line 1824 "y.tab.c"
    break;

  case 59: /* VAR_OR_FUNC_USE: VAR $@23 LP $@24 PARAMETERS RP $@25 SEMICOLON_NT  */
#line 151 "yacc.y"
                                                                                                                                                                                       { append_in_jsFile("\n");}
#line 1830 "y.tab.c"
    break;

  case 61: /* $@26: %empty  */
#line 161 "yacc.y"
              {print_tabs();}
#line 1836 "y.tab.c"
    break;

  case 62: /* STATEMENTS: $@26 VAR_OR_FUNC_USE STATEMENTS  */
#line 161 "yacc.y"
                                                        {}
#line 1842 "y.tab.c"
    break;

  case 63: /* $@27: %empty  */
#line 162 "yacc.y"
                          {print_tabs();}
#line 1848 "y.tab.c"
    break;

  case 64: /* STATEMENTS: $@27 IF_BLOCK STATEMENTS  */
#line 162 "yacc.y"
                                                             {}
#line 1854 "y.tab.c"
    break;

  case 65: /* $@28: %empty  */
#line 163 "yacc.y"
                          {print_tabs();}
#line 1860 "y.tab.c"
    break;

  case 66: /* STATEMENTS: $@28 WHILE_BLOCK STATEMENTS  */
#line 163 "yacc.y"
                                                                 {}
#line 1866 "y.tab.c"
    break;

  case 67: /* $@29: %empty  */
#line 164 "yacc.y"
                          {print_tabs();}
#line 1872 "y.tab.c"
    break;

  case 68: /* STATEMENTS: $@29 DO_WHILE_BLOCK STATEMENTS  */
#line 164 "yacc.y"
                                                                    {}
#line 1878 "y.tab.c"
    break;

  case 69: /* $@30: %empty  */
#line 165 "yacc.y"
                          {print_tabs();}
#line 1884 "y.tab.c"
    break;

  case 70: /* STATEMENTS: $@30 FOR_BLOCK STATEMENTS  */
#line 165 "yacc.y"
                                                              {}
#line 1890 "y.tab.c"
    break;

  case 71: /* $@31: %empty  */
#line 166 "yacc.y"
              {print_tabs();}
#line 1896 "y.tab.c"
    break;

  case 72: /* STATEMENTS: $@31 COMMENT STATEMENTS  */
#line 166 "yacc.y"
                                                {}
#line 1902 "y.tab.c"
    break;

  case 74: /* STATEMENTS: %empty  */
#line 168 "yacc.y"
                    { }
#line 1908 "y.tab.c"
    break;

  case 75: /* $@32: %empty  */
#line 176 "yacc.y"
                    {create_scope_2();append_in_jsFile("if (");}
#line 1914 "y.tab.c"
    break;

  case 76: /* $@33: %empty  */
#line 176 "yacc.y"
                                                                                     {  append_in_jsFile(") {\n"); tab_counter++;}
#line 1920 "y.tab.c"
    break;

  case 77: /* $@34: %empty  */
#line 176 "yacc.y"
                                                                                                                                                 {remove_from_scope_stack();tab_counter--; print_tabs(); append_in_jsFile("}\n");}
#line 1926 "y.tab.c"
    break;

  case 79: /* $@35: %empty  */
#line 179 "yacc.y"
                            {create_scope_2();print_tabs(); append_in_jsFile("else if (");}
#line 1932 "y.tab.c"
    break;

  case 80: /* $@36: %empty  */
#line 179 "yacc.y"
                                                                                                                   {append_in_jsFile(")");}
#line 1938 "y.tab.c"
    break;

  case 81: /* $@37: %empty  */
#line 179 "yacc.y"
                                                                                                                                               {append_in_jsFile("{\n"); tab_counter++;}
#line 1944 "y.tab.c"
    break;

  case 82: /* $@38: %empty  */
#line 179 "yacc.y"
                                                                                                                                                                                                       {remove_from_scope_stack();tab_counter--; print_tabs(); append_in_jsFile("}\n"); }
#line 1950 "y.tab.c"
    break;

  case 84: /* $@39: %empty  */
#line 180 "yacc.y"
                                           {create_scope_2();print_tabs();tab_counter++;append_in_jsFile("else {\n"); }
#line 1956 "y.tab.c"
    break;

  case 85: /* ELSEIF_OR_ELSE: ELSE LC $@39 STATEMENTS RC  */
#line 180 "yacc.y"
                                                                                                                                      {remove_from_scope_stack();tab_counter--; print_tabs(); append_in_jsFile("}\n"); }
#line 1962 "y.tab.c"
    break;

  case 86: /* ELSEIF_OR_ELSE: %empty  */
#line 181 "yacc.y"
                                                                                                             {append_in_jsFile("\n");}
#line 1968 "y.tab.c"
    break;

  case 87: /* $@40: %empty  */
#line 189 "yacc.y"
                         {create_scope_2();append_in_jsFile("for(");}
#line 1974 "y.tab.c"
    break;

  case 88: /* $@41: %empty  */
#line 189 "yacc.y"
                                                                                                 {append_in_jsFile("){\n"); tab_counter++;}
#line 1980 "y.tab.c"
    break;

  case 89: /* FOR_BLOCK: FOR LP $@40 FOR_BLOCK_PARAMETERS RP LC $@41 STATEMENTS RC  */
#line 189 "yacc.y"
                                                                                                                                                          {remove_from_scope_stack();tab_counter--; print_tabs(); append_in_jsFile("}\n");}
#line 1986 "y.tab.c"
    break;

  case 90: /* $@42: %empty  */
#line 192 "yacc.y"
                       {create_scope_2();append_in_jsFile("while(");}
#line 1992 "y.tab.c"
    break;

  case 91: /* $@43: %empty  */
#line 192 "yacc.y"
                                                                                          {append_in_jsFile("){\n"); tab_counter++;}
#line 1998 "y.tab.c"
    break;

  case 92: /* WHILE_BLOCK: WHILE LP $@42 EXPRESSION_NT RP LC $@43 STATEMENTS RC  */
#line 192 "yacc.y"
                                                                                                                                                   {remove_from_scope_stack();tab_counter--; print_tabs(); append_in_jsFile("}\n"); }
#line 2004 "y.tab.c"
    break;

  case 93: /* $@44: %empty  */
#line 195 "yacc.y"
                        {create_scope_2();append_in_jsFile("do{\n"); tab_counter++;}
#line 2010 "y.tab.c"
    break;

  case 94: /* $@45: %empty  */
#line 195 "yacc.y"
                                                                                                            {remove_from_scope_stack();tab_counter--;print_tabs(); append_in_jsFile("}while(");}
#line 2016 "y.tab.c"
    break;

  case 95: /* $@46: %empty  */
#line 195 "yacc.y"
                                                                                                                                                                                                                  {append_in_jsFile(")");}
#line 2022 "y.tab.c"
    break;

  case 96: /* DO_WHILE_BLOCK: DO LC $@44 STATEMENTS RC WHILE LP $@45 EXPRESSION_NT RP $@46 SEMICOLON_NT  */
#line 195 "yacc.y"
                                                                                                                                                                                                                                                        {append_in_jsFile("\n");}
#line 2028 "y.tab.c"
    break;

  case 97: /* TERMINAL: NUMBER  */
#line 198 "yacc.y"
                         { append_in_jsFile( yylval.var_name); anhadirExpresion(ES_INT + 48); }
#line 2034 "y.tab.c"
    break;

  case 98: /* TERMINAL: QUOTED_CHAR  */
#line 199 "yacc.y"
                                      { append_in_jsFile(yylval.var_name); anhadirExpresion(ES_CHAR + 48); }
#line 2040 "y.tab.c"
    break;

  case 99: /* TERMINAL: QUOTED_STRING  */
#line 200 "yacc.y"
                                        { append_in_jsFile( yylval.var_name); anhadirExpresion(ES_STRING + 48);}
#line 2046 "y.tab.c"
    break;

  case 100: /* COMMENT: ILCOMMENT  */
#line 203 "yacc.y"
                            { append_in_jsFile( yylval.var_name); append_in_jsFile("\n");}
#line 2052 "y.tab.c"
    break;

  case 101: /* COMMENT: MLCOMMENT  */
#line 204 "yacc.y"
                            { append_in_jsFile(yylval.var_name); }
#line 2058 "y.tab.c"
    break;

  case 102: /* TYPE: INT  */
#line 207 "yacc.y"
                                { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type);  }
#line 2064 "y.tab.c"
    break;

  case 103: /* TYPE: CHAR  */
#line 208 "yacc.y"
                                        { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type); 	}
#line 2070 "y.tab.c"
    break;

  case 104: /* TYPE: FLOAT  */
#line 209 "yacc.y"
                                        { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type); 	}
#line 2076 "y.tab.c"
    break;

  case 105: /* TYPE: DOUBLE  */
#line 210 "yacc.y"
                                        { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type); 	}
#line 2082 "y.tab.c"
    break;

  case 106: /* TYPE: VOID  */
#line 211 "yacc.y"
                                        { }
#line 2088 "y.tab.c"
    break;

  case 107: /* $@47: %empty  */
#line 218 "yacc.y"
                             {append_in_jsFile(" == ");}
#line 2094 "y.tab.c"
    break;

  case 109: /* $@48: %empty  */
#line 219 "yacc.y"
                                         {append_in_jsFile(" != ");}
#line 2100 "y.tab.c"
    break;

  case 111: /* $@49: %empty  */
#line 220 "yacc.y"
                                        {append_in_jsFile(" > ");}
#line 2106 "y.tab.c"
    break;

  case 113: /* $@50: %empty  */
#line 221 "yacc.y"
                                        {append_in_jsFile(" < ");}
#line 2112 "y.tab.c"
    break;

  case 115: /* $@51: %empty  */
#line 222 "yacc.y"
                                         {append_in_jsFile(" <= ");}
#line 2118 "y.tab.c"
    break;

  case 117: /* $@52: %empty  */
#line 223 "yacc.y"
                                         {append_in_jsFile(" >= ");}
#line 2124 "y.tab.c"
    break;

  case 119: /* $@53: %empty  */
#line 225 "yacc.y"
                                          {append_in_jsFile(" && ");}
#line 2130 "y.tab.c"
    break;

  case 121: /* $@54: %empty  */
#line 226 "yacc.y"
                                         {append_in_jsFile(" || ");}
#line 2136 "y.tab.c"
    break;

  case 123: /* $@55: %empty  */
#line 227 "yacc.y"
                               {append_in_jsFile("!");}
#line 2142 "y.tab.c"
    break;

  case 125: /* $@56: %empty  */
#line 229 "yacc.y"
                                          {append_in_jsFile(" + ");anhadirExpresion('+');}
#line 2148 "y.tab.c"
    break;

  case 127: /* $@57: %empty  */
#line 230 "yacc.y"
                                           {append_in_jsFile(" - ");anhadirExpresion('-');}
#line 2154 "y.tab.c"
    break;

  case 129: /* $@58: %empty  */
#line 231 "yacc.y"
                                         {append_in_jsFile(" * ");anhadirExpresion('*');}
#line 2160 "y.tab.c"
    break;

  case 131: /* $@59: %empty  */
#line 232 "yacc.y"
                                         {append_in_jsFile(" / ");anhadirExpresion('/');}
#line 2166 "y.tab.c"
    break;

  case 133: /* $@60: %empty  */
#line 233 "yacc.y"
                                         {append_in_jsFile(" %% ");}
#line 2172 "y.tab.c"
    break;

  case 135: /* EXPRESSION: EXPRESSION PLUS PLUS  */
#line 234 "yacc.y"
                                               {append_in_jsFile(" ++");}
#line 2178 "y.tab.c"
    break;

  case 136: /* $@61: %empty  */
#line 235 "yacc.y"
                                    {append_in_jsFile("++");}
#line 2184 "y.tab.c"
    break;

  case 138: /* EXPRESSION: EXPRESSION MINUS MINUS  */
#line 236 "yacc.y"
                                                 {append_in_jsFile("--");}
#line 2190 "y.tab.c"
    break;

  case 139: /* $@62: %empty  */
#line 237 "yacc.y"
                                      {append_in_jsFile("--");}
#line 2196 "y.tab.c"
    break;

  case 141: /* $@63: %empty  */
#line 239 "yacc.y"
                             {append_in_jsFile("(");anhadirExpresion('(');}
#line 2202 "y.tab.c"
    break;

  case 142: /* EXPRESSION: LP $@63 EXPRESSION RP  */
#line 239 "yacc.y"
                                                                                          {append_in_jsFile(") ");anhadirExpresion(')');}
#line 2208 "y.tab.c"
    break;

  case 143: /* EXPRESSION: VAR  */
#line 241 "yacc.y"
                              {append_in_jsFile( yylval.var_name); search_var_in_scope(yylval.var_name); anhadirExpresion(lookup_in_table(yylval.var_name)+ 48);}
#line 2214 "y.tab.c"
    break;

  case 145: /* SEMICOLON_NT: SEMICOLON  */
#line 251 "yacc.y"
                        { append_in_jsFile(";");}
#line 2220 "y.tab.c"
    break;

  case 146: /* SEMICOLON_NT: %empty  */
#line 252 "yacc.y"
                                      {yyerror("syntax error : missing ';'\n");}
#line 2226 "y.tab.c"
    break;

  case 147: /* SEMICOLON_OR_ERROR: SEMICOLON  */
#line 255 "yacc.y"
                              { append_in_jsFile(";");}
#line 2232 "y.tab.c"
    break;

  case 148: /* SEMICOLON_OR_ERROR: COMA  */
#line 256 "yacc.y"
                                         { append_in_jsFile(","); append_in_jsFile("\nSYNTAX_ERROR: You put a ',', must be a ';'!\n");}
#line 2238 "y.tab.c"
    break;

  case 149: /* SEMICOLON_OR_ERROR: COLON  */
#line 257 "yacc.y"
                                          { append_in_jsFile(":"); append_in_jsFile("\nSYNTAX_ERROR: You put a ':', must be a ';'!\n");}
#line 2244 "y.tab.c"
    break;

  case 151: /* $@64: %empty  */
#line 261 "yacc.y"
                                          { append_in_jsFile(yylval.var_name); append_in_jsFile("= ");}
#line 2250 "y.tab.c"
    break;

  case 153: /* $@65: %empty  */
#line 262 "yacc.y"
                                                 {append_in_jsFile("= ");}
#line 2256 "y.tab.c"
    break;

  case 154: /* EXPRESSION_NT: EXPRESSION ASSIGNMENT $@65 EXPRESSION  */
#line 262 "yacc.y"
                                                                                      {yyerror("Maybe you mean '==' operator?");}
#line 2262 "y.tab.c"
    break;

  case 155: /* EXPRESSION_NT: %empty  */
#line 263 "yacc.y"
                                         {yyerror("expected expression before the token");}
#line 2268 "y.tab.c"
    break;


#line 2272 "y.tab.c"

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

#line 269 "yacc.y"


#include "lex.yy.c"


void verificarTipo(){
	if(lVarType == NOVALUE){
		lVarType = current_data_type; 
	}else{
		lVarType = lVarType;
	}

	/* while(topeExpresion > 0){

	} */
	
}

void anhadirExpresion(char type){
	expresion[topeExpresion]=type;
	topeExpresion++;
	
}


void append_in_jsFile(char *s){
	fputs(s, js_file);
}

void add_to_scope_stack(char newScopeName[VAR_NAME_LEN]){
	if(scopeStackCounter < SCOPE_SIZE){
		scopeStackCounter++;
		strcpy(scopeStack[scopeStackCounter], newScopeName);
	}else{
		append_in_jsFile("NO MORE SPACE IN SCOPE STACK ARRAY!");
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
	
	append_in_jsFile(" was not declared in the scope \n");
	return idx;
	

}
//Crea un scope para los if, while, for, etc.
void create_scope_2(){
	static int idForThisFunction = 0;
	char newName[30];
	sprintf(newName,"scope_%d",idForThisFunction);
	add_to_scope_stack(newName);
	idForThisFunction++;
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
		append_in_jsFile(var);
		append_in_jsFile( " has multiple declaration of the variable\n");
		yyerror("");
		/* exit(0); */
	}
}
void print_tabs() {
	for(int i = 0; i < tab_counter; i++){
		append_in_jsFile("\t");
	}
	return;
}

int main() {
	// Limpiamos el archivo donde queda la traduccion
	js_file = fopen(JSFILE, "w");
	fclose(js_file);
	yyparse();
    
	return 0;
}

int yyerror(const char *msg) {
	extern int yylineno;
	printf("Parsing failed\nLine number: %d %s\n", yylineno, msg);
	append_in_jsFile("Parsing failed\nLine number: ");
	append_in_jsFile(yylineno);append_in_jsFile(" ");append_in_jsFile(msg); append_in_jsFile("\n");
	success = 0;
	return 0;
}
