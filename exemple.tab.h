
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PROGRAM = 258,
     BEGINP = 259,
     END = 260,
     PROCEDURE = 261,
     FUNCTION = 262,
     CONST = 263,
     VAR = 264,
     IF = 265,
     THEN = 266,
     ELSE = 267,
     DO = 268,
     WHILE = 269,
     GOTO = 270,
     CASE = 271,
     DOWNTO = 272,
     FOR_LOOP = 273,
     REPEAT = 274,
     OPPBINARY = 275,
     WRITE = 276,
     READ = 277,
     TYPE = 278,
     STRING_VALUE = 279,
     BOOLEAN_VALUE = 280,
     COMMA = 281,
     OPEN_ROUND_BRACKETS = 282,
     CLOSE_ROUND_BRACKETS = 283,
     OPEN_SQUARE_BRACKETS = 284,
     CLOSE_SQUARE_BRACKETS = 285,
     NUMBER = 286,
     OPPAFFECT = 287,
     ADDOP = 288,
     COMPOP = 289,
     MODOP = 290,
     MODLOP = 291,
     SEMICOLON = 292,
     COLON = 293,
     INDENTIFIER = 294,
     TWO_POINTS = 295,
     OF = 296,
     ARRAY = 297,
     LITERAL_NUMBER = 298
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif

extern YYLTYPE yylloc;

