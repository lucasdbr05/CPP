#include <iostream>
using namespace std;

class Book
{
private:
    int pages;

public:
    string title;
    string author;
    Book(string atitle, string aauthor, int apages)
    {
        title = atitle;
        author = aauthor;
        setPages(apages);
    }

    bool hasPages()
    {
        if (pages > 100)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void setPages(int apages)
    {
        pages = apages;
    }

    int getPages()
    {
        return pages;
    }
};

int main()
{
    Book b1("Harry Potter", "JK Rolling", 500);

    cout << b1.title << endl;
    cout << b1.author << endl;
    b1.setPages(50);
    cout << b1.getPages() << endl;
    cout << b1.hasPages() << endl;
    return 0;
}