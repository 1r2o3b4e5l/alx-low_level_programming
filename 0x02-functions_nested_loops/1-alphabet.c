#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 */
/* more headers goes there */

/* betty style doc for function main goes there */
void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}

_putchar('\n');
}
