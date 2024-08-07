//12.WAP to find maximum number among 3 numbers using ternary operator
#include <stdio.h>
#include<conio.h>
int main() {
    int a, b, c, max;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("The maximum number among %d, %d, and %d is %d.\n", a, b, c, max);
    return 0;
}
