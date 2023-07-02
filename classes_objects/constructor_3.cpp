#include <iostream>
using namespace std;

class Actor
{
public:
    string name;
    string email;

    Actor(string name = "Anonymous", string email = "-")
        : name(name), email(email) {}
    //{
    //(*this).name = name;
    //(*this).email = email;
    // this->name = name;
    // this->email = email;
    //}
    string toString()
    {
        return name + " [" + email + "]";
    }
};

int main()
{
    Actor user0;
    Actor user1;
    user1.name = "Lucas";
    user1.email = "horosho@gail.com";
    cout << user0.toString() << endl;
    cout << user1.toString() << endl;
    Actor user2("Mary M.", "mymn@foo.com");
    Actor user3 = Actor("Mary M.");
    Actor user4{"Mary M.", "mymn@foo.com"};
    cout << user2.toString() << endl;
    cout << user3.toString() << endl;
    cout << user4.toString() << endl;
    cout << user4.toString() << endl;
    return 0;
}