#include <iostream>
using std::cin;
using std::cout;
// Template Class Parameterised
template <class t>
class student
{
private:
    t rollno;
    t marks;

public:
    void getdata(t r, t m)
    {
        rollno = r;
        marks = m;
    }
    void dispdata()
    {
        cout << "the rollno of student is : " << rollno << '\n';
        cout << "the narks of student is : " << marks << '\n';
    }
};
int main()
{
    student<float> s1;
    s1.getdata(25, 2);
    s1.dispdata();
    return 0;
}