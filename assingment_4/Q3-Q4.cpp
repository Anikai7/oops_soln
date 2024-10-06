#include <iostream>

using namespace std;

class Time
{

private:
    int hour;
    int min;
    int sec;

public:
    void getTime()
    {
        cout << "Enter time in 24 hour format" << endl;
        cout << "Enter hour: ";
        cin >> hour;
        cout << "Enter Min: ";
        cin >> min;
        hour += min / 60;
        min = min % 60;
        cout << "Enter second: ";
        cin >> sec;
        min += sec / 60;
        sec = sec % 60;
    }

    void printTime()
    {
        cout << "Time is " << hour << ":" << min << ":" << sec << endl;
    }

    Time addTime(const Time &t)
    {
        Time tem;
        tem.sec = (sec + t.sec) % 60;
        tem.min = (min + t.min + ((sec + t.sec) / 60)) % 60;
        tem.hour = hour + t.hour+((min + t.min) / 60);

        return tem;
    }
};

int main()
{
    Time T1,T2;

    T1.getTime();
    T1.printTime();
    T2.getTime();
    Time T3 = T1.addTime(T2);
    T3.printTime();


}