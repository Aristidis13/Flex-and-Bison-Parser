%{
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
%}

%union { int num; char *text_of_chars;}
%start input
%token NEWLINE SPACE ID_STR NUMBER CREATED DATE USER ID NAME REST SCREEN_NAME LOCATION URL URL_BEGIN URL_SYMBOL DESCRIPTION ARITHMETIC_OP OTHER_SYMBOL PLACE HEX PLACE_TYPE FULL_NAME COUNTRY BOUNDING_BOX TYPE POINT POLYGON COORDINATES FLOAT_NUMBER LINE ENTITIES HASHTAGS TEXT INDICES URLS TITLE USER_MENTIONS TWEET RT RETSTATUS EXT_TWEET DIS_TEXT_R TRUNCATED TRU FULL_TEXT;

%type <text_of_chars> ID_STR NEWLINE SPACE blank CREATED DATE ID NAME REST SCREEN_NAME LOCATION URL URL_BEGIN URL_SYMBOL DESCRIPTION ARITHMETIC_OP  PLACE HEX PLACE_TYPE OTHER_SYMBOL FULL_NAME COUNTRY BOUNDING_BOX TYPE POLYGON POINT ENTITIES LINE TEXT INDICES URLS TITLE USER_MENTIONS COORDINATES USER HASHTAGS FLOAT_NUMBER NUMBER TWEET RT RETSTATUS word_with_letters_and_numbers EXT_TWEET DIS_TEXT_R TRUNCATED TRU FULL_TEXT;

%%
input : {printf("No program given\n");} | programs;

programs : program | program','programs;

program : tweet | retweet ;


/*------------------------------TWEET STATEMENT-------------------------------*/

tweet : blank '{'statements '}' blank 
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
};

statements : statement | statement','statements;

statement : | id_str | created_at | user | place | entities | text_statement
| ext_tweet_stms;

/*---------------------------ID_STR STATEMENT------------------------------*/

id_str : blank'"'ID_STR '"'blank ':' blank '"'NUMBER'"'blank
{
  counterOfPrograms++;
  j=0;
  possible_dublicate_id_str_as_number = atoi($9);

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
};

/*---------------------------CREATED AT STATEMENT----------------------------*/

created_at : blank'"'CREATED'"'blank':'blank'"'DATE'"'blank 
{
  created_atExists=true;
} ;


/*----------------------------USER STATEMENT---------------------------------*/


user : blank '"' USER '"' blank ':' blank '{' user_statements '}'blank
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
};

user_statements : user_statement | user_statement ',' user_statements;

user_statement : blank | user_id_stm | user_name_stm | user_sc_name_stm | user_location_stm | user_url_statement | user_description_stm;

user_id_stm : blank '"' ID '"' blank ':' blank NUMBER blank
{
  ++counterOfUsers; /*This will help to locate the position of storage*/
  u=0;
  possible_duplicate_user_id_as_number = atoi($8);

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
};

user_name_stm : blank '"' NAME '"' blank ':' blank '"' word_with_letters_and_spaces '"' blank 
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
};

user_sc_name_stm : blank'"'SCREEN_NAME'"'blank':'blank'"'user_sc_name '"' blank
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
};

user_sc_name : REST | HEX | REST user_sc_name | HEX user_sc_name;

user_location_stm : blank '"' LOCATION '"' blank ':' blank '"' word_with_letters_and_spaces '"' blank 
{
  if(userLocationFound)
  {
    printf("Warning! In line %d detected duplicate \"screen_name\" field for user struct. \n",yylineno);
    userLocationFound=false;
  }
  else userLocationFound=true;
};

user_url_statement :blank '"' URL '"' blank ':' blank '"' URL_BEGIN ':' url_body '"'blank;


