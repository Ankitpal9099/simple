//13.WAP to find minimum number among 3 numbers using ternary operator
#include <stdio.h>
#include<conio.h>
int main() {
    int a, b, c, min;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    printf("The minimum number among %d, %d, and %d is %d.\n", a, b, c, min);
    return 0;
}
