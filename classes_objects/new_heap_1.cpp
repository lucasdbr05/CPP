#include <iostream>
using namespace std;

int main()
{
    int x = 5; // stack
    // new ==> malloc() + constructor
    int *y = new int(10); // heap
    cout << *y << endl;
    cout << x * *y << endl;
    // delete ==> free() + destructor
    delete y;

    return 0;
}