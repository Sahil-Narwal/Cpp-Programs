#include <iostream>
using std::cin;
using std::cout;

class book
{
private:
    char name[20];

public:
    void getdata()
    {
        cout << "Enter the book name: ";
        cin >> name;
    }
    void display()
    {
        cout << "The Name is : " << name << '\n';
    }
};
class price
{
private:
    float book_price;

public:
    void getdata()
    {
        cout << "Enter the price of book: ";
        cin >> book_price;
    }
    void display()
    {
        cout << "The price is : " << book_price << '\n';
    }
};
class pageno : public price, public book
{
private:
    int pageno;

public:
    void getdata()
    {
        book::getdata();
        cout << "Enter the number of pages: ";
        cin >> pageno;
        price::getdata();
    }
    void display()
    {
        book::display();
        cout << "The number of pages are: " << pageno << '\n';
        price::display();
    }
};
int main()
{
    pageno s1;
    s1.getdata();
    s1.display();
    return 0;
}