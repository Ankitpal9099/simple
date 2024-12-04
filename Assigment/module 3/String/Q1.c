// write a program in c to find the length of string without used libary
#include<stdio.h>
#include<conio.h>
void main()
{
    char a;
    int i=0;
    printf("Enter a string:");
    while((a=getchar())!='\n')
    {
        i++;
        }
        printf("\nLength of string is:%d",i);
        }

