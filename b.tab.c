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
#line 1 "b.y" /* yacc.c:339  */

   #include <stdio.h>
   #include <stdlib.h>
   #include <stdbool.h>
   #include <string.h>

/*Extended Tweets declarations*/
   bool displayTextRangeExists=false;
   bool truncatedExists=false;
   bool extended_tweetFieldIsOk=false;
   bool displayTextRangeInExtendedExists=false;
   bool fullTextStmInExtendedTweetExists=false;
   int lowestLimitForExtTweet,highestLimitForExtTweet,extendedTweetCounter=0, highestLimitForExtTweetField,lowestLimitForExtTweetField;

/*Rest for tweet and retweet*/
   char *authorInTweet,*authorInUserField,*stringKeeper;
   bool stringsNotEqual;/*line 389*/
   int blockCounter=0,retweetStatementCounter=0;
   extern int yylex();
   extern int yylineno;
   extern char* yytext;
   int string_length=0, counterOfPrograms,j,u,counterOfUsers;
   int possible_duplicate_user_id_as_number =0;
   int possible_dublicate_id_str_as_number=0;
   int a[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
   int b[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
   bool mentionedUserTweetIdNotFound=true;
   bool userScreenNameFound = false;/*Necessary user field #1*/
   bool userNameFound=false; /*Necessary user field #2*/
   bool userIDFound=false;  /*Necessary user field #3*/
   bool userLocationFound=false;  /*Necessary user field #4*/
   bool tweetIdFoundDuplicate,userIdIsDuplicate;
   bool textExists = false,userExists=false,id_strExists=false, created_atExists=false;
   void yyerror(char *msg) 
    { fprintf(stderr, "ERROR FOUND in line %d\n",yylineno); }

#line 103 "b.tab.c" /* yacc.c:339  */

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
   by #include "b.tab.h".  */
#ifndef YY_YY_B_TAB_H_INCLUDED
# define YY_YY_B_TAB_H_INCLUDED
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
    NEWLINE = 258,
    SPACE = 259,
    ID_STR = 260,
    NUMBER = 261,
    CREATED = 262,
    DATE = 263,
    USER = 264,
    ID = 265,
    NAME = 266,
    REST = 267,
    SCREEN_NAME = 268,
    LOCATION = 269,
    URL = 270,
    URL_BEGIN = 271,
    URL_SYMBOL = 272,
    DESCRIPTION = 273,
    ARITHMETIC_OP = 274,
    OTHER_SYMBOL = 275,
    PLACE = 276,
    HEX = 277,
    PLACE_TYPE = 278,
    FULL_NAME = 279,
    COUNTRY = 280,
    BOUNDING_BOX = 281,
    TYPE = 282,
    POINT = 283,
    POLYGON = 284,
    COORDINATES = 285,
    FLOAT_NUMBER = 286,
    LINE = 287,
    ENTITIES = 288,
    HASHTAGS = 289,
    TEXT = 290,
    INDICES = 291,
    URLS = 292,
    TITLE = 293,
    USER_MENTIONS = 294,
    TWEET = 295,
    RT = 296,
    RETSTATUS = 297,
    EXT_TWEET = 298,
    DIS_TEXT_R = 299,
    TRUNCATED = 300,
    TRU = 301,
    FULL_TEXT = 302
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 38 "b.y" /* yacc.c:355  */
 int num; char *text_of_chars;

#line 194 "b.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_B_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 211 "b.tab.c" /* yacc.c:358  */

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   835

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  279
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  785

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    48,     2,    55,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    52,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    54,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,    50,     2,     2,     2,     2,
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
      45,    46,    47
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    45,    45,    45,    47,    47,    49,    49,    54,   113,
     113,   115,   115,   115,   115,   115,   115,   115,   116,   120,
     152,   161,   174,   174,   176,   176,   176,   176,   176,   176,
     176,   178,   209,   222,   235,   235,   235,   235,   237,   247,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   253,   259,
     261,   261,   263,   263,   263,   263,   263,   263,   263,   268,
     270,   270,   270,   270,   275,   277,   277,   277,   277,   281,
     283,   283,   283,   283,   283,   283,   283,   283,   287,   290,
     294,   301,   306,   309,   315,   317,   317,   319,   319,   319,
     319,   323,   325,   325,   325,   327,   329,   332,   336,   340,
     340,   340,   342,   342,   348,   350,   351,   354,   354,   354,
     357,   357,   357,   357,   357,   360,   363,   365,   367,   374,
     392,   399,   399,   401,   401,   403,   405,   405,   407,   407,
     413,   417,   422,   428,   430,   431,   433,   433,   433,   433,
     441,   441,   441,   443,   455,   461,   463,   464,   468,   468,
     468,   470,   478,   495,   496,   497,   498,   499,   500,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,   556,   557,   558,   559,   560,   561,   562,   563,
     564,   565,   566,   567,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,   587,   588,   589,   590,   591,   592,   593,
     594,   596,   596,   596,   597,   598,   599,   602,   602,   602
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NEWLINE", "SPACE", "ID_STR", "NUMBER",
  "CREATED", "DATE", "USER", "ID", "NAME", "REST", "SCREEN_NAME",
  "LOCATION", "URL", "URL_BEGIN", "URL_SYMBOL", "DESCRIPTION",
  "ARITHMETIC_OP", "OTHER_SYMBOL", "PLACE", "HEX", "PLACE_TYPE",
  "FULL_NAME", "COUNTRY", "BOUNDING_BOX", "TYPE", "POINT", "POLYGON",
  "COORDINATES", "FLOAT_NUMBER", "LINE", "ENTITIES", "HASHTAGS", "TEXT",
  "INDICES", "URLS", "TITLE", "USER_MENTIONS", "TWEET", "RT", "RETSTATUS",
  "EXT_TWEET", "DIS_TEXT_R", "TRUNCATED", "TRU", "FULL_TEXT", "','", "'{'",
  "'}'", "'\"'", "':'", "'['", "']'", "'.'", "$accept", "input",
  "programs", "program", "tweet", "statements", "statement", "id_str",
  "created_at", "user", "user_statements", "user_statement", "user_id_stm",
  "user_name_stm", "user_sc_name_stm", "user_sc_name", "user_location_stm",
  "user_url_statement", "url_body", "user_description_stm", "place",
  "place_statements", "place_statement", "place_id", "place_hex_id",
  "place_type_field_stm", "place_type_field", "place_full_name",
  "full_name_stm", "place_country_statement",
  "place_bounding_box_statement", "bounding_box_statement", "entities",
  "entities_statements", "entities_statement", "hashtags_stm",
  "hashtags_struct", "hashtag_word", "indices_statement",
  "hashtag_word_text_stm", "entities_url_section",
  "entities_url_statements", "entity_url_statement",
  "user_mentions_section", "all_mentions", "mentioned_user_statements",
  "mentioned_user", "mentioned_user_id", "mentioned_user_name_stm",
  "mentioned_user_sc_name_stm", "mentioned_user_id_str", "text_statement",
  "retweet", "retweet_stms", "retweet_stm", "tweet_declaration",
  "tweet_dec_stms", "tweet_dec_stm", "retweet_text_stm", "retweeted_text",
  "retweet_user_stm", "retweet_status_stm", "retweet_status_declarations",
  "retweet_status_declaration", "ext_tweet_stms", "display_text_range_stm",
  "truncated_stm", "extended_tweet_stm", "extended_tweet_field_stms",
  "extended_tweet_field_stm", "extended_full_text_stm",
  "extended_display_range_stm", "word_with_letters_and_numbers", "text",
  "word_with_letters_and_spaces", "blank", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,    44,   123,
     125,    34,    58,    91,    93,    46
};
# endif

#define YYPACT_NINF -444

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-444)))

