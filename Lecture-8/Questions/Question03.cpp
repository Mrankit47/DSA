// WAF to print all the unique values in an array.
#include<iostream>
using namespace std;

int unique(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        int count = 0;
        for(int j=0; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            cout<<arr[i]<<" ";
        }
    }

}

int main()
{
    int arr[] = {5,7,9,4,5,3,2,3,1,8,9,0,4,0};
    int size = sizeof(arr)/sizeof(arr[0]);

    unique(arr,size);
    return 0;

}