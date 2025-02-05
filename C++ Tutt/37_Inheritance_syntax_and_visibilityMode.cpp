#include <iostream>
using namespace std;

// Base class:
class Employee
{

public:
    int id;

    float salary;
    Employee(int id)
    {
        this->id = id;
        this->salary = 3400.32;
    }
    Employee()
    {
    }
};

/* Derived class syntax:
class derivedClass : Visibility_mode BaseClass
{
    visibiliyMode: It can be private or public.
    by providing this ,you are telling that you are inheriting the class
    publically or privately

   1. If you are using publicVisibilityMode then every public member of base class
    will act as public member of derived class.

    2. If you are using privateVisibilityMode every public member of base class
    will act as private member of derived class.

    Note:
    1. Default visibilityMode (when you are not giving any visibilityMode)
        is private.

    2. You cannot inherit or access private member of base class.So private member
    of base class can never become member of derived class.
}
*/

// creating a Programmer class as Derived class:

class Programmer : Employee // by default inheriting privately.
{
public:
    int languageCode = 9;
    Programmer(int id)
    {
        this->id = id;
    }
    void getData(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << " " << rohan.salary << endl;

    Programmer prog(3);
    cout << prog.languageCode << endl;

    // cout<<prog.id<<endl;    // cannot access untill you provide public visibility mode to derived class.
    prog.getData();

    return 0;
}
