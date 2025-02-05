#include <iostream>
using namespace std;

class BaseClass
{

public:
    int var1_base;
    void display()
    {
        cout << "The display Base class variable var_base " << var1_base << endl;
    }
};

class DerivedClass : public BaseClass
{
    int var1_derive;
    void display()
    {
        cout << "The display derive class variable var_derive " << var1_derive << endl;
    }
};

int main()
{
    BaseClass *baseclass;
    DerivedClass derived_class;
    baseclass = &derived_class;

    (*baseclass).display(); // base class function will call (becoz it is not overriden by derived class.)
    baseclass->var1_base = 43;
    baseclass->display();

    // baseclass->var_derive = 56  // throw error because we cannot call derived class member from a base class reference.

    return 0;
}