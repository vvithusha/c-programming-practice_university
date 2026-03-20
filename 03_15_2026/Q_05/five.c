#include <stdio.h>
int main()
{
  int index,T_num=0;

  for(index=0;index<=10;index++)
  {
     T_num = index + T_num;
     printf("%i  %6i\n",index,T_num);
  }
  return 0;

}

