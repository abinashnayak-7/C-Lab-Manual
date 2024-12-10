// Write a function using pointers that compares two integer arrays to see whether they
// are identical. The function returns 1 if they are identical, 0 otherwise.

#include <stdio.h>

// Function to compare two arrays using pointers
int compareArrays(int *arr1, int *arr2, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (*(arr1 + i) != *(arr2 + i))
        {
            return 0; // Arrays are not identical
        }
    }
    return 1; // Arrays are identical
}

int main()
{
    int n;

    // Input the size of the arrays
    printf("Enter the number of elements in the arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    // Input the elements of the first array
    printf("Enter elements of the first array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Input the elements of the second array
    printf("Enter elements of the second array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Compare the arrays
    if (compareArrays(arr1, arr2, n))
    {
        printf("The arrays are identical.\n");
    }
    else
    {
        printf("The arrays are not identical.\n");
    }

    return 0;
}
