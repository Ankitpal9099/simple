//1/2 - 2/3 + 3/4 - 4/5 + 5/6 - ...... n

#include <stdio.h>
int main() {
    int n;
    double sum = 0.0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        double term = (double)i / (i + 1);
        if (i % 2 == 0) {
            sum -= term;
        } else {
            sum += term;
        }
    }
    printf("The sum of the series up to %d terms is: %lf\n", n, sum);
    return 0;
}
