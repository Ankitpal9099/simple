//Find circumference of Rectangle formula : C = 4 * a
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter the length of rectangle : ");
    scanf("%d",&a);
    printf("Enter the breadth of rectangle : ");
    scanf("%d",&b);
    c=4*a;
    printf("Circumference of rectangle is : %d",c);
    getch();
}