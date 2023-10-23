#include "main.h"
#include <stdio.h>
#include <string.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _memset - prints buffer in hexa
 * @s: the address of memory to print
 * @b: constant byte
 * @n: the size of the memory to print
 *
 * Return: pointer to memory.
 */
char *_memset(char *s, char b, unsigned int n)
{
char *p = s;
for (; n; n--)
*p++ = b;
return (s);
}
