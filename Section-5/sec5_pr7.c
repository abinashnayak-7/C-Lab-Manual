// Write a program to input a number and check whether it is palindrome or not.

#include <stdio.h>
#include <conio.h>

int main()
{
    int num, reversed = 0, remainder, original;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; // Store the original number

    // Count the number of digits in the number
    int digits = 0;
    for (int temp = num; temp != 0; temp /= 10)
    {
        digits++;
    }

    // Reverse the number using a for loop
    for (int i = 1; i <= digits; i++)
    {
        remainder = num % 10;                 // Get the last digit
        reversed = reversed * 10 + remainder; // Append it to the reversed number
        num /= 10;                            // Remove the last digit
    }

    // Check if the number is a palindrome
    if (original == reversed)
    {
        printf("%d is a palindrome.\n", original);
    }
    else
    {
        printf("%d is not a palindrome.\n", original);
    }

    getch();
    return 0;
}
