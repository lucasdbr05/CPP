#include <iostream>
using namespace std;

int main()
{
    double pi = 3.14;
    double &piRef = pi;

    cout << piRef << endl;
    cout << &pi << endl;

    // * -> dereference operator; is uused to create a pointer
    cout << *&pi << endl;
    cout << &*&pi << endl;
    return 0;
}