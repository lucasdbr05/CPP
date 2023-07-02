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
Person *createPerson()
{
    Person *p = new Person("Jonh");
    return p;
}
void changePerson(Person &p)
{
    p.name += " Lima";
}
int main()
{
    Person *p1 = new Person("Lucas Lima"); // Object using memory n the heap
    delete p1;

    Person *p2 = createPerson();
    changePerson(*p2);
    cout << p2->name << endl;
    delete p2;

    return 0;
}