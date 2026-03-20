#include <stdio.h>
int main()
{
  int index;
  double cost;
  double b[4];
  double u_b[] = {1000.0,2.0,3.4,7.0,50.0};
  
  cost = u_b[2];
  printf("cost : %6.2f\n",cost);


  for(index=0 ; index<4 ; index++)
  {
    b[index] = u_b[index]+u_b[index+1];
    printf("balance : %6.2f\n",b[index]);
  }

  return 0;
} 


