//4. WAP to print table up to given numbers
//error code
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
        }
        getch();
    
}