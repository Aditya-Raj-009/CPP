#include<iostream>
using namespace std;

class Base1{


    public:
        void greet(){
            cout<<"How are your?"<<endl;
        }
};

class Base2{

    public:
    void greet(){
            cout<<"Kaise ho?"<<endl;
        }

};

class Derived : public Base1, public Base2{
    int a;
    
    public:
        void greet(){
            Base1::greet();
        }


};

int main(){
    Derived derive;
    // derive.greet(); // show ambigous error, becoz both base class have this same function.

    // to solve: need to call explicitly:
    derive.Base1::greet();
    derive.Base2::greet();

    /* or: simply, creat a greet method in derive class and call explicitly call a
     greet method for a particular base class directly there.

     */

    derive.greet(); // this method call the greet method of base1 class.
}