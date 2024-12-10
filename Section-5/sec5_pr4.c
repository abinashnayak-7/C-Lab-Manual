// Write a program that takes as input an integer ‘n’ and computes the following series: 
// 1 - (2/3!) + (3/4!) - (4/5!) + .... ± (n/(n+1)!).

#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    double sum = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // Calculate (i+1)! directly
        long long factorial = 1;
        for (int j = 1; j <= i + 1; j++)
        {
            factorial *= j;
        }

        // Calculate the term i/(i+1)!
        double term = (double)i / factorial;

        // Alternate addition and subtraction
        if (i % 2 == 0)
        {
            sum -= term; // Subtract for even terms
        }
        else
        {
            sum += term; // Add for odd terms
        }
    }

    printf("The result of the series is: %.6lf\n", sum);

    getch();
    return 0;
}
