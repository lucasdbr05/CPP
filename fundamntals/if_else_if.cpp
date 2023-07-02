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
    else if (b >= c && b >= a)
    {
        cout << "Biggest number: " << b;
    }
    else
    {
        cout << "Biggest number: " << c;
    }
    return 0;
}