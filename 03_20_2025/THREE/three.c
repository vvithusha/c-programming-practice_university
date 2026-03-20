#include <stdio.h>
int main()
{  
   int index;
   int abc[3];
 
   printf("before initialization\n");
   for(index=0 ;index<3 ; index++)
      printf("number : %i\n",abc[index]);
   
   printf("after initialization\n");
   printf("\n\n\n\n");
   for(index=0; index<3 ; index++)
     {
     abc[index] = index*10;
     printf("number : %i\n",abc[index]);
     }
   return 0;
}

