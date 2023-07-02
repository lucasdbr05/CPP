#include <iostream>
#include <sstream>
using namespace std;

class Date
{
public:
    int day;
    int month;
    int year;

    string toString()
    {
        stringstream ss;
        ss << day << "/" << month << "/" << year;
        return ss.str();
    }
};

int main()
{
    Date d1;
    d1.day = 8;
    d1.month = 4;
    d1.year = 2005;
    cout << d1.toString() << endl;
    cout << "\n";
    Date d2;
    d2.day = 14;
    d2.month = 3;
    d2.year = 2023;
    cout << d2.toString() << endl;

    return 0;
}