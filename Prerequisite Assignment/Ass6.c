// Q6. Write a program to perform matrix multiplication.
#include <stdio.h>

void multiplyMatrices(int firstMatrix[10][10], int secondMatrix[10][10], int result[10][10], int r1, int c1, int r2, int c2);

int main()
{
    int r1, c1, r2, c2;
    int firstMatrix[10][10], secondMatrix[10][10], result[10][10];

    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2)
    {
        printf("Error! The number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return -1;
    }
    printf("\nEnter elements of the first matrix:\n");
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c1; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("\nEnter elements of the second matrix:\n");
    for (int i = 0; i < r2; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    multiplyMatrices(firstMatrix, secondMatrix, result, r1, c1, r2, c2);

    printf("\nResultant matrix:\n");
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            printf("%d ", result[i][j]);
            if (j == c2 - 1)
            {
                printf("\n");
            }
        }
    }

    return 0;
}
void multiplyMatrices(int firstMatrix[10][10], int secondMatrix[10][10], int result[10][10], int r1, int c1, int r2, int c2)
{
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            result[i][j] = 0;
            for (int k = 0; k < c1; ++k)
            {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}