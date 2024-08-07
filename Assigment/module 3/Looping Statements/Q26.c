//26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include <stdio.h>

int main() {
    int n, totalSum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int currentSum = 0;
        for (int j = 1; j <= i; j++) {
            currentSum += j;
        }
        totalSum += currentSum;
    }
    printf("The sum of the series (1) + (1+2) + (1+2+3) + ... + (1+2+3+...+%d) is %d\n", n, totalSum);
    return 0;
}
