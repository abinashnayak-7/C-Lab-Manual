// Write a program to print ;

// 4 3 2 1 2 3 4
//   3 2 1 2 3
//     2 1 2
//       1

#include <stdio.h>
#include <conio.h>

int main()
{
    int rows, space;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = rows; i >= 1; i--)
    {
        // Print leading spaces
        for (space = rows - i; space > 0; space--)
        {
            printf("  ");
        }

        // Print decreasing numbers
        for (int j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }

        // Print increasing numbers
        for (int k = 2; k <= i; k++)
        {
            printf("%d ", k);
        }

        // Move to the next line
        printf("\n");
    }
    getch();
    return 0;
}
