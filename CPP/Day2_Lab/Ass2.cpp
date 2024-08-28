// Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll.
// Mostly they do, but sometimes a car goes by without paying.
// The tollbooth keeps track of the number of cars that have gone by and of the total amount of money
// collected. Model this tollbooth with a class called tollbooth.
// The two data items are a type unsigned int to hold the total number of cars, and a type double to
// hold the total amount of money collected.
// A constructor initializes all data members to 0. A member function called payingCar() increments
// the car total and adds 0.50 to the cash total. An other function, called nopayCar()
// increments the car total but adds nothing to the cash total. Finally, a member function called
// printOnConsole() displays the two totals and number of paying as well as non paying cars total.

#include <iostream>
using namespace std;

class Tollbooth
{
    unsigned int totalcars;
    double totalmoney;

public:
    Tollbooth()
    {
        this->totalcars = 0;
        this->totalmoney = 0.0;
    }
    void payingCar()
    {
        totalcars++;
        totalmoney += 0.50;
        cout<<"Entry Added !!"<<endl;
    }
    void nopayCar()
    {
        totalcars++;
        cout<<"Entry Added !!"<<endl;
    }
    void printOnConsole()
    {
        int paycars = totalmoney / 0.5;
        int nopaycars = totalcars - paycars;
        cout << "TollBooth Data........................." << endl;
        cout << "Total Cars Paid Toll : " << paycars << endl;
        cout << "Total Cars Not Paid Toll : " << nopaycars << endl;
        cout << "Total Money : Rs." << totalmoney << endl;
    }
    int menu()
    {
        cout << "TollBooth System" << endl;
        cout << "====================================" << endl;
        cout << "1.Add, Car Paid Toll" << endl;
        cout << "2.Add, Car Not paid Toll" << endl;
        cout << "3.Display Statistics" << endl;
        cout << "0.Exit" << endl;
        cout << "====================================" << endl;
        cout << "Enter Your Choice : ";
        int choice;
        cin >> choice;
        return choice;
    }
};

int main()
{
    Tollbooth t;
    int choice;
    do
    {
        choice = t.menu();
        switch (choice)
        {
        case 1:

            t.payingCar();
            break;
        case 2:
        {
            t.nopayCar();

            break;
        }
        case 3:
            t.printOnConsole();
            break;

        case 0:
            cout << "Exited!" << endl;
            break;

        default:
            cout << "Enter valid choice " << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}