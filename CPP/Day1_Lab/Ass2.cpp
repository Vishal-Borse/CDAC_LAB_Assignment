// Q2. Write a menu driven program for Date in a CPP language using structure and also
// using class.Date is having data members day, month, year. Implement the following functions.
// void initDate();
// void printDateOnConsole();
// void acceptDateFromConsole();
// bool isLeapYear();

#include <iostream>
using namespace std;

struct Date
{
    int day;
    int month;
    int year;
};

class DateImplementation
{
public:
    Date newdate;
    void initDate()
    {
        newdate.day = 1;
        newdate.month = 1;
        newdate.year = 1600;
    }
    void printDateOnConsole()
    {
        cout << "Entered Date : ";
        cout << newdate.day << "/" << newdate.month << "/" << newdate.year << endl;
        if (newdate.day > 31 || newdate.day < 0 || newdate.month > 12)
        {
            cout << "Enter Valid Data !!" << endl;
            return;
        }
    }
    void acceptDateFromConsole()
    {
        cout << "Enter Date this format (D M YYYY)" << endl;
        cin >> newdate.day >> newdate.month >> newdate.year;
    }
    bool isLeapYear()
    {
        if (newdate.year % 4 == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    DateImplementation d1;
    int choice;
    do
    {
        cout << "0.Exit" << endl;
        cout << "1.Initialize Date " << endl;
        cout << "2.Accept Date " << endl;
        cout << "3.Print Date" << endl;
        cout << "4.Check Leap Year" << endl;
        cout << "Enter Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            d1.initDate();
            break;
        case 2:
            d1.acceptDateFromConsole();
            break;
        case 3:
            d1.printDateOnConsole();
            break;

        case 4:

            if (d1.isLeapYear() == 1)
                cout << "Current Year is Leap Year" << endl;
            else
                cout << "Current Year is not Leap Year" << endl;
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