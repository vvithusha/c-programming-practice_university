#include <stdio.h>

int main()
{
    float num[10];
    int index;
    double average, total = 0;

    printf("Enter the ten numbers:\n");

    for(index = 0; index < 10; index++)
    { 
        scanf("%f", &num[index]);
        total = total + num[index]; 
    }

    average = total / 10;

    printf("total = %6.2f\n", total);
    printf("average = %6.2f\n", average);

    return 0;
}

