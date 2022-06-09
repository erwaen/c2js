%{
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
%}

%union{
int data_type;
char var_name[30];
}

%token VAR
%token LNOT LOR LAND LEQ GEQ LT GT NEQ EQ PLUS MINUS MUL DIV MOD ASSIGNMENT
%token MAIN VOID RETURN BREAK CONTINUE FOR DO WHILE IF ELSE ELSEIF PRINTF DEFINE INCLUDE
%token NUMBER QUOTED_STRING 
%token LC RC COMA RB LB RP LP SEMICOLON COLON QM 
%token ILCOMMENT MLCOMMENT

%left LAND LOR GEQ LEQ NOT GT LT NEQ DEQ PLUS MINUS MUL DIV MOD

%token<data_type>INT
%token<data_type>CHAR
%token<data_type>FLOAT
%token<data_type>DOUBLE



%type<data_type>TYPE



%start c_file


%%

c_file      : {add_to_scope_stack("global");} BEFORE_MAIN MAIN LC {printf("function main(){\n"); add_to_scope_stack("main"); tab_counter++; } STATEMENTS RC { remove_from_scope_stack(); printf("}");printf("\n/*end of main function*/\n"); remove_from_scope_stack(); } 
            | /*nothing*/ {printf("\n"); exit(2);}
            ;

BEFORE_MAIN		: INCLUDE BEFORE_MAIN 
				| DEFINE_DECLARATION BEFORE_MAIN
				| DECLARATION BEFORE_MAIN
				| COMMENT BEFORE_MAIN
				| error DELIMITER BEFORE_MAIN
				| /*nothing*/ {} 
				;




					


/* ===========================================================
	===  DECLARATIONS  (FOR VAR AND FUNCTIONS and #DEFINE) ===
	=============================================*/

DECLARATION		: TYPE FUNCTION_DECLARATION 
				| TYPE VAR_DECLARATION
				;
			


DEFINE_DECLARATION : DEFINE {insert_to_table(yylval.var_name,current_data_type);printf("const ");} VAR {printf("%s = ", yylval.var_name);} TERMINAL {printf(";\n");}
				   ;

VAR_DECLARATION : VAR { insert_to_table(yylval.var_name,current_data_type); printf("let %s", yylval.var_name);} SEMICOLON_NT {printf("\n");}
				| VAR { insert_to_table(yylval.var_name,current_data_type); printf("let %s", yylval.var_name);} ASSIGNMENT {printf(" = ");} TERMINAL SEMICOLON_NT {printf("\n");}
				| VAR { insert_to_table(yylval.var_name,current_data_type); printf("let %s", yylval.var_name);} ARRAY_DIMENSION  ARRAY_ASSIGNMENT SEMICOLON_NT {printf("\n");}
				;

FUNCTION_DECLARATION	:  VAR { printf("function %s", yylval.var_name); add_to_scope_stack(yylval.var_name);} LP {printf("(");} PARAMETERS RP {printf(") ");} LC {printf(" {\n"); tab_counter++;} STATEMENTS RC {tab_counter--;print_tabs(); printf("}\n"); remove_from_scope_stack(); }
						;

ARRAY_DIMENSION : LB ARRAY_SIZE RB ARRAY_DIMENSION
				| LB ARRAY_SIZE RB 
				;

ARRAY_SIZE : NUMBER 
		   | VAR
		   | /* nothing*/ 
		   ;

ARRAY_ASSIGNMENT	: ASSIGNMENT {printf(" = ");} // IN DEVELOPMENT
					| /*NO ASIGNMENT */
					;



/* 	
	=====================================================================
	=== PARAMETERS FOR FUNCTIONS OR ARGUMENTS and FOR LOOPS   ====
	====================================================================
*/

PARAMETERS	: TYPE VAR {printf("%s", yylval.var_name);} PARAMETERS
			| COMA {printf(", ");} TYPE VAR {printf("%s", yylval.var_name);} PARAMETERS
			| /*nothing*/ 
			;

