#include <bits/stdc++.h>
using namespace std;

// forward declaration:

class Complex; // defining prototype so that complier get to know that there will be the class when it encounter in Calculator class.

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    //  // not defining here becoz compiler don't know whether there is any 'a' or 'b' present in class Complex or not:
    int sumComplex(Complex, Complex);
    int sumComComplex(Complex, Complex);
};

class Complex
{
    int a, b;

    /*
        // Individualy declaring function of Calculator as friend so that it can access and modify the private member of Complex class:
        friend int Calculator::sumComplex(Complex o1, Complex o2);
        friend int Calculator::sumComComplex(Complex o1, Complex o2);
        */
    //  instead of making friend individualy, we can make whole class as friend:
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator::sumComplex(Complex o1, Complex o2)
{
    return o1.a + o2.a;
}
int Calculator::sumComComplex(Complex o1, Complex o2)
{
    return o1.b + o2.b;
}

int main()
{

    Complex o1, o2;
    o1.setNumber(1, 6);
    o2.setNumber(3, 9);

    Calculator cal;
    int res = cal.sumComplex(o1, o2);

    cout << "The sum of real part of o1 and o2 is " << res << endl;

    int res2 = cal.sumComComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << res2 << endl;

    return 0;
}