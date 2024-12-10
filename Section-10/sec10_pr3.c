// Use recursive function calls to evaluate the following series: x - (x3/3!) + (x5/5!) - (x7/7!) + ...

#include <stdio.h>
#include <math.h>

// Function to calculate factorial
long long factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

// Recursive function to evaluate the series
double evaluateSeries(double x, int n)
{
    if (n == 1)
    {
        return x;
    }
    // Calculate the current term: x^(2*n-1) / (2*n-1)!
    double term = ((n % 2 == 0 ? -1 : 1) * pow(x, 2 * n - 1)) / factorial(2 * n - 1);
    // Recursive call to add the remaining series
    return term + evaluateSeries(x, n - 1);
}

int main()
{
    double x;
    int terms;

    // Input the value of x and number of terms
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    // Evaluate the series
    double result = evaluateSeries(x, terms);

    // Display the result
    printf("The result of the series is: %lf\n", result);

    return 0;
}
