//14.WAP to find the largest of three numbers.
#include <stdio.h>
int main() {
    int a, b, c, largest;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c) {
        largest = a;
    } else if (b > c) {
        largest = b;
    } else {
        largest = c;
    }
    printf("The largest number among %d, %d, and %d is %d.\n", a, b, c, largest);
    return 0;
}