#define YYTABLE_NINF -278

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      22,    42,    42,    37,  -444,     4,  -444,  -444,    62,  -444,
    -444,  -444,    42,    19,  -444,    18,    28,  -444,  -444,  -444,
    -444,  -444,  -444,    41,   110,  -444,  -444,  -444,  -444,  -444,
    -444,   111,    42,    19,    42,    42,   154,  -444,  -444,   113,
    -444,  -444,   129,   130,   135,   137,   139,   141,   150,   151,
     159,   163,   164,   165,   186,    33,    42,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    42,   166,   168,   170,
     171,   173,   174,   175,   176,   182,   187,   193,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    42,   195,
     198,   201,   203,   204,   205,   206,   210,   217,   160,   208,
     211,   261,    42,    42,    42,   780,    42,    42,    42,    42,
      42,   238,   239,   241,   244,  -444,  -444,  -444,  -444,  -444,
    -444,   242,  -444,   245,   246,  -444,  -444,  -444,  -444,  -444,
     247,   249,   252,  -444,  -444,  -444,   250,   780,   780,   780,
     780,   780,   780,   780,   780,   780,   780,   780,   780,   780,
     780,   780,   780,   780,   780,   780,   780,   780,   780,   780,
     780,   780,   780,   780,   780,   780,   780,   780,   780,   780,
     780,   780,   780,   780,   780,   780,   780,   780,   780,   780,
     780,   780,   780,   251,   253,   256,  -444,  -444,   273,  -444,
    -444,  -444,  -444,   275,   278,   276,  -444,   279,   280,  -444,
    -444,   281,   290,  -444,    42,    42,    42,    42,    79,    42,
      42,   248,    42,    42,    35,  -444,  -444,  -444,  -444,  -444,
    -444,  -444,  -444,  -444,  -444,  -444,  -444,  -444,  -444,  -444,
    -444,  -444,  -444,  -444,  -444,  -444,  -444,  -444,  -444,  -444,
    -444,  -444,  -444,  -444,  -444,  -444,  -444,  -444,  -444,  -444,
    -444,  -444,  -444,  -444,  -444,  -444,  -444,  -444,  -444,  -444,
    -444,    42,    42,    42,     7,    42,    42,    15,    42,    42,
     138,    42,  -444,  -444,  -444,  -444,   282,   283,   284,   285,
     286,   287,  -444,  -444,   288,   289,   291,   312,   313,  -444,
    -444,   314,   315,   317,  -444,  -444,  -444,   318,   319,  -444,
    -444,  -444,  -444,   320,   321,   293,    42,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    42,    42,
      42,    42,    42,    42,    42,   323,   324,   325,   326,   327,
     328,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     344,   346,   348,   367,    42,    42,    42,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    42,    42,
      42,    42,    42,   395,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   362,   277,   360,   361,   363,   364,   365,
     366,   243,    42,   162,    27,   162,   400,   780,    45,    76,
       5,   162,    42,    42,    42,    42,    42,   378,    42,   780,
      42,  -444,   162,   162,   162,   369,    27,    27,   370,   371,
     372,   374,    45,    45,   375,    76,    76,   376,     5,     5,
       5,     5,   377,   379,   373,   380,   381,   384,   385,   382,
     388,   386,   389,   391,   161,   392,   423,   397,  -444,  -444,
    -444,  -444,    42,  -444,  -444,    42,    42,   226,    42,  -444,
    -444,    42,  -444,  -444,    42,  -444,  -444,  -444,  -444,    42,
      42,    42,   304,    42,    42,    42,    42,    42,    42,    42,
     420,   161,   161,   161,   435,    42,    42,    42,  -444,  -444,
    -444,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   398,  -444,  -444,  -444,  -444,
    -444,  -444,   401,  -444,  -444,   403,   404,  -444,  -444,   396,
     405,  -444,  -444,   407,   406,  -444,  -444,  -444,  -444,   410,
     418,  -444,  -444,  -444,   780,  -444,   422,  -444,  -444,  -444,
    -444,  -444,  -444,  -444,  -444,  -444,  -444,  -444,  -444,  -444,
    -444,  -444,    42,    42,    42,   436,    42,    32,    42,    42,
      30,    42,  -444,    42,  -444,   419,   427,   428,   429,   425,
     430,   434,  -444,   432,   433,   437,   438,   426,   479,    42,
      42,   451,    42,    42,    42,    42,    42,    42,    42,    42,
      42,    42,   439,  -444,   440,   441,  -444,   442,  -444,   443,
     444,   445,   446,   449,   447,   -14,    42,    42,    42,    42,
      42,    42,    42,   161,    42,   452,   453,   454,   450,   455,
     457,   456,   481,   458,   459,   460,  -444,    42,    42,    42,
      42,    42,    42,   486,    42,   162,    27,    42,   464,   465,
     466,   467,   509,   468,   469,   470,  -444,   472,   473,   475,
      42,    42,    42,   161,    42,    42,   502,    42,    42,    42,
      42,   476,   477,   478,   480,   471,   482,  -444,  -444,  -444,
    -444,   496,   500,   504,    42,    42,   494,   484,   485,   487,
    -444,   531,   488,    42,    42,    42,    42,    42,   492,   497,
     499,   501,   505,    42,    42,    42,    42,    42,   493,   503,
     506,  -444,   489,    42,    42,    42,   780,   522,   507,   508,
     511,    42,    42,    42,    42,   510,   523,   532,   514,    42,
      42,    42,    42,   534,   518,   519,  -444,    42,    42,    42,
     516,   550,   551,    42,    42,    42,  -444,   529,   530,    42,
      42,   537,   538,    42,    42,   535,   536,    42,    42,   556,
     559,    42,    42,   543,   544,    42,    42,   562,   563,    42,
      42,   548,   552,    42,    42,   557,   553,    42,    42,   555,
    -444,    42,   573,    42,   561,    42,   579,    42,   558,    42,
     565,    42,   569,    42,   580,    42,   566,    42,   584,    42,
     570,    42,   571,    42,  -444
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,   277,   277,     0,     3,     4,     6,     7,     0,   279,
     278,     1,   277,    11,     5,     0,     9,    12,    13,    14,
      15,    16,    17,     0,   141,   143,   144,    18,   160,   161,
     162,     0,   277,    11,   277,   277,     0,     8,    10,     0,
     140,   142,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   277,   277,   277,     0,   277,   277,   277,   277,
     277,     0,     0,     0,    22,    25,    26,    27,    28,    29,
      30,    24,    74,     0,    70,    73,    75,    76,    77,    78,
      72,     0,   105,   108,   109,   110,   107,   187,   186,   201,
     181,   198,   197,   200,   196,   195,   180,   194,   202,   203,
     211,   183,   212,   182,   184,   193,   179,   213,   214,   207,
     215,   216,   219,   217,   206,   220,   218,   209,   210,   208,
     192,   204,   205,   199,   223,   224,   188,   191,   190,   185,
     221,   222,   189,     0,     0,   146,   148,   149,     0,   159,
     158,   156,   157,     0,   154,     0,   170,     0,   166,   168,
     169,     0,     0,   164,   277,   277,   277,   277,     0,   277,
     277,     0,   277,   277,     0,   233,   232,   247,   227,   244,
     243,   246,   242,   241,   226,   240,   248,   249,   257,   229,
     258,   228,   230,   239,   225,   259,   260,   253,   261,   262,
     265,   263,   252,   266,   264,   255,   256,   254,   238,   250,
     251,   245,   267,   268,   234,   237,   236,   231,   269,   270,
     235,   277,   277,   277,     0,   277,   277,     0,   277,   277,
       0,   277,    19,    20,    21,    23,     0,     0,     0,     0,
       0,     0,    69,    71,     0,     0,     0,     0,     0,   104,
     106,     0,     0,     0,   139,   145,   147,     0,     0,   153,
     155,   165,   167,     0,     0,     0,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   277,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   277,   277,   277,   277,   277,     0,   277,     0,
     277,    31,   273,   271,   272,     0,    34,    35,     0,     0,
       0,     0,    81,    80,     0,    86,    85,     0,    90,    91,
      92,    93,     0,     0,     0,   103,     0,   113,   112,     0,
     119,     0,     0,     0,     0,     0,     0,     0,   163,   275,
     274,   276,   277,    36,    37,   277,   277,     0,   277,    83,
      82,   277,    88,    87,   277,    94,    95,    97,    96,   277,
     277,   277,     0,   277,   277,   277,   277,   277,   277,   277,
       0,   175,   173,   174,     0,   277,   277,   277,    32,    33,
      38,    47,    49,    40,    42,    48,    44,    50,    41,    46,
      52,    43,    45,    51,    53,     0,    68,    79,    84,    89,
      98,    99,     0,   111,   114,     0,     0,   118,   122,     0,
       0,   124,   132,     0,   127,   130,   133,   134,   131,   129,
       0,   178,   176,   177,     0,   150,     0,   171,    61,    63,
      54,    56,    62,    58,    64,    55,    60,    66,    57,    59,
      65,    67,   277,   277,   277,     0,   277,     0,   277,   277,
       0,   277,   151,   277,    39,     0,     0,     0,     0,   120,
       0,   125,   128,     0,     0,     0,     0,     0,     0,   277,
     277,     0,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,     0,   115,     0,     0,   121,     0,   126,     0,
       0,     0,     0,     0,     0,     0,   277,   277,   277,   277,
     277,   277,   277,     0,   277,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   172,   277,   277,   277,
     277,   277,   277,     0,   277,     0,     0,   277,     0,     0,
       0,     0,     0,     0,     0,     0,   135,     0,     0,     0,
     277,   277,   277,     0,   277,   277,     0,   277,   277,   277,
     277,     0,     0,     0,     0,     0,     0,   138,   136,   137,
     152,     0,     0,     0,   277,   277,     0,     0,     0,     0,
     117,     0,     0,   277,   277,   277,   277,   277,     0,     0,
       0,     0,     0,   277,   277,   277,   277,   277,     0,     0,
       0,   116,     0,   277,   277,   277,     0,     0,     0,     0,
       0,   277,   277,   277,   277,     0,     0,     0,     0,   277,
     277,   277,   277,     0,     0,     0,   123,   277,   277,   277,
       0,     0,     0,   277,   277,   277,   102,     0,     0,   277,
     277,     0,     0,   277,   277,     0,     0,   277,   277,     0,
       0,   277,   277,     0,     0,   277,   277,     0,     0,   277,
     277,     0,     0,   277,   277,     0,     0,   277,   277,     0,
     101,   277,     0,   277,     0,   277,     0,   277,     0,   277,
       0,   277,     0,   277,     0,   277,     0,   277,     0,   277,
       0,   277,     0,   277,   100
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -444,  -444,   615,  -444,  -444,   595,  -444,  -444,  -444,  -444,
     424,  -444,  -444,  -444,  -444,  -402,  -444,  -100,  -206,  -444,
     -97,   448,  -444,  -444,  -317,  -444,  -316,  -444,  -242,  -444,
    -444,  -444,  -101,   416,  -444,  -444,   169,  -444,   167,  -444,
    -444,    57,  -444,  -444,    59,    86,  -444,  -444,  -444,  -444,
    -444,   -96,  -444,   601,  -444,  -444,   387,  -444,  -444,  -444,
     -94,  -444,   390,  -444,  -444,  -444,  -444,  -444,   368,  -444,
    -444,  -444,  -443,   -25,  -383,    -1
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    15,    16,    17,    18,    19,
     113,   114,   115,   116,   117,   408,   118,   119,   495,   120,
      20,   123,   124,   125,   414,   126,   417,   127,   422,   128,
     129,   424,    21,   131,   132,   133,   426,   427,   512,   556,
     134,   429,   509,   135,   431,   513,   514,   515,   516,   517,
     518,    22,     7,    23,    24,    25,   184,   185,   186,   435,
     187,    26,   193,   194,    27,    28,    29,    30,   197,   198,
     199,   200,   474,   183,   405,     8
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    10,   409,   122,   443,   444,   190,   196,   423,   418,
     189,   191,    31,   192,   605,   606,   297,   419,   607,   439,
     440,   441,     1,     2,   297,     1,     2,   420,   521,   522,
     523,    37,    39,    40,    42,   563,    46,    11,   471,   406,
     564,   565,   298,   566,   472,     1,     2,   280,    47,   407,
      48,   412,    12,   421,   473,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,   558,   413,    32,   291,
    -277,  -277,   292,    49,   293,    50,    33,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   415,   276,
     277,    34,   278,   279,   280,   449,   450,   281,   416,   452,
     453,   121,   130,   136,   560,   188,   195,   201,   202,   203,
     122,    13,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,    35,    43,
     615,    44,    36,    45,    54,   190,   402,   471,   196,   189,
     191,    47,   192,   472,   403,    46,   455,   456,   457,   458,
      55,    56,   303,   473,   404,   304,    57,    47,    58,    48,
      59,    43,    60,    44,    49,    45,    50,    51,    52,    53,
     654,    61,    62,   272,   273,   274,   121,    46,   282,   130,
      63,   289,   136,   109,    64,    65,    66,   111,    78,    47,
      79,    48,    80,    81,   638,    82,    83,    84,    85,    51,
      52,    53,   481,   482,    86,   483,   484,   485,   486,    87,
     487,   488,   637,   489,   490,    88,   100,   491,   492,   101,
     102,   493,   103,   104,   110,   106,   105,   494,   284,   107,
     294,   295,   188,   280,   299,   195,   108,   301,   201,   112,
     305,   285,   286,   287,   288,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   204,
     205,   206,   207,   208,   210,   209,   271,   400,   211,   212,
     213,   214,   261,   262,   263,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   264,   265,   266,   267,   269,   268,
     393,   502,   270,   306,   307,   308,   309,   310,   311,   312,
     313,   324,   314,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   411,   315,   316,   317,   318,   508,   319,   320,
     321,   322,   323,   362,   437,   344,   345,   346,   347,   348,
     349,   401,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   425,   428,   430,   432,   433,   359,   436,   360,   438,
     361,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   396,   394,   395,   397,   410,   399,   398,   434,
     442,   445,   446,   461,   447,   448,   451,   454,   459,   476,
     460,   462,   464,   520,   465,   463,   466,   467,   469,   524,
     468,   478,   470,   475,   479,   480,   546,   496,   477,   542,
     497,   544,   543,   498,   549,   545,   547,   548,   499,   500,
     501,   550,   503,   428,   506,   507,   510,   511,   519,   551,
     553,   569,   558,   573,   525,   526,   527,   570,   580,   571,
     572,   574,   575,   576,   577,   581,   584,   624,   578,   579,
     595,   596,   635,   597,   598,   599,   600,   601,   602,   552,
     603,   604,   620,   617,   618,   619,   622,   623,   621,   625,
     626,   627,   640,   641,   642,   644,   645,   280,   643,   665,
     646,   647,   633,   648,   649,   650,   667,   661,   662,   663,
     668,   664,   672,   666,   669,   673,   674,   676,   675,   677,
     696,   554,   555,   557,   683,   559,   693,   561,   519,   684,
     567,   685,   568,   701,   710,   686,   694,   687,   709,   695,
     702,   703,   704,   711,   712,   717,   718,   719,   582,   583,
     723,   585,   430,   587,   432,   589,   590,   591,   592,   593,
     594,   724,   725,   729,   730,   733,   734,   741,   737,   738,
     742,   745,   746,   749,   750,   608,   609,   610,   611,   612,
     613,   614,   753,   616,   763,   757,   754,   758,   761,   765,
     767,   775,   769,   771,   777,   779,   628,   629,   630,   631,
     632,   634,   773,   636,   781,   783,   639,    14,    38,   290,
     586,   275,   505,   504,   588,   562,    41,   302,     0,   651,
     652,   653,     0,   655,   656,     0,   657,   658,   659,   660,
     296,     0,     0,     0,     0,     0,   300,     0,   283,     0,
       0,     0,     0,   670,   671,     0,     0,     0,     0,     0,
       0,   700,   678,   679,   680,   681,   682,     0,     0,     0,
       0,     0,   688,   689,   690,   691,   692,     0,     0,     0,
       0,     0,   697,   698,   699,     0,     0,     0,     0,     0,
     705,   706,   707,   708,     0,     0,     0,     0,   713,   714,
     715,   716,     0,     0,     0,     0,   720,   721,   722,     0,
       0,     0,   726,   727,   728,     0,     0,     0,   731,   732,
       0,     0,   735,   736,     0,     0,   739,   740,     0,     0,
     743,   744,     0,     0,   747,   748,     0,     0,   751,   752,
       0,     0,   755,   756,     0,     0,   759,   760,     0,     0,
     762,     0,   764,     0,   766,     0,   768,     0,   770,     0,
     772,     0,   774,     0,   776,     0,   778,     0,   780,     0,
     782,     0,   784,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,     0,     0,     0,     0,     0,     0,   176,   177,
     178,     0,   179,   180,   181,   182
};

