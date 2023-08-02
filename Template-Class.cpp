#include <iostream>
using std::cin;
using std::cout;
// Template Class
template <class t>
class sample
{
private:
    t i;
    t j;

public:
    void get()
    {
        cout << "Enter roll number and marks of students: ";
        cin >> i >> j;
    }
    void display()
    {
        cout << "The roll number of student is: " << i << '\n';
        cout << "The marks of student is: " << j << '\n';
    }
};
int main()
{
    sample<int> s1;
    sample<float> s2;
    s1.get();
    s1.display();
    s2.get();
    s2.display();

    return 0;
}