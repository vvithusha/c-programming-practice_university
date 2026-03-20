#include <stdio.h>
int main()
{
   int fact=1,num ,i;

   printf("Enter the number :");
   scanf("%i",&num);
    
   for(i=1 ; i<=num ; i++)
   {
      fact = fact * i;  
   }

   printf("factorial of %d number is %d",num,fact);
   
   return 0;
}

