#include <iostream>
using std::cin;
using std::cout;
// hererical
class department
{
private:
    char name[20];

public:
    void getdata()
    {
        cout << "Enter the department name: ";
        cin >> name;
    }
    void display()
    {
        cout << "The Name of department is : " << name << '\n';
    }
};
class employ : public department
{
private:
    char s_employ[20];

public:
    void getdata()
    {
        department::getdata();
        cout << "Enter the employ: ";
        cin >> s_employ;
    }
    void display()
    {
        department::display();
        cout << "The name of employ is : " << s_employ << '\n';
    }
};
class student : public department
{
private:
    char name[20];

public:
    void getdata()
    {
        cout << "Enter the student name: ";
        cin >> name;
        department::getdata();
    }

    void display()
    {
        department::display();
        cout << "The name of student is: " << name << '\n';
    }
};
int main()
{
    student d1;
    employ e1;
    e1.getdata();
    d1.getdata();
    e1.display();
    d1.display();
    return 0;
}