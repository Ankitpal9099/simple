// write a C program to check whether a triangle can be formed with the given
//values for the angles.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c==180)
    printf("Triangle can be formed\n");
    else
    printf("Triangle can't be formed\n");
    return 0;
}