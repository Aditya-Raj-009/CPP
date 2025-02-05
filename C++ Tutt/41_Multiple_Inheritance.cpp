#include <iostream>
using namespace std;

/* Syntax for inheriting in multiple inheritance:

class Derived : visibility-mode Base1, visibility-mode Base2{

// body

};
*/

class Base_1
{
protected:
    int base1_int;

public:
    void set_base1int(int a)
    {
        base1_int = a;
    }
};

class Base_2
{
protected:
    int base2_int;

public:
    void set_base2int(int a)
    {
        base2_int = a;
    }
};
class Base_3
{
protected:
    int base3_int;

public:
    void set_base3int(int a)
    {
        base3_int = a;
    }
};

class Derived : public Base_1, public Base_2, public Base_3
{

public:
    void show()
    {
        cout << "The value of base1 is " << base1_int << endl;
        cout << "The value of base2 is " << base2_int << endl;
        cout << "The value of base3 is " << base3_int << endl;
        cout << "The sum of base1 and base2 is " << base1_int + base2_int + base3_int<< endl;
    }
};

int main()
{

    Derived aditya;

    aditya.set_base1int(34);
    aditya.set_base2int(42);
    aditya.set_base3int(29);
    aditya.show();

    return 0;
}
