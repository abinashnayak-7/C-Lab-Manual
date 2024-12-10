// Write a program to find the number of and sum of all integers greater than 100 and less
// than 200 that are divisible by 7.

#include <stdio.h>
#include <conio.h>

int main()
{
    int count = 0, sum = 0;

    for (int i = 101; i < 200; i++)
    {
        if (i % 7 == 0)
        { // Check divisibility by 7
            count++;
            sum += i;
        }
    }

    printf("Count of integers divisible by 7: %d\n", count);
    printf("Sum of these integers: %d\n", sum);

    getch();
    return 0;
}
