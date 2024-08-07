//22. Accept 3 numbers from user using while loop and check each numbers
//palindrome
#include <stdio.h>
int main() {
    int count = 0;
    int number, original, reversed, digit;

    while (count < 3) {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &number);
        original = number;
        reversed = 0;
        while (number > 0) {
            digit = number % 10;
            reversed = reversed * 10 + digit;
            number /= 10;
        }
        if (original == reversed) {
            printf("%d is a palindrome.\n", original);
        } else {
            printf("%d is not a palindrome.\n", original);
        }
        count++;
    }
    return 0;
}
