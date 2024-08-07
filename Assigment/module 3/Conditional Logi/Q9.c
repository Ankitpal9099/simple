//C Program to Check Uppercase or Lowercase or Digit or Special
//Character
#include <stdio.h>
#include <conio.h>
void main()
{
     char ch;
     printf("Enter a character: ");
     scanf("%s",&ch);//     ch = getch();
     if(ch >= 'A' && ch <= 'Z')
     printf("Uppercase\n");
     else if(ch >= 'a' && ch <= 'z')
     printf("Lowercase\n");
     else if(ch >= '0' && ch <= '9')
     printf("Digit\n");
     else
     printf("Special Character\n");
     
}