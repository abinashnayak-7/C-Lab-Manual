// Write a program that takes an integer ‘n’ as input and prints the Fibonacci series up to
// ‘n’.

#include <stdio.h>
#include <conio.h>

int main()
{
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d: ", n);

    while (nextTerm <= n)
    {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    getch();
    return 0;
}
