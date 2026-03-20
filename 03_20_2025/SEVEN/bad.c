#include <stdio.h>
int  main()
{
   int bad_count[11],response,index;

   for(index=1 ; index<=10 ; index++)
      bad_count[index] = 0; 
   
   printf("Enter your response : \n");
   for(index=1 ; index<=10 ; index++)
   {
      scanf("%i",&response);
      if(response<= 1 || response>=10)
          ++bad_count[index];
      else 
           printf("good response\n");
   }     
   printf("response table total \n ----------------------\n");
   for(index=1; index<=10; index++)
   {
      printf("%4i%4i\n",index,bad_count[index]);


   }
   return 0;
}

