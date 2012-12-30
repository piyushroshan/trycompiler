%{
	/* LT,EQ,LE */
%}
alphabet [a-zA-Z]
digit [0-9]
identifier {alphabet}({digit}|{alphabet})*
%%
if return(IF);
then return(THEN);
"<" {}
