// 8. WAP to reverse a string and check that the string is palindrome or not
// #include <stdio.h>
// #include <string.h>
// #define MAX_SIZE 100
// int main() {
//     char str[MAX_SIZE];
//     char reversed[MAX_SIZE];
//     int i, length;
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
//     str[strcspn(str, "\n")] = '\0';
//     length = strlen(str);
//     for (i = 0; i < length; i++) {
//         reversed[i] = str[length - 1 - i];
//     }
//     reversed[length] = '\0';
//     if (strcmp(str, reversed) == 0) {
//         printf("The string is a palindrome.\n");
//     } else {
//         printf("The string is not a palindrome.\n");
//     }
//     printf("Reversed string: %s\n", reversed);

//     return 0;
// }





// Write a program of structure employee that provides the following
//   a. information -print and display empno, empname, address
//      andage
//   b. Write a program of structure for five employee that 
//      provides the following information -print and display
//      empno, empname, address andage


#include <stdio.h>
struct Employee {
    int empno;       
    char empname[50];
    char address[100]; 
    int age;        
};

int main() {
    struct Employee employees[5];
    int i;
    for (i = 0; i < 5; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &employees[i].empno);
        printf("Employee Name: ");
        scanf(" %[^\n]s", employees[i].empname); 
        printf("Address: ");
        scanf(" %[^\n]s", employees[i].address); 
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("\n"); 
    }
    printf("Employee Information:\n");
    for (i = 0; i < 5; i++) {
        printf("Employee Number: %d\n", employees[i].empno);
        printf("Employee Name: %s\n", employees[i].empname);
        printf("Address: %s\n", employees[i].address);
        printf("Age: %d\n", employees[i].age);
        printf("\n"); 
    }

    return 0;
}