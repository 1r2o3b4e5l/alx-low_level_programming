#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main -prints all single digit numbers of base 10 starting from 0
 * followed by a new line.
 *
 * Return:Always (0) success
 */

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
