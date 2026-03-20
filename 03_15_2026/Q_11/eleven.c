#include <stdio.h>

int main()
{
    char option, next;
    char itemCode[20];
    int qty;
    float unitPrice, amount, total;

    do
    {
        printf("\nWelcome to Vithu Shop\n");
        printf("Press S -> Start\n");
        printf("Press P -> Process Bill\n");
        printf("Press Q -> Quit\n");
        printf("Your option : ");
        scanf(" %c", &option);

        switch(option)
        {
            case 'S':
            case 's':
                total = 0;
                printf("\nSystem started successfully...\n");
                printf("Ready to process a bill.\n");
                break;

            case 'P':
            case 'p':
                total = 0;
                printf("\nProcessing current customer's shopping cart...\n");

                do
                {
                    printf("\nEnter Item Code   : ");
                    scanf("%s", itemCode);

                    printf("Enter Quantity    : ");
                    scanf("%d", &qty);

                    printf("Enter Unit Price  : ");
                    scanf("%f", &unitPrice);

                    amount = qty * unitPrice;
                    total = total + amount;

                    printf("Item Total = %.2f\n", amount);

                    printf("Press N to finish customer / any other key to continue: ");
                    scanf(" %c", &next);

                } while(next != 'N' && next != 'n');

                printf("\nTotal Bill = Rs. %.2f\n", total);
                break;

            case 'Q':
            case 'q':
                printf("\nShutting down cashier system...\n");
                break;

            default:
                printf("\nInvalid option! Please try again.\n");
        }

    } while(option != 'Q' && option != 'q');

    return 0;
}

