// Write a program to find out the max number from given array using function
#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

int main() {
    int arr[] = {12, 45, 7, 23, 56, 89, 34};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The maximum number in the array is: %d\n", findMax(arr, size));
    return 0;
}