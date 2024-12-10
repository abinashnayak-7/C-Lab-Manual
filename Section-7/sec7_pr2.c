// Write a program to input a square matrix (a matrix of order n × n) and then print its upper
// triangular matrix.

#include <stdio.h>

void printUpperTriangularMatrix(int n, int matrix[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j >= i) {
                printf("%d ", matrix[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the order of the matrix (n): ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The upper triangular matrix is:\n");
    printUpperTriangularMatrix(n, matrix);

    return 0;
}
