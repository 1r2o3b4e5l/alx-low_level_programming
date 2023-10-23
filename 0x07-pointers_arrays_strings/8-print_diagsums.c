#include <stdio.h>
#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_diagsums - print sum of diagonal matrix
 * @a: pointer to multidimensional array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
int idx, ds1, ds2;
for (idx = 0, ds1 = 0; idx < (size * size) ; idx += size + 1)
ds1 += a[idx];
for (idx = size - 1, ds2 = 0; idx <= (size * size) - 2; idx += size - 1)
ds2 = ds2 + a[idx];
printf("%d, %d\n", ds1, ds2);
}
