%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "cgen.h"
	#include <string.h>
	
	extern int yylex(void);
	extern int line_num;

%}

%define parse.error verbose

%union
{
	char* crepr;
}

%token <crepr> IDENTIFIER
%token <crepr> INTEGER_CONST
%token <crepr> REAL_CONST
%token <crepr> STRING
%token KW_INT
%token KW_REAL
%token KW_BOOL
%token KW_STRING
%token KW_TRUE
%token KW_FALSE
%token KW_IF
%left KW_THEN
%token KW_ELSE
%token KW_FI
%token KW_WHILE
%left KW_LOOP
%token KW_POOL
%token KW_CONST
%token KW_LET
%token KW_RETURN
%right KW_NOT
%left KW_AND
%left KW_OR
%token KW_START
%left ASSIGN
%left EQUAL_OR_LESS
%left NOT_EQUAL
%token ARROW

%token RDSTRING
%token RDINT
%token RDREAL
%token WRTSTRING
%token WRTINT
%token WRTREAL
%left  '+'
%left  '-'
%left  '*'
%left  '/'
%left  '%'
%left  '('
%left  ')'
%left  '<'
%left  '>'
%left  '='
%left  '{'
%left  '}' 


%start program

%type <crepr> data_types
%type <crepr> expr
%type <crepr> varDecl
%type <crepr> funcDecl
%type <crepr> identifiers
%type <crepr> arrayDecl
%type <crepr> funcParameters
%type <crepr> func
%type <crepr> read_string
%type <crepr> read_int
%type <crepr> read_real
%type <crepr> write_string
%type <crepr> write_int
%type <crepr> write_real
%type <crepr> allCommands
%type <crepr> decList
%type <crepr> whileCommand
%type <crepr> ifCommand
%type <crepr> returnCommand
%type <crepr> body

%%

program : decList {
		printf("#include <stdio.h>\n");
		printf("#include <stdlib.h>\n");
		puts(c_prologue);
		printf("%s", $1);
}
;

expr : IDENTIFIER  {$$ = template("%s",$1);}
		|INTEGER_CONST {$$ = template("%s",$1);}
		|REAL_CONST {$$ = template("%s",$1);}
		|STRING {$$ = template("%s",$1);}
		|read_int {$$ = template("%s",$1);}
		|read_string {$$ = template("%s",$1);}
		|read_real {$$ = template("%s",$1);}
		|KW_TRUE {$$ = template("1");}
		|KW_FALSE {$$ = template("0");}
		|func {$$ = template("%s",$1);}
		|KW_NOT expr {$$ = template("not%s",$2);}
		|'-' expr {$$ = template("-%s",$2);}
		|expr '*' expr {$$ = template("%s * %s",$1,$3);} 
		|expr '/' expr {$$ = template("%s / %s",$1,$3);}
		|expr '%' expr {$$ = template("%s %% %s",$1,$3);} 
		|expr '+' expr {$$ = template("%s + %s",$1,$3);}
		|expr '-' expr {$$ = template("%s - %s",$1,$3);}  
		|expr '>' expr {$$ = template("%s > %s",$1,$3);}
		|expr '=' expr {$$ = template("%s == %s",$1,$3);}
		|expr NOT_EQUAL expr {$$ = template("%s != %s",$1,$3);}
		|expr '<' expr {$$ = template("%s < %s",$1,$3);}
		|expr EQUAL_OR_LESS expr {$$ = template("%s * %s",$1,$3);}     
		|expr KW_AND expr {$$ = template("%s && %s",$1,$3);} 
		|expr KW_OR expr {$$ = template("%s || %s",$1,$3);} 
		|'(' expr ')' {$$ = template("(%s)",$2);}
; 

funcParameters : {$$ = template("");}
				| identifiers {$$ = template("%s",$1);}
				| expr {$$ = template("%s",$1);}
				| funcParameters ',' expr {$$ = template("%s %s",$3,$1);}
				| identifiers ':' data_types {$$ = template("%s %s",$3,$1);}
				| identifiers ':' data_types ',' funcParameters {$$ = template("%s %s,%s",$3,$1,$5);}
; 

read_string : RDSTRING '(' ')' {$$ = template("readString()");}
;

read_int : RDINT '(' ')' {$$ = template("readInt()");}
;

read_real : RDREAL '(' ')' {$$ = template("readReal()");}
;

write_string : WRTSTRING '(' STRING ')' {$$ = template("writeString(%s);\n",$3);}    
				|WRTSTRING '(' expr ')' {$$ = template("writeString(%s);\n",$3);}     
