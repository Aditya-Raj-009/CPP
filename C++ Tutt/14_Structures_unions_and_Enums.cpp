#include <iostream>
using namespace std;

/*
Structure: It is a user defined data types.We use this for store different data types.
*/
struct Book
{
    /* data */
    const int page = 102;
    const float price = 100.56;
    const string name = "Path to Heaven";
    const string author = "Aditya Raj";
    string area = "your area here";
    long long ph_no = 333333;

    int fun()
    {
        cout << "Hello I am fun";
        return 0;
    }
};

/* typedef: It stands for type definition.It is simply a way of giving a new name to an existing data type.
 In other words,it is a reserved keyword we use to create an alias name for a specific data type.
 The function or purpose served by the data type remains unchanged.

for eg:
typedef int myInt;
// now you can do this:
myInt n1 = 10;  // here myInt is work like int.
myInt n2 = 45;
*/

typedef struct Employee
{
    /* data */
    int Id = 2141988;
    int salary = 211028399;
    string name = "Employee@112";
} emp; // giving alias for Employee.

// unions: It is similar to structures but it provides better memory management.we can initialize or set one member at a time.

union money
{
    /* data */
    int rice = 998;
    char car;
    float pound;
};

/*
Enums:
*/
enum meal
{
    breakfast,
    lunch,
    dinner
};

int main()
{
    cout << "Hello" << endl;

    // use struct:
    struct Book newB;
    struct Book myBook;
    struct Book jelly;
    Book b;
    b.area = "My area...yo";

    // changing value:
    newB.ph_no = 9693494500;

    cout << newB.ph_no << endl;
    cout << newB.author << endl;
    cout << newB.area << endl;
    cout << newB.name << endl;
    cout << newB.page << endl;
    cout << newB.price << endl;
    cout << b.area << endl;

    newB.fun();

    cout << endl
         << endl;

    // we can alias for employee :
    // struct emp emp1; // when we use alias , than we cannot use struct keyword.we simply do this:

    emp emp1;
    cout << emp1.Id << endl;
    cout << emp1.name << endl;
    cout << emp1.salary << endl;


    cout << endl
         << endl;

    //  union:
    union money m;
    m.car = 'c';
    m.pound = 455;
    m.rice = 412;
    cout << m.car << " " << m.pound << " " << m.rice << endl; // only rice's output will come.because in union we can only set one member at a time.

    cout << endl;

    // enum:
    cout << breakfast << endl; // 0 (by default)
    cout << lunch << endl;     // 1 (by default)
    cout << dinner << endl;    // 2 (by default)

    meal m1 = breakfast;
    cout << m1 << endl;
    return 0;
}