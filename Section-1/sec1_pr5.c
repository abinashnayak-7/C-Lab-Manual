// Write a program that takes the radius of a circle and displays its area and perimeter.

#include <stdio.h>
#include <conio.h>
#define PI 3.141

void main()
{
    float radius;
    float perimeter, area;

    printf("Enter the radius of the Circle : ");
    scanf("%f", &radius);

    perimeter = 2 * PI * radius;
    printf("Perimeter of the Circle is : %.2f", perimeter);

    area = PI * radius * radius;
    printf("\nArea of the Circle is : %.2f", area);

    getch();
}