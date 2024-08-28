// Q5. Write a program to check the input characters for uppercase,
// lowercase, number of digits and other characters. Display appropriate
// message.
#include <stdio.h>

int main()
{
    char str[100];
    int uppercase = 0, lowercase = 0, digits = 0, others = 0;

    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            uppercase++;
        }
        else if (str[i] >= 97 && str[i] <= 122)
        {
            lowercase++;
        }
        else if (str[i] >= 48 && str[i] <= 57)
        {
            digits++;
        }
        else
        {
            others++;
        }
    }

    // Display the results
    printf("Uppercase letters: %d\n", uppercase);
    printf("Lowercase letters: %d\n", lowercase);
    printf("Digits: %d\n", digits);
    printf("Other characters: %d\n", others);

    return 0;
}
