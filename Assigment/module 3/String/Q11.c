// Write a program in C to read a sentence and replace lowercase characters with 
// uppercase and vice versa.
#include <stdio.h>
int main() {
    char ch;

    printf("Enter a sentence (end with #): ");
    while ((ch = getchar()) != '#') {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 'a' + 'A'; 
        } else if (ch >= 'A' && ch <= 'Z') {
            ch = ch - 'A' + 'a'; 
        }
        putchar(ch); 
    }

    return 0;
}