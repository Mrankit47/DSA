#include<iostream>
using namespace std;

int main()
{
    int num[] = {5,15,22,1,-15,24};
    int small = INT32_MAX;
    for(int i=0; i<sizeof(num)/sizeof(num[0]); i++)
    {
        small = min(num[i], small);
    }
    cout<<"smallest number of the array is : "<<small;
    
    return 0;
}