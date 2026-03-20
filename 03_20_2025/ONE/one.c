#include <stdio.h>
int main()
{
  int index;
  double balance[3] = {45,33,22};
  
  printf("direct : price is %6.2f \n",balance[0]);
  
  for (index=0;index<3;index++)
     printf("loop : price is %6.2f \n",balance[index]);


  return 0;
}

