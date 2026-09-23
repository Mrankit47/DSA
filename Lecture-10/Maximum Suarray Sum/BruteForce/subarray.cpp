#include<iostream>
using namespace std;


int main()
{
    int arr[] = {5,7,9,3,4,2,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int st=0; st<size; st++)
    {
        for(int end=st; end<size; end++)
        {
            for(int i=st; i<=end; i++)
            {
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}