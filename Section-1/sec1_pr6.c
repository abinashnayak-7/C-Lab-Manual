// Write a program to swap two numbers without using a third variable.

#include <stdio.h>
#include <conio.h>

void main()
{

    int num1, num2;

    printf("Enter two numbers to swap : ");
    scanf("%d %d", &num1, &num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("The two numbers after swapping is : %d %d", num1, num2);
    getch();
}