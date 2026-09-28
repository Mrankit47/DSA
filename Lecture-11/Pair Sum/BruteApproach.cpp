// leetcode question no 1
// return pair in sorted array with target sum 

#include<iostream>
#include<vector>
using namespace std;

vector<int> pairsum(vector<int> &arr,int target)
{
    vector<int> val;
    for(int i=0; i<arr.size(); i++)
    {
        for(int j=i+1; j<arr.size(); j++)
        {
            if((arr[i]+arr[j])==target)
            {
                
                val.push_back(i);
                val.push_back(j);
                return val;
            }
        }
    }
    return val;
    
}

int main()
{
    int target = 17;
    vector<int> arr = {2,7,11,15};


    vector<int> sum = pairsum(arr,target);
    cout<<"sum is : ["<<sum[0]<<","<<sum[1]<<"]";
}