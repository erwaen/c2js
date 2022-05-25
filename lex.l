
%option yylineno
%{
	#include<stdio.h>
	#include<string.h>
	// #include"y.tab.h"
	#include<math.h>
%}

%%
/* multiline comments in C like /* int var1; \n printf("f"); *\/ */
"/\*"(.|\n)*"\*/"       {strcpy(yylval.var_name, yytext); return MLCOMMENT;} 

/* Single line comments in C e.g: '//', '//  ', '// lorem impsu2' */
"//"(.)*                {strcpy(yylval.var_name, yytext); return ILCOMMENT;} 


/*
  ##  Arithmetic operators ##
*/
"+"						{return PLUS;}
"-"						{return MINUS;}
"*"						{return MUL;}
"/"						{return DIV;}
"%"                     {return MOD;}

/*
  ##  Assignment operators ##
*/
"="						{return ASSIGNMENT;}

/*
  ##  Comparison operators ##
*/
"=="						{return EQ;}
"!="						{return NEQ;}
">"						    {return GT;}
"<"						    {return LT;}
">="					    {return GEQ;}
"<="					    {return LEQ;}

/*
  ##  Logical operators ##
*/


/*
  ##  Symbols ##
*/



%%


int yywrap(void) {
    return 1;
}