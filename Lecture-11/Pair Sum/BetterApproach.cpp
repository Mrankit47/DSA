// using better or best Approach
#include<iostream>
#include<vector>
using namespace std;

vector<int> pairsum(vector<int>arr,int target)
{
    vector<int>ans;
    int i=0,j=arr.size()-1;
    while(i<j)
    {
        int ps=arr[i]+arr[j];
        if(ps==target)
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        else if(ps>target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr ={2,7,11,15};
    int target = 9;
    vector<int> sum = pairsum(arr,target);
    cout<<"sum is : ["<<sum[0]<<","<<sum[1]<<"]";
}

