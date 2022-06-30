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
	int table_idFunction = 0;
	int tab_counter = 0;
	int current_data_type;
	char scopeStack[SCOPE_SIZE][CANT_VARIABLES];
	int var_fun_type = -1;
	int scopeStackCounter = -1;
	char for_var[VAR_NAME_LEN];
	struct symbol_table{char var_name[VAR_NAME_LEN]; int type; char scopeName[VAR_NAME_LEN] ;} sym[CANT_VARIABLES];
	struct function_table{char var_name[VAR_NAME_LEN]; int type; int type_params[CANT_VARIABLES];int counter_type_params;int is_def;} fun[VAR_NAME_LEN];

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

#line 113 "y.tab.c"

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
#line 43 "yacc.y"

int data_type;
char var_name[30];

#line 274 "y.tab.c"

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
  YYSYMBOL_PRINTF_SCANF = 59,              /* PRINTF_SCANF  */
  YYSYMBOL_60_3 = 60,                      /* $@3  */
  YYSYMBOL_61_4 = 61,                      /* $@4  */
  YYSYMBOL_62_5 = 62,                      /* $@5  */
  YYSYMBOL_RETURN_CONT_BREAK = 63,         /* RETURN_CONT_BREAK  */
  YYSYMBOL_64_6 = 64,                      /* $@6  */
  YYSYMBOL_65_7 = 65,                      /* $@7  */
  YYSYMBOL_66_8 = 66,                      /* $@8  */
  YYSYMBOL_QUOTED_CHAR_OR_STRING = 67,     /* QUOTED_CHAR_OR_STRING  */
  YYSYMBOL_DECLARATION = 68,               /* DECLARATION  */
  YYSYMBOL_DEFINE_DECLARATION = 69,        /* DEFINE_DECLARATION  */
  YYSYMBOL_70_9 = 70,                      /* $@9  */
  YYSYMBOL_71_10 = 71,                     /* $@10  */
  YYSYMBOL_VAR_DECLARATION = 72,           /* VAR_DECLARATION  */
  YYSYMBOL_73_11 = 73,                     /* $@11  */
  YYSYMBOL_74_12 = 74,                     /* $@12  */
  YYSYMBOL_75_13 = 75,                     /* $@13  */
  YYSYMBOL_76_14 = 76,                     /* $@14  */
  YYSYMBOL_77_15 = 77,                     /* $@15  */
  YYSYMBOL_FUNCTION_DECLARATION = 78,      /* FUNCTION_DECLARATION  */
  YYSYMBOL_79_16 = 79,                     /* $@16  */
  YYSYMBOL_80_17 = 80,                     /* $@17  */
  YYSYMBOL_81_18 = 81,                     /* $@18  */
  YYSYMBOL_82_19 = 82,                     /* $@19  */
  YYSYMBOL_ARRAY_DIMENSION = 83,           /* ARRAY_DIMENSION  */
  YYSYMBOL_ARRAY_SIZE = 84,                /* ARRAY_SIZE  */
  YYSYMBOL_ARRAY_DIMENSION_WRITE = 85,     /* ARRAY_DIMENSION_WRITE  */
  YYSYMBOL_86_20 = 86,                     /* $@20  */
  YYSYMBOL_87_21 = 87,                     /* $@21  */
  YYSYMBOL_88_22 = 88,                     /* $@22  */
  YYSYMBOL_PARAMETERS = 89,                /* PARAMETERS  */
  YYSYMBOL_90_23 = 90,                     /* $@23  */
  YYSYMBOL_91_24 = 91,                     /* $@24  */
  YYSYMBOL_92_25 = 92,                     /* $@25  */
  YYSYMBOL_ARGUMENTS = 93,                 /* ARGUMENTS  */
  YYSYMBOL_94_26 = 94,                     /* $@26  */
  YYSYMBOL_95_27 = 95,                     /* $@27  */
  YYSYMBOL_96_28 = 96,                     /* $@28  */
  YYSYMBOL_EXPRESSION_DECLARATION_OR_NoDECL = 97, /* EXPRESSION_DECLARATION_OR_NoDECL  */
  YYSYMBOL_98_29 = 98,                     /* $@29  */
  YYSYMBOL_99_30 = 99,                     /* $@30  */
  YYSYMBOL_100_31 = 100,                   /* $@31  */
  YYSYMBOL_101_32 = 101,                   /* $@32  */
  YYSYMBOL_FOR_BLOCK_PARAMETERS = 102,     /* FOR_BLOCK_PARAMETERS  */
  YYSYMBOL_VAR_OR_FUNC_USE = 103,          /* VAR_OR_FUNC_USE  */
  YYSYMBOL_104_33 = 104,                   /* $@33  */
  YYSYMBOL_105_34 = 105,                   /* $@34  */
  YYSYMBOL_106_35 = 106,                   /* $@35  */
  YYSYMBOL_107_36 = 107,                   /* $@36  */
  YYSYMBOL_108_37 = 108,                   /* $@37  */
  YYSYMBOL_109_38 = 109,                   /* $@38  */
  YYSYMBOL_110_39 = 110,                   /* $@39  */
  YYSYMBOL_111_40 = 111,                   /* $@40  */
  YYSYMBOL_112_41 = 112,                   /* $@41  */
  YYSYMBOL_STATEMENTS = 113,               /* STATEMENTS  */
  YYSYMBOL_114_42 = 114,                   /* $@42  */
  YYSYMBOL_115_43 = 115,                   /* $@43  */
  YYSYMBOL_116_44 = 116,                   /* $@44  */
  YYSYMBOL_117_45 = 117,                   /* $@45  */
  YYSYMBOL_118_46 = 118,                   /* $@46  */
  YYSYMBOL_119_47 = 119,                   /* $@47  */
  YYSYMBOL_120_48 = 120,                   /* $@48  */
  YYSYMBOL_121_49 = 121,                   /* $@49  */
  YYSYMBOL_IF_BLOCK = 122,                 /* IF_BLOCK  */
  YYSYMBOL_123_50 = 123,                   /* $@50  */
  YYSYMBOL_124_51 = 124,                   /* $@51  */
  YYSYMBOL_125_52 = 125,                   /* $@52  */
  YYSYMBOL_ELSEIF_OR_ELSE = 126,           /* ELSEIF_OR_ELSE  */
  YYSYMBOL_127_53 = 127,                   /* $@53  */
  YYSYMBOL_128_54 = 128,                   /* $@54  */
  YYSYMBOL_129_55 = 129,                   /* $@55  */
  YYSYMBOL_130_56 = 130,                   /* $@56  */
  YYSYMBOL_131_57 = 131,                   /* $@57  */
  YYSYMBOL_FOR_BLOCK = 132,                /* FOR_BLOCK  */
  YYSYMBOL_133_58 = 133,                   /* $@58  */
  YYSYMBOL_134_59 = 134,                   /* $@59  */
  YYSYMBOL_WHILE_BLOCK = 135,              /* WHILE_BLOCK  */
  YYSYMBOL_136_60 = 136,                   /* $@60  */
  YYSYMBOL_137_61 = 137,                   /* $@61  */
  YYSYMBOL_DO_WHILE_BLOCK = 138,           /* DO_WHILE_BLOCK  */
  YYSYMBOL_139_62 = 139,                   /* $@62  */
  YYSYMBOL_140_63 = 140,                   /* $@63  */
  YYSYMBOL_141_64 = 141,                   /* $@64  */
  YYSYMBOL_TERMINAL = 142,                 /* TERMINAL  */
  YYSYMBOL_COMMENT = 143,                  /* COMMENT  */
  YYSYMBOL_TYPE = 144,                     /* TYPE  */
  YYSYMBOL_EXPRESSION = 145,               /* EXPRESSION  */
  YYSYMBOL_146_65 = 146,                   /* $@65  */
  YYSYMBOL_147_66 = 147,                   /* $@66  */
  YYSYMBOL_148_67 = 148,                   /* $@67  */
  YYSYMBOL_149_68 = 149,                   /* $@68  */
  YYSYMBOL_150_69 = 150,                   /* $@69  */
  YYSYMBOL_151_70 = 151,                   /* $@70  */
  YYSYMBOL_152_71 = 152,                   /* $@71  */
  YYSYMBOL_153_72 = 153,                   /* $@72  */
  YYSYMBOL_154_73 = 154,                   /* $@73  */
  YYSYMBOL_155_74 = 155,                   /* $@74  */
  YYSYMBOL_156_75 = 156,                   /* $@75  */
  YYSYMBOL_157_76 = 157,                   /* $@76  */
  YYSYMBOL_158_77 = 158,                   /* $@77  */
  YYSYMBOL_159_78 = 159,                   /* $@78  */
  YYSYMBOL_160_79 = 160,                   /* $@79  */
  YYSYMBOL_161_80 = 161,                   /* $@80  */
  YYSYMBOL_162_81 = 162,                   /* $@81  */
  YYSYMBOL_SEMICOLON_NT = 163,             /* SEMICOLON_NT  */
  YYSYMBOL_SEMICOLON_OR_ERROR = 164,       /* SEMICOLON_OR_ERROR  */
  YYSYMBOL_EXPRESSION_NT = 165,            /* EXPRESSION_NT  */
  YYSYMBOL_166_82 = 166,                   /* $@82  */
  YYSYMBOL_167_83 = 167,                   /* $@83  */
  YYSYMBOL_DELIMITER = 168                 /* DELIMITER  */
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
#define YYLAST   354

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  115
/* YYNRULES -- Number of rules.  */
#define YYNRULES  185
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  307

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
       0,    73,    73,    73,    73,    74,    77,    78,    79,    80,
      81,    82,    93,    93,    93,    93,    96,    96,    97,    97,
      98,    98,   101,   102,   108,   109,   114,   114,   114,   117,
     117,   118,   118,   118,   119,   119,   119,   122,   122,   122,
     122,   122,   125,   126,   129,   133,   133,   133,   133,   134,
     145,   145,   146,   146,   146,   147,   150,   150,   151,   151,
     151,   152,   155,   155,   155,   156,   156,   156,   157,   158,
     159,   162,   170,   170,   170,   170,   171,   171,   171,   171,
     172,   172,   172,   172,   173,   182,   182,   183,   183,   184,
     184,   185,   185,   186,   186,   187,   187,   188,   188,   189,
     189,   190,   191,   199,   199,   199,   199,   202,   202,   202,
     202,   202,   203,   203,   204,   212,   212,   212,   215,   215,
     215,   218,   218,   218,   218,   221,   222,   223,   226,   227,
     230,   231,   232,   233,   234,   241,   241,   242,   242,   243,
     243,   244,   244,   245,   245,   246,   246,   248,   248,   249,
     249,   250,   250,   252,   252,   253,   253,   254,   254,   255,
     255,   256,   256,   257,   258,   258,   259,   260,   260,   262,
     262,   264,   266,   274,   275,   278,   279,   280,   283,   284,
     284,   285,   285,   286,   289,   290
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
  "$accept", "c_file", "$@1", "$@2", "BEFORE_MAIN", "PRINTF_SCANF", "$@3",
  "$@4", "$@5", "RETURN_CONT_BREAK", "$@6", "$@7", "$@8",
  "QUOTED_CHAR_OR_STRING", "DECLARATION", "DEFINE_DECLARATION", "$@9",
  "$@10", "VAR_DECLARATION", "$@11", "$@12", "$@13", "$@14", "$@15",
  "FUNCTION_DECLARATION", "$@16", "$@17", "$@18", "$@19",
  "ARRAY_DIMENSION", "ARRAY_SIZE", "ARRAY_DIMENSION_WRITE", "$@20", "$@21",
  "$@22", "PARAMETERS", "$@23", "$@24", "$@25", "ARGUMENTS", "$@26",
  "$@27", "$@28", "EXPRESSION_DECLARATION_OR_NoDECL", "$@29", "$@30",
  "$@31", "$@32", "FOR_BLOCK_PARAMETERS", "VAR_OR_FUNC_USE", "$@33",
  "$@34", "$@35", "$@36", "$@37", "$@38", "$@39", "$@40", "$@41",
  "STATEMENTS", "$@42", "$@43", "$@44", "$@45", "$@46", "$@47", "$@48",
  "$@49", "IF_BLOCK", "$@50", "$@51", "$@52", "ELSEIF_OR_ELSE", "$@53",
  "$@54", "$@55", "$@56", "$@57", "FOR_BLOCK", "$@58", "$@59",
  "WHILE_BLOCK", "$@60", "$@61", "DO_WHILE_BLOCK", "$@62", "$@63", "$@64",
  "TERMINAL", "COMMENT", "TYPE", "EXPRESSION", "$@65", "$@66", "$@67",
  "$@68", "$@69", "$@70", "$@71", "$@72", "$@73", "$@74", "$@75", "$@76",
  "$@77", "$@78", "$@79", "$@80", "$@81", "SEMICOLON_NT",
  "SEMICOLON_OR_ERROR", "EXPRESSION_NT", "$@82", "$@83", "DELIMITER", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-135)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-103)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      15,    28,   130,  -135,    -8,  -135,  -135,    89,  -135,  -135,
    -135,  -135,  -135,  -135,    -9,    89,    89,    89,    68,  -135,
    -135,    89,    71,  -135,    40,  -135,  -135,  -135,    20,  -135,
    -135,  -135,  -135,  -135,    35,    81,    39,    59,    31,   198,
    -135,  -135,  -135,    74,  -135,  -135,  -135,  -135,  -135,  -135,
      -8,    73,    17,    84,    86,    90,    98,    95,     0,    61,
      31,  -135,    88,    35,   134,   210,  -135,     2,   198,   125,
      87,   198,    91,   198,    94,   198,    92,   198,  -135,   198,
     198,  -135,  -135,  -135,  -135,    35,    39,  -135,  -135,    97,
     143,  -135,   129,   109,   115,  -135,   -10,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,   116,  -135,  -135,    19,
      35,    35,  -135,  -135,    66,  -135,  -135,  -135,  -135,  -135,
     141,    19,    19,   198,   251,  -135,   142,  -135,   150,   151,
    -135,  -135,   313,    35,  -135,  -135,   163,   131,   134,    19,
       3,   135,  -135,   133,   137,   138,    -4,    13,   147,   167,
     337,   145,  -135,   110,  -135,  -135,   110,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,   158,   177,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,   155,  -135,
      19,   161,   162,   174,   184,  -135,  -135,  -135,   251,   168,
    -135,  -135,   164,   110,  -135,   337,   110,   110,   300,   110,
     110,   110,   110,   110,   110,   110,   110,  -135,   110,  -135,
     110,   110,   110,   110,   110,   134,   198,    35,     3,   203,
    -135,   169,  -135,  -135,  -135,   165,  -135,    13,  -135,   191,
    -135,   337,   200,   200,  -135,   200,   200,   200,   200,   200,
     200,   200,   337,   200,   200,   200,   200,   200,   337,  -135,
     173,  -135,  -135,  -135,    35,  -135,    35,   198,   198,  -135,
      19,   110,   198,  -135,    35,  -135,   134,  -135,   115,  -135,
     176,   179,    19,  -135,   337,   180,    19,  -135,  -135,  -135,
    -135,  -135,   186,  -135,  -135,    30,  -135,   178,   189,  -135,
      35,  -135,  -135,  -135,   198,    19,   195,   192,  -135,  -135,
     201,  -135,   198,   199,  -135,    30,  -135
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,   134,    26,     0,   128,   129,
     130,   131,   132,   133,     0,     0,     0,     0,     0,   185,
     184,     0,     0,     6,     0,     8,     7,     9,    29,    25,
      24,    10,    27,     3,   174,     0,    43,     0,     0,     0,
     173,    30,    32,     0,    35,    38,   125,   127,   126,    28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    44,     0,   174,    55,     0,     4,    72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,     0,
       0,    16,    18,    20,   100,   174,    43,    36,    52,     0,
       0,   101,     0,     0,    49,    86,    29,    84,   103,    88,
     118,    90,   121,    92,   115,    94,     0,    96,    98,   183,
     174,   174,    33,    42,     0,    39,    50,    73,    77,    45,
       0,   183,   183,     0,    70,    13,   171,   151,     0,     0,
     169,   172,   178,   174,    19,    21,     0,     0,    55,   183,
      61,     0,    81,     0,     0,     0,   171,     0,     0,     0,
      69,    23,   179,     0,   164,   167,     0,   149,   147,   143,
     145,   141,   139,   137,   135,   153,   155,   157,   159,   161,
     181,    17,    53,    40,    51,    74,    56,    58,     0,    46,
     183,     0,     0,     0,     0,   176,   175,   177,    70,     0,
      62,    22,     0,     0,   171,   152,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   163,     0,   166,
       0,     0,     0,     0,     0,    55,     0,   174,    61,     0,
      78,     0,    82,   104,   119,     0,    66,     0,   116,     0,
      14,   180,   165,   168,   170,   150,   148,   144,   146,   142,
     140,   138,   136,   154,   156,   158,   160,   162,   182,    54,
       0,    75,    57,    59,   174,    47,   174,     0,     0,   122,
     183,     0,     0,    63,   174,    41,    55,    79,    49,    83,
       0,     0,   183,    67,    71,     0,   183,    15,    60,    48,
     105,   120,     0,   117,    64,   114,   123,     0,     0,   106,
     174,   112,   107,   124,     0,   183,     0,     0,   113,   108,
       0,   109,     0,     0,   110,   114,   111
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -135,  -135,  -135,  -135,    10,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,   170,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,   152,
    -135,   -28,  -135,  -135,  -135,  -134,  -135,  -135,  -135,    25,
    -135,  -135,  -135,    58,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,   -68,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,   -53,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,   -17,   208,
     -51,  -108,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,   -61,
      26,  -103,  -135,  -135,   209
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,    39,    14,    79,   106,   151,   264,    84,
     109,   110,   111,   192,    15,    16,    22,    38,    29,    34,
      35,    60,    36,    63,    30,    37,    64,   137,   216,    44,
      62,   120,   141,   221,   268,    89,   138,   114,   215,   178,
     218,   219,   266,   147,   229,   276,   184,   260,   148,    68,
      92,   139,   217,    93,   140,   254,    94,   180,   256,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    71,   121,
     257,   285,   289,   295,   300,   302,   305,   294,    77,   124,
     262,    73,   122,   258,    75,   123,   272,   290,   131,    17,
      18,   132,   206,   205,   204,   203,   201,   202,   200,   199,
     153,   208,   210,   211,   212,   213,   196,   197,   156,    41,
     188,   133,   193,   214,    21
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      95,    69,    87,    99,   174,   101,   176,   103,   -31,   105,
      24,   107,   108,    90,   -65,    -5,   150,    23,   143,   144,
      67,    49,   126,   127,   112,    25,    26,    27,     3,    19,
     -34,    31,   128,   129,   -68,    20,   175,     5,   -31,   -68,
     -68,   177,   -80,    85,   -76,   195,     8,     9,   198,   134,
     135,   185,    46,    47,    48,   145,   186,   187,   287,   288,
     -34,   130,   -37,   136,    46,    47,    48,    10,    11,    12,
      13,    28,   171,   149,    32,    91,    33,   222,    40,    43,
     150,   249,    81,    82,    83,   231,     5,    90,   232,   233,
       4,   235,   236,   237,   238,   239,   240,   241,   242,    42,
     243,    45,   244,   245,   246,   247,   248,    61,   -11,     5,
      66,    70,    72,   194,   127,    74,    10,    11,    12,    13,
       6,     7,    76,   128,   129,    78,   -11,    86,    96,    98,
     102,     4,   278,   100,   104,     8,     9,   149,   115,    10,
      11,    12,    13,    46,    47,    48,   116,   117,   250,   -11,
       5,   118,   130,   274,     5,   119,   251,   273,   125,   142,
     152,     6,     7,   154,    90,   155,   172,   173,   179,   282,
     190,   207,    88,   284,   181,   183,     8,     9,   182,   191,
      10,    11,    12,    13,    10,    11,    12,    13,   189,   270,
     271,   209,   297,   267,   275,   269,   220,   223,   224,    50,
     225,   -85,   226,   277,   228,   230,   253,   259,   255,   263,
     265,     4,   164,   280,   291,    90,   281,   283,   -85,   -99,
     -99,   -99,   -93,   -91,   -89,   -87,   296,   286,   -95,   293,
       5,   292,   298,   299,   303,  -102,   304,   301,   113,    97,
     279,     6,     7,   252,   -97,   -97,   227,   -11,   -85,   -85,
     -85,   -85,   306,   261,   146,   127,     8,     9,     0,    65,
      10,    11,    12,    13,   128,   129,    80,     0,     0,     0,
       0,     5,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    46,    47,    48,     0,     0,     0,
       0,     0,     0,   130,     0,     0,     0,     0,     0,     0,
       0,    10,    11,    12,    13,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   234,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169
};

