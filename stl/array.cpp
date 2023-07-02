#include <iostream>
#include <array>
using namespace std;

// std::array<T, N> arrayname;
// It's a container that encapsules fixed size arrays.
// at(), [], front(), back(), data()(gives the pointer of the array), size()
int main()
{
    std::array<int, 10> myarray1;
    myarray1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Initialization
    std::array<int, 5> myarray = {1, 2, 3, 4, 5}; // intializer list
    std::array<int, 5> myarray2{1, 2, 3, 4, 5};   // uniform initialization

    cout << myarray.size() << endl;
    return 0;
}
