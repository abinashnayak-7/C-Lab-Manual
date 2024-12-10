// Write a program to take a number as input and check whether it is even or odd using
// conditional operator.

#include <stdio.h>
#include <conio.h>

void main()
{
    int num, remainder;

    printf("Enter a Natural Number to check either the number is Even or Odd : ");
    scanf("%d", &num);

    remainder = num % 2;

    (remainder == 0) ? printf("Number is Even.") : printf("Number is Odd.");

    getch();
}