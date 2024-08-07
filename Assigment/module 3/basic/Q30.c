//.WAP to convert years into days and days into years
#include<stdio.h>
#include<conio.h>
void main(){
    int year,day;
    printf("Enter the year:");
    scanf("%d",&year);
    day=year*365;
    printf("The number of days in %d year is %d\n",year,day);
    year=day/365;
    printf("The number of days in %d year is %d\n",day,year);

    getch();

}