// Write a program to compute the smallest of three numbers.

#include <stdio.h>
#include <conio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int smallest = num1;

    if (num2 < smallest)
    {
        smallest = num2;
    }
    if (num3 < smallest)
    {
        smallest = num3;
    }

    printf("Smallest of the three number is : %d\n", smallest);
    getch();

    return 0;
}