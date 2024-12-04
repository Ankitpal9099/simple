// 7. Write a program in C to copy one string to another string.
#include <stdio.h>
#include <string.h>
int main()
{
	char str1[20] = "Ankit";
	char str2[20];
	strcpy(str2, str1);
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	return 0;
}
