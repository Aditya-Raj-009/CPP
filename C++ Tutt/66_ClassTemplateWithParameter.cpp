#include<iostream>
using namespace std;

template<class T1 = int, class T2 = float, class T3 = char> // default type.
class Adi{
    public:
        T1 a;
        T2 b;
        T3 c;
        Adi(T1 x, T2 y,T3 z):a(x),b(y),c(z){}
        void display()
        {
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
        }

};
int main(int argc, char const *argv[])
{
    Adi<> a(4,9.8,'A');
    a.display();

     Adi<string,float,int> b("Aditya",4.5,78);
    b.display();

    return 0;
}
