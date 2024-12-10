// Write a program that will count the number of occurrences of a specific character in a
// given line of text.

#include <stdio.h>

int countOccurrences(char str[], char ch)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char str[100], ch;
    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to count: ");
    scanf("%c", &ch);

    // Remove newline character if present in the input string
    if (str[countOccurrences(str, '\n')] == '\n')
    {
        str[countOccurrences(str, '\n')] = '\0';
    }

    int occurrences = countOccurrences(str, ch);
    printf("The character '%c' appears %d times.\n", ch, occurrences);

    return 0;
}
