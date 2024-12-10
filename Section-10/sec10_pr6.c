// Using pointers, write a function that receives a character string and a character as
// arguments and deletes all occurrence of this character in the string. The function should return the
// corrected string with no holes.

#include <stdio.h>
#include <string.h>

// Function to remove all occurrences of a character
void removeCharacter(char *str, char ch)
{
    char *src = str, *dst = str;

    while (*src != '\0')
    {
        if (*src != ch)
        {
            *dst = *src;
            dst++;
        }
        src++;
    }
    *dst = '\0'; // Null terminate the string
}

int main()
{
    char str[100], ch;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character from the input
    if (str[strlen(str) - 1] == '\n')
    {
        str[strlen(str) - 1] = '\0';
    }

    // Input the character to be removed
    printf("Enter the character to remove: ");
    scanf("%c", &ch);

    // Remove the character from the string
    removeCharacter(str, ch);

    // Display the corrected string
    printf("String after removal: %s\n", str);

    return 0;
}
