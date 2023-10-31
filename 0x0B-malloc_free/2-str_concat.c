#include "main.h"
#include <stdlib.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* str_concat - concatenates two strings
* @s1: string to be concatenated to
* @s2: string to add to s1
*
* Return: returns pointer to combo of s1 and s2
*/
char *str_concat(char *s1, char *s2)
{
char *res;
unsigned int a = 0, b = 0, sizes1 = 0, sizes2 = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[sizes1] != '\0')
sizes1++;
while (s2[sizes2] != '\0')
sizes2++;
res = malloc(sizeof(char) * (sizes1 + sizes2 + 1));
if (res == NULL)
return (NULL);
while (a < sizes1)
{
res[a] = s1[a];
a++;
}
while (b < sizes2)
{
res[a] = s2[b];
a++;
b++;
}
res[a] = '\0';
return (res);
}
