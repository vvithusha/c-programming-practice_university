#include <stdio.h>

/* Function to calculate and display payroll details */
int employee_details(int e_id, int b_salary, int allowance, int overtime, int deductions)
{
    int gross_salary, net_salary;

    gross_salary = b_salary + allowance + overtime;
    net_salary = gross_salary - deductions;

    printf("\n------ PAYROLL DETAILS ------\n");
    printf("Employee ID      : %d\n", e_id);
    printf("Basic Salary     : %d\n", b_salary);
    printf("Allowance        : %d\n", allowance);
    printf("Overtime Pay     : %d\n", overtime);
    printf("Deductions       : %d\n", deductions);
    printf("Gross Salary     : %d\n", gross_salary);
    printf("Net Salary       : %d\n", net_salary);
    printf("-----------------------------\n");

    return net_salary;
}

int main()
{
    int e_id;
    int b_salary;
    int allowance;
    int overtime;
    int deductions;

    printf("----- Employee Payroll System -----\n");

    printf("Enter Employee ID: ");
    scanf("%d", &e_id);

    printf("Enter Basic Salary: ");
    scanf("%d", &b_salary);

    printf("Enter Allowance: ");
    scanf("%d", &allowance);

    printf("Enter Overtime Pay: ");
    scanf("%d", &overtime);

    printf("Enter Deductions: ");
    scanf("%d", &deductions);

    employee_details(e_id, b_salary, allowance, overtime, deductions);

    return 0;
}

