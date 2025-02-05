#include<iostream>
#include<vector>
using namespace std;


template<class T>
void display(const vector<T>& ele){

// When you pass a vector by const reference, you should use a constant iterator
//  (vector<int>::const_iterator) to ensure that the elements are not modified.

    // Use typename to indicate that vector<T>::const_iterator is a type

    for (typename vector<T>::const_iterator i = ele.begin(); i != ele.end(); ++i) {
        cout << *i << " ";
    }
    cout << endl;

     
}
int main(int argc, char const *argv[])
{
    vector<int> vec1 = {1,2,3,4,5,6,7,8,9,10};

    vec1.push_back(11);

    display(vec1);

    vec1.pop_back(); // remove last element.

    cout<<"After pop: "<<endl;
    display(vec1);

     // erase the first 3 elements:
    vec1.erase (vec1.begin(),vec1.begin()+3); // we must pass the iterator.

    cout<<"After erase: "<<endl;
      display(vec1);

    // To insert element at any position:

    vector<int>::iterator iter = vec1.begin();

    vec1.insert(iter,566); // insert at first.

    cout<<"After insertion at first: "<<endl;
      display(vec1);

    vec1.insert(iter+1, 66); // insert at second position.

    cout<<"After insertion at 2nd position: "<<endl;
      display(vec1);
    
    vec1.insert(iter+1,5,12);
    cout<<"After inserting 5 copy of an element: "<<endl;
      display(vec1);

      // accessing element:
      cout<<vec1[4]<<endl;  // using [] operator.

    cout<<vec1.at(9)<<endl; // using at() member function.

    // creting vector :

    vector<int> vec2(4); // providing size 4 in constructor.    // default value 0;

    vector<int> vec3(vec2);  // 4-size int vector from vec2.
    vector<int> vec4(6,8); // 6-size int vector with default value 8.
    vector<char> vec5(3,'D'); // 3-size char vector with default value 'D'

    cout<<"Display different vector: "<<endl;

    display(vec2);
    display(vec3);
    display(vec4);
    display(vec5);

    cout<<"The size of vector 1: "<<vec1.size()<<endl;


    return 0;
}
