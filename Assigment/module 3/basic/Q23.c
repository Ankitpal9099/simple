//WAP to calculate swap 2 numbers with using of multiplication and division
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    printf("Before swapping a=%d and b=%d\n",a,b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("After swapping a=%d and b=%d\n",a,b);
    getch();
}