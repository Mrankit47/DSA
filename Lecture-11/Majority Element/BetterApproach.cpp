#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int majorityElement(vector<int> arr)
{
    int n = arr.size();
    sort(arr.begin(),arr.end());
    int freq=1,ans=arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]==arr[i-1])
        {
            freq++;
        }
        else
        {
            freq=1; 
            ans=arr[i];
        }
        if(freq>n/2)
        {
            return ans;
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