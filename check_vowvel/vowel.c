#include <stdio.h>
int main()
{
    char letter;

    printf("Enter the letter:");
    scanf("%c",&letter);

    switch (letter)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'o':
    case 'O':
    case 'U':
    case 'u':
        printf("%c is a vowel letter",letter);
        break;
    default:
        printf("%c is a constanant letter",letter);
        break;
    }
    return 0;
}