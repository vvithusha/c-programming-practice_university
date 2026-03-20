 #include <stdio.h>
int main()
{
  /*declear the variable for run the loop*/
  int x,y;

  /*declear the 2D array*/
  int m[4][4] = {{1,2,3,4},
                 {2,4,6,8},o
                 {3,6,9,12},
                 {4,8,12,16}};
   
  /*declear the outer loop (row)*/
  for(x=0 ; x<4 ; x++)
  {
  /*declear the innner loop (coloum)*/
      for(y=0 ; y<4 ; y++)
         printf("%i",m[x][y]);
      printf("\n");
  }
 
  return 0;
}

