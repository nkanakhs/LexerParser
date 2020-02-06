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
#line 1 "myparser.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <stdlib.h>
	#include "cgen.h"
	#include <string.h>
	
	extern int yylex(void);
	extern int line_num;


#line 77 "myparser.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "myparser.tab.h".  */
#ifndef YY_YY_MYPARSER_TAB_H_INCLUDED
# define YY_YY_MYPARSER_TAB_H_INCLUDED
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
    IDENTIFIER = 258,
    INTEGER_CONST = 259,
    REAL_CONST = 260,
    STRING = 261,
    KW_INT = 262,
    KW_REAL = 263,
    KW_BOOL = 264,
    KW_STRING = 265,
    KW_TRUE = 266,
    KW_FALSE = 267,
    KW_IF = 268,
    KW_THEN = 269,
    KW_ELSE = 270,
    KW_FI = 271,
    KW_WHILE = 272,
    KW_LOOP = 273,
    KW_POOL = 274,
    KW_CONST = 275,
    KW_LET = 276,
    KW_RETURN = 277,
    KW_NOT = 278,
    KW_AND = 279,
    KW_OR = 280,
    KW_START = 281,
    ASSIGN = 282,
    EQUAL_OR_LESS = 283,
    NOT_EQUAL = 284,
    ARROW = 285,
    RDSTRING = 286,
    RDINT = 287,
    RDREAL = 288,
    WRTSTRING = 289,
    WRTINT = 290,
    WRTREAL = 291
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "myparser.y" /* yacc.c:355  */

	char* crepr;

#line 158 "myparser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYPARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 175 "myparser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   523

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  184

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    41,     2,     2,
      42,    43,    39,    37,    49,    38,     2,    40,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    50,    51,
      44,    46,    45,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,    53,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,    48,     2,     2,     2,     2,
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
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    93,    93,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   128,   129,
     130,   131,   132,   133,   136,   139,   142,   145,   146,   149,
     152,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   170,   171,   172,   173,   174,   175,
     178,   179,   180,   183,   186,   187,   191,   192,   193,   194,
     197,   200,   201,   204,   205,   208,   211,   212,   213,   214,
     217,   218,   219,   220,   221,   222
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "INTEGER_CONST",
  "REAL_CONST", "STRING", "KW_INT", "KW_REAL", "KW_BOOL", "KW_STRING",
  "KW_TRUE", "KW_FALSE", "KW_IF", "KW_THEN", "KW_ELSE", "KW_FI",
  "KW_WHILE", "KW_LOOP", "KW_POOL", "KW_CONST", "KW_LET", "KW_RETURN",
  "KW_NOT", "KW_AND", "KW_OR", "KW_START", "ASSIGN", "EQUAL_OR_LESS",
  "NOT_EQUAL", "ARROW", "RDSTRING", "RDINT", "RDREAL", "WRTSTRING",
  "WRTINT", "WRTREAL", "'+'", "'-'", "'*'", "'/'", "'%'", "'('", "')'",
  "'<'", "'>'", "'='", "'{'", "'}'", "','", "':'", "';'", "'['", "']'",
  "$accept", "program", "expr", "funcParameters", "read_string",
  "read_int", "read_real", "write_string", "write_int", "write_real",
  "allCommands", "decList", "funcDecl", "func", "body", "ifCommand",
  "whileCommand", "returnCommand", "varDecl", "arrayDecl", "data_types",
  "identifiers", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,    43,    45,    42,
      47,    37,    40,    41,    60,    62,    61,   123,   125,    44,
      58,    59,    91,    93
};
# endif

#define YYPACT_NINF -96

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-96)))

