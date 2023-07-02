#include <iostream>
using namespace std;

int main()
{
    string names[] = {"Lucas", "Gabriel", "Fulano", "Cicrano", "Betano"};
    int size = sizeof(names) / sizeof(names[0]);
    for (int i = 0; i < 5; i++)
    {
        cout << names[i] << " ";
    }
    return 0;
}