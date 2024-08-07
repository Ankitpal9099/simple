//Convert minutes into seconds and hours
#include<stdio.h>
#include<conio.h>
void main()
{
    int minutes;
    printf("Enter the number of minutes: ");
    scanf("%d",&minutes);
    printf("The number of seconds is %d\n",minutes*60);
    printf("The number of hours is %d\n",minutes/60);
    getch();
    
}