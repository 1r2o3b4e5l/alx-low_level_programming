#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;

    srand(time(NULL));
    n = rand() % RAND_MAX;

    if (n > 0)
        printf("%d is positive\n", n);
    else if (n == 0)
        printf("%d is zero\n", n);
    else
        printf("%d is negative\n", n);

    exit (0);
}
