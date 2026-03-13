#include <stdio.h>
int main()
{
    int n , number,triangularnumber,counter;
    for(counter = 1; counter <=5; ++counter)
    {
        printf("What triangilar number do you want?");
        scanf("%i",&number);

        triangularnumber = 0;
        for(n=1 ; n<=number; ++n)
        {
            triangularnumber += n;
        }
        printf("Triangular Number %i is %i\n\n",number,triangularnumber);
    }
    return 0;
}