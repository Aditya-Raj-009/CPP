#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;
        }

        void setData(int r, int i){
            real = r;
            imaginary = i;
        }
        
};
int main(){

// Normal:

    // Complex c1;
    // c1.setData(1,54);
    // c1.getData();

// using pointer:

Complex c1;
Complex* ptr = &c1;

// without arrow operator: (By dereferencing)

(*ptr).setData(4,5);
(*ptr).getData();

// with arrow operator:

ptr->setData(7,8);  // '->' it will dereference the pointer ptr.
ptr->getData();

// using new operator:

Complex *p = new Complex;   // parenthesis '()' is optional here, It will call default constructor.

// without using arrow operator: (By dereferencing)
(*p).setData(8,9);
(*p).getData();

// with arrow operator:
p->setData(9,3);
p->getData();


// creating array of Object:
cout<<"Creatin array of object: "<<endl;
Complex* c_arr = new Complex[3];
c_arr->setData(4,3);
c_arr->getData();
(c_arr+1)->setData(6,2);
(c_arr+1)->getData();
(c_arr+2)->setData(64,33);
(c_arr+2)->getData();


    return 0;
}