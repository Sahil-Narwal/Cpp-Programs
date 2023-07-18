#include <iostream>
using std::cin;
using std::cout;
// Friend Class
class alpha
{
private:
    int a, b;

public:
    void get()
    {
        cout << "Enter two numbers :" << '\n';
        cin >> a >> b;
    }
    void display()
    {
        cout << "The enterd numbers are : " << a << " " << b << '\n';
    }
    friend class multiply;
};
class multiply
{
public:
    void mul()
    {
        alpha a1;
        a1.get();
        a1.display();
        cout << "The multiplication of two numbers is : " << a1.a * a1.b << '\n';
    }
};
int main()
{
    multiply m1;
    m1.mul();
    return 0;
}