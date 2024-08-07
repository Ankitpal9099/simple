//Find circumference of square formula : C = 4 * a 
#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    float c;
    printf("Enter the side of square : ");
    scanf("%d",&a);
    c=4*a;
    printf("Circumference of square is : %.2f",c);
    getch();
}