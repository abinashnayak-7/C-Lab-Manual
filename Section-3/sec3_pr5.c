// Write a program to read a four-digit integer and print the sum of its digits.

#include <stdio.h>
#include <conio.h>

void main() {
    int number, sum = 0;

    printf("Enter a four-digit number: ");
    scanf("%d", &number);

    sum += number % 10;
    number /= 10;
    
    sum += number % 10;
    number /= 10;
    
    sum += number % 10;
    number /= 10;
    
    sum += number;

    printf("Sum of the digits: %d\n", sum);

    getch();
}
