// WAF to calculate sum & product of all numbers in an array.

#include<iostream>
using namespace std;

int sum ( int arr[], int size)
{
    int add = 0;
    for(int i=0; i<size; i++)
    {
        add +=arr[i];
    }
    return add;
}
long long product(int arr[], int size)
{
    long long pro = 1;
    for(int i=0; i<size; i++)
    {
        pro*=arr[i];
    }
    return pro;
}

int main()
{
    int arr[] = {5,7,9,66,54,32,34,56,77};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"sum of array is :"<<sum(arr,size)<<endl;

    cout<<"product of array is :"<<product(arr,size);
    return 0;
}