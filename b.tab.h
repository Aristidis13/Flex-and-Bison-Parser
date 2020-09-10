/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 38 "b.y" /* yacc.c:1909  */
 int num; char *text_of_chars;

#line 105 "b.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_B_TAB_H_INCLUDED  */
