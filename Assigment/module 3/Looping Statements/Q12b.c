//12.Program of Armstrong Number in C Using For Loop & While Loop
#include <stdio.h>
#include <math.h>
int main() {
    int number, org, remainder, result = 0, n = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);
    org = number;
    for (org = number; org != 0; n++) {
        org /= 10;
    }
    org = number;
    for (org = number; org != 0; org/= 10) {
        remainder = org % 10;
        result += remainder*remainder*remainder;
        
    }
    printf("Result=%d\n",result);

    if (result == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
