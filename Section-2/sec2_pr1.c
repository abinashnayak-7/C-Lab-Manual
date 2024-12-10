// Write a program to compute the area of a triangle given its base and height.

#include <stdio.h>
#include <conio.h>

void main()
{

    float base, height;
    float area;

    printf("Enter Base of Triangle : ");
    scanf("%f", &base);

    printf("Enter Height of Triangle : ");
    scanf("%f", &height);

    area = (base * height) / 2;

    printf("Area of the Triangle = %.2f squnit", area);
    

    getch();
}