#define YYTABLE_NINF -81

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      54,    10,     9,    23,   -96,    54,    54,    13,     5,    -6,
      46,    16,   -96,   -96,   -96,   107,     9,   147,     7,    17,
     166,   147,   166,    26,   -96,   -96,   -96,   -96,   -96,   147,
      37,    41,    44,   147,   160,   336,   -96,   -96,   -96,   -96,
     -96,   147,   259,   147,    53,   -96,   -96,   -96,   -96,    49,
      50,   160,   428,    63,    77,    80,   102,    72,   359,   -18,
      47,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,     9,   359,    75,   428,    78,    54,   -96,
     428,   -16,   -96,   -96,   -96,   -96,    83,   147,   166,   450,
     464,   477,   176,   116,   102,   155,   183,    71,    48,    81,
     -96,   -96,   166,   127,   -96,   -96,   166,   428,    88,   -96,
     114,   137,   160,   121,   122,   128,   223,   223,    -3,   147,
     147,    12,   147,   139,   140,   142,   135,   136,   143,   146,
     156,   157,   223,   -96,   158,   162,   -10,   167,   168,   -96,
     177,   147,   236,   289,   161,   428,   200,   147,   184,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   223,   -96,
     -96,   -96,   179,   312,   223,   223,   192,   194,   382,   405,
     196,   219,   -96,   -96,   225,   227,   160,   -96,   -96,   -96,
     -96,   -96,   -96,   -96
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    73,     0,     2,    55,    54,    80,     0,     0,
      80,     0,     1,    57,    56,     0,     0,     0,    84,     0,
       0,     0,     0,     3,     4,     5,     6,    10,    11,     0,
       0,     0,     0,     0,    28,    82,     8,     7,     9,    12,
      81,     0,     0,     0,     0,    76,    77,    78,    79,     0,
       0,    28,    13,     0,     0,     0,    14,     3,    30,     0,
      29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,    58,    74,
      30,     0,    34,    35,    36,    27,     0,     0,     0,    25,
      26,    24,    22,    18,    19,    15,    16,    17,    23,    20,
      21,    83,     0,     0,    59,    63,     0,    31,    32,    75,
       0,    60,    28,     0,     0,    33,     0,     0,     0,     0,
       0,     0,    71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    43,     0,     0,     0,     0,     0,    47,
       0,     0,     0,     0,     0,    72,     0,     0,     0,    53,
      51,    52,    50,    48,    49,    65,    44,    61,     0,    42,
      45,    46,     0,     0,     0,     0,     0,     6,     0,     0,
       0,    68,    62,    41,    66,     0,    28,    37,    38,    39,
      40,    69,    67,    70
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -96,   -96,   -15,   -48,   -87,   -74,   -56,   -96,   -96,   -96,
     -96,     2,     4,   -29,   -95,   -96,   -96,   -96,    11,   -96,
     -21,    19
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    80,    59,    36,    37,    38,   129,   130,   131,
     132,     4,   133,    39,   135,   136,   137,   138,   139,    18,
      49,    60
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      35,    50,    42,    81,     5,   158,    35,    13,    14,     5,
       5,     6,    10,     7,    52,   144,     6,     6,    56,    58,
       9,    11,   140,    12,   141,    86,    74,   105,    76,   126,
     126,    87,    19,    87,    43,    40,     8,   155,     8,    51,
      15,   159,   127,   127,    20,   126,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   127,    44,
     128,   128,    16,   171,   115,    17,    22,   108,    51,   174,
     175,   126,   107,    21,     1,     2,   128,   126,   126,    53,
     104,   109,     5,    54,   127,   111,    55,   134,   134,     6,
     127,   127,   101,    71,    72,    16,    77,    88,    17,    21,
      78,    79,   128,   134,   142,   143,    82,   145,   128,   128,
      23,    24,    25,    26,    51,    70,    71,    72,    27,    28,
      83,    16,   -80,    84,    17,   102,   163,    72,   103,   134,
      29,   168,   169,   106,   110,   134,   134,   112,    30,    31,
      32,    67,    68,    69,   113,    33,    70,    71,    72,    34,
      23,    24,    25,    26,    66,    67,    68,    69,    27,    28,
      70,    71,    72,    57,    24,    25,    26,   114,   116,   117,
      29,    27,    28,    45,    46,    47,    48,    87,    30,    31,
      32,   146,   147,    29,   148,    33,   149,   150,   166,    41,
     170,    30,    31,    32,   151,    68,    69,   152,    33,    70,
      71,    72,    41,    23,    24,    25,   167,   153,   154,   156,
     157,    27,    28,    65,    66,    67,    68,    69,   160,   161,
      70,    71,    72,    29,    69,   162,   118,    70,    71,    72,
     172,    30,    31,    32,   176,   181,   119,   177,    33,   180,
     120,   182,    41,   121,     2,   122,   183,     0,     0,     0,
     164,     0,     0,     0,    30,    31,    32,   123,   124,   125,
      61,    62,     0,     0,    63,    64,     0,     0,     0,     0,
       0,     0,     0,    65,    66,    67,    68,    69,     0,     0,
      70,    71,    72,    61,    62,     0,     0,    63,    64,     0,
       0,     0,     0,     0,     0,     0,    65,    66,    67,    68,
      69,     0,     0,    70,    71,    72,     0,   165,     0,     0,
       0,     0,    75,    61,    62,     0,     0,    63,    64,     0,
       0,     0,     0,     0,     0,     0,    65,    66,    67,    68,
      69,     0,     0,    70,    71,    72,    61,    62,     0,     0,
      63,    64,     0,     0,     0,     0,     0,     0,     0,    65,
      66,    67,    68,    69,     0,     0,    70,    71,    72,     0,
      61,    62,     0,   173,    63,    64,     0,     0,     0,     0,
       0,     0,     0,    65,    66,    67,    68,    69,     0,     0,
      70,    71,    72,    61,    62,    73,     0,    63,    64,     0,
       0,     0,     0,     0,     0,     0,    65,    66,    67,    68,
      69,     0,    85,    70,    71,    72,    61,    62,     0,     0,
      63,    64,     0,     0,     0,     0,     0,     0,     0,    65,
      66,    67,    68,    69,     0,   178,    70,    71,    72,    61,
      62,     0,     0,    63,    64,     0,     0,     0,     0,     0,
       0,     0,    65,    66,    67,    68,    69,     0,   179,    70,
      71,    72,    61,    62,     0,     0,    63,    64,     0,     0,
       0,     0,     0,     0,     0,    65,    66,    67,    68,    69,
       0,     0,    70,    71,    72,    62,     0,     0,    63,    64,
       0,     0,     0,     0,     0,     0,     0,    65,    66,    67,
      68,    69,    63,    64,    70,    71,    72,     0,     0,     0,
       0,    65,    66,    67,    68,    69,    64,     0,    70,    71,
      72,     0,     0,     0,    65,    66,    67,    68,    69,     0,
       0,    70,    71,    72
};

