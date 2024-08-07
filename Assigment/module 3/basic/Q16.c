//.Convert country’s name in abbreviate form
#include <stdio.h>

int main() {
    char countryName[100];
    printf("Enter the country's name: ");
    scanf("%s[^\n]", countryName);

    printf("Abbreviation: ");
    for (int i = 0; countryName[i] != '\0'; i++) {
        if (i == 0 || countryName[i - 1] == ' ') {
            printf("%c",countryName[i]);
        }
    }
    printf("\n");

    return 0;
}