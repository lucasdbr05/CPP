#include <iostream>
#include <map>
#include <functional>
#include <vector>
using namespace std;

// std::map<T1,T2> objName (T1: tkey, T2: tvalue)
// It's an associative container that store elements in key values combinations where key should be unique, otherwise it overrides the previous value
//(Implemented using Self-balance Binary Search Tree)
// It store key value pair in sorted order on the basis of key (a/d)
// Generally using dictionary problems

int main()
{
    map<string, vector<int>, std::greater<string>> Map;
    Map["Chotu"].push_back(90909009);
    Map["Lucas"].push_back(231003406);
    Map["Lucas"].push_back(20050804);

    for (auto &el1 : Map)
    {
        cout << el1.first << endl;
        for (auto &el2 : el1.second)
        {
            cout << el2 << " ";
        }
        cout << endl;
    }

    /*
    map<string, int, std::greater<string>> Map;
    Map["Chotu"] = 90909009;
    Map["Lucas"] = 231003406;
    Map.insert(std::make_pair("Bot", 782348818));

    for (auto &ell : Map)
    {
        cout << ell.first << " " << ell.second << endl;
    }

    cout << "Lucas: " << Map["Lucas"] << endl;
    cout << "Lucas: "<< Map["Lucas"] << endl;
    */

    return 0;
}