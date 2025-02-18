#include <stdio.h>

int main() {
    int A[10][10], B[10][10], result[10][10];
    int rowsA, colsA, rowsB, colsB;

    // Input matrix A
    printf("Enter number of rows and columns for matrix A: ");
    scanf("%d %d", &rowsA, &colsA);
    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input matrix B
    printf("Enter number of rows and columns for matrix B: ");
    scanf("%d %d", &rowsB, &colsB);
    if (colsA != rowsB) {
        printf("Matrix multiplication is not possible. The number of columns in A must be equal to the number of rows in B.\n");
        return 1;
    }
    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize the result matrix to zero
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display the result matrix
    printf("Result of Matrix Multiplication:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

