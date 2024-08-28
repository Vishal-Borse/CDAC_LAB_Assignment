// Q10. Read at most 10 names of students and store them into an array of
// char nameOfStudents[10][50]. Sort the array and display them back. Hint:
// Use qsort() method.

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char names[10][15];
    int n, i;
    printf("Enter the number of names : \n");
    scanf("%d", &n);
    if (n > 10)
    {
        printf("Value should not be exceeded than 10 !");
        return 1;
    }
    printf("Enter the names to be stored in array: \n");
    for (i = 0; i < n; i++)
        scanf("%s", names[i]);
    printf("Sorting the array\n");
    qsort(names, n, 15, (int (*)(const void *, const void *))strcmp);
    printf("-------------------------------------------\n");
    printf("After sorting the names are : \n");
    for (i = 0; i < n; i++)
        printf("%s\n", names[i]);
}
