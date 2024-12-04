//4. WAP to find factorial using recursion
#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);  
}

int main() {
    int numbers[100], results[100], n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < n; i++) {
        results[i] = factorial(numbers[i]);
    }
    printf("Factorials:\n");
    for (int i = 0; i < n; i++) {
        printf("Factorial of %d is %d\n", numbers[i], results[i]);
    }

    return 0;
}
