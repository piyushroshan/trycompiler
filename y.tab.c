#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20120115

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0


#ifndef YYSTYPE
typedef int YYSTYPE;
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define EQ 257
#define NE 258
#define LT 259
#define LE 260
#define GT 261
#define GE 262
#define PLUS 263
#define MINUS 264
#define MULT 265
#define DIVIDE 266
#define RPAREN 267
#define LPAREN 268
#define ASSIGN 269
#define SEMICOLON 270
#define IF 271
#define THEN 272
#define ELSE 273
#define FI 274
#define WHILE 275
#define DO 276
#define OD 277
#define PRINT 278
#define NUMBER 279
#define NAME 280
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    2,    2,    2,    2,    2,    1,    1,    4,    4,
    4,    4,    4,    4,    4,    5,    5,    5,    6,    6,
    6,    7,    7,    7,    7,    7,    3,
};
static const short yylen[] = {                            2,
    1,    3,    2,    7,    5,    5,    3,    1,    1,    3,
    3,    3,    3,    3,    3,    1,    3,    3,    1,    3,
    3,    2,    2,    3,    1,    1,    1,
};
static const short yydefred[] = {                         0,
    0,    0,    0,   27,    0,    0,    8,    0,    0,    0,
    0,   25,   26,    0,    0,    0,   19,    0,    3,    0,
    0,   22,   23,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    7,    2,   24,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   20,   21,
    0,    0,    5,    6,    0,    4,
};
static const short yydgoto[] = {                          5,
    6,    7,   13,   14,   15,   16,   17,
};
static const short yysindex[] = {                      -240,
 -247, -247, -247,    0,    0, -252,    0, -245, -247, -247,
 -247,    0,    0, -238, -157, -246,    0, -250,    0, -240,
 -247,    0,    0, -217, -240, -247, -247, -247, -247, -247,
 -247, -247, -247, -247, -247, -240,    0,    0,    0, -260,
 -227, -227, -227, -227, -227, -227, -246, -246,    0,    0,
 -268, -240,    0,    0, -262,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,   52,    0,    0,    0,    0,
    0,    0,    0,    0,   51,    1,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   59,   67,   75,   83,   91,   99,   22,   43,    0,    0,
    0,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
  -25,   33,    3,    4,   18,    9,   -5,
};
#define YYTABLESIZE 376
static const short yytable[] = {                         40,
   16,   20,    8,   22,   23,   18,   19,   20,   54,   20,
   51,   56,   52,   53,   24,    9,   10,   20,   34,   35,
   11,   17,    8,   21,   38,   36,   55,    8,   49,   50,
    1,   12,    4,   25,    2,   32,   33,    3,    8,    4,
   47,   48,   18,   41,   42,   43,   44,   45,   46,   39,
    9,    1,   37,    0,    8,    0,    0,    0,   10,    0,
    0,    0,    0,    0,    0,    0,   11,    0,    0,    0,
    0,    0,    0,    0,   12,    0,    0,    0,    0,    0,
    0,    0,   13,    0,    0,    0,    0,    0,    0,    0,
   14,    0,    0,    0,    0,    0,    0,    0,   15,   26,
   27,   28,   29,   30,   31,   32,   33,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   16,   16,   16,
   16,   16,   16,   16,   16,    0,    0,   16,    0,    0,
   16,    0,   16,   16,   16,    0,   16,   16,   17,   17,
   17,   17,   17,   17,   17,   17,    0,    0,   17,    0,
    0,   17,    0,   17,   17,   17,    0,   17,   17,   18,
   18,   18,   18,   18,   18,   18,   18,    0,    0,   18,
    0,    0,   18,    0,   18,   18,   18,    9,   18,   18,
    9,    0,    9,    9,    9,   10,    9,    9,   10,    0,
   10,   10,   10,   11,   10,   10,   11,    0,   11,   11,
   11,   12,   11,   11,   12,    0,   12,   12,   12,   13,
   12,   12,   13,    0,   13,   13,   13,   14,   13,   13,
   14,    0,   14,   14,   14,   15,   14,   14,   15,    0,
   15,   15,   15,    0,   15,   15,
};
static const short yycheck[] = {                         25,
    0,  270,    0,    9,   10,    2,    3,  270,  277,  270,
   36,  274,  273,  274,   11,  263,  264,  270,  265,  266,
  268,    0,   20,  269,   21,  276,   52,   25,   34,   35,
  271,  279,  280,  272,  275,  263,  264,  278,   36,  280,
   32,   33,    0,   26,   27,   28,   29,   30,   31,  267,
    0,    0,   20,   -1,   52,   -1,   -1,   -1,    0,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,    0,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,    0,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,    0,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    0,   -1,   -1,   -1,   -1,   -1,   -1,   -1,    0,  257,
  258,  259,  260,  261,  262,  263,  264,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  257,  258,  259,
  260,  261,  262,  263,  264,   -1,   -1,  267,   -1,   -1,
  270,   -1,  272,  273,  274,   -1,  276,  277,  257,  258,
  259,  260,  261,  262,  263,  264,   -1,   -1,  267,   -1,
   -1,  270,   -1,  272,  273,  274,   -1,  276,  277,  257,
  258,  259,  260,  261,  262,  263,  264,   -1,   -1,  267,
   -1,   -1,  270,   -1,  272,  273,  274,  267,  276,  277,
  270,   -1,  272,  273,  274,  267,  276,  277,  270,   -1,
  272,  273,  274,  267,  276,  277,  270,   -1,  272,  273,
  274,  267,  276,  277,  270,   -1,  272,  273,  274,  267,
  276,  277,  270,   -1,  272,  273,  274,  267,  276,  277,
  270,   -1,  272,  273,  274,  267,  276,  277,  270,   -1,
  272,  273,  274,   -1,  276,  277,
};
#define YYFINAL 5
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 280
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"EQ","NE","LT","LE","GT","GE",
"PLUS","MINUS","MULT","DIVIDE","RPAREN","LPAREN","ASSIGN","SEMICOLON","IF",
"THEN","ELSE","FI","WHILE","DO","OD","PRINT","NUMBER","NAME",
};
static const char *yyrule[] = {
"$accept : ROOT",
"ROOT : stmtseq",
"statement : designator ASSIGN expression",
"statement : PRINT expression",
"statement : IF expression THEN stmtseq ELSE stmtseq FI",
"statement : IF expression THEN stmtseq FI",
"statement : WHILE expression DO stmtseq OD",
"stmtseq : stmtseq SEMICOLON statement",
"stmtseq : statement",
"expression : expr2",
"expression : expr2 EQ expr2",
"expression : expr2 NE expr2",
"expression : expr2 LT expr2",
"expression : expr2 LE expr2",
"expression : expr2 GT expr2",
"expression : expr2 GE expr2",
"expr2 : expr3",
"expr2 : expr2 PLUS expr3",
"expr2 : expr2 MINUS expr3",
"expr3 : expr4",
"expr3 : expr3 MULT expr4",
"expr3 : expr3 DIVIDE expr4",
"expr4 : PLUS expr4",
"expr4 : MINUS expr4",
"expr4 : LPAREN expression RPAREN",
"expr4 : NUMBER",
"expr4 : designator",
"designator : NAME",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 500
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = data->s_mark - data->s_base;
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 31 "lex1.y"
	{ execute(yystack.l_mark[0]); }
break;
case 2:
#line 35 "lex1.y"
	{ yyval = assignment(yystack.l_mark[-2], yystack.l_mark[0]); }
break;
case 3:
#line 36 "lex1.y"
	{ yyval = print(yystack.l_mark[0]); }
break;
case 4:
#line 38 "lex1.y"
	{ yyval = ifstmt(yystack.l_mark[-5], yystack.l_mark[-3], yystack.l_mark[-1]); }
break;
case 5:
#line 40 "lex1.y"
	{ yyval = ifstmt(yystack.l_mark[-3], yystack.l_mark[-1], empty()); }
break;
case 6:
#line 41 "lex1.y"
	{ yyval = whilestmt(yystack.l_mark[-3], yystack.l_mark[-1]); }
break;
case 7:
#line 45 "lex1.y"
	{ yyval = seq(yystack.l_mark[-2], yystack.l_mark[0]); }
break;
case 8:
#line 46 "lex1.y"
	{ yyval = yystack.l_mark[0]; }
break;
case 9:
#line 50 "lex1.y"
	{ yyval = yystack.l_mark[0]; }
break;
case 10:
#line 51 "lex1.y"
	{ yyval = eq(yystack.l_mark[-2], yystack.l_mark[0]); }
break;
case 11:
#line 52 "lex1.y"
	{ yyval = ne(yystack.l_mark[-2], yystack.l_mark[0]); }
break;
case 12:
#line 53 "lex1.y"
	{ yyval = le(yystack.l_mark[-2], yystack.l_mark[0]); }
break;
case 13:
#line 54 "lex1.y"
	{ yyval = le(yystack.l_mark[-2], yystack.l_mark[0]); }
break;
case 14:
#line 55 "lex1.y"
	{ yyval = gt(yystack.l_mark[-2], yystack.l_mark[0]); }
break;
case 15:
#line 56 "lex1.y"
	{ yyval = gt(yystack.l_mark[-2], yystack.l_mark[0]); }
break;
case 16:
#line 60 "lex1.y"
	{ yyval == yystack.l_mark[0]; }
break;
case 17:
#line 61 "lex1.y"
	{ yyval = plus(yystack.l_mark[-2], yystack.l_mark[0]); }
break;
case 18:
#line 62 "lex1.y"
	{ yyval = minus(yystack.l_mark[-2], yystack.l_mark[0]); }
break;
case 19:
#line 66 "lex1.y"
	{ yyval = yystack.l_mark[0]; }
break;
case 20:
#line 67 "lex1.y"
	{ yyval = mult(yystack.l_mark[-2], yystack.l_mark[0]); }
break;
case 21:
#line 68 "lex1.y"
	{ yyval = divide (yystack.l_mark[-2], yystack.l_mark[0]); }
break;
case 22:
#line 72 "lex1.y"
	{ yyval = yystack.l_mark[0]; }
break;
case 23:
#line 73 "lex1.y"
	{ yyval = neg(yystack.l_mark[0]); }
break;
case 24:
#line 74 "lex1.y"
	{ yyval = yystack.l_mark[-1]; }
break;
case 25:
#line 75 "lex1.y"
	{ yyval = number(yystack.l_mark[0]); }
break;
case 26:
#line 76 "lex1.y"
	{ yyval = yystack.l_mark[0]; }
break;
case 27:
#line 80 "lex1.y"
	{ yyval = name(yystack.l_mark[0]); }
break;
#line 598 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
