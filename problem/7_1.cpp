#include <iostream>
using namespace std;

class Book
{
    string title;
    int price, pages;

public:
    Book(string tilte = "", int price = 0, int pages = 0)
    {
        this->title = title; this->price = price; this->pages = pages;
    }

    void show()
    {
        cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
    }

    string getTitle()
    {
        return title;
    }

    Book operator += (int price)
    {
        this->price = this->price + price;

        return *this;
    }

    friend Book operator -= (Book& book, int price);
};

Book operator -= (Book& book, int price)
{
    book.price -= price;

    return book;
}

int main()
{
    Book a("청춘", 20000, 300), b("미래", 30000, 500);

    a += 500;
    b -= 500;

    a.show();
    b.show();
}