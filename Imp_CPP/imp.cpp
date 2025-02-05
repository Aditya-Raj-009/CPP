/*

Calculating the most significant digit: To calculate the most significant digit of
 any number log can be directly used to calculate it. We can calculate the number
 of digits and then divide the number by 10^(number of digits-1)

Suppose the number is N then
Let int K = log10(N); // number of digits in a number=log10(N)+1
And int X = pow(10, K);
Then int ans=N/X will be the most significant digit

*/
#include <bits/stdc++.h>
using namespace std;

int MSD(int n)
{
    if (n == 0)
        return 0;
    int k = log10(n);   // number of digit of n.
    cout<<k<<endl;
    int x = pow(10, k);
    int ans = n / x;
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << MSD(n) << endl;
    cout<<ceil(log10(n))<<endl;
    return 0;
}

/*
Calculating the number of digits directly: 
To calculate the number of digits in a number, instead of looping you can efficiently use log :

Number of digits in N =floor(log10(N)) + 1; 



// C++ Program to find whether a
// no is a power of two
#include <bits/stdc++.h>
using namespace std;
 
// Function to check if x is power of 2
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
 
    return (ceil(log2(n)) == floor(log2(n)));
}
*/