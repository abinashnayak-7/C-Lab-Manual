// Write a program to swap two numbers.

#include <stdio.h>
#include <conio.h>

void main()
{

    int num1, num2;
    int store;

    printf("Enter two numbers to swap : ");
    scanf("%d %d", &num1, &num2);

    store = num1;
    num1 = num2;
    num2 = store;

    printf("The numbers after swapping are : %d %d", num1, num2);
    getch();
}