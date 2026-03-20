#include <stdio.h>

int main()
{
    int index;
    char name[50];
    float maths, physics, chemistry;
    float total, average;
    char grade;

    printf("Enter Index Number: ");
    scanf("%d", &index);

    printf("Enter Name: ");
    scanf(" %c", name);

    printf("Enter Maths marks: ");
    scanf("%f", &maths);

    printf("Enter Physics marks: ");
    scanf("%f", &physics);

    printf("Enter Chemistry marks: ");
    scanf("%f", &chemistry);

    total = maths + physics + chemistry;
    average = total / 3;

    if(average >= 90)
        grade = 'A';
    else if(average >= 80)
        grade = 'B';
    else if(average >= 70)
        grade = 'C';
    else if(average >= 60)
        grade = 'D';
    else if(average >= 40)
        grade = 'E';
    else
        grade = 'F';

    printf("\nIndex Number: %d\n", index);
    printf("Name: %s\n", name);
    printf("Maths: %.2f Physics: %.2f Chemistry: %.2f\n", maths, physics, chemistry);
    printf("Total: %.2f\n", total);
    printf("Average: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}  

