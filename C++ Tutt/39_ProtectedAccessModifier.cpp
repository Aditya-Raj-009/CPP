#include<iostream>
using namespace std;


/**                         Public derivation       Private derivation      Protected Derivation
 * 1. Private member:       Not inherit             Not inherit             Not inherit
 * 2. Protected member:     Protected               Private                 Protected
 * 3. Public member:        Public                  Private                 Protected
 */
class Base{
protected: 
int a;  // since this is protected, it can only be inherit and used by Derived class But cannot access by normal class.
private:
int b;


};

class Derive: protected Base{

};

int main(){

    Base b;
    Derive d;

// show error:
    // cout<<b.a<<endl;
    // cout<<d.a<<end;
}