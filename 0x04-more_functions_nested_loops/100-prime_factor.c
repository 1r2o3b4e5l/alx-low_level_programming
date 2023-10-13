#include <stdio.h>

/**
 * largest_prime_factor - finds the largest prime factor of a number
 * @num: the number
 * Return: the largest prime factor
 */
long largest_prime_factor(long num)
{
long i;
while (num % 2 == 0)
{
num /= 2;
}
for (i = 3; i <= num; i += 2)
{
while (num % i == 0)
{
num /= i;
}
}
return (i - 2);
}

