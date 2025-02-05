#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    // to make constant variables:
     const int k = 34;
     cout<<k<<endl;

/*
manipulators:
1) endl: we use for display next line.
2) setw(): It is present in iomanip header file. It use for space width.
*/ 

int a = 3,b = 78, c= 1233;
cout<<"The value of a without setw is: "<<a<<endl;
cout<<"The value of b without setw is: "<<b<<endl;
cout<<"The value of c without setw is: "<<c<<endl;

cout<<"The value of a with setw is: "<<setw(4)<<a<<endl;
cout<<"The value of b with setw is: "<<setw(4)<<b<<endl;
cout<<"The value of c with setw is: "<<setw(4)<<c<<endl<<endl;

// Operator Precedence: use to solve arithimetic operation..i.e which operation is perform first:
int addMul = 2*5+6; // not much important.
cout<<addMul;



}