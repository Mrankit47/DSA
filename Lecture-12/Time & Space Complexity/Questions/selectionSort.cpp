#include<iostream>
using namespace std;

int selectionSort(int arr[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        int minInd = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[minInd])
            {
                minInd =j;
            }
        }
        swap(arr[i],arr[minInd]);
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={5,8,3,9,2,15,1,4};
    int size = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr,size);
    return 0;
}