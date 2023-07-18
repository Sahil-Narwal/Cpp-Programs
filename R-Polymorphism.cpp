#include <iostream>
using std::cin;
using std::cout;
// Run time polymorphism
class sample
{
public:
    virtual void show()
    {
        cout << "Base class ";
    }
};

class intel : public sample
{
    void show()
    {
        cout << "Derived class ";
    }
};

int main()
{
    intel obj;
    sample *ptr;
    ptr = &obj;
    ptr->show();
    return 0;
}