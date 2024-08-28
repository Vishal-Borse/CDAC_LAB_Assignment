// Q2. Write a program to calculate a Factorial of a number.
#include <stdio.h>
int factorial(int);
int main()
{
    int num = 0;
    if (num < 0)
        printf("Factorial of negative number is undefined\n");
    else
        printf("Factorial of %d is : %d", num, factorial(num));
    return 0;
}

int factorial(int num)
{
    if (num == 0 || num == 1)
        return 1;
    int result = 1;
    while (num > 0)
    {
        result *= num;
        num--;
    }
    return result;
}
