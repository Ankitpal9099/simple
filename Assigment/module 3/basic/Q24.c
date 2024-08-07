//Accept 5 employees name and salary and count average and total salary
#include<stdio.h>
#include<conio.h>
void main()
{
 //  char name1;
   //char name2;
   //char name3;
   //char name4;
   //char name5;
   int sal1;
   int sal2;
   int sal3;
   int sal4;
   int sal5;
   int total=0;
   int avg=0;
   //printf("Enter the salary of 5 employees\n");
   //scanf("%s",&name1);
   printf("enter the sal");
   scanf("%d",&sal1);
  // printf("enter the the second employes value\n");
  // scanf("%s",&name2);
   printf("enter the sal");
   scanf("%d",&sal2);
   //rintf("enter the the third employes value\n");
   //scanf("%s",&name3);
   printf("enter the sal");
   scanf("%d",&sal3);
   //printf("enter the the fourth employes value\n");
   //scanf("%s",&name4);
   printf("enter the sal");
   scanf("%d",&sal4);
   //printf("enter the the fifth employes value\n");
   //scanf("%d",&name5);
   printf("enter the sal");
   scanf("%d",&sal5);
   total=sal1+sal2+sal3+sal4+sal5;
   avg=total/5;
   printf("the total salary is %d",total);
   printf("the average salary is %d",avg);

   getch();

   
}