//
#include<stdio.h>
#include<conio.h>
void main()
{
      int num,rem,sum=0;
    printf("Enter number:");
    scanf("%d",&num);
    int ori_num=num;
    while(num>0)
    {
        rem=num%10;
        sum+=rem*rem*rem;
        num/=10;
    }
    printf("Sum=%d",sum);
     if(ori_num==sum)
     {
         printf("\n It is an armstrong number.");
     }
   else
   {
         printf("\n It is  not an armstrong number. ");
   }  
   getch();
}