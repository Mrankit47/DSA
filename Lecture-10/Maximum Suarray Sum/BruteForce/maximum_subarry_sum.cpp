#include<iostream>
using namespace std;


int main()
{
    int arr[] = {5,7,-9,3,4,-2,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int MaxSum = INT8_MIN;
    for(int st=0; st<size; st++)
    {
        int sum =0;
        for(int end=st; end<size; end++)
        {
                sum+=arr[end];
                MaxSum = max(sum,MaxSum);
        }
    }
    cout<<MaxSum;

    return 0;
}