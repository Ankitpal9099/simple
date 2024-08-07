//Convert days into months
#include<stdio.h>
#include<conio.h>
void main()
{
    int days;
    int months,remaining_days;
    printf("Enter the number of days:\n");
    scanf("%d",&days);
    months=days/30;
    remaining_days=days%30;
    printf("The number of months is:%d \n",months);
    printf("The number of remaining days is:%d\n",remaining_days);
    getch();
}
