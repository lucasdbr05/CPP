#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    float radius;
    cout << "Type the radius' value: " << endl;
    cin >> radius;
    const double pi = 3.141592;
    float area = pi * radius * radius;
    printf("Area: %2f. \n", area);
    cout << "Area is " << area;

    return 0;
}