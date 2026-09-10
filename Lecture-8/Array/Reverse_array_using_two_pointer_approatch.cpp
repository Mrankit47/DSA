#include<iostream>
using namespace std;

void reverseArray (int arr[],int size)
{
    int start=0,end=size-1;
    while (start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}
int main()
{
     int arr[]={4,8,6,9,2,4,5,7};
     int size = sizeof(arr)/sizeof(arr[0]);

     reverseArray(arr,size);

     for(int i=0; i<size; i++)
     {
        cout<<arr[i]<<" ";
     }
     return 0;
}