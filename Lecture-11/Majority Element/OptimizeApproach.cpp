// moor's Algorithm
#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> arr)
{
    int n = arr.size();
    int freq=0, ans =0;
    for(int i=0; i<n; i++)
    {
        if(freq==0)
        {
            ans=arr[i];
        }
        if(ans==arr[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    //fot not given ans exist 
    // int count =0;
    // for(int val:arr)
    // {
    //     if(val==ans)
    //     {
    //         count++;
    //     }
    // }
    // if(count>n/2)
    // {
    //     return ans;
    // }
    // else
    // {
    //     return -1;
    // }
    return ans;
}

int main()
{
    vector<int> arr = {1,2,4,3,1};

    cout << majorityElement(arr);

    return 0;
}