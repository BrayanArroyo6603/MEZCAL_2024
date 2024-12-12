/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 5 "compiler/grammar.y"


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include <memory>


extern char *yytext;
int yylex(void);
void yyerror(char const *);
std::string result;

#line 85 "grammar.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_GRAMMAR_TAB_H_INCLUDED
# define YY_YY_GRAMMAR_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "compiler/grammar.y"

    #include <string>

#line 132 "grammar.tab.c"

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NAME = 258,
    COLON = 259,
    RIGHT_ARROW = 260,
    LEFT_CURLY_BRACE = 261,
    RIGHT_CURLY_BRACE = 262,
    SEMICOLON = 263,
    LEFT_PARENTHESIS = 264,
    RIGHT_PARENTHESIS = 265,
    SINGLECOMMENT = 266,
    MULTILINECOMMENT = 267,
    CHARACTERS_BLOCK = 268,
    COMMA = 269,
    FALSE = 270,
    TRUE = 271,
    DIS = 272,
    INT = 273,
    DEC = 274,
    BLN = 275,
    STR = 276,
    AS = 277,
    INT_VALUE = 278,
    DEC_VALUE = 279,
    SHOW = 280,
    DOLLAR = 281,
    LOAD = 282,
    DOUBLE_COLON = 283,
    LEFT_BRACKET = 284,
    RIGHT_BRACKET = 285,
    VOID = 286,
    MAIN = 287,
    ANSWER = 288,
    MINOR = 289,
    MAYOR = 290,
    EQUAL = 291,
    MINOR_EQUAL = 292,
    MAYOR_EQUAL = 293,
    NOT_EQUAL = 294,
    RIGHT_INTER = 295,
    AT = 296,
    LESS = 297,
    PLUS = 298,
    MULT = 299,
    DIV = 300,
    MOD = 301,
    INVERSE_SLASH = 302,
    SHARP = 303,
    INTEGRATED = 304,
    DOT = 305
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef std::string YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMMAR_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  65
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   635

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  126
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  288

#define YYUNDEFTOK  2
#define YYMAXUTOK   305


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    27,    27,    31,    32,    36,    41,    59,    77,    79,
      83,    85,    87,    89,    91,    95,    97,    99,   101,   105,
     106,   110,   112,   114,   116,   118,   120,   122,   124,   126,
     128,   133,   137,   141,   143,   147,   149,   153,   155,   160,
     162,   166,   170,   174,   176,   178,   180,   182,   184,   188,
     190,   195,   197,   199,   201,   203,   208,   212,   214,   218,
     220,   222,   224,   226,   228,   230,   232,   234,   236,   238,
     240,   242,   244,   248,   250,   254,   256,   258,   260,   262,
     264,   266,   268,   272,   274,   278,   280,   282,   287,   289,
     291,   293,   295,   297,   299,   301,   305,   307,   309,   311,
     316,   318,   322,   324,   326,   330,   334,   336,   338,   340,
     344,   346,   350,   354,   358,   362,   366,   372,   376,   380,
     382,   386,   390,   394,   398,   402,   406
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "COLON", "RIGHT_ARROW",
  "LEFT_CURLY_BRACE", "RIGHT_CURLY_BRACE", "SEMICOLON", "LEFT_PARENTHESIS",
  "RIGHT_PARENTHESIS", "SINGLECOMMENT", "MULTILINECOMMENT",
  "CHARACTERS_BLOCK", "COMMA", "FALSE", "TRUE", "DIS", "INT", "DEC", "BLN",
  "STR", "AS", "INT_VALUE", "DEC_VALUE", "SHOW", "DOLLAR", "LOAD",
  "DOUBLE_COLON", "LEFT_BRACKET", "RIGHT_BRACKET", "VOID", "MAIN",
  "ANSWER", "MINOR", "MAYOR", "EQUAL", "MINOR_EQUAL", "MAYOR_EQUAL",
  "NOT_EQUAL", "RIGHT_INTER", "AT", "LESS", "PLUS", "MULT", "DIV", "MOD",
  "INVERSE_SLASH", "SHARP", "INTEGRATED", "DOT", "$accept", "input",
  "global_list", "global", "returnType", "inputType", "statements",
  "statement", "answerStatement", "bifurcation", "multiCondition", "loop",
  "forIterator", "forIterDefinition", "logicalComparison",
  "logicalOperator", "operation", "operator", "arrayStructAccess",
  "std_input", "assignment", "values", "value", "definitions",
  "definition", "definitionVars", "definitionArrays",
  "definitionStructType", "identifiers", "ids", "std_output", "arraySet",
  "arrayAccess", "dollarVar", "characters_block", "expression", "intValue",
  "decimalValue", "blnValue", "intType", "decType", "blnType", "strType",
  "voidType", "name", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305
};
# endif

