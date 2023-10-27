#include "main.h"

/**
 * _islower - Checks for lowercase character.
 * @c: The character to be checked.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
