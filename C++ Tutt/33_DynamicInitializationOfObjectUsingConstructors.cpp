#include <iostream>
using namespace std;

class BankDeposit
{
    int principal, year;
    float interestRate, returnValue;

public:
    BankDeposit(){};
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);

    void show(void);

    // you can call it directly:
    friend void add(BankDeposit b){
        cout<<b.year;
    }
};


BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p;
    year = y;
    interestRate = r;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + r);
    }
}
BankDeposit::BankDeposit(int p, int y, int r)
{
    principal = p;
    year = y;
    interestRate = float(r) / 100;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + r);
    }
}

void BankDeposit::show()
{
   
    

    cout << "The Principal amount was " << principal << endl
         << "Return value after " << year
         << " year is " << returnValue << endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y, R;
    float r;

    cout << "Enter the value of p, y and r" << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "Enter the value of p, y and r" << endl;
    cin >> p >> y >> r;
    bd2 = BankDeposit(p, y, r);
    bd2.show();

    bd3.show();
    
    return 0;
}