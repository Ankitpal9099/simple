//Calculate compound interest
#include<stdio.h>
#include<conio.h>
void main()
{
     float principal, rate, time, compoundFrequency;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter annual interest rate (in percent): ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);
    printf("Enter compound frequency (per year): ");
    scanf("%f", &compoundFrequency);
    rate /= 100;
    float amount = principal * pow((1 + rate / compoundFrequency),(compoundFrequency * time));    printf("Compound interest: %.2f\n", amount - principal);
    printf("Total amount: %.2f\n", amount);
    getch();
}
