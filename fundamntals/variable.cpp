#include <cstdio>

int main()
{
    // type| identifier = value;
    double price = 99.99;
    double tax = 0.08;
    double finalPrice = price * (1 + tax);

    printf("The final price is %2f. \n", finalPrice);
    printf("Age = %d", 35);

    return 0;
}