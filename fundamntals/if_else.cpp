#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number :" << endl;
    cin >> number;

    if (number % 2 == 0)
    {
        cout << "Even number" << endl;
    }
    else
    {
        cout << "Odd number" << endl;
    }
    return 0;
}