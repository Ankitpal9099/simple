// Write a program in C to calculate and print the electricity bill of a given
//customer. The customer ID, name, and unit consumed by the user should
//be captured from the keyboard to display the total amount to be paid to the
//customer. The charge are as follow :
//20. Unit 21. Charge/unit
//22. upto 350 23. @1.20
//24. 350 and above but less than 600 25. @1.50
//26. 600 and abovethen a surcharge of 18% will be charged andthe
//minimum bill should be of Rs. 25 but less than 800 27. @1.80
//28. 800 and above 29. @2.00
//30.If bill exceeds Rs. 800 6/-
#include <stdio.h>

int main() {
    int customerID, unitsConsumed;
    char customerName[5];
    float billAmount;
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);
    if (unitsConsumed <= 350) {
        billAmount = unitsConsumed * 1.20;
    } else if (unitsConsumed < 600) {
        billAmount = unitsConsumed * 1.50;
    } else if (unitsConsumed < 800) {
        billAmount = unitsConsumed * 1.80;
    } else {
        billAmount = unitsConsumed * 2.00;
    }

    if (billAmount > 800) {
        billAmount += billAmount * 0.18;
        if (billAmount < 256) {
            billAmount = 256;
        }
    }
    printf("\nElectricity Bill\n");
    printf("Customer ID   : %d\n", customerID);
    printf("Customer Name : %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Total Amount  : Rs. %.2f\n", billAmount);

    return 0;
}
