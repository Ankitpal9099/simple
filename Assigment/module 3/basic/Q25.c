//.Accept 5 expense from user and find average of expense
#include<stdio.h>
#include<conio.h>
void main()
{
    char user[5];
    int i=0;
    float sum=0,avg=0;
    printf("Enter 5 expense\n");
    for(i=0;i<5;i++)
    {
        scanf("%f",&user[i]);
        sum=sum+user[i];
    }
        avg=sum/5;
        printf("Average of expense is %f",avg);
        getch();
}