#include "main.h"
#include <stdlib.h>
#include <string.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
char *str;
int i, j, k;
int total_length = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
total_length += strlen(av[i]) + 1;
}
str = malloc((total_length + 1) * sizeof(char));
if (str == NULL)
return (NULL);
k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}
return (str);
}