url_body : USER | URL | ID | PLACE | REST | HEX | URL_SYMBOL | NUMBER | NAME | CREATED | LOCATION | COUNTRY | DESCRIPTION | FLOAT_NUMBER
| USER url_body | URL url_body | ID url_body | PLACE url_body | REST url_body | HEX url_body | URL_SYMBOL url_body | NUMBER url_body | NAME url_body | CREATED url_body | LOCATION url_body | COUNTRY url_body | DESCRIPTION url_body | FLOAT_NUMBER url_body;

user_description_stm : blank '"' DESCRIPTION'"' blank ':' blank '"'text '"' blank {string_length=0;};


/*-------------------------------PLACE STATEMENT------------------------------*/


place : blank '"' PLACE '"' blank ':' blank '{' place_statements'}' blank;

place_statements : place_statement | place_statement','place_statements;

place_statement : blank | place_id | user_url_statement | place_type_field_stm |place_full_name | place_country_statement | place_bounding_box_statement;


/*1-Place ID field*/

place_id : blank '"' ID '"' blank ':' blank '"' place_hex_id '"' blank;

place_hex_id : HEX | NUMBER | HEX place_hex_id | NUMBER place_hex_id;


/*2-Place type e.g. "city,village..."*/

place_type_field_stm : blank '"' PLACE_TYPE '"' blank ':' blank '"' place_type_field '"' blank;

place_type_field : HEX | REST | HEX place_type_field | REST place_type_field;

/*3-full name statement*/

place_full_name : blank'"' FULL_NAME '"'blank ':'blank '"'full_name_stm'"' blank ;

full_name_stm : SPACE | REST | HEX | ',' | SPACE full_name_stm | REST full_name_stm | ',' full_name_stm | HEX full_name_stm;

/*Place country statement*/

place_country_statement : blank'"'COUNTRY'"'blank':'blank'"' word_with_letters_and_spaces '"'blank;

/*Place bounding Box statement that identifies*/
place_bounding_box_statement : blank '"'BOUNDING_BOX'"'blank':'blank '{' bounding_box_statement '}'blank;

bounding_box_statement :
/*Syntax for a polygon bounding box statement*/ 
blank '"' TYPE '"' blank ':' blank '"' POLYGON'"'blank','
blank '"' COORDINATES '"' blank ':' blank '['
blank '['blank FLOAT_NUMBER blank ',' blank FLOAT_NUMBER blank ']' blank ','
blank '['blank FLOAT_NUMBER blank ',' blank FLOAT_NUMBER blank ']' blank ','
blank '['blank FLOAT_NUMBER blank ',' blank FLOAT_NUMBER blank ']' blank ','
blank '['blank FLOAT_NUMBER blank ',' blank FLOAT_NUMBER blank ']' blank ']' blank {}
|/*Syntax for a line bounding box statement*/
blank '"' TYPE '"' blank ':' blank '"' LINE'"'blank','
blank '"' COORDINATES '"' blank ':' blank '['
blank '['blank FLOAT_NUMBER blank ',' blank FLOAT_NUMBER blank ']' blank ','
blank '['blank FLOAT_NUMBER blank ',' blank FLOAT_NUMBER blank ']' blank ']' blank {}
|/*Syntax for a point bounding box statement*/
blank '"' TYPE '"' blank ':' blank '"' POINT'"'blank','
blank '"' COORDINATES '"' blank ':' blank 
'[' blank FLOAT_NUMBER blank ',' blank FLOAT_NUMBER blank ']' blank {}
| blank {printf("A blank Bounding box located in line %d.\n",yylineno);};


/*------------------------------ENTITIES STATEMENT----------------------------*/


entities : blank '"' ENTITIES '"'blank ':' blank '{'entities_statements'}'blank;

entities_statements : entities_statement | entities_statement','entities_statements;

entities_statement : blank | hashtags_stm | entities_url_section | user_mentions_section;

/*1)-------HASHTAGS------------*/

hashtags_stm : blank '"' HASHTAGS '"' blank ':' blank '[' hashtags_struct ']' blank;

hashtags_struct : blank | hashtag_word | hashtag_word ','hashtags_struct;

hashtag_word : blank '{' indices_statement ','hashtag_word_text_stm'}'blank;

