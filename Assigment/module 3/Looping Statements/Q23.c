//23. C Program to Reverse a Number Using FOR Loop
// Series Program:
#include <stdio.h>

int main() {
    int number, reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    int original = number;
    for (; number != 0; number /= 10) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
    }
    printf("Reversed number of %d is %d\n", original, reversed);

    return 0;
}
