//.Convert kilometers into meters
#include<stdio.h>
#include<conio.h>
void main()
{
    float kilometers,meters;
    printf("Enter the value of kilometers:");
    scanf("%f",&kilometers);
    meters=kilometers*1000;
    printf("The value of kilometers in meters is:%f",meters);
    getch();
}