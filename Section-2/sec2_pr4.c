// Write a program to read the price of an item in decimal form and print the
// output in paise

#include <stdio.h>
#include <conio.h>

void main()
{
    float rupee, paise;

    printf("Enter Rupee : ");
    scanf("%f", &rupee);

    paise = rupee * 100;

    printf("\nIn Paise : %.0f Paise", paise);
    

    getch();
}