static const yytype_int16 yycheck[] =
{
      68,    52,    63,    71,   138,    73,     3,    75,    18,    77,
      19,    79,    80,    64,    18,     0,   124,     7,   121,   122,
       3,    38,     3,     4,    85,    15,    16,    17,     0,    37,
      40,    21,    13,    14,    38,    43,   139,    20,    18,    43,
      44,    38,    40,    60,    42,   153,    46,    47,   156,   110,
     111,    38,    33,    34,    35,   123,    43,    44,    28,    29,
      40,    42,    42,   114,    33,    34,    35,    50,    51,    52,
      53,     3,   133,   124,     3,    65,    36,   180,    43,    40,
     188,   215,    21,    22,    23,   193,    20,   138,   196,   197,
       1,   199,   200,   201,   202,   203,   204,   205,   206,    18,
     208,    42,   210,   211,   212,   213,   214,    33,    19,    20,
      37,    27,    26,     3,     4,    25,    50,    51,    52,    53,
      31,    32,    24,    13,    14,    30,    37,    39,     3,    42,
      36,     1,   266,    42,    42,    46,    47,   188,    41,    50,
      51,    52,    53,    33,    34,    35,     3,    18,   216,    19,
      20,    42,    42,   261,    20,    40,   217,   260,    42,    18,
      18,    31,    32,    13,   215,    14,     3,    36,    33,   272,
       3,    13,    38,   276,    41,    37,    46,    47,    41,    34,
      50,    51,    52,    53,    50,    51,    52,    53,    41,   257,
     258,    14,   295,   254,   262,   256,    41,    36,    36,     1,
      26,     3,    18,   264,    36,    41,     3,    42,    39,    18,
      37,     1,    12,    37,    36,   266,    37,    37,    20,    21,
      22,    23,    24,    25,    26,    27,   294,    41,    30,   290,
      20,    42,    37,    41,   302,    37,    37,    36,    86,    69,
     268,    31,    32,   218,    46,    47,   188,    37,    50,    51,
      52,    53,   305,   227,     3,     4,    46,    47,    -1,    50,
      50,    51,    52,    53,    13,    14,    58,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    52,    53,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    55,    56,     0,     1,    20,    31,    32,    46,    47,
      50,    51,    52,    53,    58,    68,    69,   143,   144,    37,
      43,   168,    70,    58,    19,    58,    58,    58,     3,    72,
      78,    58,     3,    36,    73,    74,    76,    79,    71,    57,
      43,   163,    18,    40,    83,    42,    33,    34,    35,   142,
       1,   113,   114,   115,   116,   117,   118,   119,   120,   121,
      75,    33,    84,    77,    80,   168,    37,     3,   103,   144,
      27,   122,    26,   135,    25,   138,    24,   132,    30,    59,
     143,    21,    22,    23,    63,   142,    39,   163,    38,    89,
     144,    58,   104,   107,   110,   113,     3,    72,    42,   113,
      42,   113,    36,   113,    42,   113,    60,   113,   113,    64,
      65,    66,   163,    83,    91,    41,     3,    18,    42,    40,
      85,   123,   136,   139,   133,    42,     3,     4,    13,    14,
      42,   142,   145,   165,   163,   163,   144,    81,    90,   105,
     108,    86,    18,   165,   165,   113,     3,    97,   102,   144,
     145,    61,    18,   154,    13,    14,   162,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,   163,     3,    36,    89,   165,     3,    38,    93,    33,
     111,    41,    41,    37,   100,    38,    43,    44,   164,    41,
       3,    34,    67,   166,     3,   145,   160,   161,   145,   153,
     152,   150,   151,   149,   148,   147,   146,    13,   155,    14,
     156,   157,   158,   159,   167,    92,    82,   106,    94,    95,
      41,    87,   165,    36,    36,    26,    18,    97,    36,    98,
      41,   145,   145,   145,    41,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,    89,
     113,   163,    93,     3,   109,    39,   112,   124,   137,    42,
     101,   164,   134,    18,    62,    37,    96,   163,    88,   163,
     113,   113,   140,   165,   145,   113,    99,   163,    89,    85,
      37,    37,   165,    37,   165,   125,    41,    28,    29,   126,
     141,    36,    42,   163,   131,   127,   113,   165,    37,    41,
     128,    36,   129,   113,    37,   130,   126
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    56,    57,    55,    55,    58,    58,    58,    58,
      58,    58,    60,    61,    62,    59,    64,    63,    65,    63,
      66,    63,    67,    67,    68,    68,    70,    71,    69,    73,
      72,    74,    75,    72,    76,    77,    72,    79,    80,    81,
      82,    78,    83,    83,    84,    86,    87,    88,    85,    85,
      90,    89,    91,    92,    89,    89,    94,    93,    95,    96,
      93,    93,    98,    99,    97,   100,   101,    97,    97,    97,
      97,   102,   104,   105,   106,   103,   107,   108,   109,   103,
     110,   111,   112,   103,   103,   114,   113,   115,   113,   116,
     113,   117,   113,   118,   113,   119,   113,   120,   113,   121,
     113,   113,   113,   123,   124,   125,   122,   127,   128,   129,
     130,   126,   131,   126,   126,   133,   134,   132,   136,   137,
     135,   139,   140,   141,   138,   142,   142,   142,   143,   143,
     144,   144,   144,   144,   144,   146,   145,   147,   145,   148,
     145,   149,   145,   150,   145,   151,   145,   152,   145,   153,
     145,   154,   145,   155,   145,   156,   145,   157,   145,   158,
     145,   159,   145,   145,   160,   145,   145,   161,   145,   162,
     145,   145,   145,   163,   163,   164,   164,   164,   165,   166,
     165,   167,   165,   165,   168,   168
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     7,     0,     2,     2,     2,     2,
       3,     0,     0,     0,     0,     8,     0,     4,     0,     3,
       0,     3,     1,     0,     2,     2,     0,     0,     5,     0,
       3,     0,     0,     6,     0,     0,     5,     0,     0,     0,
       0,    11,     4,     0,     1,     0,     0,     0,     7,     0,
       0,     4,     0,     0,     6,     0,     0,     3,     0,     0,
       5,     0,     0,     0,     6,     0,     0,     5,     1,     1,
       0,     5,     0,     0,     0,     7,     0,     0,     0,     8,
       0,     0,     0,     8,     2,     0,     3,     0,     3,     0,
       3,     0,     3,     0,     3,     0,     3,     0,     3,     0,
       2,     3,     0,     0,     0,     0,    11,     0,     0,     0,
       0,    12,     0,     5,     0,     0,     0,     9,     0,     0,
       9,     0,     0,     0,    12,     1,     1,     1,     1,     1,
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
#line 73 "yacc.y"
              {js_file = fopen(JSFILE, "a");add_to_scope_stack("global");}
#line 1671 "y.tab.c"
    break;

  case 3: /* $@2: %empty  */
#line 73 "yacc.y"
                                                                                               { append_in_jsFile("function main(){\n");add_to_scope_stack("main"); tab_counter++; }
#line 1677 "y.tab.c"
    break;

  case 4: /* c_file: $@1 BEFORE_MAIN MAIN LC $@2 STATEMENTS RC  */
#line 73 "yacc.y"
                                                                                                                                                                                                   { remove_from_scope_stack(); append_in_jsFile("}\n"); append_in_jsFile("main();\n"); remove_from_scope_stack(); fclose(js_file);}
#line 1683 "y.tab.c"
    break;

  case 5: /* c_file: %empty  */
#line 74 "yacc.y"
                          {append_in_jsFile("\n"); exit(2);}
#line 1689 "y.tab.c"
    break;

  case 11: /* BEFORE_MAIN: %empty  */
#line 82 "yacc.y"
                                              {}
#line 1695 "y.tab.c"
    break;

  case 12: /* $@3: %empty  */
#line 93 "yacc.y"
                      {append_in_jsFile("console.log");}
#line 1701 "y.tab.c"
    break;

  case 13: /* $@4: %empty  */
#line 93 "yacc.y"
                                                             {append_in_jsFile("(");}
#line 1707 "y.tab.c"
    break;

  case 14: /* $@5: %empty  */
#line 93 "yacc.y"
                                                                                                               {append_in_jsFile(")");}
#line 1713 "y.tab.c"
    break;

  case 15: /* PRINTF_SCANF: PRINTF $@3 LP $@4 QUOTED_CHAR_OR_STRING RP $@5 SEMICOLON_NT  */
#line 93 "yacc.y"
                                                                                                                                                      {append_in_jsFile("\n");}
#line 1719 "y.tab.c"
    break;

  case 16: /* $@6: %empty  */
#line 96 "yacc.y"
                           {append_in_jsFile("return ");}
#line 1725 "y.tab.c"
    break;

  case 17: /* RETURN_CONT_BREAK: RETURN $@6 EXPRESSION_NT SEMICOLON_NT  */
#line 96 "yacc.y"
                                                                                     {append_in_jsFile("\n");}
#line 1731 "y.tab.c"
    break;

  case 18: /* $@7: %empty  */
#line 97 "yacc.y"
                                            {append_in_jsFile("break");}
#line 1737 "y.tab.c"
    break;

  case 19: /* RETURN_CONT_BREAK: BREAK $@7 SEMICOLON_NT  */
#line 97 "yacc.y"
                                                                                       {append_in_jsFile("\n");}
#line 1743 "y.tab.c"
    break;

  case 20: /* $@8: %empty  */
#line 98 "yacc.y"
                                             {append_in_jsFile("continue");}
#line 1749 "y.tab.c"
    break;

  case 21: /* RETURN_CONT_BREAK: CONTINUE $@8 SEMICOLON_NT  */
#line 98 "yacc.y"
                                                                                           {append_in_jsFile("\n");}
#line 1755 "y.tab.c"
    break;

  case 22: /* QUOTED_CHAR_OR_STRING: QUOTED_STRING  */
#line 101 "yacc.y"
                                       {append_in_jsFile(yylval.var_name);}
#line 1761 "y.tab.c"
    break;

  case 26: /* $@9: %empty  */
#line 114 "yacc.y"
                            {insert_to_table(yylval.var_name,current_data_type);append_in_jsFile("const ");}
#line 1767 "y.tab.c"
    break;

  case 27: /* $@10: %empty  */
#line 114 "yacc.y"
                                                                                                                 {append_in_jsFile(yylval.var_name); append_in_jsFile(" = ");}
#line 1773 "y.tab.c"
    break;

  case 28: /* DEFINE_DECLARATION: DEFINE $@9 VAR $@10 TERMINAL  */
#line 114 "yacc.y"
                                                                                                                                                                                        {append_in_jsFile(";\n");}
#line 1779 "y.tab.c"
    break;

  case 29: /* $@11: %empty  */
#line 117 "yacc.y"
                      { insert_to_table(yylval.var_name,current_data_type); append_in_jsFile("let ");append_in_jsFile(yylval.var_name);}
#line 1785 "y.tab.c"
    break;

  case 30: /* VAR_DECLARATION: VAR $@11 SEMICOLON_NT  */
#line 117 "yacc.y"
                                                                                                                                                      {append_in_jsFile("\n");}
#line 1791 "y.tab.c"
    break;

  case 31: /* $@12: %empty  */
#line 118 "yacc.y"
                                      { insert_to_table(yylval.var_name,current_data_type); append_in_jsFile("let ");append_in_jsFile( yylval.var_name);}
#line 1797 "y.tab.c"
    break;

  case 32: /* $@13: %empty  */
#line 118 "yacc.y"
                                                                                                                                                                     {append_in_jsFile(" = ");}
#line 1803 "y.tab.c"
    break;

  case 33: /* VAR_DECLARATION: VAR $@12 ASSIGNMENT $@13 TERMINAL SEMICOLON_NT  */
#line 118 "yacc.y"
                                                                                                                                                                                                                      {append_in_jsFile("\n");}
#line 1809 "y.tab.c"
    break;

  case 34: /* $@14: %empty  */
#line 119 "yacc.y"
                                      { insert_to_table(yylval.var_name,current_data_type); append_in_jsFile("let ");append_in_jsFile(yylval.var_name);}
#line 1815 "y.tab.c"
    break;

  case 35: /* $@15: %empty  */
#line 119 "yacc.y"
                                                                                                                                                                         {append_in_jsFile(" = []");}
#line 1821 "y.tab.c"
    break;

  case 36: /* VAR_DECLARATION: VAR $@14 ARRAY_DIMENSION $@15 SEMICOLON_NT  */
#line 119 "yacc.y"
                                                                                                                                                                                                                   {append_in_jsFile("\n");}
#line 1827 "y.tab.c"
    break;

  case 37: /* $@16: %empty  */
#line 122 "yacc.y"
                               { append_in_jsFile("function ");append_in_jsFile(yylval.var_name); add_to_scope_stack(yylval.var_name); agregarFuncion(yylval.var_name, current_data_type, 1);}
#line 1833 "y.tab.c"
    break;

  case 38: /* $@17: %empty  */
#line 122 "yacc.y"
                                                                                                                                                                                                  {append_in_jsFile("(");}
#line 1839 "y.tab.c"
    break;

  case 39: /* $@18: %empty  */
#line 122 "yacc.y"
                                                                                                                                                                                                                                         {append_in_jsFile(") ");}
#line 1845 "y.tab.c"
    break;

  case 40: /* $@19: %empty  */
#line 122 "yacc.y"
                                                                                                                                                                                                                                                                      {append_in_jsFile(" {\n"); tab_counter++;}
#line 1851 "y.tab.c"
    break;

  case 41: /* FUNCTION_DECLARATION: VAR $@16 LP $@17 PARAMETERS RP $@18 LC $@19 STATEMENTS RC  */
#line 122 "yacc.y"
                                                                                                                                                                                                                                                                                                                               {tab_counter--;print_tabs(); append_in_jsFile("}\n"); remove_from_scope_stack(); }
#line 1857 "y.tab.c"
    break;

  case 45: /* $@20: %empty  */
#line 133 "yacc.y"
                           { append_in_jsFile("[");}
#line 1863 "y.tab.c"
    break;

  case 46: /* $@21: %empty  */
#line 133 "yacc.y"
                                                           { append_in_jsFile(yylval.var_name);}
#line 1869 "y.tab.c"
    break;

  case 47: /* $@22: %empty  */
#line 133 "yacc.y"
                                                                                                   { append_in_jsFile("]");}
#line 1875 "y.tab.c"
    break;

  case 50: /* $@23: %empty  */
#line 145 "yacc.y"
                           {append_in_jsFile(yylval.var_name);}
#line 1881 "y.tab.c"
    break;

  case 52: /* $@24: %empty  */
#line 146 "yacc.y"
                               {append_in_jsFile(", ");}
#line 1887 "y.tab.c"
    break;

  case 53: /* $@25: %empty  */
#line 146 "yacc.y"
                                                                  {append_in_jsFile(yylval.var_name);}
#line 1893 "y.tab.c"
    break;

  case 56: /* $@26: %empty  */
#line 150 "yacc.y"
                      {append_in_jsFile(yylval.var_name);}
#line 1899 "y.tab.c"
    break;

  case 58: /* $@27: %empty  */
#line 151 "yacc.y"
                               {append_in_jsFile(", ");}
#line 1905 "y.tab.c"
    break;

  case 59: /* $@28: %empty  */
#line 151 "yacc.y"
                                                             {append_in_jsFile(yylval.var_name);}
#line 1911 "y.tab.c"
    break;

  case 62: /* $@29: %empty  */
#line 155 "yacc.y"
                                           {append_in_jsFile("let ");append_in_jsFile(yylval.var_name);}
#line 1917 "y.tab.c"
    break;

  case 63: /* $@30: %empty  */
#line 155 "yacc.y"
                                                                                                                    {append_in_jsFile(" = ");}
#line 1923 "y.tab.c"
    break;

  case 65: /* $@31: %empty  */
#line 156 "yacc.y"
                                                                      {append_in_jsFile(yylval.var_name);}
#line 1929 "y.tab.c"
    break;

  case 66: /* $@32: %empty  */
#line 156 "yacc.y"
                                                                                                                      {append_in_jsFile(" = ");}
#line 1935 "y.tab.c"
    break;

  case 68: /* EXPRESSION_DECLARATION_OR_NoDECL: VAR  */
#line 157 "yacc.y"
                                                                      { append_in_jsFile(yylval.var_name);}
#line 1941 "y.tab.c"
    break;

  case 72: /* $@33: %empty  */
#line 170 "yacc.y"
                      { append_in_jsFile(yylval.var_name); search_var_in_scope(yylval.var_name); lVarType = lookup_in_table(yylval.var_name);}
#line 1947 "y.tab.c"
    break;

  case 73: /* $@34: %empty  */
#line 170 "yacc.y"
                                                                                                                                                          {append_in_jsFile(" = ");}
#line 1953 "y.tab.c"
    break;

  case 74: /* $@35: %empty  */
#line 170 "yacc.y"
                                                                                                                                                                                                   {verificarTipo();}
#line 1959 "y.tab.c"
    break;

  case 75: /* VAR_OR_FUNC_USE: VAR $@33 ASSIGNMENT $@34 EXPRESSION_NT $@35 SEMICOLON_NT  */
#line 170 "yacc.y"
                                                                                                                                                                                                                                   { append_in_jsFile("\n");}
#line 1965 "y.tab.c"
    break;

  case 76: /* $@36: %empty  */
#line 171 "yacc.y"
                                                             {append_in_jsFile(yylval.var_name); agregarFuncion(yylval.var_name,current_data_type,0);}
#line 1971 "y.tab.c"
    break;

  case 77: /* $@37: %empty  */
#line 171 "yacc.y"
                                                                                                                                                           { append_in_jsFile("("); }
#line 1977 "y.tab.c"
    break;

  case 78: /* $@38: %empty  */
#line 171 "yacc.y"
                                                                                                                                                                                                   { append_in_jsFile(")"); }
#line 1983 "y.tab.c"
    break;

  case 79: /* VAR_OR_FUNC_USE: VAR $@36 LP $@37 ARGUMENTS RP $@38 SEMICOLON_NT  */
#line 171 "yacc.y"
                                                                                                                                                                                                                                           { append_in_jsFile("\n");}
#line 1989 "y.tab.c"
    break;

  case 80: /* $@39: %empty  */
#line 172 "yacc.y"
                                      { append_in_jsFile(yylval.var_name); search_var_in_scope(yylval.var_name);}
#line 1995 "y.tab.c"
    break;

  case 81: /* $@40: %empty  */
#line 172 "yacc.y"
                                                                                                                                                    {append_in_jsFile(" = ");}
#line 2001 "y.tab.c"
    break;

  case 82: /* $@41: %empty  */
#line 172 "yacc.y"
                                                                                                                                                                                             {verificarTipo();}
#line 2007 "y.tab.c"
    break;

  case 83: /* VAR_OR_FUNC_USE: VAR $@39 ARRAY_DIMENSION_WRITE ASSIGNMENT $@40 EXPRESSION_NT $@41 SEMICOLON_NT  */
#line 172 "yacc.y"
                                                                                                                                                                                                                             {append_in_jsFile("\n");}
#line 2013 "y.tab.c"
    break;

  case 85: /* $@42: %empty  */
#line 182 "yacc.y"
              {print_tabs();}
#line 2019 "y.tab.c"
    break;

  case 86: /* STATEMENTS: $@42 VAR_OR_FUNC_USE STATEMENTS  */
#line 182 "yacc.y"
                                                        {}
#line 2025 "y.tab.c"
    break;

  case 87: /* $@43: %empty  */
#line 183 "yacc.y"
                          {print_tabs();}
#line 2031 "y.tab.c"
    break;

  case 88: /* STATEMENTS: $@43 IF_BLOCK STATEMENTS  */
#line 183 "yacc.y"
                                                             {}
#line 2037 "y.tab.c"
    break;

  case 89: /* $@44: %empty  */
#line 184 "yacc.y"
                          {print_tabs();}
#line 2043 "y.tab.c"
    break;

  case 90: /* STATEMENTS: $@44 WHILE_BLOCK STATEMENTS  */
#line 184 "yacc.y"
                                                                 {}
#line 2049 "y.tab.c"
    break;

  case 91: /* $@45: %empty  */
#line 185 "yacc.y"
                          {print_tabs();}
#line 2055 "y.tab.c"
    break;

  case 92: /* STATEMENTS: $@45 DO_WHILE_BLOCK STATEMENTS  */
#line 185 "yacc.y"
                                                                    {}
#line 2061 "y.tab.c"
    break;

  case 93: /* $@46: %empty  */
#line 186 "yacc.y"
                          {print_tabs();}
#line 2067 "y.tab.c"
    break;

  case 94: /* STATEMENTS: $@46 FOR_BLOCK STATEMENTS  */
#line 186 "yacc.y"
                                                              {}
#line 2073 "y.tab.c"
    break;

  case 95: /* $@47: %empty  */
#line 187 "yacc.y"
                          {print_tabs();}
#line 2079 "y.tab.c"
    break;

  case 96: /* STATEMENTS: $@47 PRINTF_SCANF STATEMENTS  */
#line 187 "yacc.y"
                                                                 {}
#line 2085 "y.tab.c"
    break;

  case 97: /* $@48: %empty  */
#line 188 "yacc.y"
              {print_tabs();}
#line 2091 "y.tab.c"
    break;

  case 98: /* STATEMENTS: $@48 COMMENT STATEMENTS  */
#line 188 "yacc.y"
                                                {}
#line 2097 "y.tab.c"
    break;

  case 99: /* $@49: %empty  */
#line 189 "yacc.y"
                          {print_tabs();}
#line 2103 "y.tab.c"
    break;

  case 100: /* STATEMENTS: $@49 RETURN_CONT_BREAK  */
#line 189 "yacc.y"
                                                           {}
#line 2109 "y.tab.c"
    break;

  case 102: /* STATEMENTS: %empty  */
#line 191 "yacc.y"
                    { }
#line 2115 "y.tab.c"
    break;

  case 103: /* $@50: %empty  */
#line 199 "yacc.y"
                    {create_scope_2();append_in_jsFile("if (");}
#line 2121 "y.tab.c"
    break;

  case 104: /* $@51: %empty  */
#line 199 "yacc.y"
                                                                                     {  append_in_jsFile(") {\n"); tab_counter++;}
#line 2127 "y.tab.c"
    break;

  case 105: /* $@52: %empty  */
#line 199 "yacc.y"
                                                                                                                                                 {remove_from_scope_stack();tab_counter--; print_tabs(); append_in_jsFile("}\n");}
#line 2133 "y.tab.c"
    break;

  case 107: /* $@53: %empty  */
#line 202 "yacc.y"
                            {create_scope_2();print_tabs(); append_in_jsFile("else if (");}
#line 2139 "y.tab.c"
    break;

  case 108: /* $@54: %empty  */
#line 202 "yacc.y"
                                                                                                                   {append_in_jsFile(")");}
#line 2145 "y.tab.c"
    break;

  case 109: /* $@55: %empty  */
#line 202 "yacc.y"
                                                                                                                                               {append_in_jsFile("{\n"); tab_counter++;}
#line 2151 "y.tab.c"
    break;

  case 110: /* $@56: %empty  */
#line 202 "yacc.y"
                                                                                                                                                                                                       {remove_from_scope_stack();tab_counter--; print_tabs(); append_in_jsFile("}\n"); }
#line 2157 "y.tab.c"
    break;

  case 112: /* $@57: %empty  */
#line 203 "yacc.y"
                                           {create_scope_2();print_tabs();tab_counter++;append_in_jsFile("else {\n"); }
#line 2163 "y.tab.c"
    break;

  case 113: /* ELSEIF_OR_ELSE: ELSE LC $@57 STATEMENTS RC  */
#line 203 "yacc.y"
                                                                                                                                      {remove_from_scope_stack();tab_counter--; print_tabs(); append_in_jsFile("}\n"); }
#line 2169 "y.tab.c"
    break;

  case 114: /* ELSEIF_OR_ELSE: %empty  */
#line 204 "yacc.y"
                                                                                                             {append_in_jsFile("\n");}
#line 2175 "y.tab.c"
    break;

  case 115: /* $@58: %empty  */
#line 212 "yacc.y"
                         {create_scope_2();append_in_jsFile("for(");}
#line 2181 "y.tab.c"
    break;

  case 116: /* $@59: %empty  */
#line 212 "yacc.y"
                                                                                                 {append_in_jsFile("){\n"); tab_counter++;}
#line 2187 "y.tab.c"
    break;

  case 117: /* FOR_BLOCK: FOR LP $@58 FOR_BLOCK_PARAMETERS RP LC $@59 STATEMENTS RC  */
#line 212 "yacc.y"
                                                                                                                                                          {remove_from_scope_stack();tab_counter--; print_tabs(); append_in_jsFile("}\n");}
#line 2193 "y.tab.c"
    break;

  case 118: /* $@60: %empty  */
#line 215 "yacc.y"
                       {create_scope_2();append_in_jsFile("while(");}
#line 2199 "y.tab.c"
    break;

  case 119: /* $@61: %empty  */
#line 215 "yacc.y"
                                                                                          {append_in_jsFile("){\n"); tab_counter++;}
#line 2205 "y.tab.c"
    break;

  case 120: /* WHILE_BLOCK: WHILE LP $@60 EXPRESSION_NT RP LC $@61 STATEMENTS RC  */
#line 215 "yacc.y"
                                                                                                                                                   {remove_from_scope_stack();tab_counter--; print_tabs(); append_in_jsFile("}\n"); }
#line 2211 "y.tab.c"
    break;

  case 121: /* $@62: %empty  */
#line 218 "yacc.y"
                        {create_scope_2();append_in_jsFile("do{\n"); tab_counter++;}
#line 2217 "y.tab.c"
    break;

  case 122: /* $@63: %empty  */
#line 218 "yacc.y"
                                                                                                            {remove_from_scope_stack();tab_counter--;print_tabs(); append_in_jsFile("}while(");}
#line 2223 "y.tab.c"
    break;

  case 123: /* $@64: %empty  */
#line 218 "yacc.y"
                                                                                                                                                                                                                  {append_in_jsFile(")");}
#line 2229 "y.tab.c"
    break;

  case 124: /* DO_WHILE_BLOCK: DO LC $@62 STATEMENTS RC WHILE LP $@63 EXPRESSION_NT RP $@64 SEMICOLON_NT  */
#line 218 "yacc.y"
                                                                                                                                                                                                                                                        {append_in_jsFile("\n");}
#line 2235 "y.tab.c"
    break;

  case 125: /* TERMINAL: NUMBER  */
#line 221 "yacc.y"
                         { append_in_jsFile( yylval.var_name); anhadirExpresion(ES_INT + 48); }
#line 2241 "y.tab.c"
    break;

  case 126: /* TERMINAL: QUOTED_CHAR  */
#line 222 "yacc.y"
                                      { append_in_jsFile(yylval.var_name); anhadirExpresion(ES_CHAR + 48); }
#line 2247 "y.tab.c"
    break;

  case 127: /* TERMINAL: QUOTED_STRING  */
#line 223 "yacc.y"
                                        { append_in_jsFile( yylval.var_name); anhadirExpresion(ES_STRING + 48);}
#line 2253 "y.tab.c"
    break;

  case 128: /* COMMENT: ILCOMMENT  */
#line 226 "yacc.y"
                            { append_in_jsFile( yylval.var_name); append_in_jsFile("\n");}
#line 2259 "y.tab.c"
    break;

  case 129: /* COMMENT: MLCOMMENT  */
#line 227 "yacc.y"
                            { append_in_jsFile(yylval.var_name); }
#line 2265 "y.tab.c"
    break;

  case 130: /* TYPE: INT  */
#line 230 "yacc.y"
                                { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type);  }
