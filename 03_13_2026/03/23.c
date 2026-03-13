#include <stdio.h>

int main()
{
    int choice;

    while (1)
    {
        printf("\nEnter the choice:\n");
        printf("1 :- Enter the cave\n");
        printf("2 :- Walk around the cave\n");
        printf("3 :- Go back home\n");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Choose:\n1 :- Open the chest\n2 :- Leave the chest\n");
            scanf("%d", &choice);

            if (choice == 1)
                printf("You opened the chest and won gold coins!\n");
            else if (choice == 2)
                printf("You left the chest and exited safely.\n");
            else
                printf("Invalid input.\n");
        }
        else if (choice == 2)
        {
            printf("Choose:\n1 :- Sneak past the dragon\n2 :- Wake the dragon\n");
            scanf("%d", &choice);

            if (choice == 1)
                printf("You successfully sneaked past the dragon.\n");
            else if (choice == 2)
                printf("You woke the dragon and lost the game.\n");
            else
                printf("Invalid input.\n");
        }
        else if (choice == 3)
        {
            printf("You go back home.\n");
            break;
        }
        else
        {
            printf("You entered an invalid input.\n");
        }
    }

    return 0;
}

