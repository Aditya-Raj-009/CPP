#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number() {}
    Number(int num)
    {
        a = num;
    }

    // Copy constructor:
    Number(Number &obj)
    {
        cout << "Copy constructor call: " << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The number for this object is " << a << endl;
    }

    /**
     * In C++, you should avoid declaring a copy constructor with a parameter passed by value like this:
     *
     * ClassName(const ClassName obj);  // Incorrect
     *
     * Here's why:
    1. Infinite Recursion:
    If you use ClassName(const ClassName obj) (i.e., passing by value), it would result in infinite recursion.

    When you pass an object by value, a copy of that object needs to be created.
    To create that copy, the copy constructor must be called.
    But when calling the copy constructor, the object is again passed by value, which requires another copy, leading to a recursive call to the copy constructor.
    This would continue indefinitely until the program crashes due to a stack overflow.
     */
};

int main(int argc, char const *argv[])
{
    Number x, y(9), z1;
    y.display();
    x.display();

    Number z(y);
    z.display(); // after executing one time, it will run without error
    // even though you comment out the constructor.But the statement(cou<<" ") under this constructor will not run.
    // this is becoz c++ make a default construct for every constructor , it will run copy constructor if you have created or if not it will run default copy constructor.

    z1 = z; // copy constructor will not invoke here becoz z1 is already initialized above.
    z1.display();

    Number z3 = z; // copy constructor will invoke here.
    z3.display();

    return 0;
}
