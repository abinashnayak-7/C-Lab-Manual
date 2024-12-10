// Write a program that reads two strings and then compares them without using the
// strcmp() function.

#include <stdio.h>

int compareStrings(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    int length1 = 0, length2 = 0;
    while (str1[length1] != '\0') length1++;
    while (str2[length2] != '\0') length2++;

    if (str1[length1 - 1] == '\n') str1[length1 - 1] = '\0';
    if (str2[length2 - 1] == '\n') str2[length2 - 1] = '\0';

    int result = compareStrings(str1, str2);
    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("The first string is less than the second string.\n");
    } else {
        printf("The first string is greater than the second string.\n");
    }

    return 0;
}