indices_statement : blank '"' INDICES '"'blank ':'blank '['blank NUMBER blank','blank NUMBER blank ']'blank;


hashtag_word_text_stm : blank '"'TEXT'"'blank':'blank '"' word_with_letters_and_numbers '"' blank ;

/*2)---------URLS--------------*/

entities_url_section : blank '"' URLS '"' blank ':' blank '['entities_url_statements ']' blank;

/*There can be many structs {} inside 
entities url section but must be separated by comma*/
entities_url_statements : blank | blank '{' entity_url_statement '}' blank | blank '{' entity_url_statement '}'blank ','entities_url_statements;

entity_url_statement : user_url_statement | blank '"' word_with_letters_and_numbers '"' blank ':'blank
'{' user_url_statement ',' blank '"'TITLE '"' blank ':'blank '"' text '"'blank '}' blank
{string_length=0;};

/*3)-----------User Mentions----------*/

user_mentions_section : blank '"' USER_MENTIONS '"' blank ':' blank'['all_mentions']'blank;

all_mentions : blank '{' mentioned_user_statements '}' blank 
| blank '{' mentioned_user_statements '}' blank','all_mentions;


mentioned_user_statements :  mentioned_user | mentioned_user','mentioned_user_statements | blank ;


mentioned_user : mentioned_user_id | mentioned_user_id_str | indices_statement | mentioned_user_name_stm | mentioned_user_sc_name_stm ;


mentioned_user_id : blank '"' ID '"' blank ':' blank NUMBER blank
{};

mentioned_user_name_stm : blank '"' NAME '"' blank ':' blank '"'word_with_letters_and_spaces '"' blank {};

mentioned_user_sc_name_stm : blank'"'SCREEN_NAME'"'blank':'blank'"'user_sc_name '"' blank { };;

mentioned_user_id_str : blank'"'ID_STR '"'blank ':' blank '"'NUMBER'"'blank
{};


/*------------------------------TEXT STATEMENT--------------------------------*/


text_statement : blank '"' TEXT'"' blank ':' blank '"' text '"'blank
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
};

/*Subquery 2*/
/*------------------------------RETWEET STATEMENT-----------------------------*/


retweet : blank '{' retweet_stms '}' blank
{
retweetStatementCounter++;
string_length=0;
printf("End of retweet #%d in line %d\n\n\n",retweetStatementCounter,yylineno);
};

retweet_stms : retweet_stm | retweet_stm','retweet_stms;

retweet_stm : tweet_declaration | retweet_status_stm;

tweet_declaration : blank '"' TWEET '"' blank ':' blank '{' tweet_dec_stms '}' blank { };

tweet_dec_stms : tweet_dec_stm | tweet_dec_stm','tweet_dec_stms;

tweet_dec_stm : retweet_text_stm | retweet_user_stm ;


/*-----------------------(RETWEET)TEXT INSIDE TWEET STRUCT--------------------*/


retweet_text_stm : blank'"'TEXT'"'blank ':' blank '"' retweeted_text '"' blank
{};


retweeted_text : RT word_with_letters_and_numbers SPACE text;

/*--------------------------RETWEET USER STATEMENT----------------------------*/


retweet_user_stm : blank '"' USER '"' blank ':' blank '{' blank '"' SCREEN_NAME '"' blank ':' blank '"' word_with_letters_and_numbers '"' blank '}' blank ;


/*--------------------------RETWEET STATUS STATEMENT--------------------------*/


retweet_status_stm : blank '"' RETSTATUS '"' blank ':' blank '{' retweet_status_declarations '}' blank;

retweet_status_declarations : retweet_status_declaration
                    | retweet_status_declaration','retweet_status_declarations;

retweet_status_declaration : text_statement | retweet_user_stm | entities | place ;



/*-------------------------------EXTENDED TWEET------------------------------*/



ext_tweet_stms : display_text_range_stm | truncated_stm | extended_tweet_stm;

