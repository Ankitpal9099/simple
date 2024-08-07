//13.calculate the Factorial of a Given Number using while loop
#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    int fact=1;
    printf("enter the number \n");
    scanf("%d",&num);
    int i=1;
    while(i<=num)
    {
        fact*=i;
        i++;
    }
    printf("Factor number:%d=%d",num,fact);
    getch();
}