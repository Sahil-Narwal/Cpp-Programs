#include <iostream>
#define pi 3.14
using std::cin;
using std::cout;
using std::endl;
// Inline function
class circle
{
private:
    int radius;

public:
    void getdata()
    {
        cout << "Enter radius: ";
        cin >> radius;
    }
    inline int area()
    {
        return radius * radius * pi;
    }
};
int main()
{
    circle obj;
    obj.getdata();
    cout << "The areea of circle is: " << obj.area() << endl;
}