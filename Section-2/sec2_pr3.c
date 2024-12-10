// Write a program that requests two float type numbers from the user and then divides the
// 1st number by the 2nd and displays the result along with the numbers.

#include <stdio.h>
#include <conio.h>

void main()
{
    float a, b, product;

    printf("Enter value of A : ");
    scanf("%f", &a);

    printf("Enter value of B : ");
    scanf("%f", &b);

    product = a * b;
    printf("Product of A and B : %f", product);

    getch();
}