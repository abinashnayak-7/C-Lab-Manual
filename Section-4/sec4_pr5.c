// An electricity board charges the following rates for the use of electricity.
// − For the first 200 units: 80 paise per unit
// − For the next 100 units: Rs. 1.30 per unit
// − Beyond 300 units: Rs. 2.00 per unit
// All users are charged a minimum of Rs. 100 as meter charge. If the total amount is more that Rs. 400, then
// an additional surcharge of 15% of total amount is charged. Write a program to read the name of a
// consumer and the number of units consumed and print the charge with his/her name.

#include <stdio.h>
#include <conio.h>

int main()
{
    char name[50];
    int units;
    float charge = 0.0;

    // Get input from user
    printf("Enter consumer name: ");
    scanf("%s", name);
    printf("Enter number of units consumed: ");
    scanf("%d", &units);

    // Calculate charge based on unit consumption
    if (units <= 200)
    {
        charge = units * 0.80;
    }
    else if (units <= 300)
    {
        charge = 200 * 0.80 + (units - 200) * 1.30;
    }
    else
    {
        charge = 200 * 0.80 + 100 * 1.30 + (units - 300) * 2.00;
    }

    // Add meter charge
    charge += 100;

    // Apply surcharge if total amount exceeds Rs. 400
    if (charge > 400)
    {
        charge += charge * 0.15;
    }

    // Print the consumer name and total charge
    printf("Consumer Name: %s\n", name);
    printf("Total Charge: Rs. %.2f\n", charge);

    getch();
    return 0;
}
