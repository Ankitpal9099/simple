//Accept monthly salary from the user and deduct 10% insurance premium,
//10% loan installment find out of remaining salary.
#include<stdio.h>
#include<conio.h>
void main()
{
    float salary,insur,loan,rem;
    printf("Enter the salary\n");
    scanf("%f",&salary);
    insur=salary*0.1;
    loan=salary*0.1;
    rem=salary-insur-loan;
    printf("Insurance premium is %f\n",insur);
    printf("Loan installment is %f\n",loan);
    printf("Remaining salary is %f\n",rem);
    getch();
}
