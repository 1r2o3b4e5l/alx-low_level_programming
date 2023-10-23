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
unsigned int _strspn(char *s, char *accept)
{
unsigned int i;
i = strspn(s, accept);
return (i);
}
