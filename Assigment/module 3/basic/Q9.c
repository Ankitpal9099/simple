//Find circumference of Triangle formula : triangle = a + b + c
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d;
    printf("Enter the length of the sides of the triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    d=a+b+c;
    printf("The circumference of the triangle is %d",d);
    getch();
}