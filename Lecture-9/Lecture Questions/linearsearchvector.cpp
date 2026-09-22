// Linear Search

#include<iostream>
#include<vector>
using namespace std;

void linear_search(vector<int>&arr,int targate)
{
    for(int val=0; val<arr.size(); val++)
    {
        if(arr[val]==targate)
        {
            cout<<val<<endl;
        }
    }
    
}
int main()
{
    vector<int> arr = {4,6,8,32,65,2,21};
    int targate = 32;
    linear_search(arr,targate);
    return 0;
}