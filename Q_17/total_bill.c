#include <stdio.h>
int main()
{
   int type,total_bill;
   char emergency;
   printf("hospital services.\n");
   printf("1.consultation fee :(RS.500)\n");
   printf("2.Diagnostic test :(RS.1000)\n");
   printf("3.surgery :(RS.5000)\n");
   printf("4.Emergency service fee :(RS.2000)\n");
   

   printf("Enter the type ?\n");
   scanf("%i",&type); 
   switch(type)
   {
      case 1:
         total_bill = 500;
      break;
      case 2:
         total_bill = 1000;
      break;
      case 3:
         total_bill = 5000;
      break;
      default :
         printf("Invalid input\n");
      break;
   }
   printf("IS THIS EMERGENCY ? \n");
   scanf(" %c",&emergency);
 
   if ((emergency =='y') || (emergency == 'Y'))
   {    
     total_bill = total_bill + 2000;
   }
     
   printf("Total bill is : %i\n",total_bill);
   
   return 0;
}

