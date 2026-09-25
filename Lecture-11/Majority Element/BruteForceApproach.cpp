// Leetcode question no 169
// bruteforceapproach

#include<iostream>
#include<vector>
using namespace std;

vector<int> majorityElement(vector<int>arr)
{
    int freq = 0,n=arr.size();
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                freq+=1;
            }
        }
    }
    if(freq>(n/2))
    {
        cout<<freq;
    }

}

int main()
{
    vector<int>arr = {1,2,2,1,1};
    majorityElement(arr);
}