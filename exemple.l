%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "exemple.tab.h"
%}


%option yylineno

DELIM     [ \t]
BL        {DELIM}+
CHIFFRE   [0-9]
LITERAL_NUMBER {CHIFFRE}({CHIFFRE})*
LETTER    [a-zA-Z]
ID        {LETTER}({LETTER}|{CHIFFRE})*
NB        ("-")?{CHIFFRE}+("."{CHIFFRE}+)?(("E"|"e")"-"?{CHIFFRE}+)?
IDERRONE  {CHIFFRE}({LETTER}|{CHIFFRE})*
OPEN_ROUND_BRACKETS  (\()
CLOSE_ROUND_BRACKETS  (\))
OPEN_SQUARE_BRACKETS  (\[)
CLOSE_SQUARE_BRACKETS  (\])
COMMENT_LINE        "//".*
COMMENT_MULTI_LINE [/][*][^*]*[*]+([^*/][^*]*[*]+)*[/] 
COMMENT_MULTI_LINE_ERROR [/][*]
ADDOP ("+"|"-")
MODLOP ("/"|"*")
COMPOP ("<"|"<="|">="|">"|"=")
MODOP ("mod")
SEMICOLON ";"
COLON ":"
COMMA ","
OPPAFFECT ":="
BOOLEAN ("true"|"false")
STRING ("\"")({LETTER}|{CHIFFRE})*("\"")
TYPE ("integer"|"cardinal"|"shortint"|"smallint"|"longint"|"int64"|"byte"|"word"|"longword"|"real"|"char")


%%

{BL}                                                                                 /* pas d'actions */
"\n" 			                                                             ++yylineno;
"program"                                                                            return PROGRAM;
"begin"                                                                              return BEGINP;
"end"                                                                                return END;
"procedure"                                                                          return PROCEDURE;
"function"                                                                           return FUNCTION;
"const"                                                                              return CONST;
"var"                                                                                return VAR;
"if"                                                                                 return IF;
"then"                                                                               return THEN;
"else"                                                                               return ELSE;
"do"                                                                                 return DO;
"while"                                                                              return WHILE;
"goto"                                                                               return GOTO;
"case"                                                                               return CASE;
"downto"                                                                             return DOWNTO;
"for"                                                                                return FOR_LOOP;
"of"                                                                                 return OF;
"repeat"                                                                             return REPEAT;
"xor"                                                                                return OPPBINARY;
"write"                                                                              return WRITE;
"read"                                                                               return READ;
".."                                                                                 return TWO_POINTS;
"array"                                                                              return ARRAY;
{TYPE}                                                                               return TYPE;
{STRING}                                                                             return STRING_VALUE;
{BOOLEAN}                                                                            return BOOLEAN_VALUE;
{COMMA}                                                                              return COMMA;
{OPEN_ROUND_BRACKETS}                                                                return OPEN_ROUND_BRACKETS;
{CLOSE_ROUND_BRACKETS}                                                               return CLOSE_ROUND_BRACKETS;
{OPEN_SQUARE_BRACKETS}                                                               return OPEN_SQUARE_BRACKETS;
{CLOSE_SQUARE_BRACKETS}                                                              return CLOSE_SQUARE_BRACKETS;
{NB}                                                                                 return LITERAL_NUMBER;
{OPPAFFECT}	                                                                      return OPPAFFECT;
{ADDOP}                                                                              return ADDOP;
{COMPOP}                                                                             return COMPOP;
{MODOP}                                                                              return MODOP;
{MODLOP}                                                                             return MODLOP;
{COMMENT_LINE}         								                         
{COMMENT_MULTI_LINE}         								                    
{SEMICOLON}                                                                          return SEMICOLON;
{COLON}                                                                          return COLON;
{LITERAL_NUMBER}                                                                                 return LITERAL_NUMBER; 
{ID}                                                                                 {
    yylval.texte = strdup(yytext);
    return INDENTIFIER;
}

{IDERRONE}              {fprintf(stderr,"illegal identifier \'%s\' on line :%d\n",yytext,yylineno);}
{COMMENT_MULTI_LINE_ERROR}              {fprintf(stderr," Unterminated comment \'%s\' on line :%d\n",yytext,yylineno);}
	

%%

