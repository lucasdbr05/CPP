#include <iostream>
using namespace std;

void sayHello()
{
    cout << "Hello C++\n";
}

void sayHelloTo(string name)
{
    cout << "Hello " << name << endl;
}

string returnHi()
{
    return "Hi!";
}

string returnHiTo(string name)
{
    return "Hi " + name + "!";
}
int main()
{
    sayHelloTo("Lucas");
    sayHello();
    cout << returnHi() << endl;
    cout << returnHiTo("Lucas") << endl;
    return 0;
}
