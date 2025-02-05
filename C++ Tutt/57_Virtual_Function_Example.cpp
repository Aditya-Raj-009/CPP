#include<iostream>
#include<cstring>
#include<limits>

using namespace std;


class PSR{

protected:
    char title[30];
    float rating;
public:
    PSR(char *s, float r){
        strcpy(title,s);
        rating = r;
    }
    virtual void display() {
        cout<<"Default from PSR"<<endl;
    }
};

class PSRVideo: public PSR{
    float videoLength;
    public:
        PSRVideo(char *s, float r, float vl):PSR(s,r){
            videoLength = vl;
        }

         void display() override{

            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Rating: "<<rating<<" out of 5 star"<<endl;
            cout<<"Length: "<<videoLength<<" minutes"<<endl;
        }
};

class PSRText: public PSR{
    int words;
    public:
        PSRText(char *s, float r, int wc):PSR(s,r){
            words = wc;
        }
        void display() override{
           cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Rating: "<<rating<<" out of 5 star"<<endl;
            cout<<"no of words: "<<words<<endl;
        }
};
int main()
{
    char* title = new char[30];
    float rating,vlen;
    int words;

    // cin.ignore(numeric_limits<streamsize>::max(), '\n');    // include<limits> before using this line.


    // Clear input buffer before using getline
    cout<<"Enter title: "<<endl;

    cin.getline(title,30);

    /* you can use getlin(title, cin) if you are using string:
    string title; 
    */

    vlen = 4.56;
    rating = 4.89;
    words = strlen(title);

    PSRVideo psr_video(title,rating, vlen);
    // psr_video.display();
    
    PSR* psr = &psr_video;

    psr->display(); // call derived version of display() .

    PSRText psr_text(title,rating,words);

    psr = &psr_text;
    psr->display(); // call derived version of display() .



    delete[] title;

    return 0; 
}

/* Rules of virtual function:
1)  Declared in Base Class:

* A virtual function must be declared in a base class using the 
virtual keyword. This enables dynamic binding of the function.

example:

class Base {
public:
    virtual void display() {
        std::cout << "Base class display function\n";
    }
};


2)  Overridden in Derived Class:

*  A derived class can override a virtual function from the base class by providing its own implementation. This is achieved using 
the same function signature (i.e., same return type and parameters).

Example:

class Derived : public Base {
public:
    void display() override {  // Overrides the base class function
        std::cout << "Derived class display function\n";
    }
};

3)  Called via Base Class Pointer or Reference:

* Virtual functions achieve dynamic dispatch when called through a pointer or reference to the base class, but 
the function corresponding to the actual object's type is called.

example:

Base* basePtr = new Derived();
basePtr->display();  // Output: "Derived class display function"

4)  Destructor Can Be Virtual:

* If a base class is intended to be inherited and deleted via a pointer to the base class, its destructor should be declared virtual. This ensures that the derived class’s destructor 
is called when an object is deleted through a base class pointer.

example:

class Base {
public:
    virtual ~Base() {
        std::cout << "Base class destructor\n";
    }
};

5)  Pure Virtual Functions and Abstract Classes:

* A virtual function can be declared as a pure virtual function by
setting it equal to 0 in the base class. This makes the base class abstract, meaning it cannot be instantiated, and any derived class must implement the pure virtual function.

example:

class Base {
public:
    virtual void display() = 0;  // Pure virtual function
};


6)  Virtual Functions Are Inherited:

*   If a class inherits another class that has virtual functions,
those virtual functions are inherited by the derived class. 
The derived class can override them, or it can choose to use 
the base class's version of the function.

7)  Virtual Functions Are Resolved at Runtime (Dynamic Dispatch):

*   The actual function that gets called is determined at runtime based on the type of the object that a pointer or 
reference is pointing to. This process is known as dynamic dispatch.

8)  Cannot Be Static:

* Virtual functions cannot be declared static. Static methods belong to the class, not to any object instance, and virtual functions
rely on object instances for dynamic dispatch.

9) Can Be Called Using the Base Class Version:

* Even if a derived class overrides a virtual function, you can still explicitly call 
the base class version using the scope resolution operator (::).

example:

Derived d;
d.Base::display();  // Calls the base class version of the function

10) Object Slicing:

* If an object of a derived class is assigned to a base class object (not a pointer or reference), the derived part of the object is sliced off, and only the base class part 
remains. In this case, virtual function behavior will be lost.

example:

Derived d;
Base b = d;  // Object slicing occurs here
b.display();  // Calls Base's display() instead of Derived's

11) Performance Considerations:

* Virtual functions add a slight overhead due to the use of the 
virtual table (vtable) and virtual table pointer (vptr).
However, the performance impact is typically minimal unless 
there are many frequent calls to virtual functions.

12) Virtual Functions in Constructors:

* Virtual functions do not behave polymorphically when called inside constructors or destructors. Only the base class version of the virtual function will be called, even
if the object being constructed or destroyed is of a derived type.

example:

class Base {
public:
    Base() {
        display();  // Calls Base::display, not Derived::display
    }

    virtual void display() {
        std::cout << "Base display\n";
    }
};

class Derived : public Base {
public:
    void display() override {
        std::cout << "Derived display\n";
    }
};

int main() {
    Derived d;  // Output: Base display (not Derived display)
    return 0;
}


13) virtual function can be a friend of another class.

*/