#include<iostream>
using namespace std;


/***
 * why class when we have structure?
 * -> because structure doesn't allow function.
 * data are not protected.
*/
class Employee
{
    private:
    int a,b,c; // only accesseble by functions of this class. (by default accesibility is private)

    public:
    int d,e;
    void setData(int,int,int); // Declaration.
    void getData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};
void Employee::setData(int a,int b,int c) // implementing here.
{
    this->a = a;
    this->b = b;
    this->c = c;
}
int main()
{
    Employee e; // declaring a employee type object.
    e.d = 12;
    e.e = 23;
    e.setData(5,7,8);
    e.getData();

    return 0;
}