#include <stdio.h>
int main()
{
    int x =1;
    while(1)
    {
        printf("%i",x);
        if(x==5)
           break;

        x +=1;
    }
    return 0;
}
