#include <stdio.h>
int main()
{
  int index , num , fact=1;
  
  printf("Enter the number:");
  scanf("%d",&num);
  
  for(index=1 ;index<=num ; index++)
     fact = fact * index;

  printf("%d factorial is %d",num,fact);

  return 0;

}

