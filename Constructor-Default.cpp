#include <iostream>
using std::cin;
using std::cout;
// Default Constructor
class sample
{
private:
    int a, b;

public:
    sample()
    {
        a = 1;
        b = 2;
    }
    void display()
    {
        cout << a << " " << b;
    }
};
int main()
{
    sample s1;
    s1.display();
    return 0;
}