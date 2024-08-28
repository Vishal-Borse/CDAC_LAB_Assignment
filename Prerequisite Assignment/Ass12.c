// Q12. Write a Program to reverse the letters present in the given String. Do
// not use strrev() function.
#include <stdio.h>
#include <string.h>

void reverseString(char str[])
{
    int start = 0;
    int end = strlen(str) - 1;
    char temp;

    while (start < end)
    {
        // Swap characters
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move towards the middle
        start++;
        end--;
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str); 

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
