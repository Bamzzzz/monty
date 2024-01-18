#include <stdlib.h>

char *get_next_word(char *str, char *delims);
char **strtow(char *str, char *delims);
int is_delim(char ch, char *delims);
int get_word_length(char *str, char *delims);
int get_word_count(char *str, char *delims);

/**
 * get_next_word - get the next word in a string
 * @str: string
 * @delims: delimiters
 * Return: pointer to first char of next word
 */
char *get_next_word(char *str, char *delims)
{
int pending = 0;
int i = 0;

while (*(str + i))
{
if (is_delim(str[i], delims))
pending = 1;
else if (pending)
break;
i++;
}
return (str + i);
}

/**
 * strtow - the strings seperates words
 * @str: string
 * @delims: delimiters
 * Return: return array
 */
char **strtow(char *str, char *delims)
{
char **words = NULL;
int wc, wordLen, n, i = 0;

if (str == NULL || !*str)
return (NULL);
wc = get_word_count(str, delims);

if (wc == 0)
return (NULL);
words = malloc((wc + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
while (i < wc)
{
wordLen = get_word_length(str, delims);
if (is_delim(*str, delims))
{
str = get_next_word(str, delims);
}
words[i] = malloc((wordLen + 1) * sizeof(char));
if (words[i] == NULL)
{
while (i >= 0)
{
i--;
free(words[i]);
}
free(words);
return (NULL);
}
n = 0;
while (n < wordLen)
{
words[i][n] = *(str + n);
n++;
}
words[i][n] = '\0';
str = get_next_word(str, delims);
i++;
}
words[i] = NULL;
return (words);
}

/**
 * is_delim - checking for delim char
 * @ch: character
 * @delims: delimeter
 * Return: 1 (success) 0 (failure)
 */
int is_delim(char ch, char *delims)
{
int i = 0;

while (delims[i])
{
if (delims[i] == ch)
return (1);
i++;
}
return (0);
}

/**
 * get_word_length - gets the word length
 * @str: string
 * @delims: delimiters
 * Return: return word length
 */

int get_word_length(char *str, char *delims)
{
int wLen = 0, pending = 1, i = 0;

while (*(str + i))
{
if (is_delim(str[i], delims))
pending = 1;
else if (pending)
{
wLen++;
}
if (wLen > 0 && is_delim(str[i], delims))
break;
i++;
}
return (wLen);
}

/**
 * get_word_count - get the word count of a string
 * @str: string
 * @delims: delimiter
 * Return: return string
 */
int get_word_count(char *str, char *delims)
{
int wc = 0, pending = 1, i = 0;

while (*(str + i))
{
if (is_delim(str[i], delims))
pending = 1;
else if (pending)
{
pending = 0;
wc++;
}
i++;
}
return (wc);
}