#line 2271 "y.tab.c"
    break;

  case 131: /* TYPE: CHAR  */
#line 231 "yacc.y"
                                        { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type); 	}
#line 2277 "y.tab.c"
    break;

  case 132: /* TYPE: FLOAT  */
#line 232 "yacc.y"
                                        { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type); 	}
#line 2283 "y.tab.c"
    break;

  case 133: /* TYPE: DOUBLE  */
#line 233 "yacc.y"
                                        { (yyval.data_type)=(yyvsp[0].data_type); current_data_type=(yyvsp[0].data_type); 	}
#line 2289 "y.tab.c"
    break;

  case 134: /* TYPE: VOID  */
#line 234 "yacc.y"
                                        { }
#line 2295 "y.tab.c"
    break;

  case 135: /* $@65: %empty  */
#line 241 "yacc.y"
                             {append_in_jsFile(" == ");}
#line 2301 "y.tab.c"
    break;

  case 137: /* $@66: %empty  */
#line 242 "yacc.y"
                                         {append_in_jsFile(" != ");}
#line 2307 "y.tab.c"
    break;

  case 139: /* $@67: %empty  */
#line 243 "yacc.y"
                                        {append_in_jsFile(" > ");}
#line 2313 "y.tab.c"
    break;

  case 141: /* $@68: %empty  */
