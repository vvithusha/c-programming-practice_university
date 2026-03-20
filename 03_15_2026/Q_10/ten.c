#include <stdio.h>

int main()
{
    int i;
    float units, bill, total;

    for(i = 1; i <= 20; i++)
    {
        printf("\nEnter electricity units for House %d: ", i);
        scanf("%f", &units);

        if(units <= 50)
            bill = units * 0.50;

        else if(units <= 150)
            bill = (50 * 0.50) + (units - 50) * 0.75;

        else if(units <= 250)
            bill = (50 * 0.50) + (100 * 0.75) + (units - 150) * 1.20;

        else
            bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + (units - 250) * 1.50;

        total = bill + (bill * 0.20);

        printf("Electricity Bill for House %d = Rs. %.2f\n", i, total);
    }

    return 0;
}

