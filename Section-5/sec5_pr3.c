// Write a program to count the number of digits in a number.

#include <stdio.h>
#include <conio.h>

int main()
{
    int number, count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0)
        number = -number; // Handle negative numbers

    while (number != 0)
    {
        count++;
        number /= 10;
    }

    printf("Number of digits: %d", count);

    getch(); 
    return 0;
}