static const yytype_int16 yycheck[] =
{
      15,    22,    17,    51,     0,    15,    21,     5,     6,     5,
       6,     0,     3,     3,    29,     3,     5,     6,    33,    34,
       1,     2,   117,     0,    27,    43,    41,    43,    43,   116,
     117,    49,    27,    49,    27,    16,    26,   132,    26,    42,
      27,    51,   116,   117,    50,   132,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,   132,    42,
     116,   117,    49,   158,   112,    52,    50,    88,    42,   164,
     165,   158,    87,    27,    20,    21,   132,   164,   165,    42,
      78,   102,    78,    42,   158,   106,    42,   116,   117,    78,
     164,   165,    73,    45,    46,    49,    43,    50,    52,    27,
      51,    51,   158,   132,   119,   120,    43,   122,   164,   165,
       3,     4,     5,     6,    42,    44,    45,    46,    11,    12,
      43,    49,    50,    43,    52,    50,   141,    46,    50,   158,
      23,   146,   147,    50,     7,   164,   165,    49,    31,    32,
      33,    39,    40,    41,    30,    38,    44,    45,    46,    42,
       3,     4,     5,     6,    38,    39,    40,    41,    11,    12,
      44,    45,    46,     3,     4,     5,     6,    30,    47,    47,
      23,    11,    12,     7,     8,     9,    10,    49,    31,    32,
      33,    42,    42,    23,    42,    38,    51,    51,    27,    42,
       6,    31,    32,    33,    51,    40,    41,    51,    38,    44,
      45,    46,    42,     3,     4,     5,     6,    51,    51,    51,
      48,    11,    12,    37,    38,    39,    40,    41,    51,    51,
      44,    45,    46,    23,    41,    48,     3,    44,    45,    46,
      51,    31,    32,    33,    42,    16,    13,    43,    38,    43,
      17,    16,    42,    20,    21,    22,    19,    -1,    -1,    -1,
      14,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    -1,    -1,
      44,    45,    46,    24,    25,    -1,    -1,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,    40,
      41,    -1,    -1,    44,    45,    46,    -1,    18,    -1,    -1,
      -1,    -1,    53,    24,    25,    -1,    -1,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,    40,
      41,    -1,    -1,    44,    45,    46,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    -1,    -1,    44,    45,    46,    -1,
      24,    25,    -1,    51,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    -1,    -1,
      44,    45,    46,    24,    25,    49,    -1,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    46,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    46,    24,
      25,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    -1,    43,    44,
      45,    46,    24,    25,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,
      -1,    -1,    44,    45,    46,    25,    -1,    -1,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,
      40,    41,    28,    29,    44,    45,    46,    -1,    -1,    -1,
      -1,    37,    38,    39,    40,    41,    29,    -1,    44,    45,
      46,    -1,    -1,    -1,    37,    38,    39,    40,    41,    -1,
      -1,    44,    45,    46
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    20,    21,    55,    65,    66,    72,     3,    26,    75,
       3,    75,     0,    65,    65,    27,    49,    52,    73,    27,
      50,    27,    50,     3,     4,     5,     6,    11,    12,    23,
      31,    32,    33,    38,    42,    56,    58,    59,    60,    67,
      75,    42,    56,    27,    42,     7,     8,     9,    10,    74,
      74,    42,    56,    42,    42,    42,    56,     3,    56,    57,
      75,    24,    25,    28,    29,    37,    38,    39,    40,    41,
      44,    45,    46,    49,    56,    53,    56,    43,    51,    51,
      56,    57,    43,    43,    43,    43,    43,    49,    50,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    75,    50,    50,    65,    43,    50,    56,    74,    74,
       7,    74,    49,    30,    30,    57,    47,    47,     3,    13,
      17,    20,    22,    34,    35,    36,    58,    59,    60,    61,
      62,    63,    64,    66,    67,    68,    69,    70,    71,    72,
      68,    27,    56,    56,     3,    56,    42,    42,    42,    51,
      51,    51,    51,    51,    51,    68,    51,    48,    15,    51,
      51,    51,    48,    56,    14,    18,    27,     6,    56,    56,
       6,    68,    51,    51,    68,    68,    42,    43,    43,    43,
      43,    16,    16,    19
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    57,    57,
      57,    57,    57,    57,    58,    59,    60,    61,    61,    62,
      63,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    65,    65,    65,    65,    65,    65,
      66,    66,    66,    67,    68,    68,    69,    69,    69,    69,
      70,    71,    71,    72,    72,    73,    74,    74,    74,    74,
      75,    75,    75,    75,    75,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     0,     1,
       1,     3,     3,     5,     3,     3,     3,     4,     4,     4,
       4,     4,     2,     1,     2,     2,     2,     1,     2,     2,
       2,     2,     2,     2,     1,     1,     2,     2,     5,     6,
       8,    11,    13,     4,     1,     2,     4,     5,     3,     4,
       5,     1,     2,     1,     5,     5,     1,     1,     1,     1,
       1,     3,     3,     5,     2,     4
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
#line 93 "myparser.y" /* yacc.c:1646  */
    {
		printf("#include <stdio.h>\n");
		printf("#include <stdlib.h>\n");
		puts(c_prologue);
		printf("%s", (yyvsp[0].crepr));
}
#line 1451 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 101 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1457 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 102 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1463 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 103 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1469 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 104 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1475 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 105 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1481 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 106 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1487 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 107 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1493 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 108 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("1");}
#line 1499 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 109 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("0");}
#line 1505 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 110 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1511 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 111 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("not%s",(yyvsp[0].crepr));}
#line 1517 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 112 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("-%s",(yyvsp[0].crepr));}
#line 1523 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 113 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s * %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1529 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 114 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s / %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1535 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 115 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s %% %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1541 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 116 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s + %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1547 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 117 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s - %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1553 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 118 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s > %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1559 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 119 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s == %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1565 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 120 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s != %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1571 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 121 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s < %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1577 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 122 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s * %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1583 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 123 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s && %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1589 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 124 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s || %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1595 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 125 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("(%s)",(yyvsp[-1].crepr));}
#line 1601 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 128 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("");}
#line 1607 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 129 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1613 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 130 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1619 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 131 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s %s",(yyvsp[0].crepr),(yyvsp[-2].crepr));}
#line 1625 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 132 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s %s",(yyvsp[0].crepr),(yyvsp[-2].crepr));}
#line 1631 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 133 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s %s,%s",(yyvsp[-2].crepr),(yyvsp[-4].crepr),(yyvsp[0].crepr));}
#line 1637 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 136 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("readString()");}
#line 1643 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 139 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("readInt()");}
#line 1649 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 142 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("readReal()");}
#line 1655 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 145 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("writeString(%s);\n",(yyvsp[-1].crepr));}
#line 1661 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 146 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("writeString(%s);\n",(yyvsp[-1].crepr));}
#line 1667 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 149 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("writeInt(%s);\n",(yyvsp[-1].crepr));}
#line 1673 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 152 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("writeReal(%s);\n",(yyvsp[-1].crepr));}
#line 1679 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 155 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s = %s;\n",(yyvsp[-3].crepr),(yyvsp[-1].crepr));}
#line 1685 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 156 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[-1].crepr));}
#line 1691 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 157 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1697 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 158 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s;\n",(yyvsp[-1].crepr));}
#line 1703 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 159 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[-1].crepr));}
#line 1709 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 160 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[-1].crepr));}
#line 1715 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 161 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1721 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 162 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[-1].crepr));}
#line 1727 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 163 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[-1].crepr));}
#line 1733 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 164 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[-1].crepr));}
#line 1739 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 165 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[-1].crepr));}
#line 1745 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 166 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[-1].crepr));}
#line 1751 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 167 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[-1].crepr));}
#line 1757 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 170 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1763 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 171 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1769 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 172 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s %s\n",(yyvsp[-1].crepr),(yyvsp[0].crepr));}
#line 1775 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 173 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s %s",(yyvsp[-1].crepr),(yyvsp[0].crepr));}
#line 1781 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 174 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("static %s %s;\n",(yyvsp[-1].crepr),(yyvsp[-3].crepr));}
#line 1787 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 175 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("static %s %s; \n%s",(yyvsp[-2].crepr),(yyvsp[-4].crepr),(yyvsp[0].crepr));}
#line 1793 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 178 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s %s (%s)",(yyvsp[0].crepr),(yyvsp[-6].crepr),(yyvsp[-3].crepr));}
#line 1799 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 179 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("int main() \n{\n%s}",(yyvsp[-1].crepr));}
#line 1805 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 180 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s %s (%s) \n{\n%s\n}\n",(yyvsp[-5].crepr),(yyvsp[-11].crepr),(yyvsp[-8].crepr),(yyvsp[-2].crepr));}
#line 1811 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 183 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s(%s)",(yyvsp[-3].crepr),(yyvsp[-1].crepr));}
#line 1817 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 186 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1823 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 187 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s %s",(yyvsp[-1].crepr),(yyvsp[0].crepr));}
#line 1829 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 191 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("if (%s)   {\n  %s}",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1835 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 192 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("if(%s)    \n%s",(yyvsp[-3].crepr),(yyvsp[-1].crepr));}
#line 1841 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 193 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template(" else if \n{\n  %s\n}",(yyvsp[0].crepr));}
#line 1847 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 194 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s else %s\n",(yyvsp[-3].crepr),(yyvsp[-1].crepr));}
#line 1853 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 197 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("while(%s) \n{\n%s}\n",(yyvsp[-3].crepr),(yyvsp[-1].crepr));}
#line 1859 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 200 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("return;\n");}
#line 1865 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 201 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("return %s;\n",(yyvsp[0].crepr));}
#line 1871 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 204 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("");}
#line 1877 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 205 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s %s;\n",(yyvsp[-1].crepr),(yyvsp[-3].crepr));}
#line 1883 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 208 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("[%s]",(yyvsp[-3].crepr));}
#line 1889 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 211 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("int");}
#line 1895 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 212 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("real");}
#line 1901 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 213 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("int");}
#line 1907 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 214 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("string");}
#line 1913 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 217 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1919 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 218 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s,%s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1925 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 219 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s = %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1931 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 220 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s %s %s;",(yyvsp[-4].crepr),(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1937 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 221 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s %s",(yyvsp[-1].crepr),(yyvsp[0].crepr));}
#line 1943 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 222 "myparser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s %s %s",(yyvsp[-3].crepr),(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1949 "myparser.tab.c" /* yacc.c:1646  */
    break;


#line 1953 "myparser.tab.c" /* yacc.c:1646  */
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
#line 225 "myparser.y" /* yacc.c:1906  */

int main () {
  if ( yyparse() != 0 )
    printf("Rejected!\n");
  else
  	printf("//Accepted!");
}









