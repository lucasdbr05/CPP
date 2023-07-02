#include <iostream>
using namespace std;

const double MINIMUN_WAGE = 1557;
class Employee
{
private:
    string name;
    int wage;

public:
    string getName()
    {
        return name;
    }
    void setName(string n)
    {
        this->name = n;
    }

    double getWage()
    {
        return wage > MINIMUN_WAGE ? wage : MINIMUN_WAGE;
    }
    void setWage(double w)
    {
        if (w >= MINIMUN_WAGE)
            wage = w;
    }
};

int main()
{
    Employee emp1;
    emp1.setName("Lucas Gabriel");
    emp1.setWage(30000);
    cout << emp1.getName() << ": "
         << "US$" << emp1.getWage() << endl;

    return 0;
}