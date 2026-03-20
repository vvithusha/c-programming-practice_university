#include <stdio.h>
int main()
{  

  int m[4][4] = {2};
  int x,y;
  
  for(x=0 ;x<4 ; x++){
      for(y=0 ; y<4; y++)
          printf("%2i.",m[x][y]);
      printf("\n");
   }
  return 0;
}

