%{
	

#include <stdio.h>	
int yyerror(char const *msg);	
int yylex(void);
extern int yylineno;

%}

%locations

%token PROGRAM
%token BEGINP
%token END
%token PROCEDURE
%token FUNCTION
%token CONST
%token VAR
%token IF
%token THEN
%token ELSE
%token DO
%token WHILE
%token GOTO
%token CASE
%token DOWNTO
%token FOR_LOOP
%token REPEAT
%token OPPBINARY
%token WRITE
%token READ
%token TYPE
%token STRING_VALUE
%token BOOLEAN_VALUE
%token COMMA
%token OPEN_ROUND_BRACKETS
%token CLOSE_ROUND_BRACKETS
%token OPEN_SQUARE_BRACKETS
%token CLOSE_SQUARE_BRACKETS
%token NUMBER
%token OPPAFFECT
%token ADDOP
%token COMPOP
%token MODOP
%token MODLOP
%token SEMICOLON
%token COLON
%token INDENTIFIER
%token TWO_POINTS
%token OF
%token ARRAY
%token LITERAL_NUMBER
 

%start programs

%%
                                                           
programs		     : PROGRAM INDENTIFIER SEMICOLON ComposedInstruction
                              | PROGRAM INDENTIFIER SEMICOLON ListDeclarations DeclarationOfMethods ComposedInstruction
                              | PROGRAM INDENTIFIER SEMICOLON ListDeclarations  ComposedInstruction
                              | PROGRAM INDENTIFIER SEMICOLON DeclarationOfMethods ComposedInstruction
                              |PROGRAM error SEMICOLON       {yyerror (" Program's name invalid on line : "); } 
                              |PROGRAM INDENTIFIER error                  {yyerror (" Semicolon expected on line : "); };
                              |PROGRAM INDENTIFIER SEMICOLON error                  {yyerror (" Begin expected on line : "); };

ListDeclarations    : Declaration
                        | Declaration ListDeclarations

Declaration         : VAR DeclarationCorp SEMICOLON
                        |  VAR DeclarationCorp error                  {yyerror (" Semicolon expected on line : "); };
                        

DeclarationCorp     : ListIndentifiers COLON Type
                        | ListIndentifiers COLON error {yyerror (" Type expected on line : "); };
                        | ListIndentifiers error Type {yyerror (" Colon expected on line : "); };

ListIndentifiers    : INDENTIFIER
                        | INDENTIFIER COMMA ListIndentifiers
                        | INDENTIFIER COMMA error {yyerror (" Unexpected Comma on line : "); };

Type                : TYPE
                        | ARRAY OPEN_SQUARE_BRACKETS LITERAL_NUMBER TWO_POINTS LITERAL_NUMBER CLOSE_SQUARE_BRACKETS OF TYPE 
                        | ARRAY error LITERAL_NUMBER TWO_POINTS LITERAL_NUMBER CLOSE_SQUARE_BRACKETS OF TYPE   {yyerror (" expected [ on line : "); };
                        | ARRAY OPEN_SQUARE_BRACKETS error TWO_POINTS LITERAL_NUMBER CLOSE_SQUARE_BRACKETS OF TYPE  {yyerror (" expected Literal number on line : "); };
                        | ARRAY OPEN_SQUARE_BRACKETS LITERAL_NUMBER error LITERAL_NUMBER CLOSE_SQUARE_BRACKETS OF TYPE   {yyerror (" expected ..  on line : "); };
                        | ARRAY OPEN_SQUARE_BRACKETS LITERAL_NUMBER TWO_POINTS error CLOSE_SQUARE_BRACKETS OF TYPE   {yyerror (" expected Literal number on line : "); };
                        | ARRAY OPEN_SQUARE_BRACKETS LITERAL_NUMBER TWO_POINTS LITERAL_NUMBER error OF TYPE  {yyerror (" expected ]  on line : "); };
                        | ARRAY OPEN_SQUARE_BRACKETS LITERAL_NUMBER TWO_POINTS LITERAL_NUMBER CLOSE_SQUARE_BRACKETS error TYPE  {yyerror (" expected of on line : "); };
                        | ARRAY OPEN_SQUARE_BRACKETS LITERAL_NUMBER TWO_POINTS LITERAL_NUMBER CLOSE_SQUARE_BRACKETS OF error   {yyerror (" expected Type on line : "); };

DeclarationOfMethods : DeclarationOfMethod
                        | DeclarationOfMethod DeclarationOfMethods

DeclarationOfMethod  : MethodHeader ComposedInstruction
                        | MethodHeader ListDeclarations ComposedInstruction
                        | MethodHeader ListDeclarations error  {yyerror (" Begin expected onx line : "); };

MethodHeader         : PROCEDURE INDENTIFIER 
                        | PROCEDURE INDENTIFIER Arguments
                        | PROCEDURE error  {yyerror (" expected Procedure name on line : "); };
                        | FUNCTION INDENTIFIER
                        | FUNCTION INDENTIFIER Arguments
                        | FUNCTION error {yyerror (" expected Function name on line : "); };

