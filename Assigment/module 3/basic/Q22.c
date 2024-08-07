//.Calculate compound interest (Compound Interest formula:
//a. Formula to calculate compound interest annually is given by:
//Amount= P(1 + R/100)t
//b. Compound Interest = Amount – P
#include <stdio.h>
#include <conio.h>
void main()
{
    float principal, rate, time, amount, compound_interest;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter annual interest rate (in percent): ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);
    amount = principal * pow((1 + rate/100), time);
    compound_interest = amount - principal;
    printf("Compound interest: %.2f\n", compound_interest);
    printf("Total amount: %.2f\n", amount);
    getch();
}