#line 244 "yacc.y"
                                        {append_in_jsFile(" < ");}
#line 2319 "y.tab.c"
    break;

  case 143: /* $@69: %empty  */
#line 245 "yacc.y"
                                         {append_in_jsFile(" <= ");}
#line 2325 "y.tab.c"
    break;

  case 145: /* $@70: %empty  */
#line 246 "yacc.y"
                                         {append_in_jsFile(" >= ");}
#line 2331 "y.tab.c"
    break;

  case 147: /* $@71: %empty  */
#line 248 "yacc.y"
                                          {append_in_jsFile(" && ");}
#line 2337 "y.tab.c"
    break;

  case 149: /* $@72: %empty  */
#line 249 "yacc.y"
                                         {append_in_jsFile(" || ");}
#line 2343 "y.tab.c"
    break;

  case 151: /* $@73: %empty  */
#line 250 "yacc.y"
                               {append_in_jsFile("!");}
#line 2349 "y.tab.c"
    break;

  case 153: /* $@74: %empty  */
#line 252 "yacc.y"
                                          {append_in_jsFile(" + ");anhadirExpresion('+');}
#line 2355 "y.tab.c"
    break;

  case 155: /* $@75: %empty  */
#line 253 "yacc.y"
                                           {append_in_jsFile(" - ");anhadirExpresion('-');}
