// 5. WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice
#include <stdio.h>
void sortArray(int arr[], int size, int ascending) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if ((ascending && arr[j] > arr[j + 1]) || (!ascending && arr[j] < arr[j + 1])) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[100], arr2[100], n1, n2, choice;
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter elements of first array:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter elements of second array:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    printf("Choose sorting order:\n1. Ascending\n2. Descending\n");
    scanf("%d", &choice);
    int ascending = (choice == 1);
    sortArray(arr1, n1, ascending);
    sortArray(arr2, n2, ascending);
    printf("Sorted first array: ");
    printArray(arr1, n1);
    printf("Sorted second array: ");
    printArray(arr2, n2);

    return 0;
}
