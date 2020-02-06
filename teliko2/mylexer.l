%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "myparser.tab.h"
	#include <string.h>
	#include "cgen.h"
	int line_num = 1;
	int tokenCount;
%}

IDENTIFIER [a-zA-Z_][0-9a-zA-Z_]*
DIGIT  [0-9]
INTEGER_CONST  {DIGIT}{DIGIT}*
DECIMAL ("."{INTEGER_CONST})|({INTEGER_CONST}("."{INTEGER_CONST}?)?)
REAL_CONST    {DECIMAL}([eE][+-]?{INTEGER_CONST})?
spec     ("\\n"|"\\t"|"\\r"|"\\\\"|"\\\"")
puncts 		("!"|"@"|"#"|"$"|"%"|"^"|"&"|"*"|"?"|":"|"."|"("|")"|"+"|"-"|"="|"/")
text     	([A-Z]|[a-z]|[0-9]|" "|{puncts}|{spec})

STRING  ("\"")({text}*)("\"")

%x comment
%%
int 					return KW_INT;
real 					return KW_REAL; 
bool 					return KW_BOOL;
string 					return KW_STRING;
true 					return KW_TRUE;
false 					return KW_FALSE;
if  					return KW_IF;
then 					return KW_THEN;
else 					return KW_ELSE;
fi  					return KW_FI;
while 					return KW_WHILE;
loop 					return KW_LOOP;
pool 					return KW_POOL;
const 					return KW_CONST;
let 					return KW_LET;
return 					return KW_RETURN;
not 					return KW_NOT;
and 					return KW_AND;
or  					return KW_OR;
start 					return KW_START;
writeReal				return WRTREAL;
writeInt				return WRTINT;
writeString				return WRTSTRING;
readInt					return RDINT;
readReal				return RDREAL;
readString				return RDSTRING;
"+"						return '+';
"-"						return '-';
"*"						return '*';
"/"						return '/';
"%"						return '%';
"<-"					return ASSIGN;
";"						return ';';
","						return ',';
"=>"					return ARROW;
"="						return '=';
"!="					return NOT_EQUAL;
"<"						return '<';
"<="					return EQUAL_OR_LESS;
">"						return '>';
"("						return '(';
")"						return ')';
"{"						return '{';
"}"						return '}';
"["						return '[';
"]"						return ']';
":"						return ':';


"--"[^\n]*	
"(*"					BEGIN(comment);
<comment>[^*\n]*        /* eat anything that's not a '*' */
<comment>"*"+[^*)\n]*   /* eat up '*'s not followed by ')'s */
<comment>\n             ++line_num;
<comment>"*"+")"        BEGIN(INITIAL);

{IDENTIFIER} 			{yylval.crepr = strdup(yytext);return IDENTIFIER;}
{INTEGER_CONST}			{yylval.crepr = strdup(yytext);return INTEGER_CONST;}
{REAL_CONST}			{yylval.crepr = strdup(yytext);return REAL_CONST;}
{STRING}				{yylval.crepr = strdup(yytext);return STRING;}
<<EOF>>					return EOF;
\n                      line_num++;
[ \t\r]	
.						{yyerror("Error, cannot recognize literal:%s\n",yytext);}			

%%
