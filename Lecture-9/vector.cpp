#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> vec = {1,2,3};
    cout<<vec[0];
    vector<int> vect(5,6);
    cout<<vect[0]<<endl;

    for(int i : vect)
    {
        cout<<i<<" ";
    }
    return 0;
}