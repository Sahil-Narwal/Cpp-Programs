#include <iostream>
#include <conio.h>
using std::cin;
using std::cout;
// Static member data function
class alpha
{
private:
    int i;
    static int count;
    static float total;

public:
    void input()
    {
        cout << "Enter the number: ";
        cin >> i;
        count = count + 1;
        total = total + i;
    }
    void display()
    {
        cout << "The number is " << i << '\n';
    }
    static void output()
    {
        cout << '\n';
        cout << "The number of object is " << count << '\n';
        cout << "The sum of numbers is: " << total << '\n';
    }
};
int alpha::count = 0;
float alpha::total = 0;
int main()
{
    alpha a1, a2, a3;
    a1.input();
    a2.input();
    a3.input();
    a1.display();
    a2.display();
    a3.display();
    alpha::output();
    getch();
    return 0;
}