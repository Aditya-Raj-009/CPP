#include<iostream>
#include<algorithm> // for sort function.
#include<list>
#include<functional> // all inbuilt function objects (functors) are available inside this header file.
using namespace std;

class comparator{
    public:
    bool operator()(int x, int y){
        return x>y;
    }
};

int main(int argc, char const *argv[])
{
    // Function objects (functor): It is a function wrap in a class so that it is available like an object.
    // Will be overload '()' operator' so that when we will call the object, it will automatically invoke our overoload function.

    int arr[] = {4,3,7,2,9,1};
    sort(arr,arr+6);

    cout<<"Sorted in ascending order: "<<endl;
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<endl;

    sort(arr, arr+6, greater<int>());   // passing inbuilt function object.

    cout<<"Sorted in descending order: "<<endl;
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<endl;


    sort(arr, arr+6, comparator()); // passing user defined comparator.

     cout<<"Sorted in descending order: "<<endl;
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}
