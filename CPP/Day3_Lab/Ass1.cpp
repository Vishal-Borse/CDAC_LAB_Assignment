// Q1. Write a class to find volume of a Cylinder by using following members. (volume of
// Cylinder=3.14 * radius * radius *height) ( use static wherever needed. hint-PI)
// Class having following member functions:
// Cylinder()
// Cylinder(double radius, double height)
// getRadius()
// setRadius()
// getHeight()
// setHeight()
// calculateVolume()
// Initialize members using constructor member initializer list.

#include <iostream>
using namespace std;

class Cylinder
{
private:
    double radius;
    double height;
    static double const PI;

public:
    // default constructor using constructor member initializer list
    Cylinder() : radius(1), height(1)
    {
    }
    // parametrized constructor using constructor member initializer list
    Cylinder(double radius, double height) : radius(radius), height(height)
    {
    }
    double getRadius()
    {
        return this->radius;
    }
    void setRadius(double radius)
    {
        this->radius = radius;
    }
    double getHeight()
    {
        return this->height;
    }
    void setHeight(double height)
    {
        this->height = height;
    }
    double calculateVolume()
    {
        return Cylinder::PI * radius * radius * height;
    }
};
// initialization of static data member
double const Cylinder::PI = 3.14;

int main()
{
    // test case for default constructor
    Cylinder c1;
    cout << "Volumne of Cylinder is : " << c1.calculateVolume() << " m3" << endl;

    // test case for parametrized constructor
    Cylinder c2(20, 10);
    cout << "Volumne of Cylinder is: " << c2.calculateVolume() << " m3" << endl;

    return 0;
}
