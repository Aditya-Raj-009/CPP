#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(){
        a = 9;
        b = 9;
    }
    Complex(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    Complex(int a)
    {
        this->a = a;
        this->b = 0;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    Complex c(5, 6);
    c.printNumber();

    Complex c2(9);
    c2.printNumber();

    Complex c3;
    c3.printNumber();

    return 0;
}