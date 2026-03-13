#include <stdio.h>
int main()
{
    char NIC[100];
    int year, day ,age;

    printf("Enter your NIC number:");
    scanf("%s", NIC);

    sscanf(NIC, "%4d%3d", &year, &day);

    if(day > 500)
    {
        printf("Gender : Female\n");
        day = day - 500;
    }
    else
    {
        printf("Gender : Male\n");
    }
    
    // Calculate month and day from day of year
    int month, birth_day;
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        days_in_month[1] = 29;
    }
    int temp_day = day;
    for (month = 0; month < 12; month++) {
        if (temp_day <= days_in_month[month]) {
            birth_day = temp_day;
            break;
        }
        temp_day -= days_in_month[month];
    }
    month++; // 1-based
    
    age = 2026 - year;

    printf("Birth Year : %d\n", year);
    printf("Birth Month : %d\n", month);
    printf("Birth Day : %d\n", birth_day);
    printf("Age : %d\n", age);

    return 0;
}