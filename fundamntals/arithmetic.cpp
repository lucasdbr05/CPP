#include <iostream>
using namespace std;

int main()
{
    cout << 2 + 2 << endl;
    cout << 2 - 2 << endl;
    cout << 2 * 2 << endl;
    cout << 2 / 2 << endl;
    cout << 2 % 2 << endl;
    cout << 10 / 3 << endl;

    int x;
    int y;

    cout << "Enter a number: " << endl;
    cin >> x;

    cout << "Enter a number: " << endl;
    cin >> y;

    cout << x + y << endl;
    cout << x * y << endl;
    cout << x - y << endl;
    cout << x / y << endl;
    cout << x % y << endl;
    return 0;
}