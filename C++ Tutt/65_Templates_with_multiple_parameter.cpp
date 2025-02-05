#include<bits/stdc++.h>
using namespace std;

/*
template<class T1, class T2>
class nameOfClass{
// body
}

*/
template<class T1, class T2>
class myClass{
    public:
    T1 data1;
    T2 data2;

    myClass(T1 d1, T2 d2):data1(d1),data2(d2){}

    void display(){
        cout<<this->data1<<" "<<this->data2<<endl;
    }
};
 
int main()
{

myClass<string,int> obj("Aditya",20);
 
    obj.display();
    
    return 0;
}