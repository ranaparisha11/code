#include<stdio.h>
int main()
{
    float gross_salary, allowance, deduction, net_salary;
    printf("Enter Gross Salary: ");
    scanf("%f", &gross_salary);

    if (gross_salary >= 10000) {
        allowance = gross_salary * 0.10;
        deduction = gross_salary * 0.03;
    } else if (gross_salary <= 5000) {
        allowance = gross_salary * 0.07;
        deduction = gross_salary * 0.02;
    } else {
        allowance = gross_salary * 0.7;
        deduction = gross_salary * 0.02;
    }   
    net_salary = gross_salary + allowance - deduction;
    printf("Net Salary: %.2f\n", net_salary);   
    return 0;
}