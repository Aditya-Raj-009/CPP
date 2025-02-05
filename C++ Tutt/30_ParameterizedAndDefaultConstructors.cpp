#include<iostream>
using namespace std;


class Complex{

    int a,b;
   
    public:
    // constructor:
        Complex(int,int);

        void printNum()
        {
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
        
};

Complex :: Complex(int a, int b)
{
    this -> a = a;
    this -> b = b;

}

int main()
{
    // by two ways we can call constructor:
    // 1: By implicit calling:
    Complex c(7,2);
    c.printNum();

    // 2: By Explicit call:
    Complex c2 = Complex(5,6);
    c2.printNum();


    return 0;
}