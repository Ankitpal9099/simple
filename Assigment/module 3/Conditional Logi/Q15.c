//Write a C program to determine eligibility for admission to a professional
//course based on the following criteria
//Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
//in Chem>=50 and Total in all three subject >=190 or Total in Maths and
//Physics >=140 --------------------------------------Input the marks obtained in
//Physics :65 Input the marks obtained in Chemistry :51 Input the marks
//obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
//188 Total marks of Maths and Physics : 137 The candidate is not eligible
#include<stdio.h>
#include<conio.h>
void main()
{
    int m1,m2,m3,t1,t2;
    printf("Enter the marks of maths\n");
    scanf("%d",&m1);
    printf("Enter the marks of physics\n");
    scanf("%d",&m2);
    printf("Enter the marks of chemistry\n");
    scanf("%d",&m3);
     t1=m1+m2+m3;
    printf("your three subject total marks :%d\n" ,t1);
    t2=m1+m2;
     printf("your maths and physics total marks :%d\n" ,t2);
    if(m1>=65 && m2>=55 && m3>=50 && t1>=190 || t2>=140 )
    {
        printf("you are eligible for admission\n");
        }
        else
        {
            printf("you are not eligible for admission\n");
            }
            getch();
    
       
}