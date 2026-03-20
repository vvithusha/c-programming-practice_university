#include <stdio.h>
int main()
{
  const int OT_RATE = 10;
  double ot[] = {10.0,30.0,35.5,21.5,20};
  int index;
  double gross[5];
  
  for(index=0 ; index<5 ; index++)
  { 
    gross[index] = ot[index] * 	OT_RATE;
    printf("gross salaty : %6.2f\n",gross[index]);

  }
  return 0;
}

