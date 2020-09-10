%{
#include <stdio.h>
#include <stdlib.h>
#include "b.tab.h"
%}

%option noyywrap

%%
\,	     { return ',';}
\}           { return '}';}
\{           { return '{';}
\"   	     { return '"';}
\:           { return ':';}
\[           { return '[';}
\]           { return ']';}
"true"|"TRUE"|"True" { return TRU;}    
"truncated"  { return TRUNCATED;}
"display_text_range"  { return DIS_TEXT_R;}
"extended_tweet" {return EXT_TWEET;}
"RT @"       { yylval.text_of_chars=strdup(yytext);return RT;}
"tweet"      { yylval.text_of_chars=strdup(yytext);return TWEET;/*r*/}
"indices"    { yylval.text_of_chars=strdup(yytext);return INDICES;}
"place"      { yylval.text_of_chars=strdup(yytext);return PLACE;}
"screen_name" { yylval.text_of_chars=strdup(yytext);return SCREEN_NAME;}
"name"       { yylval.text_of_chars=strdup(yytext);return NAME;}
"id"         { yylval.text_of_chars=strdup(yytext);return ID; }
("Sun"|"Mon"|"Tue"|"Wed"|"Thu"|"Fri"|"Sat")" "("Jan"|"Feb"|"Mar"|"Apr"|"May"|"Jun"|"Jul"|"Aug"|"Sep"|"Oct"|"Nov"|"Dec")" "(3[01]|[1-2][0-9]|0[1-9])" "(2[0-3]|[01][0-9])":"([0-5][0-9])":"([0-5][0-9])" "("+"|"-")([0-9][0-9][0-9][0-9])" "(20[01][0-9]) { yylval.text_of_chars=strdup(yytext);return DATE;}
"created_at" { yylval.text_of_chars=strdup(yytext);return CREATED;}
"user_mentions" { yylval.text_of_chars=strdup(yytext);return USER_MENTIONS;}
"user"       { yylval.text_of_chars=strdup(yytext);return USER;}
"id_str"     { yylval.text_of_chars=strdup(yytext);return ID_STR;}
"location"   { yylval.text_of_chars=strdup(yytext);return LOCATION;}
"url"        { yylval.text_of_chars=strdup(yytext);return URL;}
"urls"       { yylval.text_of_chars=strdup(yytext);return URLS;}
"title"      { yylval.text_of_chars=strdup(yytext);return TITLE;}
"coordinates" { yylval.text_of_chars=strdup(yytext);return COORDINATES;}
"country"    { yylval.text_of_chars=strdup(yytext);return COUNTRY;}
"text"       { yylval.text_of_chars=strdup(yytext);return TEXT;}
"entities"   { yylval.text_of_chars=strdup(yytext);return ENTITIES;}
"hashtags"   { yylval.text_of_chars=strdup(yytext);return HASHTAGS;}
"https"      { yylval.text_of_chars=strdup(yytext);return URL_BEGIN;}
"description" { yylval.text_of_chars=strdup(yytext);return DESCRIPTION;}
"place_type" { yylval.text_of_chars=strdup(yytext);return PLACE_TYPE;}
"full_text"  { yylval.text_of_chars=strdup(yytext);return FULL_TEXT;}
"full_name"  { yylval.text_of_chars=strdup(yytext);return FULL_NAME;}
"bounding_box" { yylval.text_of_chars=strdup(yytext);return BOUNDING_BOX;}
"type"       { yylval.text_of_chars=strdup(yytext);return TYPE;}
"retweeted_status"  { yylval.text_of_chars=strdup(yytext);return RETSTATUS;}
"Polygon"|"polugon"|"POLYGON" { yylval.text_of_chars=strdup(yytext);return POLYGON;}
"LIne"|"LINE"|"line"   { yylval.text_of_chars=strdup(yytext);return LINE;}
"Point"|"point"|"POINT" { yylval.text_of_chars=strdup(yytext);return POINT;}
(-?)([0-9]+)"."([0-9]+)  { yylval.text_of_chars=strdup(yytext);return FLOAT_NUMBER;}
[abcdef]*    { yylval.text_of_chars=strdup(yytext); return HEX;}
\n           { yylval.text_of_chars=strdup(yytext); ++yylineno; return NEWLINE;}
[ \t\v\r]*   { yylval.text_of_chars=strdup(yytext); return SPACE;};
[0-9]+       { yylval.text_of_chars=strdup(yytext); return NUMBER;}
[\\\//\.]      { yylval.text_of_chars=strdup(yytext);return URL_SYMBOL;}
[-+*%<>=()]    { yylval.text_of_chars=strdup(yytext);return ARITHMETIC_OP;}
[!@#$^&?']*    { yylval.text_of_chars=strdup(yytext);return OTHER_SYMBOL;}
[g-zA-Z_]+   { yylval.text_of_chars=strdup(yytext);return REST;}
.            { printf("Unspecified character %s\n",yytext);}
%%
