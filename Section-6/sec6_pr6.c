#include <stdio.h>

#define MAX 100

void traverse(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insert(int arr[], int *size, int element, int position)
{
    if (*size >= MAX)
    {
        printf("Array is full. Cannot insert new element.\n");
        return;
    }
    for (int i = *size; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    (*size)++;
}

void delete(int arr[], int *size, int position)
{
    if (*size <= 0)
    {
        printf("Array is empty. Cannot delete element.\n");
        return;
    }
    for (int i = position; i < *size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

int search(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
            return i;
    }
    return -1;
}

void sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void merge(int arr1[], int size1, int arr2[], int size2, int result[])
{
    for (int i = 0; i < size1; i++)
    {
        result[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        result[size1 + i] = arr2[i];
    }
}

int main()
{
    int A[MAX], B[MAX], C[2 * MAX];
    int sizeA, sizeB, choice, element, position;

    printf("Enter the size of array A: ");
    scanf("%d", &sizeA);
    printf("Enter the elements of array A:\n");
    for (int i = 0; i < sizeA; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Enter the size of array B: ");
    scanf("%d", &sizeB);
    printf("Enter the elements of array B:\n");
    for (int i = 0; i < sizeB; i++)
    {
        scanf("%d", &B[i]);
    }

    do
    {
        printf("\n--- Menu ---\n");
        printf("1. Traverse A\n");
        printf("2. Traverse B\n");
        printf("3. Insert in A\n");
        printf("4. Insert in B\n");
        printf("5. Delete from A\n");
        printf("6. Delete from B\n");
        printf("7. Search in A\n");
        printf("8. Search in B\n");
        printf("9. Sort A\n");
        printf("10. Sort B\n");
        printf("11. Merge A and B into C\n");
        printf("12. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Array A: ");
            traverse(A, sizeA);
            break;
        case 2:
            printf("Array B: ");
            traverse(B, sizeB);
            break;
        case 3:
            printf("Enter element to insert in A: ");
            scanf("%d", &element);
            printf("Enter position to insert (0-based index): ");
            scanf("%d", &position);
            if (position >= 0 && position <= sizeA)
            {
                insert(A, &sizeA, element, position);
            }
            else
            {
                printf("Invalid position.\n");
            }
            break;
        case 4:
            printf("Enter element to insert in B: ");
            scanf("%d", &element);
            printf("Enter position to insert (0-based index): ");
            scanf("%d", &position);
            if (position >= 0 && position <= sizeB)
            {
                insert(B, &sizeB, element, position);
            }
            else
            {
                printf("Invalid position.\n");
            }
            break;
        case 5:
            printf("Enter position to delete from A (0-based index): ");
            scanf("%d", &position);
            if (position >= 0 && position < sizeA)
            {
                delete (A, &sizeA, position);
            }
            else
            {
                printf("Invalid position.\n");
            }
            break;
        case 6:
            printf("Enter position to delete from B (0-based index): ");
            scanf("%d", &position);
            if (position >= 0 && position < sizeB)
            {
                delete (B, &sizeB, position);
            }
            else
            {
                printf("Invalid position.\n");
            }
            break;
        case 7:
            printf("Enter element to search in A: ");
            scanf("%d", &element);
            position = search(A, sizeA, element);
            if (position != -1)
            {
                printf("Element found at index %d\n", position);
            }
            else
            {
                printf("Element not found in A.\n");
            }
            break;
        case 8:
            printf("Enter element to search in B: ");
            scanf("%d", &element);
            position = search(B, sizeB, element);
            if (position != -1)
            {
                printf("Element found at index %d\n", position);
            }
            else
            {
                printf("Element not found in B.\n");
            }
            break;
        case 9:
            sort(A, sizeA);
            printf("Array A sorted.\n");
            break;
        case 10:
            sort(B, sizeB);
            printf("Array B sorted.\n");
            break;
        case 11:
            merge(A, sizeA, B, sizeB, C);
            printf("Merged array C: ");
            traverse(C, sizeA + sizeB);
            break;
        case 12:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 12);

    return 0;
}
