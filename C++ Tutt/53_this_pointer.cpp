#include<iostream>
using namespace std;

class A{

    int a;
    public:
        A& setData(int a)
        {
           // a = a;  // this will set garbage value to 'a'.
           // so we use :
        
           this->a = a; // 'this' is keyword which is a pointer which points to the current object which invoke the member function.
           
           return *this;

        }
        void getData(void)
        {
            cout<<"The value of a is "<<a<<endl;
        }
};

int main()
{
   
    A a;
    a.setData(4).getData();

    return 0;
}