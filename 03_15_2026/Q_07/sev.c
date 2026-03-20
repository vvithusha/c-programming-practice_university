#include <stdio.h>

int main()
{
    int i, j;
    int fact;

    printf("Number Factorial\n");

    for(i = 1; i <= 10; i++)
    {
        fact = 1;

        for(j = 1; j <= i; j++)
        {
            fact = fact * j;
        }

        printf("%2d %6d\n", i, fact);
    } 

    return 0;
}

