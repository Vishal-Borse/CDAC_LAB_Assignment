// Q1. Write a program to input n numbers on command line argument and
// calculate maximum of them.
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Invalid input entered!");
        return 1;
    }
    int num = atoi(argv[1]);
    if (num == 0)
    {
        printf("Invalid size of elements entered!");
        return 1;
    }
    int arr[num];
    printf("Enter the elements of array");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int j = 0; j < num; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
        }
    }
    printf("Maximum no of given elements is %d", max);

    return 0;
}