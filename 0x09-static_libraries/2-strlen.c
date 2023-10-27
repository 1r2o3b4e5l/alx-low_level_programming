#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _strlen - return the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
