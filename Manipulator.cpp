#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::setw;
// Using Manipulator
class alpha
{
private:
    int a, b;
    char name[20];

public:
    void get()
    {
        cout << "Enter the name of student: " << endl;
        cin >> name;
        cout << "enter the rollno and marks: " << endl;
        cin >> a >> b;
    }
    void display()
    {
        cout << "The name of student is: " << name << endl;
        cout << "The rollno and marks of studnets are: " << a << setw(5) << b << endl;
    }
};
int main()
{
    alpha obj;
    obj.get();
    obj.display();
    return 0;
}