// Write a program to enter the temperature in farenheit and display it in degree celcius

#include <stdio.h>
#include <conio.h>

int main()
{

    float fahrenheit, celcius;

    printf("Enter Temperature in Fahrenheit : ");
    scanf("%f", &fahrenheit);

    celcius = (fahrenheit - 32) * 5 / 9;

    printf("Temperature in Celsius is : %.2f", celcius);
    getch();

    return 0;
}