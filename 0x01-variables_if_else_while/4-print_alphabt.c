#include <stdio.h>
/**
 * main -prints the alphabet in lowercase
 * followed by a new line.
 *
 * Return: 0 Always (success)
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
char c = 'a';

while (c <= 'z')
{
if (c != 'e' && c != 'q')
putchar(c);
c++;
}
putchar('\n');
return (0);
}
