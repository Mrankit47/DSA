#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> val;
    val.push_back(77);
    val.push_back(33);
    val.push_back(66);
    val.push_back(22);
    val.push_back(11);

    cout<<val.size()<<endl;
    cout<<val.capacity()<<endl;
    
    return 0;
}