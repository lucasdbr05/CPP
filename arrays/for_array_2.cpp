#include <iostream>
using namespace std;

int main()
{
    string names[] = {"Lucas", "Gabriel", "Fulano", "Cicrano", "Betano"};
    for (int i = 0; i < 5; i++)
    {
        cout << names[i] << " ";
    }

    cout << "\nForeach #01 COPY\n";
    for (string s : names)
    {
        s.append("!!!!!");
        cout << s << " "; // copy
    }
    cout << names[0] << endl;

    cout << "\nForeach #02 REFERENCE\n";
    for (string &s : names)
    {
        s.append("!!!!!");
        cout << s << " "; // REFERENCE
    }

    cout << "\nForeach #03 CONTS REFERENCE\n";
    for (string const &s : names)
    {
        /// s.append("!!!!!");
        cout << s << " "; // REFERENCE
    }
    cout << names[0] << endl;
    return 0;
}