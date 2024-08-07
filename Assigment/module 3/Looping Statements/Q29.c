// 28. 1 2 3 6 9 18 27 54...
#include <stdio.h>
#include<conio.h>
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int term = 1;
    for (int i = 0; i < n; i++) {
        printf("%d ", term);
        if (i % 2 == 0) {
            term *= 2;
        } else {
            term *= 3;
        }
    }
    printf("\n");
    return 0;
}
