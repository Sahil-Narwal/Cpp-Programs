#include <iostream>
using std::cin;
using std::cout;
// Nested Class
class primary
{
private:
    int a;
    class secondary
    {
    private:
        int b;

    public:
        secondary()
        {
            b = 5;
        }
        void display()
        {
            cout << "The  value of b is " << b << '\n';
        }
    };

public:
    primary()
    {
        a = 6;
    }
    void display()
    {
        secondary s2;
        cout << "The  value of a is " << a << '\n';
        s2.display();
    }
};

int main()
{
    primary p1;
    p1.display();
    return 0;
}