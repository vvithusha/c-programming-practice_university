#include <stdio.h>
int main()
{
  int index;
  int squart[10];
  for(index =1 ; index<=10 ; index++)
  {
      squart[index] = index*index;
  }
  for(index=1; index<=10 ; index++)
      printf("%i %6.i\n",index,squart[index]);
  return 0;
}

