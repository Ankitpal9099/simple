//Calculate person’s insurance premium based on salary
//If salary is less than 10000, premium is 10% of salary
//If salary is between 10000 and 20000, premium is 15% of salary
//If salary is greater than 20000, premium is 20% of salary
#include <stdio.h>
#include <conio.h>
void main()
{
    int salary;
    float premium;
    printf("Enter your salary: ");
    scanf("%d", &salary);
    if (salary < 10000)
    {
        premium = salary * 0.1;
    }
      else if (salary >= 10000 && salary <= 20000)
        {
            premium = salary * 0.15;
        }
    else
    {
       premium = salary * 0.2;
    }
    printf("Your insurance premium is %.2f", premium);
    getch();
}