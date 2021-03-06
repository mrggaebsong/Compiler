/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "c6.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "calc3.h"

#define TABLE_SIZE 40000

/* prototypes */
nodeType *createFunc(nodeType * funcNameId, nodeType *args, nodeType *stmtlist, int coun);
nodeType *opr(int oper, int nops, ...);
nodeType *id(char *var_name, int isGlobal);
nodeType *con(int value);
nodeType *charCon(char *value);
nodeType *strCon(char *value);
nodeType* addOperand(nodeType* p1,nodeType* p2);
nodeType * OneDArray(nodeType * name, nodeType * index);
void freeNode(nodeType *p);
int ex(nodeType *p, int, int, int);
void eop();
int yylex(void);

void yyerror(char *s);

// variable related
char* sym[TABLE_SIZE]; //symbol table
int var_count = 0; //variable count
int loc_var_count = 0;//count for local variable


int inSYM(char *var_name);
void insertSYM(char * var_name, int isGlobal);
int getSYMIdx(char *var_name, int isGlobal);
void emptySYM(int isGlobal);
void printsp(int coun);
void prepass(nodeType *p, int infunc);
void printStackTop(int type);
void insertArraySYM(char * array_name, int array_size, int is_global);
int checkType (int index);
void insertFUNC(char * func_name);
int getFUNCIdx(char * func_name);
void emptyFUNC();
void insertArg(int argnum, int idx);
void setType (int index, int t);
int checkExprType (nodeType* p);

//helper functions
void printSYM();
// function related
char* func[TABLE_SIZE]; //function table
int func_count = 0; //function count
int argTable[TABLE_SIZE];

void insertFUNC(char *var_name);
int getFUNCIdx(char *var_name);
void emptyFUNC();

void insertArg(int argnum, int idx);
// variable type related
int vType[TABLE_SIZE]; //type table

// expression type checking
int checkExprType (nodeType* p);

int argc = 0; // global variable for arguments count

int in_func = 0; // global variable for checking if variables are declared inside functions


void prepass(nodeType *p, int infunc);

#line 138 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INTEGER = 258,
    STRING = 259,
    CHARACTER = 260,
    VARIABLE = 261,
    WHILE = 262,
    IF = 263,
    RETURN = 264,
    PUTI = 265,
    PUTH = 266,
    PUTC = 267,
    PUTS = 268,
    PUTI_ = 269,
    PUTH_ = 270,
    PUTC_ = 271,
    PUTS_ = 272,
    GETI = 273,
    GETC = 274,
    GETS = 275,
    ARRAY = 276,
    ARRAY_DECLARE = 277,
    PARAM_ARRAY_DECLARE = 278,
    STRING_ARRAY_DECLARE = 279,
    IFX = 280,
    ELSE = 281,
    AND = 282,
    OR = 283,
    GE = 284,
    LE = 285,
    EQ = 286,
    NE = 287,
    UMINUS = 288
  };
#endif
/* Tokens.  */
#define INTEGER 258
#define STRING 259
#define CHARACTER 260
#define VARIABLE 261
#define WHILE 262
#define IF 263
#define RETURN 264
#define PUTI 265
#define PUTH 266
#define PUTC 267
#define PUTS 268
#define PUTI_ 269
#define PUTH_ 270
#define PUTC_ 271
#define PUTS_ 272
#define GETI 273
#define GETC 274
#define GETS 275
#define ARRAY 276
#define ARRAY_DECLARE 277
#define PARAM_ARRAY_DECLARE 278
#define STRING_ARRAY_DECLARE 279
#define IFX 280
#define ELSE 281
#define AND 282
#define OR 283
#define GE 284
#define LE 285
#define EQ 286
#define NE 287
#define UMINUS 288

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 73 "c6.y" /* yacc.c:355  */

    int iValue;                 /* integer value */
    char *sValue;		/* address of the string */
    char *vName;                /* symbol table index */
    nodeType *nPtr;             /* node pointer */

