// Q3. Write a menu driven program for Student in CPP language. Create a class student with data
// members roll no, name and marks. Implement the following functions
// void initStudent();
// void printStudentOnConsole();
// void acceptStudentFromConsole();

#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int roll_no;
    string name;
    int marks;
};

class StudentImplementation
{
public:
    Student newStudent;
    void initStudent()
    {
        newStudent.roll_no = 0;
        newStudent.name = "Student";
        newStudent.marks = 0;
    }
    void printStudentOnConsole()
    {
        cout << "Student Data " << endl;
        cout << "Roll No : " << newStudent.roll_no << endl;
        cout << "Name : " << newStudent.name << endl;
        cout << "Marks : " << newStudent.marks << endl;
    }
    void acceptStudentFromConsole()
    {
        cout << "Enter Roll No : ";
        cin >> newStudent.roll_no;
        cout << "\nEnter Name : ";
        cin >> newStudent.name;
        cout << "\nEnter Marks : ";
        cin >> newStudent.marks;
    }
    int menu()
    {
        int choice;
        printf("0. EXIT\n");
        printf("1. Initialize Time\n");
        printf("2. Accept Time\n");
        printf("3. Display Time\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        return choice;
    }
};
int main()
{
    StudentImplementation s1;
    int choice;
    do
    {
        choice = s1.menu();

        switch (choice)
        {
        case 1:
            s1.initStudent();
            break;
        case 2:
            s1.acceptStudentFromConsole();
            break;
        case 3:
            s1.printStudentOnConsole();
            break;

        case 0:
            cout << "Exited !!" << endl;
            break;
        default:
            cout << "Enter valid choice" << endl;
            break;
        }
    } while (choice != 0);
    return 0;
}