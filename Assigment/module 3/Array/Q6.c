// WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array 

#include <stdio.h>

#define SIZE 100

// Function to take matrix input from user
void inputMatrix(int matrix[SIZE][SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[SIZE][SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int mat1[SIZE][SIZE], int mat2[SIZE][SIZE], int result[SIZE][SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrices(int mat1[SIZE][SIZE], int mat2[SIZE][SIZE], int result[SIZE][SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int mat1[SIZE][SIZE], int mat2[SIZE][SIZE], int result[SIZE][SIZE], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0; // Initialize result matrix element to 0
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int mat1[SIZE][SIZE], mat2[SIZE][SIZE], result[SIZE][SIZE];
    int rows1, cols1, rows2, cols2;
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d%d", &rows1, &cols1);

    printf("Enter rows and columns for the second matrix: ");
    scanf("%d%d", &rows2, &cols2);

    if (rows1 != rows2 || cols1 != cols2) {
        printf("Addition and subtraction require both matrices to have the same dimensions.\n");
    }

    if (cols1 != rows2) {
        printf("Multiplication requires the number of columns in the first matrix to be equal to the number of rows in the second matrix.\n");
        return 0;
    }
    printf("Enter elements of the first matrix:\n");
    inputMatrix(mat1, rows1, cols1);

    printf("Enter elements of the second matrix:\n");
    inputMatrix(mat2, rows2, cols2);

    if (rows1 == rows2 && cols1 == cols2) {
        addMatrices(mat1, mat2, result, rows1, cols1);
        printf("\nMatrix Addition:\n");
        displayMatrix(result, rows1, cols1);
    }
    if (rows1 == rows2 && cols1 == cols2) {
        subtractMatrices(mat1, mat2, result, rows1, cols1);
        printf("\nMatrix Subtraction:\n");
        displayMatrix(result, rows1, cols1);
    }

    
    if (cols1 == rows2) {
        multiplyMatrices(mat1, mat2, result, rows1, cols1, cols2);
        printf("\nMatrix Multiplication:\n");
        displayMatrix(result, rows1, cols2);
    }

    return 0;
}
