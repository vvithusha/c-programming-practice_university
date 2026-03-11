#include <stdio.h>
int main()
{
    int n, number, triangularnumber;
    printf("What triangular number do you want?");
    scanf("%i", &number);
    
    triangularnumber = 0;
    for(n = 1; n<=number ; ++n)
    triangularnumber +=n;
    printf("triangulart number %i is %i\n",number , triangularnumber);
    return 0;
}