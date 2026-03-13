#include <stdio.h>
int main()
{
  /*declear the variable (GB,SMS,total_bill)*/
  int GB , SMS, total_bill=0;

  /*get the value from user*/
  printf("Enter how much data you use ?");
  scanf("%i",&GB);

  printf("Enter how many SMS you send ?");
  scanf("%i",&SMS);
 
  /*calculate the total_bill*/
  if(GB <= 1)
     total_bill = total_bill + 150;
  else if(GB <= 5)
     total_bill = total_bill + 600;
  else if(GB <= 10)
     total_bill = total_bill + 1000;
  else 
     printf("INVALID INPUT\n");
   
  if(SMS >=100)
     total_bill = total_bill +200;

  printf("Total_bill is :%i",total_bill);
  
 
  return 0;
}

