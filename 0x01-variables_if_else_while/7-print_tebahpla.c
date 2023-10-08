#include <stdio.h>
/**
 * main -prints the lowercase alphabet in reverse
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
char letter = 'z';

while (letter >= 'a')
{
putchar(letter);
letter--;
}

putchar('\n');

return ('0');
}
