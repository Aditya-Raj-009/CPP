#include<iostream>
using namespace std;

template <class T>
class Vector{

public:
    T* arr;
    int size;

    public: 
        Vector(int m):size(m){
            arr = new T[size];
        }
        T dotProduct(Vector &v){
            T d = 0;
            for(int i = 0; i< size; i++)
            {
                d+=this->arr[i]*v.arr[i];
            }
            return d;
        }
};

int main(){

    Vector<float> v1(3);
    v1.arr[0] = 2.4;
    v1.arr[1] = 4.1;
    v1.arr[2] = 6.5;

    Vector<float> v2(3);
    v2.arr[0] = 3.3;
    v2.arr[1] =  5.0;
    v2.arr[2] = 2.1;

    float dot = v1.dotProduct(v2);

    cout<<dot<<endl;
    return 0;

}