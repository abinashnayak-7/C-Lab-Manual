// Write a program that finds the sum of diagonal elements of a square matrix.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the order of the square matrix (n): ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sumPrimaryDiagonal = 0, sumSecondaryDiagonal = 0;
    for (int i = 0; i < n; i++) {
        sumPrimaryDiagonal += matrix[i][i];
        sumSecondaryDiagonal += matrix[i][n - i - 1];
    }

    printf("Sum of the primary diagonal elements: %d\n", sumPrimaryDiagonal);
    printf("Sum of the secondary diagonal elements: %d\n", sumSecondaryDiagonal);

    return 0;
}
