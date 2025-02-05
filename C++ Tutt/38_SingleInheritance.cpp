#include<iostream>
using namespace std;

class Base{

int data1; // private by default and private member cannot be inherit.

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base::setData(void){
data1 = 2;
data2 = 4;
}

int Base::getData1(){
    return data1;
}

int Base::getData2(){
    return data2;
}

class _Derived: public Base{

int data3; // private by default.

public:
    void process();
    void display();

};

void _Derived::process(){
    data3 = data2 * getData1(); // because we don't direct access of data1 as it it private.
}
void _Derived :: display(){
    cout<<"Value of data 1 is "<<getData1()<<endl; // data1 is private. so it is inaccessible
    cout<<"Value of data 2 is "<<data2<<endl;
    cout<<"Value of data 3 is "<<data3<<endl;
}

int main(){
    _Derived der;
    der.setData(); // calling function of Base class. If we had inherited privately, we would not have access setData.

    der.process();
    der.display();
    
    return 0;
}
