#include <stdio.h>
int main()
{
    float E_unit , total , surcharge , total_bill;

    printf("Enter your electricity unit:");
    scanf("%f",&E_unit);

    if(E_unit <= 50)
    {
        total = E_unit * 0.50;
    }
    else if(E_unit <=150)
    {
        total = (50 * 0.50) + (E_unit - 50) * 0.75;
    }
    else if(E_unit <= 250)
    {
        total = (50 * 0.50) +(100 * 0.75) + (E_unit - 150) * 1.20;
    }
    else if(E_unit >250)
    {
        total = (50 * 0.50) +(100 * 0.75) + (100 * 1.20) + (E_unit - 250) * 1.50;
    }
    else
    {
        printf("Invelid input");
    }
      
    surcharge = E_unit * 0.20;
    total_bill = E_unit + surcharge;

    printf("Total electricity bill : %.2f.\n",total_bill);

    return 0;
}