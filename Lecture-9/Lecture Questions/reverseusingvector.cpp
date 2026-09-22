// Reverse Array

#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int>&arr)
{
    int start=0,end=arr.size()-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    return arr;
}

int main()
{
    vector<int> arr = {4,6,8,32,65,2,21,9,67,98};
    arr=reverse(arr);
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}