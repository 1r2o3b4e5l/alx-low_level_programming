#include <stdio.h>
/**
 * main -prints the lowercase alphabet in reverse
 * followed by a new line.
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	char low;
         for(low='z'; low>='a'; low--)
	   putchar(low);
	   putchar('\n')
         return (0);
}
