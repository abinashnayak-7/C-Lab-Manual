// Write a program to input a number and check whether it is prefect or not.

#include <stdio.h>
#include <conio.h>

int main()
{
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the sum of proper divisors
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    // Check if the sum of proper divisors is equal to the number
    if (sum == num)
    {
        printf("%d is a perfect number.\n", num);
    }
    else
    {
        printf("%d is not a perfect number.\n", num);
    }

    getch();
    return 0;
}
