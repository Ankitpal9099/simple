//Find Area of Square formula : a = a2 
#include <stdio.h>
#include<conio.h>
void main()
{ 
    int side;
    int area; 
    printf("Enter the length of one side of the square: ");
    scanf("%d", &side);
    area = side * side;
    printf("The area of the square is: %d\n", area);
     getch();
}