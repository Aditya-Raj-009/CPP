#include <iostream>
using namespace std;

/* Virtual function:

In C++, a virtual function is a member function of a class that you expect to be overridden in derived classes. 
The key reason to use virtual functions is to achieve 
runtime polymorphism, allowing you to call derived class functions 
using base class pointers or references.

Key Points:
1)  Virtual Function: Declared in the base class using the virtual keyword.
2)  Overriding: Derived classes override the virtual function to provide specific functionality.
3)  Runtime Polymorphism: When a derived class function is called through a base class pointer or reference, the correct function for the object is invoked based on the actual object type at runtime.

#include <iostream>

class Animal {
public:
    // Base class virtual function
    virtual void sound() {
        std::cout << "Animal makes a sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    // Overriding the base class virtual function
    void sound() override {
        std::cout << "Dog barks" << std::endl;
    }
};

class Cat : public Animal {
public:
    // Overriding the base class virtual function
    void sound() override {
        std::cout << "Cat meows" << std::endl;
    }
};

int main() {
    Animal* animal;  // Base class pointer

    Dog dog;
    Cat cat;

    // Point to Dog object
    animal = &dog;
    animal->sound();  // Calls Dog's sound()

    // Point to Cat object
    animal = &cat;
    animal->sound();  // Calls Cat's sound()

    return 0;

    output:

    Dog barks
    Cat meows

}

*/


class BaseClass
{

public:
    int var1_base = 12;
   virtual void display()
    {
        cout << "The display Base class variable var_base " << var1_base << endl;
    }
};

class DerivedClass : public BaseClass
{
    int var1_derive = 13;

    // since we are using 'virtual' keyword for this function in base class, we can use 'override' keyword here:
    
    void display() override  
    {
        cout << "The display derive class variable var_derive " << var1_derive << endl;
    }
};

int main()
{
    BaseClass* bptr;
    DerivedClass dptr;
    bptr = &dptr;

    bptr->display();

    return 0;
}