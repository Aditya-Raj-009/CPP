#include<iostream>
using namespace std;

/*
Syntax for initilization list in constructor:

constructor(argument-list): initilization-section{
assignment + other code.
}

class Test{
int a,b;
public:
    Test(int i, int j): a(i),b(j)   // it will automatically assign a = i and b = j.
    {
    // constructor body.
    }
};
*/

class Test{
    int a, b;   // 'a' is declared first then 'b'.

    public:
        Test(int i, int j): a(b), b(j)  // order of initilization depend on order of declaration. Here 'a'
        //  declared first so it will initlize first, irrespective of their order of call. b(j), a(i) in this scenerio also 'a' initilize first then 'b'.
        {
            cout<<"Constructor executed"<<endl;
        
        }

        void display(void)
        {
            cout<<"The value of a is "<<a<<endl
            <<"The value of b is "<<b<<endl;
        }
};

int main()
{
    Test t(9,2);
    t.display();


    return 0;
}