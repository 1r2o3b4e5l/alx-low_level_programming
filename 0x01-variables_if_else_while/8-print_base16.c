#include <stdio.h>
/**
 * main -prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int num = 0;

while (num <= 15)
{
if (num < 10)
{
putchar(num + '0');
}
else
{
putchar(num - 10 + 'a');
}
num++;
}

putchar('\n');

return (0);
}
