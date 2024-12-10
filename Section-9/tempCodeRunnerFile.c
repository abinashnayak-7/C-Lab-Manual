// Write a program using pointers to read an array of integers and print its elements in
// reverse order.

#include <stdio.h>

int main()
{
    int n;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }

    // Print the elements in reverse order
    printf("Array elements in reverse order:\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
