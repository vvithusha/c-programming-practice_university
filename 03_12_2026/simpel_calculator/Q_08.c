#include <stdio.h>
int main()
{
    double accumulator = 0;
    double number;
    char operator;

    printf("Begin Calculations\n");

    while (1){
        //ASk user for input
        printf("Enter number and operator:");
        scanf("%lf %c",&number, &operator);

        switch (operator)
        {
        case 'S':
        case 's':
            accumulator = number;
            printf("= %lf contents of Accumulator\n",accumulator);
        break;

        case '+':
            accumulator += number;
            printf("= %lf contents of accumulator\n");
        break;

        case '-':
            accumulator -= number;
            printf("= %lf contents of accumulator\n");
        break;

        case '*':
            accumulator *= number;
            printf("= %lf contents of accumulator\n");
        break;

        case '/':
        if (number == 0)
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        else
        {
            accumulator /= number;
            printf("= %lf contents of accumulator\n",accumulator);
            break;
        }
        case 'E':
        case 'e':
            printf("= %lf\n",accumulator);
            printf("End of calculations.\n");
            return 0;
        
        default:
            printf("Error : unknown operator '%c.\n'",operator);
            break;
        }
    }


    return 0;
}