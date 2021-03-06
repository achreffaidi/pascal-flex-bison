
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "exemple.y"

	

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


char* getRef(char* id,int context){

char buffer [50];
sprintf (buffer, "%s - %d ", id, context);
return buffer;
}



/* Line 189 of yacc.c  */
#line 109 "exemple.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 36 "exemple.y"

        long nombre;
        char* texte;




/* Line 214 of yacc.c  */
#line 196 "exemple.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

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


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 221 "exemple.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   241

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNRULES -- Number of states.  */
#define YYNSTATES  193

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    15,    21,    27,    31,    35,    40,
      42,    45,    49,    53,    57,    61,    65,    67,    71,    75,
      77,    86,    95,   104,   113,   122,   131,   140,   149,   151,
     154,   157,   161,   165,   169,   174,   177,   181,   186,   189,
     193,   197,   201,   204,   206,   210,   214,   217,   220,   224,
     227,   231,   233,   235,   242,   249,   256,   263,   270,   277,
     282,   287,   292,   297,   301,   305,   309,   314,   319,   324,
     329,   334,   339,   343,   347,   351,   353,   358,   363,   367,
     372,   377,   379,   383,   385,   389,   393,   395,   400,   405,
     407
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,     3,    39,    37,    56,    -1,     3,    39,
      37,    46,    51,    56,    -1,     3,    39,    37,    46,    56,
      -1,     3,    39,    37,    51,    56,    -1,     3,     1,    37,
      -1,     3,    39,     1,    -1,     3,    39,    37,     1,    -1,
      47,    -1,    47,    46,    -1,     9,    48,    37,    -1,     9,
      48,     1,    -1,    49,    38,    50,    -1,    49,    38,     1,
      -1,    49,     1,    50,    -1,    39,    -1,    39,    26,    49,
      -1,    39,    26,     1,    -1,    23,    -1,    42,    29,    43,
      40,    43,    30,    41,    23,    -1,    42,     1,    43,    40,
      43,    30,    41,    23,    -1,    42,    29,     1,    40,    43,
      30,    41,    23,    -1,    42,    29,    43,     1,    43,    30,
      41,    23,    -1,    42,    29,    43,    40,     1,    30,    41,
      23,    -1,    42,    29,    43,    40,    43,     1,    41,    23,
      -1,    42,    29,    43,    40,    43,    30,     1,    23,    -1,
      42,    29,    43,    40,    43,    30,    41,     1,    -1,    52,
      -1,    52,    51,    -1,    53,    56,    -1,    53,    46,    56,
      -1,    53,    46,     1,    -1,     6,    39,    37,    -1,     6,
      39,    54,    37,    -1,     6,     1,    -1,     7,    39,    37,
      -1,     7,    39,    54,    37,    -1,     7,     1,    -1,    27,
      55,    28,    -1,    27,    55,     1,    -1,     1,    55,    28,
      -1,    27,    28,    -1,    48,    -1,    48,    37,    55,    -1,
       4,    57,     5,    -1,     4,     5,    -1,    58,    37,    -1,
      58,    37,    57,    -1,    58,     1,    -1,    59,    32,    62,
      -1,    60,    -1,    56,    -1,    10,    62,    11,    58,    12,
      58,    -1,    10,     1,    11,    58,    12,    58,    -1,    10,
      62,     1,    58,    12,    58,    -1,    10,    62,    11,     1,
      12,    58,    -1,    10,    62,    11,    58,     1,    58,    -1,
      10,    62,    11,    58,    12,     1,    -1,    14,    62,    13,
      58,    -1,    14,     1,    13,    58,    -1,    14,    62,     1,
      58,    -1,    14,    62,    13,     1,    -1,    21,    27,    28,
      -1,    21,     1,    28,    -1,    21,    27,     1,    -1,    21,
      27,    61,    28,    -1,    21,     1,    61,    28,    -1,    21,
      27,    61,     1,    -1,    22,    27,    49,    28,    -1,    22,
       1,    49,    28,    -1,    22,    27,    49,     1,    -1,    22,
      27,    28,    -1,    22,     1,    28,    -1,    22,    27,     1,
      -1,    39,    -1,    39,    29,    62,    30,    -1,    39,    29,
      62,     1,    -1,    39,    27,    28,    -1,    39,    27,    61,
      28,    -1,    39,    27,    61,     1,    -1,    62,    -1,    62,
      26,    61,    -1,    63,    -1,    63,    33,    63,    -1,    63,
      36,    63,    -1,    39,    -1,    39,    29,    62,    30,    -1,
      39,    29,    62,     1,    -1,    43,    -1,    27,    62,    28,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   114,   114,   115,   116,   117,   118,   119,   120,   122,
     123,   125,   126,   129,   130,   131,   133,   155,   180,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   192,   193,
     195,   196,   201,   203,   228,   253,   254,   279,   304,   306,
     307,   308,   309,   311,   312,   314,   315,   317,   318,   319,
     321,   336,   337,   340,   341,   342,   343,   344,   345,   347,
     348,   349,   350,   352,   353,   354,   356,   357,   358,   360,
     361,   362,   363,   364,   365,   367,   368,   369,   371,   386,
     401,   403,   404,   406,   407,   408,   410,   429,   446,   447,
     448
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAM", "BEGINP", "END", "PROCEDURE",
  "FUNCTION", "CONST", "VAR", "IF", "THEN", "ELSE", "DO", "WHILE", "GOTO",
  "CASE", "DOWNTO", "FOR_LOOP", "REPEAT", "OPPBINARY", "WRITE", "READ",
  "TYPE", "STRING_VALUE", "BOOLEAN_VALUE", "COMMA", "OPEN_ROUND_BRACKETS",
  "CLOSE_ROUND_BRACKETS", "OPEN_SQUARE_BRACKETS", "CLOSE_SQUARE_BRACKETS",
  "NUMBER", "OPPAFFECT", "ADDOP", "COMPOP", "MODOP", "MODLOP", "SEMICOLON",
  "COLON", "INDENTIFIER", "TWO_POINTS", "OF", "ARRAY", "LITERAL_NUMBER",
  "$accept", "programs", "ListDeclarations", "Declaration",
  "DeclarationCorp", "ListIndentifiers", "Type", "DeclarationOfMethods",
  "DeclarationOfMethod", "MethodHeader", "Arguments", "ListParameters",
  "ComposedInstruction", "ListInstructions", "Instruction", "Variable",
  "MethodCall", "ListExpressions", "Expression", "Factor", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    45,    45,    45,    45,    45,    45,    46,
      46,    47,    47,    48,    48,    48,    49,    49,    49,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    51,    51,
      52,    52,    52,    53,    53,    53,    53,    53,    53,    54,
      54,    54,    54,    55,    55,    56,    56,    57,    57,    57,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    59,    59,    59,    60,    60,
      60,    61,    61,    62,    62,    62,    63,    63,    63,    63,
      63
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     6,     5,     5,     3,     3,     4,     1,
       2,     3,     3,     3,     3,     3,     1,     3,     3,     1,
       8,     8,     8,     8,     8,     8,     8,     8,     1,     2,
       2,     3,     3,     3,     4,     2,     3,     4,     2,     3,
       3,     3,     2,     1,     3,     3,     2,     2,     3,     2,
       3,     1,     1,     6,     6,     6,     6,     6,     6,     4,
       4,     4,     4,     3,     3,     3,     4,     4,     4,     4,
       4,     4,     3,     3,     3,     1,     4,     4,     3,     4,
       4,     1,     3,     1,     3,     3,     1,     4,     4,     1,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     1,     6,     7,     0,     8,
       0,     0,     0,     0,     0,     9,     0,    28,     0,     2,
      46,     0,     0,     0,     0,    75,    52,     0,     0,     0,
      51,    35,     0,    38,     0,    16,     0,     0,     0,     4,
      10,     5,    29,     0,    30,     0,     0,    86,    89,     0,
      83,     0,     0,     0,     0,     0,     0,     0,     0,    45,
      49,    47,     0,     0,     0,    33,     0,    36,     0,     0,
      12,    11,     0,     0,     3,    32,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    64,     0,    81,
      65,    63,     0,    73,     0,    74,    72,     0,    78,     0,
       0,    48,    50,    43,     0,    42,     0,    34,    37,    18,
      17,    19,     0,    15,    14,    13,     0,    90,     0,     0,
       0,     0,    84,    85,    60,    61,    62,    59,    67,     0,
      68,    66,    70,    71,    69,    80,    79,    77,    76,     0,
      41,    40,    39,     0,     0,     0,    88,    87,     0,     0,
       0,     0,    82,    44,     0,     0,     0,    54,    55,    56,
      57,    58,    53,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,    22,    23,    24,    25,
      26,    27,    20
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    14,    15,   103,    37,   113,    16,    17,    18,
      66,   104,    26,    27,    28,    29,    30,    88,    89,    50
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -72
static const yytype_int16 yypact[] =
{
      70,    18,    33,    92,    29,   -72,   -72,   -72,   171,   -72,
     110,    21,    24,    -1,   164,   174,   184,   160,   119,   -72,
     -72,     1,    10,    86,   126,    64,   -72,   185,    30,   157,
     -72,   -72,    68,   -72,    71,   165,    31,    17,   184,   -72,
     -72,   -72,   -72,   140,   -72,   181,   120,   167,   -72,   163,
     143,   180,    26,   115,     7,   109,    20,   118,   120,   -72,
     -72,   112,   120,    -1,   111,   -72,   158,   -72,   162,    25,
     -72,   -72,    65,    19,   -72,   -72,   -72,   112,   169,   120,
     112,    80,   120,   120,   112,   112,    82,   -72,   170,   175,
     -72,   -72,    23,   -72,   172,   -72,   -72,    81,   -72,    84,
      22,   -72,   -72,   173,   176,   -72,   124,   -72,   -72,   -72,
     -72,   -72,    42,   -72,   -72,   -72,   182,   -72,    35,   190,
     191,   161,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   120,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,    -1,
     -72,   -72,   -72,   177,    11,   112,   -72,   -72,   112,   112,
     112,    96,   -72,   -72,   178,   179,    16,   -72,   -72,   -72,
     -72,   -72,   -72,   183,   186,   187,    15,   192,   193,   194,
     195,    69,   196,   197,   198,   199,   200,     6,   188,   189,
     204,   205,   208,   209,    88,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -72,   -72,   166,   -72,   201,   100,   132,   168,   -72,   -72,
     202,   -63,   122,   145,   -71,   -72,   -72,   -54,   -17,   104
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      92,   106,    45,    99,    49,    52,   116,   183,    90,   119,
     121,    51,   155,   124,   125,   127,   170,   165,    72,     3,
     114,    95,    31,   137,   130,    33,   109,    85,    46,    78,
       7,    60,    70,     5,    46,    91,   146,    46,    35,    86,
      47,   100,   111,   143,    48,   102,    47,   184,    96,    47,
      48,   131,   138,    48,   156,    73,   166,     4,   171,    35,
      32,   112,   118,    34,    35,   147,     8,    61,    71,    63,
     176,   144,    63,     1,   157,   152,   153,   158,   159,   160,
     162,   120,   133,   126,    10,   135,    10,    53,   111,   191,
      21,    57,    21,    58,    22,    64,    22,   161,    64,   177,
      10,    23,    24,    23,    24,    65,    21,   112,    67,   134,
      22,   192,   136,    54,    10,    20,    10,    23,    24,    25,
      21,    25,    21,    10,    22,   141,    22,    55,    13,     6,
      19,    23,    24,    23,    24,    25,    39,    93,    41,   105,
      44,    75,    46,    87,    10,    46,    98,    46,    35,    25,
      35,    25,   142,    56,    47,    94,    97,    47,    48,    47,
      74,    48,   150,    48,    80,    76,    11,    12,    10,   110,
      11,    12,     9,   151,    81,    10,    82,    11,    12,    83,
      13,    40,    38,    13,    43,    42,   122,   123,    10,    62,
      59,    69,    77,    84,   145,   107,    79,   117,   128,   108,
     132,   129,   148,   149,   140,   115,   101,     0,     0,     0,
     139,   185,   186,     0,    36,     0,     0,     0,   163,   164,
     154,     0,   172,   173,   174,   175,   167,   187,   188,   168,
     169,   189,   190,     0,     0,     0,    68,   178,   179,   180,
     181,   182
};