Arguments           : OPEN_ROUND_BRACKETS ListParameters CLOSE_ROUND_BRACKETS
                        | OPEN_ROUND_BRACKETS ListParameters error {yyerror (" expected )  on line : "); };
                        | error ListParameters CLOSE_ROUND_BRACKETS {yyerror (" expected ( on line : "); };
                        | OPEN_ROUND_BRACKETS  CLOSE_ROUND_BRACKETS

ListParameters      : DeclarationCorp 
                        | DeclarationCorp SEMICOLON ListParameters

ComposedInstruction   : BEGINP ListInstructions END
                        | BEGINP  END

ListInstructions      : Instruction SEMICOLON
                        | Instruction SEMICOLON ListInstructions
                        | Instruction error  {yyerror (" expected ;  on line : "); };

Instruction         : Variable OPPAFFECT Expression 
                        | MethodCall
                        | ComposedInstruction


                        | IF Expression THEN Instruction ELSE Instruction
                        | IF error THEN Instruction ELSE Instruction {yyerror (" expected Expression  on line : "); };
                        | IF Expression error Instruction ELSE Instruction {yyerror (" expected THEN  on line : "); };
                        | IF Expression THEN error ELSE Instruction {yyerror (" expected Instruction  on line : "); };
                        | IF Expression THEN Instruction error Instruction {yyerror (" expected Else  on line : "); };
                        | IF Expression THEN Instruction ELSE error {yyerror (" expected Instruction  on line : "); };

                        | WHILE Expression DO Instruction
                        | WHILE error DO Instruction {yyerror (" expected Expression  on line : "); };
                        | WHILE Expression error Instruction {yyerror (" expected DO  on line : "); };
                        | WHILE Expression DO error {yyerror (" expected Instruction  on line : "); };

                        | WRITE OPEN_ROUND_BRACKETS CLOSE_ROUND_BRACKETS
                        | WRITE  error CLOSE_ROUND_BRACKETS  {yyerror (" expected (  on line : "); };
                        | WRITE OPEN_ROUND_BRACKETS  error {yyerror (" expected )  on line : "); };

                        | WRITE OPEN_ROUND_BRACKETS ListExpressions CLOSE_ROUND_BRACKETS
                        | WRITE error ListExpressions CLOSE_ROUND_BRACKETS   {yyerror (" expected (  on line : "); };
                        | WRITE OPEN_ROUND_BRACKETS  ListExpressions  error {yyerror (" expected )  on line : "); };

                        | READ OPEN_ROUND_BRACKETS ListIndentifiers CLOSE_ROUND_BRACKETS
                        | READ  error ListIndentifiers CLOSE_ROUND_BRACKETS {yyerror (" expected (  on line : "); };
                        | READ OPEN_ROUND_BRACKETS ListIndentifiers  error {yyerror (" expected )  on line : "); };
                        | READ OPEN_ROUND_BRACKETS  CLOSE_ROUND_BRACKETS
                        | READ  error CLOSE_ROUND_BRACKETS  {yyerror (" expected (  on line : "); };
                        | READ OPEN_ROUND_BRACKETS  error {yyerror (" expected )  on line : "); };

Variable            : INDENTIFIER 
                        | INDENTIFIER OPEN_SQUARE_BRACKETS Expression CLOSE_SQUARE_BRACKETS
                        | INDENTIFIER OPEN_SQUARE_BRACKETS Expression error {yyerror (" expected ]  on line : "); };

MethodCall          : INDENTIFIER OPEN_ROUND_BRACKETS CLOSE_ROUND_BRACKETS
                        | INDENTIFIER OPEN_ROUND_BRACKETS ListExpressions CLOSE_ROUND_BRACKETS
                        | INDENTIFIER OPEN_ROUND_BRACKETS ListExpressions  error {yyerror (" expected )  on line : "); };

ListExpressions     : Expression
                        | Expression COMMA ListExpressions

Expression          : Factor 
                        | Factor ADDOP Factor  
                        | Factor MODLOP Factor

Factor              : INDENTIFIER
                        | INDENTIFIER OPEN_SQUARE_BRACKETS Expression CLOSE_SQUARE_BRACKETS
                        | INDENTIFIER OPEN_SQUARE_BRACKETS Expression error {yyerror (" expected ]  on line : "); };
                        | LITERAL_NUMBER
                        | OPEN_ROUND_BRACKETS Expression CLOSE_ROUND_BRACKETS 


%% 

int yyerror(char const *msg) {
       
	
	fprintf(stderr, "%s %d\n", msg,yylineno);
	return 0;
	
	
}

extern FILE *yyin;

main()
{

//      #ifdef YYDEBUG
//   yydebug = 1;
//     #endif 

 yyparse();
 
 
}
yywrap()
{
	return(1);
}
  
                   