#define YYPACT_NINF (-165)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-5)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     240,  -165,  -165,  -165,    27,    33,    33,    33,    33,    51,
      33,    54,    22,    42,    86,    98,   103,   186,  -165,   100,
    -165,    82,  -165,   108,   109,  -165,   110,   118,   119,    17,
    -165,   125,    80,   136,   266,  -165,     5,  -165,    18,   158,
      46,   519,   126,    33,  -165,  -165,  -165,  -165,  -165,    33,
     117,   146,   565,  -165,   589,   128,  -165,  -165,  -165,  -165,
    -165,   176,   161,   122,  -165,  -165,  -165,   186,  -165,   122,
    -165,  -165,  -165,  -165,  -165,    33,   133,  -165,    33,  -165,
     504,  -165,   162,   523,  -165,  -165,  -165,  -165,  -165,    33,
     183,   310,    24,  -165,    10,  -165,    72,  -165,    53,  -165,
      33,   179,   565,  -165,   122,  -165,   165,  -165,   126,   122,
      44,   122,  -165,  -165,  -165,  -165,  -165,  -165,   122,   122,
     170,   122,   169,   565,   272,  -165,   172,  -165,   180,   181,
     185,   187,   188,   204,   122,   565,  -165,  -165,   195,    21,
    -165,   514,   225,   122,  -165,  -165,    78,  -165,  -165,  -165,
    -165,  -165,  -165,  -165,  -165,    12,   122,   520,   122,   189,
     224,   226,   565,   565,   565,    33,   565,   228,   212,    33,
      33,    33,    33,  -165,   197,   122,   122,   122,   122,   122,
     122,   115,   234,   211,   220,  -165,   122,   565,    -8,   565,
    -165,   525,    33,  -165,  -165,  -165,   215,    33,   222,   230,
      37,   233,   242,   531,   542,   548,   553,   559,   565,   122,
     122,   221,   251,   164,   565,  -165,   565,   213,   232,    97,
     335,   360,   246,   263,  -165,  -165,  -165,  -165,  -165,  -165,
     570,   254,   283,   248,  -165,  -165,  -165,  -165,    33,   239,
     122,   281,  -165,  -165,  -165,   257,  -165,   385,  -165,   122,
    -165,  -165,  -165,  -165,   275,  -165,  -165,  -165,  -165,  -165,
     283,  -165,   300,   565,   122,   303,  -165,   576,   311,   288,
    -165,   565,   313,  -165,   314,   319,   410,  -165,  -165,   318,
    -165,   435,   460,  -165,  -165,  -165,   485,  -165
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
     104,   126,    27,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   104,     9,     0,
      23,    33,    22,     0,     0,    26,     0,     0,     0,     0,
     103,     0,     0,     0,   105,    20,     0,   105,     0,     0,
       0,     0,     0,     0,   114,   120,   119,   117,   118,     0,
       0,     0,    75,    82,     0,    81,    80,    79,    76,    77,
      78,     0,     0,     0,    84,     1,     2,   104,    21,     0,
      24,    25,    85,    86,    87,     0,     0,    29,     0,    31,
       0,    30,     0,     0,    52,    51,    54,    53,    55,     0,
       0,   104,     0,    92,     0,    93,     0,    94,     0,    95,
       0,   107,    74,   106,     0,    57,   105,   113,   105,     0,
       0,     0,    43,    45,    44,    47,    46,    48,     0,     0,
       0,     0,     0,    32,   104,     3,     0,   102,    88,    89,
      90,    91,   100,     0,     0,    63,    60,    62,     0,     0,
     115,     0,     0,     0,    34,    19,   105,    69,    65,    70,
      66,    71,    67,    68,    72,   105,     0,     0,     0,     0,
       0,     0,    50,    42,    49,     0,    41,     0,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   116,     0,    64,     0,    73,
     112,     0,     0,    20,    20,    56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    59,     0,
       0,     0,     0,     0,    61,   109,   108,     0,     0,     0,
     104,   104,     0,     0,    20,    96,    97,    98,    99,   101,
       0,     0,     0,     0,    15,    16,    17,    18,     0,     0,
       0,     0,    35,    37,   121,     0,     8,   104,   111,     0,
     122,   123,   124,   125,     0,    10,    11,    12,    13,    14,
       0,    58,     0,    39,     0,     0,    36,     0,     0,     0,
      20,    40,     0,   110,     0,     0,   104,    20,    20,     0,
      38,   104,   104,    20,     5,     7,   104,     6
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -165,  -165,   258,   326,    73,  -165,  -164,     6,  -165,  -165,
    -165,  -165,  -165,  -165,   -65,  -165,  -165,   -31,  -165,  -165,
    -165,  -165,    -9,  -165,   208,  -165,  -165,  -165,  -165,    56,
    -165,  -165,     2,  -165,   -26,   -15,   -35,   -18,   -28,   112,
    -165,  -165,  -165,  -165,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,    66,    67,   254,   183,    91,   145,    19,    20,
      21,    22,   218,    50,    51,   118,    52,   119,    53,    23,
      24,   101,    54,   124,    25,    26,    27,    28,    29,    30,
      31,   136,    55,    56,    57,    33,    58,    59,    60,   255,
     256,   257,   258,   259,    37
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      34,    93,    32,    90,   126,    44,    18,    45,    46,    92,
      42,    97,    61,     1,    99,    47,    48,    34,    49,    32,
      95,   111,    94,    18,     1,     1,   188,     1,    47,   220,
     221,    75,   102,    35,    48,    44,     1,    45,    46,    76,
     215,   104,    48,   106,   159,    47,    48,    47,    49,   108,
      98,   182,    45,    46,   123,    41,     1,   148,    43,    44,
     247,    36,    38,    39,    40,   137,    44,    34,   152,    32,
      62,   135,   153,    18,   141,     1,   150,   147,   133,   149,
     138,   151,    80,   154,   160,   161,    81,    45,    46,   142,
      63,   146,   138,    32,   138,   157,   138,   103,   138,   105,
     155,   240,   162,    65,    64,   107,   276,    83,    68,   163,
     164,    69,   166,   281,   282,    90,    70,    71,    72,   286,
      84,    85,    86,    87,    88,   181,    73,    74,    89,   209,
      78,   127,   132,    77,   187,    44,     1,    45,    46,    84,
      85,    86,    87,    88,    79,    47,    48,   189,    49,   191,
     210,   128,   129,   130,   131,   104,   107,    84,    85,    86,
      87,    88,    96,    93,   109,   195,   203,   204,   205,   206,
     207,   208,    97,    45,    46,    99,   110,   214,   120,   216,
     121,    95,   234,   235,   236,   237,    -4,   143,   241,     1,
     122,   139,   219,   156,   158,   184,   165,     2,     3,   167,
     230,   231,   174,     4,     5,     6,     7,     8,   180,   175,
     176,     9,    10,    11,   177,    12,   178,   179,    13,    14,
     146,   146,    32,    32,    83,   198,   199,   200,   201,   186,
     193,   263,   194,   196,   197,    15,   192,   202,   261,   211,
     267,   212,   213,     1,   222,    47,    44,   146,   224,    32,
     232,     2,     3,   223,    48,   271,   233,     4,     5,     6,
       7,     8,   239,   238,   244,     9,    10,    11,   249,    12,
      80,   246,    13,    14,    81,     1,   146,   260,    32,   168,
     262,   146,   146,    32,    32,   264,   146,   265,    32,    15,
     169,   170,   171,   172,    82,    83,    84,    85,    86,    87,
      88,   244,   250,   251,   252,   268,   270,   272,    84,    85,
      86,    87,    88,     1,   253,   274,    89,   144,   275,   277,
     278,     2,     3,   279,   283,   125,    17,     4,     5,     6,
       7,     8,   173,   269,   245,     9,    10,    11,     1,    12,
       0,     0,   242,    14,     0,     0,     2,     3,     0,     0,
       0,     0,     4,     5,     6,     7,     8,     0,     0,     0,
       9,    10,    11,     1,    12,     0,     0,   243,    14,     0,
       0,     2,     3,     0,     0,     0,     0,     4,     5,     6,
       7,     8,     0,     0,     0,     9,    10,    11,     1,    12,
       0,     0,   266,    14,     0,     0,     2,     3,     0,     0,
       0,     0,     4,     5,     6,     7,     8,     0,     0,     0,
       9,    10,    11,     1,    12,     0,     0,   280,    14,     0,
       0,     2,     3,     0,     0,     0,     0,     4,     5,     6,
       7,     8,     0,     0,     0,     9,    10,    11,     1,    12,
       0,     0,   284,    14,     0,     0,     2,     3,     0,     0,
       0,     0,     4,     5,     6,     7,     8,     0,     0,     0,
       9,    10,    11,     1,    12,     0,     0,   285,    14,     0,
       0,     2,     3,     0,     0,     0,     0,     4,     5,     6,
       7,     8,     0,     0,     0,     9,    10,    11,     1,    12,
       0,     0,   287,    14,     0,     0,     2,     3,     0,     0,
       0,     0,     4,     5,     6,     7,     8,     1,     0,     0,
       9,    10,    11,     0,    12,     0,     0,    44,    14,    45,
      46,     0,     1,     0,     0,     0,     0,    47,    48,     0,
      49,     0,    44,   134,    45,    46,    44,     0,    45,    46,
       0,     0,    47,    48,   185,   100,    47,    48,     0,    49,
     190,     0,     0,   140,     0,   217,    84,    85,    86,    87,
      88,   225,    84,    85,    86,    87,    88,    84,    85,    86,
      87,    88,   226,    84,    85,    86,    87,    88,   227,     0,
       0,     0,     0,   228,    84,    85,    86,    87,    88,   229,
      84,    85,    86,    87,    88,    84,    85,    86,    87,    88,
     248,    84,    85,    86,    87,    88,   273,    84,    85,    86,
      87,    88,    84,    85,    86,    87,    88,     0,    84,    85,
      86,    87,    88,   112,   113,   114,   115,   116,   117,     0,
       0,    84,    85,    86,    87,    88
};

