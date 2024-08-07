//11.Accept 5 names from user at run time.
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    char name[5][20];
    printf("Enter the number of names:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter name %d:",i+1);
        gets(name[i]);
    }
    printf("show the number %d ",name[i]);
}