#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cout << "Enter a number" << endl;
    cin >> a;
    cout << "Enter a number" << endl;
    cin >> b;
    cout << "Enter a number" << endl;
    cin >> c;

    if (a >= b && a >= c)
    {
        cout << "Biggest number: " << a;
    }

    if (b >= c && b >= a)
    {
        cout << "Biggest number: " << b;
    }

    if (c >= a && c >= b)
    {
        cout << "Biggest number: " << c;
    }

    return 0;
}