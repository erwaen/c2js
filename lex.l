
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
"%"           {return MOD;}

  /*
  ##  Assignment operators ##
  */
"="						{return ASSIGNMENT;}

  /*
  ##  Comparison operators ##
  */
"=="				  {return EQ;}
"!="					{return NEQ;}
">"					  {return GT;}
"<"					  {return LT;}
">="			    {return GEQ;}
"<="			    {return LEQ;}

  /*
  ##  Logical operators ##
  */
"&&"				  {return LAND;}
"||"				    {return LOR;}
"!"				    {return LNOT;}

  /*
  ##  Symbols ##
  */
"("				    {return LP;}
")"				    {return RP;}
"{"				    {return LC;}
"}"				    {return RC;}
"["				    {return LB;}
"]"				    {return RB;}
","				    {return COMA;}
";"				    {return SEMICOLON;}
":"				    {return COLON;}
"?"				    {return QM;}


  /* MAIN IN C */
"int main()" {return MAIN;}

  /* INCLUDE & DEFINES */
"#include<"[a-zA-Z][a-zA-Z0-9_]*".h>" {strcpy(yylval.var_name, yytext); return INCLUDE;}
"#define" 	      { return DEFINE;}

  /*
  ## DATA TYPES 
  */
"int"           {yylval.data_type=0; return INT;}
"char"          {yylval.data_type=1; return CHAR;}
"float"			    {yylval.data_type=2; return FLOAT;}
"double"	  	  {yylval.data_type=3; return DOUBLE;}




  /*
  ##  KEYWORDS ##
  */

"return"              {return RETURN;}
"break"               {return BREAK;}
"continue"            {return CONTINUE;}

"for"					        {return FOR;}
"do"                  {return DO;}
"while"				        {return WHILE;}
"void"                {return VOID;}

  /* if {} else if {} else{} */
"if"					        {return IF;}
"else"								{return ELSE;}
"else"[ ]+"if"        {return ELSEIF;} 

  /* 
  ## FUNCTIONS ##
  */

"printf"      {return PRINTF;}



  /* string in single quote and double quotes*/
\"[^"]*\"            {strcpy(yylval.var_name, yytext);return QUOTED_STRING;}
'[^']*'              {strcpy(yylval.var_name, yytext);return QUOTED_CHAR;}


  /* for variables*/

[a-zA-Z_][a-zA-Z0-9_]*     {strcpy(yylval.var_name, yytext); return VAR;}


  /* numbers and float */
[0-9]+("."[0-9]+)?              {strcpy(yylval.var_name, yytext);return NUMBER;}

[\n\t ]+							{/* ignoring newlines, tabs and spaces */}


%%


int yywrap(void) {
    return 1;
}