static const yytype_int16 yycheck[] =
{
      54,    64,     1,    57,    21,    22,    77,     1,     1,    80,
      81,     1,     1,    84,    85,    86,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,    27,    46,
       1,     1,     1,     0,    27,    28,     1,    27,    39,    13,
      39,    58,    23,     1,    43,    62,    39,    41,    28,    39,
      43,    28,    30,    43,    43,    38,    40,    39,    43,    39,
      39,    42,    79,    39,    39,    30,    37,    37,    37,     1,
       1,    29,     1,     3,   145,   129,   139,   148,   149,   150,
     151,     1,     1,     1,     4,     1,     4,     1,    23,     1,
      10,    27,    10,    29,    14,    27,    14,     1,    27,    30,
       4,    21,    22,    21,    22,    37,    10,    42,    37,    28,
      14,    23,    28,    27,     4,     5,     4,    21,    22,    39,
      10,    39,    10,     4,    14,     1,    14,     1,     9,    37,
       8,    21,    22,    21,    22,    39,    14,    28,    16,    28,
      18,     1,    27,    28,     4,    27,    28,    27,    39,    39,
      39,    39,    28,    27,    39,    55,    56,    39,    43,    39,
      38,    43,     1,    43,     1,    43,     6,     7,     4,    69,
       6,     7,     1,    12,    11,     4,    33,     6,     7,    36,
       9,    15,    14,     9,    18,    17,    82,    83,     4,    32,
       5,    26,    11,    13,    12,    37,    29,    28,    28,    37,
      28,    26,    12,    12,    28,    73,    61,    -1,    -1,    -1,
      37,    23,    23,    -1,    13,    -1,    -1,    -1,    40,    40,
      43,    -1,    30,    30,    30,    30,    43,    23,    23,    43,
      43,    23,    23,    -1,    -1,    -1,    34,    41,    41,    41,
      41,    41
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    45,     1,    39,     0,    37,     1,    37,     1,
       4,     6,     7,     9,    46,    47,    51,    52,    53,    56,
       5,    10,    14,    21,    22,    39,    56,    57,    58,    59,
      60,     1,    39,     1,    39,    39,    48,    49,    51,    56,
      46,    56,    51,    46,    56,     1,    27,    39,    43,    62,
      63,     1,    62,     1,    27,     1,    27,    27,    29,     5,
       1,    37,    32,     1,    27,    37,    54,    37,    54,    26,
       1,    37,     1,    38,    56,     1,    56,    11,    62,    29,
       1,    11,    33,    36,    13,     1,    13,    28,    61,    62,
       1,    28,    61,    28,    49,     1,    28,    49,    28,    61,
      62,    57,    62,    48,    55,    28,    55,    37,    37,     1,
      49,    23,    42,    50,     1,    50,    58,    28,    62,    58,
       1,    58,    63,    63,    58,    58,     1,    58,    28,    26,
       1,    28,    28,     1,    28,     1,    28,     1,    30,    37,
      28,     1,    28,     1,    29,    12,     1,    30,    12,    12,
       1,    12,    61,    55,    43,     1,    43,    58,    58,    58,
      58,     1,    58,    40,    40,     1,    40,    43,    43,    43,
       1,    43,    30,    30,    30,    30,     1,    30,    41,    41,
      41,    41,    41,     1,    41,    23,    23,    23,    23,    23,
      23,     1,    23
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 6:

/* Line 1455 of yacc.c  */
#line 118 "exemple.y"
    {yyerror (" Program's name invalid on line : "); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 119 "exemple.y"
    {yyerror (" Semicolon expected on line : "); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 120 "exemple.y"
    {yyerror (" Begin expected on line : "); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 126 "exemple.y"
    {yyerror (" Semicolon expected on line : "); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 130 "exemple.y"
    {yyerror (" Type expected on line : "); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 131 "exemple.y"
    {yyerror (" Colon expected on line : "); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 133 "exemple.y"
    {

                            if(g_hash_table_lookup(table_variable,getRef((yyvsp[(1) - (1)].texte),context))!=NULL){
        
                                                    printf(" Error Variable already declared ==> %s \n", strdup((yyvsp[(1) - (1)].texte))); 
                             exit(1) ;                  
                            }
                        printf(" Declaring Variable ==> %s \n", strdup((yyvsp[(1) - (1)].texte)));
                        Variable* var=malloc(sizeof(Variable));
                        if(var!=NULL){
                                var->type=strdup("variable");
                                var->affectation=0;
                                if(!g_hash_table_insert(table_variable,getRef((yyvsp[(1) - (1)].texte),context),var)){
                                        printf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
                                        exit(-1);
                                }
                        }else{
                                fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
                                exit(-1);
                        }

;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 156 "exemple.y"
    {

                            if(g_hash_table_lookup(table_variable,getRef((yyvsp[(1) - (3)].texte),context))!=NULL){
        
                                                    printf(" Error Variable already declared ==> %s \n", strdup((yyvsp[(1) - (3)].texte))); 
                             exit(1) ;                  
                            }

                        printf(" Declaring Variable ==> %s \n", strdup((yyvsp[(1) - (3)].texte)));
                        Variable* var=malloc(sizeof(Variable));
                        if(var!=NULL){
                                var->type=strdup("variable");
                                var->affectation=0;
                                if(!g_hash_table_insert(table_variable,getRef((yyvsp[(1) - (3)].texte),context),var)){
                                        fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
                                        exit(-1);
                                }
                        }else{
                                fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
                                exit(-1);
                        }

;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 180 "exemple.y"
    {yyerror (" Unexpected Comma on line : "); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 184 "exemple.y"
    {yyerror (" expected [ on line : "); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 185 "exemple.y"
    {yyerror (" expected Literal number on line : "); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 186 "exemple.y"
    {yyerror (" expected ..  on line : "); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 187 "exemple.y"
    {yyerror (" expected Literal number on line : "); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 188 "exemple.y"
    {yyerror (" expected ]  on line : "); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 189 "exemple.y"
    {yyerror (" expected of on line : "); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 190 "exemple.y"
    {yyerror (" expected Type on line : "); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 197 "exemple.y"
    {
                            context--; 
                            printf(" ============ Change to Context ========> %d \n", context);
                        ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 201 "exemple.y"
    {yyerror (" Begin expected onx line : "); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 204 "exemple.y"
    {
                            if(g_hash_table_lookup(table_variable,getRef((yyvsp[(2) - (3)].texte),context))!=NULL){
        
                                                    printf(" Error Procedure already declared ==> %s \n", strdup((yyvsp[(2) - (3)].texte))); 
                             exit(1) ;                  
                            }
                        context++; 
                        printf(" ============ Change to Context ========> %d \n", context);
                        printf(" Declaring Procedure ==> %s \n", strdup((yyvsp[(2) - (3)].texte)));
                        Variable* var=malloc(sizeof(Variable));
                        if(var!=NULL){
                                var->type=strdup("method");
                                if(!g_hash_table_insert(table_variable,getRef((yyvsp[(2) - (3)].texte),context),var)){
                                        fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
                                        exit(-1);
                                }
                        }else{
                                fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
                                exit(-1);
                        }



;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 229 "exemple.y"
    {

                            if(g_hash_table_lookup(table_variable,getRef((yyvsp[(2) - (4)].texte),context))!=NULL){
        
                                                    printf(" Error Procedure already declared ==> %s \n", strdup((yyvsp[(2) - (4)].texte))); 
                             exit(1) ;                  
                            }

                        context++; 
                        printf(" ============ Change to Context ========> %d \n", context);
                        printf(" Declaring Procedure ==> %s \n", strdup((yyvsp[(2) - (4)].texte)));
                         Variable* var=malloc(sizeof(Variable));
                        if(var!=NULL){
                                var->type=strdup("method");
                                if(!g_hash_table_insert(table_variable,getRef((yyvsp[(2) - (4)].texte),context),var)){
                                        fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
                                        exit(-1);
                                }
                        }else{
                                fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
                                exit(-1);
                        }

;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 253 "exemple.y"
    {yyerror (" expected Procedure name on line : "); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 255 "exemple.y"
    {

                                                    if(g_hash_table_lookup(table_variable,getRef((yyvsp[(2) - (3)].texte),context))!=NULL){
        
                                                    printf(" Error Function already declared ==> %s \n", strdup((yyvsp[(2) - (3)].texte))); 
                             exit(1) ;                  
                            }

                        context++; 
                        printf(" ============ Change to Context ========> %d \n", context);
                        printf(" Declaring Function ==> %s \n", strdup((yyvsp[(2) - (3)].texte)));
                         Variable* var=malloc(sizeof(Variable));
                        if(var!=NULL){
                                var->type=strdup("method");
                                if(!g_hash_table_insert(table_variable,getRef((yyvsp[(2) - (3)].texte),context),var)){
                                        fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
                                        exit(-1);
                                }
                        }else{
                                fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
                                exit(-1);
                        }

;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 280 "exemple.y"
    {

                                                    if(g_hash_table_lookup(table_variable,getRef((yyvsp[(2) - (4)].texte),context))!=NULL){
        
                                                    printf(" Error Function already declared ==> %s \n", strdup((yyvsp[(2) - (4)].texte))); 
                             exit(1) ;                  
                            }

                        context++; 
                        printf(" ============ Change to Context ========> %d \n", context);
                        printf(" Declaring Function ==> %s \n", strdup((yyvsp[(2) - (4)].texte)));
                         Variable* var=malloc(sizeof(Variable));
                        if(var!=NULL){
                                var->type=strdup("method");
                                if(!g_hash_table_insert(table_variable,getRef((yyvsp[(2) - (4)].texte),context),var)){
                                        fprintf(stderr,"ERREUR - PROBLEME CREATION VARIABLE !\n");
                                        exit(-1);
                                }
                        }else{
                                fprintf(stderr,"ERREUR - PROBLEME ALLOCATION MEMOIRE VARIABLE !\n");
                                exit(-1);
                        }

;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 304 "exemple.y"
    {yyerror (" expected Function name on line : "); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 307 "exemple.y"
    {yyerror (" expected )  on line : "); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 308 "exemple.y"
    {yyerror (" expected ( on line : "); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 319 "exemple.y"
    {yyerror (" expected ;  on line : "); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 322 "exemple.y"
    {
                         Variable* var=g_hash_table_lookup(table_variable,getRef((yyvsp[(1) - (3)].texte),context));
                                        if(var!=NULL){
                                            
                                                    printf(" Affecting value to ==> %s \n ", strdup((yyvsp[(1) - (3)].texte)));
                                                    printf(" Use of Variable ========> %s \n", strdup((yyvsp[(1) - (3)].texte))); 
                                                    var->affectation = var->affectation +1;
                                                
                                                
                                        }else{
                                                 printf(" ERROR Variable not Declared ==> %s \n", strdup((yyvsp[(1) - (3)].texte))); 
                                        }
                         
                         ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 341 "exemple.y"
    {yyerror (" expected Expression  on line : "); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 342 "exemple.y"
    {yyerror (" expected THEN  on line : "); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 343 "exemple.y"
    {yyerror (" expected Instruction  on line : "); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 344 "exemple.y"
    {yyerror (" expected Else  on line : "); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 345 "exemple.y"
    {yyerror (" expected Instruction  on line : "); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 348 "exemple.y"
    {yyerror (" expected Expression  on line : "); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 349 "exemple.y"
    {yyerror (" expected DO  on line : "); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 350 "exemple.y"
    {yyerror (" expected Instruction  on line : "); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 353 "exemple.y"
    {yyerror (" expected (  on line : "); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 354 "exemple.y"
    {yyerror (" expected )  on line : "); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 357 "exemple.y"
    {yyerror (" expected (  on line : "); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 358 "exemple.y"
    {yyerror (" expected )  on line : "); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 361 "exemple.y"
    {yyerror (" expected (  on line : "); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 362 "exemple.y"
    {yyerror (" expected )  on line : "); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 364 "exemple.y"
    {yyerror (" expected (  on line : "); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 365 "exemple.y"
    {yyerror (" expected )  on line : "); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 369 "exemple.y"
    {yyerror (" expected ]  on line : "); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 372 "exemple.y"
    {
                         Variable* var=g_hash_table_lookup(table_variable,getRef((yyvsp[(1) - (3)].texte),context));
                                        if(var!=NULL){
                                            
                                                
                                                    printf(" Call to method ==> %s \n", strdup((yyvsp[(1) - (3)].texte))); 
                                                
                                               
                                                
                                        }else{
                                                 printf(" ERROR Method not Declared ==> %s \n", strdup((yyvsp[(1) - (3)].texte))); 
                                        }
                         
                         ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 387 "exemple.y"
    {
                         Variable* var=g_hash_table_lookup(table_variable,getRef((yyvsp[(1) - (4)].texte),context));
                                        if(var!=NULL){
                                            
                                                
                                                    printf(" Call to method ==> %s \n", strdup((yyvsp[(1) - (4)].texte))); 
                                                
                                               
                                                
                                        }else{
                                                 printf(" ERROR Method not Declared ==> %s \n", strdup((yyvsp[(1) - (4)].texte))); 
                                        }
                         
                         ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 401 "exemple.y"
    {yyerror (" expected )  on line : "); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 411 "exemple.y"
    {
                         Variable* var=g_hash_table_lookup(table_variable,getRef((yyvsp[(1) - (1)].texte),context));
                                        if(var!=NULL){
                                            
                                                if(var->affectation==0)
                                                { printf(" ERROR Variable not initialized ==> %s \n", strdup((yyvsp[(1) - (1)].texte))); 
                                                exit(1) ; 
                                                }else{
                                                    printf(" Use of Variable ========> %s \n", strdup((yyvsp[(1) - (1)].texte))); 
                                                
                                                }
                                                
                                        }else{
                                                 printf(" ERROR Variable not Declared ==> %s \n", strdup((yyvsp[(1) - (1)].texte))); 
                                                 exit(1) ; 
                                        }
                         
                         ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 430 "exemple.y"
    {
                         Variable* var=g_hash_table_lookup(table_variable,getRef((yyvsp[(1) - (4)].texte),context));
                                        if(var!=NULL){
                                            
                                                if(var->affectation==0)
                                                { printf("ERROR Variable not initialized ==> %s \n", strdup((yyvsp[(1) - (4)].texte))); 
                                                }else{
                                                    printf(" Use of Variable ========> %s \n", strdup((yyvsp[(1) - (4)].texte))); 
                                                }
                                                
                                        }else{
                                                 printf(" ERROR Variable not Declared ==> %s \n", strdup((yyvsp[(1) - (4)].texte))); 
                                                 exit(1) ; 
                                        }
                         
                         ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 446 "exemple.y"
    {yyerror (" expected ]  on line : "); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2203 "exemple.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, &yylloc);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 451 "exemple.y"
 

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
  
                   

