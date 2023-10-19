#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * leet - Encodes a string to 1337.
 * @i: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *i)
{
int indx1 = 0, indx2;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
while (i[indx1])
{
for (indx2 = 0; indx2 <= 7; indx2++)
{
if (i[indx1] == leet[indx2] ||
i[indx1] - 32 == leet[indx2])
i[indx1] = indx2 + '0';
}
indx1++;
}
return (i);
}