;

write_int : WRTINT '(' expr ')' {$$ = template("writeInt(%s);\n",$3);}
;

write_real : WRTREAL '(' STRING ')' {$$ = template("writeReal(%s);\n",$3);}
;

allCommands : IDENTIFIER ASSIGN expr ';' {$$ = template("%s = %s;\n",$1,$3);}
			  |ifCommand ';'{$$ = template("%s",$1);}
			  |funcDecl {$$ = template("%s",$1);}
			  |func ';' {$$ = template("%s;\n",$1);}
			  |whileCommand ';'{$$ = template("%s",$1);}
			  |returnCommand ';' {$$ = template("%s",$1);}
			  |varDecl {$$ = template("%s",$1);}
			  |write_int ';'{$$ = template("%s",$1);}
			  |write_real ';'{$$ = template("%s",$1);}
			  |write_string ';'{$$ = template("%s",$1);}
			  |read_int ';'{$$ = template("%s",$1);}
			  |read_real ';'{$$ = template("%s",$1);}
			  |read_string ';'{$$ = template("%s",$1);}
;

decList : varDecl {$$ = template("%s",$1);}
		  |funcDecl {$$ = template("%s",$1);}
		  |varDecl decList {$$ = template("%s %s\n",$1,$2);}
		  |funcDecl decList {$$ = template("%s %s",$1,$2);}
		  |KW_CONST identifiers ':' data_types ';' {$$ = template("static %s %s;\n",$4,$2);}
		  |KW_CONST identifiers ':' data_types ';' decList {$$ = template("static %s %s; \n%s",$4,$2,$6);}
;

funcDecl : KW_CONST IDENTIFIER ASSIGN '(' funcParameters ')' ':' data_types  {$$ = template("%s %s (%s)",$8,$2,$5);}
		   |KW_CONST KW_START ASSIGN '(' ')' ':' KW_INT ARROW '{' body '}' {$$ = template("int main() \n{\n%s}",$10);}
		   |KW_CONST IDENTIFIER ASSIGN '(' funcParameters ')' ':' data_types ARROW '{' body '}' ';' {$$ = template("%s %s (%s) \n{\n%s\n}\n",$8,$2,$5,$11);}
;

func : IDENTIFIER '(' funcParameters ')' {$$ = template("%s(%s)",$1,$3);}
;

body : allCommands {$$ = template("%s",$1);}
		| allCommands body {$$ = template("%s %s",$1,$2);}
;


ifCommand : KW_IF expr KW_THEN body  {$$ = template("if (%s)   {\n  %s}",$2,$4);}
			| KW_IF expr KW_THEN body KW_FI {$$ = template("if(%s)    \n%s",$2,$4);}
			| ifCommand KW_ELSE body {$$ = template(" else if \n{\n  %s\n}",$3);}
			| ifCommand KW_ELSE body KW_FI {$$ = template("%s else %s\n",$1,$3);}
;

whileCommand : KW_WHILE expr KW_LOOP body KW_POOL  {$$ = template("while(%s) \n{\n%s}\n",$2,$4);}
;

returnCommand : KW_RETURN {$$ = template("return;\n");}
				|KW_RETURN expr {$$ = template("return %s;\n",$2);}
;

varDecl : KW_LET {$$ = template("");}
		| KW_LET identifiers ':' data_types ';' {$$ = template("%s %s;\n",$4,$2);} 
;

arrayDecl : '[' expr ']' ':' data_types  {$$ = template("[%s]",$2);}
;

data_types : KW_INT {$$ = template("int");}
			| KW_REAL {$$ = template("real");}
			| KW_BOOL {$$ = template("int");}
			| KW_STRING {$$ = template("string");}
;	

identifiers : IDENTIFIER  {$$ = template("%s",$1);}
				| IDENTIFIER ',' identifiers {$$ = template("%s,%s",$1,$3);}
				| IDENTIFIER ASSIGN expr {$$ = template("%s = %s",$1,$3);}
				| IDENTIFIER ASSIGN expr ',' identifiers{$$ = template("%s %s %s;",$1,$3,$5);}
				| IDENTIFIER arrayDecl {$$ = template("%s %s",$1,$2);}
				| IDENTIFIER arrayDecl ASSIGN expr {$$ = template("%s %s %s",$1,$2,$4);}
;

%%
int main () {
  if ( yyparse() != 0 )
    printf("Rejected!\n");
  else
  	printf("//Accepted!");
}









