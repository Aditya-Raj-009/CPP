#include<iostream>
using namespace std;

/**
 * Destructor: 
 * It free the memory that is created dynamicaly when we creates any object.
 * It doesn't take any argument.
 * It is called automatically by the compiler to clean up the memory.
 * */
int count = 0;
class Num{
    public:
    Num(){
        count++;
        cout<<"This is the time when constructor is callled for object number "
        <<count<<endl;
        
    }
    // Destructor:
    ~Num(){
        cout<<"This is the time when my destructor is called for object number "
        <<count<<endl;
        count--;
    }
};

int main()
{
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first objects n1"<<endl;
    Num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating 2 more objects"<<endl;
        Num n2,n3;
        cout<<"Exiting this block"<<endl;
    }// as soon as code exit this block destructor for n2,n3 is called.
    
    cout<<"Back to main"<<endl;
    return 0;
}