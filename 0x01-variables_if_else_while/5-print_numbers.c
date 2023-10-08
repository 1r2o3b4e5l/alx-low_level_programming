#include <stdio.h>
/**
 * main -pints all single digit numbers of base 10 starting from 0
 * followed by a new line
 *
 * Return: 0 Always (success)
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int number = 0;

while (number < 10)
{
printf("%d", number);
number++;
}

printf("\n");

return ('0');

} 
