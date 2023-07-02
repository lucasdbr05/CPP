#include <iostream>
using namespace std;

int main()
{

    bool isAdmin = true;
    cout << isAdmin << endl;

    char symbol = '#';
    // char symbol('#')
    cout << symbol << endl;

    unsigned short int age = 31;
    cout << age << endl;

    float pi = 3.14;
    const double PI = 3.1415;
    cout << pi << endl;
    cout << PI << endl;

    short int n1 = 1;
    long int n2 = 1;
    long long int n3 = 1;
    unsigned int n4 = 1;

    cout << n1 + n2 + n3 + n4;
    return 0;
}