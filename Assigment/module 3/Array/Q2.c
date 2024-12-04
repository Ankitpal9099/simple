// 2. WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)

#include <stdio.h>

int main() {
    int choice, num[2];
    float result;

    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");

    while(1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d %d", &num[0], &num[1]);
                result = num[0] + num[1];
                printf("Result: %d + %d = %.2f\n", num[0], num[1], result);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%d %d", &num[0], &num[1]);
                result = num[0] - num[1];
                printf("Result: %d - %d = %.2f\n", num[0], num[1], result);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%d %d", &num[0], &num[1]);
                result = num[0] * num[1];
                printf("Result: %d * %d = %.2f\n", num[0], num[1], result);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%d %d", &num[0], &num[1]);
                if(num[1] != 0) {
                    result = (float)num[0] / num[1];
                    printf("Result: %d / %d = %.2f\n", num[0], num[1], result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
