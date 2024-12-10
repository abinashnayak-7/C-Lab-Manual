// Write a program to compute the area of a triangle given its three sides.

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    float side1, side2, side3;
    float semiPerimeter, area;

    printf("Enter the three sides of a Triangle (in cm): ");
    scanf("%f %f %f", &side1, &side2, &side3);

    semiPerimeter = (side1 + side2 + side3) / 2;
    area = sqrt(semiPerimeter * (semiPerimeter - side1) * (semiPerimeter - side2) * (semiPerimeter - side3));

    printf("Area of the Triangle is : %.2f sq.cm", area);
    getch();
}