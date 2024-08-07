// Accept number of students from user. I need to give 5 apples to each student. How many apples are required? 
#include<stdio.h>
#include<conio.h>
void main()
{
     int student;
     int apple;
     printf("Enter number of students:");
     scanf("%d",&student);
     apple=student*5;
     printf("Total number of apples required:%d",apple);
     getch();
}
