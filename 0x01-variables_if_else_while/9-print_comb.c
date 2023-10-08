#include <stdio.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (success)
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int i;
int j;
int k;

i = 0;
while (i <= 9)
{
j = i + 1;
while (j <= 9)
{
k = j + 1;
while (k <= 9)
{
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i != 7 || j != 8 || k != 9)
{
putchar(',');
putchar(' ');
}
k++;
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
