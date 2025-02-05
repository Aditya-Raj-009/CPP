#include<iostream>
using namespace std;


class Employee{
    int id;
    int salary;
    public:
    void setId(void)
    {
        salary = 122;
        cout<<"Enter the id of employee"<<endl;
        cin>>id;
    }
    void getId(void)
    {
        cout<<"The id of this employee is "<<id<<endl;
    
    }
};

int main()
{
    Employee fb[4];
    
    
    for(int i=0; i<sizeof(fb)/sizeof(Employee); i++)
    {
        // (fb+i)->setId();
        // or:
        fb[i].setId();
    }

    for(int i=0; i<sizeof(fb)/sizeof(Employee); i++)
    {
        fb[i].getId();
    }
    
    
    return 0;
}