static const yytype_int16 yycheck[] =
{
       0,    36,     0,    34,    69,    13,     0,    15,    16,     4,
      10,    39,    12,     3,    40,    23,    24,    17,    26,    17,
      38,    52,     4,    17,     3,     3,    14,     3,    23,   193,
     194,    14,    41,     6,    24,    13,     3,    15,    16,    22,
      48,    29,    24,    43,   109,    23,    24,    23,    26,    49,
       4,    30,    15,    16,    63,     4,     3,    92,     4,    13,
     224,     5,     6,     7,     8,    80,    13,    67,    96,    67,
      28,    80,    98,    67,    83,     3,    94,    92,    78,    94,
      80,    96,     4,    98,    40,    41,     8,    15,    16,    89,
       4,    91,    92,    91,    94,   104,    96,    41,    98,    43,
     100,     4,   111,     0,     6,    49,   270,    29,     8,   118,
     119,    29,   121,   277,   278,   146,     8,     8,     8,   283,
      42,    43,    44,    45,    46,   134,     8,     8,    50,    14,
      50,    75,    76,     8,   143,    13,     3,    15,    16,    42,
      43,    44,    45,    46,     8,    23,    24,   156,    26,   158,
     181,    18,    19,    20,    21,    29,   100,    42,    43,    44,
      45,    46,     4,   198,    47,   165,   175,   176,   177,   178,
     179,   180,   200,    15,    16,   201,    30,   186,    50,   188,
       4,   199,    18,    19,    20,    21,     0,     4,   219,     3,
      29,    29,   192,    14,    29,   139,    26,    11,    12,    30,
     209,   210,    30,    17,    18,    19,    20,    21,     4,    29,
      29,    25,    26,    27,    29,    29,    29,    29,    32,    33,
     220,   221,   220,   221,    29,   169,   170,   171,   172,     4,
       6,   240,     6,     5,    22,    49,    47,    40,   238,     5,
     249,    30,    22,     3,    29,    23,    13,   247,     6,   247,
      29,    11,    12,   197,    24,   264,     5,    17,    18,    19,
      20,    21,    30,    50,    18,    25,    26,    27,    14,    29,
       4,     8,    32,    33,     8,     3,   276,    29,   276,     7,
      41,   281,   282,   281,   282,     4,   286,    30,   286,    49,
      18,    19,    20,    21,    28,    29,    42,    43,    44,    45,
      46,    18,    19,    20,    21,    30,     6,     4,    42,    43,
      44,    45,    46,     3,    31,     4,    50,     7,    30,     6,
       6,    11,    12,     4,     6,    67,     0,    17,    18,    19,
      20,    21,   124,   260,   222,    25,    26,    27,     3,    29,
      -1,    -1,     7,    33,    -1,    -1,    11,    12,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      25,    26,    27,     3,    29,    -1,    -1,     7,    33,    -1,
      -1,    11,    12,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    25,    26,    27,     3,    29,
      -1,    -1,     7,    33,    -1,    -1,    11,    12,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      25,    26,    27,     3,    29,    -1,    -1,     7,    33,    -1,
      -1,    11,    12,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    25,    26,    27,     3,    29,
      -1,    -1,     7,    33,    -1,    -1,    11,    12,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      25,    26,    27,     3,    29,    -1,    -1,     7,    33,    -1,
      -1,    11,    12,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    25,    26,    27,     3,    29,
      -1,    -1,     7,    33,    -1,    -1,    11,    12,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,     3,    -1,    -1,
      25,    26,    27,    -1,    29,    -1,    -1,    13,    33,    15,
      16,    -1,     3,    -1,    -1,    -1,    -1,    23,    24,    -1,
      26,    -1,    13,    29,    15,    16,    13,    -1,    15,    16,
      -1,    -1,    23,    24,    30,    26,    23,    24,    -1,    26,
      30,    -1,    -1,    30,    -1,    30,    42,    43,    44,    45,
      46,    30,    42,    43,    44,    45,    46,    42,    43,    44,
      45,    46,    30,    42,    43,    44,    45,    46,    30,    -1,
      -1,    -1,    -1,    30,    42,    43,    44,    45,    46,    30,
      42,    43,    44,    45,    46,    42,    43,    44,    45,    46,
      30,    42,    43,    44,    45,    46,    30,    42,    43,    44,
      45,    46,    42,    43,    44,    45,    46,    -1,    42,    43,
      44,    45,    46,    34,    35,    36,    37,    38,    39,    -1,
      -1,    42,    43,    44,    45,    46
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    11,    12,    17,    18,    19,    20,    21,    25,
      26,    27,    29,    32,    33,    49,    52,    54,    58,    59,
      60,    61,    62,    70,    71,    75,    76,    77,    78,    79,
      80,    81,    83,    86,    95,     6,    80,    95,    80,    80,
      80,     4,    95,     4,    13,    15,    16,    23,    24,    26,
      64,    65,    67,    69,    73,    83,    84,    85,    87,    88,
      89,    95,    28,     4,     6,     0,    53,    54,     8,    29,
       8,     8,     8,     8,     8,    14,    22,     8,    50,     8,
       4,     8,    28,    29,    42,    43,    44,    45,    46,    50,
      68,    57,     4,    87,     4,    88,     4,    89,     4,    85,
      26,    72,    73,    80,    29,    80,    95,    80,    95,    47,
      30,    68,    34,    35,    36,    37,    38,    39,    66,    68,
      50,     4,    29,    73,    74,    53,    65,    80,    18,    19,
      20,    21,    80,    95,    29,    73,    82,    86,    95,    29,
      30,    73,    95,     4,     7,    58,    95,    86,    87,    86,
      88,    86,    89,    85,    86,    95,    14,    73,    29,    65,
      40,    41,    73,    73,    73,    26,    73,    30,     7,    18,
      19,    20,    21,    75,    30,    29,    29,    29,    29,    29,
       4,    73,    30,    56,    80,    30,     4,    73,    14,    73,
      30,    73,    47,     6,     6,    95,     5,    22,    80,    80,
      80,    80,    40,    73,    73,    73,    73,    73,    73,    14,
      68,     5,    30,    22,    73,    48,    73,    30,    63,    95,
      57,    57,    29,    80,     6,    30,    30,    30,    30,    30,
      73,    73,    29,     5,    18,    19,    20,    21,    50,    30,
       4,    68,     7,     7,    18,    90,     8,    57,    30,    14,
      19,    20,    21,    31,    55,    90,    91,    92,    93,    94,
      29,    95,    41,    73,     4,    30,     7,    73,    30,    55,
       6,    73,     4,    30,     4,    30,    57,     6,     6,     4,
       7,    57,    57,     6,     7,     7,    57,     7
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    51,    52,    53,    53,    54,    54,    54,    54,    54,
      55,    55,    55,    55,    55,    56,    56,    56,    56,    57,
      57,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    59,    60,    60,    61,    61,    62,    62,    63,
      63,    64,    65,    66,    66,    66,    66,    66,    66,    67,
      67,    68,    68,    68,    68,    68,    69,    70,    70,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    72,    72,    73,    73,    73,    73,    73,
      73,    73,    73,    74,    74,    75,    75,    75,    76,    76,
      76,    76,    76,    76,    76,    76,    77,    77,    77,    77,
      78,    78,    79,    79,    79,    80,    81,    81,    81,    81,
      82,    82,    83,    84,    85,    86,    86,    87,    88,    89,
      89,    90,    91,    92,    93,    94,    95
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     0,    12,    13,    12,     7,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     2,
       0,     2,     1,     1,     2,     2,     1,     1,     1,     2,
       2,     2,     3,     1,     4,     7,     8,     7,    11,     3,
       4,     3,     3,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     1,     1,     1,     1,     4,     3,     8,     5,
       3,     5,     3,     3,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     0,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     6,     6,     6,     6,
       3,     6,     3,     1,     0,     1,     3,     3,     6,     6,
       7,     5,     5,     2,     1,     3,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 27 "compiler/grammar.y"
                      {result = std::string("#include<cstdio>\n #include<iostream>\n using namespace std; \n")+yyvsp[-1]+yyvsp[0];}
#line 1632 "grammar.tab.c"
    break;

  case 3:
#line 31 "compiler/grammar.y"
                      {yyval = yyvsp[-1] + yyvsp[0]; }
#line 1638 "grammar.tab.c"
    break;

  case 4:
#line 32 "compiler/grammar.y"
                {yyval = "";}
#line 1644 "grammar.tab.c"
    break;

  case 5:
#line 37 "compiler/grammar.y"
    {
        yyval = std::string("int main(){\n" + yyvsp[-1] + "\n}");
    }
#line 1652 "grammar.tab.c"
    break;

  case 6:
#line 42 "compiler/grammar.y"
    {
        if(yyvsp[-5] == "Int"){
            yyval = std::string("int ") + yyvsp[-12] + "("+ yyvsp[-9] +"){" + yyvsp[-1] + "\n}\n\n";
        }
        else if(yyvsp[-5] == "Dec"){
            yyval = std::string("double ") + yyvsp[-12] + "("+ yyvsp[-9] +"){" + yyvsp[-1] + "\n}\n\n";
        } 
        else if(yyvsp[-5] == "Bln"){
            yyval = std::string("bool ") + yyvsp[-12] + "("+ yyvsp[-9] +"){" + yyvsp[-1] + "\n}\n\n";
        } 
        else if(yyvsp[-5] == "Str"){
            yyval = std::string("string ") + yyvsp[-12] + "("+ yyvsp[-9] +"){" + yyvsp[-1] + "\n}\n\n";
        }else{
            yyval = std::string("void ") + yyvsp[-12] + "("+ yyvsp[-9] +"){" + yyvsp[-1] + "\n}\n\n";
        }
    }
#line 1673 "grammar.tab.c"
    break;

  case 7:
#line 60 "compiler/grammar.y"
    {
        if(yyvsp[-5] == "Int"){
            yyval = std::string("int ") + yyvsp[-11] + "(){" + yyvsp[-1] + "\n}\n\n";
        }
        else if(yyvsp[-5] == "Dec"){
            yyval = std::string("double ") + yyvsp[-11] + "(){" + yyvsp[-1] + "\n}\n\n";
        } 
        else if(yyvsp[-5] == "Bln"){
            yyval = std::string("bool ") + yyvsp[-11] + "(){" + yyvsp[-1] + "\n}\n\n";
        } 
        else if(yyvsp[-5] == "Str"){
            yyval = std::string("string ") + yyvsp[-11] + "(){" + yyvsp[-1] + "\n}\n\n";
        }else{
            yyval = std::string("void ") + yyvsp[-11] + "(){" + yyvsp[-1] + "\n}\n\n";
        }
    }
#line 1694 "grammar.tab.c"
    break;

  case 8:
#line 77 "compiler/grammar.y"
                                                                               {yyval = "\nstruct " + yyvsp[-1] + "{\n" + yyvsp[-4] + "};\n\n";}
#line 1700 "grammar.tab.c"
    break;

  case 9:
#line 79 "compiler/grammar.y"
              {yyval = yyvsp[0];}
#line 1706 "grammar.tab.c"
    break;

  case 10:
#line 83 "compiler/grammar.y"
            {yyval = yyvsp[0];}
#line 1712 "grammar.tab.c"
    break;

  case 11:
#line 85 "compiler/grammar.y"
            {yyval = yyvsp[0];}
#line 1718 "grammar.tab.c"
    break;

  case 12:
#line 87 "compiler/grammar.y"
            {yyval = yyvsp[0];}
#line 1724 "grammar.tab.c"
    break;

  case 13:
#line 89 "compiler/grammar.y"
            {yyval = yyvsp[0];}
#line 1730 "grammar.tab.c"
    break;

  case 14:
#line 91 "compiler/grammar.y"
             {yyval = yyvsp[0];}
#line 1736 "grammar.tab.c"
    break;

  case 15:
#line 95 "compiler/grammar.y"
               {yyval = "int " + yyvsp[-2];}
#line 1742 "grammar.tab.c"
    break;

  case 16:
#line 97 "compiler/grammar.y"
               {yyval = "double " + yyvsp[-2];}
#line 1748 "grammar.tab.c"
    break;

  case 17:
#line 99 "compiler/grammar.y"
               {yyval = "bool " + yyvsp[-2];}
#line 1754 "grammar.tab.c"
    break;

  case 18:
#line 101 "compiler/grammar.y"
               {yyval = "string " + yyvsp[-2];}
#line 1760 "grammar.tab.c"
    break;

  case 19:
#line 105 "compiler/grammar.y"
                         {yyval = yyvsp[-1] + yyvsp[0];}
#line 1766 "grammar.tab.c"
    break;

  case 20:
#line 106 "compiler/grammar.y"
                {yyval = "";}
#line 1772 "grammar.tab.c"
    break;

  case 21:
#line 110 "compiler/grammar.y"
                              {yyval = yyvsp[-1];}
#line 1778 "grammar.tab.c"
    break;

  case 22:
#line 112 "compiler/grammar.y"
         {yyval = yyvsp[0];}
#line 1784 "grammar.tab.c"
    break;

  case 23:
#line 114 "compiler/grammar.y"
                {yyval = yyvsp[0];}
#line 1790 "grammar.tab.c"
    break;

  case 24:
#line 116 "compiler/grammar.y"
                        {yyval = yyvsp[-1];}
#line 1796 "grammar.tab.c"
    break;

  case 25:
#line 118 "compiler/grammar.y"
                         {yyval = yyvsp[-1]; }
#line 1802 "grammar.tab.c"
    break;

  case 26:
#line 120 "compiler/grammar.y"
               {yyval = yyvsp[0]; }
#line 1808 "grammar.tab.c"
    break;

  case 27:
#line 122 "compiler/grammar.y"
                  {yyval = ""; }
#line 1814 "grammar.tab.c"
    break;

  case 28:
#line 124 "compiler/grammar.y"
                     {yyval = ""; }
#line 1820 "grammar.tab.c"
    break;

  case 29:
#line 126 "compiler/grammar.y"
                            {yyval = yyvsp[-1]; }
#line 1826 "grammar.tab.c"
    break;

  case 30:
#line 128 "compiler/grammar.y"
                   {
        yyval = "\n printf(\"%s \\n\", \"" + yyvsp[-1] + "\");";
        //std::cout << "Statement created\n";
        }
#line 1835 "grammar.tab.c"
    break;

  case 31:
#line 133 "compiler/grammar.y"
                         {yyval = std::move(yyvsp[-1]);}
#line 1841 "grammar.tab.c"
    break;

  case 32:
#line 137 "compiler/grammar.y"
                       {yyval = "\n\nreturn " + yyvsp[0] + ";\n";}
#line 1847 "grammar.tab.c"
    break;

  case 33:
#line 141 "compiler/grammar.y"
                   {yyval = yyvsp[0];}
#line 1853 "grammar.tab.c"
    break;

  case 34:
#line 143 "compiler/grammar.y"
                                                      {yyval = "else{" + yyvsp[-1] + "\n}\n";}
#line 1859 "grammar.tab.c"
    break;

  case 35:
#line 147 "compiler/grammar.y"
                                                                                                           {yyval = "\nif(" + yyvsp[-5] + "){" + yyvsp[-1] + "\n}";}
#line 1865 "grammar.tab.c"
    break;

  case 36:
#line 149 "compiler/grammar.y"
                                                                                                                          {yyval = yyvsp[-7] + "else if(" + yyvsp[-5] + "){" + yyvsp[-1] + "\n}";}
#line 1871 "grammar.tab.c"
    break;

  case 37:
#line 153 "compiler/grammar.y"
                                                                                                 {yyval = "\nwhile(" + yyvsp[-5] +"){" + yyvsp[-1] +"}\n";}
#line 1877 "grammar.tab.c"
    break;

  case 38:
#line 155 "compiler/grammar.y"
                                                                                                                                                           {yyval = "\nfor(" + yyvsp[-9] + "; " + yyvsp[-7] + "; " + yyvsp[-5] + "){" + yyvsp[-1] + "}\n"; }
#line 1883 "grammar.tab.c"
    break;

  case 39:
#line 160 "compiler/grammar.y"
                     {yyval = "\n" + yyvsp[-2] + " = " + yyvsp[0];}
#line 1889 "grammar.tab.c"
    break;

  case 40:
#line 162 "compiler/grammar.y"
                              {yyval = "\n" + yyvsp[-3] + " "+ yyvsp[-2] +"= " + yyvsp[0]; }
#line 1895 "grammar.tab.c"
    break;

  case 41:
#line 166 "compiler/grammar.y"
                     {yyval = "int " + yyvsp[-2] + " = " + yyvsp[0];}
#line 1901 "grammar.tab.c"
    break;

  case 42:
#line 170 "compiler/grammar.y"
                                {yyval = yyvsp[-2] + yyvsp[-1] + yyvsp[0]; }
#line 1907 "grammar.tab.c"
    break;

  case 43:
#line 174 "compiler/grammar.y"
          {yyval = " < ";}
#line 1913 "grammar.tab.c"
    break;

  case 44:
#line 176 "compiler/grammar.y"
          {yyval = " == ";}
#line 1919 "grammar.tab.c"
    break;

  case 45:
#line 178 "compiler/grammar.y"
          {yyval = " > ";}
#line 1925 "grammar.tab.c"
    break;

  case 46:
#line 180 "compiler/grammar.y"
                {yyval = " >= ";}
#line 1931 "grammar.tab.c"
    break;

  case 47:
#line 182 "compiler/grammar.y"
                {yyval = " <= ";}
#line 1937 "grammar.tab.c"
    break;

  case 48:
#line 184 "compiler/grammar.y"
              {yyval = " != ";}
#line 1943 "grammar.tab.c"
    break;

  case 49:
#line 188 "compiler/grammar.y"
                         {yyval = yyvsp[-2] + " " + yyvsp[-1] + " " + yyvsp[0]; }
#line 1949 "grammar.tab.c"
    break;

  case 50:
#line 190 "compiler/grammar.y"
                             {yyval = yyvsp[-2] + " " + yyvsp[-1] + " " + yyvsp[0]; }
#line 1955 "grammar.tab.c"
    break;

  case 51:
#line 195 "compiler/grammar.y"
         {yyval = "+";}
#line 1961 "grammar.tab.c"
    break;

  case 52:
#line 197 "compiler/grammar.y"
         {yyval = "-";}
#line 1967 "grammar.tab.c"
    break;

  case 53:
#line 199 "compiler/grammar.y"
        {yyval = "/";}
#line 1973 "grammar.tab.c"
    break;

  case 54:
#line 201 "compiler/grammar.y"
         {yyval = "*";}
#line 1979 "grammar.tab.c"
    break;

  case 55:
#line 203 "compiler/grammar.y"
        {yyval = "%";}
#line 1985 "grammar.tab.c"
    break;

  case 56:
#line 208 "compiler/grammar.y"
                                {yyval = yyvsp[-3] + "." + yyvsp[0];}
#line 1991 "grammar.tab.c"
    break;

  case 57:
#line 212 "compiler/grammar.y"
                   {yyval = "\ncin >> " + yyvsp[0] + ";\n"; }
#line 1997 "grammar.tab.c"
    break;

  case 58:
#line 214 "compiler/grammar.y"
                                                              {yyval = "\ncin >> " + yyvsp[-5] + "[" + yyvsp[-3] + "]" + "." + yyvsp[0] + ";\n";}
#line 2003 "grammar.tab.c"
    break;

  case 59:
#line 218 "compiler/grammar.y"
                                     {yyval = yyvsp[-4] + "." + yyvsp[-2] + " = " + yyvsp[0] + ";\n";}
#line 2009 "grammar.tab.c"
    break;

  case 60:
#line 220 "compiler/grammar.y"
                        {yyval = yyvsp[-2] + yyvsp[0] + ";\n";}
#line 2015 "grammar.tab.c"
    break;

  case 61:
#line 222 "compiler/grammar.y"
                              {yyval = yyvsp[-4] + "." + yyvsp[-2] + " = " + yyvsp[0] + ";\n";}
#line 2021 "grammar.tab.c"
    break;

  case 62:
#line 224 "compiler/grammar.y"
                          {yyval = yyvsp[-2] + " = " + yyvsp[0];}
#line 2027 "grammar.tab.c"
    break;

  case 63:
#line 226 "compiler/grammar.y"
                     {yyval = "\n" + yyvsp[-2] + " = " + yyvsp[0] + ";\n";}
#line 2033 "grammar.tab.c"
    break;

  case 64:
#line 228 "compiler/grammar.y"
                              {yyval = "\n" + yyvsp[-3] + " "+ yyvsp[-2] +"= " + yyvsp[0] + ";\n"; }
#line 2039 "grammar.tab.c"
    break;

  case 65:
#line 230 "compiler/grammar.y"
                           {yyval = "int " + yyvsp[-2] + " = " + yyvsp[0] + ";\n";}
#line 2045 "grammar.tab.c"
    break;

  case 66:
#line 232 "compiler/grammar.y"
                               {yyval = "double " + yyvsp[-2] + " = " + yyvsp[0] + ";\n";}
#line 2051 "grammar.tab.c"
    break;

  case 67:
#line 234 "compiler/grammar.y"
                           {yyval = "bool " + yyvsp[-2] + " = " + yyvsp[0] + ";\n";}
#line 2057 "grammar.tab.c"
    break;

  case 68:
#line 236 "compiler/grammar.y"
                                   {yyval = "string " + yyvsp[-2] + " = " + yyvsp[0] + ";\n";}
#line 2063 "grammar.tab.c"
    break;

  case 69:
#line 238 "compiler/grammar.y"
                             {yyval = "int " + yyvsp[-2] + " = " + yyvsp[0];}
#line 2069 "grammar.tab.c"
    break;

  case 70:
#line 240 "compiler/grammar.y"
                             {yyval = "double " + yyvsp[-2] + " = " + yyvsp[0];}
#line 2075 "grammar.tab.c"
    break;

  case 71:
#line 242 "compiler/grammar.y"
                             {yyval = "bool " + yyvsp[-2] + " = " + yyvsp[0];}
#line 2081 "grammar.tab.c"
    break;

  case 72:
#line 244 "compiler/grammar.y"
                             {yyval = "string " + yyvsp[-2] + " = " + yyvsp[0];}
#line 2087 "grammar.tab.c"
    break;

  case 73:
#line 248 "compiler/grammar.y"
                       {yyval = yyvsp[-2] + " << " + yyvsp[0];}
#line 2093 "grammar.tab.c"
    break;

  case 74:
#line 250 "compiler/grammar.y"
          {yyval = yyvsp[0];}
#line 2099 "grammar.tab.c"
    break;

  case 75:
#line 254 "compiler/grammar.y"
              {yyval = yyvsp[0];}
#line 2105 "grammar.tab.c"
    break;

  case 76:
#line 256 "compiler/grammar.y"
             {yyval = yyvsp[0];}
#line 2111 "grammar.tab.c"
    break;

  case 77:
#line 258 "compiler/grammar.y"
                 {yyval = yyvsp[0];}
#line 2117 "grammar.tab.c"
    break;

  case 78:
#line 260 "compiler/grammar.y"
             {yyval = yyvsp[0];}
#line 2123 "grammar.tab.c"
    break;

  case 79:
#line 262 "compiler/grammar.y"
                     {yyval = yyvsp[0];}
#line 2129 "grammar.tab.c"
    break;

  case 80:
#line 264 "compiler/grammar.y"
              {yyval = yyvsp[0];}
#line 2135 "grammar.tab.c"
    break;

  case 81:
#line 266 "compiler/grammar.y"
                {yyval = yyvsp[0];}
#line 2141 "grammar.tab.c"
    break;

  case 82:
#line 268 "compiler/grammar.y"
                      {yyval = yyvsp[0];}
#line 2147 "grammar.tab.c"
    break;

  case 83:
#line 272 "compiler/grammar.y"
                           {yyval = yyvsp[-1] + yyvsp[0];}
#line 2153 "grammar.tab.c"
    break;

  case 84:
#line 274 "compiler/grammar.y"
           {yyval = "";}
#line 2159 "grammar.tab.c"
    break;

  case 85:
#line 278 "compiler/grammar.y"
                             {yyval = yyvsp[-1];}
#line 2165 "grammar.tab.c"
    break;

  case 86:
#line 280 "compiler/grammar.y"
                               {yyval = yyvsp[-1];}
#line 2171 "grammar.tab.c"
    break;

  case 87:
#line 282 "compiler/grammar.y"
                                   {yyval = yyvsp[-1];}
#line 2177 "grammar.tab.c"
    break;

  case 88:
#line 287 "compiler/grammar.y"
                       {yyval = "int " + yyvsp[-2] + ";\n";}
#line 2183 "grammar.tab.c"
    break;

  case 89:
#line 289 "compiler/grammar.y"
                       {yyval = "double " + yyvsp[-2] + ";\n";}
#line 2189 "grammar.tab.c"
    break;

  case 90:
#line 291 "compiler/grammar.y"
                       {yyval = "bool " + yyvsp[-2] + ";\n";}
#line 2195 "grammar.tab.c"
    break;

  case 91:
#line 293 "compiler/grammar.y"
                       {yyval = "string " + yyvsp[-2] + ";\n";}
#line 2201 "grammar.tab.c"
    break;

  case 92:
#line 295 "compiler/grammar.y"
                     {yyval = "int " + yyvsp[-1] + " = " + yyvsp[0] + ";\n";}
#line 2207 "grammar.tab.c"
    break;

  case 93:
#line 297 "compiler/grammar.y"
                         {yyval = "double " + yyvsp[-1] + " = " + yyvsp[0] + ";\n";}
#line 2213 "grammar.tab.c"
    break;

  case 94:
#line 299 "compiler/grammar.y"
                     {yyval = "bool " + yyvsp[-1] + " = " + yyvsp[0] + ";\n";}
#line 2219 "grammar.tab.c"
    break;

  case 95:
#line 301 "compiler/grammar.y"
                             {yyval = "string " + yyvsp[-1] + " = " + yyvsp[0] + ";\n";}
#line 2225 "grammar.tab.c"
    break;

  case 96:
#line 305 "compiler/grammar.y"
                                                        {yyval = "int " + yyvsp[-5] + "[" + yyvsp[-1] + "]" + ";\n";}
#line 2231 "grammar.tab.c"
    break;

  case 97:
#line 307 "compiler/grammar.y"
                                                        {yyval = "double " + yyvsp[-5] + "[" + yyvsp[-1] + "]" + ";\n";}
#line 2237 "grammar.tab.c"
    break;

  case 98:
#line 309 "compiler/grammar.y"
                                                        {yyval = "bool " + yyvsp[-5] + "[" + yyvsp[-1] + "]" + ";\n";}
#line 2243 "grammar.tab.c"
    break;

  case 99:
#line 311 "compiler/grammar.y"
                                                        {yyval = "string " + yyvsp[-5] + "[" + yyvsp[-1] + "]" + ";\n";}
#line 2249 "grammar.tab.c"
    break;

  case 100:
#line 316 "compiler/grammar.y"
                       {yyval = "\n" + yyvsp[0] + " " + yyvsp[-2] + ";\n";}
#line 2255 "grammar.tab.c"
    break;

  case 101:
#line 318 "compiler/grammar.y"
                                                        {yyval = "\n" + yyvsp[-3] + " " + yyvsp[-5] + "[" + yyvsp[-1] +"];\n";}
#line 2261 "grammar.tab.c"
    break;

  case 102:
#line 322 "compiler/grammar.y"
                          {yyval = yyvsp[-2] +", "+ yyvsp[0]; }
#line 2267 "grammar.tab.c"
    break;

  case 103:
#line 324 "compiler/grammar.y"
        {yyval = yyvsp[0];}
#line 2273 "grammar.tab.c"
    break;

  case 104:
#line 326 "compiler/grammar.y"
           {yyval = ""; }
#line 2279 "grammar.tab.c"
    break;

  case 105:
#line 330 "compiler/grammar.y"
         {yyval = yyvsp[0]; }
#line 2285 "grammar.tab.c"
    break;

  case 106:
#line 334 "compiler/grammar.y"
                   {yyval = "\ncout << &" + yyvsp[0] + " <<endl;";}
#line 2291 "grammar.tab.c"
    break;

  case 107:
#line 336 "compiler/grammar.y"
                      {yyval = "\ncout << " + yyvsp[0] + " <<endl;";}
#line 2297 "grammar.tab.c"
    break;

  case 108:
#line 338 "compiler/grammar.y"
                                       {yyval = "\ncout << " + yyvsp[-2] + "[" + yyvsp[0] + "]<<endl;";}
#line 2303 "grammar.tab.c"
    break;

  case 109:
#line 340 "compiler/grammar.y"
                                       {yyval = "\ncout << sizeof(" + yyvsp[-2] + ") / sizeof(" + yyvsp[-2] + "[0]) <<endl;";}
#line 2309 "grammar.tab.c"
    break;

  case 110:
#line 344 "compiler/grammar.y"
                                                                {yyval = "[" + yyvsp[-5] + yyvsp[-4] +yyvsp[-3]+ "] = " + yyvsp[-1];}
#line 2315 "grammar.tab.c"
    break;

  case 111:
#line 346 "compiler/grammar.y"
                                                 {yyval = "[" + yyvsp[-3] + "] = " + yyvsp[-1];}
#line 2321 "grammar.tab.c"
    break;

  case 112:
#line 350 "compiler/grammar.y"
                                                 {yyval = yyvsp[-3] + "[" + yyvsp[-1] + "]";}
#line 2327 "grammar.tab.c"
    break;

  case 113:
#line 354 "compiler/grammar.y"
               {yyval = yyvsp[0];}
#line 2333 "grammar.tab.c"
    break;

  case 114:
#line 358 "compiler/grammar.y"
                     {yyval = std::string(yytext);}
#line 2339 "grammar.tab.c"
    break;

  case 115:
#line 362 "compiler/grammar.y"
                                   {
        yyval = yyvsp[-2] + "();\n";
    }
#line 2347 "grammar.tab.c"
    break;

  case 116:
#line 366 "compiler/grammar.y"
                                          {
        yyval = yyvsp[-3] + "("+yyvsp[-1]+");\n";
    }
#line 2355 "grammar.tab.c"
    break;

  case 117:
#line 372 "compiler/grammar.y"
              {yyval = std::string(yytext); }
#line 2361 "grammar.tab.c"
    break;

  case 118:
#line 376 "compiler/grammar.y"
              {yyval = std::string(yytext); }
#line 2367 "grammar.tab.c"
    break;

  case 119:
#line 380 "compiler/grammar.y"
         {yyval = "true";}
#line 2373 "grammar.tab.c"
    break;

  case 120:
#line 382 "compiler/grammar.y"
          {yyval = "false";}
#line 2379 "grammar.tab.c"
    break;

  case 121:
#line 386 "compiler/grammar.y"
        {yyval = std::string(yytext); }
#line 2385 "grammar.tab.c"
    break;

  case 122:
#line 390 "compiler/grammar.y"
        {yyval = std::string(yytext); }
#line 2391 "grammar.tab.c"
    break;

  case 123:
#line 394 "compiler/grammar.y"
        {yyval = std::string(yytext); }
#line 2397 "grammar.tab.c"
    break;

  case 124:
#line 398 "compiler/grammar.y"
        {yyval = std::string(yytext); }
#line 2403 "grammar.tab.c"
    break;

  case 125:
#line 402 "compiler/grammar.y"
         {yyval = std::string(yytext); }
#line 2409 "grammar.tab.c"
    break;

  case 126:
#line 406 "compiler/grammar.y"
         {
   yyval= std::string(yytext);
    }
#line 2417 "grammar.tab.c"
    break;


#line 2421 "grammar.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 412 "compiler/grammar.y"



void yyerror(char const *x){
    printf("Error %s\n", x);
    exit(1);
}
