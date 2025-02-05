#include<iostream>
using namespace std;

/*
to make variable static for a class, we have to do this:
1) first define the variable in class using static keyword;
2) then define the variable out side the class using scope resolution operator.
*/


class Employee
{
 public : static  int count; // we cannot initialize it value here.
 int id;

 public:
 void setData(void)
 {
    cout<<"Enter the id"<<endl;
    cin>>id;
    count++;
 }
 void getData(void)
 {
    cout<<"The id of this employee is "<<id<<
    "and this is employee no "<<count<<endl;
 }
 static void getCount(void)
 {
    // can only use by static member of this class. eg: count. Like Java.

    cout<<"Total Employee in your company is "<<count<<endl;

 }
};
int Employee::count; // here we can initialize it value. By default is 0.

int main()
{
    Employee emp, harry,rohan;
    // emp.id = 1; // cannot do this as id and count are private member.

    emp.setData();
    emp.getData();

    harry.setData();
    harry.getData();

     rohan.setData();
    rohan.getData();

// to access static member of a class:

   cout<<"Total employee is "<<Employee::count<<endl;
    
    Employee::getCount();

    return 0;
}