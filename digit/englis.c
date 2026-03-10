#include <stdio.h>
int main()
{
    int number , digit;

    printf("Enter the number:");
    scanf("%i",&number);
 
while(number >0)
 {
   digit = number%10;

   switch (digit)
    {
    case 1:
        printf("one ");
        break;
    case 2:
        printf("Two ");
        break;
    case 3:
        printf("Three ");
        break;
    case 4:
        printf("Four ");
        break;
    case 5:
        printf("Five ");
        break;
    case 6:
        printf("Six ");
        break;
    case 7:
        printf("Seven ");
        break;
    case 8:
        printf("Eight ");
        break;
    case 9:
        printf("Nine ");
        break;
    default:
        printf("Zero ");
        break;
    }
    number = number/10;
}
    return 0;
}