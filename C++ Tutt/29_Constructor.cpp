#include<iostream>
using namespace std;

class Complex{

    int a,b;
   
    public:
    // constructor:
        Complex(void);

        void printNum()
        {
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }

        
};

Complex :: Complex(void)
{
    a = 19;
    b = 34;
}

int main()
{
    Complex c;
    c.printNum();

    return 0;
}