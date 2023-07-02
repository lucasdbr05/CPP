#include <iostream>
using namespace std;

int main()
{

    int i = 0;
    int j = 1000;

    while (i <= 10)
    {
        i++;
        cout << i << endl;
    }

    while (j >= 0)
    {
        cout << j << endl;
        j -= 2;
    }

    return 0;
}