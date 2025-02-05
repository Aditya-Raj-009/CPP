#include<iostream>
using namespace std;

template<class T>
class Adi{
    public:
    T data;
    Adi(T a):data(a){};

    void display();
    
};

template<class T>
void Adi<T>::display(){     // to define a method outside the class.
    cout<<data<<endl;
}

//  function overloading:

void func(int a){
    cout<<"I am first func() "<<a<<endl;
}

template<class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}

int main(int argc, char const *argv[])
{
    // Adi<int> a(5);

    // a.display();


//  function overloading:

    func(64); // If a method already exist of the type you passed then it call that method, Otherwise it call generic if exist.
    // above function will invoke firs func because func take int value as parameter is already exist.

    func(6.3);
    
    return 0;
}
