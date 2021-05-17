%{
	

#include <stdio.h>	
#include <string.h>
#include <stdlib.h>
#include <glib.h>


int yyerror(char const *msg);	
int yylex(void);

int context = 0;
extern int yylineno;

GHashTable* table_variable;

typedef struct Variable Variable;

struct Variable{
        char* type;
        int affectation;
};

%}

%union {
        long nombre;
        char* texte;

}


%type<texte> programs		
%type<texte> ListDeclarations    
%type<texte> Declaration       
%type<texte> DeclarationCorp    
%type<texte> ListIndentifiers   
%type<texte> Type                         
%type<texte> DeclarationOfMethods 
%type<texte> DeclarationOfMethod  
%type<texte> MethodHeader       
%type<texte> Arguments         
%type<texte> ListParameters     
%type<texte> ComposedInstruction   
%type<texte> ListInstructions     
%type<texte> Instruction        
%type<texte> Variable           
%type<texte> MethodCall        
%type<texte> ListExpressions    
%type<texte> Expression        
%type<texte> Factor  

%locations



%token<texte> PROGRAM
%token<texte> BEGINP
%token<texte> END
%token<texte> PROCEDURE
%token<texte> FUNCTION
%token<texte> CONST
%token<texte> VAR
%token<texte> IF
%token<texte> THEN
%token<texte> ELSE
%token<texte> DO
%token<texte> WHILE
%token<texte> GOTO
%token<texte> CASE
%token<texte> DOWNTO
%token<texte> FOR_LOOP
%token<texte> REPEAT
%token<texte> OPPBINARY
%token<texte> WRITE
%token<texte> READ
%token<texte> TYPE
%token<texte> STRING_VALUE
%token<texte> BOOLEAN_VALUE
%token<texte> COMMA
%token<texte> OPEN_ROUND_BRACKETS
%token<texte> CLOSE_ROUND_BRACKETS
%token<texte> OPEN_SQUARE_BRACKETS
%token<texte> CLOSE_SQUARE_BRACKETS
%token<texte> NUMBER
%token<texte> OPPAFFECT
%token<texte> ADDOP
%token<texte> COMPOP
%token<texte> MODOP
%token<texte> MODLOP
%token<texte> SEMICOLON
%token<texte> COLON
%token<texte> INDENTIFIER
%token<texte> TWO_POINTS
%token<texte> OF
%token<texte> ARRAY
%token<texte> LITERAL_NUMBER
 

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

ListIndentifiers    : INDENTIFIER {

                        printf(" Declaring Variable ==> %s \n", strdup($1));
                        Variable* var=malloc(sizeof(Variable));
                        if(var!=NULL){
                                var->type=strdup("variable");
                                var->affectation=0;
                                if(!g_hash_table_insert(table_variable,strdup($1),var)){
                                        fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
                                        exit(-1);
                                }
                        }else{
                                fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
                                exit(-1);
                        }

}
                        | INDENTIFIER COMMA ListIndentifiers
                        {

                        printf(" Declaring Variable ==> %s \n", strdup($1));
                        Variable* var=malloc(sizeof(Variable));
                        if(var!=NULL){
                                var->type=strdup("variable");
                                var->affectation=0;
                                if(!g_hash_table_insert(table_variable,strdup($1),var)){
                                        fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
                                        exit(-1);
                                }
                        }else{
                                fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
                                exit(-1);
                        }

}

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
                        {
                            context--; 
                            printf(" ============ Change to Context ========> %d \n", context);
                        }
                        | MethodHeader ListDeclarations error  {yyerror (" Begin expected onx line : "); };

