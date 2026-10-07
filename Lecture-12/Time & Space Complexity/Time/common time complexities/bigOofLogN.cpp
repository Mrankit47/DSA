// Binary Search 
// O (logn)

#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int target)
{
    int s=0,e=n-1;
    while (s<=e)
    {
        int mid = s +(e-s)/2;
        if(arr[mid]<target)
        {
            s=mid+1;
        }
        else if(arr[mid]>target)
        {
            e=mid-1;
        }
        else
        {
            return mid;
        }
    }
    
}
int main()
{
    int arr[]={2,5,8,10,13,25,43,55,77};
    int target=55;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<binarysearch(arr,n,target);
    return 0;
}