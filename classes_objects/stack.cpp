#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    Person(string name) : name(name)
    {
        cout << "Hello! My name is " << name << endl;
    }
    ~Person()
    {
        cout << name << " saying goodbye!" << endl;
    }
};

Person *createPerson()
{
    Person p("Hanna");
    return &p;
}

int main()
{
    Person *pp1;
    {
        Person p1("Lucas");
        pp1 = &p1;
    }

    cout << pp1->name << endl;

    Person *pp2 = createPerson();
    cout << pp2->name << endl;
    delete pp2;
    cout << "End of code!" << endl;
    return 0;
}
