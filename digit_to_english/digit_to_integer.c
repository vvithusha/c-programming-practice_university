#include <stdio.h>
int main()
{
    int num,digit;
    /*get the number from user*/
    printf("Enter the number: ");
    scanf("%i",&num);

    /*use switch display the number to english*/
    while (num > 0)
    {
        digit = num % 10;
        switch (digit)

        {
        
         case 9:
             printf("Nine ");
         break;

         case 8:
             printf("Eight");
         break;

         case 7:
             printf("Seven");
         break;

         case 6:
            printf("Six");
         break;

         case 5:
             printf("Five");
         break;
    
         case 4:
             printf("Four");
         break;

         case 3:
             printf("Three");
         break;

         case 2:
             printf("Two");
         break;

         case 1:
             printf("one");
         break;

         default:
             printf("Zero");
         break;
    }
    num = num /10;

    }

    return 0;
}