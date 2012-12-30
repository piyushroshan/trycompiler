%{
#define IF 1
#define EQ 2
#define THEN 3
#define ELSE 4
#define NUMBER 5
#define ID 6
int yylval;
 /* definitions of manifest constants LT, LE, EQ, NE, GT, GE, IF, THEN, ELSE, ID, NUMBER, RELOP */
%}
delim	[ \t\n]
ws		{delim}+
letter	[A-Za-z]
digit	[0-9]
id		{letter}({letter}|{digit})*
number	{digit}+(\.{digit}+)?(E[+-]?{digit}+)?

%%
{ws}	{/* no action and no return */}
if		{return(IF);}
then	{return(THEN);}
else	{return(ELSE);}
{id}	{yylval = (int) installID(); return(ID); }
{number}	{yylval = (int) installNum(); return(NUMBER);}

%%
int installID() {/* funtion to install the lexeme, whose first charact
	er is pointed to by yytext, and whose length is yyleng, into the symbol table and return a pointer thereto */ } 
int installNum() { /* similar to installID, but puts numerical constants into a separate table */ }