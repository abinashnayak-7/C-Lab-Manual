// Write a program using function to input a m x n matrix (of integers) and then find the largest, the 2nd largest, the smallest, and the 2nd smallest numbers in it.

#include <stdio.h>
#include <limits.h>

void inputMatrix(int matrix[100][100], int m, int n)
{
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void findExtremes(int matrix[100][100], int m, int n, int *largest, int *secondLargest, int *smallest, int *secondSmallest)
{
    *largest = *secondLargest = INT_MIN;
    *smallest = *secondSmallest = INT_MAX;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int value = matrix[i][j];

            if (value > *largest)
            {
                *secondLargest = *largest;
                *largest = value;
            }
            else if (value > *secondLargest && value != *largest)
            {
                *secondLargest = value;
            }

            if (value < *smallest)
            {
                *secondSmallest = *smallest;
                *smallest = value;
            }
            else if (value < *secondSmallest && value != *smallest)
            {
                *secondSmallest = value;
            }
        }
    }
}

int main()
{
    int m, n;
    printf("Enter the dimensions of the matrix (m n): ");
    scanf("%d %d", &m, &n);

    int matrix[100][100];
    inputMatrix(matrix, m, n);

    int largest, secondLargest, smallest, secondSmallest;
    findExtremes(matrix, m, n, &largest, &secondLargest, &smallest, &secondSmallest);

    printf("Largest: %d\n", largest);
    printf("Second Largest: %d\n", secondLargest);
    printf("Smallest: %d\n", smallest);
    printf("Second Smallest: %d\n", secondSmallest);

    return 0;
}
