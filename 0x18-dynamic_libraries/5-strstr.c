#include "main.h"
#include <stdio.h>
#include <string.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _strstr - locates a substring
 * @haystack: string pointer
 * @needle: string
 *
 * Return: pointer to located string
 */
char *_strstr(char *haystack, char *needle)
{
char *t;
t = strstr(haystack, needle);
return (t);
}
