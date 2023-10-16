#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
int len, i;
len = 0;
while (str[len] != '\0')
{
len++;
}
for (i = 0; i < len; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
