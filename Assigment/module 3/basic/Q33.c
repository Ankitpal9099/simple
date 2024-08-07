//C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include<stdio.h>
#include<conio.h>
void main()
{
    //int n, i, p;
    //printf("Enter a number: ");
    //scanf("%d", &n);
    //for (i = 1; i <= 3; i++)
    //{
       // p = n * n * n;
       // printf("%d\n", p);
     //   }


    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("The first three powers of %d are:\n", n);
    printf("%d^1 = %d\n", n, n);
    printf("%d^2 = %d\n", n, n * n);
    printf("%d^3 = %d\n", n, n * n * n);

   getch();
}