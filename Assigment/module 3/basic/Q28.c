//Convert years into days and months
#include <stdio.h>
#include<conio.h>
void main()
{
    int year;
    printf("Enter the year: \n");
    scanf("%d",&year);
    printf("The year %d is equal to %d days and %d months",year,year*365,year*12);
    getch();
}