#include<iostream>
using namespace std;


 /*
    Pointer: It is a data type which hold the address of other data types.
    */
int main()
{
   
   int a = 3;

   // maine kaha ek int * type ka variable bana do jo hold krta ho address of a.
   int* b = &a; // here b is a pointer.
   /*
     &: Address of operator.
    * : Deference operator(value at operator).
   */
  cout<<a<<endl;
  cout<<"The address of a is "<<b<<endl;
  cout<<"&a is also print the address "<<&a<<endl;

//   to print the value of that address:
    cout<<"The value at address b is "<<*b<<endl;
    
    // pointer to pointer (address of address):
    int** c = &b; // store the address of pointer.
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;

    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address of address of c is "<<**c<<endl;



    /*

    int a = 7;
   int &b = a; // it is like 'b' is another name of 'a'. Here 'b' is reference of 'a'. 'b' doesn't take different memory space
   int* c = &a; // 'c' is storing address of 'a'.

    b = 8;

    cout<<a<<endl;
   cout<< b <<endl;
   cout<<*c<<endl;

   /*
   Difference between &b and c:

1)  &b (Reference to a):
b is a reference to a, meaning it is another name for a.
&b is the address of b, but since b is just another name for a, &b is the same as &a, which is the address of a.
b is not a separate memory entity; it is just an alias for a. When you use b, you are actually directly accessing a.

2) c (Pointer to a):
c is a pointer that stores the memory address of a.
c itself is a separate variable that occupies its own memory space. This variable c holds the address of a.
*c (dereferencing c) will give you the value of a (which is 7 in this case).

    */

    return 0;
}