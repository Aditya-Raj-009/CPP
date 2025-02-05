#include <iostream>
using namespace std;


/** What is pure virtural function?

 *

 * A pure virtual function in C++ is a virtual function

 * that does not have an implementation in the base class

 * and must be overridden by any derived class that wishes to

 * instantiate objects. Pure virtual functions are used to define

 * abstract classes, which cannot be nstantiated on their own but serve as base classes for other classes.

 *

 * Syntax:

To declare a pure virtual function, you use the = 0 syntax in

the function declaration within the base class.



class Base {

public:
//Pure virtual function
    virtual void someFunction() = 0;

};





Key Characteristics:



1)  Abstract Class: Any class with one or more pure virtual functions is considered an abstract class.

      * You cannot instantiate an abstract class directly. It serves as a blueprint for derived classes.

2)  Must Be Overridden: Derived classes are required to provide an implementation for all pure virtual functions in order to instantiate objects of the derived class

3)  Purpose: Pure virtual functions define a common interface for all derived classes, ensuring they implement certain behavior.



Example of a Pure Virtual Function:


//Abstract Base Class


class Animal {

public:

//Pure virtual function

    virtual void sound() = 0;

};



class Dog : public Animal {

public:

//Overriding the pure virtual function


    void sound() override {

        std::cout << "Dog barks" << std::endl;

    }

};



class Cat : public Animal {

public:
                                                                                                                                                                       
//Overriding the pure virtual function
                                                                                                                                                                                  
    void sound() override {                                                                                                                                            
                                                                                                                                                                       
        std::cout << "Cat meows" << std::endl;                                                                                                                         
                                                                                                                                                                       
    }                                                                                                                                                                  
                                                                                                                                                                       
};                                                                                                                                                                     
                                                                                                                                                                       
                                                                                                                                                                       
                                                                                                                                                                       
int main() {                                                                                                                                                           
Animal animal; // Error: Cannot instantiate an abstract class

    //Valid:
    Animal* dog = new Dog();
    //Valid:
    Animal* cat = new Cat();

 //Output: Dog barks
    dog->sound();                                                                                                                                                     
                                                                                                                                                                       

//Output: Cat meows
    cat->sound();                                                                                                                                                    
                                                                                                                                                                    
                                                                                                                                                                    
                                                                                                                                                                    
    delete dog;                                                                                                                                                      
                                                                                                                                                        
    delete cat;                                                                                                                                                        
                                                                                                                                                                       
                                                                                                                                                                
                                                                                                                                                                       
    return 0;                                                                                                                                                        
                                                                                                                                                      
}                                                                                                                                                                     
                                                                                                                                                                    
  What are abstract classes?                                                                                                                                                                                                                                                                                                                                                                                                                                           
                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
 An abstract class in C++ is a class that cannot be instantiated directly.
 It is typically used as a blueprint for other classes. An abstract class contains at least one pure virtual function,
  which must be implemented by any concrete (non-abstract) derived class. The purpose of an abstract class is to provide a 
  common interface for its derived classes while leaving the specific implementation of certain methods to be defined by those derived classes. 
                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
Characteristics of an Abstract Class:
                                                                                                                                                                                                                                                                                                                                                                                                                                
1)  Cannot Be Instantiated: You cannot create an object of an abstract class directly. It only serves as a base class.                                                                                                                                                                                                                                                                                                                                                     
2)  Contains Pure Virtual Functions: An abstract class must have at least one pure virtual function (a function declared with = 0). Derived classes must override these functions to become concrete classes.                                                                                                                                                                                                                                                               
3)  Serves as a Base Class: Abstract classes are used to define a common interface or behavior that must be implemented by derived classes.                                                                                                                                                                                                                                                                                                                                

Example of an Abstract class:

// Abstract Base Class
class Animal {
public:
    // Pure virtual function (makes the class abstract)
    virtual void sound() = 0;
    
    // Regular function
    void sleep() {
        std::cout << "Animal is sleeping" << std::endl;
    }
};

// Concrete class (derived from abstract class)
class Dog : public Animal {
public:
    // Overriding the pure virtual function
    void sound() override {
        std::cout << "Dog barks" << std::endl;
    }
};

class Cat : public Animal {
public:
    // Overriding the pure virtual function
    void sound() override {
        std::cout << "Cat meows" << std::endl;
    }
};

int main() {
    // Animal animal; // Error: Cannot instantiate an abstract class

    Animal* dog = new Dog();  // Valid: Concrete derived class
    Animal* cat = new Cat();  // Valid: Concrete derived class

    dog->sound();  // Output: Dog barks
    cat->sound();  // Output: Cat meows

    dog->sleep();  // Output: Animal is sleeping
    cat->sleep();  // Output: Animal is sleeping

    delete dog;
    delete cat;

    return 0;
}


Why Use Abstract Classes?
Abstract classes are useful when you want to create a common 
interface that enforces derived classes to implement certain 
behavior, but allows flexibility in how the behavior is implemented. 
Some common use cases include:

Frameworks: Abstract classes are often used in software 
frameworks to provide a generic interface that specific 
implementations must adhere to.

Polymorphism: Abstract classes allow 
for polymorphism, where you can use pointers or 
references to the abstract class type but actually deal with 
objects of derived classes, allowing you to write more flexible 
and modular code.

 */                                          
                                                                                                                                                                     
                                                                                                                                                                    
// Abstract Base Class
class Animal {
public:
    // Pure virtual function (makes the class abstract)
    virtual void sound() = 0;
    
    // Regular function
    void sleep() {
        std::cout << "Animal is sleeping" << std::endl;
    }
};

// Concrete class (derived from abstract class)
class Dog : public Animal {
public:
    // Overriding the pure virtual function
    void sound() override {
        std::cout << "Dog barks" << std::endl;
    }
};

class Cat : public Animal {
public:
    // Overriding the pure virtual function
    void sound() override {
        std::cout << "Cat meows" << std::endl;
    }
};

int main() {

    // Animal animal; // Error: Cannot instantiate an abstract class

    Animal* dog = new Dog();  // Valid: Concrete derived class
    Animal* cat = new Cat();  // Valid: Concrete derived class

    dog->sound();  // Output: Dog barks
    cat->sound();  // Output: Cat meows

    dog->sleep();  // Output: Animal is sleeping
    cat->sleep();  // Output: Animal is sleeping

    delete dog;
    delete cat;

    return 0;
}
