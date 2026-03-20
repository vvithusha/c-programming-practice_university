#include <stdio.h>
int main()
{
  int ratecounting[11], index , response;
  /*put the 0 all the ratecounter*/
  for(index = 1; index <= 10 ; index++)
  {
     ratecounting[index]=0;

  }
  /*get the response from user*/
  printf("Enter your Response ? \n");
  for(index = 1 ; index<=10 ; index++)
  {
     scanf("%i",&response);
     if(response>=1 && response<=10)
     {
          ++ratecounting[response]; 
     }
     else 
     {
         printf("bad response\n");

     }
  }
  printf("\n\nRateing number of responses\n");
  printf("-------------------------------\n");
  for(index=1; index<=10; ++index)
  {
    printf("%4i%4i\n",index,ratecounting[index]);

  }
  return 0;
}

