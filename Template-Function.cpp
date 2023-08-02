#include <iostream>
using std::cin;
using std::cout;
// Template Function
template <class tpl>
tpl area(tpl length, tpl bredth)
{
    return length * bredth;
}
template <class tpl>
tpl perimeter(tpl length, tpl bredth)
{
    return 2 * (length + bredth);
}
int main()
{
    int x, y;
    cout << "Enter the length and bredth of the rectangle: " << '\n';
    cin >> x >> y;
    cout << "The area of rectangle is : " << area(x, y) << '\n';
    cout << "The perimeter of rectangle is : " << perimeter(x, y) << '\n';

    return 0;
}