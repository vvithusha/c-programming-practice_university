#include <stdio.h>
int main()
{
    int x,y;
    for(x=1 , y=100; x<=10, y>=50; x++ ,y=y-10)
    {
        printf("%i : %i = %i\n",x , y, x*y);
    }
    return 0;
}