static const yytype_int16 yycheck[] =
{
       1,     2,   385,   103,   406,   407,   107,   108,   391,     4,
     107,   107,    13,   107,    28,    29,     9,    12,    32,   402,
     403,   404,     3,     4,     9,     3,     4,    22,   471,   472,
     473,    32,    33,    34,    35,     5,    21,     0,     6,    12,
      10,    11,    35,    13,    12,     3,     4,    15,    33,    22,
      35,     6,    48,    48,    22,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    36,    22,    50,    34,
      51,    49,    37,    40,    39,    42,    48,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    12,    10,
      11,    50,    13,    14,    15,   412,   413,    18,    22,   415,
     416,   102,   103,   104,   547,   106,   107,   108,   109,   110,
     210,    49,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,    48,     5,
     603,     7,    51,     9,    51,   266,     4,     6,   269,   266,
     266,    33,   266,    12,    12,    21,   418,   419,   420,   421,
      51,    51,    44,    22,    22,    47,    51,    33,    51,    35,
      51,     5,    51,     7,    40,     9,    42,    43,    44,    45,
     643,    51,    51,   204,   205,   206,   207,    21,   209,   210,
      51,   212,   213,    53,    51,    51,    51,     6,    52,    33,
      52,    35,    52,    52,   626,    52,    52,    52,    52,    43,
      44,    45,     6,     7,    52,     9,    10,    11,    12,    52,
      14,    15,   625,    17,    18,    52,    51,    21,    22,    51,
      49,    25,    49,    49,    46,    49,    51,    31,    10,    49,
     261,   262,   263,    15,   265,   266,    49,   268,   269,     8,
     271,    23,    24,    25,    26,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,    51,
      51,    50,    48,    51,    48,    50,     6,    54,    51,    50,
      48,    51,    51,    50,    48,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,    51,    50,    48,    51,    48,    50,
      53,    27,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    48,    51,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   387,    51,    51,    51,    51,   467,    51,    51,
      51,    51,    51,     6,   399,    52,    52,    52,    52,    52,
      52,   382,    52,    52,    52,    52,    52,    52,    52,    52,
      52,   392,   393,   394,   395,   396,    52,   398,    52,   400,
      52,     6,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    49,    49,    53,    53,    51,    16,    51,    53,    41,
      51,    51,    51,    50,    52,    51,    51,    51,    51,     6,
      51,    51,    48,    13,    49,    54,    54,    49,    49,     4,
      54,   442,    51,    51,   445,   446,    50,   448,    51,    51,
     451,    48,    51,   454,    48,    51,    51,    50,   459,   460,
     461,    51,   463,   464,   465,   466,   467,   468,   469,    51,
      48,    52,    36,    48,   475,   476,   477,    50,    52,    51,
      51,    51,    48,    51,    51,     6,    35,     6,    51,    51,
      51,    51,     6,    52,    52,    52,    52,    52,    52,   524,
      51,    54,    52,    51,    51,    51,    49,    51,    53,    51,
      51,    51,    48,    48,    48,     6,    48,    15,    51,    48,
      51,    51,   622,    51,    51,    50,    30,    51,    51,    51,
      30,    51,    38,    51,    30,    51,    51,     6,    51,    51,
      51,   542,   543,   544,    52,   546,    53,   548,   549,    52,
     551,    52,   553,    31,    31,    54,    53,    52,    48,    53,
      53,    53,    51,    31,    50,    31,    48,    48,   569,   570,
      54,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,    31,    31,    54,    54,    48,    48,    31,    53,    53,
      31,    48,    48,    31,    31,   596,   597,   598,   599,   600,
     601,   602,    54,   604,    31,    48,    54,    54,    53,    48,
      31,    31,    54,    48,    48,    31,   617,   618,   619,   620,
     621,   622,    53,   624,    54,    54,   627,    12,    33,   213,
     573,   207,   465,   464,   575,   549,    35,   269,    -1,   640,
     641,   642,    -1,   644,   645,    -1,   647,   648,   649,   650,
     263,    -1,    -1,    -1,    -1,    -1,   266,    -1,   210,    -1,
      -1,    -1,    -1,   664,   665,    -1,    -1,    -1,    -1,    -1,
      -1,   696,   673,   674,   675,   676,   677,    -1,    -1,    -1,
      -1,    -1,   683,   684,   685,   686,   687,    -1,    -1,    -1,
      -1,    -1,   693,   694,   695,    -1,    -1,    -1,    -1,    -1,
     701,   702,   703,   704,    -1,    -1,    -1,    -1,   709,   710,
     711,   712,    -1,    -1,    -1,    -1,   717,   718,   719,    -1,
      -1,    -1,   723,   724,   725,    -1,    -1,    -1,   729,   730,
      -1,    -1,   733,   734,    -1,    -1,   737,   738,    -1,    -1,
     741,   742,    -1,    -1,   745,   746,    -1,    -1,   749,   750,
      -1,    -1,   753,   754,    -1,    -1,   757,   758,    -1,    -1,
     761,    -1,   763,    -1,   765,    -1,   767,    -1,   769,    -1,
     771,    -1,   773,    -1,   775,    -1,   777,    -1,   779,    -1,
     781,    -1,   783,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      50,    -1,    52,    53,    54,    55
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    57,    58,    59,    60,   108,   131,   131,
     131,     0,    48,    49,    58,    61,    62,    63,    64,    65,
      76,    88,   107,   109,   110,   111,   117,   120,   121,   122,
     123,   131,    50,    48,    50,    48,    51,   131,    61,   131,
     131,   109,   131,     5,     7,     9,    21,    33,    35,    40,
      42,    43,    44,    45,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
      51,    51,    49,    49,    49,    51,    49,    49,    49,    53,
      46,     6,     8,    66,    67,    68,    69,    70,    72,    73,
      75,   131,    73,    77,    78,    79,    81,    83,    85,    86,
     131,    89,    90,    91,    96,    99,   131,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    48,    49,    50,    52,
      53,    54,    55,   129,   112,   113,   114,   116,   131,    76,
      88,   107,   116,   118,   119,   131,    88,   124,   125,   126,
     127,   131,   131,   131,    51,    51,    50,    48,    51,    50,
      48,    51,    50,    48,    51,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,    51,    50,    48,    51,    50,    48,    51,    50,    48,
      51,     6,   131,   131,   131,    66,    10,    11,    13,    14,
      15,    18,   131,    77,    10,    23,    24,    25,    26,   131,
      89,    34,    37,    39,   131,   131,   112,     9,    35,   131,
     118,   131,   124,    44,    47,   131,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    48,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,     6,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,     6,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    49,    53,    53,    53,    49,    51,    53,    51,
      54,   131,     4,    12,    22,   130,    12,    22,    71,   130,
      16,   129,     6,    22,    80,    12,    22,    82,     4,    12,
      22,    48,    84,   130,    87,   131,    92,    93,   131,    97,
     131,   100,   131,   131,    41,   115,   131,   129,   131,   130,
     130,   130,    51,    71,    71,    51,    51,    52,    51,    80,
      80,    51,    82,    82,    51,    84,    84,    84,    84,    51,
      51,    50,    51,    54,    48,    49,    54,    49,    54,    49,
      51,     6,    12,    22,   128,    51,     6,    51,   131,   131,
     131,     6,     7,     9,    10,    11,    12,    14,    15,    17,
      18,    21,    22,    25,    31,    74,   131,   131,   131,   131,
     131,   131,    27,   131,    92,    94,   131,   131,    73,    98,
     131,   131,    94,   101,   102,   103,   104,   105,   106,   131,
      13,   128,   128,   128,     4,   131,   131,   131,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    51,    51,    48,    51,    50,    51,    50,    48,
      51,    51,   129,    48,   131,   131,    95,   131,    36,   131,
     128,   131,   101,     5,    10,    11,    13,   131,   131,    52,
      50,    51,    51,    48,    51,    48,    51,    51,    51,    51,
      52,     6,   131,   131,    35,   131,    97,   131,   100,   131,
     131,   131,   131,   131,   131,    51,    51,    52,    52,    52,
      52,    52,    52,    51,    54,    28,    29,    32,   131,   131,
     131,   131,   131,   131,   131,   128,   131,    51,    51,    51,
      52,    53,    49,    51,     6,    51,    51,    51,   131,   131,
     131,   131,   131,    73,   131,     6,   131,   130,    71,   131,
      48,    48,    48,    51,     6,    48,    51,    51,    51,    51,
      50,   131,   131,   131,   128,   131,   131,   131,   131,   131,
     131,    51,    51,    51,    51,    48,    51,    30,    30,    30,
     131,   131,    38,    51,    51,    51,     6,    51,   131,   131,
     131,   131,   131,    52,    52,    52,    54,    52,   131,   131,
     131,   131,   131,    53,    53,    53,    51,   131,   131,   131,
     129,    31,    53,    53,    51,   131,   131,   131,   131,    48,
      31,    31,    50,   131,   131,   131,   131,    31,    48,    48,
     131,   131,   131,    54,    31,    31,   131,   131,   131,    54,
      54,   131,   131,    48,    48,   131,   131,    53,    53,   131,
     131,    31,    31,   131,   131,    48,    48,   131,   131,    31,
      31,   131,   131,    54,    54,   131,   131,    48,    54,   131,
     131,    53,   131,    31,   131,    48,   131,    31,   131,    54,
     131,    48,   131,    53,   131,    31,   131,    48,   131,    31,
     131,    54,   131,    54,   131
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    57,    58,    58,    59,    59,    60,    61,
      61,    62,    62,    62,    62,    62,    62,    62,    62,    63,
      64,    65,    66,    66,    67,    67,    67,    67,    67,    67,
      67,    68,    69,    70,    71,    71,    71,    71,    72,    73,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    75,    76,
      77,    77,    78,    78,    78,    78,    78,    78,    78,    79,
      80,    80,    80,    80,    81,    82,    82,    82,    82,    83,
      84,    84,    84,    84,    84,    84,    84,    84,    85,    86,
      87,    87,    87,    87,    88,    89,    89,    90,    90,    90,
      90,    91,    92,    92,    92,    93,    94,    95,    96,    97,
      97,    97,    98,    98,    99,   100,   100,   101,   101,   101,
     102,   102,   102,   102,   102,   103,   104,   105,   106,   107,
     108,   109,   109,   110,   110,   111,   112,   112,   113,   113,
     114,   115,   116,   117,   118,   118,   119,   119,   119,   119,
     120,   120,   120,   121,   122,   123,   124,   124,   125,   125,
     125,   126,   127,   128,   128,   128,   128,   128,   128,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   130,   130,   130,   130,   130,   130,   131,   131,   131
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     3,     1,     1,     5,     1,
       3,     0,     1,     1,     1,     1,     1,     1,     1,    11,
      11,    11,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     9,    11,    11,     1,     1,     2,     2,    11,    13,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    11,    11,
       1,     3,     1,     1,     1,     1,     1,     1,     1,    11,
       1,     1,     2,     2,    11,     1,     1,     2,     2,    11,
       1,     1,     1,     1,     2,     2,     2,     2,    11,    11,
      69,    45,    29,     1,    11,     1,     3,     1,     1,     1,
       1,    11,     1,     1,     3,     7,    17,    11,    11,     1,
       5,     7,     1,    23,    11,     5,     7,     1,     3,     1,
       1,     1,     1,     1,     1,     9,    11,    11,    11,    11,
       5,     1,     3,     1,     1,    11,     1,     3,     1,     1,
      11,     4,    21,    11,     1,     3,     1,     1,     1,     1,
       1,     1,     1,    17,     9,    11,     1,     3,     1,     1,
       1,    11,    17,     1,     1,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     1,     1,     2,     2,     2,     0,     2,     2
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
#line 45 "b.y" /* yacc.c:1646  */
    {printf("No program given\n");}
#line 1811 "b.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 55 "b.y" /* yacc.c:1646  */
    {
   if(displayTextRangeInExtendedExists && fullTextStmInExtendedTweetExists)
   {
      extended_tweetFieldIsOk=true;
   }
   if(truncatedExists==true || displayTextRangeExists==true || extended_tweetFieldIsOk==true)
   {
     if(!created_atExists) printf("Error.There is no date in the tweet\n");
     if(!textExists) printf("Error.There is no text in the tweet\n");
     if(!id_strExists) printf("Error.There is no id_str in the tweet\n");
     if(!userExists) printf("Error.There is no user or correct user statement of tweet creation\n");

     if(!truncatedExists) printf("Error.No truncated field exists in extended tweet\n");

     if(!displayTextRangeExists) printf("Error.No display text range field exists outside of the extended_tweet field or has not been initialized properly.\n\n");

     if(!extended_tweetFieldIsOk) printf("Error.'extended_tweet' field is missing or has not all declarations in place.\n\n");

     if(truncatedExists==true && displayTextRangeExists==true && extended_tweetFieldIsOk==true)
     {
        extendedTweetCounter++;
        printf("End of extended tweet #%d  in line %d\n\n\n", extendedTweetCounter,yylineno);
     }
   }
   else if(truncatedExists==false && displayTextRangeExists==false && extended_tweetFieldIsOk==false)
   {
     if(!created_atExists) printf("Error.There is no date in the tweet\n\n");
     if(!textExists) printf("Error.There is no text in the tweet\n\n");
     if(!id_strExists) printf("Error.There is no id_str in the tweet\n\n");
     if(!userExists) printf("Error.There is no user or correct user statement of tweet creation\n\n");

     printf("End of tweet #%d  in line %d\n\n\n", counterOfPrograms,yylineno); 
   }

/*If we don't have syntax errors we will restore all variables for the next program and we will print a warning message that one of the many JSON programs have been read and the parser will read the next message if it exists.*/
     displayTextRangeInExtendedExists=false;
     fullTextStmInExtendedTweetExists=false;
     truncatedExists=false;
     displayTextRangeExists=false;
     extended_tweetFieldIsOk=false;
     j=0;
     u=0;
     created_atExists=false;
          /*It will check for date existence in the next tweet*/
     userExists=false; /*It will check for user existence in the next tweet*/
     id_strExists=false; 
          /*It will check for id_str existence in the next tweet*/
     textExists=false;/*It will check for text existence in the next tweet*/
     string_length=0;
          /*It will check for text length existence in the next tweet*/
     userLocationFound=false;
        /*Checks for existence of location in user field*/
     userIDFound=false; /*Checks for user Id existence*/
     userNameFound=false; /*Name of the user must also exists*/
     userScreenNameFound = false; /*Screen name validator*/
     mentionedUserTweetIdNotFound=true;
}
#line 1873 "b.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 121 "b.y" /* yacc.c:1646  */
    {
  counterOfPrograms++;
  j=0;
  possible_dublicate_id_str_as_number = atoi((yyvsp[-2].text_of_chars));

/* First we initialize the boolean variable*/

  if(possible_dublicate_id_str_as_number - a[0] == 0)
       tweetIdFoundDuplicate = true;
  else tweetIdFoundDuplicate = false; 

  while(!tweetIdFoundDuplicate && j<counterOfPrograms)
  {
    if(possible_dublicate_id_str_as_number - a[j+1] ==0)
    tweetIdFoundDuplicate=true;
    j++;
  }
  if(tweetIdFoundDuplicate==true)
  {
   printf("Duplicate \"id_str\" spotted in line %d\n",yylineno);
  }
  else
  {
    id_strExists=true;
    printf("Id_str of tweet #%d with number %d in line %d is not duplicate\n",counterOfPrograms,possible_dublicate_id_str_as_number,yylineno);
    a[counterOfPrograms] = possible_dublicate_id_str_as_number;
  }
}
#line 1906 "b.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 153 "b.y" /* yacc.c:1646  */
    {
  created_atExists=true;
}
#line 1914 "b.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 162 "b.y" /* yacc.c:1646  */
    {
   if(userNameFound && userIDFound && userScreenNameFound && userLocationFound)
   {
      userExists=true;
/*Necessary are considered the fields (1)screen name (2)id (3)location (4)name elsewise it is displayed ERROR MESSAGE*/
   }
   else if(!userNameFound) printf("Error!User field `name` is missing or is duplicate.\n");
   else if (!userIDFound) printf("Error.User field `id` is missing. or is duplicate\n");
   else if (!userLocationFound) printf("Error.User field `location` is missing or is duplicate.\n");
   else if (!userScreenNameFound) printf("Error.User field `screen_name` is missing or is duplicate.\n");
}
#line 1930 "b.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 179 "b.y" /* yacc.c:1646  */
    {
  ++counterOfUsers; /*This will help to locate the position of storage*/
  u=0;
  possible_duplicate_user_id_as_number = atoi((yyvsp[-1].text_of_chars));

/* First we initialize the boolean variable*/

  if((possible_duplicate_user_id_as_number - b[0]) == 0)
      userIdIsDuplicate = true;
  else userIdIsDuplicate = false;

  while(!userIdIsDuplicate && u<counterOfUsers)
  {
    if(possible_duplicate_user_id_as_number - b[u+1] ==0)
    userIdIsDuplicate=true;
    u++;
  }
  if(userIdIsDuplicate==true)
  {
   printf("Duplicate user id spotted in line %d\n",yylineno);
  }
  else
  {
    userIDFound=true;
/*Boolean that confirms that in every tweet exists only one user Id*/
    printf("User Id with number %d in line %d is not duplicate\n",possible_duplicate_user_id_as_number,yylineno);
    b[counterOfUsers] = possible_duplicate_user_id_as_number;
  }
}
#line 1964 "b.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 210 "b.y" /* yacc.c:1646  */
    {
  if(userNameFound)
  {
    printf("Warning! In line %d detected duplicate \"name\" field for user struct. \n",yylineno);
    userNameFound=false;
  }
  else
  {
    userNameFound=true;
  }
}
#line 1980 "b.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 223 "b.y" /* yacc.c:1646  */
    {
  if(userScreenNameFound)
  {
     printf("Warning! In line %d detected duplicate \"screen_name\" field for user struct. \n",yylineno);
     userScreenNameFound=false;
  }
  else
  {
    userScreenNameFound=true;
  }
}
#line 1996 "b.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 238 "b.y" /* yacc.c:1646  */
    {
  if(userLocationFound)
  {
    printf("Warning! In line %d detected duplicate \"screen_name\" field for user struct. \n",yylineno);
    userLocationFound=false;
  }
  else userLocationFound=true;
}
#line 2009 "b.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 253 "b.y" /* yacc.c:1646  */
    {string_length=0;}
#line 2015 "b.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 299 "b.y" /* yacc.c:1646  */
    {}
#line 2021 "b.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 304 "b.y" /* yacc.c:1646  */
    {}
#line 2027 "b.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 308 "b.y" /* yacc.c:1646  */
    {}
#line 2033 "b.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 309 "b.y" /* yacc.c:1646  */
    {printf("A blank Bounding box located in line %d.\n",yylineno);}
#line 2039 "b.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 344 "b.y" /* yacc.c:1646  */
    {string_length=0;}
#line 2045 "b.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 361 "b.y" /* yacc.c:1646  */
    {}
#line 2051 "b.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 363 "b.y" /* yacc.c:1646  */
    {}
#line 2057 "b.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 365 "b.y" /* yacc.c:1646  */
    { }
#line 2063 "b.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 368 "b.y" /* yacc.c:1646  */
    {}
#line 2069 "b.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 375 "b.y" /* yacc.c:1646  */
    {
  if(string_length>140)
  {
    string_length = string_length - 140;
    printf("Error in line %d.Text length must be less than 140 characters in a not extended tweet.\n", yylineno);
    printf("\nRemove %d characters to have a valid text.\n",string_length);
    }
    else
    { printf("string length of text is %d.Ends in line %d\n", string_length,yylineno);
      textExists=true;
    }
}
#line 2086 "b.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 393 "b.y" /* yacc.c:1646  */
    {
retweetStatementCounter++;
string_length=0;
printf("End of retweet #%d in line %d\n\n\n",retweetStatementCounter,yylineno);
}
#line 2096 "b.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 403 "b.y" /* yacc.c:1646  */
    { }
#line 2102 "b.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 414 "b.y" /* yacc.c:1646  */
    {}
#line 2108 "b.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 444 "b.y" /* yacc.c:1646  */
    {
   lowestLimitForExtTweet=atoi((yyvsp[-7].text_of_chars));
   highestLimitForExtTweet=atoi((yyvsp[-3].text_of_chars));
   if (lowestLimitForExtTweet==0 && highestLimitForExtTweet <=140 && highestLimitForExtTweet>0)
   {
      displayTextRangeExists=true;
   }
   else
      printf("Error!Truncated text length is not valid in line %d.\nInsert a number from 1 to 140 to specify the character length of preview text of extended tweet\n",yylineno);
}
#line 2123 "b.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 456 "b.y" /* yacc.c:1646  */
    {
  truncatedExists=true;
}
#line 2131 "b.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 471 "b.y" /* yacc.c:1646  */
    {
   if(string_length>140)
      fullTextStmInExtendedTweetExists=true;
   else
      printf("Error in line %d Full text statement is not necessary\n\n",yylineno);
}
#line 2142 "b.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 479 "b.y" /* yacc.c:1646  */
    {
   lowestLimitForExtTweetField=atoi((yyvsp[-7].text_of_chars));
   highestLimitForExtTweetField=atoi((yyvsp[-3].text_of_chars));
   if (lowestLimitForExtTweetField==0 && highestLimitForExtTweetField >140)
   {
      displayTextRangeInExtendedExists=true;
   }
   else
      printf("Error in line %d\nDisplay Text Range is not set up properly.Set 0 and a number greater than 140.\n",yylineno);
}
#line 2157 "b.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 503 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2163 "b.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 504 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2169 "b.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 505 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2175 "b.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 506 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2181 "b.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 507 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2187 "b.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 508 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2193 "b.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 509 "b.y" /* yacc.c:1646  */
    {string_length = string_length + 1;}
#line 2199 "b.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 510 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2205 "b.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 511 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2211 "b.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 512 "b.y" /* yacc.c:1646  */
    {string_length = string_length + 1;}
#line 2217 "b.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 513 "b.y" /* yacc.c:1646  */
    {string_length = string_length + 1;}
#line 2223 "b.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 514 "b.y" /* yacc.c:1646  */
    {string_length = string_length + 1;}
#line 2229 "b.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 515 "b.y" /* yacc.c:1646  */
    {string_length = string_length + 1;}
#line 2235 "b.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 516 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2241 "b.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 517 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2247 "b.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 518 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2253 "b.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 519 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2259 "b.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 520 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2265 "b.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 521 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2271 "b.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 522 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2277 "b.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 523 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2283 "b.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 524 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2289 "b.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 525 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2295 "b.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 526 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2301 "b.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 527 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2307 "b.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 528 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2313 "b.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 529 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2319 "b.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 530 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2325 "b.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 531 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2331 "b.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 532 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2337 "b.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 533 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2343 "b.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 534 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2349 "b.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 535 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2355 "b.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 536 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2361 "b.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 537 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2367 "b.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 538 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2373 "b.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 539 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2379 "b.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 540 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2385 "b.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 541 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2391 "b.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 542 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2397 "b.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 543 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2403 "b.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 544 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2409 "b.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 545 "b.y" /* yacc.c:1646  */
    {string_length = string_length + 1;}
#line 2415 "b.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 546 "b.y" /* yacc.c:1646  */
    {string_length = string_length + 1;}
#line 2421 "b.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 547 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2427 "b.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 548 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[0].text_of_chars));}
#line 2433 "b.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 549 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2439 "b.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 550 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2445 "b.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 551 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2451 "b.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 552 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2457 "b.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 553 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2463 "b.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 554 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2469 "b.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 555 "b.y" /* yacc.c:1646  */
    {string_length = string_length + 1;}
#line 2475 "b.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 556 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2481 "b.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 557 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2487 "b.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 558 "b.y" /* yacc.c:1646  */
    {string_length = string_length + 1;}
#line 2493 "b.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 559 "b.y" /* yacc.c:1646  */
    {string_length = string_length + 1;}
#line 2499 "b.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 560 "b.y" /* yacc.c:1646  */
    {string_length = string_length + 1;}
#line 2505 "b.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 561 "b.y" /* yacc.c:1646  */
    {string_length = string_length + 1;}
#line 2511 "b.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 562 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2517 "b.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 563 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2523 "b.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 564 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2529 "b.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 565 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2535 "b.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 566 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2541 "b.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 567 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2547 "b.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 568 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2553 "b.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 569 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2559 "b.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 570 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2565 "b.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 571 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2571 "b.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 572 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2577 "b.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 573 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2583 "b.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 574 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2589 "b.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 575 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2595 "b.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 576 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2601 "b.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 577 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2607 "b.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 578 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2613 "b.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 579 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2619 "b.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 580 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2625 "b.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 581 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2631 "b.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 582 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2637 "b.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 583 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2643 "b.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 584 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2649 "b.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 585 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2655 "b.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 586 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2661 "b.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 587 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2667 "b.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 588 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2673 "b.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 589 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2679 "b.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 590 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2685 "b.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 591 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2691 "b.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 592 "b.y" /* yacc.c:1646  */
    {string_length=string_length+strlen((yyvsp[-1].text_of_chars));}
#line 2697 "b.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 593 "b.y" /* yacc.c:1646  */
    {string_length = string_length + 1;}
#line 2703 "b.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 594 "b.y" /* yacc.c:1646  */
    {string_length = string_length + 1;}
#line 2709 "b.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 602 "b.y" /* yacc.c:1646  */
    {}
#line 2715 "b.tab.c" /* yacc.c:1646  */
    break;


#line 2719 "b.tab.c" /* yacc.c:1646  */
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
#line 603 "b.y" /* yacc.c:1906  */




int main(void)
{
   
 /*  bool someTextStatementIsPending=false,arrayIsOpen=false;
   unsigned int line = 0, quoteCounter = 0,arrayCounter=0;
   FILE *ptof =fopen("myfile.txt","r");
   char character;*/
   yyparse();

/*   while ((character = fgetc(ptof)) != EOF) 
   { 
*/
/*Firstly we check if character is a text opener quote.If it is quote then everything else must be considered a text and not follow any text editing rule from bellow*/

/*    if(character=='"') quoteCounter++;
     if(quoteCounter%2==1) someTextStatementIsPending=true;
     else if(quoteCounter%2==0) someTextStatementIsPending=false;
*/
 /*Because text is included in quotes a single quote means that a text statement is open therefore there is no need for text formatting*/
 /*The same thing goes for the array symbols with some slightly difference.*/
/*
     if (character=='[' && !someTextStatementIsPending)
         arrayCounter++; /*A JSON array opens*/
/*     else if (character==']'&& !someTextStatementIsPending)
         arrayCounter--; /*A JSON array closes*/
    
/*     if(arrayCounter==0) arrayIsOpen=false;
     else if(arrayCounter>0) arrayIsOpen=true;


     if(character=='{' && !someTextStatementIsPending && !arrayIsOpen)
     {
       printf("\n");
       for(line=0;line<blockCounter;++line)
       {
         printf("    ");
       }
       printf("%c\n",character);
       blockCounter++;
       for(line=0;line<blockCounter;++line)
        {
          printf("    ");
        }
     }
     else if(character=='}' && !someTextStatementIsPending && !arrayIsOpen)
     {
       blockCounter--;
       printf("\n");
       for(line=0;line<blockCounter;++line)
       {
         printf("    ");
       }
       printf("%c\n",character);
       for(line=0;line<blockCounter;++line)
        {
          printf("    ");
        }
     }
     else if(character==',' && !someTextStatementIsPending && !arrayIsOpen)
     {
        printf(",\n");
        for(line=0;line<blockCounter;++line)
        {
          printf("    ");
        }
     }
     else printf("%c",character);
   }

*/   fclose(ptof);
   return 0;
}
