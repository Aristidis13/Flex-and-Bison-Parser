# Flex-and-Bison-Parser
This parser performs lexicological and syntactic analysis in JSON files that contain tweets.

Flex is used as a lexicological analyser.
Bison is used for syntactic analysis.

There can be 3 types of input separated with comma:
1)Tweet
2)Retweet (contains less fields than tweet)
3) Extended Tweet (contains more than 140 characters in text element).

In folder tests there are tests for testing the parser.

The restrictions were these:
- text element must be up to 140 characters.
- user element must contain ONLY 1 id as unique positive integer and name, screen_name and location as strings.
- created_at must be "Day_name MMM DD XX:XX:XX +NNNN YYYY" for example: 'Thu Apr 06 15:24:15 +0000 2017'
Of course every field must be checked if is in a valid value or not.
- id_str must be string and unique and the value must be a number

Also I added some restrictrions:
- id_str,user,text and created_at must exist for every tweet in the JSON file. All other fields are optional.
-Everything was created according to the JSON described in this link:
https://developer.twitter.com/en/docs/twitter-api/v1/data-dictionary/overview/geo-objects
- Retweet cannot contain created_at,text or id_str fields because it was a retweet and not a posted tweet.
-Extended tweets must have truncated as true.

Every file can contain one or multiple tweets,retweets and extended_tweets in any sequence.

# HOW TO RUN
You must install flex and bison in your ubuntu if (unlikely) you don't have them installed.
Then compile the files b.y(bison) and b.l (flex) with exactly the same order:
bison -d b.y
flex b.l
gcc lex.yy.c b.tab.c -o myparser
./myparser myfile.txt
