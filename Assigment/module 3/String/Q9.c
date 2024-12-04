// 9. Write a program in C to find the maximum number of characters in a string.

#include <stdio.h>

int main() {
    char str[50];
    int i = 0, length = 0;
    printf("Enter a string: ");
    gets(str);  
    while (str[i] != '\0') {
        length++;
        i++;
    }
    printf("The maximum number of characters in the string is: %d\n", length);

    return 0;
}
