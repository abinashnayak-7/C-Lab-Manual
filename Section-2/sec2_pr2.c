// Write a program that takes as input, the principal, rate of interest, and time, and then
// calculates the simple and compound interest.

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int n;
    float principal, rateOfInterest, year;
    float simpleInterest, total, compoundInterest;

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

    printf("\nCompound Interest is : %.2f", compoundInterest);

    getch();
}