#include <iostream>
#include <sstream>
using namespace std;

class Product
{
public:
    string name;
    double price;
    double discount;

    double finalPrice()
    {
        return price * (1 - discount);
    }
};

int main()
{
    Product p;
    p.name = "Notebook";
    p.price = 1600.00;
    p.discount = 0.15;

    cout << p.name << endl;
    cout << p.price << endl;
    cout << p.discount << endl;
    cout << p.finalPrice() << endl;

    Product ipad{"iPad", 899, 0.1};
    cout << ipad.name << endl;
    cout << ipad.price << endl;
    cout << ipad.discount << endl;
    cout << ipad.finalPrice() << endl;

    return 0;
}