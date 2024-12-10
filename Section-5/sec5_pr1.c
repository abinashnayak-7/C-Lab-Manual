// Write a program to print a Pyramid Star pattern

#include <stdio.h>
#include <conio.h>

int main()
{
    int rows, space;

    printf("Enter the number of rows for the Pyramid: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        // Print spaces
        for (space = 1; space <= rows - i; space++)
        {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }
    getch();

    return 0;
}
