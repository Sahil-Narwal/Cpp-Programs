#include <iostream>
using std::cin;
using std::cout;
// Compile time polymorphism
class sample
{
    int a1, b1;

public:
    void show(int x, int y)
    {
        a1 = x;
        b1 = y;
        cout << x << " " << y << '\n';
    }
    void show(float x, float y)
    {
        a1 = x;
        b1 = y;
        cout << x << " " << y << '\n';
    }
    void show(double x, double y)
    {
        a1 = x;
        b1 = y;
        cout << x << " " << y << '\n';
    }
};
int main()
{
    sample s1, s2;
    s1.show(25, 65);
    s2.show(45.6, 58.9);
    return 0;
}