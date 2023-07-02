#include <iostream>
using namespace std;

int main()
{
    string alpha = "abcdefghijklmnoprstuvWxyz";
    alpha[9] = '?';

    for (char l : alpha)
    {
        cout << l << ",";
    }

    return 0;
}