MethodHeader         : PROCEDURE INDENTIFIER 
{
                        context++; 
                        printf(" ============ Change to Context ========> %d \n", context);
                        printf(" Declaring Procedure ==> %s \n", strdup($2));
        
                        Variable* var=malloc(sizeof(Variable));
                        if(var!=NULL){
                                var->type=strdup("method");
                                if(!g_hash_table_insert(table_variable,strdup($2),var)){
                                        fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
                                        exit(-1);
                                }
                        }else{
                                fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
                                exit(-1);
                        }



}
                        | PROCEDURE INDENTIFIER Arguments
                        {
                        context++; 
                        printf(" ============ Change to Context ========> %d \n", context);
                        printf(" Declaring Procedure ==> %s \n", strdup($2));
                         Variable* var=malloc(sizeof(Variable));
                        if(var!=NULL){
                                var->type=strdup("method");
                                if(!g_hash_table_insert(table_variable,strdup($2),var)){
                                        fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
                                        exit(-1);
                                }
                        }else{
                                fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
                                exit(-1);
                        }

}
                        | PROCEDURE error  {yyerror (" expected Procedure name on line : "); };
                        | FUNCTION INDENTIFIER
                                                {
                        context++; 
                        printf(" ============ Change to Context ========> %d \n", context);
                        printf(" Declaring Function ==> %s \n", strdup($2));
                         Variable* var=malloc(sizeof(Variable));
                        if(var!=NULL){
                                var->type=strdup("method");
                                if(!g_hash_table_insert(table_variable,strdup($2),var)){
                                        fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
                                        exit(-1);
                                }
                        }else{
                                fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
                                exit(-1);
                        }

}
                        | FUNCTION INDENTIFIER Arguments
                                                {
                        context++; 
                        printf(" ============ Change to Context ========> %d \n", context);
                        printf(" Declaring Function ==> %s \n", strdup($2));
                         Variable* var=malloc(sizeof(Variable));
                        if(var!=NULL){
                                var->type=strdup("method");
                                if(!g_hash_table_insert(table_variable,strdup($2),var)){
                                        fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
                                        exit(-1);
                                }
                        }else{
                                fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
                                exit(-1);
                        }

}
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
{
                         Variable* var=g_hash_table_lookup(table_variable,$1);
                                        if(var!=NULL){
                                            
                                                    printf(" Affecting value to ==> %s \n ", strdup($1));
                                                    printf(" Use of Variable ========> %s \n", strdup($1)); 
                                                    var->affectation = var->affectation +1;
                                                
                                                
                                        }else{
                                                 printf(" ERROR Variable not Declared ==> %s \n", strdup($1)); 
                                        }
                         
                         }
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

Variable           : INDENTIFIER
                        | INDENTIFIER OPEN_SQUARE_BRACKETS Expression CLOSE_SQUARE_BRACKETS
                        | INDENTIFIER OPEN_SQUARE_BRACKETS Expression error {yyerror (" expected ]  on line : "); };

MethodCall          : INDENTIFIER OPEN_ROUND_BRACKETS CLOSE_ROUND_BRACKETS
                                                 {
                         Variable* var=g_hash_table_lookup(table_variable,$1);
                                        if(var!=NULL){
                                            
                                                
                                                    printf(" Call to method ==> %s \n", strdup($1)); 
                                                
                                               
                                                
                                        }else{
                                                 printf(" ERROR Method not Declared ==> %s \n", strdup($1)); 
                                        }
                         
                         }
                        | INDENTIFIER OPEN_ROUND_BRACKETS ListExpressions CLOSE_ROUND_BRACKETS
                           {
                         Variable* var=g_hash_table_lookup(table_variable,$1);
                                        if(var!=NULL){
                                            
                                                
                                                    printf(" Call to method ==> %s \n", strdup($1)); 
                                                
                                               
                                                
                                        }else{
                                                 printf(" ERROR Method not Declared ==> %s \n", strdup($1)); 
                                        }
                         
                         }
                        | INDENTIFIER OPEN_ROUND_BRACKETS ListExpressions  error {yyerror (" expected )  on line : "); };

ListExpressions     : Expression
                        | Expression COMMA ListExpressions

Expression          : Factor 
                        | Factor ADDOP Factor  
                        | Factor MODLOP Factor

Factor              : INDENTIFIER
                         {
                         Variable* var=g_hash_table_lookup(table_variable,$1);
                                        if(var!=NULL){
                                            
                                                if(var->affectation==0)
                                                { printf(" ERROR Variable not initialized ==> %s \n", strdup($1)); 
                                                }else{
                                                    printf(" Use of Variable ========> %s \n", strdup($1)); 
                                                
                                                }
                                                
                                        }else{
                                                 printf(" ERROR Variable not Declared ==> %s \n", strdup($1)); 
                                        }
                         
                         }
                        | INDENTIFIER OPEN_SQUARE_BRACKETS Expression CLOSE_SQUARE_BRACKETS
                         {
                         Variable* var=g_hash_table_lookup(table_variable,$1);
                                        if(var!=NULL){
                                            
                                                if(var->affectation==0)
                                                { printf(" ERROR Variable not initialized ==> %s \n", strdup($1)); 
                                                }else{
                                                    printf(" Use of Variable ========> %s \n", strdup($1)); 
                                                }
                                                
                                        }else{
                                                 printf(" ERROR Variable not Declared ==> %s \n", strdup($1)); 
                                        }
                         
                         }
                        | INDENTIFIER OPEN_SQUARE_BRACKETS Expression error {yyerror (" expected ]  on line : "); };
                        | LITERAL_NUMBER
                        | OPEN_ROUND_BRACKETS Expression CLOSE_ROUND_BRACKETS 


%% 

int yyerror(char const *msg) {
       
	
	fprintf(stderr, "%s %d\n", msg,((int) yylineno/2) + 1 );
    return 0;
	
	
}

extern FILE *yyin;

main()
{

    table_variable=g_hash_table_new_full(g_str_hash,g_str_equal,free,free);

//      #ifdef YYDEBUG
//   yydebug = 1;
//     #endif 

 yyparse();
 
 
}
yywrap()
{
	return(1);
}
  
                   
