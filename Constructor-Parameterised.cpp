#include <iostream>
using std::cin;
using std::cout;
// Parameterised Constructor
class sample
{
private:
    int alpha, beta;

public:
    sample(int a, int b)
    {
        alpha = a;
        beta = b;
    }
    void display()
    {
        cout << alpha << " " << beta << '\n';
    }
};
int main()
{
    sample s1(196, 275);
    s1.display();
    s2.display();
    return 0;
}