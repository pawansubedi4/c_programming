#include <stdio.h>
int main() 
{
    int A[10][10], B[10][10], result[10][10];
    int rowsA, colsA, rowsB, colsB;
    printf("Enter number of rows and columns for matrix A: ");
    scanf("%d %d", &rowsA, &colsA);
    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < rowsA; i++)
	{
        for (int j = 0; j < colsA; j++)
		{
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter number of rows and columns for matrix B: ");
    scanf("%d %d", &rowsB, &colsB);
    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < rowsB; i++) 
	{
        for (int j = 0; j < colsB; j++) 
		{
            scanf("%d", &B[i][j]);
        }
    }
    printf("Result of Matrix Multiplication:\n");
    for (int i = 0; i < rowsA; i++) 
	{
        for (int j = 0; j < colsB; j++) 
		{
			result[i][j]=0;
            for (int k = 0; k < colsA; k++) 
			{
                result[i][j] += A[i][k] * B[k][j];  
            }
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}

