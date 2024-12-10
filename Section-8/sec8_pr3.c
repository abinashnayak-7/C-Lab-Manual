// Write a program that takes as input a string and two numbers n1 and n2 and find the
// substring between these two positions. For example, let the string is “Welcome” and the numbers are
// n1=2 and n2=5 then the substring will be: “lcom”.

#include <stdio.h>

void findSubstring(char str[], int n1, int n2)
{
    printf("The substring between positions %d and %d is: ", n1, n2);
    for (int i = n1; i <= n2; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main()
{
    char str[100];
    int n1, n2;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the starting position (n1): ");
    scanf("%d", &n1);

    printf("Enter the ending position (n2): ");
    scanf("%d", &n2);

    // Remove newline character if present
    if (str[n1 - 1] == '\n')
    {
        str[n1 - 1] = '\0';
    }

    if (n1 >= 0 && n2 >= n1)
    {
        findSubstring(str, n1, n2);
    }
    else
    {
        printf("Invalid positions.\n");
    }

    return 0;
}
