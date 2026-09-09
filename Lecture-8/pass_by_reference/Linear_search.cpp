#include<iostream>
using namespace std;

int linera_search(int arr[],int size,int target)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==target)
        {
            return i;
        }        
    }
    return -1;
}
int main()
{
    int target = 8;
    int arr[]={4,2,7,8,1,2,5};
    int size =sizeof(arr)/sizeof(arr[0]);

    cout<<"target index is : "<<linera_search(arr,size,target);
    return 0;
}