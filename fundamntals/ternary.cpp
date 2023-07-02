#include <iostream>
using namespace std;

int main()
{
    bool sunny = true;
    string result = sunny ? ":)" : ":(";
    cout << result << endl;

    double balance = 1000.00;
    double value;
    cout << "Enter the value: ";
    cin >> value;

    char CoD;
    cout << "Credit(c) / Debt(d): ";
    cin >> CoD;

    cout << "Balance [before]: " << balance << endl;
    balance += CoD == 'c' ? value : -value;
    cout << "Balance [after]: " << balance << endl;
    return 0;
}