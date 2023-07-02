#include <iostream>
#include <set>
#include <string>
#include <functional>
using namespace std;

// std::set<T> objectName;
// It's an Associative Container that contains a sorted set of unique objects at type key(usually with red-black trees).
// Insert, removal, search have logarithmic complexity
// We can pass the order of sorting while constructing set()

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
    set<Person, std::less<>> Set = {{18, "Lucas"}, {65, "Juvenal"}, {51, "Nubia"}};
    for (const auto &e : Set)
        cout << e.age << " " << e.name << endl;
    /*
    set<int> Set = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    // set<int, std::greater<>> Set = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    // set<int, std::less<>> Set = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    for (const auto &e : Set)
        cout << e << endl;
    */
    return 0;
}