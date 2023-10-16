#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_rev - imprime en reversa
 * @s: string
 */
void print_rev(char *s)
{
int longi = 0;
int o;
while (*s != '\0')
{
longi++;
s++;
}
s--;
for (o = longi; o > 0; o--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
