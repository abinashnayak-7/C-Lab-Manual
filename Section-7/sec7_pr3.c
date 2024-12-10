// Write a program that finds the sum of each row and sum of each column of a matrix.

#include <stdio.h>

void calculateSums(int n, int m, int matrix[n][m]) {
    int rowSum[n], colSum[m];

    // Initialize sums to 0
    for (int i = 0; i < n; i++) rowSum[i] = 0;
    for (int j = 0; j < m; j++) colSum[j] = 0;

    // Calculate sums
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }

    // Print sums
    printf("Sum of each row:\n");
    for (int i = 0; i < n; i++) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }

    printf("Sum of each column:\n");
    for (int j = 0; j < m; j++) {
        printf("Column %d: %d\n", j + 1, colSum[j]);
    }
}

int main() {
    int n, m;
    printf("Enter the number of rows (n): ");
    scanf("%d", &n);
    printf("Enter the number of columns (m): ");
    scanf("%d", &m);

    int matrix[n][m];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    calculateSums(n, m, matrix);

    return 0;
}
