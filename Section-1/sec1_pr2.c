// Write a program to enter the temperature in degree Celsius and display it in Fahrenheit

#include <stdio.h>
#include <conio.h>

void main()
{

    float celcius, fahrenheit;

    printf("Enter temperature in celcius : ");
    scanf("%f", &celcius);

    fahrenheit = (celcius * 9 / 5) + 32;

    printf("\nTemperature in fahrenheit is : %.2f", fahrenheit);
    getch();
}