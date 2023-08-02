#include <iostream>
using std::cin;
using std::cout;
using std::endl;
// Function Overloading compile time polymorphism
class alpha
{
public:
    int perimeter(int a, int b)
    {
        return 2 * (a + b);
    }
    int perimeter(int a, int b, int c)
    {
        return a + b + c;
    }
};
int main()
{
    alpha obj;
    int a, b;
    cout << "Enter the sides of rectangle: ";
    cin >> a >> b;
    cout << "The perimeter of the rectangle is " << obj.perimeter(a, b) << endl;
    int x, y, z;
    cout << "Enter sides of triangle: ";
    cin >> x >> y >> z;
    cout << "The perimeter of the triangle is " << obj.perimeter(x, y, z) << endl;

    return 0;
}