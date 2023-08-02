#include <iostream>
using std::cin;
using std::cout;
using std::endl;
// This pointer
class alpha
{
private:
    int a;

public:
    void get()
    {
        cout << "Enter any number: ";
        cin >> a;
    }
    void display()
    {
        cout << "The value entered is: " << a << endl;
        cout << "The address of " << a << " is: " << this << endl;
    }
};
int main()
{
    alpha a1, a2;
    a1.get();
    a2.get();
    a1.display();
    a2.display();

    return 0;
}