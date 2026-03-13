#include <stdio.h>
int main()
{
    float large_num;
    float first ,secound ,third;

    printf("Enter first number:");
    scanf("%f",&first);
    
    printf("Enter secound number:");
    scanf("%f",&secound);

    printf("Enter thirt number:");
    scanf("%f",&third);

    large_num = (first>secound && first>third ? first:(secound>first && secound>third)? secound:third);

    printf("Large number : %.2f\n",large_num);

    return 0;
}