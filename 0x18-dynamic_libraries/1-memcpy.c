#include "main.h"
#include <stdio.h>
#include <string.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _memcpy - prints buffer in hexa
 * @dest: memory area
 * @src: constant byte
 * @n: the size of the memory to print
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *p = dest;
for (; n; n--)
*p++ = *src++;
return (dest);
}
