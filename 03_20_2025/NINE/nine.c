#include <stdio.h>

int main()
{
    /* declare array to keep the base digits */
    const char basedigits[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

    /* declare the array to keep the converted number */
    int convertnumber[64];

    /* declare variable to keep the user entered number */
    long int numbertoconvert;

    /* variable to read digits while printing */
    int nextdigit = 0;

    /* to keep the desired base */
    int base;

    /* loop control variable */
    int index = 0;

    /* input the number to convert */
    printf("Number to be converted? ");
    scanf("%ld",&numbertoconvert);

    /* input the base */
    printf("Enter the base? ");
    scanf("%i",&base);

    /* do the base conversion */
    do{
        /* convert digit */
        convertnumber[index] = numbertoconvert % base;

        /* increment index */
        index++;

        /* update the number to convert */
        numbertoconvert = numbertoconvert / base;

    }while(numbertoconvert != 0);

    /* display the converted value */
    printf("Converted number = ");

    for(--index ; index >= 0 ; --index)
    {
        nextdigit = convertnumber[index];
        printf("%c", basedigits[nextdigit]);
    }

    printf("\n");

    return 0;
}

