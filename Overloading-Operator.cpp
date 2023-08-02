#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::setw;
// Operator overloading
class alpha
{
private:
    int x, y;

public:
    void get()
    {
        cout << "Enter hour and minutes" << endl;
        cin >> x >> y;
    }
    void display()
    {
        cout << "Total time is :    " << x << " : " << y << endl;
    }
    alpha
    operator+(alpha c)
    {
        alpha temp;
        temp.x = x + c.x;
        temp.y = y + c.y;
        if (temp.y > 59)
        {
            temp.y -= 60;
            temp.x += 1;
        }
        if (temp.x > 23)
        {
            temp.x -= 24;
        }
        return temp;
    }
};
int main()
{
    alpha o1, o2, o3;
    o1.get();
    o2.get();
    o3 = o1 + o2;
    o3.display();
    return 0;
}