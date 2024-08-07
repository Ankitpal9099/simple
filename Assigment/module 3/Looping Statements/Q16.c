//16.Calculate the Sum of Natural Numbers Using the While Loop
#include<stdio.h>
#include<conio.h>
void main(){
    int n,sum=0,i=1;
    printf("enter the number ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i++;
        }
        printf("sum of natural number is %d",sum);
        
}