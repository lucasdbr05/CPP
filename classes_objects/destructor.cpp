#include <iostream>
using namespace std;

class Person
{
public:
    string name;

    Person(string name = "")
        : name(name) { cout << "Hi! My name is " + name << endl; }

    ~Person()
    {
        cout << name << " saying goodbye!" << endl;
    }
};
void createPerson()
{
    Person p3{"Jonh"};
}
int main()
{
    Person *p0 = new Person("Test"); // Object don't destroied
    Person p1("Lucas");
    {
        Person p2{"Mary"};
        createPerson();
        Person p4{"Ali"};
    }
    cout << "ending..." << endl;
    return 0;
}