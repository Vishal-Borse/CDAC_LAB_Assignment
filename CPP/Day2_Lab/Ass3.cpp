// Q3. Write a class Address with data members (string building, string street, string city ,int pin)
// Implement constructors, getters, setters, accept(), and display() methods.
// Test the class functunalities by creating the object of class and calling all the functions.

#include <iostream>
#include <string>
using namespace std;
class Address
{
private:
    string building;
    string street;
    string city;
    int pin;

public:
    Address() : building(""), street(""), city(""), pin(0) {}

    Address(string b, string s, string c, int p) : building(b), street(s), city(c), pin(p) {}

    string getBuilding() const
    {
        return building;
    }

    string getStreet() const
    {
        return street;
    }

    string getCity() const
    {
        return city;
    }

    int getPin() const
    {
        return pin;
    }

    void setBuilding(const string &b)
    {
        building = b;
    }

    void setStreet(const string &s)
    {
        street = s;
    }

    void setCity(const string &c)
    {
        city = c;
    }
    void setPin(int p)
    {
        pin = p;
    }
    void accept()
    {
        cout << "Enter building name: ";
        getline(cin, building);
        cout << "Enter street name: ";
        getline(cin, street);
        cout << "Enter city name: ";
        getline(cin, city);
        cout << "Enter pin code: ";
        cin >> pin;
    }

    void display() const
    {
        cout << "Building: " << building << endl;
        cout << "Street: " << street << endl;
        cout << "City: " << city << endl;
        cout << "Pin: " << pin << endl;
    }
};

int main()
{

    Address addr1;
    addr1.accept();
    addr1.display();

    Address addr2("Building A", "Street B", "City C", 123456);
    addr2.display();

    addr2.setBuilding("New TCG");
    addr2.setStreet("Wakad");
    addr2.setCity("Pune");
    addr2.setPin(654321);
    addr2.display();

    return 0;
}
