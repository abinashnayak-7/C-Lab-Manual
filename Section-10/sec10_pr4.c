// Write a program using function to input a m x n matrix (of integers) and then transpose
// it.

#include <stdio.h>

// Function to input the matrix
void inputMatrix(int matrix[][100], int m, int n)
{
    printf("Enter the elements of the %d x %d matrix:\n", m, n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to transpose the matrix
void transposeMatrix(int matrix[][100], int transpose[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
}

// Function to display the matrix
void displayMatrix(int matrix[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int m, n;
    int matrix[100][100], transpose[100][100];

    // Input the dimensions of the matrix
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    // Input the matrix
    inputMatrix(matrix, m, n);

    // Transpose the matrix
    transposeMatrix(matrix, transpose, m, n);

    // Display the transposed matrix
    printf("The transposed matrix is:\n");
    displayMatrix(transpose, n, m);

    return 0;
}
