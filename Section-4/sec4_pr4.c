// Write a program that will read the value of x and evaluate the following function:

// y = 1 for x > 0
// y = 0 for x = 0
// y = -1 for x < 0

#include <stdio.h>
#include <conio.h>

void main()
{
    int x;

    printf("Enter a number : ");
    scanf("%d", &x);

    if (x > 0)
    {
        printf("1");
    }

    else if (x = 0)
    {
        printf("0");
    }

    else
    {
        printf("-1");
    }

    getch();
}
