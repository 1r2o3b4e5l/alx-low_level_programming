#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
unsigned int num;
/*check if number is negative*/
num = n;
if (n < 0)
{
_putchar(45);
num = -n;
}
/* print number by recursion*/
if (num / 10)
{
print_number(num / 10);
}
_putchar((num % 10) + '0');
}
