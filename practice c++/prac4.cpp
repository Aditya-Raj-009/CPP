#include<iostream>
using namespace std;


int diff_eveOdd(const string &num){

    int odd = 0, even = 0;

    for(int i = 0; i<num.size(); i++){
        int digit = num[i] - '0';
        if(i%2 == 0){
            odd+=digit;
        }else{
            even+=digit;
        }
    }
    return abs(odd-even);
}
int add(int x, int y){
    while (y!=0)
    {
       int carry = x&y;
       x^=y;
       y = carry<<1;
    }
    return x;
}
int multiply(int x,int y)
{
    int res = 0;

    while (y!=0)
    {
       if(y&1){
        res = add(res,x);
       }
       x<<=1;
       y>>=1;
    }
    return res;
    
}

int factorial(int n){
    if(n == 0 || n == 1)
    {
        return 1;
    }
    return multiply(n,factorial(n-1));
}
int main(){


cout<<diff_eveOdd("125")<<endl;
    return 0;
}