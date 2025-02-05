#include<iostream>
using namespace std;

int main()
{
    cout<<"Hello"<<endl;
    int arr[4] = {3,45,12,12}; // 4 given in [] is optional it automatically deteact when you pass the value;
    cout<<arr[3]<<endl; // accessing value at position 3;

    // changing values:
    arr[2] = 55;
    cout<<arr[2]<<endl;

    cout<<"Printing values using for loop: "<<endl;
    for(auto e: arr) // auto key word is used so that compiler automatic deteact type.
    {
        cout<<e<<endl;
    }
    
    // Taking user input in arr:

   /* cout<<"Enter size of array: "<<endl;
    int n;
    cin>>n;
    int marks[n];
    for(int i = 0; i<sizeof(marks)/sizeof(0); i++)
    {
        cin>>marks[i];

    }
    cout<<"Values are: "<<endl;
    for(int e: marks)
    {
        cout<<e<<endl;
    }

*/
// pointers for array:

    /*
    generally, we declare pointer like this:
    int* a = &b;
    but in case of array we cannot do like this.Because in arrays,the name of array is itself a address. so simply do this:
    int* m = marks; // don't give '&'.
    */

   int* a = arr;

   cout<<"The address of array arr is "<<arr<<endl;
   cout<<"The address of array arr is "<<a<<endl;

//    to get the value of array using pointer:
    cout<<"The value at 0th position of arr is "<<*a<<endl;
    cout<<"The value at 1st position of arr is "<<*(++a)<<endl;
    cout<<"The value at 2nd position of arr is "<<*(++a)<<endl;
    cout<<"The value at 3rd position of arr is "<<*(++a)<<endl;

    // using for loop:
    a = arr; // initializing again because it has changed above.
    cout<<endl;
    for(int i = 0; i<sizeof(arr)/sizeof(int); i++)
    {
        cout<<*(a+i)<<endl;
    }
   

    return 0;
}