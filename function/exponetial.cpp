#include <iostream>
using namespace std;

int power(int baseNUm, int powNum)
{
    int result = 1;
    for (int i = 0; i < powNum; i++)
    {
        result *= baseNUm;
    }

    return result;
}

int main()
{
    cout << power(2, 15) << endl;
    return 0;
}