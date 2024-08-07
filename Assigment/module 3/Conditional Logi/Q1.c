//. Write a C program to accept two integers and check whether they are equal
//or not
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    if(a==b)
    {
    printf("Numbers are equal\n");
    }
    else
    {
    printf("Numbers are not equal\n");
    }
    getch();
}