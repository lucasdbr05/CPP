#include <iostream>
using namespace std;

int main()
{
    string title = "Mr. ";
    string name("Jonh");
    string end(10, '!');
    cout << name.size() << endl;
    cout << name.back() << endl;
    cout << name[2] << endl;
    cout << title + name << endl;

    /// name += ' Doe';
    name.append(" Doe");
    cout << name << endl;

    cout << end << endl;

    return 0;
}