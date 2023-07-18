#include <iostream>
using std::cin;
using std::cout;
// Local Class
int function()
{
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
            cout << "The addition of numbers are : " << a + b;
        }
    };
    alpha a1;
    a1.get();
    a1.display();
}
int main()
{
    function();
    return 0;
}