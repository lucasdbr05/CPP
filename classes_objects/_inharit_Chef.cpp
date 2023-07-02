#include <iostream>
#include <stdio.h>
using namespace std;

class Chef
{
public:
    void makeChicken()
    {
        printf("The chef makes chicken\n");
    }
    void makeSalad()
    {
        printf("The chef makes salad\n");
    }
    void makeSpecialDish()
    {
        printf("The chef makes bbq ribs\n");
    }
};

class ItalianChef : public Chef
{
public:
    void makePasta()
    {
        printf("The chef makes pasta\n");
    }
};

int main()
{
    ItalianChef chef;
    chef.makeChicken();
    chef.makePasta();

    return 0;
}