#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase
 */
/* more headers goes there */

/* betty style doc for function main goes there */
void print_alphabet_x10(void)
{
int i;
char c;

for (i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
