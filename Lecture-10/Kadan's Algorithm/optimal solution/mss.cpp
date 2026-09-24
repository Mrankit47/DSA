// Leetcode question no 53
// Maximum subarray
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {5,7,-9,3,4,-2,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 0, maxsum = INT8_MIN;
    for(int i=0; i<size; i++)
    {
        sum+=arr[i];
        maxsum=max(sum,maxsum);
        if(sum<0)
        {
            sum=0;
        }
    }
    cout<<"max subarray sum : "<<maxsum;
    return 0;
}