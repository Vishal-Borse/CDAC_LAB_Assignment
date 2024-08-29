// Q2. Write a class for Time and provide the functionality
// Time()
// Time(int h,int m,int s)
// getHour()
// getMinute()
// getSeconds()
// printTime()
// setHour()
// setMinute()
// setSeconds()
// In main create array of objects of Time.
// Allocate the memory for the array and the object dynamically

#include <iostream>
using namespace std;

class Time
{
private:
    int hour;
    int minutes;
    int seconds;

public:
    Time() : hour(0), minutes(0), seconds(0)
    {
    }
    Time(int hour, int minutes, int seconds)
    {
        this->hour = hour;
        this->minutes = minutes;
        this->seconds = seconds;
    }
    const int getHour()
    {
        return hour;
    }
    const int getMinute()
    {
        return minutes;
    }
    const int getSeconds()
    {
        return seconds;
    }
    void printTime()
    {
        cout << "Time : " << getHour() << " Hr " << getMinute() << " M " << getSeconds() << " S" << endl;
    }
    void setHour(int hour)
    {
        this->hour = hour;
    }
    void setMinute(int minutes)
    {
        this->minutes = minutes;
    }
    void setSeconds(int seconds)
    {
        this->seconds = seconds;
    }
};

int main()
{
    Time **tm = new Time *[5];
    tm[0] = new Time(1, 35, 54);
    tm[1] = new Time(2, 23, 24);
    tm[2] = new Time(3, 45, 14);
    tm[3] = new Time(4, 20, 44);
    tm[4] = new Time(10, 12, 34);

    for (int i = 0; i < 5; i++)
    {
        cout << "Dynamicaly Allocatee Object" << i + 1 << endl;
        tm[i]->printTime();
        cout << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        delete tm[i];
        tm[i] = NULL;
    }
    delete[] tm;
    tm = NULL;

    return 0;
}
