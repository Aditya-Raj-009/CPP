#include<iostream>
#include<list>
using namespace std;

template<class T>
void display(const list<T>& l){

    for(typename list<T>::const_iterator i = l.begin(); i!=l.end(); i++){
        cout<<*i<<" ";
    }
    cout<<endl;
}
 int main(){

    list<int> list1; // list of 0 length.
    list<int> list2(7); // empty list of size 7.
    list<int> list3(5,1); // list of size 5 with default value 1.

    cout<<"list 3"<<endl;
    display(list3);

    // insertion:
    list1.push_back(5);
    list1.push_back(2);
    list1.push_back(6);
    list1.push_back(1);

    
    cout<<"list1: "<<endl;
    
    list<int>::iterator iter;

    iter = list1.begin();   // pointer pointing to first element of list1.
    cout<<*iter<<endl;
    display(list1);

    // inserting in list2 using iterator:
    int val = 1;
    for(list<int>::iterator i = list2.begin(); i!=list2.end(); i++){
        *i = val++;
    }

    // displaying list 2:

    cout<<"list 2: "<<endl;
    list2.push_front(44); // adding element at first.
    display(list2);

    // removing element:

    list2.pop_back(); // remove an element from last.
    list2.pop_front(); // remove an element from first.
    list2.remove(3); // remove all occurance of 3 from the list 2.
    display(list2);

//  sorting list 1:
    list1.sort();

    cout<<"List 1"<<endl;
    display(list1);

    // merge list 1 and list 2;

    list1.merge(list2);

    cout<<"After merging list1 and list2 "<<endl;
    display(list1);

    // reversing the list 1:
    list1.reverse();

    cout<<"list 1"<<endl;

    display(list1);
    
    return 0;
 }