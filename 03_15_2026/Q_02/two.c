#include <stdio.h>
int main()
{
  int num[10] = {34,12,33,56,78,98,40,45,22,60};
  int min = num[0];
  int max = num[0];
  int index;

  for(index=0 ; index<10 ; index++)
  {
    if(num[index] < min)
        min = num[index]; 
  }
  for(index=0 ; index<10 ; index++)
  {
    if(num[index] > max)
        max  = num[index];
  }
  printf("maxnumber : %i\n",max);
  printf("minnumber : %i\n",min);

  return 0;
}

