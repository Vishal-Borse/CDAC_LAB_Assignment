// Q3. Write a program to calculate Fibonacci Series up to n numbers

#include <stdio.h>
void printFibonacciSeries(int n);
int main()
{
    printFibonacciSeries(5);
    return 0;
}
void printFibonacciSeries(int n)
{
    if (n == 0)
        printf("Provide valid number of terms!");
    int term1 = 0, term2 = 1;
    int nexterm;
    printf("Fibonacci Series up to %d terms :\n", n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", term1);
        nexterm = term1 + term2;
        term1 = term2;
        term2 = nexterm;
    }
}
