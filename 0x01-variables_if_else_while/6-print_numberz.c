#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -prints all single digit numbers of base 10 starting from 0
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int number = 0;

while (number < 10)
{
putchar(number + '0');
number++;
}

putchar('\n');

return (0);
}
