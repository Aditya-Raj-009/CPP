#include<bits/stdc++.h>
using namespace std;

void wave(int*,int);
void swap(int&,int&);

int main()
{
    int arr[] = {4,1,5,6,7,2,3};
    wave(arr, sizeof(arr)/sizeof(int));

    for(int a: arr)
    {
        cout<<a<<" ";
    }


time_t curr = time(nullptr);
cout<<"Current time is "<<curr<<endl;

    return 0;
}

void wave(int* arr, int size)
{
    for(int i = 0; i<size-1; i+=2)
    {
        if(i!=0 && arr[i-1]<arr[i])
        {
            swap(arr[i-1],arr[i]);
        }
        if(arr[i]>arr[i+1])
        {
            swap(arr[i+1],arr[i]);
        }

    }
}
void swap(int& a,int& b)
{
    a^=b;
    b^=a;
    a^=b;
}