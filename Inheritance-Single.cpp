#include <iostream>
using std::cin;
using std::cout;
//
class game
{
private:
    char name[20];

public:
    void getdata()
    {
        cout << "Entre the game is: ";
        cin >> name;
    }
    void display()
    {
        cout << "The Name is :" << name << '\n';
    }
};
class student : public game
{
private:
    char name[30];
    int rollno;
    int marks;

public:
    void getdata()
    {
        game::getdata();
        cout << "Enter the Name is :";
        cin >> name;
        cout << "Enter the Rollno is :";
        cin >> rollno;
        cout << "Enter the Marks is :";
        cin >> marks;
    }
    void display()
    {
        game::display();
        cout << "The Name is :" << name << '\n';
        cout << "The Rollno is :" << rollno << '\n';
        cout << "The Marks is :" << marks << '\n';
    }
};
int main()
{
    student s1;
    s1.getdata();
    s1.display();
    return 0;
}
