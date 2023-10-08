#include <stdio.h>
/**
 * main -prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
putchar(i + '0');
putchar(j + '0');
putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}
