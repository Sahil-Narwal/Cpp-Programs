#include <iostream>
using std::cin;
using std::cout;

class students
{
private:
    int rollno;
    int marks;
    char name[20];

public:
    void getdata()
    {
        cout << "Enter Rollno: ";
        cin >> rollno;
        cout << "The marks is: ";
        cin >> marks;
        cout << "The name is: :";
        cin >> name;
    }
    void display()
    {
        cout << "The Roll no is: " << rollno << '\n';
        cout << "The Marks is: " << marks << '\n';
        cout << "The Name is: " << name << '\n';
    }
};

int main()
{
    students s1, s2;
    s1.getdata();
    s2.getdata();
    s1.display();
    s2.display();
    return 0;
}