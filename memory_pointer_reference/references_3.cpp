#include <iostream>
using namespace std;

int main()
{
    // string& badRef;
    string greeting = "Hi!";
    string &ref = greeting;
    cout << greeting << "    " << ref << endl;

    string name = "Peter";
    ref = name;

    cout << ref << "    " << name << "   " << greeting << endl;
    cout << &ref << "    " << &name << "   " << &greeting << endl;
    return 0;
}