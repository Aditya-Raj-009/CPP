#include<iostream>
using namespace std;

long long maxSum(int* arr, int size){
    long long maxSum = INT_MIN;
    long long currSum = 0;
    int i = 0;
    while(i<size){
        currSum+=arr[i++];
        maxSum = max(currSum,maxSum);
        if(currSum<0){
            currSum=0;
        }
        
    }
    return maxSum;
}
int main(int argc, char const *argv[])
{
    int arr[] = {-1,2,-3,-4,3,6,5,-12,-6,8,3};
    long long msum = maxSum(arr,sizeof(arr)/sizeof(int));
    cout<<"Max sum of subarray: "<<msum<<endl;

    return 0;
}
