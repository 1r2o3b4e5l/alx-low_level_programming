#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * rot13 - Encodes a string using rot13.
 * @i: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *i)
{
int indx1 = 0, indx2;
char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F',
'G', 'H', 'I', 'J', 'K', 'L',
'M', 'N', 'O', 'P', 'Q', 'R',
'S', 'T', 'U', 'V', 'W', 'X',
'Y', 'Z', 'a', 'b', 'c', 'd',
'e', 'f', 'g', 'h', 'i', 'j',
'k', 'l', 'm', 'n', 'o', 'p',
'q', 'r', 's', 't', 'u', 'v',
'w', 'x', 'y', 'z'};
char rot13key[52] = {'N', 'O', 'P', 'Q', 'R', 'S',
'T', 'U', 'V', 'W', 'X', 'Y',
'Z', 'A', 'B', 'C', 'D', 'E',
'F', 'G', 'H', 'I', 'J', 'K',
'L', 'M', 'n', 'o', 'p', 'q',
'r', 's', 't', 'u', 'v', 'w',
'x', 'y', 'z', 'a', 'b', 'c',
'd', 'e', 'f', 'g', 'h', 'i',
'j', 'k', 'l', 'm'};
while (i[indx1])
{
for (indx2 = 0; indx2 < 52; indx2++)
{
if (i[indx1] == alphabet[indx2])
{
i[indx1] = rot13key[indx2];
break;
}
}
indx1++;
}
return (i);
}
