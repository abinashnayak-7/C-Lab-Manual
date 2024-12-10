// Write a program using pointers to input a 4X5 matrix and then display it.

#include <stdio.h>

int main()
{
    int matrix[4][5];
    int *ptr = &matrix[0][0];

    // Input the matrix
    printf("Enter the elements of the 4x5 matrix:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", (ptr + i * 5 + j));
        }
    }

    // Display the matrix
    printf("\nThe 4x5 matrix is:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", *(ptr + i * 5 + j));
        }
        printf("\n");
    }

    return 0;
}
