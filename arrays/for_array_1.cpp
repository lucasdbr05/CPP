#include <iostream>
using namespace std;

int main()
{
    string names[] = {"Lucas", "Gabriel", "Fulano", "Cicrano", "Betano"};
    for (int i = 0; i < 5; i++)
    {
        cout << names[i] << " ";
    }

    cout << "\nForeach\n";
    for (string s : names)
    {
        cout << s << " ";
    }
    return 0;
}