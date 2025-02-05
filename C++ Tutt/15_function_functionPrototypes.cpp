
#include<iostream>
using namespace std;




int sum(int a , int b)
{
    int c = a+b;
    return c;
}

/*
cpp follows top-to-bottom opproach. So if you define any method after main
it will throw an error: "this method is not define in this scope."

So to solve this problem, we use function prototype.
By function prototype: we define the funtion type..ie.. its return type,
parameter and name before the implementing so that compiler get ready for that
function and execute even if you made the function after main function.

syntax: 
return_type funct_name(parameter_type, parameter_type)
or:
return_type funct_name(parameter_type variable1, parameter_type variable2)
*/

// function prototype:

 int diff(int,int);

//  or: both syntax is acceptable.:
// int diff(int a,int b);

void demo(void);

// or:
// void demo();

int main()
{

int num1,num2;
    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter second number: "<<endl;
    cin>>num2;
   cout<<"Sum of "<<num1<<" and "<<num2<<" is "<<sum(num1,num2)<<endl;
    cout<<"Difference of "<<num1<<" and "<<num2<<" is "<<diff(num1,num2)<<endl;

    demo();
    return 0;
}

int diff(int a, int b)
{
    return a-b;
}
void demo()
{
    cout<<"Running demo function..."<<endl;
}

