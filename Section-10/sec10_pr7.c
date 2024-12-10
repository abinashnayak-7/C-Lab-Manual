// Write a function using pointers to add two matrices and return the resultant matrix. Use
// this function within the main function to add two matrices.

#include <stdio.h>

// Function to add two matrices using pointers
void addMatrices(int *result, int *matrix1, int *matrix2, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *(result + i * n + j) = *(matrix1 + i * n + j) + *(matrix2 + i * n + j);
        }
    }
}

int main()
{
    int m, n;
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    int matrix1[m][n], matrix2[m][n], result[m][n];

    // Input matrix1
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input matrix2
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add the two matrices
    addMatrices((int *)result, (int *)matrix1, (int *)matrix2, m, n);

    // Display the resultant matrix
    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
