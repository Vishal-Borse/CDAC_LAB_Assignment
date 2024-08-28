// Q4. Write a program to calculate the grade of a student. There are five
// subjects. Marks in each subject are entered from keyboard. Assign grade
// based on the following rule:
// Total Marks >= 90 Grade: Ex
// 90 > Total Marks >= 80 Grade: A
// 80 > Total Marks >= 70 Grade: B
// 70 > Total Marks >= 60 Grade: C
// 60 > Total Marks Grade: F

#include <stdio.h>

int main()
{
    float marks[5], total = 0.0, average;
    int i;
    char grade;

    printf("Enter marks for 5 subjects:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    average = total / 5;

    if (average >= 90)
    {
        grade = 'A';
    }
    else if (average >= 80)
    {
        grade = 'B';
    }
    else if (average >= 70)
    {
        grade = 'C';
    }
    else if (average >= 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}
