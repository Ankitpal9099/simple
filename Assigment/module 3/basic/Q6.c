//Find area of Triangle Formula : A = 1/2 × b × h

#include<stdio.h>
#include<conio.h>
void main()
{
    float base, height, area;
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);
    area = 0.5 * base * height;
    printf("The area of the triangle is: %f\n", area);
    getch();
}