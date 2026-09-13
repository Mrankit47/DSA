// WAF to swap the max & min number of an array.

#include<iostream>
using namespace std;

void swapminmax(int arr[],int size)
{
    int min = INT16_MAX , minindx;
    int max = 0 , maxindx;

    for(int i=0; i<size; i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
            minindx = i;
        }
        if(max<arr[i])
        {
            max=arr[i];
            maxindx = i;
        }
    }
    swap(arr[minindx],arr[maxindx]);
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]= {7,4,9,80,1,65,23,88};
    int size = sizeof(arr)/sizeof(arr[0]);
    swapminmax(arr,size);
    return 0 ;
}