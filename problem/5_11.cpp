#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Book
{
    char* title;
    int price;

public:
    Book(const char* title, int price)
    {
        int len = strlen(title);
        this->title = new char[len + 1];
        this->price = price;
        strcpy(this->title, title);
    }

    ~Book()
    {
        delete [] title;
    }

    Book(Book& book)
    {
        this->price = book.price;
        int len = strlen(book.title);
        this->title = new char[len + 1];
        strcpy(this->title, book.title);
    }

    void set(const char* title, int price)
    {
        if (this->title)
            delete[] this->title;

        this->price = price;
        int len = strlen(title);
        this->title = new char[len + 1];
        strcpy(this->title, title);
    }

    void show()
    {
        cout << title << ' ' << price << "원" << endl;
    }
};

int main()
{
    Book cpp("명품C++", 10000);
    Book java = cpp;

    java.set("명품자바", 12000);
    cpp.show();
    java.show();
}