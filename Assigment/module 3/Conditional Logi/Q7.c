// Accept marks from user and check pass or fail
#include<stdio.h>
#include<conio.h>
void main()
{
    int i=0,marks=0;
    printf("Enter marks\n");
    scanf("%d",&marks);
    if(marks>=40)
    {
        printf("Pass\n");
    }
    else if(marks >=100)
    {
        printf("invalid \n");
    }
    else
    {
        printf("Fail\n");
    }
    
}