#include "main.h"
#include <stdlib.h>
#include <string.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*strtow - splits a stirng into words
*@str: string to be splitted
*
*Return: pointer to the array of splitted words
*/
int count_words(char *str);
char **strtow(char *str);
/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
int count = 0;
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
count++;
}
return (count);
}
/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL if str is NULL
 * or str is an empty string, or if the function fails.
 */
char **strtow(char *str)
{
char **words;
int word_count, word_length, i, j, k;
if (str == NULL || str[0] == '\0')
return (NULL);
word_count = count_words(str);
if (word_count == 0)
return (NULL);
words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
i = 0;
j = 0;
while (str[i] != '\0')
{
if (str[i] != ' ')
{
word_length = 0;
k = i;
while (str[k] != ' ' && str[k] != '\0')
{
word_length++;
k++;
}
words[j] = malloc((word_length + 1) * sizeof(char));
if (words[j] == NULL)
{
for (k = 0; k < j; k++)
free(words[k]);
free(words);
return (NULL);
}
strncpy(words[j], &str[i], word_length);
words[j][word_length] = '\0';
j++;
i += word_length;
}
else
{
i++;
}
}
words[j] = NULL;
return (words);
}

