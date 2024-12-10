// Write a program to find out the length of a string without using the strlen() function.

#include <stdio.h>

int findStringLength(char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    if (str[findStringLength(str) - 1] == '\n')
    {
        str[findStringLength(str) - 1] = '\0';
    }

    int length = findStringLength(str);
    printf("The length of the string is: %d\n", length);

    return 0;
}
