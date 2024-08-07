//WAP to Find Area And Circumference of Circle
#include<stdio.h>
#include<conio.h>
void main()
{
    float r,area,circumference;
    printf("Enter the radius of circle:");
    scanf("%f",&r);
    area=3.14*r*r;
    circumference=2*3.14*r;
    printf("\n Area of circle is:%f",area);
    printf("\n Circumference of circle is:%f",circumference);
    getch();
}