#include<iostream>
using namespace std;


int add(int a, int b)
{
    return a+b;
}
double add(double a, double b)
{
    return a+b;
}

int main()
{
    cout<<add(5,6)<<endl;
    cout<<add(6.1,8.7)<<endl;
    return 0;
}
