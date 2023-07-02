#include <iostream>
using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;

public:
    Time(int hour = 0, int minute = 0, int second = 0)
    {
        setHour(hour);
        setMinute(minute);
        setSecond(second);
    }

    int getHour() const
    {
        return hour;
    }
    int getMinute() const
    {
        return minute;
    }
    int getSecond() const
    {
        return second;
    }

    void setHour(int hour)
    {
        this->hour = hour;
    }
    void setMinute(int minute)
    {
        this->minute = minute;
    }
    void setSecond(int second)
    {
        this->second = second;
    }

    void print() const
    {
        cout << hour << ":" << minute << ":" << second << endl;
    }

    void nextSecond()
    {
        second += 1;
        if (second >= 60)
        {
            second = 0;
            minute++;
        }
        if (minute >= 60)
        {
            minute = 0;
            hour++;
        }
        if (hour >= 24)
        {
            hour = 0;
        }
    }
};

int main()
{
    Time t1(23, 59, 59);
    t1.print();
    t1.setHour(12);
    t1.setMinute(30);
    t1.setSecond(45);
    t1.print();
    return 0;
}