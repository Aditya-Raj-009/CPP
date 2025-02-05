#include<iostream>
using namespace std;

template<class T1, class T2>
float average(T1 a, T2 b){

    float avg = (a+b)/2;

    return avg;

}
int main(int argc, char const *argv[])
{
    float a = average(5.16,6);
    cout<<a<<endl;

    return 0;
}
