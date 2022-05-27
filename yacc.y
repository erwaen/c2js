%{
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
	char for_var[MAX_NAME_LEN];
	struct symbol_table{char var_name[MAX_NAME_LEN]; int type;} sym[MAX_VARIABLES];
	extern int lookup_in_table(char var[MAX_NAME_LEN]);
	extern void insert_to_table(char var[MAX_NAME_LEN], int type);
	extern void print_tabs();
	char var_list[MAX_VARIABLES][MAX_NAME_LEN];	// MAX_VARIABLES variable names with each variable being atmost MAX_NAME_LEN characters long
	int string_or_var[MAX_VARIABLES];
	//extern int *yytext;
%}

%union{
int data_type;
char var_name[30];
}

%token VAR
%token LNOT LOR LAND LEQ GEQ LT GT NEQ EQ PLUS MINUS MUL DIV MOD ASSIGNMENT
%token MAIN RETURN BREAK CONTINUE FOR DO WHILE VOID IF ELSE ELSEIF PRINTF
%token QUOTED_STRING NUMBER NUMBER_DOT 
%token LC RC COMA RB LB RP LP SEMICOLON COLON QM 
%token ILCOMMENT MLCOMMENT

%token<data_type>INT
%token<data_type>CHAR
%token<data_type>FLOAT
%token<data_type>DOUBLE

%type<data_type>TYPE

%start program


%%

program     : MAIN LC {printf("function main(){\n"); tab_counter++;} STATEMENTS RC { printf("}");printf("\n/*end of main function*/\n"); }
            | /*nothing*/ {printf("\n"); exit(2);}
            ;

STATEMENTS  : {print_tabs();} IF_BLOCK STATEMENTS{ }
            | {print_tabs();} COMMENT STATEMENTS{ }
            | /* */ { }
            ;

IF_BLOCK    : IF LP {printf("if (");} EXPRESION RP LC {  printf(") {\n"); tab_counter++;} STATEMENTS RC {tab_counter--; print_tabs(); printf("}\n");}
            ;

EXPRESION   : /*in develop*/ {}
            ;

COMMENT     : ILCOMMENT     { printf("%s\n", yylval.var_name); }
            | MLCOMMENT     { printf("%s", yylval.var_name); }
            ;

%%

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