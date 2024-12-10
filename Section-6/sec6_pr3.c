// Write a program to read ‘n’ characters and then delete the duplicate characters.

#include <stdio.h>

int main()
{
    int n, i, j, k;

    printf("Enter the number of characters: ");
    scanf("%d", &n);

    char arr[n], result[n];

    printf("Enter %d characters: ", n);
    for (i = 0; i < n; i++)
    {
        scanf(" %c", &arr[i]);
    }

    // Copy unique characters to result array
    int index = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < index; j++)
        {
            if (arr[i] == result[j])
            {
                break;
            }
        }
        if (j == index)
        {
            result[index++] = arr[i];
        }
    }

    printf("Characters after deleting duplicates:\n");
    for (i = 0; i < index; i++)
    {
        printf("%c ", result[i]);
    }

    return 0;
}
