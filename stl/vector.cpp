#include <iostream>
#include <vector>
using namespace std;

// std::vector is a sequence container and also known as dynamic array; its size can grow and shrink dynamically.
// ELEMENT ACCESS:at(), [], front(), back(), data()
// MODIFIERS: insert(), emplace(), push_buck(), emplace_back(), pop_back(), resize(), swap(), erase(), clear(), reserve()
// std::vector<T> vctname;

int main()
{
    vector<int> Vec;
    for (int i = 0; i < 32; i++)
    {
        Vec.push_back(i);
        cout << Vec.size() << " " << Vec.capacity() << endl;
    }

    return 0;
    /*
    std::vector<int> arr1;
    std::vector<int> arr2(5, 20);//five elements filled with 20
    std::vector<int> arr3 = {1, 2, 3, 4, 5, 6};
    std::vector<int> arr4{1, 2, 3, 4, 5};

    arr3.push_back(7);
    for (int i = 0; i < arr3.size(); i++)
        cout << arr3[i] << endl;
    for (int i = 0; i < arr2.size(); i++)
        cout << arr2[i] << endl;
    */
}