#line 2361 "y.tab.c"
    break;

  case 157: /* $@76: %empty  */
#line 254 "yacc.y"
                                         {append_in_jsFile(" * ");anhadirExpresion('*');}
#line 2367 "y.tab.c"
    break;

  case 159: /* $@77: %empty  */
#line 255 "yacc.y"
                                         {append_in_jsFile(" / ");anhadirExpresion('/');}
#line 2373 "y.tab.c"
    break;

  case 161: /* $@78: %empty  */
#line 256 "yacc.y"
                                         {append_in_jsFile(" %% ");}
#line 2379 "y.tab.c"
    break;

  case 163: /* EXPRESSION: EXPRESSION PLUS PLUS  */
#line 257 "yacc.y"
                                               {append_in_jsFile(" ++");}
#line 2385 "y.tab.c"
    break;

  case 164: /* $@79: %empty  */
#line 258 "yacc.y"
                                    {append_in_jsFile("++");}
#line 2391 "y.tab.c"
    break;

  case 166: /* EXPRESSION: EXPRESSION MINUS MINUS  */
#line 259 "yacc.y"
                                                 {append_in_jsFile("--");}
#line 2397 "y.tab.c"
    break;

  case 167: /* $@80: %empty  */
#line 260 "yacc.y"
                                      {append_in_jsFile("--");}