EXPRESSION_DECLARATION_OR_NoDECL: TYPE VAR {printf("let %s", yylval.var_name);} ASSIGNMENT {printf(" = ");} EXPRESSION_NT
								| VAR {printf("%s", yylval.var_name);} ASSIGNMENT {printf(" = ");} EXPRESSION_NT 
								| VAR { printf("%s", yylval.var_name);}
								| EXPRESSION
								| /*nothing*/  
								;
								
FOR_BLOCK_PARAMETERS	: EXPRESSION_DECLARATION_OR_NoDECL SEMICOLON_OR_ERROR EXPRESSION_DECLARATION_OR_NoDECL SEMICOLON_OR_ERROR EXPRESSION // int i = 0; i < 5; i++
						;		
/* 	
	=====================================================================
	=== USE THE DECLARATIONS like call a function or use variables   ====
	====================================================================
*/

VAR_OR_FUNC_USE	: VAR { printf("%s",yylval.var_name); search_var_in_scope(yylval.var_name); } ASSIGNMENT {printf(" = ");} EXPRESSION_NT  SEMICOLON_NT { printf("\n");}
				| /*for call a function*/VAR {printf("%s",yylval.var_name);}  LP { printf("("); } PARAMETERS RP { printf(")"); } SEMICOLON_NT { printf("\n");}
				| TYPE VAR_DECLARATION 
				;

/* 	
	=====================================================================
	===  ALL TYPES OF STATEMENTS ====
	====================================================================
*/

STATEMENTS  : {print_tabs();} VAR_OR_FUNC_USE STATEMENTS{} 
			| {print_tabs();} IF_BLOCK STATEMENTS{}
			| {print_tabs();} WHILE_BLOCK STATEMENTS {}
			| {print_tabs();} DO_WHILE_BLOCK STATEMENTS {}
			| {print_tabs();} FOR_BLOCK STATEMENTS{}
            | {print_tabs();} COMMENT STATEMENTS{}
			| error DELIMITER BEFORE_MAIN
            | /* */ { }
            ;

/* 	
	=====================================================================
	=== IF / ELSE / ELSE IF   ====
	====================================================================
*/
IF_BLOCK    : IF LP {create_scope_2();printf("if (");} EXPRESSION_NT RP LC {  printf(") {\n"); tab_counter++;} STATEMENTS RC {remove_from_scope_stack();tab_counter--; print_tabs(); printf("}\n");} ELSEIF_OR_ELSE
            ;

ELSEIF_OR_ELSE 	: ELSEIF LP {create_scope_2();print_tabs(); printf("else if (");} EXPRESSION_NT	RP {printf(")");} LC {printf("{\n"); tab_counter++;} STATEMENTS RC {remove_from_scope_stack();tab_counter--; print_tabs(); printf("}\n"); } ELSEIF_OR_ELSE
				| ELSE  LC {create_scope_2();print_tabs();tab_counter++;printf("else {\n"); } STATEMENTS RC {remove_from_scope_stack();tab_counter--; print_tabs(); printf("}\n"); }
				| /* nothing, this is when end the if and there's no more else if or else */ {printf("\n");}

/* 	
	=====================================================================
	=== FOR LOOP/ WHILE LOOP/ DO WHILE   ====
	====================================================================
*/

FOR_BLOCK	: FOR LP {create_scope_2();printf("for(");} FOR_BLOCK_PARAMETERS RP LC {printf("){\n"); tab_counter++;} STATEMENTS RC {remove_from_scope_stack();tab_counter--; print_tabs(); printf("}\n");} // for(FOR_BLOCK_PARAMETERS){STATEMENTS}
			;

WHILE_BLOCK : WHILE LP {create_scope_2();printf("while(");} EXPRESSION_NT RP LC {printf("){\n"); tab_counter++;} STATEMENTS RC {remove_from_scope_stack();tab_counter--; print_tabs(); printf("}\n"); }
			;

