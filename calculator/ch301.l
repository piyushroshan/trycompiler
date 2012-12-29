%{
#include "ch301.tab.h"
extern int yylval;
%}

%%
[0-9]+	{ yylval = atoi (yytext); 
	printf ("scanned the number %d\n", yylval);
	return NUMBER; }
[a-zA-Z]+ { yylval = yytext;
    printf ("scanned name %s\n", yylval);
    return NAME; }
[ \t]	{ printf ("skipped whitespace\n"); }
\n	{ printf ("reached end of line\n");
	return 0;
	}
.	{ printf ("found other data \"%s\"\n", yytext);
	return yytext[0];
	}
%%