display_text_range_stm : blank '"' DIS_TEXT_R '"' blank ':' blank '[' blank NUMBER blank ',' blank NUMBER blank ']' blank
{
   lowestLimitForExtTweet=atoi($10);
   highestLimitForExtTweet=atoi($14);
   if (lowestLimitForExtTweet==0 && highestLimitForExtTweet <=140 && highestLimitForExtTweet>0)
   {
      displayTextRangeExists=true;
   }
   else
      printf("Error!Truncated text length is not valid in line %d.\nInsert a number from 1 to 140 to specify the character length of preview text of extended tweet\n",yylineno);
};

truncated_stm : blank '"' TRUNCATED '"' blank ':' blank TRU blank
{
  truncatedExists=true;
};


extended_tweet_stm : blank '"' EXT_TWEET '"'blank ':' blank '{' extended_tweet_field_stms '}' blank;

extended_tweet_field_stms : extended_tweet_field_stm
			 | extended_tweet_field_stm','extended_tweet_field_stms;



extended_tweet_field_stm : extended_full_text_stm | extended_display_range_stm | entities;

extended_full_text_stm : blank '"'FULL_TEXT '"' blank ':' blank '"' text '"' blank
{
   if(string_length>140)
      fullTextStmInExtendedTweetExists=true;
   else
      printf("Error in line %d Full text statement is not necessary\n\n",yylineno);
};

extended_display_range_stm : blank '"' DIS_TEXT_R '"' blank ':' blank '[' blank NUMBER blank ',' blank NUMBER blank ']' blank
{
   lowestLimitForExtTweetField=atoi($10);
   highestLimitForExtTweetField=atoi($14);
   if (lowestLimitForExtTweetField==0 && highestLimitForExtTweetField >140)
   {
      displayTextRangeInExtendedExists=true;
   }
   else
      printf("Error in line %d\nDisplay Text Range is not set up properly.Set 0 and a number greater than 140.\n",yylineno);
};



/*-----------------------------USEFULL PRODUCTIONS----------------------------*/


word_with_letters_and_numbers : REST
| HEX 
| NUMBER 
| REST word_with_letters_and_numbers 
| HEX word_with_letters_and_numbers 
| NUMBER word_with_letters_and_numbers 
;

