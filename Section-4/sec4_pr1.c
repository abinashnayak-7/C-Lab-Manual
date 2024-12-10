// Write a program to input three numbers and find out the smallest.

#include <stdio.h>
#include <conio.h>

void main()
{
    int num1, num2, num3;

    printf("Enter three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 < num2 && num1 < num3)
    {
        printf("First number is smallest.");
    }

    else if (num2 < num1 && num2 < num3)
    {
        printf("Second number is smallest.");
    }

    else
    {
        printf("Third Number is smallest.");
    }

    getch();
}