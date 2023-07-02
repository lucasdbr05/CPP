#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    int total = 0;
    int qtd = 0;

    while (number != -1)
    {
        cout << "Enter a number or -1 to finish" << endl;
        cin >> number;
        if (number != -1)
        {
            total += number;
            qtd++;
        }
    }
    cout << (double)total / qtd;

    return 0;
}