//Calculate person’s Annual salary
#include<stdio.h>
#include<conio.h>
void main()
{
    float hourlyWage , hoursWorkedperWeek;
    float annualSalary;
    printf("Enter the hourly wage:");
    scanf("%f",&hourlyWage);
    printf("Enter the hours worked per week:");
    scanf("%f",&hoursWorkedperWeek);
    annualSalary = hourlyWage * hoursWorkedperWeek * 52;
    printf("The annual salary is:%f",annualSalary);
    getch();
}
