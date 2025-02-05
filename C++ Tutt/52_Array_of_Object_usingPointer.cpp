#include<iostream>
using namespace std;


class Shop{

    int id;
    float price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(void){
            cout<<"Code of this item is "<<id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }
};
int main(){

    int size = 3;
    Shop* ptr = new Shop[size]; // same as '&s' but 'new' is used for dynamic memory allocation.
    Shop* pos = ptr;
    for(int i = 0; i<size; i++)
    {
        int p;
        float q;
        cout<<"Id and Price of item: "<<i+1<<endl;
        cin>>p>>q;      // by default 'endl' is added.

        // to dereference use either way:
        // (*ptr+i).setData(p,q)  or (ptr+i)->setData();

        // (ptr+i)->setData(p,q);
        //  or:
        pos->setData(p,q);
        pos++;
    }

    pos = ptr;
    for(int i = 0; i<size; i++)
    {
        cout<<"Item no : "<<i+1<<endl;
        pos->getData();
        pos++;
    }

    return 0;
}