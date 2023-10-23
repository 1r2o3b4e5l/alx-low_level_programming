#include "main.h"
#include <stdio.h>
#include <string.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _strspn - check the code
 *
 * @s: bytes from accept
 * @accept: pointer
 *
 * Return: Always n.
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
return (s);
return (0);
}
/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string to be scanned
 * @accept: the string containing the list of characters to match in s.
 * Return: the number of bytes in the initial segment of s,
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int ctr = 0;
while (*(s + ctr))
if (_strchr(accept, *(s + ctr)))
ctr++;
else
break;
return (ctr);
}
