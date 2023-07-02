#include <iostream>
using namespace std;

class User
{
public:
    string name;
    string email;

    User() {}
    User(string _name, string _email)
    {
        name = _name;
        email = _email;
    }
    string toString()
    {
        return name + " [" + email + "]";
    }
};

int main()
{
    User user1;
    user1.name = "Lucas";
    user1.email = "horosho@gail.com";
    cout << user1.toString() << endl;
    User user2("Mary M.", "mymn@foo.com");
    User user3 = User("Mary M.", "mymn@foo.com");
    cout << user2.toString() << endl;
    cout << user3.toString() << endl;
    return 0;
}