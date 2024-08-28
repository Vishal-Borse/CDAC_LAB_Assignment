// Q8. Write a program to read the name of a student (studentName), roll
// Number (rollNo) and marks (totalMarks) obtained. rollNo may be an
// alphanumeric string. Display the data as read. Hint: Create a Student
// structure and write appropriate functions.

#include <stdio.h>
#include <string.h>

struct Student
{
    char rollno[10];
    char name[10];
    float marks;
};

void studentInfo(struct Student st);

int main()
{

    struct Student st1;
    struct Student st2;

    strcpy(st1.rollno, "H001");
    strcpy(st1.name, "Akash");
    st1.marks = 50;

    studentInfo(st1);

    // studentInfo( st2 );

    return 0;
}

void studentInfo(struct Student st)
{

    printf("Student Roll no is : %s\n", st.rollno);
    printf("Student Name is : %s\n", st.name);
    printf("Marks of Student is : %f\n", st.marks);
}