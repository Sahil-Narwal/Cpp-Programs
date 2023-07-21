#include <iostream>
#include <conio.h>
using std::cin;
using std::cout;
// Static member data item
class alpha
{
private:
    int i;
    static int count;

public:
    void input()
    {
        cout << "Enter the number: ";
        cin >> i;
        count = count + 1;
    }
    void display()
    {
        cout << "The number is " << i << '\n';
    }
    void output()
    {
        cout << '\n';
        cout << "The number of object is " << count << '\n';
    }
};
int alpha::count = 0;
int main()
{
    alpha a1, a2, a3;
    a1.input();
    a2.input();
    a3.input();
    a1.display();
    a2.display();
    a3.display();
    a3.output();
    getch();
    return 0;
}