// Write a program to input a character and check whether it is in upper case or lower case
// using conditional operator.

#include <stdio.h>
#include <conio.h>

void main(){
    char c;

    printf("Enter an Alphabet : ");
    scanf("%c", &c);

    (c >= 'A' && c <= 'Z') ? printf("It's in Upper Case.") :
    (c >= 'a' && c <= 'z') ? printf("It's in Lower Case.") :
    printf("It's not an Alphabet");

    getch();
}