DO_WHILE_BLOCK 	: DO LC {create_scope_2();printf("do{\n"); tab_counter++;} STATEMENTS RC WHILE LP {remove_from_scope_stack();tab_counter--;print_tabs(); printf("}while(");} EXPRESSION_NT RP {printf(")");} SEMICOLON_NT {printf("\n");}
				;

TERMINAL	: NUMBER { printf("%s", yylval.var_name); }
			| QUOTED_STRING { printf("%s", yylval.var_name); }
			;
			
COMMENT     : ILCOMMENT     { printf("%s\n", yylval.var_name); }
            | MLCOMMENT     { printf("%s", yylval.var_name); }
            ;

TYPE		: INT 		{ $$=$1; current_data_type=$1;  }
			| CHAR  	{ $$=$1; current_data_type=$1; 	}
			| FLOAT 	{ $$=$1; current_data_type=$1; 	}
			| DOUBLE 	{ $$=$1; current_data_type=$1; 	}
			| VOID 		{ }
			;

	/* =========================
	=== Expression e.g -> a == 2 , var1 && var2, compare things like 2 <= 3 or math operations like 2 + 3 ===
	===========================*/
			// comparison operators first
EXPRESSION  : EXPRESSION  EQ {printf("== ");} EXPRESSION
 			| EXPRESSION NEQ {printf("!= ");} EXPRESSION
			| EXPRESSION GT {printf("> ");} EXPRESSION
			| EXPRESSION LT {printf("< ");} EXPRESSION
			| EXPRESSION LEQ {printf("<= ");} EXPRESSION			
			| EXPRESSION GEQ {printf(">= ");} EXPRESSION
			// logical operators
			| EXPRESSION LAND {printf("&& ");} EXPRESSION
			| EXPRESSION LOR {printf("|| ");} EXPRESSION
			| LNOT {printf("!");} EXPRESSION
			// Math operators
			| EXPRESSION PLUS {printf("+ ");} EXPRESSION
			| EXPRESSION MINUS {printf("- ");} EXPRESSION
			| EXPRESSION MUL {printf("* ");} EXPRESSION
			| EXPRESSION DIV {printf("/ ");} EXPRESSION
			| EXPRESSION MOD {printf("%% ");} EXPRESSION // for % mod symbol
			| EXPRESSION PLUS PLUS {printf("++");} // for x++
			| PLUS PLUS {printf("++");} EXPRESSION // for ++x
			| EXPRESSION MINUS MINUS {printf("--");}
			| MINUS MINUS {printf("--");} EXPRESSION 
			// For some expresions inside in a parenthesis
			| LP {printf("(");} EXPRESSION RP {printf(") ");}
			// terminals and vars
			| VAR {printf("%s", yylval.var_name);}
			// add later for arrays vars
			| TERMINAL
            ;/*in develop*/



	/* =========================
	=== FOR HANDLING ERRORES ===
	===========================*/
SEMICOLON_NT: SEMICOLON { printf(";");}
			| /*nothing*/ {yyerror("syntax error : missing ';'\n");}
			;

SEMICOLON_OR_ERROR: SEMICOLON { printf(";");}
				  | COMA { printf(","); printf("\nSYNTAX_ERROR: You put a ',', must be a ';'!\n");}
				  | COLON { printf(":"); printf("\nSYNTAX_ERROR: You put a ':', must be a ';'!\n");}
				  ;

EXPRESSION_NT: EXPRESSION
			 | VAR ASSIGNMENT { printf("%s ", yylval.var_name); printf("= ");} EXPRESSION
			 | EXPRESSION ASSIGNMENT {printf("= ");} EXPRESSION {yyerror("Maybe you mean '==' operator?");}
			 | /* nothing */ {yyerror("expected expression before the token");}
			 ;

DELIMITER : SEMICOLON 
		  | RC 
		  ; 
%%

#include "lex.yy.c"

void add_to_scope_stack(char newScopeName[VAR_NAME_LEN]){
	if(scopeStackCounter < SCOPE_SIZE){
		scopeStackCounter++;
		strcpy(scopeStack[scopeStackCounter], newScopeName);
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