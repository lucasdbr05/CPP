#include <iostream>
using namespace std;

void log(string text)
{
    if (text.empty())
        return;

    cout << "Text: " << text << endl;
}

int main()
{
    log("");
    log("ok");

    return 0;
}