#include<iostream>
using namespace std;

class Simple{
    int data1,data2;
    public:
        Simple(int a, int b=9) // default value
        {
            data1 = a;
            data2 = b;
        }
        void printData(void);
};
void Simple::printData()
{
    cout<<"The value of data is "<<data1<<" and "<<data2;
}
int main()
{
    Simple s(4);
    s.printData();
    return 0;
}