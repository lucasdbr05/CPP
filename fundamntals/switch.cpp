#include <iostream>
using namespace std;

int main()
{
    int month;
    cin >> month;
    int numberofDays;

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        numberofDays = 31;
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        numberofDays = 30;
        break;

    case 2:
        numberofDays = 28;
        break;

    default:
        numberofDays = -1;
        break;
    }

    cout << "Nmber of Days : " << numberofDays;
    return 0;
}