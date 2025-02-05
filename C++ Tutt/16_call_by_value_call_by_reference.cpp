#include<iostream>
using namespace std;

int sum(int a,int b)    // formal arguments
{
    return a+b;
}

//  call by reference using reference variable:
void swapRef(int &a,int &b)
{
a=a+b;
b = a-b;
a = a-b;
}


// returning reference variable:

int & swapReturnRef(int &a,int &b)
{
a=a+b;
b = a-b;
a = a-b;
return a;
}

//  call by reference using pointer variable:

void swapPointer(int* a,int* b) // using pointer.
{
 *a = *a+*b;
 *b = *a-*b;
 *a = *a-*b;
}
int main()
{
    int k = 5,x=6;
    cout<<"sum: "<<sum(k,x)<<endl; // pass actual argument
    int a=5,b=8;

// call by reference:

    swapRef(a,b);
    cout<<"a: "<<a<<" , b: "<<b<<endl; 

    swapPointer(&a,&b);
    cout<<"a: "<<a<<" , b: "<<b<<endl;

    swapReturnRef(a,b) = 766; // value of 'a' will change to 766.
    cout<<"Value of a is "<<a<<"\nValue of b is: "<<b<<endl;
}