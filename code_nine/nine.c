#include <stdio.h>
int main()
{
    int n ,t_num;
    printf("TABLE OF TRIANGULAR NUMBERS\n");
    printf("n sum from 1 to n\n");
    printf("----- -----------------\n");

    t_num =0;
    for(n = 1;n <= 10 ;++n)
    {
        t_num +=n;
        printf(" %i   :  %i\n",n,t_num);
    }
    return 0;
}