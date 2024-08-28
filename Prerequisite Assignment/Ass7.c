// Q7. Write a program to accept a number from user using command line
// argument and display its table.
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("You have not enetered a element!");
        return 1;
    }
    int num = atoi(argv[1]);
    if (num == 0)
    {
        printf("You must enter a valid integer!");
        return 1;
    }
    printf("Printing multiplication table of %d\n", num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }
    return 0;
}