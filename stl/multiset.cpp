#include <iostream>
#include <set>
#include <string>
#include <functional>
using namespace std;

// std::multiset<T> objectName;
// It's an Assossiative Container that contains a sorted set of duplicate objects of a type Key (usually with red-black trees).
// Logarithmic Complexity
// We can pass the order of sorting while constructing set(std::less<int>,std::greater<int>)

class Person
{
public:
    float age;
    string name;
    bool operator<(const Person &rhs) const { return age < rhs.age; }
    bool operator>(const Person &rhs) const { return age > rhs.age; }
};

int main()
{
    multiset<Person, std::greater<>> MultiSet = {
        {18, "Lucas"},
        {51, "Nubia"},
        {65, "Juvenal"},
        {51, "Nubia"},
    };
    for (const auto &e : MultiSet)
        cout << e.age << " " << e.name << endl;
    /*
    std::multiset<int, std::greater<int>> Mult = {5, 2, 3, 4, 5, 2};
    for (const auto &e : Mult)
    {
        cout << e << endl;
    }
    */

    return 0;
}