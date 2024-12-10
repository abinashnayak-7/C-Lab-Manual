// Write a program to read ‘n’ real numbers and then insert a new real number at a given
// position (after insertion, the array size should increase by 1).

#include <stdio.h>

int main()
{
    int n, i, position;
    float new_number;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float arr[n + 1]; // Array size increased by 1 to accommodate the new element

    printf("Enter %d real numbers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }

    printf("Enter the new real number to insert: ");
    scanf("%f", &new_number);

    printf("Enter the position (0 to %d) to insert the new number: ", n - 1);
    scanf("%d", &position);

    // Shift elements to the right from the specified position
    for (i = n; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert the new number at the specified position
    arr[position] = new_number;
    n++; // Increase the size of the array

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%.2f ", arr[i]);
    }

    return 0;
}
