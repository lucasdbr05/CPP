#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    cout << arr[0] << endl;
    cout << arr[4] << endl;
    cout << sizeof arr[0] << endl;
    cout << sizeof arr << endl;
    cout << sizeof arr / sizeof arr[0] << endl;

    return 0;
}