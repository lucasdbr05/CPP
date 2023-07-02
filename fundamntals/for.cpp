#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i <= 10; i++)
    {
        cout << i << endl;
    }

    for (int j = 1000; j >= 0; j -= 2)
    {
        cout << j << endl;
    }

    int number = 0;
    int total = 0;
    int qtd = 0;

    for (; number != -1;)
    {
        cout << "Enter a number or -1 to finish" << endl;
        cin >> number;
        if (number != -1)
        {
            total += number;
            qtd++;
        }
    }
    cout << ((double)total) / qtd;

    return 0;
}