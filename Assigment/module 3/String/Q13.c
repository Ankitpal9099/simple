// Write a program in C to remove characters from a string except alphabets.
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    
    
    str[strcspn(str, "\n")] = '\0';
    printf("String after removing non-alphabetic characters: ");
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            putchar(str[i]);
        }
    }
    printf("\n");

    return 0;
}