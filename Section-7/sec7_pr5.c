// Write a menu-based program that takes two matrixes A and B as input and displays the
// results of the following operations based on user’s choice.
// 1. A + B
// 2. A - B
// 3. B - A
// 4. A × B

#include <stdio.h>

void addMatrices(int n, int m, int A[n][m], int B[n][m], int result[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void subtractMatrices(int n, int m, int A[n][m], int B[n][m], int result[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

void multiplyMatrices(int n, int m, int p, int A[n][m], int B[m][p], int result[n][p])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void printMatrix(int n, int m, int matrix[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n, m, p;
    printf("Enter the number of rows and columns of matrix A (n m): ");
    scanf("%d %d", &n, &m);
    printf("Enter the number of columns of matrix B (p): ");
    scanf("%d", &p);

    int A[n][m], B[m][p], result[n][p];
    printf("Enter the elements of matrix A:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the elements of matrix B:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    int choice;
    printf("Menu:\n");
    printf("1. A + B\n");
    printf("2. A - B\n");
    printf("3. B - A\n");
    printf("4. A × B\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        if (n != m || m != p)
        {
            printf("Matrices cannot be added. Dimensions mismatch.\n");
        }
        else
        {
            addMatrices(n, m, A, B, result);
            printf("Result of A + B:\n");
            printMatrix(n, p, result);
        }
        break;
    case 2:
        if (n != m || m != p)
        {
            printf("Matrices cannot be subtracted. Dimensions mismatch.\n");
        }
        else
        {
            subtractMatrices(n, m, A, B, result);
            printf("Result of A - B:\n");
            printMatrix(n, p, result);
        }
        break;
    case 3:
        if (n != m || m != p)
        {
            printf("Matrices cannot be subtracted. Dimensions mismatch.\n");
        }
        else
        {
            subtractMatrices(n, m, B, A, result);
            printf("Result of B - A:\n");
            printMatrix(n, p, result);
        }
        break;
    case 4:
        if (m != p)
        {
            printf("Matrices cannot be multiplied. Dimensions mismatch.\n");
        }
        else
        {
            multiplyMatrices(n, m, p, A, B, result);
            printf("Result of A × B:\n");
            printMatrix(n, p, result);
        }
        break;
    default:
        printf("Invalid choice.\n");
    }

    return 0;
}
