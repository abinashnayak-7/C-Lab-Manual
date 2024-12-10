// Write a program to input ‘n’ numbers and print the 2nd largest and 2nd smallest number.

#include <stdio.h>

int main()
{
    int n, i, j, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Sorting the array
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                // Swap elements
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int second_smallest = arr[1];
    int second_largest = arr[n - 2];

    printf("The 2nd smallest number is %d\n", second_smallest);
    printf("The 2nd largest number is %d\n", second_largest);

    return 0;
}
