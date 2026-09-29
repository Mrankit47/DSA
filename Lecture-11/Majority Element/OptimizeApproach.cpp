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
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 2,4, 3, 3, 3,4,4,4,4,4};

    cout << majorityElement(arr);

    return 0;
}