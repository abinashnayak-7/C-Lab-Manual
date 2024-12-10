// Rewrite the program mentioned in Experiment 2 However, rename the data types
// ‘float’ to ‘Decimal’ and ‘int’ to ‘integer’ by using typedef statement.

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    typedef float Decimal;
    typedef int Integer;
    
    Integer n;
    Decimal principal, rateOfInterest, year;
    Decimal simpleInterest, total, compoundInterest;

    printf("Enter Principal : ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest : ");
    scanf("%f", &simpleInterest);

    printf("Enter Year : ");
    scanf("%f", &year);

    simpleInterest = (principal * simpleInterest * year) / 100;
    printf("Simple Interest is : %.2f", simpleInterest);

    printf("\n\nEnter the number of time the interest is compounded in a year : ");
    scanf("%d", &n);

    total = principal * ((1 + (rateOfInterest / n)), (n * year));
    compoundInterest = total - principal;

    printf("\nCompound Interest is : %f", compoundInterest);

    getch();
}