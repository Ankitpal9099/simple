//.Accept 2 numbers from user and swap 2 numbers with using 3rd variable
//and without using 3rd variable
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,temp;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    printf("Before swapping a=%d and b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping a=%d and b=%d\n",a,b);
    printf("the value of swap three value number \n");
    printf("Enter the number of values A\n");
    scanf("%d",&a);
    printf("enter the values of values B \n");
    scanf("%d",&b);
    printf("Before swapping:\n");
    printf("a = %d, b = %d\n", a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping:\n");
    printf("a = %d, b = %d\n", a,b);
    getch();
}