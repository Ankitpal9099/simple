//8. Write a program to find out the max from given number (E.g., No: -1562
//Max number is 6)
#include<stdio.h>
#include<conio.h>
void main()
{
    int n, i, max = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 0; i <= 9; i++)
    {
        if ((n / 10) % 10 == i)
        {
            if (i > max)
            {
                max = i;
             }
        }
    }
    printf("Max number is %d", max);
                
}