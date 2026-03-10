#include <stdio.h>
int main()
{
    int a,b,c;
  
    printf("Enter the side A value :");
    scanf("%i",&a);
    printf("Enter the side A value :");
    scanf("%i",&b);
    printf("Enter the side A value :");
    scanf("%i",&c);

    if (a == b && b == c && a==c)  
    {
        printf("Equilateral.");
    }
    else if(a == b || b == c || a==c)
    {
        printf("Isosceles.");
    }
    else
    {
        printf("Scalene.");
    }
   
  

    return 0;

}