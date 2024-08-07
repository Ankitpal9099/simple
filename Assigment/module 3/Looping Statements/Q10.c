//10.Write a program you have to make a summation of first and last Digit. (E.g.,
//1234 Ans: -5)
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,frist,last;
    printf("Enter a number:");
    scanf("%d",&n);
    frist=n/1000;
    last=n%10;
    printf("Summation of first and last digit is:%d",frist+last);
}