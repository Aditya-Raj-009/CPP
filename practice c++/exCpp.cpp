#include<iostream>
using namespace std;

 class{
    public:
    
    void display(){
        cout<<"hello"<<endl;
    }
} Hello;

struct Hey{
    void display(){
        cout<<"hey"<<endl;
    }
    Hey(){
        cout<<"I am constructor of struct Hey"<<endl;
    }
} heee;

int main(int argc, char const *argv[])
{
//     Hello.display();
//     // Hey* h = new Hey();
//     // h->display();

//    Hey h;
//    h.display();

    return 0;
}