text : HEX {string_length=string_length+strlen($1);}
| REST  {string_length=string_length+strlen($1);}
| NUMBER {string_length=string_length+strlen($1);}
| ARITHMETIC_OP {string_length=string_length+strlen($1);}
| URL_SYMBOL {string_length=string_length+strlen($1);}
| OTHER_SYMBOL {string_length=string_length+strlen($1);}
| ':' {string_length = string_length + 1;} 
| SPACE {string_length=string_length+strlen($1);}
| NEWLINE {string_length=string_length+strlen($1);}
| ',' {string_length = string_length + 1;} 
| '.' {string_length = string_length + 1;} 
| '}' {string_length = string_length + 1;}
| '{' {string_length = string_length + 1;}
| INDICES {string_length=string_length+strlen($1);}
| PLACE {string_length=string_length+strlen($1);}
| SCREEN_NAME {string_length=string_length+strlen($1);}
| NAME {string_length=string_length+strlen($1);}
| ID {string_length=string_length+strlen($1);}
| DATE {string_length=string_length+strlen($1);}
| CREATED {string_length=string_length+strlen($1);}
| USER_MENTIONS {string_length=string_length+strlen($1);}
| USER  {string_length=string_length+strlen($1);}
| ID_STR {string_length=string_length+strlen($1);} 
| LOCATION {string_length=string_length+strlen($1);}
| URL {string_length=string_length+strlen($1);}
| URLS {string_length=string_length+strlen($1);}
| TITLE {string_length=string_length+strlen($1);}
| COORDINATES {string_length=string_length+strlen($1);}
| COUNTRY {string_length=string_length+strlen($1);}
| TEXT {string_length=string_length+strlen($1);}
| ENTITIES {string_length=string_length+strlen($1);}
| HASHTAGS {string_length=string_length+strlen($1);}
| URL_BEGIN {string_length=string_length+strlen($1);}
| DESCRIPTION {string_length=string_length+strlen($1);}
| PLACE_TYPE {string_length=string_length+strlen($1);}
| FULL_NAME {string_length=string_length+strlen($1);}
| BOUNDING_BOX {string_length=string_length+strlen($1);}
| TYPE {string_length=string_length+strlen($1);}
| POLYGON {string_length=string_length+strlen($1);}
| LINE {string_length=string_length+strlen($1);}
| POINT {string_length=string_length+strlen($1);}
| FLOAT_NUMBER {string_length=string_length+strlen($1);}
| '['{string_length = string_length + 1;} 
| ']'{string_length = string_length + 1;}
| TWEET {string_length=string_length+strlen($1);}
| RT {string_length=string_length+strlen($1);}
| HEX text {string_length=string_length+strlen($1);}
| REST text {string_length=string_length+strlen($1);}
| NUMBER text {string_length=string_length+strlen($1);}
| ARITHMETIC_OP text {string_length=string_length+strlen($1);}
| URL_SYMBOL text {string_length=string_length+strlen($1);}
| OTHER_SYMBOL text {string_length=string_length+strlen($1);}
| ':' text {string_length = string_length + 1;}
| SPACE text {string_length=string_length+strlen($1);}
| NEWLINE text {string_length=string_length+strlen($1);}
| ',' text {string_length = string_length + 1;}
| '.' text {string_length = string_length + 1;} 
| '}' text {string_length = string_length + 1;}
| '{' text {string_length = string_length + 1;} 
| INDICES text {string_length=string_length+strlen($1);}
| PLACE text {string_length=string_length+strlen($1);}
| SCREEN_NAME text {string_length=string_length+strlen($1);}
| NAME text {string_length=string_length+strlen($1);}
| ID text {string_length=string_length+strlen($1);}
| DATE text {string_length=string_length+strlen($1);}
| CREATED text {string_length=string_length+strlen($1);}
| USER_MENTIONS text {string_length=string_length+strlen($1);}
| USER text {string_length=string_length+strlen($1);}
| ID_STR text {string_length=string_length+strlen($1);}
| LOCATION text {string_length=string_length+strlen($1);}
| URL text {string_length=string_length+strlen($1);}
| URLS text {string_length=string_length+strlen($1);}
| TITLE text {string_length=string_length+strlen($1);}
| COORDINATES text {string_length=string_length+strlen($1);}
| COUNTRY text {string_length=string_length+strlen($1);}
| TEXT text {string_length=string_length+strlen($1);}
| ENTITIES text {string_length=string_length+strlen($1);}
| HASHTAGS text {string_length=string_length+strlen($1);}
| URL_BEGIN text {string_length=string_length+strlen($1);}
| DESCRIPTION text {string_length=string_length+strlen($1);}
| PLACE_TYPE text {string_length=string_length+strlen($1);}
| FULL_NAME text {string_length=string_length+strlen($1);}
| BOUNDING_BOX text {string_length=string_length+strlen($1);}
| TYPE text {string_length=string_length+strlen($1);}
| POLYGON text {string_length=string_length+strlen($1);}
| LINE text {string_length=string_length+strlen($1);}
| POINT text {string_length=string_length+strlen($1);}
| FLOAT_NUMBER text {string_length=string_length+strlen($1);}
| TWEET text {string_length=string_length+strlen($1);}
| RT text {string_length=string_length+strlen($1);}
| '[' text {string_length = string_length + 1;} 
| ']' text {string_length = string_length + 1;};

word_with_letters_and_spaces : REST | HEX | SPACE 
                               | REST word_with_letters_and_spaces 
                               | SPACE word_with_letters_and_spaces 
                               | HEX word_with_letters_and_spaces ;


blank : {} | SPACE blank | NEWLINE blank ;
%%



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
