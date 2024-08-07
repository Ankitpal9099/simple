//Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    c=a+b;
    printf("\n Addition of two numbers is: %d",c);
    c=a-b;
    printf("\n Subtraction of two numbers is: %d",c);
    c=a*b;
    printf("\n Multiplication of two numbers is: %d",c);
    c=a/b;
    printf("\n Division of two numbers is: %d",c);
    c=a%b;
    printf("\n Modulo of two numbers is: %d",c);
    getch();
}