#include <stdio.h>
int main()
{
    int n , number ,t_num;

    printf("Enter what triangular number you want:");
    scanf("%i",&number);
    t_num = 0;
    for(n =1; n<=number ;n++)
    {
        t_num += n;
        //printf("%i ",t_num);
        printf("\n%i triangular number is : %i",n,t_num);
    }
        return 0;
}