#line 2403 "y.tab.c"
    break;

  case 169: /* $@81: %empty  */
#line 262 "yacc.y"
                             {append_in_jsFile("(");anhadirExpresion('(');}
#line 2409 "y.tab.c"
    break;

  case 170: /* EXPRESSION: LP $@81 EXPRESSION RP  */
#line 262 "yacc.y"
                                                                                          {append_in_jsFile(") ");anhadirExpresion(')');}
#line 2415 "y.tab.c"
    break;

  case 171: /* EXPRESSION: VAR  */
#line 264 "yacc.y"
                              {append_in_jsFile( yylval.var_name); search_var_in_scope(yylval.var_name); anhadirExpresion(lookup_in_table(yylval.var_name)+ 48);}
#line 2421 "y.tab.c"
    break;

  case 173: /* SEMICOLON_NT: SEMICOLON  */
#line 274 "yacc.y"
                        { append_in_jsFile(";");}
#line 2427 "y.tab.c"
    break;

  case 174: /* SEMICOLON_NT: %empty  */
#line 275 "yacc.y"
                                      {yyerror("syntax error : missing ';'\n");}
#line 2433 "y.tab.c"
    break;

  case 175: /* SEMICOLON_OR_ERROR: SEMICOLON  */
#line 278 "yacc.y"
                              { append_in_jsFile(";");}
