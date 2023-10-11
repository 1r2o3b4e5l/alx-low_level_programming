#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - print first 50 fibonacci
 *
 *Return:  Always 0 (Success)
 */
int main(void)
{
unsigned long e, g = 1, d = 2, sum;
float total_sum;
for (e = 0; e < 49; e++)
{
if ((d % 2 == 0) && (d <= 4000000))
{
total_Sum = total_Sum + d;
}
sum = g + d;
g = d;
d = sum;
}
printf("%ld\n", tSum);
return (0);
}
