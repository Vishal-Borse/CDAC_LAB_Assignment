// Q2. Write a menu driven program for Student management.
// Create a class student with data members name, gender, rollNumber(Auto generated) and array to
// keep marks of three subjects.
// Accept every thing from user and Print name, rollNumber, gender and percentage.
// Provide global functions void sortRecords() and int searchRecords() for sorting and searching array.
// In main(), create Student* arr[5] and provide facility for accept, print, search and sort.
// Search function returns index of found Student, otherwise returns -1.
// sortRecord sorts the students array based on roll no in descending order.

#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    char gender;
    int rollNumber;
    int marks[3];
    static int generateRollNumber;

public:
    Student() : name(" "), gender(' '), rollNumber(++generateRollNumber) {};

    Student(string name, char gender) : name(name), gender(gender), rollNumber(++generateRollNumber) {};

    void acceptStudent()
    {
        cout << "Enter Student Full Name: ";
        cin.ignore();
        getline(cin, this->name);

        cout << "Enter Student Gender(M/F) : ";
        cin >> this->gender;

        for (int i = 0; i < 3; i++)
        {
            cout << "Enter Makrs for Subject (out of 100)" << i + 1 << " : ";
            cin >> this->marks[i];
            cout << endl;
        }
    }

    void displayStudent()
    {
        cout << "Student Data.................." << endl;
        cout << "Name : " << this->name << endl;
        cout << "Roll No : " << this->rollNumber << endl;
        cout << "Gender : " << this->gender << endl;

        int total = marks[0] + marks[1] + marks[2];

        double percentage = (((double)total) / 300) * 100;
        cout << "Percentage : " << percentage << "%" << endl;
    }
    int getRollNumber()
    {
        return this->rollNumber;
    }
};
int searchStudent(int rollNumber, int index, Student *arr[])
{
    for (int i = 0; i <= index; i++)
    {
        if (arr[i]->getRollNumber() == rollNumber)
        {
            return i;
            break;
        }
    }
    return -1;
}
void sortStudent(Student *arr[], int index)
{
    int n = index + 1;

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {

            if (arr[j]->getRollNumber() < arr[j + 1]->getRollNumber())
            {
                Student *temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

int menu()
{
    cout << "Student Performance System" << endl;
    cout << ".........................................." << endl;
    cout << "1.Feed Student Data" << endl;
    cout << "2.Display Students Data" << endl;
    cout << "3.Sort Student Records" << endl;
    cout << "4.Search Student Record" << endl;
    cout << "0.Exit" << endl;
    int choice;
    cout << "Enter Your Choice : ";
    cin >> choice;
    return choice;
}
int Student ::generateRollNumber = 100;
int main()
{
    int index = -1;
    Student *arr[5];
    int choice;
    do
    {
        choice = menu();
        switch (choice)
        {
        case 1:
        {
            if (index == 4)
            {
                cout << "Can't Accpet Data, System is Full" << endl;
            }
            else
            {
                arr[++index] = new Student();
                arr[index]->acceptStudent();
                cout << "Student Data Accepted" << endl;
            }
            break;
        }
        case 2:
            for (int i = 0; i <= index; i++)
            {
                arr[i]->displayStudent();
            }
            break;

        case 3:
            sortStudent(arr, index);
            for (int i = 0; i <= index; i++)
            {
                arr[i]->displayStudent();
            }
            break;
        case 4:
        {
            int rollNo;
            cout << "Enter roll number to br searched : ";
            cin >> rollNo;
            int found = searchStudent(rollNo, index, arr);
            if (found == -1)
            {
                cout << "Student Doesnt Exist!!" << endl;
            }
            else
            {
                arr[found]->displayStudent();
            }
            break;
        }

        case 0:
            cout << "Thank you for visiting our system :)" << endl;
            break;
        default:
            cout << "Invalid choice :( " << endl;
            break;
        }

    } while (choice != 0);

    return 0;
}