// Pointer is a variable whose value is the address of another variable, i.e., direct address of the memory location.
#include <iostream>
using namespace std;

int main()
{
    int value = 98765;
    int &ref = value;
    int *pot = &value;

    cout << &value << "\t" << &ref << "\t" << pot << endl; // endereco
    cout << value << "\t" << ref << "\t" << *pot << endl;  // valor do endereco
    return 0;
}