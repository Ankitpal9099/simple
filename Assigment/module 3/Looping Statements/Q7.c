//7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse =
//82746
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,res=0,rem;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        res=res*10+rem;
        num=num/10;
        }
        printf("Reverse of the number is：%d",res);
    
}