//.Convert school’s name in abbreviated form
#include <stdio.h>

int main() {
    char schoolName[100];
    printf("Enter the school's name: ");
    scanf("%c[^\n]", schoolName);

    printf("Abbreviation: ");
    for (int i = 0; schoolName[i] != '\0'; i++) {
        if (i == 0 || schoolName[i - 1] == ' ') {
            printf("%c", schoolName[i]);
        }
    }
    printf("\n");

    return 0;
}