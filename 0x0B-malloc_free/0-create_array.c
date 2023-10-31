#include "main.h"
#include <stdlib.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* create_array - creates an array of chars and initializes it with
* a specific char
* @size: size of array
* @c: character to initialize array with
*
* Return: pointer to array or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
unsigned int a = 0;
char *str;
if (size == 0)
return (NULL);
str = malloc(sizeof(char) * size);
if (str == NULL)
return (NULL);
while (a < size)
{
str[a] = c;
a++;
}
return (str);
}
