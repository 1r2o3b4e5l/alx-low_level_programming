#include "main.h"
#include <stdio.h>
#include <string.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string
 * @accept: pointer to string
 *
 * Return: ponter byte in s that matches accept
 */
char *_strpbrk(char *s, char *accept)
{
int idx;
for (; *s; s++)
for (idx = 0; *(accept + idx); idx++)
if (*s == *(accept + idx))
return (s);
return (0);
}
