// Write a program to enter the marks obtained by a student in
// different subjects and calculate the % of marks obtained in aggregate as per the following conditions:
// − If the aggregate mark is less than 30%, print fail.
// − If the aggregate mark is between 30% to 49%, print 3rd division.
// − If the aggregate mark is between 50% to 69%, print 2nd division.
// − If the aggregate mark is equal to or above 70%, print 1st division.
#include <stdio.h>

int main()
{
    float marks1, marks2, marks3, marks4, marks5, total, percentage;

    printf("Enter marks for subject 1: ");
    scanf("%f", &marks1);

    printf("Enter marks for subject 2: ");
    scanf("%f", &marks2);

    printf("Enter marks for subject 3: ");
    scanf("%f", &marks3);

    printf("Enter marks for subject 4: ");
    scanf("%f", &marks4);
    
    printf("Enter marks for subject 5: ");
    scanf("%f", &marks5);

    total = marks1 + marks2 + marks3 + marks4 + marks5;
    percentage = (total / 500) * 100; // Assuming each subject is out of 100 marks

    printf("Total marks obtained: %.2f\n", total);
    printf("Aggregate percentage: %.2f%%\n", percentage);

    if (percentage < 30)
    {
        printf("Result: Fail\n");
    }
    else if (percentage >= 30 && percentage < 50)
    {
        printf("Result: 3rd Division\n");
    }
    else if (percentage >= 50 && percentage < 70)
    {
        printf("Result: 2nd Division\n");
    }
    else if (percentage >= 70)
    {
        printf("Result: 1st Division\n");
    }

    return 0;
}
