// Write a program to input a character and check whether it is a vowel or consonant using
// conditional operator.

#include <stdio.h>
#include <conio.h>

void main()
{
    char ch;

    printf("Enter an Alphabet: ");
    scanf(" %c", &ch);

    (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') ? ((ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ? printf("%c is a vowel.\n", ch) : printf("%c is a consonant.\n", ch)) : printf("%c is not an Alphabet.\n", ch);

    getch();
}
