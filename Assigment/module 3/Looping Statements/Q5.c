//5. WAP to print factorial of given number
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,num,fact=1;
    printf("enter the number ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
        }
        printf("factorial of %d is %d",num,fact);
        getch();
}