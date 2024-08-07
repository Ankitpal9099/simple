//17.Calculate 5 numbers from user and calculate number of even and odd using
//of while loop
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,even=0,odd=0,count=0;
    printf("enter the number \n");
    while(count<5)
    {
        scanf("%d",&num);
        if(num%2==0)
        {
            even++;
            }
            else
            {
                odd++;
                }
                count++;
                }
                printf("number is even number %d\n",even);
                printf("number is odd number %d\n",odd);
                getch();
}