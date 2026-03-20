#include <stdio.h>
int main()
{ 
   int index ;
   double ot[] = {10.0,30.0,35.5,21.5,20};
   int ra[] = {10,20,30,20,10};
   double gross[5];

   for(index=0 ; index<5 ; index++)
   {
     gross[index] = ra[index] * ot[index];
     printf("gross salary:%6.2f\n",gross[index]);
 
   }
   return 0;
}

