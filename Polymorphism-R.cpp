#include <iostream>
using std::cin;
using std::cout;
// Run time polymorphism
class person
{
private:
    char name[20];

public:
    virtual void show()
    {
        cout << "Enter the name of person: ";
        cin >> name;
    }
    virtual void display()
    {
        cout << "The name of person is: " << name << '\n';
    }
};

class instructer : public person
{
private:
    int per;

public:
    void show()
    {
        person::show();
        cout << "Enter the percentage: ";
        cin >> per;
    }
    void display()
    {
        person::display();
        cout << "The number of percentage is: " << per << '\n';
    }
    void outstanding()
    {
        if (per >= 100)
        {
            cout << "Outstanding";
        }
    }
};
class student : public person
{
private:
    int per;

public:
    void show()
    {
        person::show();
        cout << "Enter the percentage: ";
        cin >> per;
    }
    void display()
    {
        person::display();
        cout << "The number of percentage is: " << per << '\n';
    }
    void outstanding()
    {
        if (per >= 100)
        {
            cout << "Outstanding";
        }
    }
};
int main()
{
    int cho;
    cout << "1 Instructor" << '\n';
    cout << "2 Student" << '\n';
    cout << "Enter your choice: ";
    cin >> cho;
    if (cho == 1)
    {
        instructer i;
        i.show();
        i.display();
        i.outstanding();
    }
    else if (cho == 2)
    {
        student s;
        s.show();
        s.display();
        s.outstanding();
    }
    else
    {
        cout << "Invalid choice";
    }

    return 0;
}