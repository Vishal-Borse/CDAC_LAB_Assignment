// Q15. Input a string from the user. Count occurrences (case insensitive) of
// each alphabet in the string.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[100];
    int count[26] = {0}; // Array to store count of each alphabet

    // Input string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Removes trailing newline character

    // Count occurrences of each alphabet
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]); // Convert character to lowercase
        if (ch >= 'a' && ch <= 'z')
        {
            count[ch - 'a']++; // Increment the count of the corresponding alphabet
        }
    }

    // Print the result
    printf("Occurrences of each alphabet:\n");
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("%c : %d\n", 'A' + i, count[i]);
        }
    }

    return 0;
}
