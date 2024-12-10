// Write a program to input a number and print “ODD” if the number is odd and “EVEN” if
// the number is even.

#include <stdio.h>
#include <conio.h>

void main()
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    if (num >=1 && num % 2 == 0)
    {
        printf("It's an even number.");
    }

    else if (num <= 0)
    {
        printf("Enter a natural number.");
    }

    else 
    {
        printf("It's an odd number.");
    }

    getch();
}