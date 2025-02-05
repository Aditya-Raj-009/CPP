#include<iostream>
using namespace std;

int c = 45; // global variable.
int main()
{
    // int a,b,c;
    // cout<<"Enter the value of a: "<<endl;
    // cin>>a;
    // cout<<"Enter the value of b: "<<endl;
    // cin>>b;
    // c = a+b;
    // cout<<"The sum is "<<c<<endl;

    // to access global variables we use ::variableName (:: is called scope resolution operator):
    // cout<<"The global c is "<<::c<<endl;

    // float d = 34.4f;    // f or F use to denote floating point number.
    // long double e = 34.4L; // long double use for more precise than double and l or L use for lond double.

    // cout<<"The size of 34.4 is "<<sizeof(34.34)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.34f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.34F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.34l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.34L)<<endl;
   
    // cout<<endl<<"The value of d is "<<d<<endl<<"The value of e is "<<e;


    // Reference variables:

    float x = 455;
    float & y = x;  // here y is refer to x.
    
    cout<<x<<endl;
    cout<<y<<endl;

    // any change in either x or y it will reflect on both:
    y = 8;  // x will also change.
    cout<<x<<endl;
    cout<<y<<endl;


    // Typecasting is same as java.:

    int a = 78;
    float f = 5.689;
    cout<<"a is change to float: "<<(float)a<<endl;
    cout<<"you can also do typecasting like this: "<<float(a)<<endl;
    cout<<"f is change to int:  "<<(int)f<<endl;
    cout<<"you can also do typecasting like this: "<<int(f)<<endl;



    return 0;
}