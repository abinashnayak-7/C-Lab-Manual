// Write a program to input a square matrix and check whether it is
// symmetric or not (A matrix A = (aij) is symmetric if aij = aji, for all i and j).

#include <stdio.h>

#define MAX 100

void inputMatrix(int matrix[MAX][MAX], int n)
{
    printf("Enter the elements of the %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[MAX][MAX], int n)
{
    printf("The matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int isSymmetric(int matrix[MAX][MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                return 0; // Matrix is not symmetric
            }
        }
    }
    return 1; // Matrix is symmetric
}

int main()
{
    int n, matrix[MAX][MAX];

    printf("Enter the order of the square matrix (n): ");
    scanf("%d", &n);

    if (n > MAX || n <= 0)
    {
        printf("Invalid matrix size.\n");
        return 1;
    }

    inputMatrix(matrix, n);
    displayMatrix(matrix, n);

    if (isSymmetric(matrix, n))
    {
        printf("The matrix is symmetric.\n");
    }
    else
    {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
