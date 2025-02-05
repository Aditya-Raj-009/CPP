#include<iostream>
using namespace std;

/* Note:

Overriding Requirement:

The virtual keyword is necessary in the base class to allow a derived class method to override it.
Without virtual in the base class, the method in the derived class is treated as a new method, not an overridden one.


override Keyword:

The override keyword in the derived class is used to ensure that a method is overriding a base class method.
If there is no virtual function in the base class, using override will cause a compile-time error.
*/
class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Base1 class constructor called."<<endl;
        }
        void printData(void)
        {
            cout<<"The value of data1 is "<<data1<<endl;
        }
};

class Base2{
     int data2;
    public:
        Base2(int i){
            data2 = i;
            cout<<"Base2 class constructor called."<<endl;
        }
        void printData(void)
        {
            cout<<"The value of data2 is "<<data2<<endl;
        }
};

class Derived: public Base1, public Base2{
    int derived1,derived2;
    public:
        Derived(int a, int b, int c, int d):Base1(a),Base2(b){
            derived1 = c;
            derived2 = d;
            cout<<"Derived class constructor called."<<endl;
        }

        void printData(void) // actually, not overriding but considered as new method of derived class. Read above note.
        {
            cout<<"The value of derived1 is "<<derived1<<endl;
            cout<<"The value of derived2 is "<<derived2<<endl;
        }
};


int main(){

    Derived aditya(1,2,3,4);
    aditya.printData();
    aditya.Base1::printData();
    aditya.Base2::printData();

   


    return 0;
}