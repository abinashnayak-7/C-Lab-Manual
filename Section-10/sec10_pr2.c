// Write a program using function to take a string as input and then convert all lowercase
// characters to its uppercase equivalent.

#include <stdio.h>
#include <ctype.h>

// Function to convert lowercase characters to uppercase
void toUpperCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}

int main() {
    char str[100];

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert to uppercase
    toUpperCase(str);

    // Display the converted string
    printf("Uppercase string: %s", str);

    return 0;
}
