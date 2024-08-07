// Write a program in C to read any Month Number in integer and display the
//number of days for this month.
#include <stdio.h>

int main() {
    int month;
    int days;
    printf("Enter Month Number (1-12): ");
    scanf("%d", &month);
    switch(month) {
        case 1: 
             printf(" January\n");
             days = 31;
             break;        
                case 3:
                printf(" March\n");
                days = 31;
                break;
        case 5: 
        printf("May\n");
        days = 31;
        break;
        case 7: 
        printf("July\n");
        days = 31;
        break;
        case 8: 
        printf("August\n");
        days = 31;
        break;
        case 10: 
        printf("October\n");
        days = 31;
        break;
        case 12:
        printf("December\n");
        break;
            days = 31;
            break;
        case 4: 
        printf("April\n");
        days = 30;
        break;
         
        case 6:
        printf("june\n");
        days = 30;
        break;
        case 9:
        printf("September\n");
        days = 30;
        break;
        case 11:
        printf("November\n");
        days = 30;
        break;
         case 2: 
        printf ("February\n");
            days = 28;
            break;
        default:
            printf("Invalid month number.\n");
            return 1;
    }
    printf("Number of days in month %d: %d\n", month, days);

    return 0;
}
