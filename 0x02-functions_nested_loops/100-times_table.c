#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number of times to print the table
 */
void print_times_table(int n)
{
int i, j;
if (n < 0 || n > 15)
return;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int result = i * j;
if (j == 0)
_putchar('0');
else
{
_putchar(',');
_putchar(' ');
if (result < 10)
_putchar(' ');
if (result < 100)
_putchar(' ');
if (result >= 100)
{
_putchar((result / 100) + '0');
_putchar(((result / 10) % 10) + '0');
}
else if (result >= 10)
{
_putchar((result / 10) + '0');
}
_putchar((result % 10) + '0');
}
}
_putchar('\n');
}
}

