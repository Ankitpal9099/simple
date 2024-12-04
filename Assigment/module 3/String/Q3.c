// 3. Write a program in C to print individual characters of a string in reverse order
#include<stdio.h>
#include<conio.h>
void main()
{
    char str[10], rev[10];
    int i, j = 0;
    printf("Enter a string: ");
    gets(str);
    for (i = strlen(str) - 1; i >= 0; i--)
    {
        rev[j++] = str[i];
        }
        rev[j] = '\0';
        printf("Reverse string: %s", rev);

}