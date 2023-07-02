#include <iostream>
using namespace std;

int biggestNumber(int n1, int n2)
{
    return n1 >= n2 ? n1 : n2;
}

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

    cout << "Max: " << biggestNumber(a, biggestNumber(b, c)) << endl;
    return 0;
}