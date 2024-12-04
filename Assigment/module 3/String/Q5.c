// 5. Write a program in C to compare two strings without using string library
// functions
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main ()
{
    char str1[10];
    char str2[10];
    //scanf("%s",&str1);
    //scanf("%s",&str2);
    gets(str1);
    gets(str2);
    printf("%s\n",str1);
    printf("%s\n",str2);

    if (str1 > str2)
    {
       // printf("string is same");
        printf("string 1 is greater=%s",str1);
    }
    else if(str1 < str2){
        printf("string2 is smaller=%s",str2);
    }
    else
    {
        printf("string are same");
    }
}