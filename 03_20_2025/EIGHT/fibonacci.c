#include <stdio.h>
int main()
{
  int fibonacci[15],index;
  /*declear the variable*/
  fibonacci [0]=0;
  fibonacci [1]=1;

  /*calculate the fibonacci number*/
  for(index=2 ; index<15 ; index++)
     fibonacci[index] = fibonacci[index-1] + fibonacci[index-2];
  for(index=0 ; index<15 ; index ++)
     printf("%2i numer is %4i\n",index,fibonacci[index]);

  return 0;

}

