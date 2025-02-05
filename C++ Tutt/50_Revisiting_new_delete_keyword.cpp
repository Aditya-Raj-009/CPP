#include<iostream>
using namespace std;



int main()
{
   int a = 4;
   int* ptr = &a;
   cout<<"The value of a is "<<*(ptr)<<endl;

// Dynamic memory allocation at runtime:

   int *p = new int(5);

   cout<<"The value of at address p is "<<*(p)<<endl;

   int* arr = new int[3];
   arr[0] = 5;
   arr[1] = 6;
//    arr[2] = 7;
//  or:
    *(arr+2) = 7;
   
   cout<<"The value at arr[0] "<<arr[0]<<endl;
   cout<<"The value at arr[1] "<<arr[1]<<endl;
   cout<<"The value at arr[2] "<<arr[2]<<endl;


// delete operator:
/*
In C++, delete and delete[] are used to deallocate memory that was allocated with
new and new[], respectively.
*/

   delete p;      // Correct usage for single object
    delete[] arr; // Correct usage for array of objects


/*
Key Points
Don't Access Freed Memory: After calling delete or delete[], avoid accessing the memory that was freed.
Memory is Reused: The memory may be available for reuse by the system or by other allocations, but its previous contents are not guaranteed to be preserved.
Undefined Behavior: Accessing or modifying memory after
it has been deallocated results in undefined behavior, 
which can lead to various issues like crashes, corrupted data,\
or seemingly correct outputs by chance.
*/

// don't do the below things:

//     cout<<"After deleting all contigous memory: "<<endl;

//     cout<<"The value at arr[0] "<<arr[0]<<endl;
//    cout<<"The value at arr[1] "<<arr[1]<<endl;
//    cout<<"The value at arr[2] "<<arr[2]<<endl;
//    cout<<"The value at arr[3] "<<arr[3]<<endl;

    return 0;
}