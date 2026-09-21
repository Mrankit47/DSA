#include<iostream>
#include<vector>

using namespace std;

int unique(vector<int>&num)
{
    int ans = 0;
    for(int val: num)
    {
        ans^=val;
    }
    return ans;
}
int main()
{
    vector<int>num={1,2,4,1,2};
    cout<<unique(num);
    return 0;
}