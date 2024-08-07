//WAP to accept 5 numbers from user and display all numbers
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i;
    printf("Enter 5 numbers:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        }
        printf("The numbers are:\n");
        for(i=0;i<5;i++)
        {
            printf("%d\n",a[i]);
            }
            getch();
            
}