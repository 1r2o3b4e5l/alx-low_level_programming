#include <stdio.h>
/**
*print_to_98 - prints all natural numbers from n to 98
*Description: This function takes an integer n as a parameter and uses a loop
* to print all natural numbers from n to 98, separated by a comma and a space.
* If n is greater than 98, it prints in decreasing order. If n is less than or
* equal to 98, it prints in increasing order. It ends with a new line.
* @n: the integer parameter
*
* Return: nothing
*/
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
printf(", ");
}
}
else
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
printf(", ");
}
}
printf("\n");
}
