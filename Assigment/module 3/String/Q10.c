// 10.Write a program in C to extract a substring from a given string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], substring[100];
    int start, length;
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Enter the starting index: ");
    scanf("%d", &start);
    printf("Enter the length of the substring: ");
    scanf("%d", &length);
    if (start < 0 || start >= strlen(str) || length < 0 || (start + length) > strlen(str)) {
        printf("Invalid starting index or length.\n");
        return 1;
    }
    strncpy(substring, str + start, length);
    substring[length] = '\0'; 
    printf("Extracted substring: %s\n", substring);

    return 0;
}