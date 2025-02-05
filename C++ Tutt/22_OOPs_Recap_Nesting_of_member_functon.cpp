#include<iostream>
#include<string>
using namespace std;

// C++:
/**
 * Initially called 'c with classes' by stroustroup
 * It is an extension of structures (in C)
 * Structures had limitations:
 * --> member are public
 * --> Cannot add methods
 * Classes are structures + more
 * Classes can have methods and properties.
 * structures in cpp are by default typdef (you don't have to use typedef
 *  keyword)
 * 
 * You can declare objects along with the class declartion:
 * class employee{
 * 
 * }harry,rohan,lovish;
*/



// Nesting of member function:

class binary{
    
    string s;
    public :
    void read(void);
    int chk_bin(void);
    void ones_comp(void);
    void display(void);

};

void binary::read(void)     // :: is called scope resolution operator.
{
    cout<<"Enter a binary number: "<<endl;
    cin>>s;
}
int binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
      if(s.at(i)!='0' && s.at(i)!='1')
      {
        return 0;
        exit(0);
      }
    }
    return 1;
    
}
void binary::ones_comp(void)
{
    int isbinary = chk_bin(); // nesting of member function..ie. calling function inside another function of same class.
    for(int i = 0; i<s.length() && isbinary;i++)
    {
        if(s.at(i)=='1')
        {
           s.at(i) = '0';
        }
        else{
            s.at(i) = '1';
        }
    }
    display();
    
}
void binary::display()
{
    cout<<s<<endl;
}
int main()
{
    binary b;
    b.read();
   if( b.chk_bin())
    {
        cout<<"correct formate"<<endl;
        b.ones_comp();
    }
    else{
        cout<<"Incorrect formate"<<endl;
    }
    
    return 0;
}