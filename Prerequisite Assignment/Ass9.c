// Q9. Accept an integer number and when the program is executed print the
// binary, octal and hexadecimal equivalent of the given number.
// Sample Output:
// Enter Number : 20
// Given Number :20
// Binary equivalent :10100
// Octal equivalent :24
// Hexadecimal equivalent :14


#include <stdio.h>
void printBinary(int num);
void printOctal(int num);
void printHexadecimal(int num);

int main()
{
    int num;

    printf("Enter Number: ");
    scanf("%d", &num);

    printf("Given Number: %d\n", num);

    printf("Binary equivalent: ");
    printBinary(num);
    printf("\n");

    printf("Octal equivalent: ");
    printOctal(num);
    printf("\n");

    printf("Hexadecimal equivalent: ");
    printHexadecimal(num);
    printf("\n");

    return 0;
}

void printBinary(int num)
{
    if (num > 1)
    {
        printBinary(num >> 1);
    }
    printf("%d", num & 1);
}

void printOctal(int num)
{
    if (num >= 8)
    {
        printOctal(num / 8);
    }
    printf("%d", num % 8);
}

void printHexadecimal(int num)
{
    if (num >= 16)
    {
        printHexadecimal(num / 16);
    }
    int rem = num % 16;
    if (rem < 10)
    {
        printf("%d", rem);
    }
    else
    {
        printf("%c", rem - 10 + 'A');
    }
}
