// Accept 2 numbers and find out its sum check it size
#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,sum;
    printf("Enter 2 numbers\n");
    scanf("%d%d",&num1,&num2);
    sum=num1+num2;
    if(sum>100)
    printf("Sum is greater than 100\n");
    else
    printf("Sum is less than 100\n");
    getch();
    
}