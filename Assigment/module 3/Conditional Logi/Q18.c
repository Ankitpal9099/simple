//18.Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
int main()
{
    float cp,sp,profit,loss;
    printf("Enter the cost price of the product: \n");
    scanf("%f",&cp);
    printf("Enter the selling price of the product: \n");
    scanf("%f",&sp);
    if(sp>cp)
    {
        profit=sp-cp;
        printf("Profit is %.2f",profit);
     }
        else
        {
            loss=cp-sp;
            printf("Loss is %.2f",loss);
        }
}