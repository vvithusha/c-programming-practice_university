#include <stdio.h>

int main()
{
   int index, num;
   double harmonic = 0;

   printf("Enter the number: ");
   scanf("%d", &num);

   for(index = 1; index <= num; index++)
   {
       harmonic = harmonic + 1.0 / index;
   }

   printf("Harmonic series total is %.4f\n", harmonic);

   return 0;
}

