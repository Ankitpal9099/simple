//Accept 5 numbers from user and find those numbers factorials
#include <stdio.h>
#include<conio.h>
void main() {
    int num[5];
    int fact;
    int i, j;
    printf("Enter 5 positive integers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 5; i++) {
        fact = 1;
        for (j = 1; j <= num[i]; j++) {
            fact *= j;
        }
        printf("Factorial of %d = %d\n", num[i], fact);
    }
    getch();
}
