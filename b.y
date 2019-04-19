%{
void yyerror (char *s);
int yylex();
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int symbols[255];
int symbolVal(char symbol);
void updateSymbolVal(char symbol, int val);
%}

%union {long long int num; char id;}         /* Yacc definitions */
%start startline
%token print println newline 
%token WHILE AND OR NTEQ EQ LT LTEQ GT GTEQ
%token exit_command 
%token semi hex
%token <num> number string
%token <id> identifier
%type <num> line exp term
%type <id> assignment


%%

startline:
    | startline line               
    ;

line: newline                     {printf(">>> ");}
    | assignment semi newline 		{printf(">>> ");}
    | exit_command semi newline 	    {exit(0); }
    | println exp semi newline      {printf(">>> %lld\n", $2);}
    | print exp	semi newline		   {printf(">>> %lld", $2);}
    | print exp hex semi newline    {printf(">>> %x", (int)$2);}
    | println exp hex semi newline    {printf(">>> %x", (int)$2);}
    | print string semi newline     {printf(">>> %s\n",(char * )($2));}
    | println string semi newline   {printf(">>> %s\n",(char * )($2));}
    | while_statement newline       {printf(">>> Looping\n");}
    
    ;

assignment: identifier '=' exp  { updateSymbolVal($1,$3); }
    ;

program: declarations statements 
    ;

declarations: declarations declaration 
    | declaration;

declaration: assignment
    ;

statements: statements statement
    | statement
    ;

statement: while_statement;
    | assignment
    | scond semi
    | condition semi
    | line
    ;

while_statement: WHILE '(' condition ')' '{' statement semi '}' {printf(">>> parsing loop successful\n");}
	;

condition: scond
	| scond boolean condition
    | term boolean term
	;

scond: term
	| term compare term
	;


boolean: AND
	| OR                
	;

compare: NTEQ
	| EQ
	| LT
	| LTEQ
	| GT
	| GTEQ
	;

exp: term                  {$$ = $1;}
    | exp '+' exp          {$$ = $1 + $3;}
    | exp '-' exp          {$$ = $1 - $3;}
    | exp '*' exp          {$$ = $1 * $3;}
	| exp '/' exp			{
    if($3){
        $$ = $1 / $3;
	}else{
        $$ = $$;
        fprintf (stderr, "division by zero \n"  );
    }
    }	

	| exp '%' exp          {$$ = $1 % $3;}
	| '-' exp 				{$$ = - $2; }
    | '(' exp ')'			{$$ = $2;}
    | exp AND exp           {$$ = $1 && $3;}
    | exp OR exp            {$$ = $1 || $3;}
    | exp NTEQ exp          {$$ = $1 != $3;}
    | exp EQ exp            {$$ = $1 == $3;}
    | exp LT exp            {$$ = $1 < $3;}
    | exp LTEQ exp          {$$ = $1 <= $3;}
    | exp GT exp            {$$ = $1 > $3;}
    | exp GTEQ exp          {$$ = $1 >= $3;}
    ;

term: number                {$$ = $1;}
    | identifier			{$$ = symbolVal($1);} 
    ;

%%                     /* C code */

int computeSymbolIndex(char token)
{
	int idx = -1;
	if(islower(token)) {
		idx = token - 'a' + 26;
	} else if(isupper(token)) {
		idx = token - 'A';
	}
	return idx;
} 

/* returns the value of a given symbol */
int symbolVal(char symbol)
{
	int bucket = computeSymbolIndex(symbol);
	return symbols[bucket];
}

/* updates the value of a given symbol */
void updateSymbolVal(char symbol, int val)
{
	int bucket = computeSymbolIndex(symbol);
	symbols[bucket] = val;
}

int main (int argc , char ** argv) {
	/* init symbol table */
	int i;
	for(i = 0 ; i < 255 ; i++) {  /*clear array value*/
		symbols[i] = 0;
	}
		
    extern int yylex();
    extern int yyparse();
    extern FILE * yyin;
    extern FILE *yyout;


	if(argc < 2){
		printf("Sawaddeeja. ni keu \" pasa karaoke\". version 1.0.0 by 0272 , 0823 , 0874 , 1189\n");
		return yyparse();
	}else{
        //yyout = fopen(argv[2],"w");
        //yyin = fopen(argv[1], "r");
        yyin = stdin;
        do{
    	    yyparse();         
        }while(!feof(yyin));
        //fclose(yyout);
        fclose(yyin);
    }
	return 0;
}

void yyerror (char *s) {fprintf (stderr, "%s\n", s);} 
