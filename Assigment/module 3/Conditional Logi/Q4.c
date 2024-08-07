//WAP to make simple calculator (operation include Addition, Subtraction,
//Multiplication, Division, modulo) using conditional statement
#include<stdio.h>
#include<conio.h>
void main ()
{
    int a,b,c;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    printf("press 1 is Addition\n");
    printf("press 2 is Subtraction\n");
    printf("press 3 is Multiplication\n");
    printf("press 4 is Division\n");
    printf("press 5 is Modulo\n");
    printf("Enter the operation\n");
    scanf("%d",&c);
    switch (c)
    {
        case 1:
        printf("Addition of a and b is %d\n",a+b);
        break;
        case 2:
        printf("Subtraction of a and b is %d\n",a-b);
        break;
        case 3:
        printf("Multiplication of a and b is %d\n",a*b);
        break;
        case 4:
        printf("Division of a and b is %d\n",a/b);
        break;
        case 5:
        printf("Modulo of a and b is %d\n",a%b);
        break;
          default :
        printf("Invalid operation\n");
        break;
        }
        }