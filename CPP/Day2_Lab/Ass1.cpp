// Q1. Write a menu driven program to calculate volume of the box(length * width * height).
// Provide parameterless, parameterized(with 3 parameters) and single paramaterized constructor.
// Create the local objects in respective case and call the function to caluclate area.
// Menu options ->
// 1. Calculate Volume with default values
// 2. Calculate Volume with length,breadth and height with same value
// 3. Calculate Volume with different length,breadth and height values.

#include <iostream>
using namespace std;

class Volumne
{
    double length;
    double height;
    double width;

public:
    Volumne()
    {
        this->length = 5.0;
        this->height = 3.0;
        this->width = 1.0;
    }
    Volumne(double val)
    {
        this->length = this->width = this->height = val;
    }
    Volumne(double l, double w, double h)
    {
        this->length = l;
        this->width = w;
        this->height = h;
    }
    void calculateVolume()
    {
        double ans = length * width * height;
        cout << "Volumne of the box : " << ans << " m3" << endl;
    }
    int menu()
    {
        cout << "Volumne Calculation System" << endl;
        cout << "====================================" << endl;
        cout << "1.Calculate Volume with default values" << endl;
        cout << "2.Calculate Volume with length,breadth and height with same value" << endl;
        cout << "3.Calculate Volume with different length,breadth and height values" << endl;
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
    Volumne v;
    int choice;
    do
    {
        choice = v.menu();
        switch (choice)
        {
        case 1:
        {
            Volumne v1;
            v1.calculateVolume();
            break;
        }
        case 2:
        {
            Volumne v2(30);
            v2.calculateVolume();
            break;
        }
        case 3:
        {
            double l;
            double w;
            double h;
            cout << "Enter length, width and height in (l w h) format" << endl;
            cin >> l >> w >> h;
            Volumne v3(l, w, h);
            v3.calculateVolume();
            break;
        }
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