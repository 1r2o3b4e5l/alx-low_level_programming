#include <stdio.h>
/**
 * main -prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int num = 0;

while (num <= 9)
{
putchar(num + '0');
if (num != 9)
{
putchar(',');
putchar(' ');
}
num++;
}

putchar('\n');

return (0);
}

