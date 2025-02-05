#include <iostream>
using namespace std;

/*
inline function:
C++ provides inline functions to
 reduce the function call overhead. 
 An inline function is a function that is 
 expanded in line when it is called.
 When the inline function is called
 whole code of the inline function gets inserted or 
 substituted at the point of the inline function call.
 This substitution is performed by the C++ compiler at compile time.
 An inline function may increase efficiency if it is small.

Syntax:

inline return-type function-name(parameters)
{
    // function code
}  
*/
// inline function:

inline int product(int a, int b)    // recommended for use only for small and simple methods.
{
    return a * b;
}

// default arguments:

float moneyRecieved(float currentMoney,float factor = 1.04)
{
    return currentMoney*factor;
}

// constant arguments:

int strlen(const char*p) // so that no change can made in function.
{
// code.
return 0;
}

int main()
{

    cout <<product(5,6)<<endl;
    cout<<moneyRecieved(5000)<<endl;
    cout<<moneyRecieved(5000,1.45)<<endl;
    return 0;
}