#line 251 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 268 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   574

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  9
/* YYNRULES -- Number of rules.  */
#define YYNRULES  58
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  175

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    39,     2,     2,
      41,    42,    37,    35,    47,    36,     2,    38,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    48,
      34,    49,    33,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    45,     2,    46,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,    44,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    40
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   102,   102,   106,   107,   108,   112,   113,   116,   117,
     118,   119,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   150,   154,   155,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "STRING", "CHARACTER",
  "VARIABLE", "WHILE", "IF", "RETURN", "PUTI", "PUTH", "PUTC", "PUTS",
  "PUTI_", "PUTH_", "PUTC_", "PUTS_", "GETI", "GETC", "GETS", "ARRAY",
  "ARRAY_DECLARE", "PARAM_ARRAY_DECLARE", "STRING_ARRAY_DECLARE", "IFX",
  "ELSE", "AND", "OR", "GE", "LE", "EQ", "NE", "'>'", "'<'", "'+'", "'-'",
  "'*'", "'/'", "'%'", "UMINUS", "'('", "')'", "'{'", "'}'", "'['", "']'",
  "','", "';'", "'='", "$accept", "program", "tree", "function", "para",
  "stmt", "vari", "stmt_list", "expr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,    62,    60,    43,    45,    42,    47,    37,
     288,    40,    41,   123,   125,    91,    93,    44,    59,    61
};
# endif

#define YYPACT_NINF -120

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-120)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -120,     4,    58,  -120,  -120,  -120,  -120,  -120,   -36,   -30,
      54,   -29,   -22,   -16,   -14,    -8,     7,    14,    45,    48,
      52,    55,    34,    54,    54,    58,  -120,  -120,  -120,     5,
     316,    54,    54,    46,   330,    54,    54,    54,    54,    54,
      54,    54,    54,    34,    34,    34,    67,  -120,   372,  -120,
      43,   194,     3,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,  -120,   388,   404,    11,
      54,  -120,   420,   436,   452,   468,   484,   500,   516,   532,
      85,    86,    92,    97,  -120,  -120,  -120,    34,    71,    93,
      94,   190,   344,    -1,    -1,    72,    72,    72,    72,    78,
      78,  -120,  -120,  -120,    58,    58,  -120,    95,   290,    49,
      90,    91,    99,   103,   105,   107,   108,   111,   112,   121,
      73,   100,    58,   127,    77,   122,  -120,  -120,   114,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,   -27,   169,   248,    58,  -120,    54,    58,   170,
    -120,   171,   128,  -120,   294,   358,  -120,   130,   129,   147,
    -120,  -120,   -35,  -120,   191,   213,  -120,   177,   178,   148,
     183,   229,  -120,   187,  -120
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     2,     1,    39,    41,    40,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,     4,     3,    57,
       0,     0,     0,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    42,     0,    37,
      57,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,     0,     0,     0,
       0,    29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    54,    17,    38,     0,    56,     0,
       8,     0,     0,    52,    53,    48,    49,    51,    50,    43,
      44,    45,    47,    46,     0,     0,    56,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,     0,    58,    13,    14,    15,    55,
      58,    19,    21,    24,    27,    20,    22,    25,    28,    18,
      23,    26,     0,     0,     0,     0,    11,     0,     0,     0,
      31,     0,     0,     7,     0,     0,    16,     0,     0,     0,
       6,    34,     0,    35,     0,     0,    32,     0,     0,     9,
       0,     0,    33,     0,    10
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -120,  -120,  -120,  -120,   -68,     0,    -2,  -119,   126
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,    27,    89,    49,    33,    51,    30
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      29,   107,    28,   144,     3,    31,     4,     5,     6,     7,
     165,    32,    35,   166,     4,     5,     6,     7,   149,    36,
      46,   150,   151,    50,    87,    37,   154,    38,    57,    58,
      59,    60,    87,    39,    61,    62,    63,    64,    65,    23,
       7,    80,    81,    82,    24,    88,    52,    23,    40,    50,
      53,    86,    24,   106,    54,    41,   146,     4,     5,     6,
       7,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
       4,     5,     6,     7,    69,   121,    42,    69,    53,    43,
      23,    70,    54,    44,    23,    24,    45,   131,    87,    24,
     120,    25,    50,    50,   127,   128,    26,    61,    62,    63,
      64,    65,    83,    23,   122,    63,    64,    65,    24,   142,
      50,    55,    56,    57,    58,    59,    60,   117,   118,    61,
      62,    63,    64,    65,   119,   123,    34,   129,   132,   133,
     148,   124,    50,    50,    86,   143,    50,   134,   156,    47,
      48,   135,    50,   136,    86,   137,   138,    67,    68,   139,
     140,    72,    73,    74,    75,    76,    77,    78,    79,   141,
     145,   147,   152,   157,   159,   158,   162,   163,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   164,   171,   167,    90,   108,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,   168,    55,    56,    57,
      58,    59,    60,   169,   170,    61,    62,    63,    64,    65,
      23,   172,   173,   174,     0,    24,   125,    25,    85,     0,
       0,     0,    26,     0,     0,     0,     0,     0,     0,     0,
      90,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
       0,     0,     0,   155,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    23,     0,     0,     0,     0,    24,
       0,    25,   153,     0,     0,     0,    26,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,     0,    55,    56,    57,
      58,    59,    60,     0,     0,    61,    62,    63,    64,    65,
      23,     0,     0,     0,     0,    24,   130,    25,   160,     0,
       0,     0,    26,    55,    56,    57,    58,    59,    60,     0,
       0,    61,    62,    63,    64,    65,     0,    55,    56,    57,
      58,    59,    60,     0,    66,    61,    62,    63,    64,    65,
       0,    55,    56,    57,    58,    59,    60,     0,    71,    61,
      62,    63,    64,    65,     0,    55,    56,    57,    58,    59,
      60,     0,   126,    61,    62,    63,    64,    65,     0,    55,
      56,    57,    58,    59,    60,     0,   161,    61,    62,    63,
      64,    65,     0,     0,    84,    55,    56,    57,    58,    59,
      60,     0,     0,    61,    62,    63,    64,    65,     0,     0,
     104,    55,    56,    57,    58,    59,    60,     0,     0,    61,
      62,    63,    64,    65,     0,     0,   105,    55,    56,    57,
      58,    59,    60,     0,     0,    61,    62,    63,    64,    65,
       0,     0,   109,    55,    56,    57,    58,    59,    60,     0,
       0,    61,    62,    63,    64,    65,     0,     0,   110,    55,
      56,    57,    58,    59,    60,     0,     0,    61,    62,    63,
      64,    65,     0,     0,   111,    55,    56,    57,    58,    59,
      60,     0,     0,    61,    62,    63,    64,    65,     0,     0,
     112,    55,    56,    57,    58,    59,    60,     0,     0,    61,
      62,    63,    64,    65,     0,     0,   113,    55,    56,    57,
      58,    59,    60,     0,     0,    61,    62,    63,    64,    65,
       0,     0,   114,    55,    56,    57,    58,    59,    60,     0,
       0,    61,    62,    63,    64,    65,     0,     0,   115,    55,
      56,    57,    58,    59,    60,     0,     0,    61,    62,    63,
      64,    65,     0,     0,   116
};

