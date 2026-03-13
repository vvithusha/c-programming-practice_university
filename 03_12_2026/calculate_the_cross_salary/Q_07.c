#include <stdio.h>
int main()
{
    float basic_salary,HRA,DA,Gross;

    printf("Enter your basic salary:");
    scanf("%f",&basic_salary);

    if (basic_salary<=10000)
    {
        HRA = basic_salary * 0.20;
        DA= basic_salary * 0.80;
    }
    else if (basic_salary<=20000)
    {
        /* code */
        HRA = basic_salary * 0.25;
        DA = basic_salary * 0.90;
    }
    else if (basic_salary>20000)
    {
        HRA = basic_salary * 0.30;
        DA = basic_salary * 0.95;
    }
     
    Gross = basic_salary + HRA +DA;

    printf("Basic salary : %.2f\n",basic_salary);
    printf("HRA : %.2f\n",HRA);
    printf("DA : %.2f\n",DA);
    printf("Gross salary : %.2f\n",Gross);

    return 0;
}