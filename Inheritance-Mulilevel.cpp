#include <iostream>
using std::cin;
using std::cout;

class student
{
private:
    char name[20];

public:
    void getdata()
    {
        cout << "Enter the student name: ";
        cin >> name;
    }
    void display()
    {
        cout << "The Name is : " << name << '\n';
    }
};
class course : public student
{
private:
    char s_course[20];

public:
    void getdata()
    {
        student::getdata();
        cout << "Enter the course: ";
        cin >> s_course;
    }
    void display()
    {
        student::display();
        cout << "The course is : " << s_course << '\n';
    }
};
class duration : public course
{
private:
    int duratn;

public:
    void getdata()
    {
        cout << "Enter the duration of course in months: ";
        cin >> duratn;
        course::getdata();
    }

    void display()
    {
        course::display();
        cout << "The duration of course is: " << duratn << " months" << '\n';
    }
};
int main()
{
    duration d1;
    d1.getdata();
    d1.display();
    return 0;
}