static const yytype_int16 yycheck[] =
{
       2,    69,     2,   122,     0,    41,     3,     4,     5,     6,
      45,    41,    41,    48,     3,     4,     5,     6,    45,    41,
      22,    48,    49,    25,    21,    41,   145,    41,    29,    30,
      31,    32,    21,    41,    35,    36,    37,    38,    39,    36,
       6,    43,    44,    45,    41,    42,    41,    36,    41,    51,
      45,    51,    41,    42,    49,    41,   124,     3,     4,     5,
       6,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       3,     4,     5,     6,    41,    87,    41,    41,    45,    41,
      36,    45,    49,    41,    36,    41,    41,    48,    21,    41,
       3,    43,   104,   105,   104,   105,    48,    35,    36,    37,
      38,    39,    45,    36,    43,    37,    38,    39,    41,    46,
     122,    27,    28,    29,    30,    31,    32,    42,    42,    35,
      36,    37,    38,    39,    42,    42,    10,    42,    48,    48,
      26,    47,   144,   145,   144,    45,   148,    48,   148,    23,
      24,    48,   154,    48,   154,    48,    48,    31,    32,    48,
      48,    35,    36,    37,    38,    39,    40,    41,    42,    48,
      43,    49,     3,     3,    46,     4,    46,    48,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    45,    45,     3,    69,    70,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     3,    27,    28,    29,
      30,    31,    32,    46,    46,    35,    36,    37,    38,    39,
      36,    48,     3,    46,    -1,    41,    46,    43,    44,    -1,
      -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     124,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    41,
      -1,    43,    44,    -1,    -1,    -1,    48,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    36,    37,    38,    39,
      36,    -1,    -1,    -1,    -1,    41,    46,    43,    44,    -1,
      -1,    -1,    48,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    -1,    27,    28,    29,
      30,    31,    32,    -1,    48,    35,    36,    37,    38,    39,
      -1,    27,    28,    29,    30,    31,    32,    -1,    48,    35,
      36,    37,    38,    39,    -1,    27,    28,    29,    30,    31,
      32,    -1,    48,    35,    36,    37,    38,    39,    -1,    27,
      28,    29,    30,    31,    32,    -1,    48,    35,    36,    37,
      38,    39,    -1,    -1,    42,    27,    28,    29,    30,    31,
      32,    -1,    -1,    35,    36,    37,    38,    39,    -1,    -1,
      42,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      36,    37,    38,    39,    -1,    -1,    42,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    36,    37,    38,    39,
      -1,    -1,    42,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    -1,    -1,    42,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    -1,    -1,    42,    27,    28,    29,    30,    31,
      32,    -1,    -1,    35,    36,    37,    38,    39,    -1,    -1,
      42,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      36,    37,    38,    39,    -1,    -1,    42,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    36,    37,    38,    39,
      -1,    -1,    42,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    -1,    -1,    42,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    -1,    -1,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    51,    52,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    36,    41,    43,    48,    53,    55,    56,
      58,    41,    41,    56,    58,    41,    41,    41,    41,    41,
      41,    41,    41,    41,    41,    41,    56,    58,    58,    55,
      56,    57,    41,    45,    49,    27,    28,    29,    30,    31,
      32,    35,    36,    37,    38,    39,    48,    58,    58,    41,
      45,    48,    58,    58,    58,    58,    58,    58,    58,    58,
      56,    56,    56,    45,    42,    44,    55,    21,    42,    54,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    42,    42,    42,    54,    58,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    42,    42,
       3,    56,    43,    42,    47,    46,    48,    55,    55,    42,
      46,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    46,    45,    57,    43,    54,    49,    26,    45,
      48,    49,     3,    44,    57,    58,    55,     3,     4,    46,
      44,    48,    46,    48,    45,    45,    48,     3,     3,    46,
      46,    45,    48,     3,    46
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    52,    52,    53,    53,    54,    54,
      54,    54,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    56,    57,    57,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     0,     7,     6,     1,     8,
      11,     3,     1,     4,     5,     5,     7,     3,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     3,
       2,     6,     9,    12,     7,     8,     1,     1,     2,     1,
       1,     1,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     3,     1,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 102 "c6.y" /* yacc.c:1646  */
    {  prepass((yyvsp[0].nPtr), 0); printsp(var_count); printSYM(); ex((yyvsp[0].nPtr), 998, 998, 0); eop(); exit(0); }
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 106 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(MAIN, 2, (yyvsp[-1].nPtr), (yyvsp[0].nPtr)); in_func = 0; }
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 107 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(MAIN, 2, (yyvsp[-1].nPtr), (yyvsp[0].nPtr)); }
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 108 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = NULL; }
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 112 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = createFunc((yyvsp[-6].nPtr), (yyvsp[-4].nPtr), (yyvsp[-1].nPtr), argc); in_func = 1;}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 113 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = createFunc((yyvsp[-5].nPtr), NULL, (yyvsp[-1].nPtr), 0); in_func = 1;}
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 116 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 117 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(PARAM_ARRAY_DECLARE, 3, (yyvsp[-6].nPtr), con((yyvsp[-4].iValue)), con((yyvsp[-1].iValue)));}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 118 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(PARAM_ARRAY_DECLARE, 4, (yyvsp[-9].nPtr), con((yyvsp[-7].iValue)), con((yyvsp[-4].iValue)), con((yyvsp[-1].iValue)));}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 119 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(',', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 123 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(';', 2, NULL, NULL); }
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 124 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr('=', 2, (yyvsp[-3].nPtr), (yyvsp[-1].nPtr)); }
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 125 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(WHILE, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 126 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(IF, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 127 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(IF, 3, (yyvsp[-4].nPtr), (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 128 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 129 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(GETI, 1, (yyvsp[-2].nPtr));}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 130 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(PUTI, 1, (yyvsp[-2].nPtr));}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 131 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(PUTI_, 1, (yyvsp[-2].nPtr));}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 132 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(PUTH, 1, (yyvsp[-2].nPtr));}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 133 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(PUTH_, 1, (yyvsp[-2].nPtr));}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 134 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(GETC, 1, (yyvsp[-2].nPtr));}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 135 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(PUTC, 1, (yyvsp[-2].nPtr));}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 136 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(PUTC_, 1, (yyvsp[-2].nPtr));}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 137 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(GETS, 1, (yyvsp[-2].nPtr));}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 138 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(PUTS, 1, (yyvsp[-2].nPtr));}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 139 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(PUTS_, 1, (yyvsp[-2].nPtr));}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 140 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(RETURN,1,(yyvsp[-1].nPtr));}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 141 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 142 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(ARRAY_DECLARE, 2, (yyvsp[-4].nPtr), con((yyvsp[-2].iValue)));}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 143 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(ARRAY_DECLARE, 3, (yyvsp[-7].nPtr), con((yyvsp[-5].iValue)), con((yyvsp[-2].iValue)));}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 144 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(ARRAY_DECLARE, 4, (yyvsp[-10].nPtr), con((yyvsp[-8].iValue)), con((yyvsp[-5].iValue)), con((yyvsp[-2].iValue)));}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 145 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr('=', 3, (yyvsp[-6].nPtr), (yyvsp[-4].nPtr), (yyvsp[-1].nPtr));}
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 146 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(STRING_ARRAY_DECLARE, 3, (yyvsp[-6].nPtr), con((yyvsp[-4].iValue)), strCon((yyvsp[-1].sValue))); }
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 150 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = id((yyvsp[0].vName), 0); }
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 154 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 155 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(';', 2, (yyvsp[-1].nPtr), (yyvsp[0].nPtr)); }
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 159 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = con((yyvsp[0].iValue)); }
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 160 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = charCon((yyvsp[0].sValue)); }
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 161 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = strCon((yyvsp[0].sValue)); }
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 162 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(UMINUS, 1, (yyvsp[0].nPtr)); }
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 163 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr('+', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 164 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr('-', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 165 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr('*', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 166 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr('%', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 167 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr('/', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 168 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(GE, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 169 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(LE, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 170 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(NE, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 171 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(EQ, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 172 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(AND, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 173 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(OR, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 174 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 175 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(CALL, 2, (yyvsp[-3].nPtr), (yyvsp[-1].nPtr)); }
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 176 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(CALL, 2, (yyvsp[-2].nPtr), NULL); }
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 177 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 178 "c6.y" /* yacc.c:1646  */
    { (yyval.nPtr) = OneDArray((yyvsp[-3].nPtr), (yyvsp[-1].nPtr));}
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1866 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



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
                      yytoken, &yylval);
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
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
  return yyresult;
}
#line 181 "c6.y" /* yacc.c:1906  */


#define SIZEOF_NODETYPE ((char *)&p->con - (char *)p)

nodeType *con(int value) {
    nodeType *p;
    size_t nodeSize;

    /* allocate node */
    nodeSize = SIZEOF_NODETYPE + sizeof(conNodeType);
    if ((p = malloc(nodeSize)) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->type = typeCon;
    p->con.value = value;

    return p;
}

nodeType *charCon(char *value) {
    nodeType *p;
    size_t nodeSize;

    /* allocate node */
    nodeSize = SIZEOF_NODETYPE + sizeof(conNodeType);
    if ((p = malloc(nodeSize)) == NULL)
        yyerror("out of memory");
    /* copy information */
    p->type = typeCharCon;
    p->charCon.value = value;

    return p;
}

// add p2 to p1
nodeType* addOperand(nodeType* p1,nodeType* p2){
    nodeType* p;
    size_t nodeSize;
    int i;
    /* allocate node */
    nodeSize = SIZEOF_NODETYPE + sizeof(oprNodeType) +
        (p1->opr.nops) * sizeof(nodeType*);
    if ((p = malloc(nodeSize)) == NULL)
        yyerror("out of memory");
    // copy values
    p->type = typeOpr;
    p->opr.oper = p1->opr.oper;
    p->opr.nops = p1->opr.nops +1;
    for (i=0;i<p1->opr.nops;i++)
        p->opr.op[i] = p1->opr.op[i];
    p->opr.op[i] = p2;
    return p;
}

nodeType *strCon(char *value) {
    nodeType *p;
    size_t nodeSize;

    /* allocate node */
    nodeSize = SIZEOF_NODETYPE + sizeof(conNodeType);
    if ((p = malloc(nodeSize)) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->strCon.value = (char *)malloc(sizeof(char) * 200);
    int i=0;
    while(value[i]!='\0'){
        p->strCon.value[i] = value[i];
        i++;
    }
    p->type = typeStrCon;
    //p->strCon.value = value;

    return p;
}

nodeType *id(char *name, int isGlobal) {
    nodeType *p;
    size_t nodeSize;

    /* allocate node */
    nodeSize = SIZEOF_NODETYPE + sizeof(idNodeType);
    if ((p = malloc(nodeSize)) == NULL)
        yyerror("out of memory");

    p->id.isGlobal = isGlobal;
    p->id.var_name = name;
    p->type = typeId;

    return p;
}

nodeType *opr(int oper, int nops, ...) {
    va_list ap;
    nodeType *p;
    size_t nodeSize;
    int i;

    /* allocate node */
    nodeSize = SIZEOF_NODETYPE + sizeof(oprNodeType) +
        (nops - 1) * sizeof(nodeType*);
    if ((p = malloc(nodeSize)) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->type = typeOpr;
    p->opr.oper = oper;
    p->opr.nops = nops;
    va_start(ap, nops);
    for (i = 0; i < nops; i++)
        p->opr.op[i] = va_arg(ap, nodeType*);
    va_end(ap);
    return p;
}

/*
funcNameId: function name id node
arguments: function arguments
stmtlist: content of the function
coun: argc
function for creating node for funtion
*/
nodeType *createFunc(nodeType* funcNameId, nodeType *arguments, nodeType *stmtlist, int coun) {
    nodeType *p;
    size_t nodeSize;
    /* allocate node */
    nodeSize = SIZEOF_NODETYPE + sizeof(funcNodeType);


    if ((p = malloc(nodeSize)) == NULL)
        yyerror("out of memory");
    /* copy information */
    p->func.argc = countArgc(arguments);
    p->func.args = arguments;
    p->func.name = funcNameId->id.var_name;
    p->func.op = stmtlist;
    p->type = typeFunc;

    //printf("name:%s, argc: %d\n", funcNameId->id.var_name, p->func.argc);
    return p;
}

int countArgc(nodeType *arguments){
    if (arguments!=NULL){
      if (arguments->type == typeOpr && arguments->opr.oper == ','){
        return 1+countArgc(arguments->opr.op[1]);
      } else {
        return 1;
      }
    }else{
      return 0;
    }
}

/* OneD Array construction function*/
nodeType * OneDArray(nodeType * name, nodeType * index)
{
  nodeType *p;
  size_t nodeSize;
  /* allocate node*/
  nodeSize = SIZEOF_NODETYPE + sizeof(OneDArrayNodeType);
  if((p = malloc(nodeSize)) == NULL)
  {
    yyerror("out of memory");
  }
  /* copy information */
  p->type = typeOneDArray;
  p->onedarray.name = name;
  p->onedarray.index = index;

  return p;
}

void freeNode(nodeType *p) {
    int i;

    if (!p) return;
    if (p->type == typeOpr) {
        for (i = 0; i < p->opr.nops; i++)
            freeNode(p->opr.op[i]);
    }
    free (p);
}

void yyerror(char *s) {
    fprintf(stdout, "%s\n", s);
}


int main(int argc, char **argv) {
extern FILE* yyin;
    yyin = fopen(argv[1], "r");
    yyparse();
    return 0;
}
