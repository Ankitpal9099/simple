//15.Calculate sum of 10 numbers using of while loop
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,sum=0,count=0;
    printf("enter the number :\n");
    while(count< 10)
    {
        printf("Number %d",count+1);
        scanf("%d",&num);
        sum+=num;
        count++;
    }
    printf("the sum of the 10 number is :%d \n",sum);
    getch();
}