#include <stdio.h>

int main()
{
    int index;
    double harmonic = 0;

    for(index = 1; index <= 5; index++)
        harmonic += 1.0 / index;   
    printf("Harmonic sum = %f", harmonic);

    return 0;
}

