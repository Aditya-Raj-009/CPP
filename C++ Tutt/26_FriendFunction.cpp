#include<iostream>
using namespace std;


class Complex{
    int a,b;
    public:
    void setNumber(int n1,int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }

// Below line means it allowing this function to access and modify private member of this class.:
    friend Complex sumOfComplex(Complex c1, Complex c2);
    
};
Complex sumOfComplex(Complex c1, Complex c2)
{
    Complex c3;
    /* throw error since 'a' and 'b' is private.
    but after adding 'friend Complex sumOfComplex(Complex c1, Complex c2)' in
    Complex class it will not throw error.
    friend modifier make this function as friend and give access to its private members.
    But this function is not the member of the Complex class.
    */
    c3.setNumber(c1.a+c2.a,c1.b+c2.b); 
    return c3;
}
int main()
{
    Complex c1,c2, sum;
    c1.setNumber(1,4);
    c2.setNumber(5,8);
    c1.printNumber();
    c2.printNumber();

    sum = sumOfComplex(c1,c2);
    sum.printNumber();


    return 0;
}

/*
Properties of friend functions:
1. Not in the scope of class.
2. Since it is not in the scope of the class, it cannot be called from the object of that
class. c1.sumComplex() -> invalid.

3. can be invoked without the help of any object.
4. Usually contains the objects as arguments.
5. Can be declared inside public or private section of the class.
6. It cannot access the member directly by their names and need object_name.member_name to access.
*/