#line 2439 "y.tab.c"
    break;

  case 176: /* SEMICOLON_OR_ERROR: COMA  */
#line 279 "yacc.y"
                                         { append_in_jsFile(","); append_in_jsFile("\nSYNTAX_ERROR: You put a ',', must be a ';'!\n");}
#line 2445 "y.tab.c"
    break;

  case 177: /* SEMICOLON_OR_ERROR: COLON  */
#line 280 "yacc.y"
                                          { append_in_jsFile(":"); append_in_jsFile("\nSYNTAX_ERROR: You put a ':', must be a ';'!\n");}
#line 2451 "y.tab.c"
    break;

  case 179: /* $@82: %empty  */
#line 284 "yacc.y"
                                          { append_in_jsFile(yylval.var_name); append_in_jsFile("= ");}
#line 2457 "y.tab.c"
    break;

  case 181: /* $@83: %empty  */
#line 285 "yacc.y"
                                                 {append_in_jsFile("= ");}
#line 2463 "y.tab.c"
    break;

  case 182: /* EXPRESSION_NT: EXPRESSION ASSIGNMENT $@83 EXPRESSION  */
#line 285 "yacc.y"
                                                                                      {yyerror("Maybe you mean '==' operator?");}
#line 2469 "y.tab.c"
    break;

  case 183: /* EXPRESSION_NT: %empty  */
#line 286 "yacc.y"
                                         {yyerror("expected expression before the token");}
#line 2475 "y.tab.c"
    break;


#line 2479 "y.tab.c"

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

#line 292 "yacc.y"


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

void agregarFuncion(char var[VAR_NAME_LEN], int type,int is_def)
{	
		strcpy(fun[table_idFunction].var_name,var);
		fun[table_idFunction].type = type;
		fun[table_idFunction].is_def = is_def;
		table_idFunction++;
		

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
	char error_mensaje[200];
	extern int yylineno;
	sprintf(error_mensaje,"\n****************\nParsing failed Line number: %d %s\n****************\n", yylineno, msg);
	
	append_in_jsFile(error_mensaje); 
	return 0;
}
