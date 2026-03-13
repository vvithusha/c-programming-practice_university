#include <stdio.h>
int main()
{
    int u,v,temp;
    printf("please type in two nonnegative integer.\n");
    scanf("%i %i", &u , &v);
    while(v != 0 )
    {
        temp = u % v;
        u = v;
        v =temp;

    }
    printf("Their greatest common divisor is %i\n",u);
    return 0;
}