// Write a program in C to find the largest and smallest words in a string.
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    char largest[MAX_SIZE] = "";
    char smallest[MAX_SIZE] = "";
    char temp[MAX_SIZE];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    strcpy(largest, "");
    strcpy(smallest, str); 
    char *word = strtok(str, " ");

    while (word != NULL) {

        if (strlen(word) > strlen(largest)) {
            strcpy(largest, word);
        }
        if (strlen(word) < strlen(smallest) || strlen(smallest) == 0) {
            strcpy(smallest, word);
        }
        word = strtok(NULL, " "); 
    }
    printf("Largest word: %s\n", largest);
    printf("Smallest word: %s\n", smallest);

    return 0;
}