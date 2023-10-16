#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * swap_int - swap the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
