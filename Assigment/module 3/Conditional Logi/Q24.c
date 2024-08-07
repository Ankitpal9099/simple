//
#include <stdio.h>
#include<conio.h>
void main()
{
    int month;
    printf("Enter month number (1-12): ");
    scanf("%d", &month);
    if(month == 1)
    {
        printf("January\n");
        printf("31 days");
    }
    else if(month == 2)
    {
        printf("February\n");
        printf("28 or 29 days");
    }
    else if(month == 3)
    {
        printf("March\n");
        printf("31 days");
    }
    else if(month == 4)
    {
        printf("April\n");
        printf("30 days");
    }
    else if(month == 5)
    {
        printf("May\n");
        printf("31 days");
    }
    else if(month == 6)
    {
        printf("June\n");
        printf("30 days");
    }
    else if(month == 7)
    {
        printf("July\n");
        printf("31 days");
    }
    else if(month == 8)
    {
        printf("August\n");
        printf("31 days");
    }
    else if(month == 9)
    {
        printf("September\n");
        printf("30 days");
    }
    else if(month == 10)
    {
        printf("October\n");
        printf("31 days");
    }
    else if(month == 11)
    {
        printf("November\n");
        printf("30 days");
    }
    else if(month == 12)
    {
        printf("December\n");
        printf("31 days");
    }
    else
    {
        printf("Invalid input! Please enter month number between (1-12).");
    }

    getch();
}