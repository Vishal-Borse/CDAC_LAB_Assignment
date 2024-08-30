// Q1. Create a class Date with data memebrs day,month and year.
// Cretae a class Person with data members name,address and birthdate. The birthdate shoud be of
// type Date.
// Implement above classes. Test all functionalities in main().
#include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date() : day(1), month(1), year(1600) {}

    Date(int day, int month, int year) : day(day), month(month), year(year) {}

    bool acceptDate()
    {
        int day, month, year;
        cout << "Enter date in this format (DD MM YYYY): ";
        cin >> day >> month >> year;

        if (day <= 0 || day > 31 || month <= 0 || month > 12 || year <= 0)
        {
            return false;
        }

        if (month == 2)
        {

            bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
            if (isLeapYear && day > 29)
                return false;
            if (!isLeapYear && day > 28)
                return false;
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            if (day > 30)
                return false;
        }

        this->day = day;
        this->month = month;
        this->year = year;
        return true;
    }

    void displayDate() const
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

class Person
{
private:
    string name;
    string address;
    Date birthdate;

public:
    Person() : name(""), address(""), birthdate(Date()) {}

    Person(string name, string address, Date birthdate)
        : name(name), address(address), birthdate(birthdate) {}

    void acceptPerson()
    {
        cout << "Enter Person Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Person Address: ";
        getline(cin, address);

        while (!birthdate.acceptDate())
        {
            cout << "Invalid date. Please enter again." << endl;
        }

        cout << "Person data accepted." << endl;
    }

    void displayPerson() const
    {
        cout << "Person Data..........." << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Birthdate: ";
        birthdate.displayDate();
    }
};

int main()
{
    Person p;
    p.acceptPerson();
    p.displayPerson();
    return 0;
}
