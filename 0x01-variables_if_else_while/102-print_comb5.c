#include <stdio.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (success)
 */

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int a;
int b;

for (a = 0; a <= 98; a++)
{
for (b = a + 1; b <= 99; b++)
{
putchar((a / 10) + '0');
putchar((a % 10) + '0');
putchar(' ');
putchar((b / 10) + '0');
putchar((b % 10) + '0');
if (a != 98 || b != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
